#pragma once

#include "../CoreUObject_classes.hpp"
#include "AudioMixer.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MediaAssets
// Enums: 6
// Structs: 2
// Classes: 11

enum class ETextureAddress : uint8_t;
struct FLatentActionInfo;
struct FMediaPlayerOptions;
struct FSoundAttenuationSettings;
struct FMediaCaptureDevice;
struct FMediaSoundComponentSpectralData;
struct UMediaSource;
struct UBaseMediaSource;
struct UFileMediaSource;
struct UMediaBlueprintFunctionLibrary;
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
	// Offset: 0x175999ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Validate();

	// Object: Function MediaAssets.MediaSource.SetMediaOptionString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175998b4
	// Params: [ Num(2) Size(0x18) ]
	void SetMediaOptionString(const struct FName& Key, struct FString Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionInt64
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175997c4
	// Params: [ Num(2) Size(0x10) ]
	void SetMediaOptionInt64(const struct FName& Key, int64_t Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175996d4
	// Params: [ Num(2) Size(0xC) ]
	void SetMediaOptionFloat(const struct FName& Key, float Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175995dc
	// Params: [ Num(2) Size(0x9) ]
	void SetMediaOptionBool(const struct FName& Key, uint8_t Value);

	// Object: Function MediaAssets.MediaSource.GetUrl
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1759953c
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
// Size: 0xB0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource
{
	DEFINE_UE_CLASS_HELPERS(UFileMediaSource, "FileMediaSource")

	struct FString FilePath; // 0x88(0x10)
	uint8_t PrecacheFile : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x17]; // 0x99(0x17)

	// Object: Function MediaAssets.FileMediaSource.SetFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175951c0
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
	// Offset: 0x1759558c
	// Params: [ Num(2) Size(0x14) ]
	static void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1759549c
	// Params: [ Num(2) Size(0x14) ]
	static void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175953ac
	// Params: [ Num(2) Size(0x14) ]
	static void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);
};

// Object: Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMediaPlayer, "MediaPlayer")

	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xA8(0x8)
	struct FTimespan CacheBehind; // 0xB0(0x8)
	struct FTimespan CacheBehindGame; // 0xB8(0x8)
	uint8_t NativeAudioOut : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t PlayOnOpen : 1; // 0xC1(0x1), Mask(0x1)
	uint8_t BitPad_0xC1_1 : 7; // 0xC1(0x1)
	uint8_t Shuffle : 1; // 0xC2(0x1), Mask(0x1)
	uint8_t Loop : 1; // 0xC2(0x1), Mask(0x2)
	uint8_t BitPad_0xC2_2 : 6; // 0xC2(0x1)
	uint8_t Pad_0xC3[0x5]; // 0xC3(0x5)
	struct UMediaPlaylist* Playlist; // 0xC8(0x8)
	int32_t PlaylistIndex; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	struct FTimespan TimeDelay; // 0xD8(0x8)
	float HorizontalFieldOfView; // 0xE0(0x4)
	float VerticalFieldOfView; // 0xE4(0x4)
	struct FRotator ViewRotation; // 0xE8(0xC)
	uint8_t Pad_0xF4[0x2C]; // 0xF4(0x2C)
	struct FGuid PlayerGUID; // 0x120(0x10)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)

	// Object: Function MediaAssets.MediaPlayer.SupportsSeeking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175980a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SupportsSeeking();

	// Object: Function MediaAssets.MediaPlayer.SupportsScrubbing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1759806c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SupportsScrubbing();

	// Object: Function MediaAssets.MediaPlayer.SupportsRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17597f78
	// Params: [ Num(3) Size(0x6) ]
	uint8_t SupportsRate(float Rate, uint8_t Unthinned);

	// Object: Function MediaAssets.MediaPlayer.SetViewRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x17597e70
	// Params: [ Num(3) Size(0xE) ]
	uint8_t SetViewRotation(const struct FRotator& Rotation, uint8_t Absolute);

	// Object: Function MediaAssets.MediaPlayer.SetViewField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597d40
	// Params: [ Num(4) Size(0xA) ]
	uint8_t SetViewField(float Horizontal, float Vertical, uint8_t Absolute);

	// Object: Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597c18
	// Params: [ Num(4) Size(0xD) ]
	uint8_t SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);

	// Object: Function MediaAssets.MediaPlayer.SetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597af4
	// Params: [ Num(4) Size(0xD) ]
	uint8_t SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.SetTimeDelay
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x17597a54
	// Params: [ Num(1) Size(0x8) ]
	void SetTimeDelay(struct FTimespan TimeDelay);

	// Object: Function MediaAssets.MediaPlayer.SetRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175979a4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t SetRate(float Rate);

	// Object: Function MediaAssets.MediaPlayer.SetNativeVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175978f4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t SetNativeVolume(float Volume);

	// Object: Function MediaAssets.MediaPlayer.SetMediaOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597850
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaOptions(struct UMediaSource* Options);

	// Object: Function MediaAssets.MediaPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597798
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SetLooping(uint8_t Looping);

	// Object: Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175976f4
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredPlayerName(struct FName PlayerName);

	// Object: Function MediaAssets.MediaPlayer.SetBlockOnTime
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x17597644
	// Params: [ Num(1) Size(0x8) ]
	void SetBlockOnTime(const struct FTimespan& Time);

	// Object: Function MediaAssets.MediaPlayer.SelectTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597558
	// Params: [ Num(3) Size(0x9) ]
	uint8_t SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.Seek
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1759749c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Seek(const struct FTimespan& Time);

	// Object: Function MediaAssets.MediaPlayer.Rewind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597464
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Rewind();

	// Object: Function MediaAssets.MediaPlayer.Reopen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1759742c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Reopen();

	// Object: Function MediaAssets.MediaPlayer.Previous
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175973f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Previous();

	// Object: Function MediaAssets.MediaPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175973bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Play();

	// Object: Function MediaAssets.MediaPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17597384
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Pause();

	// Object: Function MediaAssets.MediaPlayer.OpenUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175972cc
	// Params: [ Num(2) Size(0x11) ]
	uint8_t OpenUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175971b4
	// Params: [ Num(3) Size(0x39) ]
	uint8_t OpenSourceWithOptions(struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);

	// Object: Function MediaAssets.MediaPlayer.OpenSourceLatent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x17596fd0
	// Params: [ Num(5) Size(0x59) ]
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, uint8_t& bSuccess);

	// Object: Function MediaAssets.MediaPlayer.OpenSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17596f20
	// Params: [ Num(2) Size(0x9) ]
	uint8_t OpenSource(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17596e34
	// Params: [ Num(3) Size(0xD) ]
	uint8_t OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index);

	// Object: Function MediaAssets.MediaPlayer.OpenPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17596d80
	// Params: [ Num(2) Size(0x9) ]
	uint8_t OpenPlaylist(struct UMediaPlaylist* InPlaylist);

	// Object: Function MediaAssets.MediaPlayer.OpenFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17596cc8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t OpenFile(struct FString FilePath);

	// Object: Function MediaAssets.MediaPlayer.Next
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17596c90
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Next();

	// Object: Function MediaAssets.MediaPlayer.IsReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596c58
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReady();

	// Object: Function MediaAssets.MediaPlayer.IsPreparing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596c20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPreparing();

	// Object: Function MediaAssets.MediaPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596be8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function MediaAssets.MediaPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596bb0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function MediaAssets.MediaPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596b78
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLooping();

	// Object: Function MediaAssets.MediaPlayer.IsConnecting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596b40
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsConnecting();

	// Object: Function MediaAssets.MediaPlayer.IsClosed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596b08
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsClosed();

	// Object: Function MediaAssets.MediaPlayer.IsBuffering
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596ad0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsBuffering();

	// Object: Function MediaAssets.MediaPlayer.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596a98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasError();

	// Object: Function MediaAssets.MediaPlayer.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596a60
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetViewRotation();

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596944
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596860
	// Params: [ Num(3) Size(0x18) ]
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1759677c
	// Params: [ Num(3) Size(0xC) ]
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596698
	// Params: [ Num(3) Size(0x10) ]
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175965b4
	// Params: [ Num(3) Size(0xC) ]
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596580
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalFieldOfView();

	// Object: Function MediaAssets.MediaPlayer.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175964fc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function MediaAssets.MediaPlayer.GetTrackLanguage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175963e0
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175962f8
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTrackDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175961a4
	// Params: [ Num(3) Size(0x20) ]
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTimeDelay
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17596170
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTimeDelay();

	// Object: Function MediaAssets.MediaPlayer.GetTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1759613c
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTime();

	// Object: Function MediaAssets.MediaPlayer.GetSupportedRates
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1759603c
	// Params: [ Num(2) Size(0x11) ]
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, uint8_t Unthinned);

	// Object: Function MediaAssets.MediaPlayer.GetSelectedTrack
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595f90
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);

	// Object: Function MediaAssets.MediaPlayer.GetRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595f5c
	// Params: [ Num(1) Size(0x4) ]
	float GetRate();

	// Object: Function MediaAssets.MediaPlayer.GetPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595f40
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlaylistIndex();

	// Object: Function MediaAssets.MediaPlayer.GetPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595f24
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlaylist* GetPlaylist();

	// Object: Function MediaAssets.MediaPlayer.GetPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595ef0
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetPlayerName();

	// Object: Function MediaAssets.MediaPlayer.GetNumTracks
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595e44
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumTracks(EMediaPlayerTrack TrackType);

	// Object: Function MediaAssets.MediaPlayer.GetNumTrackFormats
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595d5c
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetMediaName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595c84
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetMediaName();

	// Object: Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595c50
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetLastVideoSampleProcessedTime();

	// Object: Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595c1c
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetLastAudioSampleProcessedTime();

	// Object: Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595be8
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalFieldOfView();

	// Object: Function MediaAssets.MediaPlayer.GetDuration
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595bb4
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetDuration();

	// Object: Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595b80
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDesiredPlayerName();

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595a64
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17595980
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1759589c
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17595888
	// Params: [ Num(0) Size(0x0) ]
	void Close();

	// Object: Function MediaAssets.MediaPlayer.CanPlayUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175957d0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CanPlayUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlayer.CanPlaySource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17595720
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CanPlaySource(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlayer.CanPause
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x175956e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanPause();
};

// Object: Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMediaPlaylist, "MediaPlaylist")

	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	// Object: Function MediaAssets.MediaPlaylist.Replace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17598b18
	// Params: [ Num(3) Size(0x11) ]
	uint8_t Replace(int32_t Index, struct UMediaSource* Replacement);

	// Object: Function MediaAssets.MediaPlaylist.RemoveAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17598a68
	// Params: [ Num(2) Size(0x5) ]
	uint8_t RemoveAt(int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.Remove
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175989b8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Remove(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlaylist.Num
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1759899c
	// Params: [ Num(1) Size(0x4) ]
	int32_t Num();

	// Object: Function MediaAssets.MediaPlaylist.Insert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175988bc
	// Params: [ Num(2) Size(0xC) ]
	void Insert(struct UMediaSource* MediaSource, int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.GetRandom
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x17598800
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetRandom(int32_t& OutIndex);

	// Object: Function MediaAssets.MediaPlaylist.GetPrevious
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x17598744
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetPrevious(int32_t& InOutIndex);

	// Object: Function MediaAssets.MediaPlaylist.GetNext
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x17598688
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetNext(int32_t& InOutIndex);

	// Object: Function MediaAssets.MediaPlaylist.Get
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175985dc
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* Get(int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.AddUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17598524
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AddUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlaylist.AddFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1759846c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AddFile(struct FString FilePath);

	// Object: Function MediaAssets.MediaPlaylist.Add
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175983bc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Add(struct UMediaSource* MediaSource);
};

// Object: Class MediaAssets.MediaSoundComponent
// Size: 0x8E0 (Inherited: 0x6D0)
struct UMediaSoundComponent : USynthComponent
{
	DEFINE_UE_CLASS_HELPERS(UMediaSoundComponent, "MediaSoundComponent")

	EMediaSoundChannels Channels; // 0x6D0(0x4)
	uint8_t DynamicRateAdjustment : 1; // 0x6D4(0x1), Mask(0x1)
	uint8_t BitPad_0x6D4_1 : 7; // 0x6D4(0x1)
	uint8_t Pad_0x6D5[0x3]; // 0x6D5(0x3)
	float RateAdjustmentFactor; // 0x6D8(0x4)
	struct FFloatRange RateAdjustmentRange; // 0x6DC(0x10)
	uint8_t Pad_0x6EC[0x4]; // 0x6EC(0x4)
	struct UMediaPlayer* MediaPlayer; // 0x6F0(0x8)
	uint8_t Pad_0x6F8[0x1E8]; // 0x6F8(0x1E8)

	// Object: Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1759931c
	// Params: [ Num(2) Size(0x11) ]
	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);

	// Object: Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17599278
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1759919c
	// Params: [ Num(2) Size(0x8) ]
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175990f0
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableSpectralAnalysis(uint8_t bInSpectralAnalysisEnabled);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17599044
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableEnvelopeFollowing(uint8_t bInEnvelopeFollowing);

	// Object: Function MediaAssets.MediaSoundComponent.GetSpectralData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17598fac
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();

	// Object: Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17598f78
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();

	// Object: Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17598f44
	// Params: [ Num(1) Size(0x4) ]
	float GetEnvelopeValue();

	// Object: Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x17598e70
	// Params: [ Num(2) Size(0x351) ]
	uint8_t BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings);
};

// Object: Class MediaAssets.MediaTexture
// Size: 0x200 (Inherited: 0x130)
struct UMediaTexture : UTexture
{
	DEFINE_UE_CLASS_HELPERS(UMediaTexture, "MediaTexture")

	ETextureAddress AddressX; // 0x130(0x1)
	ETextureAddress AddressY; // 0x131(0x1)
	uint8_t AutoClear : 1; // 0x132(0x1), Mask(0x1)
	uint8_t BitPad_0x132_1 : 7; // 0x132(0x1)
	uint8_t Pad_0x133[0x1]; // 0x133(0x1)
	struct FLinearColor ClearColor; // 0x134(0x10)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct UMediaPlayer* MediaPlayer; // 0x148(0x8)
	uint8_t Pad_0x150[0xB0]; // 0x150(0xB0)

	// Object: Function MediaAssets.MediaTexture.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x17599adc
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer);

	// Object: Function MediaAssets.MediaTexture.GetWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17599aa8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWidth();

	// Object: Function MediaAssets.MediaTexture.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17599a74
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();

	// Object: Function MediaAssets.MediaTexture.GetHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17599a40
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHeight();

	// Object: Function MediaAssets.MediaTexture.GetAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x17599a0c
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

	uint8_t bUseTimeSynchronization : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t FrameDelay; // 0x8C(0x4)
	double TimeDelay; // 0x90(0x8)
};

} // namespace SDK
