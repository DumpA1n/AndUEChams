#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "PixUI.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: Gamelet
// Enums: 2
// Structs: 0
// Classes: 10

enum class EPxLogGroups : uint8_t;
enum class EPxLogLevels : uint8_t;
enum class ETextureGroup : uint8_t;
struct FAnchors;
struct FGameletArrayBuffer;
struct FMargin;
struct UMaterialInstanceDynamic;
struct UPixUIWidget;
struct UTexture2D;
struct UUserWidget;
struct UWidgetAnimation;
struct UGamelet;
struct UGameletMatBrush;
struct UGameletEnvMgr;
struct UGameletFile;
struct UGameletPaths;
struct UGameletPuertsEnvMgr;
struct UGameletPuertsUtilities;
struct UGameletSettings;
struct UGameletWidget;
struct UGameletWindow;

// Object: Enum Gamelet.EGameletEnvironment
enum class EGameletEnvironment : uint8_t
{
	Gamelet_Test = 0,
	Gamelet_Product = 1,
	Gamelet_SingaporeTest = 2,
	Gamelet_SingaporeProduct = 3,
	Gamelet_GarenaTest = 4,
	Gamelet_GarenaProduct = 5,
	Gamelet_MAX = 6
};

// Object: Enum Gamelet.ECmd
enum class ECmd : uint32_t
{
	ECmdGSendMessageToApp = 10001,
	ECmdS2ESDKInitialized = 40001,
	ECmdS2EOnCgiProcessComplete = 40002,
	ECmdS2EStartPuertsVM = 40003,
	ECmdS2EPrepareGcrpRes = 40004,
	ECmdS2PMin = 60000,
	ECmdS2PMax = 69999,
	ECmd_MAX = 70000
};

// Object: Class Gamelet.Gamelet
// Size: 0x48 (Inherited: 0x28)
struct UGamelet : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)


	// Object: Function Gamelet.Gamelet.UpdateProductConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89bc314
	// Params: [ Num(1) Size(0x4) ]
	int32_t UpdateProductConfig();

	// Object: Function Gamelet.Gamelet.Tick
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x89bc270
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float fDeltaTime);

	// Object: Function Gamelet.Gamelet.StopTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x89bc25c
	// Params: [ Num(0) Size(0x0) ]
	static void StopTick();

	// Object: Function Gamelet.Gamelet.StartTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x89bc248
	// Params: [ Num(0) Size(0x0) ]
	static void StartTick();

	// Object: Function Gamelet.Gamelet.SetTickIntervalSec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x89bc1b4
	// Params: [ Num(1) Size(0x4) ]
	static void SetTickIntervalSec(float TickIntervalSec);

	// Object: Function Gamelet.Gamelet.SetScriptExternalLoadDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bc100
	// Params: [ Num(2) Size(0x14) ]
	int32_t SetScriptExternalLoadDir(struct FString ExternalLoadDir);

	// Object: Function Gamelet.Gamelet.SetProductConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10685e1c
	// Params: [ Num(1) Size(0x10) ]
	static void SetProductConfig(struct FString NewConfig);

	// Object: Function Gamelet.Gamelet.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bc008
	// Params: [ Num(3) Size(0x24) ]
	int32_t SetFont(struct FString FontName, struct FString FontPath);

	// Object: Function Gamelet.Gamelet.SetDefaultFont
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xfdc8d9c
	// Params: [ Num(2) Size(0x14) ]
	int32_t SetDefaultFont(struct FString FontName);

	// Object: Function Gamelet.Gamelet.SetBuiltinResConfig
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bbf54
	// Params: [ Num(2) Size(0x14) ]
	int32_t SetBuiltinResConfig(struct FString ResConfig);

	// Object: Function Gamelet.Gamelet.SetAppVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bbe5c
	// Params: [ Num(3) Size(0x18) ]
	int32_t SetAppVisibility(struct FString APPID, uint8_t Visible);

	// Object: Function Gamelet.Gamelet.SetAppPageVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bbd20
	// Params: [ Num(4) Size(0x28) ]
	int32_t SetAppPageVisibility(struct FString APPID, struct FString AppPage, uint8_t Visible);

	// Object: Function Gamelet.Gamelet.SendMessageToSdk
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bbc6c
	// Params: [ Num(2) Size(0x14) ]
	int32_t SendMessageToSdk(struct FString Msg);

	// Object: Function Gamelet.Gamelet.SendMessageToApp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bbb74
	// Params: [ Num(3) Size(0x24) ]
	int32_t SendMessageToApp(struct FString APPID, struct FString Msg);

	// Object: Function Gamelet.Gamelet.RefreshUserdata
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bba80
	// Params: [ Num(2) Size(0x54) ]
	int32_t RefreshUserdata(const struct TMap<struct FString, struct FString>& UserData);

	// Object: Function Gamelet.Gamelet.OpenBeforeLoginWithGameVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89bb990
	// Params: [ Num(3) Size(0x1C) ]
	int32_t OpenBeforeLoginWithGameVersion(EGameletEnvironment Environment, struct FString GameVersion);

	// Object: Function Gamelet.Gamelet.OpenBeforeLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89bb8e4
	// Params: [ Num(2) Size(0x8) ]
	int32_t OpenBeforeLogin(EGameletEnvironment Environment);

	// Object: Function Gamelet.Gamelet.OpenApp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bb7ec
	// Params: [ Num(3) Size(0x24) ]
	int32_t OpenApp(struct FString APPID, struct FString OpenArgs);

	// Object: Function Gamelet.Gamelet.Open
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x89bb6bc
	// Params: [ Num(3) Size(0x5C) ]
	int32_t Open(EGameletEnvironment Environment, const struct TMap<struct FString, struct FString>& UserData);

	// Object: Function Gamelet.Gamelet.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89bb610
	// Params: [ Num(2) Size(0xC) ]
	int32_t Initialize(struct UGameletSettings* Settings);

	// Object: Function Gamelet.Gamelet.GetProductConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf97f114
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetProductConfig();

	// Object: Function Gamelet.Gamelet.GetGlobalSettings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bb5dc
	// Params: [ Num(1) Size(0x8) ]
	struct UGameletSettings* GetGlobalSettings();

	// Object: Function Gamelet.Gamelet.GetBackTrace
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bb518
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetBackTrace(struct FString& TraceInfo);

	// Object: Function Gamelet.Gamelet.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10140c64
	// Params: [ Num(1) Size(0x8) ]
	static struct UGamelet* Get();

	// Object: Function Gamelet.Gamelet.ExecOnSDKMessage
	// Flags: [Final|Native|Private]
	// Offset: 0x89bb464
	// Params: [ Num(2) Size(0x14) ]
	int32_t ExecOnSDKMessage(struct FString Msg);

	// Object: Function Gamelet.Gamelet.ExecOnReportData
	// Flags: [Final|Native|Private]
	// Offset: 0x89bb36c
	// Params: [ Num(3) Size(0x24) ]
	int32_t ExecOnReportData(struct FString EventName, struct FString Data);

	// Object: Function Gamelet.Gamelet.ExecOnRefreshUserdata
	// Flags: [Final|Native|Private]
	// Offset: 0x89bb338
	// Params: [ Num(1) Size(0x4) ]
	int32_t ExecOnRefreshUserdata();

	// Object: Function Gamelet.Gamelet.EnableLog
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x89bb28c
	// Params: [ Num(1) Size(0x1) ]
	void EnableLog(uint8_t Enable);

	// Object: Function Gamelet.Gamelet.Deinitialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89bb258
	// Params: [ Num(1) Size(0x4) ]
	int32_t Deinitialize();

	// Object: Function Gamelet.Gamelet.CollectPixUILogOutput
	// Flags: [Final|Native|Private]
	// Offset: 0xfa2fc00
	// Params: [ Num(3) Size(0x18) ]
	void CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, struct FString logContent);

	// Object: Function Gamelet.Gamelet.CloseAppPage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bb160
	// Params: [ Num(3) Size(0x24) ]
	int32_t CloseAppPage(struct FString APPID, struct FString AppPage);

	// Object: Function Gamelet.Gamelet.CloseApp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bb0ac
	// Params: [ Num(2) Size(0x14) ]
	int32_t CloseApp(struct FString APPID);

	// Object: Function Gamelet.Gamelet.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89bb078
	// Params: [ Num(1) Size(0x4) ]
	int32_t Close();

	// Object: Function Gamelet.Gamelet.AllAssetsGC
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bb044
	// Params: [ Num(1) Size(0x4) ]
	int32_t AllAssetsGC();
	DEFINE_UE_CLASS_HELPERS(UGamelet, "Gamelet")

};

// Object: Class Gamelet.GameletMatBrush
// Size: 0x40 (Inherited: 0x38)
struct UGameletMatBrush : UPixUIBrushWrapper
{
	struct UMaterialInstanceDynamic* MatInstance; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UGameletMatBrush, "GameletMatBrush")

};

// Object: Class Gamelet.GameletEnvMgr
// Size: 0x98 (Inherited: 0x28)
struct UGameletEnvMgr : UObject
{
	uint8_t Pad_0x28[0x70]; // 0x28(0x70)


	// Object: Function Gamelet.GameletEnvMgr.OnEnvToGameMessage
	// Flags: [Final|Native|Public]
	// Offset: 0x89bc988
	// Params: [ Num(2) Size(0x14) ]
	int32_t OnEnvToGameMessage(struct FString Msg);

	// Object: Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage
	// Flags: [Final|Native|Public]
	// Offset: 0x89bc8d4
	// Params: [ Num(2) Size(0x14) ]
	int32_t OnEnvToEntryMessage(struct FString Msg);

	// Object: Function Gamelet.GameletEnvMgr.OnEnvReportData
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bc7dc
	// Params: [ Num(3) Size(0x24) ]
	int32_t OnEnvReportData(struct FString EventName, struct FString Data);

	// Object: Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bc7a8
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnEnvRefreshUserdata();

	// Object: Function Gamelet.GameletEnvMgr.OnEnvLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x89bc6c0
	// Params: [ Num(2) Size(0x14) ]
	void OnEnvLoaded(struct FString URL, int32_t ErrorCode);

	// Object: Function Gamelet.GameletEnvMgr.OnEnvInternalError
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bc5d8
	// Params: [ Num(2) Size(0x18) ]
	void OnEnvInternalError(int32_t ErrorCode, struct FString ErrorMsg);

	// Object: Function Gamelet.GameletEnvMgr.GetBackTrace
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bc540
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetBackTrace();
	DEFINE_UE_CLASS_HELPERS(UGameletEnvMgr, "GameletEnvMgr")

};

// Object: Class Gamelet.GameletFile
// Size: 0x28 (Inherited: 0x28)
struct UGameletFile : UBlueprintFunctionLibrary
{

	// Object: Function Gamelet.GameletFile.WriteFile
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x89bd1d0
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t WriteFile(struct FString Path, const struct FGameletArrayBuffer& ArrayBuffer);

	// Object: Function Gamelet.GameletFile.SaveStringToFile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd0dc
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t SaveStringToFile(struct FString Path, struct FString Content);

	// Object: Function Gamelet.GameletFile.ReadFile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd020
	// Params: [ Num(2) Size(0x28) ]
	static struct FGameletArrayBuffer ReadFile(struct FString Path);

	// Object: Function Gamelet.GameletFile.LoadFileToString
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bcf40
	// Params: [ Num(2) Size(0x20) ]
	static struct FString LoadFileToString(struct FString Path);

	// Object: Function Gamelet.GameletFile.GetFileMd5
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bce60
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetFileMd5(struct FString Path);

	// Object: Function Gamelet.GameletFile.FileSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bcdb4
	// Params: [ Num(2) Size(0x18) ]
	static int64_t FileSize(struct FString Path);

	// Object: Function Gamelet.GameletFile.FileExists
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bcd04
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t FileExists(struct FString Path);

	// Object: Function Gamelet.GameletFile.DirectoryExists
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bcc54
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t DirectoryExists(struct FString Path);

	// Object: Function Gamelet.GameletFile.DeleteFile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bcba4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t DeleteFile(struct FString Path);

	// Object: Function Gamelet.GameletFile.DeleteDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bcaf4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t DeleteDirectory(struct FString Path);

	// Object: Function Gamelet.GameletFile.CreateDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bca44
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CreateDirectory(struct FString Path);
	DEFINE_UE_CLASS_HELPERS(UGameletFile, "GameletFile")

};

// Object: Class Gamelet.GameletPaths
// Size: 0x28 (Inherited: 0x28)
struct UGameletPaths : UBlueprintFunctionLibrary
{

	// Object: Function Gamelet.GameletPaths.ToAbsolutePathForWrite
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be020
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ToAbsolutePathForWrite(struct FString Path);

	// Object: Function Gamelet.GameletPaths.ToAbsolutePathForRead
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdf40
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ToAbsolutePathForRead(struct FString Path);

	// Object: Function Gamelet.GameletPaths.RootDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdea8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString RootDir();

	// Object: Function Gamelet.GameletPaths.ProjectUserDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bde10
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectUserDir();

	// Object: Function Gamelet.GameletPaths.ProjectSavedDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdd78
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectSavedDir();

	// Object: Function Gamelet.GameletPaths.ProjectModsDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdce0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectModsDir();

	// Object: Function Gamelet.GameletPaths.ProjectIntermediateDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdc48
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectIntermediateDir();

	// Object: Function Gamelet.GameletPaths.ProjectDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdbb0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectDir();

	// Object: Function Gamelet.GameletPaths.ProjectContentDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bdb18
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectContentDir();

	// Object: Function Gamelet.GameletPaths.ProjectConfigDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bda80
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ProjectConfigDir();

	// Object: Function Gamelet.GameletPaths.LaunchDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd9e8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString LaunchDir();

	// Object: Function Gamelet.GameletPaths.GetPuertsScriptFolderName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd950
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPuertsScriptFolderName();

	// Object: Function Gamelet.GameletPaths.GetPuertsEntrancePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd870
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetPuertsEntrancePath(struct FString PakName);

	// Object: Function Gamelet.GameletPaths.GetPuertsAppScriptPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd790
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetPuertsAppScriptPath(struct FString AppFolderName);

	// Object: Function Gamelet.GameletPaths.GetPuertsAppNameByPakName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd6b0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetPuertsAppNameByPakName(struct FString PakName);

	// Object: Function Gamelet.GameletPaths.GetPuertsAppIndexPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd5d0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetPuertsAppIndexPath(struct FString AppFolderName);

	// Object: Function Gamelet.GameletPaths.GameletSavedRoot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd538
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GameletSavedRoot();

	// Object: Function Gamelet.GameletPaths.GameletFolderName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd4a0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GameletFolderName();

	// Object: Function Gamelet.GameletPaths.GameletContentRoot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd408
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GameletContentRoot();

	// Object: Function Gamelet.GameletPaths.GameletAppArchiveRoot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bd328
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GameletAppArchiveRoot(struct FString APPID);
	DEFINE_UE_CLASS_HELPERS(UGameletPaths, "GameletPaths")

};

// Object: Class Gamelet.GameletPuertsEnvMgr
// Size: 0x98 (Inherited: 0x28)
struct UGameletPuertsEnvMgr : UObject
{
	struct FMulticastInlineDelegate OnPostMessage; // 0x28(0x10)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)


	// Object: Function Gamelet.GameletPuertsEnvMgr.OnEnvScriptStateInit
	// Flags: [Final|Native|Public]
	// Offset: 0x89be2d0
	// Params: [ Num(0) Size(0x0) ]
	void OnEnvScriptStateInit();

	// Object: Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage
	// Flags: [Final|Native|Public]
	// Offset: 0x89be224
	// Params: [ Num(1) Size(0x10) ]
	void OnEnvMessage(struct FString Msg);

	// Object: Function Gamelet.GameletPuertsEnvMgr.OnEnvLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x89be13c
	// Params: [ Num(2) Size(0x14) ]
	void OnEnvLoaded(struct FString URL, int32_t ErrorCode);

	// Object: Function Gamelet.GameletPuertsEnvMgr.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be108
	// Params: [ Num(1) Size(0x8) ]
	static struct UGameletPuertsEnvMgr* Get();
	DEFINE_UE_CLASS_HELPERS(UGameletPuertsEnvMgr, "GameletPuertsEnvMgr")

};

// Object: Class Gamelet.GameletPuertsUtilities
// Size: 0x28 (Inherited: 0x28)
struct UGameletPuertsUtilities : UBlueprintFunctionLibrary
{

	// Object: Function Gamelet.GameletPuertsUtilities.UpdateTextureResources
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bec70
	// Params: [ Num(1) Size(0x8) ]
	static void UpdateTextureResources(struct UTexture2D* Texture);

	// Object: Function Gamelet.GameletPuertsUtilities.UnMountPak
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bebc4
	// Params: [ Num(2) Size(0x14) ]
	static int32_t UnMountPak(struct FString PakPath);

	// Object: Function Gamelet.GameletPuertsUtilities.RemoveUserWidgetFromGame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89beaec
	// Params: [ Num(2) Size(0x18) ]
	static void RemoveUserWidgetFromGame(struct UUserWidget* UserWidget, struct FString PanelInfo);

	// Object: Function Gamelet.GameletPuertsUtilities.ReleaseTextureResource
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89bea58
	// Params: [ Num(1) Size(0x8) ]
	static void ReleaseTextureResource(struct UTexture2D* Texture);

	// Object: Function Gamelet.GameletPuertsUtilities.MountPak
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be9ac
	// Params: [ Num(2) Size(0x14) ]
	static int32_t MountPak(struct FString PakPath);

	// Object: Function Gamelet.GameletPuertsUtilities.LoadUI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be8c4
	// Params: [ Num(3) Size(0x20) ]
	static struct UUserWidget* LoadUI(struct FString Ref, struct UObject* obj);

	// Object: Function Gamelet.GameletPuertsUtilities.LoadImageToTexture2D
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be7a0
	// Params: [ Num(4) Size(0x20) ]
	static struct UTexture2D* LoadImageToTexture2D(struct FString Path, ETextureGroup LODGroup, uint8_t IsSRGB);

	// Object: Function Gamelet.GameletPuertsUtilities.IsWithEditor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be768
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsWithEditor();

	// Object: Function Gamelet.GameletPuertsUtilities.HelloWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be754
	// Params: [ Num(0) Size(0x0) ]
	static void HelloWorld();

	// Object: Function Gamelet.GameletPuertsUtilities.GetWidgetAnimationByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be66c
	// Params: [ Num(3) Size(0x20) ]
	static struct UWidgetAnimation* GetWidgetAnimationByName(struct UUserWidget* Widget, struct FString Name);

	// Object: Function Gamelet.GameletPuertsUtilities.GetSDKVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be5d4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetSDKVersion();

	// Object: Function Gamelet.GameletPuertsUtilities.GetPlatformDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be53c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPlatformDesc();

	// Object: Function Gamelet.GameletPuertsUtilities.GetNetworkType
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be508
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetNetworkType();

	// Object: Function Gamelet.GameletPuertsUtilities.GetHardwareInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be470
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetHardwareInfo();

	// Object: Function Gamelet.GameletPuertsUtilities.GetEngineVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be3d8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetEngineVersion();

	// Object: Function Gamelet.GameletPuertsUtilities.FlushPuertsVMMessages
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be3c4
	// Params: [ Num(0) Size(0x0) ]
	static void FlushPuertsVMMessages();

	// Object: Function Gamelet.GameletPuertsUtilities.AddUserWidgetToGame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x89be2ec
	// Params: [ Num(2) Size(0x18) ]
	static void AddUserWidgetToGame(struct UUserWidget* UserWidget, struct FString PanelInfo);
	DEFINE_UE_CLASS_HELPERS(UGameletPuertsUtilities, "GameletPuertsUtilities")

};

// Object: Class Gamelet.GameletSettings
// Size: 0xA0 (Inherited: 0x28)
struct UGameletSettings : UObject
{
	struct FDelegate OnSDKMessage; // 0x28(0x10)
	struct FDelegate OnRefreshUserdata; // 0x38(0x10)
	struct FDelegate OnViewCreated; // 0x48(0x10)
	struct FDelegate OnViewAboutToDestroy; // 0x58(0x10)
	struct FDelegate OnReportData; // 0x68(0x10)
	struct FDelegate OnProfileJSSDKMessage; // 0x78(0x10)
	uint8_t DisableJsErrReport : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t DisableGetBackTrace : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t DelayWndCallMsg : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t BitPad_0x8A_1 : 7; // 0x8A(0x1)
	uint8_t SupportUseEngineFont : 1; // 0x8B(0x1), Mask(0x1)
	uint8_t BitPad_0x8B_1 : 7; // 0x8B(0x1)
	uint8_t UseSRGB : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t ForbiddenSyncServerLogConf : 1; // 0x8D(0x1), Mask(0x1)
	uint8_t BitPad_0x8D_1 : 7; // 0x8D(0x1)
	uint8_t Pad_0x8E[0x2]; // 0x8E(0x2)
	struct FDelegate OnCoreCodeLoad; // 0x90(0x10)


	// Object: Function Gamelet.GameletSettings.IsValidSetting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89bed18
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsValidSetting();

	// Object: Function Gamelet.GameletSettings.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xff91958
	// Params: [ Num(1) Size(0x8) ]
	static struct UGameletSettings* Get();
	DEFINE_UE_CLASS_HELPERS(UGameletSettings, "GameletSettings")

};

// Object: Class Gamelet.GameletWidget
// Size: 0x1F8 (Inherited: 0x1D0)
struct UGameletWidget : UCanvasPanel
{
	uint8_t Pad_0x1D0[0x28]; // 0x1D0(0x28)


	// Object: Function Gamelet.GameletWidget.SetWidgetOffset
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bf1dc
	// Params: [ Num(1) Size(0x10) ]
	void SetWidgetOffset(struct FMargin OffsetData);

	// Object: Function Gamelet.GameletWidget.SetWidgetAnchor
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bf134
	// Params: [ Num(1) Size(0x10) ]
	void SetWidgetAnchor(struct FAnchors AnchorData);

	// Object: Function Gamelet.GameletWidget.SetUseSRGB
	// Flags: [Final|Native|Public]
	// Offset: 0x89bf088
	// Params: [ Num(1) Size(0x1) ]
	void SetUseSRGB(uint8_t EnableSRGB);

	// Object: Function Gamelet.GameletWidget.SetRHIConfigured
	// Flags: [Final|Native|Public]
	// Offset: 0x89befdc
	// Params: [ Num(1) Size(0x1) ]
	void SetRHIConfigured(uint8_t Configured);

	// Object: Function Gamelet.GameletWidget.SetBackgroundWidgetOffset
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bef34
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundWidgetOffset(struct FMargin OffsetData);

	// Object: Function Gamelet.GameletWidget.SetBackgroundWidgetAnchor
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bee8c
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundWidgetAnchor(struct FAnchors AnchorData);

	// Object: Function Gamelet.GameletWidget.SetBackgroundImage
	// Flags: [Final|Native|Public]
	// Offset: 0x89bede0
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundImage(struct FString ImagePath);

	// Object: Function Gamelet.GameletWidget.GetPixUIWidget
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89bedac
	// Params: [ Num(1) Size(0x8) ]
	struct TWeakObjectPtr<struct UPixUIWidget> GetPixUIWidget();
	DEFINE_UE_CLASS_HELPERS(UGameletWidget, "GameletWidget")

};

// Object: Class Gamelet.GameletWindow
// Size: 0x170 (Inherited: 0x28)
struct UGameletWindow : UObject
{
	uint8_t Pad_0x28[0x148]; // 0x28(0x148)


	// Object: Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit
	// Flags: [Final|Native|Private]
	// Offset: 0x89bf77c
	// Params: [ Num(0) Size(0x0) ]
	void OnPxWidgetScriptStateInit();

	// Object: Function Gamelet.GameletWindow.OnPxWidgetScriptStateDone
	// Flags: [Final|Native|Private]
	// Offset: 0x89bf768
	// Params: [ Num(0) Size(0x0) ]
	void OnPxWidgetScriptStateDone();

	// Object: Function Gamelet.GameletWindow.OnPxWidgetRequestOpen
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x89bf5e4
	// Params: [ Num(5) Size(0x32) ]
	uint8_t OnPxWidgetRequestOpen(struct FString URL, struct FString Name, struct FString Features, uint8_t bReplace);

	// Object: Function Gamelet.GameletWindow.OnPxWidgetMessage
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x89bf538
	// Params: [ Num(1) Size(0x10) ]
	void OnPxWidgetMessage(struct FString Msg);

	// Object: Function Gamelet.GameletWindow.OnPxWidgetLoaded
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x89bf450
	// Params: [ Num(2) Size(0x14) ]
	void OnPxWidgetLoaded(struct FString URL, int32_t ErrorCode);

	// Object: Function Gamelet.GameletWindow.OnPxWidgetInternalError
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x89bf368
	// Params: [ Num(2) Size(0x18) ]
	void OnPxWidgetInternalError(int32_t ErrorCode, struct FString ErrorMsg);

	// Object: Function Gamelet.GameletWindow.OnPxWidgetClose
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x89bf354
	// Params: [ Num(0) Size(0x0) ]
	void OnPxWidgetClose();
	DEFINE_UE_CLASS_HELPERS(UGameletWindow, "GameletWindow")

};

} // namespace SDK
