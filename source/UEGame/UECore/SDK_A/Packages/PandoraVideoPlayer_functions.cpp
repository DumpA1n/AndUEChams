#include "PandoraVideoPlayer.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPVideoImage
void UPVideoImage::Update()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "Update");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::SetVolume(int32_t nVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "SetVolume");
    struct
    {
        int32_t nVolume;
    } Parms{};
    Parms.nVolume = (int32_t)nVolume;
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::SetHardwareDecodec(bool bHareware)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVideoImage", "SetHardwareDecodec");
    struct
    {
        bool bHareware;
    } Parms{};
    Parms.bHareware = (bool)bHareware;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPVideoImage::Seek(int32_t nSecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "Seek");
    struct
    {
        int32_t nSecond;
    } Parms{};
    Parms.nSecond = (int32_t)nSecond;
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::PlayWithFd(int32_t nFd, bool bLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "PlayWithFd");
    struct
    {
        int32_t nFd;
        bool bLoop;
    } Parms{};
    Parms.nFd = (int32_t)nFd;
    Parms.bLoop = (bool)bLoop;
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::Play(struct FString strUrl, bool bLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "Play");
    struct
    {
        struct FString strUrl;
        bool bLoop;
    } Parms{};
    Parms.strUrl = (struct FString)strUrl;
    Parms.bLoop = (bool)bLoop;
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UPVideoImage::IsTextureUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "IsTextureUpdated");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPVideoImage::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "IsPlaying");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPVideoImage::IsPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "IsPause");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPVideoImage::IsAlphaVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "IsAlphaVideo");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPVideoImage::GetYUVFormat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "GetYUVFormat");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UPVideoImage::GetVideoTexture(int32_t nIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "GetVideoTexture");
    struct
    {
        int32_t nIdx;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.nIdx = (int32_t)nIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UPVideoImage::GetRgbParameter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "GetRgbParameter");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UPVideoImage::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "GetDuration");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UPVideoImage::GetCurrentPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "GetCurrentPosition");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UPVideoImage::GetAlphaParameter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "GetAlphaParameter");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPVideoImage::EnableCacheResource(bool bEnable, struct FString cachePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "EnableCacheResource");
    struct
    {
        bool bEnable;
        struct FString cachePath;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    Parms.cachePath = (struct FString)cachePath;
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVideoImage", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVideoImage::ClearCacheResource(struct FString cachePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVideoImage", "ClearCacheResource");
    struct
    {
        struct FString cachePath;
    } Parms{};
    Parms.cachePath = (struct FString)cachePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UPVideoImage::Authenticate(struct TArray<uint8_t> licenseInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVideoImage", "Authenticate");
    struct
    {
        struct TArray<uint8_t> licenseInfo;
        int32_t ReturnValue;
    } Parms{};
    Parms.licenseInfo = (struct TArray<uint8_t>)licenseInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
