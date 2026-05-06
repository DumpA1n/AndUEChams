#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MobilePatchingUtils
// Enums: 0
// Structs: 0
// Classes: 3

struct UMobileInstalledContent;
struct UMobilePendingContent;
struct UMobilePatchingLibrary;

// Object: Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x48 (Inherited: 0x28)
struct UMobileInstalledContent : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMobileInstalledContent, "MobileInstalledContent")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)

	// Object: Function MobilePatchingUtils.MobileInstalledContent.Mount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3521a94
	// Params: [ Num(3) Size(0x19) ]
	bool Mount(int32_t PakOrder, struct FString MountPoint);

	// Object: Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521b98
	// Params: [ Num(1) Size(0x4) ]
	float GetInstalledContentSize();

	// Object: Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521bcc
	// Params: [ Num(1) Size(0x4) ]
	float GetDiskFreeSpace();
};

// Object: Class MobilePatchingUtils.MobilePendingContent
// Size: 0x88 (Inherited: 0x48)
struct UMobilePendingContent : UMobileInstalledContent
{
	DEFINE_UE_CLASS_HELPERS(UMobilePendingContent, "MobilePendingContent")

	uint8_t Pad_0x48[0x40]; // 0x48(0x40)

	// Object: Function MobilePatchingUtils.MobilePendingContent.StartInstall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3521c14
	// Params: [ Num(2) Size(0x20) ]
	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed);

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521e50
	// Params: [ Num(1) Size(0x4) ]
	float GetTotalDownloadedSize();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521e84
	// Params: [ Num(1) Size(0x4) ]
	float GetRequiredDiskSpace();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521d1c
	// Params: [ Num(1) Size(0x4) ]
	float GetInstallProgress();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521d50
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDownloadStatusText();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521e1c
	// Params: [ Num(1) Size(0x4) ]
	float GetDownloadSpeed();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521eb8
	// Params: [ Num(1) Size(0x4) ]
	float GetDownloadSize();
};

// Object: Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMobilePatchingLibrary, "MobilePatchingLibrary")

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3522000
	// Params: [ Num(5) Size(0x50) ]
	static void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed);

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x85cf828
	// Params: [ Num(1) Size(0x1) ]
	static bool HasActiveWiFiConnection();

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521ef4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetSupportedPlatformNames();

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35221dc
	// Params: [ Num(2) Size(0x18) ]
	static struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory);

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3521f64
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetActiveDeviceProfileName();
};

} // namespace SDK
