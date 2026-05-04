#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: DFLQATool
// Enums: 0
// Structs: 1
// Classes: 9

struct UButton;
struct UCanvasPanel;
struct UGameInstance;
struct UTexture2D;
struct UUserWidget;
struct UWidget;
struct FWidgetMeta;
struct ULQABaseView;
struct ULQAHttpProxy;
struct ULQAManager;
struct ULQARemoteToolManager;
struct ULQARestoreManager;
struct ULQASettings;
struct ULQASavedData;
struct URestoreWindowProxy;
struct URootObjWidget;

// Object: ScriptStruct DFLQATool.WidgetMeta
// Size: 0x20 (Inherited: 0x0)
struct FWidgetMeta
{
	struct UWidget* WidgetIns; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: Class DFLQATool.LQABaseView
// Size: 0x308 (Inherited: 0x2F8)
struct ULQABaseView : UUserWidget
{
	struct UButton* ScreenShotBtn; // 0x2F8(0x8)
	struct UButton* DumpViewBtn; // 0x300(0x8)


	// Object: Function DFLQATool.LQABaseView.ScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b846f4
	// Params: [ Num(0) Size(0x0) ]
	void ScreenShot();

	// Object: Function DFLQATool.LQABaseView.DumpView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b846e0
	// Params: [ Num(0) Size(0x0) ]
	void DumpView();
	DEFINE_UE_CLASS_HELPERS(ULQABaseView, "LQABaseView")

};

// Object: Class DFLQATool.LQAHttpProxy
// Size: 0x118 (Inherited: 0x28)
struct ULQAHttpProxy : UObject
{
	uint8_t Pad_0x28[0x68]; // 0x28(0x68)
	struct UGameInstance* GameInstanceCache; // 0x90(0x8)
	uint8_t Pad_0x98[0x80]; // 0x98(0x80)
	DEFINE_UE_CLASS_HELPERS(ULQAHttpProxy, "LQAHttpProxy")

};

// Object: Class DFLQATool.LQAManager
// Size: 0x58 (Inherited: 0x30)
struct ULQAManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct ULQASettings* LQASettings; // 0x48(0x8)
	struct ULQABaseView* LQAWidget; // 0x50(0x8)


	// Object: Function DFLQATool.LQAManager.LQAEnableAutoDump
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84a44
	// Params: [ Num(2) Size(0x8) ]
	void LQAEnableAutoDump(uint8_t NeedWholeData, int32_t Frames);

	// Object: Function DFLQATool.LQAManager.LQADumpViewAndSnapshot
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x7b84a30
	// Params: [ Num(0) Size(0x0) ]
	void LQADumpViewAndSnapshot();

	// Object: Function DFLQATool.LQAManager.LQADumpViewAdvanced
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x7b84940
	// Params: [ Num(2) Size(0x2) ]
	void LQADumpViewAdvanced(uint8_t bContainsTextures, uint8_t bNeedObjectData);

	// Object: Function DFLQATool.LQAManager.LQADumpView
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x7b84850
	// Params: [ Num(2) Size(0x2) ]
	void LQADumpView(uint8_t bContainsTextures, uint8_t bNeedObjectData);

	// Object: Function DFLQATool.LQAManager.LQADisableAutoDump
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b8483c
	// Params: [ Num(0) Size(0x0) ]
	void LQADisableAutoDump();

	// Object: Function DFLQATool.LQAManager.IsLQAReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7b84804
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLQAReady();

	// Object: Function DFLQATool.LQAManager.InitAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b847f0
	// Params: [ Num(0) Size(0x0) ]
	void InitAll();

	// Object: Function DFLQATool.LQAManager.GetLQASettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b847d4
	// Params: [ Num(1) Size(0x8) ]
	struct ULQASettings* GetLQASettings();

	// Object: Function DFLQATool.LQAManager.GetLQAManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b84730
	// Params: [ Num(2) Size(0x10) ]
	static struct ULQAManager* GetLQAManager(struct UObject* GameIns);

	// Object: Function DFLQATool.LQAManager.DeInitAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b8471c
	// Params: [ Num(0) Size(0x0) ]
	void DeInitAll();
	DEFINE_UE_CLASS_HELPERS(ULQAManager, "LQAManager")

};

// Object: Class DFLQATool.LQARemoteToolManager
// Size: 0x90 (Inherited: 0x30)
struct ULQARemoteToolManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnLQALogin; // 0x30(0x10)
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct ULQAHttpProxy* LQAProxy; // 0x70(0x8)
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)


	// Object: Function DFLQATool.LQARemoteToolManager.SendSnapshotData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84ea4
	// Params: [ Num(0) Size(0x0) ]
	void SendSnapshotData();

	// Object: Function DFLQATool.LQARemoteToolManager.OnFileZipFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x7b84dbc
	// Params: [ Num(2) Size(0x10) ]
	void OnFileZipFinished(uint8_t bSuccess, int64_t Count);

	// Object: Function DFLQATool.LQARemoteToolManager.LocalSnapshot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84da8
	// Params: [ Num(0) Size(0x0) ]
	void LocalSnapshot();

	// Object: Function DFLQATool.LQARemoteToolManager.IsLQAConnected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84d70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLQAConnected();

	// Object: Function DFLQATool.LQARemoteToolManager.InitLQARemoteTool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84cc4
	// Params: [ Num(1) Size(0x10) ]
	void InitLQARemoteTool(struct FString InServerUrl);

	// Object: Function DFLQATool.LQARemoteToolManager.GetServerID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84c2c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetServerID();

	// Object: Function DFLQATool.LQARemoteToolManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b84b88
	// Params: [ Num(2) Size(0x10) ]
	static struct ULQARemoteToolManager* Get(struct UGameInstance* GameInstance);
	DEFINE_UE_CLASS_HELPERS(ULQARemoteToolManager, "LQARemoteToolManager")

};

// Object: Class DFLQATool.LQARestoreManager
// Size: 0xC0 (Inherited: 0x30)
struct ULQARestoreManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TMap<uint32_t, struct URestoreWindowProxy*> ActiveWindow; // 0x40(0x50)
	uint8_t Pad_0x90[0x30]; // 0x90(0x30)


	// Object: Function DFLQATool.LQARestoreManager.MakeRestoredWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84fc0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t MakeRestoredWindow(struct FString DumpFilePath);

	// Object: Function DFLQATool.LQARestoreManager.GetFilePaths
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84f14
	// Params: [ Num(1) Size(0x10) ]
	void GetFilePaths(struct FString DumpFilePath);

	// Object: Function DFLQATool.LQARestoreManager.DelayedLoopStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84f00
	// Params: [ Num(0) Size(0x0) ]
	void DelayedLoopStep();

	// Object: Function DFLQATool.LQARestoreManager.DelayedLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84eec
	// Params: [ Num(0) Size(0x0) ]
	void DelayedLoop();

	// Object: Function DFLQATool.LQARestoreManager.ClearRestoreWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b84ed8
	// Params: [ Num(0) Size(0x0) ]
	void ClearRestoreWindow();
	DEFINE_UE_CLASS_HELPERS(ULQARestoreManager, "LQARestoreManager")

};

// Object: Class DFLQATool.LQASettings
// Size: 0xC0 (Inherited: 0x28)
struct ULQASettings : UObject
{
	uint8_t bEnableLQATool : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftClassPtr<struct UUserWidget*> LQABaseView; // 0x30(0x28)
	uint8_t bEnableBlackNameFilter : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t bEnableLayerIdFilter : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t bFilterByUserWidget : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t bFilterByWidget : 1; // 0x5B(0x1), Mask(0x1)
	uint8_t BitPad_0x5B_1 : 7; // 0x5B(0x1)
	uint8_t bPriotiryInText : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<struct FString> BlackNameList; // 0x60(0x10)
	struct FString RemoteServerUrl; // 0x70(0x10)
	uint8_t bEnableEncrypt : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct FString SecretEncryptKey; // 0x88(0x10)
	struct TSoftClassPtr<struct UUserWidget*> LQARestoreRoot; // 0x98(0x28)
	DEFINE_UE_CLASS_HELPERS(ULQASettings, "LQASettings")

};

// Object: Class DFLQATool.LQASavedData
// Size: 0x38 (Inherited: 0x28)
struct ULQASavedData : UObject
{
	struct FString LastServerId; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(ULQASavedData, "LQASavedData")

};

// Object: Class DFLQATool.RestoreWindowProxy
// Size: 0x148 (Inherited: 0x28)
struct URestoreWindowProxy : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TMap<struct FString, struct UTexture2D*> SharedTextureMap; // 0x30(0x50)
	struct UTexture2D* MergedSourceTexture; // 0x80(0x8)
	struct TArray<struct UTexture2D*> MergedTextureList; // 0x88(0x10)
	uint8_t Pad_0x98[0x50]; // 0x98(0x50)
	struct TArray<struct FWidgetMeta> WidgetMetaArray; // 0xE8(0x10)
	struct UCanvasPanel* WindowPanel; // 0xF8(0x8)
	uint8_t Pad_0x100[0x38]; // 0x100(0x38)
	struct URootObjWidget* RootObj; // 0x138(0x8)
	struct UGameInstance* CachedGameInstance; // 0x140(0x8)


	// Object: Function DFLQATool.RestoreWindowProxy.AddChildrenToPanel
	// Flags: [Final|Native|Private]
	// Offset: 0x7b850f8
	// Params: [ Num(0) Size(0x0) ]
	void AddChildrenToPanel();
	DEFINE_UE_CLASS_HELPERS(URestoreWindowProxy, "RestoreWindowProxy")

};

// Object: Class DFLQATool.RootObjWidget
// Size: 0x300 (Inherited: 0x2F8)
struct URootObjWidget : UUserWidget
{
	struct UCanvasPanel* MainCanvas; // 0x2F8(0x8)
	DEFINE_UE_CLASS_HELPERS(URootObjWidget, "RootObjWidget")

};

} // namespace SDK
