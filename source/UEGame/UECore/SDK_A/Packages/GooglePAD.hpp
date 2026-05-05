#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GooglePAD
// Enums: 4
// Structs: 0
// Classes: 1

struct UGooglePADFunctionLibrary;

// Object: Enum GooglePAD.EGooglePADCellularDataConfirmStatus
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4
};

// Object: Enum GooglePAD.EGooglePADStorageMethod
enum class EGooglePADStorageMethod : uint8_t
{
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4
};

// Object: Enum GooglePAD.EGooglePADDownloadStatus
enum class EGooglePADDownloadStatus : uint8_t
{
	AssetPack_UNKNOWN = 0,
	AssetPack_DOWNLOAD_PENDING = 1,
	AssetPack_DOWNLOADING = 2,
	AssetPack_TRANSFERRING = 3,
	AssetPack_DOWNLOAD_COMPLETED = 4,
	AssetPack_DOWNLOAD_FAILED = 5,
	AssetPack_DOWNLOAD_CANCELED = 6,
	AssetPack_WAITING_FOR_WIFI = 7,
	AssetPack_NOT_INSTALLED = 8,
	AssetPack_INFO_PENDING = 9,
	AssetPack_INFO_FAILED = 10,
	AssetPack_REMOVAL_PENDING = 11,
	AssetPack_REMOVAL_FAILED = 12,
	AssetPack_MAX = 13
};

// Object: Enum GooglePAD.EGooglePADErrorCode
enum class EGooglePADErrorCode : uint8_t
{
	AssetPack_NO_ERROR = 0,
	AssetPack_APP_UNAVAILABLE = 1,
	AssetPack_UNAVAILABLE = 2,
	AssetPack_INVALID_REQUEST = 3,
	AssetPack_DOWNLOAD_NOT_FOUND = 4,
	AssetPack_API_NOT_AVAILABLE = 5,
	AssetPack_NETWORK_ERROR = 6,
	AssetPack_ACCESS_DENIED = 7,
	AssetPack_INSUFFICIENT_STORAGE = 8,
	AssetPack_PLAY_STORE_NOT_FOUND = 9,
	AssetPack_NETWORK_UNRESTRICTED = 10,
	AssetPack_INTERNAL_ERROR = 11,
	AssetPack_INITIALIZATION_NEEDED = 12,
	AssetPack_INITIALIZATION_FAILED = 13,
	AssetPack_MAX = 14
};

// Object: Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGooglePADFunctionLibrary, "GooglePADFunctionLibrary")

	// Object: Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc590
	// Params: [ Num(1) Size(0x1) ]
	static EGooglePADErrorCode ShowCellularDataConfirmation();

	// Object: Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc4e4
	// Params: [ Num(2) Size(0x11) ]
	static EGooglePADErrorCode RequestRemoval(struct FString Name);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc414
	// Params: [ Num(2) Size(0x11) ]
	static EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc344
	// Params: [ Num(2) Size(0x11) ]
	static EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc2b0
	// Params: [ Num(1) Size(0x4) ]
	static void ReleaseDownloadState(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc21c
	// Params: [ Num(1) Size(0x4) ]
	static void ReleaseAssetPackLocation(int32_t Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc178
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetTotalBytesToDownload(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edc0d4
	// Params: [ Num(2) Size(0x5) ]
	static EGooglePADStorageMethod GetStorageMethod(int32_t Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8edc020
	// Params: [ Num(2) Size(0x2) ]
	static EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edbf7c
	// Params: [ Num(2) Size(0x5) ]
	static EGooglePADDownloadStatus GetDownloadStatus(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8edbe84
	// Params: [ Num(3) Size(0x15) ]
	static EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t& State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edbde0
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetBytesDownloaded(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edbd08
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetAssetsPath(int32_t Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8edbc10
	// Params: [ Num(3) Size(0x15) ]
	static EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t& Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8edbb40
	// Params: [ Num(2) Size(0x11) ]
	static EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks);
};

} // namespace SDK
