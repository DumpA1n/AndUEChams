#include "PVE.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "IrisWorld.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ADamageTriggerVolume
void ADamageTriggerVolume::OnVolumeEndOverlap(struct AActor* OverlappedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DamageTriggerVolume", "OnVolumeEndOverlap");
    struct
    {
        struct AActor* OverlappedActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    this->ProcessEvent(Func, &Parms);
}

void ADamageTriggerVolume::OnVolumeBeginOverlap(struct AActor* OverlappedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DamageTriggerVolume", "OnVolumeBeginOverlap");
    struct
    {
        struct AActor* OverlappedActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    this->ProcessEvent(Func, &Parms);
}

// UPVECharacterExternalDamageComponent
void UPVECharacterExternalDamageComponent::OnTakeDamage(const struct FDamageResultInfo& DamageResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterExternalDamageComponent", "OnTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResultInfo;
    } Parms{};
    Parms.DamageResultInfo = (struct FDamageResultInfo)DamageResultInfo;
    this->ProcessEvent(Func, &Parms);
}

// UPVECharacterPickupComponent
void UPVECharacterPickupComponent::ShowPickupWeaponHUD(uint8_t Show, struct FInventoryItemInfo ItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "ShowPickupWeaponHUD");
    struct
    {
        uint8_t Show;
        struct FInventoryItemInfo ItemInfo;
    } Parms{};
    Parms.Show = (uint8_t)Show;
    Parms.ItemInfo = (struct FInventoryItemInfo)ItemInfo;
    this->ProcessEvent(Func, &Parms);
}

void UPVECharacterPickupComponent::Server2ClientPickupItemNtf(struct FInventoryItemInfo InventoryItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "Server2ClientPickupItemNtf");
    struct
    {
        struct FInventoryItemInfo InventoryItemInfo;
    } Parms{};
    Parms.InventoryItemInfo = (struct FInventoryItemInfo)InventoryItemInfo;
    this->ProcessEvent(Func, &Parms);
}

void UPVECharacterPickupComponent::ProcessPickupWeapon(struct FInventoryItemInfo ItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "ProcessPickupWeapon");
    struct
    {
        struct FInventoryItemInfo ItemInfo;
    } Parms{};
    Parms.ItemInfo = (struct FInventoryItemInfo)ItemInfo;
    this->ProcessEvent(Func, &Parms);
}

void UPVECharacterPickupComponent::ProcessAutoPickup(struct FInventoryItemInfo& InventoryItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "ProcessAutoPickup");
    struct
    {
        struct FInventoryItemInfo InventoryItemInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InventoryItemInfo = Parms.InventoryItemInfo;
}

void UPVECharacterPickupComponent::OnServerPickupItemNtf(uint64_t Uin, const struct FInventoryItemInfo& InventoryItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "OnServerPickupItemNtf");
    struct
    {
        uint64_t Uin;
        struct FInventoryItemInfo InventoryItemInfo;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    Parms.InventoryItemInfo = (struct FInventoryItemInfo)InventoryItemInfo;
    this->ProcessEvent(Func, &Parms);
}

struct FInGameMallConfigRow UPVECharacterPickupComponent::GetInGameMallConfigRowByItemId(struct FInventoryItemInfo ItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "GetInGameMallConfigRowByItemId");
    struct
    {
        struct FInventoryItemInfo ItemInfo;
        struct FInGameMallConfigRow ReturnValue;
    } Parms{};
    Parms.ItemInfo = (struct FInventoryItemInfo)ItemInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPVECharacterPickupComponent::EndPlay(EEndPlayReason EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "EndPlay");
    struct
    {
        enum EEndPlayReason EndPlayReason;
    } Parms{};
    Parms.EndPlayReason = (enum EEndPlayReason)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPVECharacterPickupComponent::CheckItemShouldAutoPickup(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "CheckItemShouldAutoPickup");
    struct
    {
        struct FItemID ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPVECharacterPickupComponent::CheckInventoryCanAutoPickupByTime(struct AInventoryPickup* InventoryPickup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "CheckInventoryCanAutoPickupByTime");
    struct
    {
        struct AInventoryPickup* InventoryPickup;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InventoryPickup = (struct AInventoryPickup*)InventoryPickup;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPVECharacterPickupComponent::BeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVECharacterPickupComponent", "BeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPVEPlayerEcoSystemComponent
void UPVEPlayerEcoSystemComponent::ServerUnequipItem(uint64_t ItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "ServerUnequipItem");
    struct
    {
        uint64_t ItemGid;
    } Parms{};
    Parms.ItemGid = (uint64_t)ItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::ServerBuyItem(int64_t ExchangeID, int32_t Num, EAttachPosition AttachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "ServerBuyItem");
    struct
    {
        int64_t ExchangeID;
        int32_t Num;
        enum EAttachPosition AttachPos;
    } Parms{};
    Parms.ExchangeID = (int64_t)ExchangeID;
    Parms.Num = (int32_t)Num;
    Parms.AttachPos = (enum EAttachPosition)AttachPos;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::Server_OnPlayerMakeDamageEvent(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "Server_OnPlayerMakeDamageEvent");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::Server_OnPlayerKillEvent(struct FKillInfo& KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "Server_OnPlayerKillEvent");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    KillInfo = Parms.KillInfo;
}

void UPVEPlayerEcoSystemComponent::Server_OnPlayerAssistEvent(const struct FKillInfo& KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "Server_OnPlayerAssistEvent");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::Server_AddMeritByType(EMeritObtainType ObtainType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "Server_AddMeritByType");
    struct
    {
        enum EMeritObtainType ObtainType;
    } Parms{};
    Parms.ObtainType = (enum EMeritObtainType)ObtainType;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::Server2ClientUnequipItemNotify(uint64_t ItemGid, EAttachPosition TargetAttachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "Server2ClientUnequipItemNotify");
    struct
    {
        uint64_t ItemGid;
        enum EAttachPosition TargetAttachPos;
    } Parms{};
    Parms.ItemGid = (uint64_t)ItemGid;
    Parms.TargetAttachPos = (enum EAttachPosition)TargetAttachPos;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::Server2ClientBuyItemNotify(int64_t ItemID, int32_t TotalMerit, int32_t Count, EPVEBuyItemErrorCode ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "Server2ClientBuyItemNotify");
    struct
    {
        int64_t ItemID;
        int32_t TotalMerit;
        int32_t Count;
        enum EPVEBuyItemErrorCode ErrorCode;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    Parms.TotalMerit = (int32_t)TotalMerit;
    Parms.Count = (int32_t)Count;
    Parms.ErrorCode = (enum EPVEBuyItemErrorCode)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::ProcessServerAddMerit(float Merit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "ProcessServerAddMerit");
    struct
    {
        float Merit;
    } Parms{};
    Parms.Merit = (float)Merit;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::OnPocessedBy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "OnPocessedBy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::InitializeComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "InitializeComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::ClientUnequipItem(struct FInventoryItemInfo InventoryItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "ClientUnequipItem");
    struct
    {
        struct FInventoryItemInfo InventoryItemInfo;
    } Parms{};
    Parms.InventoryItemInfo = (struct FInventoryItemInfo)InventoryItemInfo;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::ClientBuyItem(int64_t ExchangeID, int32_t Num, int32_t AttachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "ClientBuyItem");
    struct
    {
        int64_t ExchangeID;
        int32_t Num;
        int32_t AttachPos;
    } Parms{};
    Parms.ExchangeID = (int64_t)ExchangeID;
    Parms.Num = (int32_t)Num;
    Parms.AttachPos = (int32_t)AttachPos;
    this->ProcessEvent(Func, &Parms);
}

void UPVEPlayerEcoSystemComponent::ClientAddMeritByType(EMeritObtainType ObtainType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVEPlayerEcoSystemComponent", "ClientAddMeritByType");
    struct
    {
        enum EMeritObtainType ObtainType;
    } Parms{};
    Parms.ObtainType = (enum EMeritObtainType)ObtainType;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
