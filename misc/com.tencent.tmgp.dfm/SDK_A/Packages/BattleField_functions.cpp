#include "BattleField.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMVehicle.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameFlow.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPWeaponRuntime.hpp"
#include "HudFramework.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBattleFieldAudioPlayerComponent::* ----
void UBattleFieldAudioPlayerComponent::ServerTriggerTip(struct FBattleFieldTipInfo TipInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "ServerTriggerTip");
    struct
    {
        struct FBattleFieldTipInfo TipInfo;
    } Parms{};
    Parms.TipInfo = (struct FBattleFieldTipInfo)TipInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::ServerTriggerClientAudio(struct FBattleFieldAudioInfo AudioInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "ServerTriggerClientAudio");
    struct
    {
        struct FBattleFieldAudioInfo AudioInfo;
    } Parms{};
    Parms.AudioInfo = (struct FBattleFieldAudioInfo)AudioInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::ServerTriggerBGM(EBackGroundMusicType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "ServerTriggerBGM");
    struct
    {
        enum EBackGroundMusicType InType;
    } Parms{};
    Parms.InType = (enum EBackGroundMusicType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::ServerTriggerAudio(struct FBattleFieldAudioInfo AudioInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "ServerTriggerAudio");
    struct
    {
        struct FBattleFieldAudioInfo AudioInfo;
    } Parms{};
    Parms.AudioInfo = (struct FBattleFieldAudioInfo)AudioInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::ServerNetMulticastTriggerTip(struct FBattleFieldTipInfo TipInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "ServerNetMulticastTriggerTip");
    struct
    {
        struct FBattleFieldTipInfo TipInfo;
    } Parms{};
    Parms.TipInfo = (struct FBattleFieldTipInfo)TipInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnTipsTableLoadComplete(const struct FSoftObjectPath& AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnTipsTableLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetRef;
    } Parms{};
    Parms.AssetRef = (struct FSoftObjectPath)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnTipsEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnTipsEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnPlayerAudioTableLoadComplete(const struct FSoftObjectPath& AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnPlayerAudioTableLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetRef;
    } Parms{};
    Parms.AssetRef = (struct FSoftObjectPath)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnPlayerAudiosLoadComplete(struct TArray<struct FSoftObjectPath> Assets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnPlayerAudiosLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnPlayerAudioFinished(EGPEventCallbackType EventCallbackType, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnPlayerAudioFinished");
    struct
    {
        enum EGPEventCallbackType EventCallbackType;
        int32_t PlayingId;
    } Parms{};
    Parms.EventCallbackType = (enum EGPEventCallbackType)EventCallbackType;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnOwnerCharacterDied(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnOwnerCharacterDied");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnBroadcastAudioTableLoadComplete(const struct FSoftObjectPath& AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnBroadcastAudioTableLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetRef;
    } Parms{};
    Parms.AssetRef = (struct FSoftObjectPath)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnBroadcastAudiosLoadComplete(struct TArray<struct FSoftObjectPath> Assets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnBroadcastAudiosLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnBroadcastAudioFinished(EGPEventCallbackType EventCallbackType, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnBroadcastAudioFinished");
    struct
    {
        enum EGPEventCallbackType EventCallbackType;
        int32_t PlayingId;
    } Parms{};
    Parms.EventCallbackType = (enum EGPEventCallbackType)EventCallbackType;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnBGMTableLoadComplete(const struct FSoftObjectPath& AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnBGMTableLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetRef;
    } Parms{};
    Parms.AssetRef = (struct FSoftObjectPath)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldAudioPlayerComponent::OnBGMLoadComplete(struct TArray<struct FSoftObjectPath> Assets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldAudioPlayerComponent", "OnBGMLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    this->ProcessEvent(Func, &Parms);
}

// ---- ABattleFieldCapturePoint::* ----
void ABattleFieldCapturePoint::OnRep_CapturedCamp(int32_t OldCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "OnRep_CapturedCamp");
    struct
    {
        int32_t OldCamp;
    } Parms{};
    Parms.OldCamp = (int32_t)OldCamp;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCapturePoint::OnRep_CampCaptureScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "OnRep_CampCaptureScore");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCapturePoint::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "OnOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCapturePoint::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "OnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCapturePoint::CheckCharactersInPointAndInformHUD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "CheckCharactersInPointAndInformHUD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABattleFieldCapturePoint::CanBeAutoDormant()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "CanBeAutoDormant");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABattleFieldCapturePoint::AfterCaptureIncreaseScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCapturePoint", "AfterCaptureIncreaseScore");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ABattleFieldCharacter::* ----
uint8_t ABattleFieldCharacter::SwitchWeaponPreset(uint64_t WeaponItemId, int32_t WeaponPresetIndex, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "SwitchWeaponPreset");
    struct
    {
        uint64_t WeaponItemId;
        int32_t WeaponPresetIndex;
        enum EAttachPosition InAttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.WeaponPresetIndex = (int32_t)WeaponPresetIndex;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABattleFieldCharacter::ServerSetCurrentArmedPreset(uint64_t ExpertId, uint64_t HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerSetCurrentArmedPreset");
    struct
    {
        uint64_t ExpertId;
        uint64_t HeroId;
    } Parms{};
    Parms.ExpertId = (uint64_t)ExpertId;
    Parms.HeroId = (uint64_t)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerRequestWeaponStoreItemsInArmBag(int32_t ArmedForceID, uint64_t HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerRequestWeaponStoreItemsInArmBag");
    struct
    {
        int32_t ArmedForceID;
        uint64_t HeroId;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerRequestSwitchWeaponItem(int32_t ArmedForceID, uint64_t HeroId, uint64_t WeaponItemId, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerRequestSwitchWeaponItem");
    struct
    {
        int32_t ArmedForceID;
        uint64_t HeroId;
        uint64_t WeaponItemId;
        enum EAttachPosition InAttachPosition;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerChangeCurrentArmedPresetWithFullData(uint32_t ArmedForceID, uint64_t HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerChangeCurrentArmedPresetWithFullData");
    struct
    {
        uint32_t ArmedForceID;
        uint64_t HeroId;
    } Parms{};
    Parms.ArmedForceID = (uint32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerChangeCurrentArmedPresetByFullData(uint64_t ExpertId, uint64_t HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerChangeCurrentArmedPresetByFullData");
    struct
    {
        uint64_t ExpertId;
        uint64_t HeroId;
    } Parms{};
    Parms.ExpertId = (uint64_t)ExpertId;
    Parms.HeroId = (uint64_t)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerChangeCurrentArmedPresetByExpertID(int64_t ExpertId, uint64_t HeroId, uint32_t BagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerChangeCurrentArmedPresetByExpertID");
    struct
    {
        int64_t ExpertId;
        uint64_t HeroId;
        uint32_t BagId;
    } Parms{};
    Parms.ExpertId = (int64_t)ExpertId;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.BagId = (uint32_t)BagId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerChangeCurrentArmedPreset(uint32_t ArmedForceID, uint64_t HeroId, uint32_t BagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerChangeCurrentArmedPreset");
    struct
    {
        uint32_t ArmedForceID;
        uint64_t HeroId;
        uint32_t BagId;
    } Parms{};
    Parms.ArmedForceID = (uint32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.BagId = (uint32_t)BagId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ServerApplyWeaponItemModifyInFirstRedeploy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ServerApplyWeaponItemModifyInFirstRedeploy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::SaveRedeployMatrix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "SaveRedeployMatrix");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ResetEqipment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ResetEqipment");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::RequestWeaponStore(int32_t ArmedForceID, uint64_t HeroId, EAttachPosition AttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "RequestWeaponStore");
    struct
    {
        int32_t ArmedForceID;
        uint64_t HeroId;
        enum EAttachPosition AttachPosition;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::RequestWeaponPresetStore(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "RequestWeaponPresetStore");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::RequestSwitchWeaponPreset(uint32_t ArmedForceID, uint64_t HeroId, uint64_t WeaponItemId, int32_t WeaponPresetIndex, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "RequestSwitchWeaponPreset");
    struct
    {
        uint32_t ArmedForceID;
        uint64_t HeroId;
        uint64_t WeaponItemId;
        int32_t WeaponPresetIndex;
        enum EAttachPosition InAttachPosition;
    } Parms{};
    Parms.ArmedForceID = (uint32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.WeaponPresetIndex = (int32_t)WeaponPresetIndex;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::RequestCancelWeaponItemRedDot(struct TArray<uint64_t> WeaponItemIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "RequestCancelWeaponItemRedDot");
    struct
    {
        struct TArray<uint64_t> WeaponItemIDs;
    } Parms{};
    Parms.WeaponItemIDs = (struct TArray<uint64_t>)WeaponItemIDs;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::OnRep_BattleClassType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "OnRep_BattleClassType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::OnDSBeforeRedeploy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "OnDSBeforeRedeploy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::MatchEnd(const EMatchOverReason& Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "MatchEnd");
    struct
    {
        enum EMatchOverReason Reason;
    } Parms{};
    Parms.Reason = (enum EMatchOverReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABattleFieldCharacter::IsNeedReplaceExpertData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "IsNeedReplaceExpertData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABattleFieldCharacter::ClientReceiveWeaponStoreItemsInArmBag(int32_t InArmedForceID, uint64_t HeroId, struct TArray<struct FMPInventoryItemInfo> WeaponItemArr, struct FMPInventoryItemInfo SoldierItemArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveWeaponStoreItemsInArmBag");
    struct
    {
        int32_t InArmedForceID;
        uint64_t HeroId;
        struct TArray<struct FMPInventoryItemInfo> WeaponItemArr;
        struct FMPInventoryItemInfo SoldierItemArr;
    } Parms{};
    Parms.InArmedForceID = (int32_t)InArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.WeaponItemArr = (struct TArray<struct FMPInventoryItemInfo>)WeaponItemArr;
    Parms.SoldierItemArr = (struct FMPInventoryItemInfo)SoldierItemArr;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveWeaponStore(int32_t InArmedForceID, uint64_t HeroId, EAttachPosition AttachPosition, struct TArray<struct FMPInventoryItemInfo> ItemArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveWeaponStore");
    struct
    {
        int32_t InArmedForceID;
        uint64_t HeroId;
        enum EAttachPosition AttachPosition;
        struct TArray<struct FMPInventoryItemInfo> ItemArr;
    } Parms{};
    Parms.InArmedForceID = (int32_t)InArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    Parms.ItemArr = (struct TArray<struct FMPInventoryItemInfo>)ItemArr;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveWeaponPresets(uint64_t InItemID, struct TArray<struct FTDMWeaponPreset> WeaponPresetArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveWeaponPresets");
    struct
    {
        uint64_t InItemID;
        struct TArray<struct FTDMWeaponPreset> WeaponPresetArr;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    Parms.WeaponPresetArr = (struct TArray<struct FTDMWeaponPreset>)WeaponPresetArr;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveSwitchWeaponPreset(uint32_t ArmedForceID, uint64_t WeaponItemId, int32_t WeaponPresetIndex, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveSwitchWeaponPreset");
    struct
    {
        uint32_t ArmedForceID;
        uint64_t WeaponItemId;
        int32_t WeaponPresetIndex;
        enum EAttachPosition InAttachPosition;
    } Parms{};
    Parms.ArmedForceID = (uint32_t)ArmedForceID;
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.WeaponPresetIndex = (int32_t)WeaponPresetIndex;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveSwitchWeaponItemResult(int32_t ArmedForceID, uint64_t HeroId, uint64_t ArmItemID, EAttachPosition InAttachPosition, struct FMPInventoryItemInfo InMPInventoryItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveSwitchWeaponItemResult");
    struct
    {
        int32_t ArmedForceID;
        uint64_t HeroId;
        uint64_t ArmItemID;
        enum EAttachPosition InAttachPosition;
        struct FMPInventoryItemInfo InMPInventoryItemInfo;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.HeroId = (uint64_t)HeroId;
    Parms.ArmItemID = (uint64_t)ArmItemID;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    Parms.InMPInventoryItemInfo = (struct FMPInventoryItemInfo)InMPInventoryItemInfo;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveInGameWeaponStarIncrease(uint64_t WeaponItemId, int32_t StarNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveInGameWeaponStarIncrease");
    struct
    {
        uint64_t WeaponItemId;
        int32_t StarNum;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.StarNum = (int32_t)StarNum;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveInGameUnlockWeapon(struct FMPInventoryItemInfo UnlockWeaponItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveInGameUnlockWeapon");
    struct
    {
        struct FMPInventoryItemInfo UnlockWeaponItem;
    } Parms{};
    Parms.UnlockWeaponItem = (struct FMPInventoryItemInfo)UnlockWeaponItem;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::ClientReceiveInGameUnlockVehiclePart(uint64_t UnlockVehiclePartItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "ClientReceiveInGameUnlockVehiclePart");
    struct
    {
        uint64_t UnlockVehiclePartItemID;
    } Parms{};
    Parms.UnlockVehiclePartItemID = (uint64_t)UnlockVehiclePartItemID;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldCharacter::BP_ServerChangeCurrentArmedPreset(int32_t ArmedForceID, int32_t BagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldCharacter", "BP_ServerChangeCurrentArmedPreset");
    struct
    {
        int32_t ArmedForceID;
        int32_t BagId;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.BagId = (int32_t)BagId;
    this->ProcessEvent(Func, &Parms);
}

// ---- ABattleFieldGameMode::* ----
void ABattleFieldGameMode::RebornPlayer(struct AController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameMode", "RebornPlayer");
    struct
    {
        struct AController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct AController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldGameplayDelegates::* ----
struct UBattleFieldGameplayDelegates* UBattleFieldGameplayDelegates::GetUDFMGameplayDelegates(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldGameplayDelegates", "GetUDFMGameplayDelegates");
    struct
    {
        struct UObject* WorldContext;
        struct UBattleFieldGameplayDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBattleFieldGameplayDelegates* UBattleFieldGameplayDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldGameplayDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UBattleFieldGameplayDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ABattleFieldGameState::* ----
void ABattleFieldGameState::UpdatePlayerStatsOffline(struct AGPPlayerState* GPPS, uint64_t InPlayerUin, uint8_t bIsOffline)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "UpdatePlayerStatsOffline");
    struct
    {
        struct AGPPlayerState* GPPS;
        uint64_t InPlayerUin;
        uint8_t bIsOffline;
    } Parms{};
    Parms.GPPS = (struct AGPPlayerState*)GPPS;
    Parms.InPlayerUin = (uint64_t)InPlayerUin;
    Parms.bIsOffline = (uint8_t)bIsOffline;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::SortPlayerStatsByScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "SortPlayerStatsByScore");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::SetCampScoreChange(int32_t Camp, int32_t Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "SetCampScoreChange");
    struct
    {
        int32_t Camp;
        int32_t Score;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    Parms.Score = (int32_t)Score;
    this->ProcessEvent(Func, &Parms);
}

struct FString ABattleFieldGameState::PruneString(struct FString InStr, int32_t maxLen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "PruneString");
    struct
    {
        struct FString InStr;
        int32_t maxLen;
        struct FString ReturnValue;
    } Parms{};
    Parms.InStr = (struct FString)InStr;
    Parms.maxLen = (int32_t)maxLen;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABattleFieldGameState::OnRep_PlayerStatistics_BF()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "OnRep_PlayerStatistics_BF");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::OnRep_CampScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "OnRep_CampScore");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::OnPlayerBeKilled(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "OnPlayerBeKilled");
    struct
    {
        int32_t Camp;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::OnMatchEnd(int32_t WinCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "OnMatchEnd");
    struct
    {
        int32_t WinCamp;
    } Parms{};
    Parms.WinCamp = (int32_t)WinCamp;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::MulticastMatchEnd(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "MulticastMatchEnd");
    struct
    {
        int32_t Camp;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldGameState::MatchEndEvent(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "MatchEndEvent");
    struct
    {
        int32_t Camp;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

int32_t ABattleFieldGameState::GetScoreCount(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "GetScoreCount");
    struct
    {
        int32_t Camp;
        int32_t ReturnValue;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ABattleFieldGameState::GetPlayerNamesByCamp(int32_t Camp, int32_t maxLen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "GetPlayerNamesByCamp");
    struct
    {
        int32_t Camp;
        int32_t maxLen;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    Parms.maxLen = (int32_t)maxLen;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPlayerStatItem ABattleFieldGameState::GetMostKillPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldGameState", "GetMostKillPlayer");
    struct
    {
        struct FPlayerStatItem ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ABattleFieldHUD::* ----
void ABattleFieldHUD::TopBarHudTimerFunction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldHUD", "TopBarHudTimerFunction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldHUD::OnDFMGamePlaySubModeChanged(EDFMGamePlaySubMode InSubMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldHUD", "OnDFMGamePlaySubModeChanged");
    struct
    {
        enum EDFMGamePlaySubMode InSubMode;
    } Parms{};
    Parms.InSubMode = (enum EDFMGamePlaySubMode)InSubMode;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldHUD::OnClientDFMGamePlayModeChanged(EDFMGamePlayMode InMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldHUD", "OnClientDFMGamePlayModeChanged");
    struct
    {
        enum EDFMGamePlayMode InMode;
    } Parms{};
    Parms.InMode = (enum EDFMGamePlayMode)InMode;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldHUD::NotifyTeamInfoHUDMVP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldHUD", "NotifyTeamInfoHUDMVP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldHUD::NotifyHUD(int32_t ChangeType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldHUD", "NotifyHUD");
    struct
    {
        int32_t ChangeType;
    } Parms{};
    Parms.ChangeType = (int32_t)ChangeType;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldMapHUDController::* ----
void UBattleFieldMapHUDController::OnTeamIdentityReplicate(struct AGPPlayerState* InPlayerState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnTeamIdentityReplicate");
    struct
    {
        struct AGPPlayerState* InPlayerState;
    } Parms{};
    Parms.InPlayerState = (struct AGPPlayerState*)InPlayerState;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldMapHUDController::OnPlayerKillInfoNtf(const struct TArray<struct FKillInfo>& NewAddKillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnPlayerKillInfoNtf");
    struct
    {
        struct TArray<struct FKillInfo> NewAddKillInfo;
    } Parms{};
    Parms.NewAddKillInfo = (struct TArray<struct FKillInfo>)NewAddKillInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldMapHUDController::OnMapAddEnemyLocationIcon(const struct FPlayerLocation& EnemyPlayerLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnMapAddEnemyLocationIcon");
    struct
    {
        struct FPlayerLocation EnemyPlayerLocation;
    } Parms{};
    Parms.EnemyPlayerLocation = (struct FPlayerLocation)EnemyPlayerLocation;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldMapHUDController::OnGameStateCurStageChanged(int32_t iValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnGameStateCurStageChanged");
    struct
    {
        int32_t iValue;
    } Parms{};
    Parms.iValue = (int32_t)iValue;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldMapHUDController::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldMapHUDController::OnClientWeaponBeginFireNtf(struct ACHARACTER* CharacterOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnClientWeaponBeginFireNtf");
    struct
    {
        struct ACHARACTER* CharacterOwner;
    } Parms{};
    Parms.CharacterOwner = (struct ACHARACTER*)CharacterOwner;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldMapHUDController::OnClientGameStatePlayerKnockDownInfoNotify(const struct TArray<struct FSimpleKnockDownInfo>& KillInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldMapHUDController", "OnClientGameStatePlayerKnockDownInfoNotify");
    struct
    {
        struct TArray<struct FSimpleKnockDownInfo> KillInfos;
    } Parms{};
    Parms.KillInfos = (struct TArray<struct FSimpleKnockDownInfo>)KillInfos;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldNotifySubSystem::* ----
void UBattleFieldNotifySubSystem::ShowAcRising(float RiseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "ShowAcRising");
    struct
    {
        float RiseTime;
    } Parms{};
    Parms.RiseTime = (float)RiseTime;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::ShowAcLanding(float LandTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "ShowAcLanding");
    struct
    {
        float LandTime;
    } Parms{};
    Parms.LandTime = (float)LandTime;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnThrowableWeaponBeginFire(uint8_t bHasGoToKeepPrefireState, struct TScriptInterface<IGPWeaponInterface> WeaponOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnThrowableWeaponBeginFire");
    struct
    {
        uint8_t bHasGoToKeepPrefireState;
        struct TScriptInterface<IGPWeaponInterface> WeaponOwner;
    } Parms{};
    Parms.bHasGoToKeepPrefireState = (uint8_t)bHasGoToKeepPrefireState;
    Parms.WeaponOwner = (struct TScriptInterface<IGPWeaponInterface>)WeaponOwner;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnSecter2WinPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnSecter2WinPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnRescue(struct AGPCharacterBase* Player, struct AGPCharacterBase* RescueTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnRescue");
    struct
    {
        struct AGPCharacterBase* Player;
        struct AGPCharacterBase* RescueTarget;
    } Parms{};
    Parms.Player = (struct AGPCharacterBase*)Player;
    Parms.RescueTarget = (struct AGPCharacterBase*)RescueTarget;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnReloadAmmo(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnReloadAmmo");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnPlayerBeKnockedDown(const struct FKillInfo& NewAddKillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnPlayerBeKnockedDown");
    struct
    {
        struct FKillInfo NewAddKillInfo;
    } Parms{};
    Parms.NewAddKillInfo = (struct FKillInfo)NewAddKillInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnPlayerBeKilled(const struct FKillInfo& NewAddKillInfo, struct UGPModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnPlayerBeKilled");
    struct
    {
        struct FKillInfo NewAddKillInfo;
        struct UGPModularWeaponDesc* Desc;
    } Parms{};
    Parms.NewAddKillInfo = (struct FKillInfo)NewAddKillInfo;
    Parms.Desc = (struct UGPModularWeaponDesc*)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnNeedAmmo(int64_t TargetPlayerUin, float RemainAmmo, float MaxAmmo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnNeedAmmo");
    struct
    {
        int64_t TargetPlayerUin;
        float RemainAmmo;
        float MaxAmmo;
    } Parms{};
    Parms.TargetPlayerUin = (int64_t)TargetPlayerUin;
    Parms.RemainAmmo = (float)RemainAmmo;
    Parms.MaxAmmo = (float)MaxAmmo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnKnockedDownHalf(struct ACHARACTER* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnKnockedDownHalf");
    struct
    {
        struct ACHARACTER* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct ACHARACTER*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnKillStreak(int64_t InPlayerUin, int32_t ContinueKillCumCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnKillStreak");
    struct
    {
        int64_t InPlayerUin;
        int32_t ContinueKillCumCount;
    } Parms{};
    Parms.InPlayerUin = (int64_t)InPlayerUin;
    Parms.ContinueKillCumCount = (int32_t)ContinueKillCumCount;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnIntoSuppressedState(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnIntoSuppressedState");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnHealthChanged(struct AController* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnHealthChanged");
    struct
    {
        struct AController* InPlayer;
    } Parms{};
    Parms.InPlayer = (struct AController*)InPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnGMBattleFieldPlayerAudioTrigger(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnGMBattleFieldPlayerAudioTrigger");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnGameLoadingEnd(int32_t MapID, EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnGameLoadingEnd");
    struct
    {
        int32_t MapID;
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.MapID = (int32_t)MapID;
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnDamageTake(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnDamageTake");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnCapturePointCapturedState(struct ABattleFieldCapturePoint* Point, int32_t OldCamp, int32_t CapturedCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnCapturePointCapturedState");
    struct
    {
        struct ABattleFieldCapturePoint* Point;
        int32_t OldCamp;
        int32_t CapturedCamp;
    } Parms{};
    Parms.Point = (struct ABattleFieldCapturePoint*)Point;
    Parms.OldCamp = (int32_t)OldCamp;
    Parms.CapturedCamp = (int32_t)CapturedCamp;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnCapturePointCapturedHalf(struct ABattleFieldCapturePoint* Point, int32_t CaptureHalfCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnCapturePointCapturedHalf");
    struct
    {
        struct ABattleFieldCapturePoint* Point;
        int32_t CaptureHalfCamp;
    } Parms{};
    Parms.Point = (struct ABattleFieldCapturePoint*)Point;
    Parms.CaptureHalfCamp = (int32_t)CaptureHalfCamp;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnCampScoreChange(int32_t ScoreCamp, int32_t Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnCampScoreChange");
    struct
    {
        int32_t ScoreCamp;
        int32_t Score;
    } Parms{};
    Parms.ScoreCamp = (int32_t)ScoreCamp;
    Parms.Score = (int32_t)Score;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnBattleFieldCampScoreTrigger(int32_t Camp, int32_t Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnBattleFieldCampScoreTrigger");
    struct
    {
        int32_t Camp;
        int32_t Score;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    Parms.Score = (int32_t)Score;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldNotifySubSystem::OnAimEnemy(struct ACHARACTER* LocalCharacter, struct ACHARACTER* TargetCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldNotifySubSystem", "OnAimEnemy");
    struct
    {
        struct ACHARACTER* LocalCharacter;
        struct ACHARACTER* TargetCharacter;
    } Parms{};
    Parms.LocalCharacter = (struct ACHARACTER*)LocalCharacter;
    Parms.TargetCharacter = (struct ACHARACTER*)TargetCharacter;
    this->ProcessEvent(Func, &Parms);
}

// ---- ABattleFieldPlayerState::* ----
void ABattleFieldPlayerState::UpdateFootStepAudioStyleID(int64_t CurrHeroID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "UpdateFootStepAudioStyleID");
    struct
    {
        int64_t CurrHeroID;
    } Parms{};
    Parms.CurrHeroID = (int64_t)CurrHeroID;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABattleFieldPlayerState::UpdateBagItem(int32_t ArmedForceID, uint64_t InHeroId, EAttachPosition InAttachPosition, const struct FMPInventoryItemInfo& InMPInventoryItemInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "UpdateBagItem");
    struct
    {
        int32_t ArmedForceID;
        uint64_t InHeroId;
        enum EAttachPosition InAttachPosition;
        struct FMPInventoryItemInfo InMPInventoryItemInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.InHeroId = (uint64_t)InHeroId;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    Parms.InMPInventoryItemInfo = (struct FMPInventoryItemInfo)InMPInventoryItemInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAttachPosition ABattleFieldPlayerState::SwitchWeaponItem(int32_t ArmedForceID, uint64_t InHeroId, uint64_t WeaponItemId, struct FMPInventoryItemInfo& OutMPInventoryItemInfo, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SwitchWeaponItem");
    struct
    {
        int32_t ArmedForceID;
        uint64_t InHeroId;
        uint64_t WeaponItemId;
        struct FMPInventoryItemInfo OutMPInventoryItemInfo;
        enum EAttachPosition InAttachPosition;
        enum EAttachPosition ReturnValue;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.InHeroId = (uint64_t)InHeroId;
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
    OutMPInventoryItemInfo = Parms.OutMPInventoryItemInfo;
    return Parms.ReturnValue;
}

struct TArray<struct FVehicleModifyReturnData> ABattleFieldPlayerState::SwitchVehicleParts(const struct TArray<struct FVehicleModifyRequestData>& VehicleModifyRequestDataArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SwitchVehicleParts");
    struct
    {
        struct TArray<struct FVehicleModifyRequestData> VehicleModifyRequestDataArr;
        struct TArray<struct FVehicleModifyReturnData> ReturnValue;
    } Parms{};
    Parms.VehicleModifyRequestDataArr = (struct TArray<struct FVehicleModifyRequestData>)VehicleModifyRequestDataArr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t ABattleFieldPlayerState::SwitchVehiclePart(uint64_t VehicleItemID, int32_t SlotId, uint64_t PartItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SwitchVehiclePart");
    struct
    {
        uint64_t VehicleItemID;
        int32_t SlotId;
        uint64_t PartItemId;
        uint64_t ReturnValue;
    } Parms{};
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    Parms.SlotId = (int32_t)SlotId;
    Parms.PartItemId = (uint64_t)PartItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABattleFieldPlayerState::SetScoreInfo(int32_t Category, int32_t ShowScore, int32_t Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SetScoreInfo");
    struct
    {
        int32_t Category;
        int32_t ShowScore;
        int32_t Distance;
    } Parms{};
    Parms.Category = (int32_t)Category;
    Parms.ShowScore = (int32_t)ShowScore;
    Parms.Distance = (int32_t)Distance;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::SetOverloadState(uint8_t bInOverloadState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SetOverloadState");
    struct
    {
        uint8_t bInOverloadState;
    } Parms{};
    Parms.bInOverloadState = (uint8_t)bInOverloadState;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::SetOverloadBuffLevel(EOverloadBuffLevel InOverloadBuffLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SetOverloadBuffLevel");
    struct
    {
        enum EOverloadBuffLevel InOverloadBuffLevel;
    } Parms{};
    Parms.InOverloadBuffLevel = (enum EOverloadBuffLevel)InOverloadBuffLevel;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::SetBagDirty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "SetBagDirty");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::ServerGenerateExpertData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "ServerGenerateExpertData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::ResetRedEnvelopeCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "ResetRedEnvelopeCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::ResetOverloadPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "ResetOverloadPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::ResetHeroWeaponInfoInit(uint64_t InHeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "ResetHeroWeaponInfoInit");
    struct
    {
        uint64_t InHeroId;
    } Parms{};
    Parms.InHeroId = (uint64_t)InHeroId;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_TDMArmArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_TDMArmArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_RefreshWeapons()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_RefreshWeapons");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_RefreshSupportAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_RefreshSupportAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_RedEnvelopeCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_RedEnvelopeCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_OverloadPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_OverloadPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_OverloadBuffLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_OverloadBuffLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_NeedShowRedDotNewUnlockWeaponItemIDs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_NeedShowRedDotNewUnlockWeaponItemIDs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_NeedShowRedDotNewUnlockVehiclePartItemIDs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_NeedShowRedDotNewUnlockVehiclePartItemIDs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_IsPlayerOccupyingAnchor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_IsPlayerOccupyingAnchor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_IsOverloadState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_IsOverloadState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::OnRep_BattleLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "OnRep_BattleLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::MarkHeroWeaponInfoInited(uint64_t InHeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "MarkHeroWeaponInfoInited");
    struct
    {
        uint64_t InHeroId;
    } Parms{};
    Parms.InHeroId = (uint64_t)InHeroId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABattleFieldPlayerState::IsOverloadState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "IsOverloadState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::IsItemDisableOrLocked(uint64_t ItemID, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "IsItemDisableOrLocked");
    struct
    {
        uint64_t ItemID;
        enum EAttachPosition InAttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::IsExpertUnlocked(uint64_t InExpertID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "IsExpertUnlocked");
    struct
    {
        uint64_t InExpertID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InExpertID = (uint64_t)InExpertID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::IsCurrentArmBagHasDisableOrLockedWeaponItem(int32_t ArmedForceID, uint64_t InHeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "IsCurrentArmBagHasDisableOrLockedWeaponItem");
    struct
    {
        int32_t ArmedForceID;
        uint64_t InHeroId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.InHeroId = (uint64_t)InHeroId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::HasInitedHeroWeaponInfo(uint64_t InHeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "HasInitedHeroWeaponInfo");
    struct
    {
        uint64_t InHeroId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InHeroId = (uint64_t)InHeroId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAttachPosition ABattleFieldPlayerState::GetWeaponItemAttachPositionInHeroBag(uint64_t InHeroId, uint64_t InWeaponItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "GetWeaponItemAttachPositionInHeroBag");
    struct
    {
        uint64_t InHeroId;
        uint64_t InWeaponItemID;
        enum EAttachPosition ReturnValue;
    } Parms{};
    Parms.InHeroId = (uint64_t)InHeroId;
    Parms.InWeaponItemID = (uint64_t)InWeaponItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t ABattleFieldPlayerState::GetUinForLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "GetUinForLua");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ABattleFieldPlayerState::GetOverloadPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "GetOverloadPoints");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EOverloadBuffLevel ABattleFieldPlayerState::GetOverloadBuffLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "GetOverloadBuffLevel");
    struct
    {
        enum EOverloadBuffLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FTDMBag> ABattleFieldPlayerState::GetDirtyBagsInThisRound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "GetDirtyBagsInThisRound");
    struct
    {
        struct TArray<struct FTDMBag> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::GetBagByArmID(int32_t ArmID, uint64_t InHeroId, struct FTDMBag& OutBag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "GetBagByArmID");
    struct
    {
        int32_t ArmID;
        uint64_t InHeroId;
        struct FTDMBag OutBag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ArmID = (int32_t)ArmID;
    Parms.InHeroId = (uint64_t)InHeroId;
    this->ProcessEvent(Func, &Parms);
    OutBag = Parms.OutBag;
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::CreateWeaponFromPreset(uint64_t WeaponItemId, uint64_t PresetId, EAttachPosition AttachPosition, struct FTDMHero& TDMHero)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CreateWeaponFromPreset");
    struct
    {
        uint64_t WeaponItemId;
        uint64_t PresetId;
        enum EAttachPosition AttachPosition;
        struct FTDMHero TDMHero;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.PresetId = (uint64_t)PresetId;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    this->ProcessEvent(Func, &Parms);
    TDMHero = Parms.TDMHero;
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::CheckWeaponPresetInstalledInvalidPartsOnOtherHero(uint64_t WeaponItemId, int32_t WeaponPresetIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CheckWeaponPresetInstalledInvalidPartsOnOtherHero");
    struct
    {
        uint64_t WeaponItemId;
        int32_t WeaponPresetIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.WeaponPresetIndex = (int32_t)WeaponPresetIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::CheckWeaponItemMatchArmedForce(int32_t ArmedForceID, uint64_t InHeroId, uint64_t WeaponItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CheckWeaponItemMatchArmedForce");
    struct
    {
        int32_t ArmedForceID;
        uint64_t InHeroId;
        uint64_t WeaponItemId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.InHeroId = (uint64_t)InHeroId;
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t ABattleFieldPlayerState::CheckVehiclePartValid(uint64_t VehicleItemID, int32_t SlotId, uint64_t PartItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CheckVehiclePartValid");
    struct
    {
        uint64_t VehicleItemID;
        int32_t SlotId;
        uint64_t PartItemId;
        uint64_t ReturnValue;
    } Parms{};
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    Parms.SlotId = (int32_t)SlotId;
    Parms.PartItemId = (uint64_t)PartItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::CheckSoldierPropsMatchArmedForce(int32_t ArmedForceID, uint64_t SoldierPropsID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CheckSoldierPropsMatchArmedForce");
    struct
    {
        int32_t ArmedForceID;
        uint64_t SoldierPropsID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    Parms.SoldierPropsID = (uint64_t)SoldierPropsID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABattleFieldPlayerState::CheckInstalledInvalidParts(const struct FInventoryItemInfo& InInventoryItemInfo, EAttachPosition InAttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CheckInstalledInvalidParts");
    struct
    {
        struct FInventoryItemInfo InInventoryItemInfo;
        enum EAttachPosition InAttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InInventoryItemInfo = (struct FInventoryItemInfo)InInventoryItemInfo;
    Parms.InAttachPosition = (enum EAttachPosition)InAttachPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABattleFieldPlayerState::CancelWeaponItemRedDot(const struct TArray<uint64_t>& WeaponItemIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CancelWeaponItemRedDot");
    struct
    {
        struct TArray<uint64_t> WeaponItemIDs;
    } Parms{};
    Parms.WeaponItemIDs = (struct TArray<uint64_t>)WeaponItemIDs;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::CancelVehiclePartItemRedDot(const struct TArray<uint64_t>& ItemIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "CancelVehiclePartItemRedDot");
    struct
    {
        struct TArray<uint64_t> ItemIds;
    } Parms{};
    Parms.ItemIds = (struct TArray<uint64_t>)ItemIds;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::AddOneRedEnvelope()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "AddOneRedEnvelope");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldPlayerState::AddOneOverloadPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldPlayerState", "AddOneOverloadPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldRedeployView::* ----
void UBattleFieldRedeployView::ShowWeaponChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "ShowWeaponChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::ShowAcRising(float RiseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "ShowAcRising");
    struct
    {
        float RiseTime;
    } Parms{};
    Parms.RiseTime = (float)RiseTime;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::ShowAcLanding(float LandTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "ShowAcLanding");
    struct
    {
        float LandTime;
    } Parms{};
    Parms.LandTime = (float)LandTime;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::ShowAC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "ShowAC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::SaveRedeployConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "SaveRedeployConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::RefreshCurentWeapons()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "RefreshCurentWeapons");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::OnRedeployPointSelected(struct UWidget* SelectedPoint, uint8_t bAutoSelect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "OnRedeployPointSelected");
    struct
    {
        struct UWidget* SelectedPoint;
        uint8_t bAutoSelect;
    } Parms{};
    Parms.SelectedPoint = (struct UWidget*)SelectedPoint;
    Parms.bAutoSelect = (uint8_t)bAutoSelect;
    this->ProcessEvent(Func, &Parms);
}

float UBattleFieldRedeployView::GetLastTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "GetLastTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBattleFieldRedeployView::CreatePlayerMarker(uint64_t PlayerId, uint64_t Uin, int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "CreatePlayerMarker");
    struct
    {
        uint64_t PlayerId;
        uint64_t Uin;
        int32_t Camp;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.Uin = (uint64_t)Uin;
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::ChangeCameraLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "ChangeCameraLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployView::AfterShowOpenAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployView", "AfterShowOpenAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URedeployBaseUIViewFramework::* ----
void URedeployBaseUIViewFramework::SetWidgetVisible(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetVisible");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetWidgetSelfHitTestInvisibleOrCollapsed(struct UWidget* Widget, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetSelfHitTestInvisibleOrCollapsed");
    struct
    {
        struct UWidget* Widget;
        uint8_t bVisible;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetWidgetSelfHitTestInvisible(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetSelfHitTestInvisible");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetWidgetOpacity(struct UWidget* Widget, float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetOpacity");
    struct
    {
        struct UWidget* Widget;
        float Opacity;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetWidgetHitTestInvisible(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetHitTestInvisible");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetWidgetHidden(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetHidden");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetWidgetCollapsed(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetWidgetCollapsed");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::SetOpenTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "SetOpenTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::PlayUIAudio(struct FName AudioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "PlayUIAudio");
    struct
    {
        struct FName AudioName;
    } Parms{};
    Parms.AudioName = (struct FName)AudioName;
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::OnGameHudStateChanged(struct UHudManager* InHudManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "OnGameHudStateChanged");
    struct
    {
        struct UHudManager* InHudManager;
    } Parms{};
    Parms.InHudManager = (struct UHudManager*)InHudManager;
    this->ProcessEvent(Func, &Parms);
}

struct UWidget* URedeployBaseUIViewFramework::GetWidgetFromPath(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "GetWidgetFromPath");
    struct
    {
        struct FString Path;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URedeployBaseUIViewFramework::CollectAnimations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "CollectAnimations");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URedeployBaseUIViewFramework::CalculateShowTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedeployBaseUIViewFramework", "CalculateShowTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldRedeployViewFramework::* ----
void UBattleFieldRedeployViewFramework::ShowWeaponChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "ShowWeaponChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::ShowAcRising(float RiseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "ShowAcRising");
    struct
    {
        float RiseTime;
    } Parms{};
    Parms.RiseTime = (float)RiseTime;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::ShowAcLanding(float LandTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "ShowAcLanding");
    struct
    {
        float LandTime;
    } Parms{};
    Parms.LandTime = (float)LandTime;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::ShowAC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "ShowAC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::SaveRedeployConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "SaveRedeployConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::RefreshCurentWeapons()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "RefreshCurentWeapons");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::OnRedeployPointSelected(struct UWidget* SelectedPoint, uint8_t bAutoSelect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "OnRedeployPointSelected");
    struct
    {
        struct UWidget* SelectedPoint;
        uint8_t bAutoSelect;
    } Parms{};
    Parms.SelectedPoint = (struct UWidget*)SelectedPoint;
    Parms.bAutoSelect = (uint8_t)bAutoSelect;
    this->ProcessEvent(Func, &Parms);
}

float UBattleFieldRedeployViewFramework::GetLastTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "GetLastTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBattleFieldRedeployViewFramework::CreatePlayerMarker(uint64_t PlayerId, uint64_t Uin, int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "CreatePlayerMarker");
    struct
    {
        uint64_t PlayerId;
        uint64_t Uin;
        int32_t Camp;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.Uin = (uint64_t)Uin;
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::ChangeCameraLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "ChangeCameraLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldRedeployViewFramework::AfterShowOpenAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldRedeployViewFramework", "AfterShowOpenAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldSettlementView::* ----
void UBattleFieldSettlementView::OnBattleFieldEndMatchEvent(int32_t InWinCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldSettlementView", "OnBattleFieldEndMatchEvent");
    struct
    {
        int32_t InWinCamp;
    } Parms{};
    Parms.InWinCamp = (int32_t)InWinCamp;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldStatisticsComponent::* ----
void UBattleFieldStatisticsComponent::CalculateAndShowStickToTheGoalInfo(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowStickToTheGoalInfo");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowNeutralizedInfo(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowNeutralizedInfo");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowKillInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowKillInfo");
    struct
    {
        struct FKillInfo KillInfo;
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowKillAssitInfo(struct FKillInfo KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowKillAssitInfo");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowHitHeadInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowHitHeadInfo");
    struct
    {
        struct FKillInfo KillInfo;
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowFarKillInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowFarKillInfo");
    struct
    {
        struct FKillInfo KillInfo;
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowDefendCapPointKillInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowDefendCapPointKillInfo");
    struct
    {
        struct FKillInfo KillInfo;
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowContinueKillInfo(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowContinueKillInfo");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowCapturingInfo(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowCapturingInfo");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UBattleFieldStatisticsComponent::CalculateAndShowCapturedInfo(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldStatisticsComponent", "CalculateAndShowCapturedInfo");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- ABattleFieldTeamSystem::* ----
void ABattleFieldTeamSystem::OnPlayerSettlementEnd(int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldTeamSystem", "OnPlayerSettlementEnd");
    struct
    {
        int64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void ABattleFieldTeamSystem::OnPlayerSettlementBegin(int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleFieldTeamSystem", "OnPlayerSettlementBegin");
    struct
    {
        int64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBattleFieldUtil::* ----
struct FString UBattleFieldUtil::PruneString(struct FString InStr, int32_t maxLen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "PruneString");
    struct
    {
        struct FString InStr;
        int32_t maxLen;
        struct FString ReturnValue;
    } Parms{};
    Parms.InStr = (struct FString)InStr;
    Parms.maxLen = (int32_t)maxLen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBattleFieldUtil::IsLocalPlayerTeamMateByUin(struct UObject* WorldContextObject, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "IsLocalPlayerTeamMateByUin");
    struct
    {
        struct UObject* WorldContextObject;
        uint64_t PlayerId;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerId = (uint64_t)PlayerId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBattleFieldUtil::IsInLocalPlayerTeamByUin(struct UObject* WorldContextObject, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "IsInLocalPlayerTeamByUin");
    struct
    {
        struct UObject* WorldContextObject;
        uint64_t PlayerId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerId = (uint64_t)PlayerId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBattleFieldUtil::GetTeamPlayerNameByPlayerId(struct UObject* WorldContextObject, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetTeamPlayerNameByPlayerId");
    struct
    {
        struct UObject* WorldContextObject;
        uint64_t PlayerId;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerId = (uint64_t)PlayerId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UBattleFieldUtil::GetTeamLeaderID(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetTeamLeaderID");
    struct
    {
        struct UObject* WorldContextObject;
        uint64_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UBattleFieldUtil::GetMatchTime(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetMatchTime");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBattleFieldUtil::GetMapName(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetMapName");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBattleFieldUtil::GetLocalPlayerTeamID(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalPlayerTeamID");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMPlayerState* UBattleFieldUtil::GetLocalPlayerState(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalPlayerState");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMPlayerState* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBattleFieldUtil::GetLocalPlayerCamp(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalPlayerCamp");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EBattleFieldForcesType UBattleFieldUtil::GetLocalForcesType(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalForcesType");
    struct
    {
        struct UObject* WorldContextObject;
        enum EBattleFieldForcesType ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* UBattleFieldUtil::GetLocalCharacter(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalCharacter");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ABattleFieldPlayerState* UBattleFieldUtil::GetLocalBattleFieldPlayerState(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalBattleFieldPlayerState");
    struct
    {
        struct UObject* WorldContextObject;
        struct ABattleFieldPlayerState* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ABattleFieldCharacter* UBattleFieldUtil::GetLocalBattleFieldCharacter(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLocalBattleFieldCharacter");
    struct
    {
        struct UObject* WorldContextObject;
        struct ABattleFieldCharacter* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UBattleFieldUtil::GetLeftTime(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetLeftTime");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBattleFieldUtil::GetCurrentDominantCamp(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetCurrentDominantCamp");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBattleFieldUtil::GetArmsIconWithArmedForceId(struct UObject* WorldContextObject, int32_t ArmedForceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetArmsIconWithArmedForceId");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ArmedForceID;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBattleFieldUtil::GetArmsIcon(struct UObject* WorldContextObject, int32_t TeamPlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetArmsIcon");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t TeamPlayerIndex;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TeamPlayerIndex = (int32_t)TeamPlayerIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FArmedForceDataInfo UBattleFieldUtil::GetArmedForceDataRow(int32_t ArmedForceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetArmedForceDataRow");
    struct
    {
        int32_t ArmedForceID;
        struct FArmedForceDataInfo ReturnValue;
    } Parms{};
    Parms.ArmedForceID = (int32_t)ArmedForceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ACHARACTER*> UBattleFieldUtil::GetAllCharacterFromCamp(struct UObject* WorldContextObject, int32_t InCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "GetAllCharacterFromCamp");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t InCamp;
        struct TArray<struct ACHARACTER*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InCamp = (int32_t)InCamp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBattleFieldUtil::CheckHasWholeRedeployHudState(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "CheckHasWholeRedeployHudState");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBattleFieldUtil::CheckHasRedeployViewHudState(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "CheckHasRedeployViewHudState");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBattleFieldUtil::CheckHasRedeployHudState(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BattleFieldUtil", "CheckHasRedeployHudState");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBattleReportTipsView::* ----
void UBattleReportTipsView::SetShow(uint8_t Show)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleReportTipsView", "SetShow");
    struct
    {
        uint8_t Show;
    } Parms{};
    Parms.Show = (uint8_t)Show;
    this->ProcessEvent(Func, &Parms);
}

void UBattleReportTipsView::OnTipsInfoNtf(const struct FBattleFieldBroadcastTipInfo& InTipInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleReportTipsView", "OnTipsInfoNtf");
    struct
    {
        struct FBattleFieldBroadcastTipInfo InTipInfo;
    } Parms{};
    Parms.InTipInfo = (struct FBattleFieldBroadcastTipInfo)InTipInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBattleReportTipsView::OnFadeOutEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleReportTipsView", "OnFadeOutEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleReportTipsView::OnFadeInEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleReportTipsView", "OnFadeInEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBattleReportTipsView::BP_SetColorType(const int32_t& ColorType, uint8_t IsRedTimeBG)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BattleReportTipsView", "BP_SetColorType");
    struct
    {
        int32_t ColorType;
        uint8_t IsRedTimeBG;
    } Parms{};
    Parms.ColorType = (int32_t)ColorType;
    Parms.IsRedTimeBG = (uint8_t)IsRedTimeBG;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBigMapBattleFieldHUDView::* ----
void UBigMapBattleFieldHUDView::OnAddDecSliderCurNumChanged(int32_t InCurNum, int32_t InChangeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapBattleFieldHUDView", "OnAddDecSliderCurNumChanged");
    struct
    {
        int32_t InCurNum;
        int32_t InChangeNum;
    } Parms{};
    Parms.InCurNum = (int32_t)InCurNum;
    Parms.InChangeNum = (int32_t)InChangeNum;
    this->ProcessEvent(Func, &Parms);
}

void UBigMapBattleFieldHUDView::CommonButton_SelfClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapBattleFieldHUDView", "CommonButton_SelfClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBigMapBattleFieldHUDView::BP_SetIsCommanderMode(uint8_t IsCommanderMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapBattleFieldHUDView", "BP_SetIsCommanderMode");
    struct
    {
        uint8_t IsCommanderMode;
    } Parms{};
    Parms.IsCommanderMode = (uint8_t)IsCommanderMode;
    this->ProcessEvent(Func, &Parms);
}

// ---- ACanMakeDamageBreakablePawn::* ----
void ACanMakeDamageBreakablePawn::DestroyedTrigger(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanMakeDamageBreakablePawn", "DestroyedTrigger");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCapturePointIconHUDController::* ----
void UCapturePointIconHUDController::OnCapturePointHUDUpdate(struct ABattleFieldCapturePoint* InCapturePoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapturePointIconHUDController", "OnCapturePointHUDUpdate");
    struct
    {
        struct ABattleFieldCapturePoint* InCapturePoint;
    } Parms{};
    Parms.InCapturePoint = (struct ABattleFieldCapturePoint*)InCapturePoint;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCapturePointViewItem::* ----
void UCapturePointViewItem::UnLockClickBtn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapturePointViewItem", "UnLockClickBtn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCapturePointViewItem::OnBtnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapturePointViewItem", "OnBtnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCapturePointViewItem::LockClickBtn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapturePointViewItem", "LockClickBtn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPlayerGMComponentBattleField::* ----
void UPlayerGMComponentBattleField::GMServerKickPvpBot(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentBattleField", "GMServerKickPvpBot");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentBattleField::GMKickPvpBot(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentBattleField", "GMKickPvpBot");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    this->ProcessEvent(Func, &Parms);
}

// ---- UPvpAIComponent::* ----
void UPvpAIComponent::TakeOverDebugInfo(struct APvpAIDebugInfo* AIDebugInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "TakeOverDebugInfo");
    struct
    {
        struct APvpAIDebugInfo* AIDebugInfo;
    } Parms{};
    Parms.AIDebugInfo = (struct APvpAIDebugInfo*)AIDebugInfo;
    this->ProcessEvent(Func, &Parms);
}

void UPvpAIComponent::SortCoverPointWeight(uint8_t CutZero, int32_t RetainSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "SortCoverPointWeight");
    struct
    {
        uint8_t CutZero;
        int32_t RetainSize;
    } Parms{};
    Parms.CutZero = (uint8_t)CutZero;
    Parms.RetainSize = (int32_t)RetainSize;
    this->ProcessEvent(Func, &Parms);
}

void UPvpAIComponent::SetDebugMode(int32_t Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "SetDebugMode");
    struct
    {
        int32_t Mode;
    } Parms{};
    Parms.Mode = (int32_t)Mode;
    this->ProcessEvent(Func, &Parms);
}

void UPvpAIComponent::OnTakeDamage(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "OnTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void UPvpAIComponent::OccupyCoverPoint(int32_t CoverIndex, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "OccupyCoverPoint");
    struct
    {
        int32_t CoverIndex;
        float Duration;
    } Parms{};
    Parms.CoverIndex = (int32_t)CoverIndex;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UPvpAIComponent::IsCharacterOnVehicle(struct ADFMCharacter* CHARACTER, uint8_t& InVehicle, uint8_t& IsThreatVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "IsCharacterOnVehicle");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        uint8_t InVehicle;
        uint8_t IsThreatVehicle;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    InVehicle = Parms.InVehicle;
    IsThreatVehicle = Parms.IsThreatVehicle;
}

struct AGPVehicleBase* UPvpAIComponent::GetVulnerableVehicle(struct AActor* WeaponPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetVulnerableVehicle");
    struct
    {
        struct AActor* WeaponPtr;
        struct AGPVehicleBase* ReturnValue;
    } Parms{};
    Parms.WeaponPtr = (struct AActor*)WeaponPtr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::GetVehicleVulnerableBase(struct AGPVehicleBase* VehicleBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetVehicleVulnerableBase");
    struct
    {
        struct AGPVehicleBase* VehicleBase;
        float ReturnValue;
    } Parms{};
    Parms.VehicleBase = (struct AGPVehicleBase*)VehicleBase;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetVehicleThreat(struct AGPVehicleBase* VehicleBase, float& SightThreat, float& DamageThreat, float& AirhitThreat, uint8_t& IsInVehicleSight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetVehicleThreat");
    struct
    {
        struct AGPVehicleBase* VehicleBase;
        float SightThreat;
        float DamageThreat;
        float AirhitThreat;
        uint8_t IsInVehicleSight;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VehicleBase = (struct AGPVehicleBase*)VehicleBase;
    this->ProcessEvent(Func, &Parms);
    SightThreat = Parms.SightThreat;
    DamageThreat = Parms.DamageThreat;
    AirhitThreat = Parms.AirhitThreat;
    IsInVehicleSight = Parms.IsInVehicleSight;
    return Parms.ReturnValue;
}

struct TArray<struct ADFMVehicleBase*> UPvpAIComponent::GetThreatingVehicleBases()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetThreatingVehicleBases");
    struct
    {
        struct TArray<struct ADFMVehicleBase*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ADFMTank*> UPvpAIComponent::GetThreatingTanks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetThreatingTanks");
    struct
    {
        struct TArray<struct ADFMTank*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ADFMHelicopter*> UPvpAIComponent::GetThreatingHelicopters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetThreatingHelicopters");
    struct
    {
        struct TArray<struct ADFMHelicopter*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPvpAIComponent::GetTeamPlayerInCheckRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetTeamPlayerInCheckRadius");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPvpAIVisibleState UPvpAIComponent::GetTargetSightBlockState(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetTargetSightBlockState");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        enum EPvpAIVisibleState ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::GetTargetScore(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetTargetScore");
    struct
    {
        struct ADFMCharacter* Target;
        float ReturnValue;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPvpAIComponent::GetTargetEnemyThreats(struct ADFMCharacter* DFMCharacter, float& SightThreat, float& HearingThreat, float& DamageThreat, float& AirhitThreat, float& TeammateHurtThreat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetTargetEnemyThreats");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        float SightThreat;
        float HearingThreat;
        float DamageThreat;
        float AirhitThreat;
        float TeammateHurtThreat;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    this->ProcessEvent(Func, &Parms);
    SightThreat = Parms.SightThreat;
    HearingThreat = Parms.HearingThreat;
    DamageThreat = Parms.DamageThreat;
    AirhitThreat = Parms.AirhitThreat;
    TeammateHurtThreat = Parms.TeammateHurtThreat;
}

void UPvpAIComponent::GetTargetEnemyStatus(struct ADFMCharacter* DFMCharacter, uint8_t& IsCrouch, uint8_t& IsProne, uint8_t& IsInSight, uint8_t& IsImpendingDeath, uint8_t& IsBlocked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetTargetEnemyStatus");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t IsCrouch;
        uint8_t IsProne;
        uint8_t IsInSight;
        uint8_t IsImpendingDeath;
        uint8_t IsBlocked;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    this->ProcessEvent(Func, &Parms);
    IsCrouch = Parms.IsCrouch;
    IsProne = Parms.IsProne;
    IsInSight = Parms.IsInSight;
    IsImpendingDeath = Parms.IsImpendingDeath;
    IsBlocked = Parms.IsBlocked;
}

uint8_t UPvpAIComponent::GetRescueWillFromTable(struct FName Name, struct FPvpAiRescueWill& Will)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetRescueWillFromTable");
    struct
    {
        struct FName Name;
        struct FPvpAiRescueWill Will;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
    Will = Parms.Will;
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetRandomLocationInRadius(struct FVector CenterLoc, float radius, float PathLenLimit, struct FVector& OutLoc, int32_t TryLoopCnt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetRandomLocationInRadius");
    struct
    {
        struct FVector CenterLoc;
        float radius;
        float PathLenLimit;
        struct FVector OutLoc;
        int32_t TryLoopCnt;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CenterLoc = (struct FVector)CenterLoc;
    Parms.radius = (float)radius;
    Parms.PathLenLimit = (float)PathLenLimit;
    Parms.TryLoopCnt = (int32_t)TryLoopCnt;
    this->ProcessEvent(Func, &Parms);
    OutLoc = Parms.OutLoc;
    return Parms.ReturnValue;
}

EPVPAIFightStyle UPvpAIComponent::GetPVEAIFightStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetPVEAIFightStyle");
    struct
    {
        enum EPVPAIFightStyle ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FPvpAICoverPoint> UPvpAIComponent::GetPeekPoints(struct AActor* mainTarget, int32_t MaxNum, float Range, uint8_t bDrawDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetPeekPoints");
    struct
    {
        struct AActor* mainTarget;
        int32_t MaxNum;
        float Range;
        uint8_t bDrawDebug;
        struct TArray<struct FPvpAICoverPoint> ReturnValue;
    } Parms{};
    Parms.mainTarget = (struct AActor*)mainTarget;
    Parms.MaxNum = (int32_t)MaxNum;
    Parms.Range = (float)Range;
    Parms.bDrawDebug = (uint8_t)bDrawDebug;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPVehicleBase* UPvpAIComponent::GetHighestThreatVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetHighestThreatVehicle");
    struct
    {
        struct AGPVehicleBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetFuturePathNewVisibleThreatCharacters(float PathAppendMin, float PathAppendMax, float SightAngle, int32_t FocusTopThreatCount, struct TArray<struct ADFMCharacter*>& NewThreatCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetFuturePathNewVisibleThreatCharacters");
    struct
    {
        float PathAppendMin;
        float PathAppendMax;
        float SightAngle;
        int32_t FocusTopThreatCount;
        struct TArray<struct ADFMCharacter*> NewThreatCharacters;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PathAppendMin = (float)PathAppendMin;
    Parms.PathAppendMax = (float)PathAppendMax;
    Parms.SightAngle = (float)SightAngle;
    Parms.FocusTopThreatCount = (int32_t)FocusTopThreatCount;
    this->ProcessEvent(Func, &Parms);
    NewThreatCharacters = Parms.NewThreatCharacters;
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetFirstTargetInfo(struct FPvpAIFightTargetInfo& TargetInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetFirstTargetInfo");
    struct
    {
        struct FPvpAIFightTargetInfo TargetInfo;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TargetInfo = Parms.TargetInfo;
    return Parms.ReturnValue;
}

struct FPvpAIFightTargetInfo UPvpAIComponent::GetFightTargetInfoFast(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetFightTargetInfoFast");
    struct
    {
        struct ADFMCharacter* Target;
        struct FPvpAIFightTargetInfo ReturnValue;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPvpAIFightTargetInfo UPvpAIComponent::GetFightTargetByRange(EPvpAIThreatLevel ThreatLevelBegin, EPvpAIThreatLevel ThreadLevelEnd, EPvpAIThreatLevel VulnerableLevelBegin, EPvpAIThreatLevel VulnerableLevelEnd, float PosDistanceRangeBegin, float PosDistanceRangeEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetFightTargetByRange");
    struct
    {
        enum EPvpAIThreatLevel ThreatLevelBegin;
        enum EPvpAIThreatLevel ThreadLevelEnd;
        enum EPvpAIThreatLevel VulnerableLevelBegin;
        enum EPvpAIThreatLevel VulnerableLevelEnd;
        float PosDistanceRangeBegin;
        float PosDistanceRangeEnd;
        struct FPvpAIFightTargetInfo ReturnValue;
    } Parms{};
    Parms.ThreatLevelBegin = (enum EPvpAIThreatLevel)ThreatLevelBegin;
    Parms.ThreadLevelEnd = (enum EPvpAIThreatLevel)ThreadLevelEnd;
    Parms.VulnerableLevelBegin = (enum EPvpAIThreatLevel)VulnerableLevelBegin;
    Parms.VulnerableLevelEnd = (enum EPvpAIThreatLevel)VulnerableLevelEnd;
    Parms.PosDistanceRangeBegin = (float)PosDistanceRangeBegin;
    Parms.PosDistanceRangeEnd = (float)PosDistanceRangeEnd;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPvpAIFightTargetInfo UPvpAIComponent::GetFightTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetFightTarget");
    struct
    {
        struct FPvpAIFightTargetInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPvpAIFightTargetInfo UPvpAIComponent::GetFightFirstTargetExcludeMainTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetFightFirstTargetExcludeMainTarget");
    struct
    {
        struct FPvpAIFightTargetInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetDamageTakeInfoByCharacter(struct AGPCharacter* CHARACTER, float& DamageVal, float& DamageTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetDamageTakeInfoByCharacter");
    struct
    {
        struct AGPCharacter* CHARACTER;
        float DamageVal;
        float DamageTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    DamageVal = Parms.DamageVal;
    DamageTime = Parms.DamageTime;
    return Parms.ReturnValue;
}

struct UPVPAIJobs* UPvpAIComponent::GetCurrentJob()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetCurrentJob");
    struct
    {
        struct UPVPAIJobs* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UPvpAIComponent::GetCoverPointsIds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetCoverPointsIds");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPvpAIComponent::GetCoverPointOccupyCount(int32_t CoverIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetCoverPointOccupyCount");
    struct
    {
        int32_t CoverIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.CoverIndex = (int32_t)CoverIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetCoverInfo(int32_t CoverIndex, struct FVector& Location, uint8_t& IsFlat, EWayPointCoverHeight& CoverHeight, float& Score, struct FVector& CoverDir, struct FVector& FireDir, EAiPlayerLeanActionType LeanAction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetCoverInfo");
    struct
    {
        int32_t CoverIndex;
        struct FVector Location;
        uint8_t IsFlat;
        enum EWayPointCoverHeight CoverHeight;
        float Score;
        struct FVector CoverDir;
        struct FVector FireDir;
        enum EAiPlayerLeanActionType LeanAction;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CoverIndex = (int32_t)CoverIndex;
    Parms.LeanAction = (enum EAiPlayerLeanActionType)LeanAction;
    this->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    IsFlat = Parms.IsFlat;
    CoverHeight = Parms.CoverHeight;
    Score = Parms.Score;
    CoverDir = Parms.CoverDir;
    FireDir = Parms.FireDir;
    return Parms.ReturnValue;
}

int32_t UPvpAIComponent::GetCampPlayerInCheckRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetCampPlayerInCheckRadius");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPvpAICoverPoint UPvpAIComponent::GetBestPeekPointsAvoidThreats(struct AActor* mainTarget, int32_t MaxNum, float Range, uint8_t bDrawDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetBestPeekPointsAvoidThreats");
    struct
    {
        struct AActor* mainTarget;
        int32_t MaxNum;
        float Range;
        uint8_t bDrawDebug;
        struct FPvpAICoverPoint ReturnValue;
    } Parms{};
    Parms.mainTarget = (struct AActor*)mainTarget;
    Parms.MaxNum = (int32_t)MaxNum;
    Parms.Range = (float)Range;
    Parms.bDrawDebug = (uint8_t)bDrawDebug;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EInGameBattleClassType UPvpAIComponent::GetArmedForce()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetArmedForce");
    struct
    {
        enum EInGameBattleClassType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GetAntiVehicleWillFromTable(struct FName Name, struct FPvpAiAntiVehicleWill& Will)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetAntiVehicleWillFromTable");
    struct
    {
        struct FName Name;
        struct FPvpAiAntiVehicleWill Will;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
    Will = Parms.Will;
    return Parms.ReturnValue;
}

float UPvpAIComponent::GetAmbientThreatValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetAmbientThreatValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPvpAIThreatLevel UPvpAIComponent::GetAmbientThreatType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetAmbientThreatType");
    struct
    {
        enum EPvpAIThreatLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FPvpAIVehicleTargetInfo> UPvpAIComponent::GetAllVehicalTargets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetAllVehicalTargets");
    struct
    {
        struct TArray<struct FPvpAIVehicleTargetInfo> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FPvpAIFightTargetInfo> UPvpAIComponent::GetAllTargetInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GetAllTargetInfo");
    struct
    {
        struct TArray<struct FPvpAIFightTargetInfo> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::GenCoverPoint(struct FVector Location, float radius, uint8_t OnlyCover, float Rate, int32_t MaxCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "GenCoverPoint");
    struct
    {
        struct FVector Location;
        float radius;
        uint8_t OnlyCover;
        float Rate;
        int32_t MaxCount;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.radius = (float)radius;
    Parms.OnlyCover = (uint8_t)OnlyCover;
    Parms.Rate = (float)Rate;
    Parms.MaxCount = (int32_t)MaxCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPvpAIComponent::DestroyDebugInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "DestroyDebugInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPvpAIComponent::CheckCoverPointView(int32_t CoverIndex, struct FVector TaregetLocation, float ViewOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "CheckCoverPointView");
    struct
    {
        int32_t CoverIndex;
        struct FVector TaregetLocation;
        float ViewOffset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CoverIndex = (int32_t)CoverIndex;
    Parms.TaregetLocation = (struct FVector)TaregetLocation;
    Parms.ViewOffset = (float)ViewOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::CheckCoverPointBlock(int32_t CoverIndex, struct FVector TaregetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "CheckCoverPointBlock");
    struct
    {
        int32_t CoverIndex;
        struct FVector TaregetLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CoverIndex = (int32_t)CoverIndex;
    Parms.TaregetLocation = (struct FVector)TaregetLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::CalculateVulnerability(struct FPvpAIFightTargetInfo& Info, struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "CalculateVulnerability");
    struct
    {
        struct FPvpAIFightTargetInfo Info;
        struct ADFMCharacter* CHARACTER;
        float ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    Info = Parms.Info;
    return Parms.ReturnValue;
}

float UPvpAIComponent::CalculateTargetScore(struct FPvpAIFightTargetInfo& Info, struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "CalculateTargetScore");
    struct
    {
        struct FPvpAIFightTargetInfo Info;
        struct ADFMCharacter* CHARACTER;
        float ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    Info = Parms.Info;
    return Parms.ReturnValue;
}

void UPvpAIComponent::BPOnRemoveBuff(int32_t BuffId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BPOnRemoveBuff");
    struct
    {
        int32_t BuffId;
    } Parms{};
    Parms.BuffId = (int32_t)BuffId;
    this->ProcessEvent(Func, &Parms);
}

void UPvpAIComponent::BPOnAddBuff(int32_t BuffId, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BPOnAddBuff");
    struct
    {
        int32_t BuffId;
        float Duration;
    } Parms{};
    Parms.BuffId = (int32_t)BuffId;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

float UPvpAIComponent::BPCalcVehicleVulnerableValue(struct AGPVehicleBase* VehicleBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BPCalcVehicleVulnerableValue");
    struct
    {
        struct AGPVehicleBase* VehicleBase;
        float ReturnValue;
    } Parms{};
    Parms.VehicleBase = (struct AGPVehicleBase*)VehicleBase;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::BPCalcVehicleThreatValue(struct AGPVehicleBase* VehicleBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BPCalcVehicleThreatValue");
    struct
    {
        struct AGPVehicleBase* VehicleBase;
        float ReturnValue;
    } Parms{};
    Parms.VehicleBase = (struct AGPVehicleBase*)VehicleBase;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::BP_InnerCalcAmbientThreatValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BP_InnerCalcAmbientThreatValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::BP_CalculateVulnerability(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BP_CalculateVulnerability");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        float ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::BP_CalculateTargetScore(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BP_CalculateTargetScore");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        float ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPvpAIComponent::BP_CalcThreatTargetFinalScore(const struct FPvpAIFightTargetInfo& Info, struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "BP_CalcThreatTargetFinalScore");
    struct
    {
        struct FPvpAIFightTargetInfo Info;
        struct ADFMCharacter* CHARACTER;
        float ReturnValue;
    } Parms{};
    Parms.Info = (struct FPvpAIFightTargetInfo)Info;
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPvpAIComponent::AddCoverPointScore(int32_t CoverIndex, float Score, uint8_t Reset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIComponent", "AddCoverPointScore");
    struct
    {
        int32_t CoverIndex;
        float Score;
        uint8_t Reset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CoverIndex = (int32_t)CoverIndex;
    Parms.Score = (float)Score;
    Parms.Reset = (uint8_t)Reset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- APvpAIDebugInfo::* ----
void APvpAIDebugInfo::TickTimerHandler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "TickTimerHandler");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::SetMonitorTarget(struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "SetMonitorTarget");
    struct
    {
        struct AController* Controller;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::SetDebugMode(int32_t Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "SetDebugMode");
    struct
    {
        int32_t Val;
    } Parms{};
    Parms.Val = (int32_t)Val;
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::RepCurrViewer(struct ADFMCharacter* Viewer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "RepCurrViewer");
    struct
    {
        struct ADFMCharacter* Viewer;
    } Parms{};
    Parms.Viewer = (struct ADFMCharacter*)Viewer;
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D APvpAIDebugInfo::ProjectWorldToEditorScreen(struct UObject* Context, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PvpAIDebugInfo", "ProjectWorldToEditorScreen");
    struct
    {
        struct UObject* Context;
        struct FVector Location;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APvpAIDebugInfo::OnRep_Threats()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_Threats");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_PersonDataChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_PersonDataChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_Health()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_Health");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_DifficultyName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_DifficultyName");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_DebugModeChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_DebugModeChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_CurrPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_CurrPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_BTs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_BTs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_BattleDataChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_BattleDataChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_AIName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_AIName");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_AIJobType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_AIJobType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAIDebugInfo::OnRep_AIFightStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "OnRep_AIFightStyle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector APvpAIDebugInfo::GetCameraLocation(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PvpAIDebugInfo", "GetCameraLocation");
    struct
    {
        struct UObject* Context;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APvpAIDebugInfo::CloseAndDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAIDebugInfo", "CloseAndDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPVPAIJobs::* ----
void UPVPAIJobs::SetOwner(struct ADFMAIPlayerController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "SetOwner");
    struct
    {
        struct ADFMAIPlayerController* Controller;
    } Parms{};
    Parms.Controller = (struct ADFMAIPlayerController*)Controller;
    this->ProcessEvent(Func, &Parms);
}

void UPVPAIJobs::MarkIsRead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "MarkIsRead");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVPAIJobs::MarkIsFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "MarkIsFailed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPVPAIJobs::MarkIsDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "MarkIsDone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPVPAIJobs::IsValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "IsValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPVPAIJobs::IsNew()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "IsNew");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPVPAIJobs::IsDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "IsDone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPVPAIJobType UPVPAIJobs::GetType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAIJobs", "GetType");
    struct
    {
        enum EPVPAIJobType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMoveToCapturePointJob::* ----
void UMoveToCapturePointJob::SetTargetRoutePoint(struct ABattleRoutePoint* RoutePoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MoveToCapturePointJob", "SetTargetRoutePoint");
    struct
    {
        struct ABattleRoutePoint* RoutePoint;
    } Parms{};
    Parms.RoutePoint = (struct ABattleRoutePoint*)RoutePoint;
    this->ProcessEvent(Func, &Parms);
}

void UMoveToCapturePointJob::SetTargetPoint(struct AActor* Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MoveToCapturePointJob", "SetTargetPoint");
    struct
    {
        struct AActor* Point;
    } Parms{};
    Parms.Point = (struct AActor*)Point;
    this->ProcessEvent(Func, &Parms);
}

struct ABattleRoutePoint* UMoveToCapturePointJob::GetTargetRoutePoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MoveToCapturePointJob", "GetTargetRoutePoint");
    struct
    {
        struct ABattleRoutePoint* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UMoveToCapturePointJob::GetTargetPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MoveToCapturePointJob", "GetTargetPoint");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMoveToCapturePointFlankJob::* ----
void UMoveToCapturePointFlankJob::SetFlankRoutePoint(struct ABattleRoutePoint* Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MoveToCapturePointFlankJob", "SetFlankRoutePoint");
    struct
    {
        struct ABattleRoutePoint* Point;
    } Parms{};
    Parms.Point = (struct ABattleRoutePoint*)Point;
    this->ProcessEvent(Func, &Parms);
}

struct ABattleRoutePoint* UMoveToCapturePointFlankJob::GetFlankRoutePoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MoveToCapturePointFlankJob", "GetFlankRoutePoint");
    struct
    {
        struct ABattleRoutePoint* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- APvpAiOverviewDebugInfo::* ----
void APvpAiOverviewDebugInfo::OnRep_ObjectiveInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiOverviewDebugInfo", "OnRep_ObjectiveInfos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiOverviewDebugInfo::OnRep_DefendCampInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiOverviewDebugInfo", "OnRep_DefendCampInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiOverviewDebugInfo::OnRep_AttackCampInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiOverviewDebugInfo", "OnRep_AttackCampInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiOverviewDebugInfo::MulticastClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiOverviewDebugInfo", "MulticastClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiOverviewDebugInfo::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiOverviewDebugInfo", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- APvpAiPersonDetailDebugInfo::* ----
void APvpAiPersonDetailDebugInfo::ServerCloseSpectateModeLogicPlayerKillHandler(struct AGPPlayerController* LocalPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "ServerCloseSpectateModeLogicPlayerKillHandler");
    struct
    {
        struct AGPPlayerController* LocalPlayerController;
    } Parms{};
    Parms.LocalPlayerController = (struct AGPPlayerController*)LocalPlayerController;
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::ServerChangeTargetPlayer(struct AGPCharacter* DestCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "ServerChangeTargetPlayer");
    struct
    {
        struct AGPCharacter* DestCharacter;
    } Parms{};
    Parms.DestCharacter = (struct AGPCharacter*)DestCharacter;
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_ThreatVehicelChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_ThreatVehicelChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_SecondTargetInfo3()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_SecondTargetInfo3");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_SecondTargetInfo2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_SecondTargetInfo2");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_SecondTargetInfo1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_SecondTargetInfo1");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_SecondTargetInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_SecondTargetInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_ResuceInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_ResuceInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_PersonData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_PersonData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_MutationInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_MutationInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_MainTargetInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_MainTargetInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_CurrPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_CurrPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_CurrBattleRoute()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_CurrBattleRoute");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_BHTTreeDesc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_BHTTreeDesc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_BHTCompName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_BHTCompName");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::OnRep_BHTBlackboardDesc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "OnRep_BHTBlackboardDesc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::MulticastClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "MulticastClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t APvpAiPersonDetailDebugInfo::IsLocalPlayerInSpectating()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "IsLocalPlayerInSpectating");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APvpAiPersonDetailDebugInfo::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::ChangeTargetPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "ChangeTargetPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::ChangeSpectatingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "ChangeSpectatingState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APvpAiPersonDetailDebugInfo::AsyncChangeTargetPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PvpAiPersonDetailDebugInfo", "AsyncChangeTargetPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- APVPAISubsystem::* ----
int32_t APVPAISubsystem::RandomIndexWithWeight(struct TArray<float> Weights)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "RandomIndexWithWeight");
    struct
    {
        struct TArray<float> Weights;
        int32_t ReturnValue;
    } Parms{};
    Parms.Weights = (struct TArray<float>)Weights;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APVPAISubsystem::PlayerRequestAssistInternal(struct ADFMPlayerController* PlayerContrller, struct AGPCharacter* PlayerCharacter, EPlayerRequestAssistType AssistType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "PlayerRequestAssistInternal");
    struct
    {
        struct ADFMPlayerController* PlayerContrller;
        struct AGPCharacter* PlayerCharacter;
        enum EPlayerRequestAssistType AssistType;
    } Parms{};
    Parms.PlayerContrller = (struct ADFMPlayerController*)PlayerContrller;
    Parms.PlayerCharacter = (struct AGPCharacter*)PlayerCharacter;
    Parms.AssistType = (enum EPlayerRequestAssistType)AssistType;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnServerLocalPlayerIsNeedRescueChanged(struct AActor* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnServerLocalPlayerIsNeedRescueChanged");
    struct
    {
        struct AActor* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct AActor*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnServerInitNewPlayer(struct APlayerController* NewPlayerController, struct AGPPlayerState* NewPlayerState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnServerInitNewPlayer");
    struct
    {
        struct APlayerController* NewPlayerController;
        struct AGPPlayerState* NewPlayerState;
    } Parms{};
    Parms.NewPlayerController = (struct APlayerController*)NewPlayerController;
    Parms.NewPlayerState = (struct AGPPlayerState*)NewPlayerState;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnPlayerRemoveBuffNtf(uint64_t BuffId, struct AActor* Maker, struct AActor* MakerInstigator, struct AActor* BuffOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnPlayerRemoveBuffNtf");
    struct
    {
        uint64_t BuffId;
        struct AActor* Maker;
        struct AActor* MakerInstigator;
        struct AActor* BuffOwner;
    } Parms{};
    Parms.BuffId = (uint64_t)BuffId;
    Parms.Maker = (struct AActor*)Maker;
    Parms.MakerInstigator = (struct AActor*)MakerInstigator;
    Parms.BuffOwner = (struct AActor*)BuffOwner;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnPlayerAddBuffNtf(uint64_t BuffId, struct AActor* Maker, struct AActor* MakerInstigator, struct AActor* BuffOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnPlayerAddBuffNtf");
    struct
    {
        uint64_t BuffId;
        struct AActor* Maker;
        struct AActor* MakerInstigator;
        struct AActor* BuffOwner;
    } Parms{};
    Parms.BuffId = (uint64_t)BuffId;
    Parms.Maker = (struct AActor*)Maker;
    Parms.MakerInstigator = (struct AActor*)MakerInstigator;
    Parms.BuffOwner = (struct AActor*)BuffOwner;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnJobFinished(struct UPVPAIJobs* Job)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnJobFinished");
    struct
    {
        struct UPVPAIJobs* Job;
    } Parms{};
    Parms.Job = (struct UPVPAIJobs*)Job;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnCharacterEnterImpendingDeath(struct AGPCharacterBase* GPCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnCharacterEnterImpendingDeath");
    struct
    {
        struct AGPCharacterBase* GPCharacter;
    } Parms{};
    Parms.GPCharacter = (struct AGPCharacterBase*)GPCharacter;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::OnAddBubbleMarker(struct AController* Controller, EQuickChatMarkingItemType MarkingInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "OnAddBubbleMarker");
    struct
    {
        struct AController* Controller;
        enum EQuickChatMarkingItemType MarkingInfo;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.MarkingInfo = (enum EQuickChatMarkingItemType)MarkingInfo;
    this->ProcessEvent(Func, &Parms);
}

void APVPAISubsystem::MarkRescueCampmateAction(struct AGPCharacter* Helper, struct AGPCharacter* DeathCharacter, uint8_t AddMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "MarkRescueCampmateAction");
    struct
    {
        struct AGPCharacter* Helper;
        struct AGPCharacter* DeathCharacter;
        uint8_t AddMark;
    } Parms{};
    Parms.Helper = (struct AGPCharacter*)Helper;
    Parms.DeathCharacter = (struct AGPCharacter*)DeathCharacter;
    Parms.AddMark = (uint8_t)AddMark;
    this->ProcessEvent(Func, &Parms);
}

struct FPvpAIPeekInfo APVPAISubsystem::InnerGetPeekInfoBehindWall(struct AActor* Target, struct FVector NavPoint, struct FVector WallLeft, struct FVector WallRight, struct ADFMAIController* AIController, float HorizontalOffset, int32_t CheckPointNum, float CrouchZOffset, float StandZOffset, struct ULineBatchComponent* EditorDrawer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVPAISubsystem", "InnerGetPeekInfoBehindWall");
    struct
    {
        struct AActor* Target;
        struct FVector NavPoint;
        struct FVector WallLeft;
        struct FVector WallRight;
        struct ADFMAIController* AIController;
        float HorizontalOffset;
        int32_t CheckPointNum;
        float CrouchZOffset;
        float StandZOffset;
        struct ULineBatchComponent* EditorDrawer;
        struct FPvpAIPeekInfo ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.NavPoint = (struct FVector)NavPoint;
    Parms.WallLeft = (struct FVector)WallLeft;
    Parms.WallRight = (struct FVector)WallRight;
    Parms.AIController = (struct ADFMAIController*)AIController;
    Parms.HorizontalOffset = (float)HorizontalOffset;
    Parms.CheckPointNum = (int32_t)CheckPointNum;
    Parms.CrouchZOffset = (float)CrouchZOffset;
    Parms.StandZOffset = (float)StandZOffset;
    Parms.EditorDrawer = (struct ULineBatchComponent*)EditorDrawer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t APVPAISubsystem::GetRescueCampmateMarkCount(struct AGPCharacter* DeathCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "GetRescueCampmateMarkCount");
    struct
    {
        struct AGPCharacter* DeathCharacter;
        int32_t ReturnValue;
    } Parms{};
    Parms.DeathCharacter = (struct AGPCharacter*)DeathCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APVPAISubsystem::GetRescueCampmateEnvSecurity(struct AGPCharacter* Helper, struct AGPCharacter* DeathCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "GetRescueCampmateEnvSecurity");
    struct
    {
        struct AGPCharacter* Helper;
        struct AGPCharacter* DeathCharacter;
        float ReturnValue;
    } Parms{};
    Parms.Helper = (struct AGPCharacter*)Helper;
    Parms.DeathCharacter = (struct AGPCharacter*)DeathCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APVPAISubsystem* APVPAISubsystem::GetPPVPAISubsystem(struct UObject* ObjectContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVPAISubsystem", "GetPPVPAISubsystem");
    struct
    {
        struct UObject* ObjectContext;
        struct APVPAISubsystem* ReturnValue;
    } Parms{};
    Parms.ObjectContext = (struct UObject*)ObjectContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPvpAIPeekInfo APVPAISubsystem::GetPeekInfoBehindWall(struct AActor* Target, struct FVector NavPoint, struct FVector WallLeft, struct FVector WallRight, struct ADFMAIController* AIController, uint8_t bDrawDebug, float CrouchZOffset, float StandZOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVPAISubsystem", "GetPeekInfoBehindWall");
    struct
    {
        struct AActor* Target;
        struct FVector NavPoint;
        struct FVector WallLeft;
        struct FVector WallRight;
        struct ADFMAIController* AIController;
        uint8_t bDrawDebug;
        float CrouchZOffset;
        float StandZOffset;
        struct FPvpAIPeekInfo ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.NavPoint = (struct FVector)NavPoint;
    Parms.WallLeft = (struct FVector)WallLeft;
    Parms.WallRight = (struct FVector)WallRight;
    Parms.AIController = (struct ADFMAIController*)AIController;
    Parms.bDrawDebug = (uint8_t)bDrawDebug;
    Parms.CrouchZOffset = (float)CrouchZOffset;
    Parms.StandZOffset = (float)StandZOffset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APVPAISubsystem::GetCapturePointScore(struct ADFMAIPlayerController* Controller, struct ABattleFieldCapturePoint* CP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "GetCapturePointScore");
    struct
    {
        struct ADFMAIPlayerController* Controller;
        struct ABattleFieldCapturePoint* CP;
        float ReturnValue;
    } Parms{};
    Parms.Controller = (struct ADFMAIPlayerController*)Controller;
    Parms.CP = (struct ABattleFieldCapturePoint*)CP;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APVPAISubsystem::GetBotNumJobFlankRoutePoint(struct ABattleRoutePoint* FlankPoint, int32_t& AttackNum, int32_t& DefendNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "GetBotNumJobFlankRoutePoint");
    struct
    {
        struct ABattleRoutePoint* FlankPoint;
        int32_t AttackNum;
        int32_t DefendNum;
    } Parms{};
    Parms.FlankPoint = (struct ABattleRoutePoint*)FlankPoint;
    this->ProcessEvent(Func, &Parms);
    AttackNum = Parms.AttackNum;
    DefendNum = Parms.DefendNum;
}

struct UPVPAIJobs* APVPAISubsystem::CreateJob(EPVPAIJobType Type, struct ADFMAIPlayerController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "CreateJob");
    struct
    {
        enum EPVPAIJobType Type;
        struct ADFMAIPlayerController* Controller;
        struct UPVPAIJobs* ReturnValue;
    } Parms{};
    Parms.Type = (enum EPVPAIJobType)Type;
    Parms.Controller = (struct ADFMAIPlayerController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EPoseType> APVPAISubsystem::CanPeekTargetFromLocation(struct AActor* Target, struct FVector NavPoint, struct ADFMAIController* AIController, float CrouchZOffset, float StandZOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PVPAISubsystem", "CanPeekTargetFromLocation");
    struct
    {
        struct AActor* Target;
        struct FVector NavPoint;
        struct ADFMAIController* AIController;
        float CrouchZOffset;
        float StandZOffset;
        struct TArray<EPoseType> ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.NavPoint = (struct FVector)NavPoint;
    Parms.AIController = (struct ADFMAIController*)AIController;
    Parms.CrouchZOffset = (float)CrouchZOffset;
    Parms.StandZOffset = (float)StandZOffset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APVPAISubsystem::CalcRescueCampmateEnvSecurity(struct AGPCharacter* Helper, struct AGPCharacter* DeathCharacter, float DistSec, float YawSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "CalcRescueCampmateEnvSecurity");
    struct
    {
        struct AGPCharacter* Helper;
        struct AGPCharacter* DeathCharacter;
        float DistSec;
        float YawSec;
        float ReturnValue;
    } Parms{};
    Parms.Helper = (struct AGPCharacter*)Helper;
    Parms.DeathCharacter = (struct AGPCharacter*)DeathCharacter;
    Parms.DistSec = (float)DistSec;
    Parms.YawSec = (float)YawSec;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APVPAISubsystem::BPCalcFlankRoutePointWeightScale(struct ABattleRoutePoint* FlankPoint, struct ADFMAIPlayerController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PVPAISubsystem", "BPCalcFlankRoutePointWeightScale");
    struct
    {
        struct ABattleRoutePoint* FlankPoint;
        struct ADFMAIPlayerController* Controller;
        float ReturnValue;
    } Parms{};
    Parms.FlankPoint = (struct ABattleRoutePoint*)FlankPoint;
    Parms.Controller = (struct ADFMAIPlayerController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AVCRBuilder::* ----
void AVCRBuilder::GenerateViewCell()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VCRBuilder", "GenerateViewCell");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AVCRManager::* ----
void AVCRManager::ReadBinary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VCRManager", "ReadBinary");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
