#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: UploadToolsModule
// Enums: 1
// Structs: 3
// Classes: 4

struct FUploadFinishTlogInfo;
struct FUploadFileNtf;
struct FUploadFileRequestInfo;
struct UCOSConfigGlobal;
struct UCOSConfig;
struct UUploadToolsModuleBPTools;
struct UUploadToolsModuleDelegates;

// Object: Enum UploadToolsModule.EUploadFileType
enum class EUploadFileType : uint8_t
{
	Log = 0,
	LogAndDump = 1,
	LogAndUObject = 2,
	MemoryStats = 3,
	EUploadFileType_MAX = 4
};

// Object: ScriptStruct UploadToolsModule.UploadFinishTlogInfo
// Size: 0x38 (Inherited: 0x0)
struct FUploadFinishTlogInfo
{
	struct FString upload_path; // 0x0(0x10)
	struct FString bucket_name_app_id; // 0x10(0x10)
	struct FString requestId; // 0x20(0x10)
	int32_t filetype; // 0x30(0x4)
	int32_t fail; // 0x34(0x4)
};

// Object: ScriptStruct UploadToolsModule.UploadFileNtf
// Size: 0x70 (Inherited: 0x0)
struct FUploadFileNtf
{
	struct FString bucket_name_app_id; // 0x0(0x10)
	struct FString Region; // 0x10(0x10)
	struct FString secret_id; // 0x20(0x10)
	struct FString secret_key; // 0x30(0x10)
	struct FString upload_path; // 0x40(0x10)
	struct FString session_token; // 0x50(0x10)
	struct FVector PlayerLoc; // 0x60(0xC)
	int32_t size_limit; // 0x6C(0x4)
};

// Object: ScriptStruct UploadToolsModule.UploadFileRequestInfo
// Size: 0x40 (Inherited: 0x0)
struct FUploadFileRequestInfo
{
	struct FString FilePath; // 0x0(0x10)
	struct FString FriendName; // 0x10(0x10)
	struct FString FileContent; // 0x20(0x10)
	struct FString TempBucket; // 0x30(0x10)
};

// Object: Class UploadToolsModule.COSConfigGlobal
// Size: 0x78 (Inherited: 0x28)
struct UCOSConfigGlobal : UObject
{
	struct FString APPID; // 0x28(0x10)
	struct FString secret_id; // 0x38(0x10)
	struct FString secret_key; // 0x48(0x10)
	struct FString BucketName; // 0x58(0x10)
	struct FString HostName; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UCOSConfigGlobal, "COSConfigGlobal")

};

// Object: Class UploadToolsModule.COSConfig
// Size: 0x78 (Inherited: 0x28)
struct UCOSConfig : UObject
{
	struct FString APPID; // 0x28(0x10)
	struct FString secret_id; // 0x38(0x10)
	struct FString secret_key; // 0x48(0x10)
	struct FString BucketName; // 0x58(0x10)
	struct FString HostName; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UCOSConfig, "COSConfig")

};

// Object: Class UploadToolsModule.UploadToolsModuleBPTools
// Size: 0x28 (Inherited: 0x28)
struct UUploadToolsModuleBPTools : UBlueprintFunctionLibrary
{

	// Object: Function UploadToolsModule.UploadToolsModuleBPTools.UploadZippedFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7824550
	// Params: [ Num(2) Size(0x71) ]
	static void UploadZippedFile(const struct FUploadFileNtf& UploadNtf, const EUploadFileType& Type);

	// Object: Function UploadToolsModule.UploadToolsModuleBPTools.UploadLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x782453c
	// Params: [ Num(0) Size(0x0) ]
	static void UploadLog();

	// Object: Function UploadToolsModule.UploadToolsModuleBPTools.UploadFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7824348
	// Params: [ Num(1) Size(0x40) ]
	static void UploadFile(struct FUploadFileRequestInfo InFileInfo);

	// Object: Function UploadToolsModule.UploadToolsModuleBPTools.SetMemoryStatsFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7824268
	// Params: [ Num(2) Size(0x8) ]
	static void SetMemoryStatsFlag(uint8_t Flag, int32_t Num);
	DEFINE_UE_CLASS_HELPERS(UUploadToolsModuleBPTools, "UploadToolsModuleBPTools")

};

// Object: Class UploadToolsModule.UploadToolsModuleDelegates
// Size: 0x38 (Inherited: 0x28)
struct UUploadToolsModuleDelegates : UObject
{
	struct FMulticastInlineDelegate OnUploadFinish; // 0x28(0x10)


	// Object: Function UploadToolsModule.UploadToolsModuleDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfc76e30
	// Params: [ Num(1) Size(0x8) ]
	static struct UUploadToolsModuleDelegates* Get();
	DEFINE_UE_CLASS_HELPERS(UUploadToolsModuleDelegates, "UploadToolsModuleDelegates")

};

} // namespace SDK
