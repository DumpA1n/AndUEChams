#include "MovieSceneCapture.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMovieSceneCaptureProtocolBase
uint8_t UMovieSceneCaptureProtocolBase::IsCapturing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCaptureProtocolBase", "IsCapturing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCaptureProtocolBase", "GetState");
    struct
    {
        enum EMovieSceneCaptureProtocolState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneCapture
void UMovieSceneCapture::SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCapture", "SetImageCaptureProtocolType");
    struct
    {
        struct UMovieSceneCaptureProtocolBase* ProtocolType;
    } Parms{};
    Parms.ProtocolType = (struct UMovieSceneCaptureProtocolBase*)ProtocolType;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneCapture::SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCapture", "SetAudioCaptureProtocolType");
    struct
    {
        struct UMovieSceneCaptureProtocolBase* ProtocolType;
    } Parms{};
    Parms.ProtocolType = (struct UMovieSceneCaptureProtocolBase*)ProtocolType;
    this->ProcessEvent(Func, &Parms);
}

struct UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCapture", "GetImageCaptureProtocol");
    struct
    {
        struct UMovieSceneCaptureProtocolBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCapture", "GetAudioCaptureProtocol");
    struct
    {
        struct UMovieSceneCaptureProtocolBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneCaptureEnvironment
uint8_t UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "IsCaptureInProgress");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureFrameNumber");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureElapsedTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "FindImageCaptureProtocol");
    struct
    {
        struct UMovieSceneImageCaptureProtocolBase* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "FindAudioCaptureProtocol");
    struct
    {
        struct UMovieSceneAudioCaptureProtocolBase* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUserDefinedCaptureProtocol
void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "StopCapturingFinalPixels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "StartCapturingFinalPixels");
    struct
    {
        struct FCapturedPixelsID StreamID;
    } Parms{};
    Parms.StreamID = (struct FCapturedPixelsID)StreamID;
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::ResolveBuffer(struct UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "ResolveBuffer");
    struct
    {
        struct UTexture* Buffer;
        struct FCapturedPixelsID BufferID;
    } Parms{};
    Parms.Buffer = (struct UTexture*)Buffer;
    Parms.BufferID = (struct FCapturedPixelsID)BufferID;
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnWarmUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnWarmUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnStartCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnStartCapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUserDefinedCaptureProtocol::OnSetup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnSetup");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserDefinedCaptureProtocol::OnPreTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnPreTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnPixelsReceived");
    struct
    {
        struct FCapturedPixels Pixels;
        struct FCapturedPixelsID ID;
        struct FFrameMetrics FrameMetrics;
    } Parms{};
    Parms.Pixels = (struct FCapturedPixels)Pixels;
    Parms.ID = (struct FCapturedPixelsID)ID;
    Parms.FrameMetrics = (struct FFrameMetrics)FrameMetrics;
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnPauseCapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnFinalize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnFinalize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnCaptureFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUserDefinedCaptureProtocol::OnCanFinalize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnCanFinalize");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "OnBeginFinalize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "GetCurrentFrameMetrics");
    struct
    {
        struct FFrameMetrics ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedCaptureProtocol", "GenerateFilename");
    struct
    {
        struct FFrameMetrics InFrameMetrics;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFrameMetrics = (struct FFrameMetrics)InFrameMetrics;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUserDefinedImageCaptureProtocol
void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, uint8_t bCopyImageData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedImageCaptureProtocol", "WriteImageToDisk");
    struct
    {
        struct FCapturedPixels PixelData;
        struct FCapturedPixelsID StreamID;
        struct FFrameMetrics FrameMetrics;
        uint8_t bCopyImageData;
    } Parms{};
    Parms.PixelData = (struct FCapturedPixels)PixelData;
    Parms.StreamID = (struct FCapturedPixelsID)StreamID;
    Parms.FrameMetrics = (struct FFrameMetrics)FrameMetrics;
    Parms.bCopyImageData = (uint8_t)bCopyImageData;
    this->ProcessEvent(Func, &Parms);
}

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForCurrentFrame");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(struct UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForBuffer");
    struct
    {
        struct UTexture* Buffer;
        struct FCapturedPixelsID StreamID;
        struct FString ReturnValue;
    } Parms{};
    Parms.Buffer = (struct UTexture*)Buffer;
    Parms.StreamID = (struct FCapturedPixelsID)StreamID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
