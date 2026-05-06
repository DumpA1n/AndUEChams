#include "GameJoyPlugin.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GameJoyPluginLibrary
void UBP_GameJoyPluginLibrary::UpdateRedDot(bool showRedDot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "UpdateRedDot");
    struct
    {
        bool showRedDot;
    } Parms{};
    Parms.showRedDot = (bool)showRedDot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::UnLockRecorderPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "UnLockRecorderPosition");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::StopRecorder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "StopRecorder");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UBP_GameJoyPluginLibrary::StartRecorder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "StartRecorder");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::ShowRecorderDialog(float X, float Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "ShowRecorderDialog");
    struct
    {
        float X;
        float Y;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::ShowConsole()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "ShowConsole");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetWwiseListenerStatus(bool isMultiple)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetWwiseListenerStatus");
    struct
    {
        bool isMultiple;
    } Parms{};
    Parms.isMultiple = (bool)isMultiple;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetWatermark(struct FString Path, float X, float Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetWatermark");
    struct
    {
        struct FString Path;
        float X;
        float Y;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetVideoResolution(int32_t Type, int32_t Resolution)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetVideoResolution");
    struct
    {
        int32_t Type;
        int32_t Resolution;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.Resolution = (int32_t)Resolution;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetVideoQuality(int32_t Quality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetVideoQuality");
    struct
    {
        int32_t Quality;
    } Parms{};
    Parms.Quality = (int32_t)Quality;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetVideoBitrate(int32_t Type, int32_t bitrate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetVideoBitrate");
    struct
    {
        int32_t Type;
        int32_t bitrate;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.bitrate = (int32_t)bitrate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetUseScreenMaxSize(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetUseScreenMaxSize");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetProjectionPermCache(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetProjectionPermCache");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetMinAvailableSpaceMB(int32_t minAvailableSpaceMB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetMinAvailableSpaceMB");
    struct
    {
        int32_t minAvailableSpaceMB;
    } Parms{};
    Parms.minAvailableSpaceMB = (int32_t)minAvailableSpaceMB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetFrameRate(int32_t FrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetFrameRate");
    struct
    {
        int32_t FrameRate;
    } Parms{};
    Parms.FrameRate = (int32_t)FrameRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetDropFrameTimeMillis(int32_t millis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetDropFrameTimeMillis");
    struct
    {
        int32_t millis;
    } Parms{};
    Parms.millis = (int32_t)millis;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetCoverSize(int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetCoverSize");
    struct
    {
        int32_t Width;
        int32_t Height;
    } Parms{};
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetAutoProfileLevel(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetAutoProfileLevel");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::SetAlbumName(struct FString albumName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "SetAlbumName");
    struct
    {
        struct FString albumName;
    } Parms{};
    Parms.albumName = (struct FString)albumName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::RequestSDKPermission(int32_t EventId, struct FString Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "RequestSDKPermission");
    struct
    {
        int32_t EventId;
        struct FString Type;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.Type = (struct FString)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::PlayLocalVideo(struct FString Path, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "PlayLocalVideo");
    struct
    {
        struct FString Path;
        int32_t Type;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.Type = (int32_t)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::NotifySpaceNotEnough()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "NotifySpaceNotEnough");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::MoveVideoToAlbum(int32_t EventId, struct FString albumName, struct FString srcPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "MoveVideoToAlbum");
    struct
    {
        int32_t EventId;
        struct FString albumName;
        struct FString srcPath;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.albumName = (struct FString)albumName;
    Parms.srcPath = (struct FString)srcPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::MoveFileToDocument(struct FString fromPath, struct FString toSubPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "MoveFileToDocument");
    struct
    {
        struct FString fromPath;
        struct FString toSubPath;
    } Parms{};
    Parms.fromPath = (struct FString)fromPath;
    Parms.toSubPath = (struct FString)toSubPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UBP_GameJoyPluginLibrary::MoveFile(struct FString& From, struct FString& dst)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "MoveFile");
    struct
    {
        struct FString From;
        struct FString dst;
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    From = Parms.From;
    dst = Parms.dst;
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::MoveAlbumToLocal(int32_t EventId, struct FString albumPath, struct FString localPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "MoveAlbumToLocal");
    struct
    {
        int32_t EventId;
        struct FString albumPath;
        struct FString localPath;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.albumPath = (struct FString)albumPath;
    Parms.localPath = (struct FString)localPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::MergeVideoWithImageAndVideo(int32_t EventId, struct FString videopath, struct FString headerVideo, struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "MergeVideoWithImageAndVideo");
    struct
    {
        int32_t EventId;
        struct FString videopath;
        struct FString headerVideo;
        struct FString ImagePath;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.videopath = (struct FString)videopath;
    Parms.headerVideo = (struct FString)headerVideo;
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::LockRecorderPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "LockRecorderPosition");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UBP_GameJoyPluginLibrary::IsRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "IsRecording");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBP_GameJoyPluginLibrary::IsRecorderDialogShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "IsRecorderDialogShow");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBP_GameJoyPluginLibrary::IsIOSFileExist(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "IsIOSFileExist");
    struct
    {
        struct FString FilePath;
        bool ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBP_GameJoyPluginLibrary::IsFileExist(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "IsFileExist");
    struct
    {
        struct FString FilePath;
        bool ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBP_GameJoyPluginLibrary::IsDirExist(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "IsDirExist");
    struct
    {
        struct FString Path;
        bool ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::InitGameJoyBPLib()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "InitGameJoyBPLib");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::GetVideoMd5(int32_t EventId, struct FString videoPathJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetVideoMd5");
    struct
    {
        int32_t EventId;
        struct FString videoPathJson;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.videoPathJson = (struct FString)videoPathJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::GetVideoInfo(int32_t EventId, struct FString videoPathJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetVideoInfo");
    struct
    {
        int32_t EventId;
        struct FString videoPathJson;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.videoPathJson = (struct FString)videoPathJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UBP_GameJoyPluginLibrary::GetTimeSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetTimeSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_GameJoyPluginLibrary::GetTimeMilliSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetTimeMilliSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::GetSandboxPath(int32_t EventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetSandboxPath");
    struct
    {
        int32_t EventId;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UBP_GameJoyPluginLibrary::GetPaths(int32_t pathType, bool relative)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetPaths");
    struct
    {
        int32_t pathType;
        bool relative;
        struct FString ReturnValue;
    } Parms{};
    Parms.pathType = (int32_t)pathType;
    Parms.relative = (bool)relative;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBP_GameJoyPluginLibrary::GetPathRelativeTo(struct FString fromPath, struct FString RelativeTo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetPathRelativeTo");
    struct
    {
        struct FString fromPath;
        struct FString RelativeTo;
        struct FString ReturnValue;
    } Parms{};
    Parms.fromPath = (struct FString)fromPath;
    Parms.RelativeTo = (struct FString)RelativeTo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::GetOldVideoFromAlbumName(struct FString albumName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetOldVideoFromAlbumName");
    struct
    {
        struct FString albumName;
    } Parms{};
    Parms.albumName = (struct FString)albumName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UBP_GameJoyPluginLibrary* UBP_GameJoyPluginLibrary::GetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetInstance");
    struct
    {
        struct UBP_GameJoyPluginLibrary* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBP_GameJoyPluginLibrary::GetGFilePathBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetGFilePathBase");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_GameJoyPluginLibrary::GetFreeDiskSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetFreeDiskSpace");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBP_GameJoyPluginLibrary::GetFilesInDir(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetFilesInDir");
    struct
    {
        struct FString Path;
        struct FString ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::GetFilesFromPath(int32_t EventId, struct FString Path, bool isIncludeChildren)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetFilesFromPath");
    struct
    {
        int32_t EventId;
        struct FString Path;
        bool isIncludeChildren;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.Path = (struct FString)Path;
    Parms.isIncludeChildren = (bool)isIncludeChildren;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UBP_GameJoyPluginLibrary::GetFilePathFromUri(struct FString uriPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetFilePathFromUri");
    struct
    {
        struct FString uriPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.uriPath = (struct FString)uriPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_GameJoyPluginLibrary::GetFdFromUri(struct FString Uri)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetFdFromUri");
    struct
    {
        struct FString Uri;
        int32_t ReturnValue;
    } Parms{};
    Parms.Uri = (struct FString)Uri;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBP_GameJoyPluginLibrary::GetDeviceInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GetDeviceInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::GenerateVideoCover(int32_t EventId, struct FString videopath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GenerateVideoCover");
    struct
    {
        int32_t EventId;
        struct FString videopath;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.videopath = (struct FString)videopath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::GenerateMomentsVideo(struct FString videoTimeStampListJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "GenerateMomentsVideo");
    struct
    {
        struct FString videoTimeStampListJson;
    } Parms{};
    Parms.videoTimeStampListJson = (struct FString)videoTimeStampListJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::EnableInGameAudio(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "EnableInGameAudio");
    struct
    {
        bool Enable;
    } Parms{};
    Parms.Enable = (bool)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::EnableBgmMix(bool mixing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "EnableBgmMix");
    struct
    {
        bool mixing;
    } Parms{};
    Parms.mixing = (bool)mixing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBP_GameJoyPluginLibrary::DeleteVideoByAlbum(int32_t EventId, struct FString albumName, struct FString srcPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "DeleteVideoByAlbum");
    struct
    {
        int32_t EventId;
        struct FString albumName;
        struct FString srcPath;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.albumName = (struct FString)albumName;
    Parms.srcPath = (struct FString)srcPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UBP_GameJoyPluginLibrary::CopyFile(struct FString& From, struct FString& dst)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GameJoyPluginLibrary", "CopyFile");
    struct
    {
        struct FString From;
        struct FString dst;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    From = Parms.From;
    dst = Parms.dst;
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::CloseRecorderDialog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "CloseRecorderDialog");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UBP_GameJoyPluginLibrary::CloseFd(int32_t fd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "CloseFd");
    struct
    {
        int32_t fd;
        int32_t ReturnValue;
    } Parms{};
    Parms.fd = (int32_t)fd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_GameJoyPluginLibrary::ClipVideo(int32_t EventId, struct FString videoEditJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "ClipVideo");
    struct
    {
        int32_t EventId;
        struct FString videoEditJson;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    Parms.videoEditJson = (struct FString)videoEditJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UBP_GameJoyPluginLibrary::CheckSDKPermission(struct FString Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "CheckSDKPermission");
    struct
    {
        struct FString Type;
        int32_t ReturnValue;
    } Parms{};
    Parms.Type = (struct FString)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBP_GameJoyPluginLibrary::CheckAlbumVideoExist(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_GameJoyPluginLibrary", "CheckAlbumVideoExist");
    struct
    {
        struct FString Path;
        bool ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
