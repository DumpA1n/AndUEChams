#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MFQCloud
// Enums: 0
// Structs: 0
// Classes: 1

struct UMFQCloudWrapper;

// Object: Class MFQCloud.MFQCloudWrapper
// Size: 0x58 (Inherited: 0x28)
struct UMFQCloudWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQCloudWrapper, "MFQCloudWrapper")

	struct FMulticastInlineDelegate OnUploadCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnUploadProgress; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)

	// Object: Function MFQCloud.MFQCloudWrapper.UploadFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f5b8d8
	// Params: [ Num(3) Size(0x21) ]
	bool UploadFile(struct FString InFilePath, struct FString InCosPath);

	// Object: DelegateFunction MFQCloud.MFQCloudWrapper.OnUploadProgress__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void OnUploadProgress__DelegateSignature(float InProgress, struct FString Path);

	// Object: DelegateFunction MFQCloud.MFQCloudWrapper.OnUploadCompleted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void OnUploadCompleted__DelegateSignature(struct FString InRetVal, struct FString Path);

	// Object: Function MFQCloud.MFQCloudWrapper.OnCosUploadProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x4f5b5f0
	// Params: [ Num(2) Size(0x18) ]
	void OnCosUploadProgress(float InProgress, struct FString Path);

	// Object: Function MFQCloud.MFQCloudWrapper.OnCosUploadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x4f5b740
	// Params: [ Num(2) Size(0x20) ]
	void OnCosUploadComplete(struct FString InRetVal, struct FString Path);

	// Object: Function MFQCloud.MFQCloudWrapper.GetDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f5b9e8
	// Params: [ Num(1) Size(0x8) ]
	static struct UMFQCloudWrapper* GetDefault();
};

} // namespace SDK
