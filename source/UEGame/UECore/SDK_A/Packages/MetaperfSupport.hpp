#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MetaperfSupport
// Enums: 0
// Structs: 3
// Classes: 1

struct FUploadFileNtf;
struct FMetaperfJankInfo;
struct FMetaperfRecordInfo;
struct FMetaperfSystemInfo;
struct UMetaperfUploader;

// Object: ScriptStruct MetaperfSupport.MetaperfJankInfo
// Size: 0x18 (Inherited: 0x0)
struct FMetaperfJankInfo
{
	int64_t file_size; // 0x0(0x8)
	int64_t lag_count; // 0x8(0x8)
	int64_t room_id; // 0x10(0x8)
};

// Object: ScriptStruct MetaperfSupport.MetaperfRecordInfo
// Size: 0x8 (Inherited: 0x0)
struct FMetaperfRecordInfo
{
	float frequency; // 0x0(0x4)
	int32_t captureMode; // 0x4(0x4)
};

// Object: ScriptStruct MetaperfSupport.MetaperfSystemInfo
// Size: 0x28 (Inherited: 0x0)
struct FMetaperfSystemInfo
{
	int64_t core_num; // 0x0(0x8)
	float core_freq; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t memory_size; // 0x10(0x8)
	int64_t memory_freq; // 0x18(0x8)
	int32_t systemVersion; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: Class MetaperfSupport.MetaperfUploader
// Size: 0x28 (Inherited: 0x28)
struct UMetaperfUploader : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMetaperfUploader, "MetaperfUploader")

	// Object: Function MetaperfSupport.MetaperfUploader.UploadMetaperfFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8714aa0
	// Params: [ Num(1) Size(0x70) ]
	static void UploadMetaperfFile(const struct FUploadFileNtf& UploadNtf);

	// Object: Function MetaperfSupport.MetaperfUploader.SetMetaperfDownloadNtf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8714890
	// Params: [ Num(5) Size(0x50) ]
	static void SetMetaperfDownloadNtf(struct FString app_id, struct FString secret_id, struct FString secret_key, struct FString bucket_name, struct FString host_name);

	// Object: Function MetaperfSupport.MetaperfUploader.SetGameState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x87147f4
	// Params: [ Num(1) Size(0x1) ]
	static void SetGameState(uint8_t bGameState);

	// Object: Function MetaperfSupport.MetaperfUploader.SetFFXFIOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8714758
	// Params: [ Num(1) Size(0x1) ]
	static void SetFFXFIOpen(uint8_t bisOpne);

	// Object: Function MetaperfSupport.MetaperfUploader.SetDLSSGOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x87146bc
	// Params: [ Num(1) Size(0x1) ]
	static void SetDLSSGOpen(uint8_t bisOpne);

	// Object: Function MetaperfSupport.MetaperfUploader.GetMetaperfSystemInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8714650
	// Params: [ Num(1) Size(0x28) ]
	static struct FMetaperfSystemInfo GetMetaperfSystemInfo();

	// Object: Function MetaperfSupport.MetaperfUploader.GetMetaperfJankInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x87145e4
	// Params: [ Num(1) Size(0x18) ]
	static struct FMetaperfJankInfo GetMetaperfJankInfo();

	// Object: Function MetaperfSupport.MetaperfUploader.FlushMetaperfData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x87145d0
	// Params: [ Num(0) Size(0x0) ]
	static void FlushMetaperfData();
};

} // namespace SDK
