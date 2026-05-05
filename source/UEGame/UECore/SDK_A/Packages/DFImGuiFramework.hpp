#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"

namespace SDK
{

// Package: DFImGuiFramework
// Enums: 1
// Structs: 0
// Classes: 6

struct UDataTable;
struct UTexture2D;
struct UImGuiNetworkProxyComponent;
struct AImGuiPanel;
struct UImGuiPanelManagerSettings;
struct UImGuiPanelPersistentDataManager;
struct UImGuiPanelManager;
struct ALuaImGuiPanel;

// Object: Enum DFImGuiFramework.EToastingMessageType
enum class EToastingMessageType : uint8_t
{
	Info = 0,
	Warning = 1,
	Error = 2,
	EToastingMessageType_MAX = 3
};

// Object: Class DFImGuiFramework.ImGuiNetworkProxyComponent
// Size: 0x148 (Inherited: 0xF8)
struct UImGuiNetworkProxyComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UImGuiNetworkProxyComponent, "ImGuiNetworkProxyComponent")

	struct TMap<struct FName, struct AImGuiPanel*> ServerCreatedPanels; // 0xF8(0x50)

	// Object: Function DFImGuiFramework.ImGuiNetworkProxyComponent.ServerDestroyPanel
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x7b6a120
	// Params: [ Num(1) Size(0x8) ]
	void ServerDestroyPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiNetworkProxyComponent.ServerCreatePanel
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x7b6a074
	// Params: [ Num(1) Size(0x8) ]
	void ServerCreatePanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiNetworkProxyComponent.BroadcastToastMessage
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x7b69f84
	// Params: [ Num(2) Size(0x18) ]
	void BroadcastToastMessage(EToastingMessageType Type, struct FString Message);
};

// Object: Class DFImGuiFramework.ImGuiPanel
// Size: 0x3C0 (Inherited: 0x370)
struct AImGuiPanel : AActor
{
	DEFINE_UE_CLASS_HELPERS(AImGuiPanel, "ImGuiPanel")

	uint8_t Pad_0x370[0x50]; // 0x370(0x50)
};

// Object: Class DFImGuiFramework.ImGuiPanelManagerSettings
// Size: 0x138 (Inherited: 0x38)
struct UImGuiPanelManagerSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UImGuiPanelManagerSettings, "ImGuiPanelManagerSettings")

	uint8_t bEnableImGuiPanelManagerInEditor : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bEnableImGuiPanelManagerInNonShipping : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bEnableImGuiPanelManagerInShipping : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t MaxToastsCount; // 0x3B(0x1)
	float ToastDuration; // 0x3C(0x4)
	struct FKey AcquireCursorShortCut; // 0x40(0x18)
	struct FKey QuickAccessMenuShortCut; // 0x58(0x18)
	struct TSoftObjectPtr<UDataTable> GMConfigTable; // 0x70(0x28)
	struct FString ImGuiWikiUrl; // 0x98(0x10)
	struct FString GMConfigWikiUrl; // 0xA8(0x10)
	struct TSoftObjectPtr<UTexture2D> WikiIcon; // 0xB8(0x28)
	struct TSoftObjectPtr<UTexture2D> OpenResourceIcon; // 0xE0(0x28)
	struct FVector2D IconSize; // 0x108(0x8)
	struct FVector2D IconUV0; // 0x110(0x8)
	struct FVector2D IconUV1; // 0x118(0x8)
	struct FLinearColor IconBgColor; // 0x120(0x10)
	struct FVector2D PopupSafeSize; // 0x130(0x8)
};

// Object: Class DFImGuiFramework.ImGuiPanelPersistentDataManager
// Size: 0xD0 (Inherited: 0x30)
struct UImGuiPanelPersistentDataManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UImGuiPanelPersistentDataManager, "ImGuiPanelPersistentDataManager")

	struct TSet<struct FName> PersistentVisibleCPPPanels; // 0x30(0x50)
	struct TSet<struct FName> PersistentVisibleLuaPanels; // 0x80(0x50)
};

// Object: Class DFImGuiFramework.ImGuiPanelManager
// Size: 0x1A8 (Inherited: 0x30)
struct UImGuiPanelManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UImGuiPanelManager, "ImGuiPanelManager")

	struct TMap<struct FName, struct UObject*> PanelName2PanelClassMap; // 0x30(0x50)
	struct TMap<struct FName, struct AImGuiPanel*> ClientOwnedImguiPanels; // 0x80(0x50)
	struct TMap<struct FName, struct ALuaImGuiPanel*> ClientOwnedLuaPanels; // 0xD0(0x50)
	uint8_t Pad_0x120[0x8]; // 0x120(0x8)
	struct TArray<struct UImGuiNetworkProxyComponent*> NetworkProxyComponents; // 0x128(0x10)
	uint8_t Pad_0x138[0x70]; // 0x138(0x70)

	// Object: Function DFImGuiFramework.ImGuiPanelManager.ToggleLuaImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6acf0
	// Params: [ Num(1) Size(0x8) ]
	void ToggleLuaImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.ToggleImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6ac4c
	// Params: [ Num(1) Size(0x8) ]
	void ToggleImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.ShowLuaImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6aba8
	// Params: [ Num(1) Size(0x8) ]
	void ShowLuaImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.ShowImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6ab04
	// Params: [ Num(1) Size(0x8) ]
	void ShowImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.RemoveDirectShowLuaPanel
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x7b6aa60
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveDirectShowLuaPanel(const struct FName& PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.KillLuaImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a9bc
	// Params: [ Num(1) Size(0x8) ]
	void KillLuaImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.KillImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a918
	// Params: [ Num(1) Size(0x8) ]
	void KillImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.IsLuaImGuiPanelVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a868
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsLuaImGuiPanelVisible(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.IsImGuiPanelVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a7b8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsImGuiPanelVisible(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.HideLuaImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a714
	// Params: [ Num(1) Size(0x8) ]
	void HideLuaImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.HideImGuiPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a670
	// Params: [ Num(1) Size(0x8) ]
	void HideImGuiPanel(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.HideAllImGuiPanels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a65c
	// Params: [ Num(0) Size(0x0) ]
	void HideAllImGuiPanels();

	// Object: Function DFImGuiFramework.ImGuiPanelManager.GetLuaImGuiPanelActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a5b0
	// Params: [ Num(2) Size(0x10) ]
	struct ALuaImGuiPanel* GetLuaImGuiPanelActor(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.GetImGuiPanelActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b6a504
	// Params: [ Num(2) Size(0x10) ]
	struct AImGuiPanel* GetImGuiPanelActor(struct FName PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.ForceEnableImGuiPanel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7b6a4f0
	// Params: [ Num(0) Size(0x0) ]
	static void ForceEnableImGuiPanel();

	// Object: Function DFImGuiFramework.ImGuiPanelManager.AddDirectShowLuaPanel
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x7b6a44c
	// Params: [ Num(1) Size(0x8) ]
	static void AddDirectShowLuaPanel(const struct FName& PanelName);

	// Object: Function DFImGuiFramework.ImGuiPanelManager.AcquireMouseCursor
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7b6a438
	// Params: [ Num(0) Size(0x0) ]
	void AcquireMouseCursor();
};

// Object: Class DFImGuiFramework.LuaImGuiPanel
// Size: 0x3D0 (Inherited: 0x370)
struct ALuaImGuiPanel : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALuaImGuiPanel, "LuaImGuiPanel")

	uint8_t Pad_0x370[0x60]; // 0x370(0x60)
};

} // namespace SDK
