#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameHud.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PVE
// Enums: 0
// Structs: 1
// Classes: 7

struct AActor;
struct ADFMCharacter;
struct AInventoryPickup;
struct AIrisWorldGameState;
struct AIrisWorldPlayerState;
enum class EAttachPosition : uint8_t;
enum class EEndPlayReason : uint8_t;
enum class EMeritObtainType : uint8_t;
enum class EPVEBuyItemErrorCode : uint8_t;
struct FDamageResultInfo;
struct FInGameMallConfigRow;
struct FInventoryItemInfo;
struct FItemID;
struct FKillInfo;
struct UBaseUIView;
struct UDataTable;
struct UGameplayEffect;
struct UInteractorComponent;
struct UInventoryManager;
struct FKillInfoForMerit;
struct ADamageTriggerVolume;
struct UPVECharacterExternalDamageComponent;
struct UPVECharacterPickupComponent;
struct APVEHUD;
struct UPVEPlayerEcoSystemComponent;
struct UPVEPlayerResurrectComponent;
struct APVETeamSystem;

// Object: ScriptStruct PVE.KillInfoForMerit
// Size: 0xC (Inherited: 0x0)
struct FKillInfoForMerit
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: Class PVE.DamageTriggerVolume
// Size: 0x3A0 (Inherited: 0x378)
struct ADamageTriggerVolume : ATriggerSphere
{
	DEFINE_UE_CLASS_HELPERS(ADamageTriggerVolume, "DamageTriggerVolume")

	struct TArray<struct UGameplayEffect*> DamageGameplayEffect; // 0x378(0x10)
	float OnceDamageValue; // 0x388(0x4)
	float DamageInterval; // 0x38C(0x4)
	struct TArray<struct ADFMCharacter*> InVolumeCharacterArray; // 0x390(0x10)

	// Object: Function PVE.DamageTriggerVolume.OnVolumeEndOverlap
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x150b2bd8
	// Params: [ Num(1) Size(0x8) ]
	void OnVolumeEndOverlap(struct AActor* OverlappedActor);

	// Object: Function PVE.DamageTriggerVolume.OnVolumeBeginOverlap
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x150b2b34
	// Params: [ Num(1) Size(0x8) ]
	void OnVolumeBeginOverlap(struct AActor* OverlappedActor);
};

// Object: Class PVE.PVECharacterExternalDamageComponent
// Size: 0x100 (Inherited: 0xF8)
struct UPVECharacterExternalDamageComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPVECharacterExternalDamageComponent, "PVECharacterExternalDamageComponent")

	float CharacterDamageInfluenceVehicleDamageRate; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)

	// Object: Function PVE.PVECharacterExternalDamageComponent.OnTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x150b3058
	// Params: [ Num(1) Size(0x8A0) ]
	void OnTakeDamage(const struct FDamageResultInfo& DamageResultInfo);
};

// Object: Class PVE.PVECharacterPickupComponent
// Size: 0x140 (Inherited: 0xF8)
struct UPVECharacterPickupComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPVECharacterPickupComponent, "PVECharacterPickupComponent")

	struct UBaseUIView* PickupWeaponHUD; // 0xF8(0x8)
	struct FMulticastInlineDelegate OnClientHasPickupedItemNtf; // 0x100(0x10)
	struct UInteractorComponent* InteractorComponent; // 0x110(0x8)
	struct UInventoryManager* InventoryManager; // 0x118(0x8)
	struct TArray<struct FInventoryItemInfo> WeaponPickupArray; // 0x120(0x10)
	uint64_t LastDisplayedWeaponGid; // 0x130(0x8)
	float AutoPickupDeltaTime; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)

	// Object: Function PVE.PVECharacterPickupComponent.ShowPickupWeaponHUD
	// Flags: [Final|Native|Protected]
	// Offset: 0x150b3d78
	// Params: [ Num(2) Size(0x7C8) ]
	void ShowPickupWeaponHUD(uint8_t Show, struct FInventoryItemInfo ItemInfo);

	// Object: Function PVE.PVECharacterPickupComponent.Server2ClientPickupItemNtf
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x150b3cac
	// Params: [ Num(1) Size(0x7C0) ]
	void Server2ClientPickupItemNtf(struct FInventoryItemInfo InventoryItemInfo);

	// Object: Function PVE.PVECharacterPickupComponent.ProcessPickupWeapon
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x150b3be8
	// Params: [ Num(1) Size(0x7C0) ]
	void ProcessPickupWeapon(struct FInventoryItemInfo ItemInfo);

	// Object: Function PVE.PVECharacterPickupComponent.ProcessAutoPickup
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x150b3b28
	// Params: [ Num(1) Size(0x7C0) ]
	void ProcessAutoPickup(struct FInventoryItemInfo& InventoryItemInfo);

	// Object: Function PVE.PVECharacterPickupComponent.OnServerPickupItemNtf
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x150b3a2c
	// Params: [ Num(2) Size(0x7C8) ]
	void OnServerPickupItemNtf(uint64_t Uin, const struct FInventoryItemInfo& InventoryItemInfo);

	// Object: Function PVE.PVECharacterPickupComponent.GetInGameMallConfigRowByItemId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x150b389c
	// Params: [ Num(2) Size(0x848) ]
	struct FInGameMallConfigRow GetInGameMallConfigRowByItemId(struct FInventoryItemInfo ItemInfo);

	// Object: Function PVE.PVECharacterPickupComponent.EndPlay
	// Flags: [Native|Protected]
	// Offset: 0x150b37f0
	// Params: [ Num(1) Size(0x1) ]
	void EndPlay(EEndPlayReason EndPlayReason);

	// Object: Function PVE.PVECharacterPickupComponent.CheckItemShouldAutoPickup
	// Flags: [Final|Native|Protected]
	// Offset: 0x150b372c
	// Params: [ Num(2) Size(0x19) ]
	uint8_t CheckItemShouldAutoPickup(struct FItemID ItemID);

	// Object: Function PVE.PVECharacterPickupComponent.CheckInventoryCanAutoPickupByTime
	// Flags: [Final|Native|Protected]
	// Offset: 0x150b367c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckInventoryCanAutoPickupByTime(struct AInventoryPickup* InventoryPickup);

	// Object: Function PVE.PVECharacterPickupComponent.BeginPlay
	// Flags: [Native|Protected]
	// Offset: 0x150b3660
	// Params: [ Num(0) Size(0x0) ]
	void BeginPlay();
};

// Object: Class PVE.PVEHUD
// Size: 0x760 (Inherited: 0x730)
struct APVEHUD : ADFMHUD
{
	DEFINE_UE_CLASS_HELPERS(APVEHUD, "PVEHUD")

	struct UDataTable* PVEUIDataTable; // 0x730(0x8)
	struct TSoftObjectPtr<UDataTable> PVEUIDataTableHDOverride; // 0x738(0x28)
};

// Object: Class PVE.PVEPlayerEcoSystemComponent
// Size: 0x128 (Inherited: 0xF8)
struct UPVEPlayerEcoSystemComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPVEPlayerEcoSystemComponent, "PVEPlayerEcoSystemComponent")

	float FrequencyOfPassiveAddMerit; // 0xF8(0x4)
	float PassiveAddMerit; // 0xFC(0x4)
	float HitTargetLeastDamage; // 0x100(0x4)
	uint32_t LastContinueKillNum; // 0x104(0x4)
	float LastContinueKillTime; // 0x108(0x4)
	float LastPassiveAddMeritElapseTime; // 0x10C(0x4)
	struct AIrisWorldPlayerState* OwnerPVEPlayerState; // 0x110(0x8)
	struct AIrisWorldGameState* PVEGameState; // 0x118(0x8)
	struct FTimerHandle ShowTotalGainMeritViewHandle; // 0x120(0x8)

	// Object: Function PVE.PVEPlayerEcoSystemComponent.ServerUnequipItem
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x150b6410
	// Params: [ Num(1) Size(0x8) ]
	void ServerUnequipItem(uint64_t ItemGid);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.ServerBuyItem
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x150b62f0
	// Params: [ Num(3) Size(0x10) ]
	void ServerBuyItem(int64_t ExchangeID, int32_t Num, EAttachPosition AttachPos);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.Server_OnPlayerMakeDamageEvent
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x150b6228
	// Params: [ Num(1) Size(0x8A0) ]
	void Server_OnPlayerMakeDamageEvent(const struct FDamageResultInfo& DamageResult);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.Server_OnPlayerKillEvent
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x150b615c
	// Params: [ Num(1) Size(0x1A8) ]
	void Server_OnPlayerKillEvent(struct FKillInfo& KillInfo);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.Server_OnPlayerAssistEvent
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x150b6090
	// Params: [ Num(1) Size(0x1A8) ]
	void Server_OnPlayerAssistEvent(const struct FKillInfo& KillInfo);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.Server_AddMeritByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150b5fec
	// Params: [ Num(1) Size(0x1) ]
	void Server_AddMeritByType(EMeritObtainType ObtainType);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.Server2ClientUnequipItemNotify
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x150b5f04
	// Params: [ Num(2) Size(0xC) ]
	void Server2ClientUnequipItemNotify(uint64_t ItemGid, EAttachPosition TargetAttachPos);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.Server2ClientBuyItemNotify
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x150b5da8
	// Params: [ Num(4) Size(0x11) ]
	void Server2ClientBuyItemNotify(int64_t ItemID, int32_t TotalMerit, int32_t Count, EPVEBuyItemErrorCode ErrorCode);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.ProcessServerAddMerit
	// Flags: [Final|Native|Protected]
	// Offset: 0x150b5d04
	// Params: [ Num(1) Size(0x4) ]
	void ProcessServerAddMerit(float Merit);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.OnPocessedBy
	// Flags: [Final|Native|Protected]
	// Offset: 0x150b5cf0
	// Params: [ Num(0) Size(0x0) ]
	void OnPocessedBy();

	// Object: Function PVE.PVEPlayerEcoSystemComponent.InitializeComponent
	// Flags: [Native|Protected]
	// Offset: 0x150b5cd4
	// Params: [ Num(0) Size(0x0) ]
	void InitializeComponent();

	// Object: Function PVE.PVEPlayerEcoSystemComponent.ClientUnequipItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150b5c10
	// Params: [ Num(1) Size(0x7C0) ]
	void ClientUnequipItem(struct FInventoryItemInfo InventoryItemInfo);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.ClientBuyItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150b5af8
	// Params: [ Num(3) Size(0x10) ]
	void ClientBuyItem(int64_t ExchangeID, int32_t Num, int32_t AttachPos);

	// Object: Function PVE.PVEPlayerEcoSystemComponent.ClientAddMeritByType
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x150b5a4c
	// Params: [ Num(1) Size(0x1) ]
	void ClientAddMeritByType(EMeritObtainType ObtainType);
};

// Object: Class PVE.PVEPlayerResurrectComponent
// Size: 0x148 (Inherited: 0x140)
struct UPVEPlayerResurrectComponent : UDFMPlayerResurrectComponent
{
	DEFINE_UE_CLASS_HELPERS(UPVEPlayerResurrectComponent, "PVEPlayerResurrectComponent")

	uint8_t bIsInRailRideState : 1; // 0x140(0x1), Mask(0x1)
	uint8_t BitPad_0x140_1 : 7; // 0x140(0x1)
	uint8_t Pad_0x141[0x7]; // 0x141(0x7)
};

// Object: Class PVE.PVETeamSystem
// Size: 0x3B0 (Inherited: 0x3B0)
struct APVETeamSystem : ASOLTeamSystem
{
	DEFINE_UE_CLASS_HELPERS(APVETeamSystem, "PVETeamSystem")
};

} // namespace SDK
