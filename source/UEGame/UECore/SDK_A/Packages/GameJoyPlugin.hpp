#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GameJoyPlugin
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GameJoyPluginLibrary;

// Object: Class GameJoyPlugin.BP_GameJoyPluginLibrary
// Size: 0x48 (Inherited: 0x28)
struct UBP_GameJoyPluginLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBP_GameJoyPluginLibrary, "BP_GameJoyPluginLibrary")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate onGameJoyEvent; // 0x38(0x10)

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.UpdateRedDot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecf98
	// Params: [ Num(1) Size(0x1) ]
	static void UpdateRedDot(bool showRedDot);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.UnLockRecorderPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed140
	// Params: [ Num(0) Size(0x0) ]
	static void UnLockRecorderPosition();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.StopRecorder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed168
	// Params: [ Num(0) Size(0x0) ]
	static void StopRecorder();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.StartRecorder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed17c
	// Params: [ Num(1) Size(0x1) ]
	static bool StartRecorder();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.ShowRecorderDialog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed5a4
	// Params: [ Num(2) Size(0x8) ]
	static void ShowRecorderDialog(float X, float Y);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.ShowConsole
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecde0
	// Params: [ Num(0) Size(0x0) ]
	static void ShowConsole();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetWwiseListenerStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb328
	// Params: [ Num(1) Size(0x1) ]
	static void SetWwiseListenerStatus(bool isMultiple);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetWatermark
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed678
	// Params: [ Num(3) Size(0x18) ]
	static void SetWatermark(struct FString Path, float X, float Y);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoResolution
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb7d4
	// Params: [ Num(2) Size(0x8) ]
	static void SetVideoResolution(int32_t Type, int32_t Resolution);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed0a8
	// Params: [ Num(1) Size(0x4) ]
	static void SetVideoQuality(int32_t Quality);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoBitrate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb700
	// Params: [ Num(2) Size(0x8) ]
	static void SetVideoBitrate(int32_t Type, int32_t bitrate);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetUseScreenMaxSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eaed8
	// Params: [ Num(1) Size(0x1) ]
	static void SetUseScreenMaxSize(bool Enabled);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetProjectionPermCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb150
	// Params: [ Num(1) Size(0x1) ]
	static void SetProjectionPermCache(bool Enabled);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetMinAvailableSpaceMB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb290
	// Params: [ Num(1) Size(0x4) ]
	static void SetMinAvailableSpaceMB(int32_t minAvailableSpaceMB);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb668
	// Params: [ Num(1) Size(0x4) ]
	static void SetFrameRate(int32_t FrameRate);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetDropFrameTimeMillis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eaf78
	// Params: [ Num(1) Size(0x4) ]
	static void SetDropFrameTimeMillis(int32_t millis);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCoverSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39edb5c
	// Params: [ Num(2) Size(0x8) ]
	static void SetCoverSize(int32_t Width, int32_t Height);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetAutoProfileLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb1f0
	// Params: [ Num(1) Size(0x1) ]
	static void SetAutoProfileLevel(bool Enabled);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetAlbumName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39edfb8
	// Params: [ Num(1) Size(0x10) ]
	static void SetAlbumName(struct FString albumName);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.RequestSDKPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39edd70
	// Params: [ Num(2) Size(0x18) ]
	static void RequestSDKPermission(int32_t EventId, struct FString Type);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.PlayLocalVideo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ebbd0
	// Params: [ Num(2) Size(0x14) ]
	static void PlayLocalVideo(struct FString Path, int32_t Type);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.NotifySpaceNotEnough
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecdf4
	// Params: [ Num(0) Size(0x0) ]
	static void NotifySpaceNotEnough();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveVideoToAlbum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed1b4
	// Params: [ Num(3) Size(0x28) ]
	static void MoveVideoToAlbum(int32_t EventId, struct FString albumName, struct FString srcPath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFileToDocument
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ec188
	// Params: [ Num(2) Size(0x20) ]
	static void MoveFileToDocument(struct FString fromPath, struct FString toSubPath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x39ec7dc
	// Params: [ Num(3) Size(0x21) ]
	static bool MoveFile(struct FString& From, struct FString& dst);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveAlbumToLocal
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ebfb4
	// Params: [ Num(3) Size(0x28) ]
	static void MoveAlbumToLocal(int32_t EventId, struct FString albumPath, struct FString localPath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.MergeVideoWithImageAndVideo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ebd4c
	// Params: [ Num(4) Size(0x38) ]
	static void MergeVideoWithImageAndVideo(int32_t EventId, struct FString videopath, struct FString headerVideo, struct FString ImagePath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.LockRecorderPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed154
	// Params: [ Num(0) Size(0x0) ]
	static void LockRecorderPosition();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecording
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed070
	// Params: [ Num(1) Size(0x1) ]
	static bool IsRecording();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecorderDialogShow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed038
	// Params: [ Num(1) Size(0x1) ]
	static bool IsRecorderDialogShow();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsIOSFileExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ec900
	// Params: [ Num(2) Size(0x11) ]
	static bool IsIOSFileExist(struct FString FilePath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsFileExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eca0c
	// Params: [ Num(2) Size(0x11) ]
	static bool IsFileExist(struct FString FilePath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsDirExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecb18
	// Params: [ Num(2) Size(0x11) ]
	static bool IsDirExist(struct FString Path);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.InitGameJoyBPLib
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecdcc
	// Params: [ Num(0) Size(0x0) ]
	static void InitGameJoyBPLib();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoMd5
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed7e8
	// Params: [ Num(2) Size(0x18) ]
	static void GetVideoMd5(int32_t EventId, struct FString videoPathJson);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eba30
	// Params: [ Num(2) Size(0x18) ]
	static void GetVideoInfo(int32_t EventId, struct FString videoPathJson);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecd98
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetTimeSeconds();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeMilliSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecd64
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetTimeMilliSeconds();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetSandboxPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ebcb4
	// Params: [ Num(1) Size(0x4) ]
	static void GetSandboxPath(int32_t EventId);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetPaths
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ec310
	// Params: [ Num(3) Size(0x18) ]
	static struct FString GetPaths(int32_t pathType, bool relative);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetPathRelativeTo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ec438
	// Params: [ Num(3) Size(0x30) ]
	static struct FString GetPathRelativeTo(struct FString fromPath, struct FString RelativeTo);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetOldVideoFromAlbumName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ece08
	// Params: [ Num(1) Size(0x10) ]
	static void GetOldVideoFromAlbumName(struct FString albumName);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ee0ac
	// Params: [ Num(1) Size(0x8) ]
	static struct UBP_GameJoyPluginLibrary* GetInstance();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetGFilePathBase
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ec60c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGFilePathBase();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFreeDiskSpace
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed55c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetFreeDiskSpace();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesInDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecc24
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetFilesInDir(struct FString Path);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesFromPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb8a8
	// Params: [ Num(3) Size(0x19) ]
	static void GetFilesFromPath(int32_t EventId, struct FString Path, bool isIncludeChildren);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilePathFromUri
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb528
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetFilePathFromUri(struct FString uriPath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFdFromUri
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb470
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetFdFromUri(struct FString Uri);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetDeviceInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ecefc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceInfo();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateVideoCover
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed928
	// Params: [ Num(2) Size(0x18) ]
	static void GenerateVideoCover(int32_t EventId, struct FString videopath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateMomentsVideo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eda68
	// Params: [ Num(1) Size(0x10) ]
	static void GenerateMomentsVideo(struct FString videoTimeStampListJson);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableInGameAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39edcd0
	// Params: [ Num(1) Size(0x1) ]
	static void EnableInGameAudio(bool Enable);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableBgmMix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39edc30
	// Params: [ Num(1) Size(0x1) ]
	static void EnableBgmMix(bool mixing);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.DeleteVideoByAlbum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed388
	// Params: [ Num(3) Size(0x28) ]
	static void DeleteVideoByAlbum(int32_t EventId, struct FString albumName, struct FString srcPath);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.CopyFile
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x39ec6a8
	// Params: [ Num(3) Size(0x21) ]
	bool CopyFile(struct FString& From, struct FString& dst);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.CloseRecorderDialog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ed590
	// Params: [ Num(0) Size(0x0) ]
	static void CloseRecorderDialog();

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.CloseFd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb3c8
	// Params: [ Num(2) Size(0x8) ]
	static int32_t CloseFd(int32_t fd);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.ClipVideo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39eb010
	// Params: [ Num(2) Size(0x18) ]
	static void ClipVideo(int32_t EventId, struct FString videoEditJson);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.CheckSDKPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39edeb0
	// Params: [ Num(2) Size(0x14) ]
	static int32_t CheckSDKPermission(struct FString Type);

	// Object: Function GameJoyPlugin.BP_GameJoyPluginLibrary.CheckAlbumVideoExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ebb14
	// Params: [ Num(2) Size(0x11) ]
	static bool CheckAlbumVideoExist(struct FString Path);
};

} // namespace SDK
