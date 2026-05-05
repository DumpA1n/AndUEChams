#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ZipLib
// Enums: 3
// Structs: 2
// Classes: 8

struct FFileToZip;
struct FUnzipFileInfo;
struct UZipAsyncBase;
struct UUnzipAsyncBase;
struct UZipDirectoryProxy;
struct UZipFilesProxy;
struct UUnzipArchiveProxy;
struct UUnzipper;
struct UZipLibrary;
struct UZipper;

// Object: Enum ZipLib.EZipErrType
enum class EZipErrType : uint8_t
{
	NoError = 0,
	ExceedSizeLimit = 1,
	OverwriteExistingArchiveFailed = 2,
	TargetArchiveExists = 3,
	CreateOrOpenFileFailed = 4,
	CloseFileFailed = 5,
	EZipErrType_MAX = 6
};

// Object: Enum ZipLib.EZipCreationFlag
enum class EZipCreationFlag : uint8_t
{
	CancelIfExists = 0,
	Overwrite = 1,
	Append = 2,
	EZipCreationFlag_MAX = 3
};

// Object: Enum ZipLib.EZipCompressLevel
enum class EZipCompressLevel : uint8_t
{
	Level0 = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4,
	Level5 = 5,
	Level6 = 6,
	Level7 = 7,
	Level8 = 8,
	Level9 = 9,
	EZipCompressLevel_MAX = 10
};

// Object: ScriptStruct ZipLib.FileToZip
// Size: 0x20 (Inherited: 0x0)
struct FFileToZip
{
	struct FString FileSource; // 0x0(0x10)
	struct FString ArchiveFullPath; // 0x10(0x10)
};

// Object: ScriptStruct ZipLib.UnzipFileInfo
// Size: 0x30 (Inherited: 0x0)
struct FUnzipFileInfo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: Class ZipLib.ZipAsyncBase
// Size: 0x38 (Inherited: 0x30)
struct UZipAsyncBase : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UZipAsyncBase, "ZipAsyncBase")

	struct UZipper* Zipper; // 0x30(0x8)
};

// Object: Class ZipLib.UnzipAsyncBase
// Size: 0x38 (Inherited: 0x30)
struct UUnzipAsyncBase : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UUnzipAsyncBase, "UnzipAsyncBase")

	struct UUnzipper* Unzipper; // 0x30(0x8)
};

// Object: Class ZipLib.ZipDirectoryProxy
// Size: 0xA0 (Inherited: 0x38)
struct UZipDirectoryProxy : UZipAsyncBase
{
	DEFINE_UE_CLASS_HELPERS(UZipDirectoryProxy, "ZipDirectoryProxy")

	struct FMulticastInlineDelegate OnDirectoryZipped; // 0x38(0x10)
	struct FMulticastInlineDelegate OnError; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFileZipped; // 0x58(0x10)
	uint8_t Pad_0x68[0x38]; // 0x68(0x38)

	// Object: Function ZipLib.ZipDirectoryProxy.ZipDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x790aee4
	// Params: [ Num(6) Size(0x40) ]
	static struct UZipDirectoryProxy* ZipDirectory(struct FString DirectoryToZip, struct FString ResultLocation, struct FString Password, EZipCreationFlag CreationFlag, EZipCompressLevel Compression);
};

// Object: Class ZipLib.ZipFilesProxy
// Size: 0xA0 (Inherited: 0x38)
struct UZipFilesProxy : UZipAsyncBase
{
	DEFINE_UE_CLASS_HELPERS(UZipFilesProxy, "ZipFilesProxy")

	struct FMulticastInlineDelegate OnDirectoryZipped; // 0x38(0x10)
	struct FMulticastInlineDelegate OnError; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFileZipped; // 0x58(0x10)
	uint8_t Pad_0x68[0x38]; // 0x68(0x38)

	// Object: Function ZipLib.ZipFilesProxy.ZipFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x790b098
	// Params: [ Num(6) Size(0x40) ]
	static struct UZipFilesProxy* ZipFiles(const struct TArray<struct FFileToZip>& FilesToZip, struct FString ResultLocation, struct FString Password, EZipCreationFlag CreationFlag, EZipCompressLevel Compression);
};

// Object: Class ZipLib.UnzipArchiveProxy
// Size: 0xA0 (Inherited: 0x38)
struct UUnzipArchiveProxy : UUnzipAsyncBase
{
	DEFINE_UE_CLASS_HELPERS(UUnzipArchiveProxy, "UnzipArchiveProxy")

	struct FMulticastInlineDelegate OnArchiveUnzipped; // 0x38(0x10)
	struct FMulticastInlineDelegate OnError; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFileUnzipped; // 0x58(0x10)
	uint8_t Pad_0x68[0x38]; // 0x68(0x38)

	// Object: Function ZipLib.UnzipArchiveProxy.UnzipZipArchive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x790b25c
	// Params: [ Num(5) Size(0x40) ]
	static struct UUnzipArchiveProxy* UnzipZipArchive(struct FString ZipArchiveLocation, struct FString ResultLocation, struct FString Password, uint8_t bOverwrite);
};

// Object: Class ZipLib.Unzipper
// Size: 0x90 (Inherited: 0x28)
struct UUnzipper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUnzipper, "Unzipper")

	struct FMulticastInlineDelegate OnFilesUnzippedDynamicEvent; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFileUnzippedDynamicEvent; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)

	// Object: Function ZipLib.Unzipper.UnzipAllAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790b67c
	// Params: [ Num(3) Size(0x21) ]
	void UnzipAllAsync(struct FString TargetLocation, struct FString Password, uint8_t bForce);

	// Object: Function ZipLib.Unzipper.SetBufferSize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x790b5c8
	// Params: [ Num(1) Size(0x8) ]
	void SetBufferSize(const int64_t& NewBufferSize);

	// Object: Function ZipLib.Unzipper.SetArchive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790b51c
	// Params: [ Num(1) Size(0x10) ]
	void SetArchive(struct FString Path);

	// Object: Function ZipLib.Unzipper.IsValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x790b4e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsValid();

	// Object: Function ZipLib.Unzipper.GetAllFileInfoList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x790b428
	// Params: [ Num(1) Size(0x10) ]
	void GetAllFileInfoList(struct TArray<struct FUnzipFileInfo>& OutFileInfoList);

	// Object: Function ZipLib.Unzipper.CreateUnzipper
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x790b3f4
	// Params: [ Num(1) Size(0x8) ]
	static struct UUnzipper* CreateUnzipper();
};

// Object: Class ZipLib.ZipLibrary
// Size: 0x28 (Inherited: 0x28)
struct UZipLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UZipLibrary, "ZipLibrary")

	// Object: Function ZipLib.ZipLibrary.UnZipCompletedSetFlag
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x790b984
	// Params: [ Num(2) Size(0x10) ]
	static void UnZipCompletedSetFlag(uint8_t bSuccess, int64_t FilesZippedCount);

	// Object: Function ZipLib.ZipLibrary.UnzipArchiveSimple
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x790b894
	// Params: [ Num(3) Size(0x28) ]
	static struct UUnzipper* UnzipArchiveSimple(struct FString ArchivePath, struct FString TargetLocation);

	// Object: Function ZipLib.ZipLibrary.GetUnZipCompletedResult
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x790b860
	// Params: [ Num(1) Size(0x8) ]
	static int64_t GetUnZipCompletedResult();
};

// Object: Class ZipLib.Zipper
// Size: 0xF8 (Inherited: 0x28)
struct UZipper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UZipper, "Zipper")

	struct FMulticastInlineDelegate OnFileZippedEventDynamic; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFilesZippedEventDynamic; // 0x38(0x10)
	uint8_t Pad_0x48[0xB0]; // 0x48(0xB0)

	// Object: Function ZipLib.Zipper.ZipAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790bfe0
	// Params: [ Num(5) Size(0x30) ]
	void ZipAsync(struct FString TargetLocation, struct FString Password, EZipCompressLevel CompressLevel, EZipCreationFlag CreationFlag, int64_t CheckSize);

	// Object: Function ZipLib.Zipper.Zip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790be6c
	// Params: [ Num(5) Size(0x23) ]
	uint8_t Zip(struct FString TargetLocation, struct FString Password, EZipCompressLevel CompressLevel, EZipCreationFlag CreationFlag);

	// Object: Function ZipLib.Zipper.RemoveFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790bdb4
	// Params: [ Num(2) Size(0x11) ]
	uint8_t RemoveFile(struct FString ArchivePath);

	// Object: Function ZipLib.Zipper.GetFilesCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x790bd80
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFilesCount();

	// Object: Function ZipLib.Zipper.CreateZipper
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x790bd4c
	// Params: [ Num(1) Size(0x8) ]
	static struct UZipper* CreateZipper();

	// Object: Function ZipLib.Zipper.AddFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790bc5c
	// Params: [ Num(2) Size(0x20) ]
	void AddFile(struct FString FilePath, struct FString ArchivePath);

	// Object: Function ZipLib.Zipper.AddDirectory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790bbb0
	// Params: [ Num(1) Size(0x10) ]
	void AddDirectory(struct FString Path);
};

} // namespace SDK
