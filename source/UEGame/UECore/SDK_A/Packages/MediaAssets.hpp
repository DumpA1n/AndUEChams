#pragma once

#include "../CoreUObject_classes.hpp"
#include "AudioMixer.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MediaAssets
// Enums: 9
// Structs: 2
// Classes: 13

struct FLatentActionInfo;
struct FMediaPlayerOptions;
struct FSoundAttenuationSettings;
struct FMediaCaptureDevice;
struct FMediaSoundComponentSpectralData;
struct UMediaSource;
struct UBaseMediaSource;
struct UFileMediaSource;
struct UMediaBlueprintFunctionLibrary;
struct UMediaComponent;
struct UMediaTimeStampInfo;
struct UMediaPlayer;
struct UMediaPlaylist;
struct UMediaSoundComponent;
struct UMediaTexture;
struct UPlatformMediaSource;
struct UStreamMediaSource;
struct UTimeSynchronizableMediaSource;

// Object: Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EPauseAtStartState
enum class EPauseAtStartState : uint8_t
{
	None = 0,
	WaitSeekComplete = 1,
	WaitSampleChange = 2,
	EPauseAtStartState_MAX = 3
};

// Object: Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7
};

// Object: Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	Min_64 = 0,
	Small_256 = 1,
	Medium_512 = 2,
	Large_1024 = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};

// Object: Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3
};

// Object: Enum MediaAssets.MediaTextureOrientation
enum class EMediaTextureOrientation : uint8_t
{
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4
};

// Object: Enum MediaAssets.MediaTextureOutputFormat
enum class EMediaTextureOutputFormat : uint8_t
{
	MTOF_Default = 0,
	MTOF_SRGB_LINOUT = 1,
	MTOF_MAX = 2
};

// Object: ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x28 (Inherited: 0x0)
struct FMediaCaptureDevice
{
	struct FText DisplayName; // 0x0(0x18)
	struct FString URL; // 0x18(0x10)
};

// Object: ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// Size: 0x8 (Inherited: 0x0)
struct FMediaSoundComponentSpectralData
{
	float FrequencyHz; // 0x0(0x4)
	float Magnitude; // 0x4(0x4)
};

// Object: Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMediaSource, "MediaSource")

	uint8_t Pad_0x28[0x58]; // 0x28(0x58)

	// Object: Function MediaAssets.MediaSource.Validate
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2655b0
	// Params: [ Num(1) Size(0x1) ]
	bool Validate();

	// Object: Function MediaAssets.MediaSource.SetMediaOptionString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2651c8
	// Params: [ Num(2) Size(0x18) ]
	void SetMediaOptionString(const struct FName& Key, struct FString Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionInt64
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2652cc
	// Params: [ Num(2) Size(0x10) ]
	void SetMediaOptionInt64(const struct FName& Key, int64_t Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2653c0
	// Params: [ Num(2) Size(0xC) ]
	void SetMediaOptionFloat(const struct FName& Key, float Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2654b4
	// Params: [ Num(2) Size(0x9) ]
	void SetMediaOptionBool(const struct FName& Key, bool Value);

	// Object: Function MediaAssets.MediaSource.GetUrl
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2655f0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();
};

// Object: Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UBaseMediaSource, "BaseMediaSource")

	struct FName PlayerName; // 0x80(0x8)
};

// Object: Class MediaAssets.FileMediaSource
// Size: 0xC0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UFileMediaSource, "FileMediaSource")

	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FString FallbackStreamUrl; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)

	// Object: Function MediaAssets.FileMediaSource.SetFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb260edc
	// Params: [ Num(1) Size(0x10) ]
	void SetFilePath(struct FString Path);
};

// Object: Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMediaBlueprintFunctionLibrary, "MediaBlueprintFunctionLibrary")

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2610d0
	// Params: [ Num(2) Size(0x14) ]
	static void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb261288
	// Params: [ Num(2) Size(0x14) ]
	static void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb26137c
	// Params: [ Num(2) Size(0x14) ]
	static void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);
};

// Object: Class MediaAssets.MediaComponent
// Size: 0xF0 (Inherited: 0xE0)
struct UMediaComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMediaComponent, "MediaComponent")

	struct UMediaTexture* MediaTexture; // 0xE0(0x8)
	struct UMediaPlayer* MediaPlayer; // 0xE8(0x8)

	// Object: Function MediaAssets.MediaComponent.GetMediaTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb261478
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaTexture* GetMediaTexture();

	// Object: Function MediaAssets.MediaComponent.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2614ac
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();
};

// Object: Class MediaAssets.MediaTimeStampInfo
// Size: 0x38 (Inherited: 0x28)
struct UMediaTimeStampInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMediaTimeStampInfo, "MediaTimeStampInfo")

	struct FTimespan Time; // 0x28(0x8)
	int64_t SequenceIndex; // 0x30(0x8)
};

// Object: Class MediaAssets.MediaPlayer
// Size: 0x150 (Inherited: 0x28)
struct UMediaPlayer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMediaPlayer, "MediaPlayer")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FMulticastInlineDelegate OnEndReached; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMediaEventString; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x80(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x90(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0xA0(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0xB0(0x10)
	struct FTimespan CacheAhead; // 0xC0(0x8)
	struct FTimespan CacheBehind; // 0xC8(0x8)
	struct FTimespan CacheBehindGame; // 0xD0(0x8)
	bool NativeAudioOut; // 0xD8(0x1)
	bool PlayOnOpen; // 0xD9(0x1)
	uint8_t Shuffle : 1; // 0xDA(0x1), Mask(0x1)
	uint8_t Loop : 1; // 0xDA(0x1), Mask(0x2)
	uint8_t BitPad_0xDA_2 : 6; // 0xDA(0x1)
	uint8_t Pad_0xDB[0x5]; // 0xDB(0x5)
	struct UMediaPlaylist* Playlist; // 0xE0(0x8)
	int32_t PlaylistIndex; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct FTimespan TimeDelay; // 0xF0(0x8)
	float HorizontalFieldOfView; // 0xF8(0x4)
	float VerticalFieldOfView; // 0xFC(0x4)
	struct FRotator ViewRotation; // 0x100(0xC)
	uint8_t Pad_0x10C[0x2C]; // 0x10C(0x2C)
	struct FGuid PlayerGUID; // 0x138(0x10)
	uint8_t Pad_0x148[0x8]; // 0x148(0x8)

	// Object: Function MediaAssets.MediaPlayer.SupportsSeeking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2615bc
	// Params: [ Num(1) Size(0x1) ]
	bool SupportsSeeking();

	// Object: Function MediaAssets.MediaPlayer.SupportsScrubbing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2615f4
	// Params: [ Num(1) Size(0x1) ]
	bool SupportsScrubbing();

	// Object: Function MediaAssets.MediaPlayer.SupportsRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26162c
	// Params: [ Num(3) Size(0x6) ]
	bool SupportsRate(float Rate, bool Unthinned);

	// Object: Function MediaAssets.MediaPlayer.SetViewRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb2617cc
	// Params: [ Num(3) Size(0xE) ]
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);

	// Object: Function MediaAssets.MediaPlayer.SetViewField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2618d8
	// Params: [ Num(4) Size(0xA) ]
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);

	// Object: Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261a14
	// Params: [ Num(4) Size(0xD) ]
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);

	// Object: Function MediaAssets.MediaPlayer.SetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261b48
	// Params: [ Num(4) Size(0xD) ]
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.SetTimeDelay
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb261728
	// Params: [ Num(1) Size(0x8) ]
	void SetTimeDelay(struct FTimespan TimeDelay);

	// Object: Function MediaAssets.MediaPlayer.SetRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261d2c
	// Params: [ Num(2) Size(0x5) ]
	bool SetRate(float Rate);

	// Object: Function MediaAssets.MediaPlayer.SetNativeVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261c78
	// Params: [ Num(2) Size(0x5) ]
	bool SetNativeVolume(float Volume);

	// Object: Function MediaAssets.MediaPlayer.SetMediaOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261de0
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaOptions(struct UMediaSource* Options);

	// Object: Function MediaAssets.MediaPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92c7598
	// Params: [ Num(2) Size(0x2) ]
	bool SetLooping(bool Looping);

	// Object: Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261e88
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredPlayerName(struct FName PlayerName);

	// Object: Function MediaAssets.MediaPlayer.SetBlockOnTime
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb261f30
	// Params: [ Num(1) Size(0x8) ]
	void SetBlockOnTime(const struct FTimespan& Time);

	// Object: Function MediaAssets.MediaPlayer.SelectTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb261fe0
	// Params: [ Num(3) Size(0x9) ]
	bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.Seek
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb2620d4
	// Params: [ Num(2) Size(0x9) ]
	bool Seek(const struct FTimespan& Time);

	// Object: Function MediaAssets.MediaPlayer.Rewind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb262190
	// Params: [ Num(1) Size(0x1) ]
	bool Rewind();

	// Object: Function MediaAssets.MediaPlayer.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb263d90
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function MediaAssets.MediaPlayer.Reopen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2621c8
	// Params: [ Num(1) Size(0x1) ]
	bool Reopen();

	// Object: Function MediaAssets.MediaPlayer.Previous
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb262200
	// Params: [ Num(1) Size(0x1) ]
	bool Previous();

	// Object: Function MediaAssets.MediaPlayer.PlayAndSeek
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb262238
	// Params: [ Num(0) Size(0x0) ]
	void PlayAndSeek();

	// Object: Function MediaAssets.MediaPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f06620
	// Params: [ Num(1) Size(0x1) ]
	bool Play();

	// Object: Function MediaAssets.MediaPlayer.PauseAtStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb263ce0
	// Params: [ Num(0) Size(0x0) ]
	void PauseAtStart();

	// Object: Function MediaAssets.MediaPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f20f78
	// Params: [ Num(1) Size(0x1) ]
	bool Pause();

	// Object: Function MediaAssets.MediaPlayer.OpenWithPauseAtStart
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb263bd0
	// Params: [ Num(2) Size(0x38) ]
	void OpenWithPauseAtStart(struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& PlayerOptions);

	// Object: Function MediaAssets.MediaPlayer.OpenUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb26224c
	// Params: [ Num(2) Size(0x11) ]
	bool OpenUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb262500
	// Params: [ Num(3) Size(0x39) ]
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);

	// Object: Function MediaAssets.MediaPlayer.OpenSourceLatent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb262310
	// Params: [ Num(5) Size(0x59) ]
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool& bSuccess);

	// Object: Function MediaAssets.MediaPlayer.OpenSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x931c314
	// Params: [ Num(2) Size(0x9) ]
	bool OpenSource(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb26261c
	// Params: [ Num(3) Size(0xD) ]
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index);

	// Object: Function MediaAssets.MediaPlayer.OpenPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb262710
	// Params: [ Num(2) Size(0x9) ]
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist);

	// Object: Function MediaAssets.MediaPlayer.OpenFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95626c4
	// Params: [ Num(2) Size(0x11) ]
	bool OpenFile(struct FString FilePath);

	// Object: Function MediaAssets.MediaPlayer.Next
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2627c8
	// Params: [ Num(1) Size(0x1) ]
	bool Next();

	// Object: Function MediaAssets.MediaPlayer.IsReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8bc5428
	// Params: [ Num(1) Size(0x1) ]
	bool IsReady();

	// Object: Function MediaAssets.MediaPlayer.IsPreparing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262800
	// Params: [ Num(1) Size(0x1) ]
	bool IsPreparing();

	// Object: Function MediaAssets.MediaPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262838
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function MediaAssets.MediaPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262870
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();

	// Object: Function MediaAssets.MediaPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2628a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsLooping();

	// Object: Function MediaAssets.MediaPlayer.IsConnecting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2628e0
	// Params: [ Num(1) Size(0x1) ]
	bool IsConnecting();

	// Object: Function MediaAssets.MediaPlayer.IsClosed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x92f6d8c
	// Params: [ Num(1) Size(0x1) ]
	bool IsClosed();

	// Object: Function MediaAssets.MediaPlayer.IsBuffering
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262918
	// Params: [ Num(1) Size(0x1) ]
	bool IsBuffering();

	// Object: Function MediaAssets.MediaPlayer.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262950
	// Params: [ Num(1) Size(0x1) ]
	bool HasError();

	// Object: Function MediaAssets.MediaPlayer.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2629bc
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetViewRotation();

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2629f8
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262b20
	// Params: [ Num(3) Size(0x18) ]
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262c0c
	// Params: [ Num(3) Size(0xC) ]
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262cf8
	// Params: [ Num(3) Size(0x10) ]
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262de4
	// Params: [ Num(3) Size(0xC) ]
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262ed0
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalFieldOfView();

	// Object: Function MediaAssets.MediaPlayer.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262f04
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function MediaAssets.MediaPlayer.GetTrackLanguage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262f88
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2630b0
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTrackDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2631a0
	// Params: [ Num(3) Size(0x20) ]
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTimeStamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2632f8
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaTimeStampInfo* GetTimeStamp();

	// Object: Function MediaAssets.MediaPlayer.GetTimeDelay
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb262988
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTimeDelay();

	// Object: Function MediaAssets.MediaPlayer.GetTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26332c
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTime();

	// Object: Function MediaAssets.MediaPlayer.GetTicks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8378928
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetTicks();

	// Object: Function MediaAssets.MediaPlayer.GetSupportedRates
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb263360
	// Params: [ Num(2) Size(0x11) ]
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned);

	// Object: Function MediaAssets.MediaPlayer.GetStateToString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb263cf4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetStateToString();

	// Object: Function MediaAssets.MediaPlayer.GetSelectedTrack
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26346c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);

	// Object: Function MediaAssets.MediaPlayer.GetRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26351c
	// Params: [ Num(1) Size(0x4) ]
	float GetRate();

	// Object: Function MediaAssets.MediaPlayer.GetPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb263550
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlaylistIndex();

	// Object: Function MediaAssets.MediaPlayer.GetPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26356c
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlaylist* GetPlaylist();

	// Object: Function MediaAssets.MediaPlayer.GetPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb263588
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetPlayerName();

	// Object: Function MediaAssets.MediaPlayer.GetNumTracks
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2636ac
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumTracks(EMediaPlayerTrack TrackType);

	// Object: Function MediaAssets.MediaPlayer.GetNumTrackFormats
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2635bc
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetMediaName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26375c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetMediaName();

	// Object: Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb263834
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalFieldOfView();

	// Object: Function MediaAssets.MediaPlayer.GetDuration
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb263868
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetDuration();

	// Object: Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26389c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDesiredPlayerName();

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2638d0
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2639f8
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb263ae4
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9de0d90
	// Params: [ Num(0) Size(0x0) ]
	void Close();

	// Object: Function MediaAssets.MediaPlayer.CanPlayUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb263da4
	// Params: [ Num(2) Size(0x11) ]
	bool CanPlayUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlayer.CanPlaySource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb263e68
	// Params: [ Num(2) Size(0x9) ]
	bool CanPlaySource(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlayer.CanPause
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8bad1ec
	// Params: [ Num(1) Size(0x1) ]
	bool CanPause();
};

// Object: Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMediaPlaylist, "MediaPlaylist")

	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	// Object: Function MediaAssets.MediaPlaylist.Replace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264154
	// Params: [ Num(3) Size(0x11) ]
	bool Replace(int32_t Index, struct UMediaSource* Replacement);

	// Object: Function MediaAssets.MediaPlaylist.RemoveAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264248
	// Params: [ Num(2) Size(0x5) ]
	bool RemoveAt(int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.Remove
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2642fc
	// Params: [ Num(2) Size(0x9) ]
	bool Remove(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlaylist.Num
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2643b0
	// Params: [ Num(1) Size(0x4) ]
	int32_t Num();

	// Object: Function MediaAssets.MediaPlaylist.Insert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2643cc
	// Params: [ Num(2) Size(0xC) ]
	void Insert(struct UMediaSource* MediaSource, int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.GetRandom
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2644b4
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetRandom(int32_t& OutIndex);

	// Object: Function MediaAssets.MediaPlaylist.GetPrevious
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb264570
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetPrevious(int32_t& InOutIndex);

	// Object: Function MediaAssets.MediaPlaylist.GetNext
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb26462c
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetNext(int32_t& InOutIndex);

	// Object: Function MediaAssets.MediaPlaylist.Get
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2646e8
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* Get(int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.AddUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264798
	// Params: [ Num(2) Size(0x11) ]
	bool AddUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlaylist.AddFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb26485c
	// Params: [ Num(2) Size(0x11) ]
	bool AddFile(struct FString FilePath);

	// Object: Function MediaAssets.MediaPlaylist.Add
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264920
	// Params: [ Num(2) Size(0x9) ]
	bool Add(struct UMediaSource* MediaSource);
};

// Object: Class MediaAssets.MediaSoundComponent
// Size: 0x910 (Inherited: 0x6F0)
struct UMediaSoundComponent : USynthComponent
{
	DEFINE_UE_CLASS_HELPERS(UMediaSoundComponent, "MediaSoundComponent")

	EMediaSoundChannels Channels; // 0x6F0(0x4)
	bool DynamicRateAdjustment; // 0x6F4(0x1)
	uint8_t Pad_0x6F5[0x3]; // 0x6F5(0x3)
	float RateAdjustmentFactor; // 0x6F8(0x4)
	struct FFloatRange RateAdjustmentRange; // 0x6FC(0x10)
	uint8_t Pad_0x70C[0x4]; // 0x70C(0x4)
	struct UMediaPlayer* MediaPlayer; // 0x710(0x8)
	uint8_t Pad_0x718[0x1F8]; // 0x718(0x1F8)

	// Object: Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264dec
	// Params: [ Num(2) Size(0x11) ]
	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);

	// Object: Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264fe0
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264b20
	// Params: [ Num(2) Size(0x8) ]
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264f30
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264c04
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);

	// Object: Function MediaAssets.MediaSoundComponent.GetSpectralData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264d50
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();

	// Object: Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb264cb4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData();

	// Object: Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb265088
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();

	// Object: Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb264aec
	// Params: [ Num(1) Size(0x4) ]
	float GetEnvelopeValue();

	// Object: Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb2650bc
	// Params: [ Num(2) Size(0x3A1) ]
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings);
};

// Object: Class MediaAssets.MediaTexture
// Size: 0x1B8 (Inherited: 0xE0)
struct UMediaTexture : UTexture
{
	DEFINE_UE_CLASS_HELPERS(UMediaTexture, "MediaTexture")

	uint8_t AddressX; // 0xE0(0x1)
	uint8_t AddressY; // 0xE1(0x1)
	bool AutoClear; // 0xE2(0x1)
	uint8_t Pad_0xE3[0x1]; // 0xE3(0x1)
	struct FLinearColor ClearColor; // 0xE4(0x10)
	bool EnableGenMips; // 0xF4(0x1)
	uint8_t NumMips; // 0xF5(0x1)
	bool NewStyleOutput; // 0xF6(0x1)
	uint8_t OutputFormat; // 0xF7(0x1)
	float CurrentAspectRatio; // 0xF8(0x4)
	uint8_t CurrentOrientation; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	struct UMediaPlayer* MediaPlayer; // 0x100(0x8)
	uint8_t Pad_0x108[0xB0]; // 0x108(0xB0)

	// Object: Function MediaAssets.MediaTexture.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb26577c
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer);

	// Object: Function MediaAssets.MediaTexture.GetWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb265824
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWidth();

	// Object: Function MediaAssets.MediaTexture.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb265858
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();

	// Object: Function MediaAssets.MediaTexture.GetHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb26588c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHeight();

	// Object: Function MediaAssets.MediaTexture.GetAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2658c0
	// Params: [ Num(1) Size(0x4) ]
	float GetAspectRatio();
};

// Object: Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UPlatformMediaSource, "PlatformMediaSource")

	struct UMediaSource* MediaSource; // 0x80(0x8)
};

// Object: Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UStreamMediaSource, "StreamMediaSource")

	struct FString StreamUrl; // 0x88(0x10)
};

// Object: Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UTimeSynchronizableMediaSource, "TimeSynchronizableMediaSource")

	bool bUseTimeSynchronization; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t FrameDelay; // 0x8C(0x4)
	double TimeDelay; // 0x90(0x8)
};

} // namespace SDK
