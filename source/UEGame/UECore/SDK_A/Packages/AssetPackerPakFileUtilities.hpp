#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AssetPackerPakFileUtilities
// Enums: 2
// Structs: 5
// Classes: 1

struct FPakChecksum;
struct FPakMoveConfig;
struct FFilePairArrayWrapper;
struct FPakMoveData;
struct FFilePair;
struct UPakWorker;

// Object: Enum AssetPackerPakFileUtilities.EPakChunkGroupType
enum class EPakChunkGroupType : uint8_t
{
	None = 0,
	BeforeLogin = 1,
	BeforeLoginHD = 2,
	SOLOnly = 4,
	SOLHDOnly = 8,
	MPOnly = 16,
	MPHDOnly = 32,
	NotBeforeLogin = 64,
	NotBeforeLoginHD = 128,
	AllHD = 170,
	EPakChunkGroupType_MAX = 171
};

// Object: Enum AssetPackerPakFileUtilities.EMergePakErrorType
enum class EMergePakErrorType : uint8_t
{
	NoError = 0,
	NoEnoughSpace = 1,
	WriteFileFailed = 2,
	InvalidSourcePakFile = 3,
	PakEncryptStatusNotSame = 4,
	EncryptKeyNotFound = 5,
	MD5CheckFailed = 6,
	FileAlreadyExists = 7,
	SourceMD5CheckFailed = 8,
	PatchMD5CheckFailed = 9,
	CachedPatchMD5CheckFailed = 10,
	EMergePakErrorType_MAX = 11
};

// Object: ScriptStruct AssetPackerPakFileUtilities.PakChecksum
// Size: 0x38 (Inherited: 0x0)
struct FPakChecksum
{
	struct FString Filename; // 0x0(0x10)
	int64_t size; // 0x10(0x8)
	struct FString Hash; // 0x18(0x10)
	struct FGuid KeyGuid; // 0x28(0x10)
};

// Object: ScriptStruct AssetPackerPakFileUtilities.PakMoveConfig
// Size: 0x120 (Inherited: 0x0)
struct FPakMoveConfig
{
	struct FString BaseVersion; // 0x0(0x10)
	struct FString NewVersion; // 0x10(0x10)
	struct TMap<struct FString, struct FPakChecksum> Checksums; // 0x20(0x50)
	struct TMap<struct FString, struct FPakChecksum> NewChecksums; // 0x70(0x50)
	struct TMap<struct FString, struct FPakChecksum> CachedChecksums; // 0xC0(0x50)
	struct TArray<struct FPakMoveData> Items; // 0x110(0x10)
};

// Object: ScriptStruct AssetPackerPakFileUtilities.FilePairArrayWrapper
// Size: 0x10 (Inherited: 0x0)
struct FFilePairArrayWrapper
{
	struct TArray<struct FFilePair> Files; // 0x0(0x10)
};

// Object: ScriptStruct AssetPackerPakFileUtilities.PakMoveData
// Size: 0x68 (Inherited: 0x0)
struct FPakMoveData
{
	struct FString ChunkID; // 0x0(0x10)
	EPakChunkGroupType ChunkType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TMap<struct FString, struct FFilePairArrayWrapper> Sources; // 0x18(0x50)
};

// Object: ScriptStruct AssetPackerPakFileUtilities.FilePair
// Size: 0x20 (Inherited: 0x0)
struct FFilePair
{
	struct FString Filename; // 0x0(0x10)
	struct FString ToFileName; // 0x10(0x10)
};

// Object: Class AssetPackerPakFileUtilities.PakWorker
// Size: 0x98 (Inherited: 0x28)
struct UPakWorker : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPakWorker, "PakWorker")

	int32_t ErrorCode; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString ErrorMessage; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMergeComplete; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMergeComplete2; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMergeCompleteAnyThread2; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPreprocessProgress; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPreprocessComplete; // 0x80(0x10)
	uint8_t bCancel : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)

	// Object: Function AssetPackerPakFileUtilities.PakWorker.ScanPakFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175b2e84
	// Params: [ Num(3) Size(0x61) ]
	static uint8_t ScanPakFiles(struct FString DirectoryPath, struct TMap<struct FString, struct FString>& PakChunkMap);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.PreprocessPaksAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b2cdc
	// Params: [ Num(5) Size(0x38) ]
	void PreprocessPaksAsync(struct FString InSrcPaksDir, struct FString InOutputPaksDir, struct FString InConfigFilePath, int32_t InFilterMask, int32_t InMaxConcurrency);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.MergePaksChecked2
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b2828
	// Params: [ Num(8) Size(0x80) ]
	void MergePaksChecked2(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InCachedPatchFileName, struct FString InExpectedCachedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.MergePaksAsyncChecked2
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b2374
	// Params: [ Num(8) Size(0x80) ]
	void MergePaksAsyncChecked2(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InCachedPatchFileName, struct FString InExpectedCachedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.MergePaksAsyncChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b1fd4
	// Params: [ Num(6) Size(0x60) ]
	void MergePaksAsyncChecked(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.MergePaksAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b1d88
	// Params: [ Num(4) Size(0x31) ]
	void MergePaksAsync(struct FString InSrcPakFileName, struct FString InPatchPakFileName, struct FString InOutputPakFileName, uint8_t bCalculateMD5);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.MergePaks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b1b2c
	// Params: [ Num(5) Size(0x38) ]
	int32_t MergePaks(struct FString InSrcPakFileName, struct FString InPatchPakFileName, struct FString InOutputPakFileName, uint8_t bCalculateMD5);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.ExtractPakChunkFromFileName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x175b1a28
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t ExtractPakChunkFromFileName(struct FString PakFileName, struct FString& OutPakChunk);

	// Object: Function AssetPackerPakFileUtilities.PakWorker.CancelAsyncTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x175b1a0c
	// Params: [ Num(0) Size(0x0) ]
	void CancelAsyncTask();
};

} // namespace SDK
