#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: RuntimeFilesDownloader
// Enums: 4
// Structs: 3
// Classes: 4

struct UTexture2D;
struct FCdnLoadDiskItem;
struct FCdnCompareItem;
struct FCdnDownItem;
struct UTexTagAssetUserData;
struct UCDNIconDownManager;
struct URuntimeFilesDownloaderProxy;
struct URuntimeFilesDownloaderLibrary;

// Object: Enum RuntimeFilesDownloader.CdnDownResult
enum class ECdnDownResult : uint8_t
{
	None = 0,
	DownloadFailed = 1,
	SaveFileFailed = 2,
	SuccessCompare = 3,
	CreateTextureSuccess = 4,
	DownloadSuccess = 5,
	CdnDownResult_MAX = 6
};

// Object: Enum RuntimeFilesDownloader.DownloadResult
enum class EDownloadResult : uint8_t
{
	SuccessDownloading = 0,
	DownloadFailed = 1,
	SaveFailed = 2,
	DirectoryCreationFailed = 3,
	SuccessCompare = 4,
	DownloadResult_MAX = 5
};

// Object: Enum RuntimeFilesDownloader.ECdnDownPriority
enum class ECdnDownPriority : uint8_t
{
	Low = 0,
	Default = 1,
	Hight = 2,
	ECdnDownPriority_MAX = 3
};

// Object: Enum RuntimeFilesDownloader.CdnDownStage
enum class ECdnDownStage : uint8_t
{
	Wait = 0,
	Start = 1,
	Progress = 2,
	End = 3,
	CdnDownStage_MAX = 4
};

// Object: ScriptStruct RuntimeFilesDownloader.CdnLoadDiskItem
// Size: 0x38 (Inherited: 0x0)
struct FCdnLoadDiskItem
{
	struct FString FileSavePath; // 0x0(0x10)
	struct FString ETag; // 0x10(0x10)
	uint8_t Pad_0x20[0x18]; // 0x20(0x18)
};

// Object: ScriptStruct RuntimeFilesDownloader.CdnCompareItem
// Size: 0x70 (Inherited: 0x0)
struct FCdnCompareItem
{
	uint32_t HashCode; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString CDN_Url; // 0x8(0x10)
	struct FString OrigCDNUrl; // 0x18(0x10)
	struct FString FileSavePath; // 0x28(0x10)
	struct FString LastModified; // 0x38(0x10)
	ECdnDownPriority Priority; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString Tag; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: ScriptStruct RuntimeFilesDownloader.CdnDownItem
// Size: 0x68 (Inherited: 0x0)
struct FCdnDownItem
{
	uint32_t HashCode; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString CDN_Url; // 0x8(0x10)
	struct FString OrigCDNUrl; // 0x18(0x10)
	struct FString FileSavePath; // 0x28(0x10)
	ECdnDownStage Stage; // 0x38(0x1)
	ECdnDownResult Result; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	int32_t CdnDownReconnectCount; // 0x3C(0x4)
	ECdnDownPriority Priority; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FString Tag; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
};

// Object: Class RuntimeFilesDownloader.TexTagAssetUserData
// Size: 0x88 (Inherited: 0x28)
struct UTexTagAssetUserData : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(UTexTagAssetUserData, "TexTagAssetUserData")

	struct TSet<struct FString> Tags; // 0x28(0x50)
	struct FString Tag; // 0x78(0x10)
};

// Object: Class RuntimeFilesDownloader.CDNIconDownManager
// Size: 0x210 (Inherited: 0x30)
struct UCDNIconDownManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UCDNIconDownManager, "CDNIconDownManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnResult; // 0x38(0x10)
	struct FMulticastInlineDelegate DFCDNImageDownloadSuccessDelegate; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)
	float WidthResize; // 0x78(0x4)
	float HeightResize; // 0x7C(0x4)
	float ResizeNeedHeight; // 0x80(0x4)
	uint8_t bIsGUILowMemoryEnable : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct TMap<uint32_t, struct UTexture2D*> TexForRawImagePool; // 0x88(0x50)
	struct TMap<uint32_t, struct UTexture2D*> TempTexForRawImagePool; // 0xD8(0x50)
	struct TArray<struct FString> ClearPoolNoExistTags; // 0x128(0x10)
	uint8_t Pad_0x138[0xD8]; // 0x138(0xD8)

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.TransferImagePathToSavePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79005e0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString TransferImagePathToSavePath(struct FString ImagePath);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.StopCDNDownLoadProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79005cc
	// Params: [ Num(0) Size(0x0) ]
	void StopCDNDownLoadProgress();

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.ReqCdnDownWithCompare
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790048c
	// Params: [ Num(4) Size(0x31) ]
	uint8_t ReqCdnDownWithCompare(struct FString URL, struct FString SavePath, struct FString InTag);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.ReqCdnDownloadWithTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7900358
	// Params: [ Num(3) Size(0x30) ]
	void ReqCdnDownloadWithTag(struct FString InURL, struct FString InFileSavePath, struct FString InTag);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.ReqCdnDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7900268
	// Params: [ Num(2) Size(0x20) ]
	void ReqCdnDownload(struct FString InURL, struct FString InFileSavePath);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.RemoveClearPoolNoExistTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79001bc
	// Params: [ Num(1) Size(0x10) ]
	void RemoveClearPoolNoExistTag(struct FString Tag);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.RefreshAllUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79001a8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllUI();

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.RecoverCDNDownLoadProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7900194
	// Params: [ Num(0) Size(0x0) ]
	void RecoverCDNDownLoadProgress();

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.LoadAlreadyDiskImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7900004
	// Params: [ Num(4) Size(0x30) ]
	struct UTexture2D* LoadAlreadyDiskImage(struct FString ImagePath, struct FString Tag, uint8_t bCompareVersion);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.IsDownloadInDisk
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78fff4c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsDownloadInDisk(struct FString URL);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.HasClearPoolNoExistTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78ffe94
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasClearPoolNoExistTag(struct FString Tag);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.GetTexture2DFromRawImage
	// Flags: [Final|Native|Public]
	// Offset: 0x78ffde0
	// Params: [ Num(2) Size(0x18) ]
	struct UTexture2D* GetTexture2DFromRawImage(struct FString ImagePath);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.GetFinalDiskPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78ffcf8
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetFinalDiskPath(struct FString URL);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.GetCDNUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78ffc10
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetCDNUrl(struct FString URL);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78ffb6c
	// Params: [ Num(2) Size(0x10) ]
	static struct UCDNIconDownManager* Get(struct UObject* GameInst);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.ClearTexWithTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe25764
	// Params: [ Num(1) Size(0x10) ]
	void ClearTexWithTag(struct FString Tag);

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.ClearPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf864da8
	// Params: [ Num(0) Size(0x0) ]
	void ClearPool();

	// Object: Function RuntimeFilesDownloader.CDNIconDownManager.AddClearPoolNoExistTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc17a50
	// Params: [ Num(1) Size(0x10) ]
	void AddClearPoolNoExistTag(struct FString Tag);
};

// Object: Class RuntimeFilesDownloader.RuntimeFilesDownloaderProxy
// Size: 0xA0 (Inherited: 0x28)
struct URuntimeFilesDownloaderProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(URuntimeFilesDownloaderProxy, "RuntimeFilesDownloaderProxy")

	struct FMulticastInlineDelegate OnProgress; // 0x28(0x10)
	struct FMulticastInlineDelegate OnResult; // 0x38(0x10)
	struct FMulticastInlineDelegate OnError; // 0x48(0x10)
	struct FString FileURL; // 0x58(0x10)
	struct FString FileSavePath; // 0x68(0x10)
	struct FString LastModified_Compare; // 0x78(0x10)
	int32_t FileStreamingBuffSize; // 0x88(0x4)
	uint8_t Pad_0x8C[0x14]; // 0x8C(0x14)

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderProxy.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7900acc
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderProxy.DownloadFileWithCompare
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790098c
	// Params: [ Num(4) Size(0x31) ]
	uint8_t DownloadFileWithCompare(struct FString URL, struct FString SavePath, struct FString LastModified);

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderProxy.DownloadFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7900854
	// Params: [ Num(4) Size(0x25) ]
	uint8_t DownloadFile(struct FString URL, struct FString SavePath, int32_t StreamingBuffSize);

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderProxy.Cancel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x790081c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Cancel();
};

// Object: Class RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary
// Size: 0x28 (Inherited: 0x28)
struct URuntimeFilesDownloaderLibrary : UObject
{
	DEFINE_UE_CLASS_HELPERS(URuntimeFilesDownloaderLibrary, "RuntimeFilesDownloaderLibrary")

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.GetLogDirAbsolutePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7900c80
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLogDirAbsolutePath();

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.GetCDNIconDownManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf41a154
	// Params: [ Num(1) Size(0x8) ]
	static struct UCDNIconDownManager* GetCDNIconDownManager();

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.CreateDownloader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7900c4c
	// Params: [ Num(1) Size(0x8) ]
	static struct URuntimeFilesDownloaderProxy* CreateDownloader();

	// Object: Function RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.Convert2PublicSavedPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7900bb4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString Convert2PublicSavedPath();
};

} // namespace SDK
