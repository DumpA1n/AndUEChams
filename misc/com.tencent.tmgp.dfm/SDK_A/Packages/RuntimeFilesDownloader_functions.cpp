#include "RuntimeFilesDownloader.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UCDNIconDownManager::* ----
struct FString UCDNIconDownManager::TransferImagePathToSavePath(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CDNIconDownManager", "TransferImagePathToSavePath");
    struct
    {
        struct FString ImagePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCDNIconDownManager::StopCDNDownLoadProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "StopCDNDownLoadProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCDNIconDownManager::ReqCdnDownWithCompare(struct FString URL, struct FString SavePath, struct FString InTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "ReqCdnDownWithCompare");
    struct
    {
        struct FString URL;
        struct FString SavePath;
        struct FString InTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.SavePath = (struct FString)SavePath;
    Parms.InTag = (struct FString)InTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCDNIconDownManager::ReqCdnDownloadWithTag(struct FString InURL, struct FString InFileSavePath, struct FString InTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "ReqCdnDownloadWithTag");
    struct
    {
        struct FString InURL;
        struct FString InFileSavePath;
        struct FString InTag;
    } Parms{};
    Parms.InURL = (struct FString)InURL;
    Parms.InFileSavePath = (struct FString)InFileSavePath;
    Parms.InTag = (struct FString)InTag;
    this->ProcessEvent(Func, &Parms);
}

void UCDNIconDownManager::ReqCdnDownload(struct FString InURL, struct FString InFileSavePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "ReqCdnDownload");
    struct
    {
        struct FString InURL;
        struct FString InFileSavePath;
    } Parms{};
    Parms.InURL = (struct FString)InURL;
    Parms.InFileSavePath = (struct FString)InFileSavePath;
    this->ProcessEvent(Func, &Parms);
}

void UCDNIconDownManager::RemoveClearPoolNoExistTag(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "RemoveClearPoolNoExistTag");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UCDNIconDownManager::RefreshAllUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "RefreshAllUI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCDNIconDownManager::RecoverCDNDownLoadProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "RecoverCDNDownLoadProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UTexture2D* UCDNIconDownManager::LoadAlreadyDiskImage(struct FString ImagePath, struct FString Tag, uint8_t bCompareVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "LoadAlreadyDiskImage");
    struct
    {
        struct FString ImagePath;
        struct FString Tag;
        uint8_t bCompareVersion;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    Parms.Tag = (struct FString)Tag;
    Parms.bCompareVersion = (uint8_t)bCompareVersion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCDNIconDownManager::IsDownloadInDisk(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "IsDownloadInDisk");
    struct
    {
        struct FString URL;
        uint8_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCDNIconDownManager::HasClearPoolNoExistTag(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "HasClearPoolNoExistTag");
    struct
    {
        struct FString Tag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UCDNIconDownManager::GetTexture2DFromRawImage(struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "GetTexture2DFromRawImage");
    struct
    {
        struct FString ImagePath;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.ImagePath = (struct FString)ImagePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNIconDownManager::GetFinalDiskPath(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "GetFinalDiskPath");
    struct
    {
        struct FString URL;
        struct FString ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNIconDownManager::GetCDNUrl(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "GetCDNUrl");
    struct
    {
        struct FString URL;
        struct FString ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCDNIconDownManager* UCDNIconDownManager::Get(struct UObject* GameInst)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CDNIconDownManager", "Get");
    struct
    {
        struct UObject* GameInst;
        struct UCDNIconDownManager* ReturnValue;
    } Parms{};
    Parms.GameInst = (struct UObject*)GameInst;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCDNIconDownManager::ClearTexWithTag(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "ClearTexWithTag");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UCDNIconDownManager::ClearPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "ClearPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCDNIconDownManager::AddClearPoolNoExistTag(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNIconDownManager", "AddClearPoolNoExistTag");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

// ---- URuntimeFilesDownloaderProxy::* ----
void URuntimeFilesDownloaderProxy::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeFilesDownloaderProxy", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t URuntimeFilesDownloaderProxy::DownloadFileWithCompare(struct FString URL, struct FString SavePath, struct FString LastModified)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeFilesDownloaderProxy", "DownloadFileWithCompare");
    struct
    {
        struct FString URL;
        struct FString SavePath;
        struct FString LastModified;
        uint8_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.SavePath = (struct FString)SavePath;
    Parms.LastModified = (struct FString)LastModified;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t URuntimeFilesDownloaderProxy::DownloadFile(struct FString URL, struct FString SavePath, int32_t StreamingBuffSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeFilesDownloaderProxy", "DownloadFile");
    struct
    {
        struct FString URL;
        struct FString SavePath;
        int32_t StreamingBuffSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.SavePath = (struct FString)SavePath;
    Parms.StreamingBuffSize = (int32_t)StreamingBuffSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t URuntimeFilesDownloaderProxy::Cancel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeFilesDownloaderProxy", "Cancel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URuntimeFilesDownloaderLibrary::* ----
struct FString URuntimeFilesDownloaderLibrary::GetLogDirAbsolutePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RuntimeFilesDownloaderLibrary", "GetLogDirAbsolutePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCDNIconDownManager* URuntimeFilesDownloaderLibrary::GetCDNIconDownManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RuntimeFilesDownloaderLibrary", "GetCDNIconDownManager");
    struct
    {
        struct UCDNIconDownManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URuntimeFilesDownloaderProxy* URuntimeFilesDownloaderLibrary::CreateDownloader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RuntimeFilesDownloaderLibrary", "CreateDownloader");
    struct
    {
        struct URuntimeFilesDownloaderProxy* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString URuntimeFilesDownloaderLibrary::Convert2PublicSavedPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RuntimeFilesDownloaderLibrary", "Convert2PublicSavedPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
