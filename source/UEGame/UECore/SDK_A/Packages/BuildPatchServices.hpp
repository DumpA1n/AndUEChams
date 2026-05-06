#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: BuildPatchServices
// Enums: 0
// Structs: 5
// Classes: 1

struct FSHAHashData;
struct FFileManifestData;
struct FChunkPartData;
struct FChunkInfoData;
struct FCustomFieldData;
struct UBuildPatchManifest;

// Object: ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x14 (Inherited: 0x0)
struct FSHAHashData
{
	uint8_t Hash[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x68 (Inherited: 0x0)
struct FFileManifestData
{
	struct FString Filename; // 0x0(0x10)
	struct FSHAHashData FileHash; // 0x10(0x14)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x1)
	bool bIsCompressed; // 0x61(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)
};

// Object: ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x18 (Inherited: 0x0)
struct FChunkPartData
{
	struct FGuid Guid; // 0x0(0x10)
	uint32_t Offset; // 0x10(0x4)
	uint32_t Size; // 0x14(0x4)
};

// Object: ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x40 (Inherited: 0x0)
struct FChunkInfoData
{
	struct FGuid Guid; // 0x0(0x10)
	uint64_t Hash; // 0x10(0x8)
	struct FSHAHashData ShaHash; // 0x18(0x14)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t FileSize; // 0x30(0x8)
	uint8_t GroupNumber; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x20 (Inherited: 0x0)
struct FCustomFieldData
{
	struct FString Key; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// Object: Class BuildPatchServices.BuildPatchManifest
// Size: 0x120 (Inherited: 0x28)
struct UBuildPatchManifest : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBuildPatchManifest, "BuildPatchManifest")

	uint8_t ManifestFileVersion; // 0x28(0x1)
	bool bIsFileData; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	uint32_t AppID; // 0x2C(0x4)
	struct FString AppName; // 0x30(0x10)
	struct FString BuildVersion; // 0x40(0x10)
	struct FString LaunchExe; // 0x50(0x10)
	struct FString LaunchCommand; // 0x60(0x10)
	struct TSet<struct FString> PrereqIds; // 0x70(0x50)
	struct FString PrereqName; // 0xC0(0x10)
	struct FString PrereqPath; // 0xD0(0x10)
	struct FString PrereqArgs; // 0xE0(0x10)
	struct TArray<struct FFileManifestData> FileManifestList; // 0xF0(0x10)
	struct TArray<struct FChunkInfoData> ChunkList; // 0x100(0x10)
	struct TArray<struct FCustomFieldData> CustomFields; // 0x110(0x10)
};

} // namespace SDK
