#include "BinkMediaPlayer.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBinkFunctionLibrary::* ----
struct FTimespan UBinkFunctionLibrary::BinkLoadingMovie_GetTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkFunctionLibrary", "BinkLoadingMovie_GetTime");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimespan UBinkFunctionLibrary::BinkLoadingMovie_GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkFunctionLibrary", "BinkLoadingMovie_GetDuration");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBinkFunctionLibrary::Bink_DrawOverlays()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkFunctionLibrary", "Bink_DrawOverlays");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UBinkMediaManager::* ----
void UBinkMediaManager::ReleaseBinkPlayer(const struct FName& InToken)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "ReleaseBinkPlayer");
    struct
    {
        struct FName InToken;
    } Parms{};
    Parms.InToken = (struct FName)InToken;
    this->ProcessEvent(Func, &Parms);
}

void UBinkMediaManager::InitCachedPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "InitCachedPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UBinkMediaPlayer* UBinkMediaManager::GetBinkPlayer(const struct FName& InToken)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "GetBinkPlayer");
    struct
    {
        struct FName InToken;
        struct UBinkMediaPlayer* ReturnValue;
    } Parms{};
    Parms.InToken = (struct FName)InToken;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBinkMediaManager* UBinkMediaManager::GetBinkMediaManager(struct UGameInstance* InGameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkMediaManager", "GetBinkMediaManager");
    struct
    {
        struct UGameInstance* InGameInstance;
        struct UBinkMediaManager* ReturnValue;
    } Parms{};
    Parms.InGameInstance = (struct UGameInstance*)InGameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBinkMediaManager::DumpUsingPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "DumpUsingPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBinkMediaManager::BinkSetInGame(uint8_t bIsInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "BinkSetInGame");
    struct
    {
        uint8_t bIsInGame;
    } Parms{};
    Parms.bIsInGame = (uint8_t)bIsInGame;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBinkMediaManager::BinkInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "BinkInGame");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaManager::BinkInFrontEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaManager", "BinkInFrontEnd");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBinkMediaPlayer::* ----
uint8_t UBinkMediaPlayer::SupportsSeeking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "SupportsSeeking");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::SupportsScrubbing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "SupportsScrubbing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::SupportsRate(float Rate, uint8_t Unthinned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "SupportsRate");
    struct
    {
        float Rate;
        uint8_t Unthinned;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Rate = (float)Rate;
    Parms.Unthinned = (uint8_t)Unthinned;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBinkMediaPlayer::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBinkMediaPlayer::SetVolume(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "SetVolume");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBinkMediaPlayer::SetRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "SetRate");
    struct
    {
        float Rate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::SetLooping(uint8_t InLooping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "SetLooping");
    struct
    {
        uint8_t InLooping;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLooping = (uint8_t)InLooping;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::Seek(const struct FTimespan& InTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "Seek");
    struct
    {
        struct FTimespan InTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTime = (struct FTimespan)InTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::Rewind()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "Rewind");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBinkMediaPlayer::ResetSubtitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "ResetSubtitle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBinkMediaPlayer::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "Play");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "Pause");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::OpenUrl(struct FString NewURL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "OpenUrl");
    struct
    {
        struct FString NewURL;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewURL = (struct FString)NewURL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBinkMediaPlayer::OnSubTitleAssetLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "OnSubTitleAssetLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBinkMediaPlayer::LoadSubtitlesFromAsset(const struct FSoftObjectPath& InResPath, struct FString InVoiceCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "LoadSubtitlesFromAsset");
    struct
    {
        struct FSoftObjectPath InResPath;
        struct FString InVoiceCulture;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InResPath = (struct FSoftObjectPath)InResPath;
    Parms.InVoiceCulture = (struct FString)InVoiceCulture;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::LoadSubtitles(struct FString SrtUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "LoadSubtitles");
    struct
    {
        struct FString SrtUrl;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SrtUrl = (struct FString)SrtUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "IsStopped");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsSeeking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "IsSeeking");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsLooping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "IsLooping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "IsInitialized");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::IsBinkMediaPlayerEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkMediaPlayer", "IsBinkMediaPlayerEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBinkMediaPlayer::GetUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "GetUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimespan UBinkMediaPlayer::GetTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "GetTime");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UBinkMediaPlayer::GetRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "GetRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::GetGameVersionStr(struct FString& OutGameVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkMediaPlayer", "GetGameVersionStr");
    struct
    {
        struct FString OutGameVersion;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGameVersion = Parms.OutGameVersion;
    return Parms.ReturnValue;
}

struct FString UBinkMediaPlayer::GetGameSavedPath(uint8_t bInternal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkMediaPlayer", "GetGameSavedPath");
    struct
    {
        uint8_t bInternal;
        struct FString ReturnValue;
    } Parms{};
    Parms.bInternal = (uint8_t)bInternal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimespan UBinkMediaPlayer::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "GetDuration");
    struct
    {
        struct FTimespan ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UBinkMediaPlayer::GetCurrentSubtitleFromAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "GetCurrentSubtitleFromAsset");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBinkMediaPlayer::GetCurrentSubtitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "GetCurrentSubtitle");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBinkMediaPlayer::Draw(struct UTexture* Texture, uint8_t tonemap, int32_t out_nits, float Alpha, uint8_t srgb_decode, uint8_t hdr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "Draw");
    struct
    {
        struct UTexture* Texture;
        uint8_t tonemap;
        int32_t out_nits;
        float Alpha;
        uint8_t srgb_decode;
        uint8_t hdr;
    } Parms{};
    Parms.Texture = (struct UTexture*)Texture;
    Parms.tonemap = (uint8_t)tonemap;
    Parms.out_nits = (int32_t)out_nits;
    Parms.Alpha = (float)Alpha;
    Parms.srgb_decode = (uint8_t)srgb_decode;
    Parms.hdr = (uint8_t)hdr;
    this->ProcessEvent(Func, &Parms);
}

void UBinkMediaPlayer::CloseUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "CloseUrl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBinkMediaPlayer::CheckPufferFilePath(struct FString InURL, struct FString& OutFullUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkMediaPlayer", "CheckPufferFilePath");
    struct
    {
        struct FString InURL;
        struct FString OutFullUrl;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InURL = (struct FString)InURL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFullUrl = Parms.OutFullUrl;
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::CheckDolphinFilePath(struct FString InURL, struct FString& OutFullUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BinkMediaPlayer", "CheckDolphinFilePath");
    struct
    {
        struct FString InURL;
        struct FString OutFullUrl;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InURL = (struct FString)InURL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFullUrl = Parms.OutFullUrl;
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::CanPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "CanPlay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBinkMediaPlayer::CanPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaPlayer", "CanPause");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBinkMediaTexture::* ----
void UBinkMediaTexture::SetMediaPlayer(struct UBinkMediaPlayer* InMediaPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaTexture", "SetMediaPlayer");
    struct
    {
        struct UBinkMediaPlayer* InMediaPlayer;
    } Parms{};
    Parms.InMediaPlayer = (struct UBinkMediaPlayer*)InMediaPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UBinkMediaTexture::HandleMediaClosed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaTexture", "HandleMediaClosed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBinkMediaTexture::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BinkMediaTexture", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
