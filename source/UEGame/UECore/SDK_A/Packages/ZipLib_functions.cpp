#include "ZipLib.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UZipDirectoryProxy
struct UZipDirectoryProxy* UZipDirectoryProxy::ZipDirectory(struct FString DirectoryToZip, struct FString ResultLocation, struct FString Password, EZipCreationFlag CreationFlag, EZipCompressLevel Compression)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZipDirectoryProxy", "ZipDirectory");
    struct
    {
        struct FString DirectoryToZip;
        struct FString ResultLocation;
        struct FString Password;
        enum EZipCreationFlag CreationFlag;
        enum EZipCompressLevel Compression;
        struct UZipDirectoryProxy* ReturnValue;
    } Parms{};
    Parms.DirectoryToZip = (struct FString)DirectoryToZip;
    Parms.ResultLocation = (struct FString)ResultLocation;
    Parms.Password = (struct FString)Password;
    Parms.CreationFlag = (enum EZipCreationFlag)CreationFlag;
    Parms.Compression = (enum EZipCompressLevel)Compression;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UZipFilesProxy
struct UZipFilesProxy* UZipFilesProxy::ZipFiles(const struct TArray<struct FFileToZip>& FilesToZip, struct FString ResultLocation, struct FString Password, EZipCreationFlag CreationFlag, EZipCompressLevel Compression)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZipFilesProxy", "ZipFiles");
    struct
    {
        struct TArray<struct FFileToZip> FilesToZip;
        struct FString ResultLocation;
        struct FString Password;
        enum EZipCreationFlag CreationFlag;
        enum EZipCompressLevel Compression;
        struct UZipFilesProxy* ReturnValue;
    } Parms{};
    Parms.FilesToZip = (struct TArray<struct FFileToZip>)FilesToZip;
    Parms.ResultLocation = (struct FString)ResultLocation;
    Parms.Password = (struct FString)Password;
    Parms.CreationFlag = (enum EZipCreationFlag)CreationFlag;
    Parms.Compression = (enum EZipCompressLevel)Compression;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUnzipArchiveProxy
struct UUnzipArchiveProxy* UUnzipArchiveProxy::UnzipZipArchive(struct FString ZipArchiveLocation, struct FString ResultLocation, struct FString Password, uint8_t bOverwrite)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnzipArchiveProxy", "UnzipZipArchive");
    struct
    {
        struct FString ZipArchiveLocation;
        struct FString ResultLocation;
        struct FString Password;
        uint8_t bOverwrite;
        struct UUnzipArchiveProxy* ReturnValue;
    } Parms{};
    Parms.ZipArchiveLocation = (struct FString)ZipArchiveLocation;
    Parms.ResultLocation = (struct FString)ResultLocation;
    Parms.Password = (struct FString)Password;
    Parms.bOverwrite = (uint8_t)bOverwrite;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUnzipper
void UUnzipper::UnzipAllAsync(struct FString TargetLocation, struct FString Password, uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Unzipper", "UnzipAllAsync");
    struct
    {
        struct FString TargetLocation;
        struct FString Password;
        uint8_t bForce;
    } Parms{};
    Parms.TargetLocation = (struct FString)TargetLocation;
    Parms.Password = (struct FString)Password;
    Parms.bForce = (uint8_t)bForce;
    this->ProcessEvent(Func, &Parms);
}

void UUnzipper::SetBufferSize(const int64_t& NewBufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Unzipper", "SetBufferSize");
    struct
    {
        int64_t NewBufferSize;
    } Parms{};
    Parms.NewBufferSize = (int64_t)NewBufferSize;
    this->ProcessEvent(Func, &Parms);
}

void UUnzipper::SetArchive(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Unzipper", "SetArchive");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUnzipper::IsValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Unzipper", "IsValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUnzipper::GetAllFileInfoList(struct TArray<struct FUnzipFileInfo>& OutFileInfoList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Unzipper", "GetAllFileInfoList");
    struct
    {
        struct TArray<struct FUnzipFileInfo> OutFileInfoList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutFileInfoList = Parms.OutFileInfoList;
}

struct UUnzipper* UUnzipper::CreateUnzipper()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Unzipper", "CreateUnzipper");
    struct
    {
        struct UUnzipper* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UZipLibrary
void UZipLibrary::UnZipCompletedSetFlag(uint8_t bSuccess, int64_t FilesZippedCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZipLibrary", "UnZipCompletedSetFlag");
    struct
    {
        uint8_t bSuccess;
        int64_t FilesZippedCount;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    Parms.FilesZippedCount = (int64_t)FilesZippedCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UUnzipper* UZipLibrary::UnzipArchiveSimple(struct FString ArchivePath, struct FString TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZipLibrary", "UnzipArchiveSimple");
    struct
    {
        struct FString ArchivePath;
        struct FString TargetLocation;
        struct UUnzipper* ReturnValue;
    } Parms{};
    Parms.ArchivePath = (struct FString)ArchivePath;
    Parms.TargetLocation = (struct FString)TargetLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UZipLibrary::GetUnZipCompletedResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZipLibrary", "GetUnZipCompletedResult");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UZipper
void UZipper::ZipAsync(struct FString TargetLocation, struct FString Password, EZipCompressLevel CompressLevel, EZipCreationFlag CreationFlag, int64_t CheckSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Zipper", "ZipAsync");
    struct
    {
        struct FString TargetLocation;
        struct FString Password;
        enum EZipCompressLevel CompressLevel;
        enum EZipCreationFlag CreationFlag;
        int64_t CheckSize;
    } Parms{};
    Parms.TargetLocation = (struct FString)TargetLocation;
    Parms.Password = (struct FString)Password;
    Parms.CompressLevel = (enum EZipCompressLevel)CompressLevel;
    Parms.CreationFlag = (enum EZipCreationFlag)CreationFlag;
    Parms.CheckSize = (int64_t)CheckSize;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UZipper::Zip(struct FString TargetLocation, struct FString Password, EZipCompressLevel CompressLevel, EZipCreationFlag CreationFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Zipper", "Zip");
    struct
    {
        struct FString TargetLocation;
        struct FString Password;
        enum EZipCompressLevel CompressLevel;
        enum EZipCreationFlag CreationFlag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetLocation = (struct FString)TargetLocation;
    Parms.Password = (struct FString)Password;
    Parms.CompressLevel = (enum EZipCompressLevel)CompressLevel;
    Parms.CreationFlag = (enum EZipCreationFlag)CreationFlag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UZipper::RemoveFile(struct FString ArchivePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Zipper", "RemoveFile");
    struct
    {
        struct FString ArchivePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ArchivePath = (struct FString)ArchivePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UZipper::GetFilesCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Zipper", "GetFilesCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UZipper* UZipper::CreateZipper()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Zipper", "CreateZipper");
    struct
    {
        struct UZipper* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UZipper::AddFile(struct FString FilePath, struct FString ArchivePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Zipper", "AddFile");
    struct
    {
        struct FString FilePath;
        struct FString ArchivePath;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    Parms.ArchivePath = (struct FString)ArchivePath;
    this->ProcessEvent(Func, &Parms);
}

void UZipper::AddDirectory(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Zipper", "AddDirectory");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
