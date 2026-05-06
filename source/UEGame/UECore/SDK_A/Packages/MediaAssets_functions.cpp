#include "MediaAssets.hpp"
#include "Engine.hpp"
#include "MediaUtils.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMediaSource
bool UMediaSource::Validate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSource", "Validate");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaSource::SetMediaOptionString(const struct FName& Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSource", "SetMediaOptionString");
    struct
    {
        struct FName Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FName)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSource::SetMediaOptionInt64(const struct FName& Key, int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSource", "SetMediaOptionInt64");
    struct
    {
        struct FName Key;
        int64_t Value;
    } Parms{};
    Parms.Key = (struct FName)Key;
    Parms.Value = (int64_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSource::SetMediaOptionFloat(const struct FName& Key, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSource", "SetMediaOptionFloat");
    struct
    {
        struct FName Key;
        float Value;
    } Parms{};
    Parms.Key = (struct FName)Key;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSource::SetMediaOptionBool(const struct FName& Key, bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSource", "SetMediaOptionBool");
    struct
    {
        struct FName Key;
        bool Value;
    } Parms{};
    Parms.Key = (struct FName)Key;
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMediaSource::GetUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSource", "GetUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UFileMediaSource
void UFileMediaSource::SetFilePath(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FileMediaSource", "SetFilePath");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

// UMediaBlueprintFunctionLibrary
void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateWebcamCaptureDevices");
    struct
    {
        struct TArray<struct FMediaCaptureDevice> OutDevices;
        int32_t Filter;
    } Parms{};
    Parms.Filter = (int32_t)Filter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDevices = Parms.OutDevices;
}

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateVideoCaptureDevices");
    struct
    {
        struct TArray<struct FMediaCaptureDevice> OutDevices;
        int32_t Filter;
    } Parms{};
    Parms.Filter = (int32_t)Filter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDevices = Parms.OutDevices;
}

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateAudioCaptureDevices");
    struct
    {
        struct TArray<struct FMediaCaptureDevice> OutDevices;
        int32_t Filter;
    } Parms{};
    Parms.Filter = (int32_t)Filter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDevices = Parms.OutDevices;
}

// UMediaComponent
struct UMediaTexture* UMediaComponent::GetMediaTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaComponent", "GetMediaTexture");
    struct
    {
        struct UMediaTexture* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMediaPlayer* UMediaComponent::GetMediaPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaComponent", "GetMediaPlayer");
    struct
    {
        struct UMediaPlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMediaPlayer
bool UMediaPlayer::SupportsSeeking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SupportsSeeking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SupportsScrubbing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SupportsScrubbing");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SupportsRate");
    struct
    {
        float Rate;
        bool Unthinned;
        bool ReturnValue;
    } Parms{};
    Parms.Rate = (float)Rate;
    Parms.Unthinned = (bool)Unthinned;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetViewRotation");
    struct
    {
        struct FRotator Rotation;
        bool Absolute;
        bool ReturnValue;
    } Parms{};
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Absolute = (bool)Absolute;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetViewField");
    struct
    {
        float Horizontal;
        float Vertical;
        bool Absolute;
        bool ReturnValue;
    } Parms{};
    Parms.Horizontal = (float)Horizontal;
    Parms.Vertical = (float)Vertical;
    Parms.Absolute = (bool)Absolute;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetVideoTrackFrameRate");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        float FrameRate;
        bool ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    Parms.FrameRate = (float)FrameRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetTrackFormat");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t TrackIndex;
        int32_t FormatIndex;
        bool ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::SetTimeDelay(struct FTimespan TimeDelay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetTimeDelay");
    struct
    {
        struct FTimespan TimeDelay;
    } Parms{};
    Parms.TimeDelay = (struct FTimespan)TimeDelay;
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::SetRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetRate");
    struct
    {
        float Rate;
        bool ReturnValue;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::SetNativeVolume(float Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetNativeVolume");
    struct
    {
        float Volume;
        bool ReturnValue;
    } Parms{};
    Parms.Volume = (float)Volume;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::SetMediaOptions(struct UMediaSource* Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetMediaOptions");
    struct
    {
        struct UMediaSource* Options;
    } Parms{};
    Parms.Options = (struct UMediaSource*)Options;
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::SetLooping(bool Looping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetLooping");
    struct
    {
        bool Looping;
        bool ReturnValue;
    } Parms{};
    Parms.Looping = (bool)Looping;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::SetDesiredPlayerName(struct FName PlayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetDesiredPlayerName");
    struct
    {
        struct FName PlayerName;
    } Parms{};
    Parms.PlayerName = (struct FName)PlayerName;
    this->ProcessEvent(Func, &Parms);
}

void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SetBlockOnTime");
    struct
    {
        struct FTimespan Time;
    } Parms{};
    Parms.Time = (struct FTimespan)Time;
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "SelectTrack");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t TrackIndex;
        bool ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Seek");
    struct
    {
        struct FTimespan Time;
        bool ReturnValue;
    } Parms{};
    Parms.Time = (struct FTimespan)Time;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::Rewind()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Rewind");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::Reopen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Reopen");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::Previous()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Previous");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::PlayAndSeek()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "PlayAndSeek");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Play");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::PauseAtStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "PauseAtStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Pause");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::OpenWithPauseAtStart(struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& PlayerOptions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenWithPauseAtStart");
    struct
    {
        struct UMediaSource* MediaSource;
        struct FMediaPlayerOptions PlayerOptions;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    Parms.PlayerOptions = (struct FMediaPlayerOptions)PlayerOptions;
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::OpenUrl(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenUrl");
    struct
    {
        struct FString URL;
        bool ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::OpenSourceWithOptions(struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenSourceWithOptions");
    struct
    {
        struct UMediaSource* MediaSource;
        struct FMediaPlayerOptions Options;
        bool ReturnValue;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    Parms.Options = (struct FMediaPlayerOptions)Options;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenSourceLatent");
    struct
    {
        struct UObject* WorldContextObject;
        struct FLatentActionInfo LatentInfo;
        struct UMediaSource* MediaSource;
        struct FMediaPlayerOptions Options;
        bool bSuccess;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    Parms.Options = (struct FMediaPlayerOptions)Options;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

bool UMediaPlayer::OpenSource(struct UMediaSource* MediaSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenSource");
    struct
    {
        struct UMediaSource* MediaSource;
        bool ReturnValue;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenPlaylistIndex");
    struct
    {
        struct UMediaPlaylist* InPlaylist;
        int32_t Index;
        bool ReturnValue;
    } Parms{};
    Parms.InPlaylist = (struct UMediaPlaylist*)InPlaylist;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::OpenPlaylist(struct UMediaPlaylist* InPlaylist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenPlaylist");
    struct
    {
        struct UMediaPlaylist* InPlaylist;
        bool ReturnValue;
    } Parms{};
    Parms.InPlaylist = (struct UMediaPlaylist*)InPlaylist;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::OpenFile(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "OpenFile");
    struct
    {
        struct FString FilePath;
        bool ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::Next()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Next");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsReady");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsPreparing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsPreparing");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsPlaying");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsPaused");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsLooping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsLooping");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsConnecting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsConnecting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsClosed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsClosed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::IsBuffering()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "IsBuffering");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::HasError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "HasError");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMediaPlayer::GetViewRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetViewRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetVideoTrackType");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetVideoTrackFrameRates");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        struct FFloatRange ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetVideoTrackFrameRate");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        float ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetVideoTrackDimensions");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        struct FIntPoint ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetVideoTrackAspectRatio");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        float ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaPlayer::GetVerticalFieldOfView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetVerticalFieldOfView");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMediaPlayer::GetUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTrackLanguage");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t TrackIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTrackFormat");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t TrackIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTrackDisplayName");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t TrackIndex;
        struct FText ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMediaTimeStampInfo* UMediaPlayer::GetTimeStamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTimeStamp");
    struct
    {
        struct UMediaTimeStampInfo* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimespan UMediaPlayer::GetTimeDelay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTimeDelay");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimespan UMediaPlayer::GetTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTime");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMediaPlayer::GetTicks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetTicks");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetSupportedRates");
    struct
    {
        struct TArray<struct FFloatRange> OutRates;
        bool Unthinned;
    } Parms{};
    Parms.Unthinned = (bool)Unthinned;
    this->ProcessEvent(Func, &Parms);
    OutRates = Parms.OutRates;
}

struct FString UMediaPlayer::GetStateToString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetStateToString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetSelectedTrack");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaPlayer::GetRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetPlaylistIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetPlaylistIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetPlaylist");
    struct
    {
        struct UMediaPlaylist* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UMediaPlayer::GetPlayerName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetPlayerName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetNumTracks");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetNumTrackFormats");
    struct
    {
        enum EMediaPlayerTrack TrackType;
        int32_t TrackIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.TrackType = (enum EMediaPlayerTrack)TrackType;
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMediaPlayer::GetMediaName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetMediaName");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaPlayer::GetHorizontalFieldOfView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetHorizontalFieldOfView");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimespan UMediaPlayer::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetDuration");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UMediaPlayer::GetDesiredPlayerName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetDesiredPlayerName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetAudioTrackType");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetAudioTrackSampleRate");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "GetAudioTrackChannels");
    struct
    {
        int32_t TrackIndex;
        int32_t FormatIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.FormatIndex = (int32_t)FormatIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlayer::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMediaPlayer::CanPlayUrl(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "CanPlayUrl");
    struct
    {
        struct FString URL;
        bool ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::CanPlaySource(struct UMediaSource* MediaSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "CanPlaySource");
    struct
    {
        struct UMediaSource* MediaSource;
        bool ReturnValue;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlayer::CanPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlayer", "CanPause");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMediaPlaylist
bool UMediaPlaylist::Replace(int32_t Index, struct UMediaSource* Replacement)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "Replace");
    struct
    {
        int32_t Index;
        struct UMediaSource* Replacement;
        bool ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Replacement = (struct UMediaSource*)Replacement;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlaylist::RemoveAt(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "RemoveAt");
    struct
    {
        int32_t Index;
        bool ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlaylist::Remove(struct UMediaSource* MediaSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "Remove");
    struct
    {
        struct UMediaSource* MediaSource;
        bool ReturnValue;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaPlaylist::Num()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "Num");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMediaPlaylist::Insert(struct UMediaSource* MediaSource, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "Insert");
    struct
    {
        struct UMediaSource* MediaSource;
        int32_t Index;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

struct UMediaSource* UMediaPlaylist::GetRandom(int32_t& OutIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "GetRandom");
    struct
    {
        int32_t OutIndex;
        struct UMediaSource* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutIndex = Parms.OutIndex;
    return Parms.ReturnValue;
}

struct UMediaSource* UMediaPlaylist::GetPrevious(int32_t& InOutIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "GetPrevious");
    struct
    {
        int32_t InOutIndex;
        struct UMediaSource* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InOutIndex = Parms.InOutIndex;
    return Parms.ReturnValue;
}

struct UMediaSource* UMediaPlaylist::GetNext(int32_t& InOutIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "GetNext");
    struct
    {
        int32_t InOutIndex;
        struct UMediaSource* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InOutIndex = Parms.InOutIndex;
    return Parms.ReturnValue;
}

struct UMediaSource* UMediaPlaylist::Get(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "Get");
    struct
    {
        int32_t Index;
        struct UMediaSource* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlaylist::AddUrl(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "AddUrl");
    struct
    {
        struct FString URL;
        bool ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlaylist::AddFile(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "AddFile");
    struct
    {
        struct FString FilePath;
        bool ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaPlaylist::Add(struct UMediaSource* MediaSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaPlaylist", "Add");
    struct
    {
        struct UMediaSource* MediaSource;
        bool ReturnValue;
    } Parms{};
    Parms.MediaSource = (struct UMediaSource*)MediaSource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMediaSoundComponent
void UMediaSoundComponent::SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "SetSpectralAnalysisSettings");
    struct
    {
        struct TArray<float> InFrequenciesToAnalyze;
        enum EMediaSoundComponentFFTSize InFFTSize;
    } Parms{};
    Parms.InFrequenciesToAnalyze = (struct TArray<float>)InFrequenciesToAnalyze;
    Parms.InFFTSize = (enum EMediaSoundComponentFFTSize)InFFTSize;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSoundComponent::SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "SetMediaPlayer");
    struct
    {
        struct UMediaPlayer* NewMediaPlayer;
    } Parms{};
    Parms.NewMediaPlayer = (struct UMediaPlayer*)NewMediaPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "SetEnvelopeFollowingsettings");
    struct
    {
        int32_t AttackTimeMsec;
        int32_t ReleaseTimeMsec;
    } Parms{};
    Parms.AttackTimeMsec = (int32_t)AttackTimeMsec;
    Parms.ReleaseTimeMsec = (int32_t)ReleaseTimeMsec;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "SetEnableSpectralAnalysis");
    struct
    {
        bool bInSpectralAnalysisEnabled;
    } Parms{};
    Parms.bInSpectralAnalysisEnabled = (bool)bInSpectralAnalysisEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "SetEnableEnvelopeFollowing");
    struct
    {
        bool bInEnvelopeFollowing;
    } Parms{};
    Parms.bInEnvelopeFollowing = (bool)bInEnvelopeFollowing;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "GetSpectralData");
    struct
    {
        struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetNormalizedSpectralData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "GetNormalizedSpectralData");
    struct
    {
        struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "GetMediaPlayer");
    struct
    {
        struct UMediaPlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaSoundComponent::GetEnvelopeValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "GetEnvelopeValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaSoundComponent", "BP_GetAttenuationSettingsToApply");
    struct
    {
        struct FSoundAttenuationSettings OutAttenuationSettings;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutAttenuationSettings = Parms.OutAttenuationSettings;
    return Parms.ReturnValue;
}

// UMediaTexture
void UMediaTexture::SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaTexture", "SetMediaPlayer");
    struct
    {
        struct UMediaPlayer* NewMediaPlayer;
    } Parms{};
    Parms.NewMediaPlayer = (struct UMediaPlayer*)NewMediaPlayer;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMediaTexture::GetWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaTexture", "GetWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMediaPlayer* UMediaTexture::GetMediaPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaTexture", "GetMediaPlayer");
    struct
    {
        struct UMediaPlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMediaTexture::GetHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaTexture", "GetHeight");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMediaTexture::GetAspectRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MediaTexture", "GetAspectRatio");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
