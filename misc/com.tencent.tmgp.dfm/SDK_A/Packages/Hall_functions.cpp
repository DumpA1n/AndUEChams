#include "Hall.hpp"
#include "CinematicCamera.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMLightCoordinate.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameplay.hpp"
#include "GPWeaponRuntime.hpp"
#include "InputCore.hpp"
#include "LevelSequence.hpp"
#include "SpinePlugin.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AHallDisplayCtrlBase::* ----
void AHallDisplayCtrlBase::OnDisplayCtrlUnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlBase", "OnDisplayCtrlUnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallDisplayCtrlBase::OnDisplayCtrlInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlBase", "OnDisplayCtrlInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallDisplayCtrlBase::HandleScaleByGamepad(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlBase", "HandleScaleByGamepad");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void AHallDisplayCtrlBase::HandleRotationByGamepad(struct FVector2D RotationVertor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlBase", "HandleRotationByGamepad");
    struct
    {
        struct FVector2D RotationVertor;
    } Parms{};
    Parms.RotationVertor = (struct FVector2D)RotationVertor;
    this->ProcessEvent(Func, &Parms);
}

void AHallDisplayCtrlBase::HandleItemRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlBase", "HandleItemRotation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallLobbyDisplayCtrl::* ----
void AHallLobbyDisplayCtrl::UnequipByEquipmentType(const int32_t& InSlotId, EEquipmentType EquipmentType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "UnequipByEquipmentType");
    struct
    {
        int32_t InSlotId;
        enum EEquipmentType EquipmentType;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.EquipmentType = (enum EEquipmentType)EquipmentType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::Unequip(const int32_t& InSlotId, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "Unequip");
    struct
    {
        int32_t InSlotId;
        struct FName ItemID;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SwitchCurrentLightGroupVolumn(struct FName LightGroupName, uint8_t bSwitchToLarger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SwitchCurrentLightGroupVolumn");
    struct
    {
        struct FName LightGroupName;
        uint8_t bSwitchToLarger;
    } Parms{};
    Parms.LightGroupName = (struct FName)LightGroupName;
    Parms.bSwitchToLarger = (uint8_t)bSwitchToLarger;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::StopSceneVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "StopSceneVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::ShowSceneTexture(const struct FSoftObjectPath& ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "ShowSceneTexture");
    struct
    {
        struct FSoftObjectPath ImagePath;
    } Parms{};
    Parms.ImagePath = (struct FSoftObjectPath)ImagePath;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SetSceneTexture(struct FName TextureName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SetSceneTexture");
    struct
    {
        struct FName TextureName;
    } Parms{};
    Parms.TextureName = (struct FName)TextureName;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SetCharacterLookAtCamera(const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SetCharacterLookAtCamera");
    struct
    {
        int32_t InSlotId;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SetCharacterEquipWeapon(struct UModularWeaponDesc* WeaponDesc, int32_t InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SetCharacterEquipWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        int32_t InSlotId;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SetCharacterAvatar(struct FString InAvatarId, int32_t InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SetCharacterAvatar");
    struct
    {
        struct FString InAvatarId;
        int32_t InSlotId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::SetAutoDownloadModuleCategory(int32_t InSlotId, uint8_t bAutoDownload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "SetAutoDownloadModuleCategory");
    struct
    {
        int32_t InSlotId;
        uint8_t bAutoDownload;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.bAutoDownload = (uint8_t)bAutoDownload;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::ResetSceneTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "ResetSceneTexture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::RemoveCharacterAvatar(const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "RemoveCharacterAvatar");
    struct
    {
        int32_t InSlotId;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::RefreshCharacterPosBySlot(const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "RefreshCharacterPosBySlot");
    struct
    {
        int32_t InSlotId;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::PlaySceneVideo(struct FName VedioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "PlaySceneVideo");
    struct
    {
        struct FName VedioName;
    } Parms{};
    Parms.VedioName = (struct FName)VedioName;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::PlayHeroVoice(struct FString InAvatarId, struct FString InMarkedLabel, int32_t InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "PlayHeroVoice");
    struct
    {
        struct FString InAvatarId;
        struct FString InMarkedLabel;
        int32_t InSlot;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InMarkedLabel = (struct FString)InMarkedLabel;
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::PlayHallLobbySeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "PlayHallLobbySeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::OnMovieSceneSequencePlayerEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "OnMovieSceneSequencePlayerEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::OnHallLobbySeqFinished__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "OnHallLobbySeqFinished__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UHallCharacterVoiceComponent* AHallLobbyDisplayCtrl::GetHallCharacterVoiceComponentBySlot(const int32_t& InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "GetHallCharacterVoiceComponentBySlot");
    struct
    {
        int32_t InSlot;
        struct UHallCharacterVoiceComponent* ReturnValue;
    } Parms{};
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AHallLobbyDisplayCtrl::GetCharacterLocationBySlot(const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "GetCharacterLocationBySlot");
    struct
    {
        int32_t InSlotId;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* AHallLobbyDisplayCtrl::GetCharacterBySlotId(const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "GetCharacterBySlotId");
    struct
    {
        int32_t InSlotId;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallLobbyDisplayCtrl::Equip(const int32_t& InSlotId, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "Equip");
    struct
    {
        int32_t InSlotId;
        struct FName ItemID;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::DestoryCharcter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "DestoryCharcter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLobbyDisplayCtrl::CloseHallLobbySeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLobbyDisplayCtrl", "CloseHallLobbySeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallArenaLobbyDisplayCtrl::* ----
void AHallArenaLobbyDisplayCtrl::SetScoreNum2(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArenaLobbyDisplayCtrl", "SetScoreNum2");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void AHallArenaLobbyDisplayCtrl::SetScoreNum1(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArenaLobbyDisplayCtrl", "SetScoreNum1");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallArmoryDisplayCtrl::* ----
void AHallArmoryDisplayCtrl::SetWheelInteract(uint8_t InCanInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetWheelInteract");
    struct
    {
        uint8_t InCanInteract;
    } Parms{};
    Parms.InCanInteract = (uint8_t)InCanInteract;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetUseBowWeapon(uint8_t isUseBowWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetUseBowWeapon");
    struct
    {
        uint8_t isUseBowWeapon;
    } Parms{};
    Parms.isUseBowWeapon = (uint8_t)isUseBowWeapon;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetScaleMinAndMax(float Min, float Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetScaleMinAndMax");
    struct
    {
        float Min;
        float Max;
    } Parms{};
    Parms.Min = (float)Min;
    Parms.Max = (float)Max;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetReboundActive(uint8_t bReboundActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetReboundActive");
    struct
    {
        uint8_t bReboundActive;
    } Parms{};
    Parms.bReboundActive = (uint8_t)bReboundActive;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetIsAdapter(uint8_t IsAdapter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetIsAdapter");
    struct
    {
        uint8_t IsAdapter;
    } Parms{};
    Parms.IsAdapter = (uint8_t)IsAdapter;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetEnableTrans(uint8_t bEnableTrans)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetEnableTrans");
    struct
    {
        uint8_t bEnableTrans;
    } Parms{};
    Parms.bEnableTrans = (uint8_t)bEnableTrans;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetDisplayWeaponAutoBoundAdapter(struct UModularWeaponDesc* WeaponDesc, uint64_t WeaponID, uint8_t bSwitchCameraEnabled, uint8_t IsMeleeWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetDisplayWeaponAutoBoundAdapter");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint64_t WeaponID;
        uint8_t bSwitchCameraEnabled;
        uint8_t IsMeleeWeapon;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.bSwitchCameraEnabled = (uint8_t)bSwitchCameraEnabled;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint64_t WeaponID, uint8_t IsMeleeWeapon, uint8_t bSwitchCameraEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetDisplayWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint64_t WeaponID;
        uint8_t IsMeleeWeapon;
        uint8_t bSwitchCameraEnabled;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    Parms.bSwitchCameraEnabled = (uint8_t)bSwitchCameraEnabled;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetDisplayItem(struct FString InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString InItemID;
    } Parms{};
    Parms.InItemID = (struct FString)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::SetCanInteractState(uint8_t InCanInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "SetCanInteractState");
    struct
    {
        uint8_t InCanInteract;
    } Parms{};
    Parms.InCanInteract = (uint8_t)InCanInteract;
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::ResetWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "ResetWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallArmoryDisplayCtrl::OnDisplayWeaponSet(uint8_t bIsMelee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "OnDisplayWeaponSet");
    struct
    {
        uint8_t bIsMelee;
    } Parms{};
    Parms.bIsMelee = (uint8_t)bIsMelee;
    this->ProcessEvent(Func, &Parms);
}

struct AActor* AHallArmoryDisplayCtrl::GetWeaponActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "GetWeaponActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate AHallArmoryDisplayCtrl::GetOnTouchPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "GetOnTouchPressed");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallArmoryDisplayCtrl::GetDisplayTargetActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "GetDisplayTargetActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallArmoryDisplayCtrl::DestroyItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallArmoryDisplayCtrl", "DestroyItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallBattlePassDisplayCtrl::* ----
void AHallBattlePassDisplayCtrl::StopVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "StopVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon, int64_t UINameID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsMeleeWeapon;
        int64_t UINameID;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    Parms.UINameID = (int64_t)UINameID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayTypeByParam(struct FString DisplayType, uint8_t bImmediately, struct FTransform Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayTypeByParam");
    struct
    {
        struct FString DisplayType;
        uint8_t bImmediately;
        struct FTransform Transform;
    } Parms{};
    Parms.DisplayType = (struct FString)DisplayType;
    Parms.bImmediately = (uint8_t)bImmediately;
    Parms.Transform = (struct FTransform)Transform;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayType(struct FString DisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString DisplayType;
    } Parms{};
    Parms.DisplayType = (struct FString)DisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayItemPendant(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayItemPendant");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayItemMedicinel(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayItemMedicinel");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayItemHeroProp(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayItemHeroProp");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayItemHelmet(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayItemHelmet");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayHeroWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon, int64_t UINameID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayHeroWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsMeleeWeapon;
        int64_t UINameID;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    Parms.UINameID = (int64_t)UINameID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayChestHanging(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayChestHanging");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayBreastPlate(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayBreastPlate");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetDisplayBag(uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetDisplayBag");
    struct
    {
        uint64_t InItemID;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::SetActorHiddenInGameByTag(struct FString sTag, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "SetActorHiddenInGameByTag");
    struct
    {
        struct FString sTag;
        uint8_t bVisible;
    } Parms{};
    Parms.sTag = (struct FString)sTag;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::ResetDisplayWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "ResetDisplayWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::ResetDisplayHeroWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "ResetDisplayHeroWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::PlayVideo(struct FString InMediaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "PlayVideo");
    struct
    {
        struct FString InMediaID;
    } Parms{};
    Parms.InMediaID = (struct FString)InMediaID;
    this->ProcessEvent(Func, &Parms);
}

struct FString AHallBattlePassDisplayCtrl::GetDisplayType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "GetDisplayType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallBattlePassDisplayCtrl::DestroyItemMedicine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "DestroyItemMedicine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::DestroyItemHeroProp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "DestroyItemHeroProp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallBattlePassDisplayCtrl::DestroyItemHelmet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallBattlePassDisplayCtrl", "DestroyItemHelmet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallCameraCtrlComponentBase::* ----
void UHallCameraCtrlComponentBase::SetCustonViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCameraCtrlComponentBase", "SetCustonViewTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ACameraActor* UHallCameraCtrlComponentBase::GetCustomViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCameraCtrlComponentBase", "GetCustomViewTarget");
    struct
    {
        struct ACameraActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACineCameraActor* UHallCameraCtrlComponentBase::GetCustomCineCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCameraCtrlComponentBase", "GetCustomCineCamera");
    struct
    {
        struct ACineCameraActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallCharacter::* ----
void AHallCharacter::UnequipWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "UnequipWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetUseSimpleFaceAnim(uint8_t bUseSimpleFaceAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetUseSimpleFaceAnim");
    struct
    {
        uint8_t bUseSimpleFaceAnim;
    } Parms{};
    Parms.bUseSimpleFaceAnim = (uint8_t)bUseSimpleFaceAnim;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetUseResolveObject(uint8_t InIsUseResolveObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetUseResolveObject");
    struct
    {
        uint8_t InIsUseResolveObject;
    } Parms{};
    Parms.InIsUseResolveObject = (uint8_t)InIsUseResolveObject;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetSuitAvatarWithSequence(struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetSuitAvatarWithSequence");
    struct
    {
        struct FName ItemID;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetSettlementTeamCharacterPosId(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetSettlementTeamCharacterPosId");
    struct
    {
        int32_t PosId;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetSettlementCharacterPosId(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetSettlementCharacterPosId");
    struct
    {
        int32_t PosId;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetRotation(const struct FRotator& TargetRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetRotation");
    struct
    {
        struct FRotator TargetRot;
    } Parms{};
    Parms.TargetRot = (struct FRotator)TargetRot;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetPrisonerState(uint8_t bInIsPrisoner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetPrisonerState");
    struct
    {
        uint8_t bInIsPrisoner;
    } Parms{};
    Parms.bInIsPrisoner = (uint8_t)bInIsPrisoner;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetNotUseFaceAnim(uint8_t bNotUseFaceAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetNotUseFaceAnim");
    struct
    {
        uint8_t bNotUseFaceAnim;
    } Parms{};
    Parms.bNotUseFaceAnim = (uint8_t)bNotUseFaceAnim;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetMainFlowHallPosId(int32_t PosId, uint8_t PlayShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetMainFlowHallPosId");
    struct
    {
        int32_t PosId;
        uint8_t PlayShow;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    Parms.PlayShow = (uint8_t)PlayShow;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetLookAtWeight(float Weight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetLookAtWeight");
    struct
    {
        float Weight;
    } Parms{};
    Parms.Weight = (float)Weight;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetLookAtTarget(struct FVector Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetLookAtTarget");
    struct
    {
        struct FVector Target;
    } Parms{};
    Parms.Target = (struct FVector)Target;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetLookAtState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetLookAtState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetLookAtSpeedStrength(float Strength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetLookAtSpeedStrength");
    struct
    {
        float Strength;
    } Parms{};
    Parms.Strength = (float)Strength;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetLocation(const struct FVector& TargetLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetLocation");
    struct
    {
        struct FVector TargetLoc;
    } Parms{};
    Parms.TargetLoc = (struct FVector)TargetLoc;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetExtraSkillItemHiddenInGame(uint8_t IsHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetExtraSkillItemHiddenInGame");
    struct
    {
        uint8_t IsHidden;
    } Parms{};
    Parms.IsHidden = (uint8_t)IsHidden;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetExtraPartMeshForceLOD(int32_t InForceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetExtraPartMeshForceLOD");
    struct
    {
        int32_t InForceID;
    } Parms{};
    Parms.InForceID = (int32_t)InForceID;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetExtraPartMeshCastShadow(uint8_t bCastShadow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetExtraPartMeshCastShadow");
    struct
    {
        uint8_t bCastShadow;
    } Parms{};
    Parms.bCastShadow = (uint8_t)bCastShadow;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetEquipWeaponShowState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetEquipWeaponShowState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetEquipTakeAwayShowState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetEquipTakeAwayShowState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetCharacterAnimStateMechine(struct FString StateMechine)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetCharacterAnimStateMechine");
    struct
    {
        struct FString StateMechine;
    } Parms{};
    Parms.StateMechine = (struct FString)StateMechine;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetCharacterAnimState(struct FString State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetCharacterAnimState");
    struct
    {
        struct FString State;
    } Parms{};
    Parms.State = (struct FString)State;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetCharacterAnimationState(struct FString TargetStateTypeName, struct FString AnimMachineStateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetCharacterAnimationState");
    struct
    {
        struct FString TargetStateTypeName;
        struct FString AnimMachineStateName;
    } Parms{};
    Parms.TargetStateTypeName = (struct FString)TargetStateTypeName;
    Parms.AnimMachineStateName = (struct FString)AnimMachineStateName;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetBodyShapeShiftTypeByFashionId(struct FName InFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetBodyShapeShiftTypeByFashionId");
    struct
    {
        struct FName InFashionId;
    } Parms{};
    Parms.InFashionId = (struct FName)InFashionId;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::SetAvatarByFString(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "SetAvatarByFString");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::ResetRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "ResetRotation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::ResetLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "ResetLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::ResetBodyShapeShiftType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "ResetBodyShapeShiftType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::ResetAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "ResetAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::RemoveAvatarExtraMeshes(uint8_t Immediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "RemoveAvatarExtraMeshes");
    struct
    {
        uint8_t Immediately;
    } Parms{};
    Parms.Immediately = (uint8_t)Immediately;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::RecalculateAppearancePriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "RecalculateAppearancePriority");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::OnHallCharacterAnimSetChangedEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "OnHallCharacterAnimSetChangedEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallCharacter::isFemale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "isFemale");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallCharacter::IsEquippedWithWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "IsEquippedWithWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t AHallCharacter::IsAvatarPakExist(struct FName InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "IsAvatarPakExist");
    struct
    {
        struct FName InAvatarId;
        int64_t ReturnValue;
    } Parms{};
    Parms.InAvatarId = (struct FName)InAvatarId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallCharacter::HaveSettlementAnim(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "HaveSettlementAnim");
    struct
    {
        int32_t PosId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallCharacter::HallCharacterShowAnimEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "HallCharacterShowAnimEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FRotator AHallCharacter::GetOriginalRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetOriginalRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AHallCharacter::GetOriginalLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetOriginalLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AHallCharacter::GetLookAtWeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetLookAtWeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AHallCharacter::GetLookAtTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetLookAtTarget");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AHallCharacter::GetLookAtSpeedStrength()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetLookAtSpeedStrength");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallCharacter::GetIsSetUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetIsSetUp");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallCharacter::GetIsHaveSetUpCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetIsHaveSetUpCallBack");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UModularWeaponDesc* AHallCharacter::GetEquippedWeaponDesc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetEquippedWeaponDesc");
    struct
    {
        struct UModularWeaponDesc* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString AHallCharacter::GetAvatarID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "GetAvatarID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallCharacter::EquipWeapon(struct UModularWeaponDesc* WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "EquipWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacter::DestroyCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "DestroyCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallCharacter::CheckAvatarResCompleteness(struct FName& InOutAvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacter", "CheckAvatarResCompleteness");
    struct
    {
        struct FName InOutAvatarID;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InOutAvatarID = Parms.InOutAvatarID;
    return Parms.ReturnValue;
}

// ---- AHallCharacterAnimPreviewer::* ----
void AHallCharacterAnimPreviewer::SpawnDisplayWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "SpawnDisplayWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::SpawnDisplayItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "SpawnDisplayItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::OpenWeaponSkinDatatable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "OpenWeaponSkinDatatable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::OpenPreviewTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "OpenPreviewTable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::OpenPreviewDoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "OpenPreviewDoc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::OnLoadWeaponCompleted(uint8_t Succeeded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "OnLoadWeaponCompleted");
    struct
    {
        uint8_t Succeeded;
    } Parms{};
    Parms.Succeeded = (uint8_t)Succeeded;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::DestroyTeamCharacters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "DestroyTeamCharacters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::DestroyHallCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "DestroyHallCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::DestroyDisplayWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "DestroyDisplayWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::CreateTeamCharacters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "CreateTeamCharacters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterAnimPreviewer::CreatePlayerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAnimPreviewer", "CreatePlayerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallCharacterAppearanceProxyComponent::* ----
void UHallCharacterAppearanceProxyComponent::CloseHeadAnim(uint8_t bClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterAppearanceProxyComponent", "CloseHeadAnim");
    struct
    {
        uint8_t bClose;
    } Parms{};
    Parms.bClose = (uint8_t)bClose;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallCharacterCameraActor::* ----
void AHallCharacterCameraActor::SetRollbackCamera(struct AHallCharacterCameraActor* InRollbackCamera)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "SetRollbackCamera");
    struct
    {
        struct AHallCharacterCameraActor* InRollbackCamera;
    } Parms{};
    Parms.InRollbackCamera = (struct AHallCharacterCameraActor*)InRollbackCamera;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::SetEasingType(EGPWeaponEasingType InEasingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "SetEasingType");
    struct
    {
        enum EGPWeaponEasingType InEasingType;
    } Parms{};
    Parms.InEasingType = (enum EGPWeaponEasingType)InEasingType;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::SetDuration(float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "SetDuration");
    struct
    {
        float InDuration;
    } Parms{};
    Parms.InDuration = (float)InDuration;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::ResetPreview()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "ResetPreview");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::RemoveCameraPathConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "RemoveCameraPathConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::RemoveCameraMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "RemoveCameraMovePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector AHallCharacterCameraActor::GetViewTargetLocation(struct ACameraActor* Camera, struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallCharacterCameraActor", "GetViewTargetLocation");
    struct
    {
        struct ACameraActor* Camera;
        struct AActor* TargetActor;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Camera = (struct ACameraActor*)Camera;
    Parms.TargetActor = (struct AActor*)TargetActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AHallCharacterCameraActor::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "GetDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform AHallCharacterCameraActor::GetCameraTransform(struct ACameraActor* CameraActor, float Alpha, uint8_t& bBlendRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "GetCameraTransform");
    struct
    {
        struct ACameraActor* CameraActor;
        float Alpha;
        uint8_t bBlendRotation;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.CameraActor = (struct ACameraActor*)CameraActor;
    Parms.Alpha = (float)Alpha;
    this->ProcessEvent(Func, &Parms);
    bBlendRotation = Parms.bBlendRotation;
    return Parms.ReturnValue;
}

void AHallCharacterCameraActor::EnableDebug(uint8_t bDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "EnableDebug");
    struct
    {
        uint8_t bDebug;
    } Parms{};
    Parms.bDebug = (uint8_t)bDebug;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::DoPreview(struct ACameraActor* SourceActor, const struct FVector& ViewSourceLocation, const struct FVector& InViewTargetLocation, float Speed, float LockMoveStartTargetAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "DoPreview");
    struct
    {
        struct ACameraActor* SourceActor;
        struct FVector ViewSourceLocation;
        struct FVector InViewTargetLocation;
        float Speed;
        float LockMoveStartTargetAlpha;
    } Parms{};
    Parms.SourceActor = (struct ACameraActor*)SourceActor;
    Parms.ViewSourceLocation = (struct FVector)ViewSourceLocation;
    Parms.InViewTargetLocation = (struct FVector)InViewTargetLocation;
    Parms.Speed = (float)Speed;
    Parms.LockMoveStartTargetAlpha = (float)LockMoveStartTargetAlpha;
    this->ProcessEvent(Func, &Parms);
}

void AHallCharacterCameraActor::CreateCameraMovePath(struct ACameraActor* SourceActor, const struct FVector& ViewSourceLocation, const struct FVector& ViewTargetLocation, float Speed, float LockMoveStartTargetAlpha, float radius, float ExpandScale, uint8_t bUseZAxis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCameraActor", "CreateCameraMovePath");
    struct
    {
        struct ACameraActor* SourceActor;
        struct FVector ViewSourceLocation;
        struct FVector ViewTargetLocation;
        float Speed;
        float LockMoveStartTargetAlpha;
        float radius;
        float ExpandScale;
        uint8_t bUseZAxis;
    } Parms{};
    Parms.SourceActor = (struct ACameraActor*)SourceActor;
    Parms.ViewSourceLocation = (struct FVector)ViewSourceLocation;
    Parms.ViewTargetLocation = (struct FVector)ViewTargetLocation;
    Parms.Speed = (float)Speed;
    Parms.LockMoveStartTargetAlpha = (float)LockMoveStartTargetAlpha;
    Parms.radius = (float)radius;
    Parms.ExpandScale = (float)ExpandScale;
    Parms.bUseZAxis = (uint8_t)bUseZAxis;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallCharacterCtrlComponentBase::* ----
struct AHallCharacter* UHallCharacterCtrlComponentBase::SpawnPlayerCharacterWithSlot(int32_t InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCtrlComponentBase", "SpawnPlayerCharacterWithSlot");
    struct
    {
        int32_t InSlot;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UHallCharacterCtrlComponentBase::GetPlayerCharacterPositionBySlot(int32_t InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCtrlComponentBase", "GetPlayerCharacterPositionBySlot");
    struct
    {
        int32_t InSlot;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* UHallCharacterCtrlComponentBase::GetPlayerCharacterBySlot(int32_t InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCtrlComponentBase", "GetPlayerCharacterBySlot");
    struct
    {
        int32_t InSlot;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* UHallCharacterCtrlComponentBase::GetPlayerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCtrlComponentBase", "GetPlayerCharacter");
    struct
    {
        struct AHallCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallCharacterCtrlComponentBase::DestroyPlayerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCtrlComponentBase", "DestroyPlayerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterCtrlComponentBase::DestroyCharacterBySlot(const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterCtrlComponentBase", "DestroyCharacterBySlot");
    struct
    {
        int32_t InSlotId;
    } Parms{};
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallDisplayLevelSequenceComponentBase::* ----
void UHallDisplayLevelSequenceComponentBase::OnMovieSequenceEventStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayLevelSequenceComponentBase", "OnMovieSequenceEventStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallDisplayLevelSequenceComponentBase::OnMovieSequenceEventPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayLevelSequenceComponentBase", "OnMovieSequenceEventPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallDisplayLevelSequenceComponentBase::OnMovieSequenceEventPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayLevelSequenceComponentBase", "OnMovieSequenceEventPause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallDisplayLevelSequenceComponentBase::OnMovieSequenceEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayLevelSequenceComponentBase", "OnMovieSequenceEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallDisplayLevelSequenceComponentBase::OnCameraCutTriggered(struct UCameraComponent* CameraComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayLevelSequenceComponentBase", "OnCameraCutTriggered");
    struct
    {
        struct UCameraComponent* CameraComponent;
    } Parms{};
    Parms.CameraComponent = (struct UCameraComponent*)CameraComponent;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallCharacterLevelSeqComponentBase::* ----
void UHallCharacterLevelSeqComponentBase::StopMotionBlur()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "StopMotionBlur");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::SetSkillItemMesh(struct ULevelSequencePlayer* SequencePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "SetSkillItemMesh");
    struct
    {
        struct ULevelSequencePlayer* SequencePlayer;
    } Parms{};
    Parms.SequencePlayer = (struct ULevelSequencePlayer*)SequencePlayer;
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::SetSkillItemAppearance(struct ULevelSequencePlayer* SequencePlayer, const struct FName& InHeroItemFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "SetSkillItemAppearance");
    struct
    {
        struct ULevelSequencePlayer* SequencePlayer;
        struct FName InHeroItemFashionId;
    } Parms{};
    Parms.SequencePlayer = (struct ULevelSequencePlayer*)SequencePlayer;
    Parms.InHeroItemFashionId = (struct FName)InHeroItemFashionId;
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::SetShouldPlayInEndRange(uint8_t bShouldPlayInEndRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "SetShouldPlayInEndRange");
    struct
    {
        uint8_t bShouldPlayInEndRange;
    } Parms{};
    Parms.bShouldPlayInEndRange = (uint8_t)bShouldPlayInEndRange;
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::SetHeroItemFashionId(const struct FName& InHeroItemFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "SetHeroItemFashionId");
    struct
    {
        struct FName InHeroItemFashionId;
    } Parms{};
    Parms.InHeroItemFashionId = (struct FName)InHeroItemFashionId;
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::SetCameraFadeIfCurDisableRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "SetCameraFadeIfCurDisableRender");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::PlaySequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "PlaySequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::OnSeqLoadedComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "OnSeqLoadedComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::OnHeroItemMatLoadTaskComplete(int32_t NewHandleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "OnHeroItemMatLoadTaskComplete");
    struct
    {
        int32_t NewHandleId;
    } Parms{};
    Parms.NewHandleId = (int32_t)NewHandleId;
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::OnHallCharacterMeshLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "OnHallCharacterMeshLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallCharacterLevelSeqComponentBase::CheckAndPlayMotionBlur()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterLevelSeqComponentBase", "CheckAndPlayMotionBlur");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallCharacterSpawnConfig::* ----
uint8_t AHallCharacterSpawnConfig::IsEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterSpawnConfig", "IsEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallCharacterSpawnConfig::GetSpawnPoint(int32_t Idx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterSpawnConfig", "GetSpawnPoint");
    struct
    {
        int32_t Idx;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString AHallCharacterSpawnConfig::GetCharacterID(int32_t Idx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterSpawnConfig", "GetCharacterID");
    struct
    {
        int32_t Idx;
        struct FString ReturnValue;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHallCharacterVoiceComponent::* ----
void UHallCharacterVoiceComponent::On2DVoiceStopped(EGPEventCallbackType EventCallback, int32_t PlayId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCharacterVoiceComponent", "On2DVoiceStopped");
    struct
    {
        enum EGPEventCallbackType EventCallback;
        int32_t PlayId;
    } Parms{};
    Parms.EventCallback = (enum EGPEventCallbackType)EventCallback;
    Parms.PlayId = (int32_t)PlayId;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallCommonDisplayCtrl::* ----
void AHallCommonDisplayCtrl::SetRotateSensitivity(const float& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetRotateSensitivity");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetDisplayWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsMeleeWeapon;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::SetDisplayVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetDisplayVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::SetDisplayItem(struct FString ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString ItemID;
    } Parms{};
    Parms.ItemID = (struct FString)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::SetCharacterWatch(struct FName InWatchItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetCharacterWatch");
    struct
    {
        struct FName InWatchItemId;
    } Parms{};
    Parms.InWatchItemId = (struct FName)InWatchItemId;
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::SetCharacterAvatar(struct FString AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "SetCharacterAvatar");
    struct
    {
        struct FString AvatarID;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::ResetDisplayWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "ResetDisplayWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::ResetDisplayVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "ResetDisplayVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::ResetDisplayItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "ResetDisplayItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCommonDisplayCtrl::ResetCharacterRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "ResetCharacterRotation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UTextureRenderTarget2D* AHallCommonDisplayCtrl::InitSceneCapture2DTexture(uint32_t InSizeX, uint32_t InSizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "InitSceneCapture2DTexture");
    struct
    {
        uint32_t InSizeX;
        uint32_t InSizeY;
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    Parms.InSizeX = (uint32_t)InSizeX;
    Parms.InSizeY = (uint32_t)InSizeY;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallCommonDisplayCtrl::GetDisplayWeaponActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "GetDisplayWeaponActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallCommonDisplayCtrl::GetDisplayVehicleActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCommonDisplayCtrl", "GetDisplayVehicleActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallCollectionDisplayCtrl::* ----
void AHallCollectionDisplayCtrl::StopCurrentSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionDisplayCtrl", "StopCurrentSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionDisplayCtrl::PlayLevelSeqInScene(struct FString SeqName, struct FString NextSeqName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionDisplayCtrl", "PlayLevelSeqInScene");
    struct
    {
        struct FString SeqName;
        struct FString NextSeqName;
    } Parms{};
    Parms.SeqName = (struct FString)SeqName;
    Parms.NextSeqName = (struct FString)NextSeqName;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionDisplayCtrl::OnStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionDisplayCtrl", "OnStopped");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionDisplayCtrl::OnFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionDisplayCtrl", "OnFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallCollectionLibraryDisplayCtrl::* ----
void AHallCollectionLibraryDisplayCtrl::SetWheelInteract(uint8_t InCanInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "SetWheelInteract");
    struct
    {
        uint8_t InCanInteract;
    } Parms{};
    Parms.InCanInteract = (uint8_t)InCanInteract;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionLibraryDisplayCtrl::SetScaleMinAndMax(float Min, float Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "SetScaleMinAndMax");
    struct
    {
        float Min;
        float Max;
    } Parms{};
    Parms.Min = (float)Min;
    Parms.Max = (float)Max;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionLibraryDisplayCtrl::SetReboundActive(uint8_t bReboundActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "SetReboundActive");
    struct
    {
        uint8_t bReboundActive;
    } Parms{};
    Parms.bReboundActive = (uint8_t)bReboundActive;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionLibraryDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionLibraryDisplayCtrl::SetDisplayItem(struct FString InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString InItemID;
    } Parms{};
    Parms.InItemID = (struct FString)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionLibraryDisplayCtrl::SetCanInteractState(uint8_t InCanInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "SetCanInteractState");
    struct
    {
        uint8_t InCanInteract;
    } Parms{};
    Parms.InCanInteract = (uint8_t)InCanInteract;
    this->ProcessEvent(Func, &Parms);
}

struct FMulticastInlineDelegate AHallCollectionLibraryDisplayCtrl::GetOnTouchPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "GetOnTouchPressed");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallCollectionLibraryDisplayCtrl::GetItemActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "GetItemActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallCollectionLibraryDisplayCtrl::GetDisplayTargetActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "GetDisplayTargetActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallCollectionLibraryDisplayCtrl::DestroyItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionLibraryDisplayCtrl", "DestroyItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallCollectionRoomDisplayCtrl::* ----
void AHallCollectionRoomDisplayCtrl::WriteToDisplayCabinetTexture(int32_t GridID, struct TArray<float> Values)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "WriteToDisplayCabinetTexture");
    struct
    {
        int32_t GridID;
        struct TArray<float> Values;
    } Parms{};
    Parms.GridID = (int32_t)GridID;
    Parms.Values = (struct TArray<float>)Values;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::WriteToDisplayCabinetBracketTexture(int32_t GridID, struct TArray<float> Values)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "WriteToDisplayCabinetBracketTexture");
    struct
    {
        int32_t GridID;
        struct TArray<float> Values;
    } Parms{};
    Parms.GridID = (int32_t)GridID;
    Parms.Values = (struct TArray<float>)Values;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::UnLockTextureBulkData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "UnLockTextureBulkData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::UnLockBracketTextureBulkData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "UnLockBracketTextureBulkData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::SetDisplayType(struct FString InDisplayType, uint8_t bEnableRepeat, uint8_t bImmediatelyFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
        uint8_t bEnableRepeat;
        uint8_t bImmediatelyFlag;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    Parms.bEnableRepeat = (uint8_t)bEnableRepeat;
    Parms.bImmediatelyFlag = (uint8_t)bImmediatelyFlag;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::SetDisplayCabinetTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "SetDisplayCabinetTexture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::SetDisplayCabinetScalarParam(struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "SetDisplayCabinetScalarParam");
    struct
    {
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::SetBgPlaneTexture(struct FString InTexturePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "SetBgPlaneTexture");
    struct
    {
        struct FString InTexturePath;
    } Parms{};
    Parms.InTexturePath = (struct FString)InTexturePath;
    this->ProcessEvent(Func, &Parms);
}

void AHallCollectionRoomDisplayCtrl::ResetDisplayType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "ResetDisplayType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int64_t AHallCollectionRoomDisplayCtrl::LockTextureBulkData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "LockTextureBulkData");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t AHallCollectionRoomDisplayCtrl::LockBracketTextureBulkData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "LockBracketTextureBulkData");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterial* AHallCollectionRoomDisplayCtrl::GetPickupVirtualMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "GetPickupVirtualMaterial");
    struct
    {
        struct UMaterial* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName AHallCollectionRoomDisplayCtrl::GetDisplayType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "GetDisplayType");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACameraActor* AHallCollectionRoomDisplayCtrl::GetCameraActorByDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "GetCameraActorByDisplayType");
    struct
    {
        struct FString InDisplayType;
        struct ACameraActor* ReturnValue;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallCollectionRoomDisplayCtrl::GetActorByKey(struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallCollectionRoomDisplayCtrl", "GetActorByKey");
    struct
    {
        struct FName Key;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Key = (struct FName)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallDisplayCameraActor::* ----
void AHallDisplayCameraActor::SetEasingType(EGPWeaponEasingType InEasingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCameraActor", "SetEasingType");
    struct
    {
        enum EGPWeaponEasingType InEasingType;
    } Parms{};
    Parms.InEasingType = (enum EGPWeaponEasingType)InEasingType;
    this->ProcessEvent(Func, &Parms);
}

void AHallDisplayCameraActor::SetDuration(float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCameraActor", "SetDuration");
    struct
    {
        float InDuration;
    } Parms{};
    Parms.InDuration = (float)InDuration;
    this->ProcessEvent(Func, &Parms);
}

float AHallDisplayCameraActor::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCameraActor", "GetDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform AHallDisplayCameraActor::GetCameraTransform(float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCameraActor", "GetCameraTransform");
    struct
    {
        float Alpha;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Alpha = (float)Alpha;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IHallDisplayCtrlInterface::* ----
void IHallDisplayCtrlInterface::RefreshCharacterLookAtTarget(struct FVector Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlInterface", "RefreshCharacterLookAtTarget");
    struct
    {
        struct FVector Target;
    } Parms{};
    Parms.Target = (struct FVector)Target;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallDisplayCtrlManager::* ----
struct TArray<struct FString> UHallDisplayCtrlManager::GetMiniWorldSubLevels(struct FName MiniWorldType, uint8_t bOpenLevelExistCheck, struct TArray<struct FString>& NoExistSubLevelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetMiniWorldSubLevels");
    struct
    {
        struct FName MiniWorldType;
        uint8_t bOpenLevelExistCheck;
        struct TArray<struct FString> NoExistSubLevelNames;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.MiniWorldType = (struct FName)MiniWorldType;
    Parms.bOpenLevelExistCheck = (uint8_t)bOpenLevelExistCheck;
    this->ProcessEvent(Func, &Parms);
    NoExistSubLevelNames = Parms.NoExistSubLevelNames;
    return Parms.ReturnValue;
}

struct FName UHallDisplayCtrlManager::GetLobbyScreenVedio(struct FName MiniWorldType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetLobbyScreenVedio");
    struct
    {
        struct FName MiniWorldType;
        struct FName ReturnValue;
    } Parms{};
    Parms.MiniWorldType = (struct FName)MiniWorldType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UHallDisplayCtrlManager::GetLobbyMiniWorldSubLevels(struct FName MiniWorldType, uint8_t bOpenLevelExistCheck, struct TArray<struct FString>& NoExistSubLevelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetLobbyMiniWorldSubLevels");
    struct
    {
        struct FName MiniWorldType;
        uint8_t bOpenLevelExistCheck;
        struct TArray<struct FString> NoExistSubLevelNames;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.MiniWorldType = (struct FName)MiniWorldType;
    Parms.bOpenLevelExistCheck = (uint8_t)bOpenLevelExistCheck;
    this->ProcessEvent(Func, &Parms);
    NoExistSubLevelNames = Parms.NoExistSubLevelNames;
    return Parms.ReturnValue;
}

struct FName UHallDisplayCtrlManager::GetLobbyDisplayType(struct FName MiniWorldType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetLobbyDisplayType");
    struct
    {
        struct FName MiniWorldType;
        struct FName ReturnValue;
    } Parms{};
    Parms.MiniWorldType = (struct FName)MiniWorldType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHallDisplayCtrlManager::GetLevelPriority(struct FName MiniWorldType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetLevelPriority");
    struct
    {
        struct FName MiniWorldType;
        int32_t ReturnValue;
    } Parms{};
    Parms.MiniWorldType = (struct FName)MiniWorldType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallDisplayCtrlManager::GetLevelIsPermanent(struct FName MiniWorldType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetLevelIsPermanent");
    struct
    {
        struct FName MiniWorldType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MiniWorldType = (struct FName)MiniWorldType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallDisplayCtrlBase* UHallDisplayCtrlManager::GetHallDisplayCtrl(struct FName DisplayCtrlType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallDisplayCtrlManager", "GetHallDisplayCtrl");
    struct
    {
        struct FName DisplayCtrlType;
        struct AHallDisplayCtrlBase* ReturnValue;
    } Parms{};
    Parms.DisplayCtrlType = (struct FName)DisplayCtrlType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHallDisplayCtrlManager* UHallDisplayCtrlManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallDisplayCtrlManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UHallDisplayCtrlManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallExpertDisplayCtrl::* ----
void AHallExpertDisplayCtrl::ToggleInteracted(uint8_t CanInteracted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "ToggleInteracted");
    struct
    {
        uint8_t CanInteracted;
    } Parms{};
    Parms.CanInteracted = (uint8_t)CanInteracted;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::StopPlaySequenceVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "StopPlaySequenceVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::SetSceneEffectColorOverLife(const struct FName& InKeyName, const struct FName& InParamName, struct FLinearColor InColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "SetSceneEffectColorOverLife");
    struct
    {
        struct FName InKeyName;
        struct FName InParamName;
        struct FLinearColor InColor;
    } Parms{};
    Parms.InKeyName = (struct FName)InKeyName;
    Parms.InParamName = (struct FName)InParamName;
    Parms.InColor = (struct FLinearColor)InColor;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::SetCurrentCharacterSeqEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "SetCurrentCharacterSeqEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::SetCharacterSuitAvatarWithSequence(struct FString AvatarID, struct FString MarkedFrameName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "SetCharacterSuitAvatarWithSequence");
    struct
    {
        struct FString AvatarID;
        struct FString MarkedFrameName;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    Parms.MarkedFrameName = (struct FString)MarkedFrameName;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::SetBackgroundAndFloorMatDynIns()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "SetBackgroundAndFloorMatDynIns");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::SetBackgroundAndFloor(const struct FName& InBackgroundMatParamName, const struct FName& InFloorMatParamName, struct FString InBackgroundPath, struct FString InFloorPath, const float& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "SetBackgroundAndFloor");
    struct
    {
        struct FName InBackgroundMatParamName;
        struct FName InFloorMatParamName;
        struct FString InBackgroundPath;
        struct FString InFloorPath;
        float Index;
    } Parms{};
    Parms.InBackgroundMatParamName = (struct FName)InBackgroundMatParamName;
    Parms.InFloorMatParamName = (struct FName)InFloorMatParamName;
    Parms.InBackgroundPath = (struct FString)InBackgroundPath;
    Parms.InFloorPath = (struct FString)InFloorPath;
    Parms.Index = (float)Index;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::ResetCharacterSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "ResetCharacterSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::PlaySequenceVoiceInTrack(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "PlaySequenceVoiceInTrack");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::PlaySequenceVoice(struct FString InAvatarId, struct FString InMarkedLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "PlaySequenceVoice");
    struct
    {
        struct FString InAvatarId;
        struct FString InMarkedLabel;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InMarkedLabel = (struct FString)InMarkedLabel;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::OnHeroAppearanceShow(uint8_t bInVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "OnHeroAppearanceShow");
    struct
    {
        uint8_t bInVisible;
    } Parms{};
    Parms.bInVisible = (uint8_t)bInVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::DeactivateSmokeEffects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "DeactivateSmokeEffects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallExpertDisplayCtrl::ActivateSmokeEffects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplayCtrl", "ActivateSmokeEffects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallExpertDisplaySequenceComponent::* ----
void UHallExpertDisplaySequenceComponent::StopTransition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallExpertDisplaySequenceComponent", "StopTransition");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallFunctionStatics::* ----
void UHallFunctionStatics::Stop2DHeroAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallFunctionStatics", "Stop2DHeroAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHallFunctionStatics::Play2DHeroAudio(struct UObject* WorldContext, struct FString HeroIdStr, struct FString InVoiceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallFunctionStatics", "Play2DHeroAudio");
    struct
    {
        struct UObject* WorldContext;
        struct FString HeroIdStr;
        struct FString InVoiceId;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.HeroIdStr = (struct FString)HeroIdStr;
    Parms.InVoiceId = (struct FString)InVoiceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UHallGeneralLevelSequenceCtrlComponent::* ----
void UHallGeneralLevelSequenceCtrlComponent::SetLoopCount(int32_t LoopCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "SetLoopCount");
    struct
    {
        int32_t LoopCount;
    } Parms{};
    Parms.LoopCount = (int32_t)LoopCount;
    this->ProcessEvent(Func, &Parms);
}

void UHallGeneralLevelSequenceCtrlComponent::SeqGoToEndAndStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "SeqGoToEndAndStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallGeneralLevelSequenceCtrlComponent::ResetGeneralLevelSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "ResetGeneralLevelSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallGeneralLevelSequenceCtrlComponent::PlayVehicleSequence(struct FName iSkinID, struct FName iVehicleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "PlayVehicleSequence");
    struct
    {
        struct FName iSkinID;
        struct FName iVehicleID;
    } Parms{};
    Parms.iSkinID = (struct FName)iSkinID;
    Parms.iVehicleID = (struct FName)iVehicleID;
    this->ProcessEvent(Func, &Parms);
}

void UHallGeneralLevelSequenceCtrlComponent::PlaySequenceByRowName(struct FName InRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "PlaySequenceByRowName");
    struct
    {
        struct FName InRowName;
    } Parms{};
    Parms.InRowName = (struct FName)InRowName;
    this->ProcessEvent(Func, &Parms);
}

void UHallGeneralLevelSequenceCtrlComponent::PlaySequence(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "PlaySequence");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UHallGeneralLevelSequenceCtrlComponent::OnSequenceFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallGeneralLevelSequenceCtrlComponent", "OnSequenceFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallHangingDisplayCtrl::* ----
void AHallHangingDisplayCtrl::SetItemCalBound(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHangingDisplayCtrl", "SetItemCalBound");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void AHallHangingDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHangingDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallHangingDisplayCtrl::SetDisplayItem(struct FString ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHangingDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString ItemID;
    } Parms{};
    Parms.ItemID = (struct FString)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallHangingDisplayCtrl::ResetDisplayItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHangingDisplayCtrl", "ResetDisplayItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallHeroActionShowComponent::* ----
void UHallHeroActionShowComponent::SetSkillItemMesh(struct ULevelSequencePlayer* SequencePlayer, const struct FName& InHeroItemFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHeroActionShowComponent", "SetSkillItemMesh");
    struct
    {
        struct ULevelSequencePlayer* SequencePlayer;
        struct FName InHeroItemFashionId;
    } Parms{};
    Parms.SequencePlayer = (struct ULevelSequencePlayer*)SequencePlayer;
    Parms.InHeroItemFashionId = (struct FName)InHeroItemFashionId;
    this->ProcessEvent(Func, &Parms);
}

void UHallHeroActionShowComponent::SetSkillItemAppearance(struct ULevelSequencePlayer* SequencePlayer, const struct FName& InHeroItemFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHeroActionShowComponent", "SetSkillItemAppearance");
    struct
    {
        struct ULevelSequencePlayer* SequencePlayer;
        struct FName InHeroItemFashionId;
    } Parms{};
    Parms.SequencePlayer = (struct ULevelSequencePlayer*)SequencePlayer;
    Parms.InHeroItemFashionId = (struct FName)InHeroItemFashionId;
    this->ProcessEvent(Func, &Parms);
}

void UHallHeroActionShowComponent::OnHeroItemMatLoadTaskComplete(int32_t NewHandleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHeroActionShowComponent", "OnHeroItemMatLoadTaskComplete");
    struct
    {
        int32_t NewHandleId;
    } Parms{};
    Parms.NewHandleId = (int32_t)NewHandleId;
    this->ProcessEvent(Func, &Parms);
}

void UHallHeroActionShowComponent::OnHallCharacterLoadedDone(struct AHallCharacter* InHallCharacter, struct FString ActionId, uint8_t IsUsedSeq)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHeroActionShowComponent", "OnHallCharacterLoadedDone");
    struct
    {
        struct AHallCharacter* InHallCharacter;
        struct FString ActionId;
        uint8_t IsUsedSeq;
    } Parms{};
    Parms.InHallCharacter = (struct AHallCharacter*)InHallCharacter;
    Parms.ActionId = (struct FString)ActionId;
    Parms.IsUsedSeq = (uint8_t)IsUsedSeq;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallHighLevelDisplayComponent::* ----
void UHallHighLevelDisplayComponent::UnloadBPLevelOptimize(struct FString InAvatarId, struct FString InNewAvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "UnloadBPLevelOptimize");
    struct
    {
        struct FString InAvatarId;
        struct FString InNewAvatarID;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InNewAvatarID = (struct FString)InNewAvatarID;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::UnloadBPLevel(struct FString InAvatarId, struct FString InNewAvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "UnloadBPLevel");
    struct
    {
        struct FString InAvatarId;
        struct FString InNewAvatarID;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InNewAvatarID = (struct FString)InNewAvatarID;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SwitchLight(struct FString InMiniWorldName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SwitchLight");
    struct
    {
        struct FString InMiniWorldName;
    } Parms{};
    Parms.InMiniWorldName = (struct FString)InMiniWorldName;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SwitchHeightFog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SwitchHeightFog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetStopProcess(uint8_t bStop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetStopProcess");
    struct
    {
        uint8_t bStop;
    } Parms{};
    Parms.bStop = (uint8_t)bStop;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetLightAndFog(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetLightAndFog");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetEnableRecordLoadedLevelNames(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetEnableRecordLoadedLevelNames");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetDefaultSceneKey(struct FString InDefaultSceneKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetDefaultSceneKey");
    struct
    {
        struct FString InDefaultSceneKey;
    } Parms{};
    Parms.InDefaultSceneKey = (struct FString)InDefaultSceneKey;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetDefaultLevelVisibility(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetDefaultLevelVisibility");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetBPLevelDisplayOptimize(struct FString InAvatarId, uint8_t isOperator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetBPLevelDisplayOptimize");
    struct
    {
        struct FString InAvatarId;
        uint8_t isOperator;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.isOperator = (uint8_t)isOperator;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetBPLevelDisplayAsyncOptimize2(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetBPLevelDisplayAsyncOptimize2");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetBPLevelDisplayAsyncOptimize(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetBPLevelDisplayAsyncOptimize");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetBPLevelDisplayAsync(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetBPLevelDisplayAsync");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::SetBPLevelDisplay(struct FString InAvatarId, uint8_t isOperator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "SetBPLevelDisplay");
    struct
    {
        struct FString InAvatarId;
        uint8_t isOperator;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.isOperator = (uint8_t)isOperator;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::ResetId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "ResetId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::ResetDefaultSceneKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "ResetDefaultSceneKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnUnloadLatentActionCompletedWithAsync(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnUnloadLatentActionCompletedWithAsync");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnUnloadLatentActionCompletedOptimize(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnUnloadLatentActionCompletedOptimize");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnUnloadLatentActionCompleted(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnUnloadLatentActionCompleted");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnLatentActionCompletedWithAsyncOptimize2(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnLatentActionCompletedWithAsyncOptimize2");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnLatentActionCompletedWithAsyncOptimize(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnLatentActionCompletedWithAsyncOptimize");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnLatentActionCompletedWithAsync(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnLatentActionCompletedWithAsync");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnLatentActionCompletedOptimize(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnLatentActionCompletedOptimize");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnLatentActionCompleted(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnLatentActionCompleted");
    struct
    {
        int32_t Linkage;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::OnAnyLevelShown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "OnAnyLevelShown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHallHighLevelDisplayComponent::IsUnUsingDefaultSceneKey(struct FString& InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "IsUnUsingDefaultSceneKey");
    struct
    {
        struct FString InAvatarId;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InAvatarId = Parms.InAvatarId;
    return Parms.ReturnValue;
}

void UHallHighLevelDisplayComponent::Init(const struct FName& InDisplayTypeStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "Init");
    struct
    {
        struct FName InDisplayTypeStr;
    } Parms{};
    Parms.InDisplayTypeStr = (struct FName)InDisplayTypeStr;
    this->ProcessEvent(Func, &Parms);
}

struct FString UHallHighLevelDisplayComponent::GetDefaultSceneKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "GetDefaultSceneKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallHighLevelDisplayComponent::EnableExtraLightGroup(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "EnableExtraLightGroup");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::DeactivateLight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "DeactivateLight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallHighLevelDisplayComponent::DeactivateHeightFog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallHighLevelDisplayComponent", "DeactivateHeightFog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallLevelSequenceComponent::* ----
void UHallLevelSequenceComponent::OnMovieSceneSequencePlayerEventStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceComponent", "OnMovieSceneSequencePlayerEventStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceComponent::OnMovieSceneSequencePlayerEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceComponent", "OnMovieSceneSequencePlayerEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallLevelSequenceManager::* ----
void UHallLevelSequenceManager::UnBindOnSeqStopped(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "UnBindOnSeqStopped");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceManager::UnBindOnLevelAndSeqLoadedCompleted(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "UnBindOnLevelAndSeqLoadedCompleted");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceManager::SetSeqLoaded(uint8_t IsLoaded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "SetSeqLoaded");
    struct
    {
        uint8_t IsLoaded;
    } Parms{};
    Parms.IsLoaded = (uint8_t)IsLoaded;
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceManager::SetMotionBlurAmount(float InAmount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "SetMotionBlurAmount");
    struct
    {
        float InAmount;
    } Parms{};
    Parms.InAmount = (float)InAmount;
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceManager::SetLevelLoaded(uint8_t IsLoaded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "SetLevelLoaded");
    struct
    {
        uint8_t IsLoaded;
    } Parms{};
    Parms.IsLoaded = (uint8_t)IsLoaded;
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceManager::RestoreMotionBlurAmount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "RestoreMotionBlurAmount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHallLevelSequenceManager::GetSeqIsLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "GetSeqIsLoaded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UHallLevelSequenceManager::GetOnSeqStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "GetOnSeqStopped");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UHallLevelSequenceManager::GetOnLevelAndSeqLoadedCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "GetOnLevelAndSeqLoadedCompleted");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelSequenceManager::GetLevelIsLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "GetLevelIsLoaded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHallLevelSequenceManager* UHallLevelSequenceManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallLevelSequenceManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UHallLevelSequenceManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallLevelSequenceManager::ExecuteOnSeqStopped(uint8_t bStopped)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "ExecuteOnSeqStopped");
    struct
    {
        uint8_t bStopped;
    } Parms{};
    Parms.bStopped = (uint8_t)bStopped;
    this->ProcessEvent(Func, &Parms);
}

void UHallLevelSequenceManager::ExecuteOnLevelAndSeqLoadedCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelSequenceManager", "ExecuteOnLevelAndSeqLoadedCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallLevelStreamingManager::* ----
uint8_t UHallLevelStreamingManager::UnloadHallSubLevels(struct UObject* WorldContextObject, const struct TArray<struct FName>& InLevelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "UnloadHallSubLevels");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FName> InLevelNames;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLevelNames = (struct TArray<struct FName>)InLevelNames;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::UnloadHallSubLevelOptimize(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "UnloadHallSubLevelOptimize");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName InLevelName;
        struct FLatentActionInfo LatentActionInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLevelName = (struct FName)InLevelName;
    Parms.LatentActionInfo = (struct FLatentActionInfo)LatentActionInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::UnloadHallSubLevel(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo, uint8_t bMarkVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "UnloadHallSubLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName InLevelName;
        struct FLatentActionInfo LatentActionInfo;
        uint8_t bMarkVisible;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLevelName = (struct FName)InLevelName;
    Parms.LatentActionInfo = (struct FLatentActionInfo)LatentActionInfo;
    Parms.bMarkVisible = (uint8_t)bMarkVisible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallLevelStreamingManager::SetSyncLoadLevel(uint8_t bSync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallLevelStreamingManager", "SetSyncLoadLevel");
    struct
    {
        uint8_t bSync;
    } Parms{};
    Parms.bSync = (uint8_t)bSync;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHallLevelStreamingManager::SetSubLevelVisibility(struct UWorld* World, const struct FName& InLevelName, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "SetSubLevelVisibility");
    struct
    {
        struct UWorld* World;
        struct FName InLevelName;
        uint8_t bVisible;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InLevelName = (struct FName)InLevelName;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHallLevelStreamingManager::ReadWorldTile(struct FString InPackageFileName, struct FVector& Position, struct FVector& AbsPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallLevelStreamingManager", "ReadWorldTile");
    struct
    {
        struct FString InPackageFileName;
        struct FVector Position;
        struct FVector AbsPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPackageFileName = (struct FString)InPackageFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Position = Parms.Position;
    AbsPosition = Parms.AbsPosition;
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::LoadHallSubLevels(struct UObject* WorldContextObject, const struct TArray<struct FName>& InLevelNames, const struct TArray<struct FLatentActionInfo>& LatentActionInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "LoadHallSubLevels");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FName> InLevelNames;
        struct TArray<struct FLatentActionInfo> LatentActionInfos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLevelNames = (struct TArray<struct FName>)InLevelNames;
    Parms.LatentActionInfos = (struct TArray<struct FLatentActionInfo>)LatentActionInfos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::LoadHallSubLevelOptimize(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo, uint8_t bVisibleAfterLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "LoadHallSubLevelOptimize");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName InLevelName;
        struct FLatentActionInfo LatentActionInfo;
        uint8_t bVisibleAfterLoad;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLevelName = (struct FName)InLevelName;
    Parms.LatentActionInfo = (struct FLatentActionInfo)LatentActionInfo;
    Parms.bVisibleAfterLoad = (uint8_t)bVisibleAfterLoad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::LoadHallSubLevel(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo, uint8_t bMarkVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "LoadHallSubLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName InLevelName;
        struct FLatentActionInfo LatentActionInfo;
        uint8_t bMarkVisible;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLevelName = (struct FName)InLevelName;
    Parms.LatentActionInfo = (struct FLatentActionInfo)LatentActionInfo;
    Parms.bMarkVisible = (uint8_t)bMarkVisible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::IsSubLevelVisible(struct UWorld* World, const struct FName& InLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "IsSubLevelVisible");
    struct
    {
        struct UWorld* World;
        struct FName InLevelName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InLevelName = (struct FName)InLevelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallLevelStreamingManager::IsSubLevelLoaded(struct UWorld* World, const struct FName& InLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "IsSubLevelLoaded");
    struct
    {
        struct UWorld* World;
        struct FName InLevelName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InLevelName = (struct FName)InLevelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULevelStreaming* UHallLevelStreamingManager::GetLevelStreamingSubLevel(struct UWorld* World, const struct FName& InLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLevelStreamingManager", "GetLevelStreamingSubLevel");
    struct
    {
        struct UWorld* World;
        struct FName InLevelName;
        struct ULevelStreaming* ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InLevelName = (struct FName)InLevelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHallLevelStreamingManager* UHallLevelStreamingManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallLevelStreamingManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UHallLevelStreamingManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHallLightGroupComponent::* ----
void UHallLightGroupComponent::ResetLightBP(const struct FName& InDefaultLightName, uint8_t bEnableDefaultLight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLightGroupComponent", "ResetLightBP");
    struct
    {
        struct FName InDefaultLightName;
        uint8_t bEnableDefaultLight;
    } Parms{};
    Parms.InDefaultLightName = (struct FName)InDefaultLightName;
    Parms.bEnableDefaultLight = (uint8_t)bEnableDefaultLight;
    this->ProcessEvent(Func, &Parms);
}

void UHallLightGroupComponent::OnLightBPLoadedComplete(const struct FSoftObjectPath& InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLightGroupComponent", "OnLightBPLoadedComplete");
    struct
    {
        struct FSoftObjectPath InPath;
    } Parms{};
    Parms.InPath = (struct FSoftObjectPath)InPath;
    this->ProcessEvent(Func, &Parms);
}

void UHallLightGroupComponent::LoadAndSetLightBP(const struct FSoftClassPath& InClassPath, struct AActor* InSpawnPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLightGroupComponent", "LoadAndSetLightBP");
    struct
    {
        struct FSoftClassPath InClassPath;
        struct AActor* InSpawnPoint;
    } Parms{};
    Parms.InClassPath = (struct FSoftClassPath)InClassPath;
    Parms.InSpawnPoint = (struct AActor*)InSpawnPoint;
    this->ProcessEvent(Func, &Parms);
}

struct ADFMLightGroup* UHallLightGroupComponent::GetCurLightBpActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLightGroupComponent", "GetCurLightBpActor");
    struct
    {
        struct ADFMLightGroup* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallLightGroupComponent::ActivateDefaultLightGroup(const struct FName& InDefaultLightName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLightGroupComponent", "ActivateDefaultLightGroup");
    struct
    {
        struct FName InDefaultLightName;
    } Parms{};
    Parms.InDefaultLightName = (struct FName)InDefaultLightName;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallLotteryDisplayCtrl::* ----
void AHallLotteryDisplayCtrl::SetSpotLightVisibilityByTag(struct FString Tag, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "SetSpotLightVisibilityByTag");
    struct
    {
        struct FString Tag;
        uint8_t bVisible;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::SetMatCollectionParam(struct FString InAssetPath, struct FString InParamName, const struct FLinearColor& VectorColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "SetMatCollectionParam");
    struct
    {
        struct FString InAssetPath;
        struct FString InParamName;
        struct FLinearColor VectorColor;
    } Parms{};
    Parms.InAssetPath = (struct FString)InAssetPath;
    Parms.InParamName = (struct FString)InParamName;
    Parms.VectorColor = (struct FLinearColor)VectorColor;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::SetHallDisplaySequenceMY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "SetHallDisplaySequenceMY");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::SetHallDisplaySequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "SetHallDisplaySequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::SetCurveLinearColorByItemQuality(int32_t ItemQuality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "SetCurveLinearColorByItemQuality");
    struct
    {
        int32_t ItemQuality;
    } Parms{};
    Parms.ItemQuality = (int32_t)ItemQuality;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::OnHallDisplaySequenceFinish(uint8_t bSequenceFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "OnHallDisplaySequenceFinish");
    struct
    {
        uint8_t bSequenceFinish;
    } Parms{};
    Parms.bSequenceFinish = (uint8_t)bSequenceFinish;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::OnGrayWeaponModelLoadCompleted(uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "OnGrayWeaponModelLoadCompleted");
    struct
    {
        uint64_t SkinId;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* AHallLotteryDisplayCtrl::GetUIWidgetByTag(struct FString sTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "GetUIWidgetByTag");
    struct
    {
        struct FString sTag;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.sTag = (struct FString)sTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallLotteryDisplayCtrl::ForceProcessToFinishState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "ForceProcessToFinishState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::EnterHallLotteryLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "EnterHallLotteryLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_StartButtonClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_StartButtonClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetWeaponVisibleByTag(struct FString sTag, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetWeaponVisibleByTag");
    struct
    {
        struct FString sTag;
        uint8_t bVisible;
    } Parms{};
    Parms.sTag = (struct FString)sTag;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetType(int32_t iType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetType");
    struct
    {
        int32_t iType;
    } Parms{};
    Parms.iType = (int32_t)iType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetShowGuideTips(uint8_t bNewShowGuideTips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetShowGuideTips");
    struct
    {
        uint8_t bNewShowGuideTips;
    } Parms{};
    Parms.bNewShowGuideTips = (uint8_t)bNewShowGuideTips;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetRatity(int32_t iRatity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetRatity");
    struct
    {
        int32_t iRatity;
    } Parms{};
    Parms.iRatity = (int32_t)iRatity;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetDragSpeed(float fDragSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetDragSpeed");
    struct
    {
        float fDragSpeed;
    } Parms{};
    Parms.fDragSpeed = (float)fDragSpeed;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetAutoStartSpeed(float fAutoStartSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetAutoStartSpeed");
    struct
    {
        float fAutoStartSpeed;
    } Parms{};
    Parms.fAutoStartSpeed = (float)fAutoStartSpeed;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_SetAutoSpeed(float fDragSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_SetAutoSpeed");
    struct
    {
        float fDragSpeed;
    } Parms{};
    Parms.fDragSpeed = (float)fDragSpeed;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_RefreshWeaponLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_RefreshWeaponLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_PlayMYLevelSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_PlayMYLevelSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryDisplayCtrl::BP_CreateWeaponOrange(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryDisplayCtrl", "BP_CreateWeaponOrange");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsMeleeWeapon;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallLotteryTenDisplayCtrl::* ----
void AHallLotteryTenDisplayCtrl::SetSpotLightVisibilityByTag(struct FString Tag, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetSpotLightVisibilityByTag");
    struct
    {
        struct FString Tag;
        uint8_t bVisible;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetMatCollectionParam(struct FString InAssetPath, struct FString InParamName, const struct FLinearColor& VectorColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetMatCollectionParam");
    struct
    {
        struct FString InAssetPath;
        struct FString InParamName;
        struct FLinearColor VectorColor;
    } Parms{};
    Parms.InAssetPath = (struct FString)InAssetPath;
    Parms.InParamName = (struct FString)InParamName;
    Parms.VectorColor = (struct FLinearColor)VectorColor;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetMandelBrickThreshold(int32_t MandelBrickIndex, float Threshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetMandelBrickThreshold");
    struct
    {
        int32_t MandelBrickIndex;
        float Threshold;
    } Parms{};
    Parms.MandelBrickIndex = (int32_t)MandelBrickIndex;
    Parms.Threshold = (float)Threshold;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetMandelBrickColor(int32_t MandelBrickIndex, struct FLinearColor LinearColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetMandelBrickColor");
    struct
    {
        int32_t MandelBrickIndex;
        struct FLinearColor LinearColor;
    } Parms{};
    Parms.MandelBrickIndex = (int32_t)MandelBrickIndex;
    Parms.LinearColor = (struct FLinearColor)LinearColor;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetHallDisplaySequenceMY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetHallDisplaySequenceMY");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetHallDisplaySequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetHallDisplaySequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::SetCurveLinearColorByItemQuality(int32_t MandelBrickIndex, int32_t ItemQuality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "SetCurveLinearColorByItemQuality");
    struct
    {
        int32_t MandelBrickIndex;
        int32_t ItemQuality;
    } Parms{};
    Parms.MandelBrickIndex = (int32_t)MandelBrickIndex;
    Parms.ItemQuality = (int32_t)ItemQuality;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::OnTouchReleased(ETouchIndex TouchIndex, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnTouchReleased");
    struct
    {
        enum ETouchIndex TouchIndex;
        struct FVector Value;
    } Parms{};
    Parms.TouchIndex = (enum ETouchIndex)TouchIndex;
    Parms.Value = (struct FVector)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::OnTouchPressed(ETouchIndex TouchIndex, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnTouchPressed");
    struct
    {
        enum ETouchIndex TouchIndex;
        struct FVector Value;
    } Parms{};
    Parms.TouchIndex = (enum ETouchIndex)TouchIndex;
    Parms.Value = (struct FVector)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::OnOuterCollisionExit(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnOuterCollisionExit");
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

void AHallLotteryTenDisplayCtrl::OnOuterCollisionEnter(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnOuterCollisionEnter");
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

void AHallLotteryTenDisplayCtrl::OnInnerCollisionExit(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnInnerCollisionExit");
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

void AHallLotteryTenDisplayCtrl::OnInnerCollisionEnter(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnInnerCollisionEnter");
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

void AHallLotteryTenDisplayCtrl::OnHallDisplaySequenceFinish(uint8_t bSequenceFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnHallDisplaySequenceFinish");
    struct
    {
        uint8_t bSequenceFinish;
    } Parms{};
    Parms.bSequenceFinish = (uint8_t)bSequenceFinish;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::OnGrayWeaponModelLoadCompleted(uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "OnGrayWeaponModelLoadCompleted");
    struct
    {
        uint64_t SkinId;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* AHallLotteryTenDisplayCtrl::GetUIWidgetByTag(struct FString sTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "GetUIWidgetByTag");
    struct
    {
        struct FString sTag;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.sTag = (struct FString)sTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallLotteryTenDisplayCtrl::ForceProcessToFinishState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "ForceProcessToFinishState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::FinishFunction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "FinishFunction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t AHallLotteryTenDisplayCtrl::ExtractMandelIndexFromTag(struct AActor* MandelActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "ExtractMandelIndexFromTag");
    struct
    {
        struct AActor* MandelActor;
        int32_t ReturnValue;
    } Parms{};
    Parms.MandelActor = (struct AActor*)MandelActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallLotteryTenDisplayCtrl::EnterHallLotteryLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "EnterHallLotteryLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_SetWeaponVisibleByTag(struct FString sTag, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_SetWeaponVisibleByTag");
    struct
    {
        struct FString sTag;
        uint8_t bVisible;
    } Parms{};
    Parms.sTag = (struct FString)sTag;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_SetType(int32_t iType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_SetType");
    struct
    {
        int32_t iType;
    } Parms{};
    Parms.iType = (int32_t)iType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_SetShowGuideTips(uint8_t bNewShowGuideTips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_SetShowGuideTips");
    struct
    {
        uint8_t bNewShowGuideTips;
    } Parms{};
    Parms.bNewShowGuideTips = (uint8_t)bNewShowGuideTips;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_SetRatity(int32_t iRatity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_SetRatity");
    struct
    {
        int32_t iRatity;
    } Parms{};
    Parms.iRatity = (int32_t)iRatity;
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_RefreshWeaponLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_RefreshWeaponLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_PlayMYLevelSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_PlayMYLevelSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLotteryTenDisplayCtrl::BP_CreateWeaponOrange(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLotteryTenDisplayCtrl", "BP_CreateWeaponOrange");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsMeleeWeapon;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallLuckyNestDisplayCtrl::* ----
void AHallLuckyNestDisplayCtrl::StopFallingEggSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "StopFallingEggSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::StopDiggingNestSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "StopDiggingNestSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::ShowNest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "ShowNest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::SetRandomMesh(int32_t MeshIndex, int32_t Index, int8_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "SetRandomMesh");
    struct
    {
        int32_t MeshIndex;
        int32_t Index;
        int8_t Type;
    } Parms{};
    Parms.MeshIndex = (int32_t)MeshIndex;
    Parms.Index = (int32_t)Index;
    Parms.Type = (int8_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::SetCurrentSkeletonMeshState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "SetCurrentSkeletonMeshState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::PlayFallingEggSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "PlayFallingEggSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::PlayDiggingNestSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "PlayDiggingNestSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::OnFallingEggSequencePlayerEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "OnFallingEggSequencePlayerEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::OnDiggingNestSequencePlayerEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "OnDiggingNestSequencePlayerEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallLuckyNestDisplayCtrl::IsChooseNest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "IsChooseNest");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallLuckyNestDisplayCtrl::HideNest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "HideNest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t AHallLuckyNestDisplayCtrl::GetSelectedNestId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "GetSelectedNestId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AHallLuckyNestDisplayCtrl::GetSelectedEggId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "GetSelectedEggId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AHallLuckyNestDisplayCtrl::GetNestMeshCounts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "GetNestMeshCounts");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AHallLuckyNestDisplayCtrl::GetNestCounts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "GetNestCounts");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AHallLuckyNestDisplayCtrl::GetEggMeshCounts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "GetEggMeshCounts");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AHallLuckyNestDisplayCtrl::GetEggCounts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "GetEggCounts");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallLuckyNestDisplayCtrl::ClearSelectState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "ClearSelectState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallLuckyNestDisplayCtrl::ClearHoverState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallLuckyNestDisplayCtrl", "ClearHoverState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallMagicTowerCameraComponent::* ----
void UHallMagicTowerCameraComponent::SetSpringArmLength(float NewLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerCameraComponent", "SetSpringArmLength");
    struct
    {
        float NewLength;
    } Parms{};
    Parms.NewLength = (float)NewLength;
    this->ProcessEvent(Func, &Parms);
}

void UHallMagicTowerCameraComponent::SetOrthoWidth(float NewWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerCameraComponent", "SetOrthoWidth");
    struct
    {
        float NewWidth;
    } Parms{};
    Parms.NewWidth = (float)NewWidth;
    this->ProcessEvent(Func, &Parms);
}

struct USpringArmComponent* UHallMagicTowerCameraComponent::GetSpringArmComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerCameraComponent", "GetSpringArmComponent");
    struct
    {
        struct USpringArmComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCameraComponent* UHallMagicTowerCameraComponent::GetCameraComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerCameraComponent", "GetCameraComponent");
    struct
    {
        struct UCameraComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallMagicTowerDisplayCtrl::* ----
void AHallMagicTowerDisplayCtrl::UpdatePlayerAndCameraPosition(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "UpdatePlayerAndCameraPosition");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::UpdateCameraAdaptation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "UpdateCameraAdaptation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::SwitchTileMapByMapId(int32_t MapID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SwitchTileMapByMapId");
    struct
    {
        int32_t MapID;
    } Parms{};
    Parms.MapID = (int32_t)MapID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::StopMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "StopMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AActor* AHallMagicTowerDisplayCtrl::SpawnTexture2DActorBySourceId(const struct FVector2D& pos, int64_t InSourceId, float ScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SpawnTexture2DActorBySourceId");
    struct
    {
        struct FVector2D pos;
        int64_t InSourceId;
        float ScaleFactor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.InSourceId = (int64_t)InSourceId;
    Parms.ScaleFactor = (float)ScaleFactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallMagicTowerDisplayCtrl::SpawnTexture2DActor(const struct FVector2D& pos, struct UTexture2D* InTexture2D, float ScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SpawnTexture2DActor");
    struct
    {
        struct FVector2D pos;
        struct UTexture2D* InTexture2D;
        float ScaleFactor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.InTexture2D = (struct UTexture2D*)InTexture2D;
    Parms.ScaleFactor = (float)ScaleFactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallMagicTowerDisplayCtrl::SpawnSpineActorBySourceId(const struct FVector2D& pos, int64_t InSourceId, float ScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SpawnSpineActorBySourceId");
    struct
    {
        struct FVector2D pos;
        int64_t InSourceId;
        float ScaleFactor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.InSourceId = (int64_t)InSourceId;
    Parms.ScaleFactor = (float)ScaleFactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallMagicTowerDisplayCtrl::SpawnSpineActor(const struct FVector2D& pos, struct USpineAtlasAsset* InSpineAtlasAsset, struct USpineSkeletonDataAsset* InSpineSkeletonDataAsset, float ScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SpawnSpineActor");
    struct
    {
        struct FVector2D pos;
        struct USpineAtlasAsset* InSpineAtlasAsset;
        struct USpineSkeletonDataAsset* InSpineSkeletonDataAsset;
        float ScaleFactor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.InSpineAtlasAsset = (struct USpineAtlasAsset*)InSpineAtlasAsset;
    Parms.InSpineSkeletonDataAsset = (struct USpineSkeletonDataAsset*)InSpineSkeletonDataAsset;
    Parms.ScaleFactor = (float)ScaleFactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallMagicTowerDisplayCtrl::SpawnPlayerSpineActor(const struct FVector2D& pos, int64_t InSpineId, float ScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SpawnPlayerSpineActor");
    struct
    {
        struct FVector2D pos;
        int64_t InSpineId;
        float ScaleFactor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.InSpineId = (int64_t)InSpineId;
    Parms.ScaleFactor = (float)ScaleFactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallMagicTowerDisplayCtrl::ShowDebugGirdInfo(struct TArray<struct FVector2D> GirdInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "ShowDebugGirdInfo");
    struct
    {
        struct TArray<struct FVector2D> GirdInfo;
    } Parms{};
    Parms.GirdInfo = (struct TArray<struct FVector2D>)GirdInfo;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::ShowDebugAStarInfo(struct TArray<struct FVector2D> AStarInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "ShowDebugAStarInfo");
    struct
    {
        struct TArray<struct FVector2D> AStarInfo;
    } Parms{};
    Parms.AStarInfo = (struct TArray<struct FVector2D>)AStarInfo;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::SetTileMapGrayParam(int32_t grayParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SetTileMapGrayParam");
    struct
    {
        int32_t grayParam;
    } Parms{};
    Parms.grayParam = (int32_t)grayParam;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::SetPlayerLocOffset(struct FVector InPlayerLocOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SetPlayerLocOffset");
    struct
    {
        struct FVector InPlayerLocOffset;
    } Parms{};
    Parms.InPlayerLocOffset = (struct FVector)InPlayerLocOffset;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::SetPlayerActor(struct AActor* InPlayerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SetPlayerActor");
    struct
    {
        struct AActor* InPlayerActor;
    } Parms{};
    Parms.InPlayerActor = (struct AActor*)InPlayerActor;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::SetCustomViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "SetCustomViewTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::ProcessMoveUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "ProcessMoveUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::ProcessMoveRight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "ProcessMoveRight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::ProcessMoveLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "ProcessMoveLeft");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::ProcessMoveDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "ProcessMoveDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::OnMoveFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "OnMoveFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::MoveUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "MoveUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::MoveRight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "MoveRight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::MoveLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "MoveLeft");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::MoveDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "MoveDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::InitPlayerAndCameraSpawnPoint(int32_t InitX, int32_t InitY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "InitPlayerAndCameraSpawnPoint");
    struct
    {
        int32_t InitX;
        int32_t InitY;
    } Parms{};
    Parms.InitX = (int32_t)InitX;
    Parms.InitY = (int32_t)InitY;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::InitMapParams(int32_t MapSizeX, int32_t MapSizeY, float GridStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "InitMapParams");
    struct
    {
        int32_t MapSizeX;
        int32_t MapSizeY;
        float GridStep;
    } Parms{};
    Parms.MapSizeX = (int32_t)MapSizeX;
    Parms.MapSizeY = (int32_t)MapSizeY;
    Parms.GridStep = (float)GridStep;
    this->ProcessEvent(Func, &Parms);
}

void AHallMagicTowerDisplayCtrl::InitCameraViewLimit(int32_t LimitX, int32_t LimitY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMagicTowerDisplayCtrl", "InitCameraViewLimit");
    struct
    {
        int32_t LimitX;
        int32_t LimitY;
    } Parms{};
    Parms.LimitX = (int32_t)LimitX;
    Parms.LimitY = (int32_t)LimitY;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallMainCameraCtrlComponent::* ----
void UHallMainCameraCtrlComponent::SetReboundCameraActive(uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCameraCtrlComponent", "SetReboundCameraActive");
    struct
    {
        uint8_t bActive;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCameraCtrlComponent::ResetHallMainCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCameraCtrlComponent", "ResetHallMainCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCameraCtrlComponent::OnRotationByGamepad(float ValueX, float ValueY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCameraCtrlComponent", "OnRotationByGamepad");
    struct
    {
        float ValueX;
        float ValueY;
    } Parms{};
    Parms.ValueX = (float)ValueX;
    Parms.ValueY = (float)ValueY;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCameraCtrlComponent::OnLeftMouseButtonUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCameraCtrlComponent", "OnLeftMouseButtonUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCameraCtrlComponent::OnLeftMouseButtonDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCameraCtrlComponent", "OnLeftMouseButtonDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ACameraActor* UHallMainCameraCtrlComponent::GetCustomViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCameraCtrlComponent", "GetCustomViewTarget");
    struct
    {
        struct ACameraActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHallMainCharacterAnimInstance::* ----
void UHallMainCharacterAnimInstance::SetSettlementSceneTeamPos(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "SetSettlementSceneTeamPos");
    struct
    {
        int32_t PosId;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterAnimInstance::SetSettlementScenePos(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "SetSettlementScenePos");
    struct
    {
        int32_t PosId;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterAnimInstance::SetMainFlowHallPos(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "SetMainFlowHallPos");
    struct
    {
        int32_t PosId;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterAnimInstance::SetDisplayCharacterLookAtEnable(uint8_t bIsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "SetDisplayCharacterLookAtEnable");
    struct
    {
        uint8_t bIsEnable;
    } Parms{};
    Parms.bIsEnable = (uint8_t)bIsEnable;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterAnimInstance::SetCharIsEquipping(uint8_t bEquipping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "SetCharIsEquipping");
    struct
    {
        uint8_t bEquipping;
    } Parms{};
    Parms.bEquipping = (uint8_t)bEquipping;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHallMainCharacterAnimInstance::SetCharacterAnimationState(EHallCharacterAnimStateMechineType TargetStateType, struct FName AnimMachineStateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "SetCharacterAnimationState");
    struct
    {
        enum EHallCharacterAnimStateMechineType TargetStateType;
        struct FName AnimMachineStateName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetStateType = (enum EHallCharacterAnimStateMechineType)TargetStateType;
    Parms.AnimMachineStateName = (struct FName)AnimMachineStateName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallMainCharacterAnimInstance::HaveSettlementAnim(int32_t PosId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterAnimInstance", "HaveSettlementAnim");
    struct
    {
        int32_t PosId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PosId = (int32_t)PosId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHallMainCharacterCtrlComponent::* ----
void UHallMainCharacterCtrlComponent::SpawnTeamMateCharacter(int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SpawnTeamMateCharacter");
    struct
    {
        int32_t Slot;
    } Parms{};
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
}

struct AHallCharacter* UHallMainCharacterCtrlComponent::SpawnPlayerCharacterWithSlot(int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SpawnPlayerCharacterWithSlot");
    struct
    {
        int32_t Slot;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallMainCharacterCtrlComponent::SpawnPlayerCharacterFromTemplate(struct AHallCharacter* CharacterClassTemplate, struct AActor* SpawnPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SpawnPlayerCharacterFromTemplate");
    struct
    {
        struct AHallCharacter* CharacterClassTemplate;
        struct AActor* SpawnPoint;
    } Parms{};
    Parms.CharacterClassTemplate = (struct AHallCharacter*)CharacterClassTemplate;
    Parms.SpawnPoint = (struct AActor*)SpawnPoint;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterCtrlComponent::SpawnPlayerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SpawnPlayerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterCtrlComponent::SetPlayerCharacterToSlot(struct AHallCharacter* CHARACTER, int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SetPlayerCharacterToSlot");
    struct
    {
        struct AHallCharacter* CHARACTER;
        int32_t Slot;
    } Parms{};
    Parms.CHARACTER = (struct AHallCharacter*)CHARACTER;
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterCtrlComponent::SetMainCharacterLookatTargetEnable(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SetMainCharacterLookatTargetEnable");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterCtrlComponent::SetHallTeamDisplayStage(EHallTeamDisplayStage InTeamDisplayStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "SetHallTeamDisplayStage");
    struct
    {
        enum EHallTeamDisplayStage InTeamDisplayStage;
    } Parms{};
    Parms.InTeamDisplayStage = (enum EHallTeamDisplayStage)InTeamDisplayStage;
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UHallMainCharacterCtrlComponent::ProjectWorldToScreen(struct APlayerController* Player, const struct FVector& WorldPosition, uint8_t bPlayerViewportRelative)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallMainCharacterCtrlComponent", "ProjectWorldToScreen");
    struct
    {
        struct APlayerController* Player;
        struct FVector WorldPosition;
        uint8_t bPlayerViewportRelative;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Player = (struct APlayerController*)Player;
    Parms.WorldPosition = (struct FVector)WorldPosition;
    Parms.bPlayerViewportRelative = (uint8_t)bPlayerViewportRelative;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* UHallMainCharacterCtrlComponent::GetTeammateCharacter(int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "GetTeammateCharacter");
    struct
    {
        int32_t Slot;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UHallMainCharacterCtrlComponent::GetSlotCharacterLocation(uint8_t PlayerSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "GetSlotCharacterLocation");
    struct
    {
        uint8_t PlayerSlot;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PlayerSlot = (uint8_t)PlayerSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* UHallMainCharacterCtrlComponent::GetPlayerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "GetPlayerCharacter");
    struct
    {
        struct AHallCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UHallMainCharacterCtrlComponent::GetCharacterLocationInUILocalSpace(uint8_t Slot, struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "GetCharacterLocationInUILocalSpace");
    struct
    {
        uint8_t Slot;
        struct UWidget* Widget;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Slot = (uint8_t)Slot;
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AHallCharacter*> UHallMainCharacterCtrlComponent::GetAllGetTeammateCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "GetAllGetTeammateCharacter");
    struct
    {
        struct TArray<struct AHallCharacter*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallMainCharacterCtrlComponent::DestroyTeamMateCharacter(int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "DestroyTeamMateCharacter");
    struct
    {
        int32_t Slot;
    } Parms{};
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
}

void UHallMainCharacterCtrlComponent::DestroyPlayerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainCharacterCtrlComponent", "DestroyPlayerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallMainDisplayCtrl::* ----
void AHallMainDisplayCtrl::TryBindMemberHallIdleCameraSequence(struct FName BindingTag, struct AHallCharacter* BindingActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "TryBindMemberHallIdleCameraSequence");
    struct
    {
        struct FName BindingTag;
        struct AHallCharacter* BindingActor;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.BindingActor = (struct AHallCharacter*)BindingActor;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ToggleMainCtrlPureMode(uint8_t bPureMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ToggleMainCtrlPureMode");
    struct
    {
        uint8_t bPureMode;
    } Parms{};
    Parms.bPureMode = (uint8_t)bPureMode;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ToggleInputEnable(uint8_t bInEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ToggleInputEnable");
    struct
    {
        uint8_t bInEnable;
    } Parms{};
    Parms.bInEnable = (uint8_t)bInEnable;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ToggleFogEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ToggleFogEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ToggleEnable(uint8_t bInEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ToggleEnable");
    struct
    {
        uint8_t bInEnable;
    } Parms{};
    Parms.bInEnable = (uint8_t)bInEnable;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ToggleCustomScene(uint8_t SwitchFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ToggleCustomScene");
    struct
    {
        uint8_t SwitchFlag;
    } Parms{};
    Parms.SwitchFlag = (uint8_t)SwitchFlag;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::StopHallIdleCameraSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "StopHallIdleCameraSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::StopHallIdleAndStartHallCameraSequence(int32_t TeamCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "StopHallIdleAndStartHallCameraSequence");
    struct
    {
        int32_t TeamCount;
    } Parms{};
    Parms.TeamCount = (int32_t)TeamCount;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::StopHallCameraSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "StopHallCameraSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::StartHallIdleCameraSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "StartHallIdleCameraSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::StartHallCameraSequence(int32_t TeamCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "StartHallCameraSequence");
    struct
    {
        int32_t TeamCount;
    } Parms{};
    Parms.TeamCount = (int32_t)TeamCount;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetWeaponVisable(uint8_t visable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetWeaponVisable");
    struct
    {
        uint8_t visable;
    } Parms{};
    Parms.visable = (uint8_t)visable;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetUseDefaultCharacterClass(uint8_t bUseDefault)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetUseDefaultCharacterClass");
    struct
    {
        uint8_t bUseDefault;
    } Parms{};
    Parms.bUseDefault = (uint8_t)bUseDefault;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetUseBowWeapon(uint8_t isUseBowWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetUseBowWeapon");
    struct
    {
        uint8_t isUseBowWeapon;
    } Parms{};
    Parms.isUseBowWeapon = (uint8_t)isUseBowWeapon;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetHallBackgroundFromImage(struct UImage* Image)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetHallBackgroundFromImage");
    struct
    {
        struct UImage* Image;
    } Parms{};
    Parms.Image = (struct UImage*)Image;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetEnableCharacterMotion(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetEnableCharacterMotion");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetEnableChangeAvatar(uint8_t InEnableChange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetEnableChangeAvatar");
    struct
    {
        uint8_t InEnableChange;
    } Parms{};
    Parms.InEnableChange = (uint8_t)InEnableChange;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsBasePos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetDisplayWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsBasePos;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsBasePos = (uint8_t)IsBasePos;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetDisplayType(EHallMainDisplayType InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetDisplayType");
    struct
    {
        enum EHallMainDisplayType InDisplayType;
    } Parms{};
    Parms.InDisplayType = (enum EHallMainDisplayType)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetDisplayItem(struct FString ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString ItemID;
    } Parms{};
    Parms.ItemID = (struct FString)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetCharAnimIsEquipping(uint8_t bIsEquipping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetCharAnimIsEquipping");
    struct
    {
        uint8_t bIsEquipping;
    } Parms{};
    Parms.bIsEquipping = (uint8_t)bIsEquipping;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetCharacterWatch(struct FName InWatchItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetCharacterWatch");
    struct
    {
        struct FName InWatchItemId;
    } Parms{};
    Parms.InWatchItemId = (struct FName)InWatchItemId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetCharacterVisibility(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetCharacterVisibility");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetCharacterSuitAvatarWithSequence(struct FString AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetCharacterSuitAvatarWithSequence");
    struct
    {
        struct FString AvatarID;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetCharacterDisplayStage(EHallCharacterDisplayStage DisplayStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetCharacterDisplayStage");
    struct
    {
        enum EHallCharacterDisplayStage DisplayStage;
    } Parms{};
    Parms.DisplayStage = (enum EHallCharacterDisplayStage)DisplayStage;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetCharacterAvatar(struct FString AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetCharacterAvatar");
    struct
    {
        struct FString AvatarID;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetAvatarPostProcessVolumnFlag(uint8_t bFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetAvatarPostProcessVolumnFlag");
    struct
    {
        uint8_t bFlag;
    } Parms{};
    Parms.bFlag = (uint8_t)bFlag;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::SetAvatarPostProcessVolumnEnable(uint8_t bEnable, uint8_t bImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "SetAvatarPostProcessVolumnEnable");
    struct
    {
        uint8_t bEnable;
        uint8_t bImmediately;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bImmediately = (uint8_t)bImmediately;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ResetMainCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ResetMainCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ResetHallMainCameraDOFParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ResetHallMainCameraDOFParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ResetDisplayWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ResetDisplayWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::ResetDisplayItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "ResetDisplayItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::RefreshDisplayTargetActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "RefreshDisplayTargetActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::RefreshCharacterLookAtTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "RefreshCharacterLookAtTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::PlayMontage(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "PlayMontage");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::PlayerCharacterDisplayMotion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "PlayerCharacterDisplayMotion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::OnHallMainCharacterStartSetupEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "OnHallMainCharacterStartSetupEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::OnHallMainCharacterSetupEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "OnHallMainCharacterSetupEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainDisplayCtrl::OnDelayHallCameraSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "OnDelayHallCameraSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallMainDisplayCtrl::IsUseDefaultCharacterClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "IsUseDefaultCharacterClass");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallMainDisplayCtrl::IsEnableCharacterMotion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "IsEnableCharacterMotion");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallMainDisplayCtrl::IsEnableChangeAvatar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "IsEnableChangeAvatar");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallMainDisplayCtrl::IsEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "IsEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallMainDisplayCtrl::Internal_TryBindMemberHallIdleCameraSequence(struct FName BindingTag, struct AHallCharacter* BindingActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "Internal_TryBindMemberHallIdleCameraSequence");
    struct
    {
        struct FName BindingTag;
        struct AHallCharacter* BindingActor;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.BindingActor = (struct AHallCharacter*)BindingActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallMainDisplayCtrl::HasDefaultDisplayCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "HasDefaultDisplayCharacter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString AHallMainDisplayCtrl::GetPresetCharacterID(EHallCharacterDisplayStage DisplayStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "GetPresetCharacterID");
    struct
    {
        enum EHallCharacterDisplayStage DisplayStage;
        struct FString ReturnValue;
    } Parms{};
    Parms.DisplayStage = (enum EHallCharacterDisplayStage)DisplayStage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* AHallMainDisplayCtrl::GetHallCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "GetHallCharacter");
    struct
    {
        struct AHallCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EHallMainDisplayType AHallMainDisplayCtrl::GetDisplayType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "GetDisplayType");
    struct
    {
        enum EHallMainDisplayType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACameraActor* AHallMainDisplayCtrl::GetDebugCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainDisplayCtrl", "GetDebugCamera");
    struct
    {
        struct ACameraActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallMainDisplayCtrl* AHallMainDisplayCtrl::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallMainDisplayCtrl", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct AHallMainDisplayCtrl* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallMainFlowDisplayCtrl::* ----
void AHallMainFlowDisplayCtrl::UnequipByEquipmentType(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId, EEquipmentType EquipmentType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "UnequipByEquipmentType");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
        enum EEquipmentType EquipmentType;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.EquipmentType = (enum EEquipmentType)EquipmentType;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::Unequip(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "Unequip");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
        struct FName ItemID;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::SwitchCurrentLightGroupVolumn(struct FName LightGroupName, uint8_t bSwitchToLarger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "SwitchCurrentLightGroupVolumn");
    struct
    {
        struct FName LightGroupName;
        uint8_t bSwitchToLarger;
    } Parms{};
    Parms.LightGroupName = (struct FName)LightGroupName;
    Parms.bSwitchToLarger = (uint8_t)bSwitchToLarger;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::SwitchCharacterExtraPartMeshOptimization(EMainFlowCtrlType InCtrlType, int32_t InForceID, uint8_t bCastShadow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "SwitchCharacterExtraPartMeshOptimization");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InForceID;
        uint8_t bCastShadow;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InForceID = (int32_t)InForceID;
    Parms.bCastShadow = (uint8_t)bCastShadow;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::StopSOLSceneVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "StopSOLSceneVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::StopMPSceneVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "StopMPSceneVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::SetCharacterEquipWeapon(EMainFlowCtrlType InCtrlType, struct UModularWeaponDesc* WeaponDesc, int32_t InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "SetCharacterEquipWeapon");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        struct UModularWeaponDesc* WeaponDesc;
        int32_t InSlotId;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::SetCharacterAvatar(EMainFlowCtrlType InCtrlType, struct FString InAvatarId, int32_t InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "SetCharacterAvatar");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        struct FString InAvatarId;
        int32_t InSlotId;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::SetAutoDownloadModuleCategory(EMainFlowCtrlType InCtrlType, int32_t InSlotId, uint8_t bAutoDownload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "SetAutoDownloadModuleCategory");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
        uint8_t bAutoDownload;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.bAutoDownload = (uint8_t)bAutoDownload;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::RemoveCharacterAvatar(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "RemoveCharacterAvatar");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::RefreshCharacterPosBySlot(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "RefreshCharacterPosBySlot");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::PlaySOLSceneVideo(struct FName VedioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "PlaySOLSceneVideo");
    struct
    {
        struct FName VedioName;
    } Parms{};
    Parms.VedioName = (struct FName)VedioName;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::PlayMPSceneVideo(struct FName VedioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "PlayMPSceneVideo");
    struct
    {
        struct FName VedioName;
    } Parms{};
    Parms.VedioName = (struct FName)VedioName;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::PlayMainFlowSeq(struct FName InSeqName, uint8_t IsEnd, uint8_t isReverse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "PlayMainFlowSeq");
    struct
    {
        struct FName InSeqName;
        uint8_t IsEnd;
        uint8_t isReverse;
    } Parms{};
    Parms.InSeqName = (struct FName)InSeqName;
    Parms.IsEnd = (uint8_t)IsEnd;
    Parms.isReverse = (uint8_t)isReverse;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::PlayMainFlowModeSeq(struct FName InSeqName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "PlayMainFlowModeSeq");
    struct
    {
        struct FName InSeqName;
    } Parms{};
    Parms.InSeqName = (struct FName)InSeqName;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::PlayHeroVoice(struct AHallCharacter* HallCharacter, struct FString InAvatarId, struct FString InMarkedLabel, int32_t InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "PlayHeroVoice");
    struct
    {
        struct AHallCharacter* HallCharacter;
        struct FString InAvatarId;
        struct FString InMarkedLabel;
        int32_t InSlot;
    } Parms{};
    Parms.HallCharacter = (struct AHallCharacter*)HallCharacter;
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InMarkedLabel = (struct FString)InMarkedLabel;
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::OnMovieSceneSequencePlayerEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "OnMovieSceneSequencePlayerEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::OnMainFlowHallModeSeqFinished__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "OnMainFlowHallModeSeqFinished__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UHallCharacterVoiceComponent* AHallMainFlowDisplayCtrl::GetHallCharacterVoiceComponentBySlot(const int32_t& InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "GetHallCharacterVoiceComponentBySlot");
    struct
    {
        int32_t InSlot;
        struct UHallCharacterVoiceComponent* ReturnValue;
    } Parms{};
    Parms.InSlot = (int32_t)InSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AHallMainFlowDisplayCtrl::GetCharacterLocationBySlot(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "GetCharacterLocationBySlot");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* AHallMainFlowDisplayCtrl::GetCharacterBySlotId(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "GetCharacterBySlotId");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallMainFlowDisplayCtrl::Equip(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "Equip");
    struct
    {
        enum EMainFlowCtrlType InCtrlType;
        int32_t InSlotId;
        struct FName ItemID;
    } Parms{};
    Parms.InCtrlType = (enum EMainFlowCtrlType)InCtrlType;
    Parms.InSlotId = (int32_t)InSlotId;
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::DestorySOLCharcter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "DestorySOLCharcter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::DestoryMPCharcter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "DestoryMPCharcter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::DestoryCharcter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "DestoryCharcter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::CloseMainFlowSeq(struct FName InSeqName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "CloseMainFlowSeq");
    struct
    {
        struct FName InSeqName;
    } Parms{};
    Parms.InSeqName = (struct FName)InSeqName;
    this->ProcessEvent(Func, &Parms);
}

void AHallMainFlowDisplayCtrl::CloseMainFlowModeSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainFlowDisplayCtrl", "CloseMainFlowModeSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallMainLightCtrlComponent::* ----
void UHallMainLightCtrlComponent::TurnOffAllHallLights()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainLightCtrlComponent", "TurnOffAllHallLights");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallMainLightCtrlComponent::SetLightEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMainLightCtrlComponent", "SetLightEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallMatchDisplayCtrl::* ----
void AHallMatchDisplayCtrl::UnloadLightLevel(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "UnloadLightLevel");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SwitchVideoMaterial(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SwitchVideoMaterial");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::StopSceneVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "StopSceneVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetTeammateState(int32_t SlotId, uint8_t bSelect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetTeammateState");
    struct
    {
        int32_t SlotId;
        uint8_t bSelect;
    } Parms{};
    Parms.SlotId = (int32_t)SlotId;
    Parms.bSelect = (uint8_t)bSelect;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetMatchCtrlType(EMatchCtrlType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetMatchCtrlType");
    struct
    {
        enum EMatchCtrlType InType;
    } Parms{};
    Parms.InType = (enum EMatchCtrlType)InType;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetDefaultVideoIds(struct FString VideoIn, struct FString VideoLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetDefaultVideoIds");
    struct
    {
        struct FString VideoIn;
        struct FString VideoLoop;
    } Parms{};
    Parms.VideoIn = (struct FString)VideoIn;
    Parms.VideoLoop = (struct FString)VideoLoop;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetDefaultSceneKey(struct FString InDefaultSceneKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetDefaultSceneKey");
    struct
    {
        struct FString InDefaultSceneKey;
    } Parms{};
    Parms.InDefaultSceneKey = (struct FString)InDefaultSceneKey;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetCurAvatarId(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetCurAvatarId");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetCharacterWatchWithSlot(int32_t SlotId, struct FName WatchID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetCharacterWatchWithSlot");
    struct
    {
        int32_t SlotId;
        struct FName WatchID;
    } Parms{};
    Parms.SlotId = (int32_t)SlotId;
    Parms.WatchID = (struct FName)WatchID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::SetCharacterAvatarWithSlot(int32_t SlotId, struct FString AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "SetCharacterAvatarWithSlot");
    struct
    {
        int32_t SlotId;
        struct FString AvatarID;
    } Parms{};
    Parms.SlotId = (int32_t)SlotId;
    Parms.AvatarID = (struct FString)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::ResetVideoIds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "ResetVideoIds");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::ResetDefaultVideoIds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "ResetDefaultVideoIds");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::ResetDefaultSceneKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "ResetDefaultSceneKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::ResetCharacterSequence(int32_t SlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "ResetCharacterSequence");
    struct
    {
        int32_t SlotId;
    } Parms{};
    Parms.SlotId = (int32_t)SlotId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::PlaySceneVideo(struct FString HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "PlaySceneVideo");
    struct
    {
        struct FString HeroId;
    } Parms{};
    Parms.HeroId = (struct FString)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::PlayMediaAfterLevelsLoaded(struct FName InDisplayTypeStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "PlayMediaAfterLevelsLoaded");
    struct
    {
        struct FName InDisplayTypeStr;
    } Parms{};
    Parms.InDisplayTypeStr = (struct FName)InDisplayTypeStr;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::PlayHeroVoice(struct AHallCharacter* HallCharacter, struct FString InAvatarId, struct FString InMarkedLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "PlayHeroVoice");
    struct
    {
        struct AHallCharacter* HallCharacter;
        struct FString InAvatarId;
        struct FString InMarkedLabel;
    } Parms{};
    Parms.HallCharacter = (struct AHallCharacter*)HallCharacter;
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InMarkedLabel = (struct FString)InMarkedLabel;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::OnMaterialLoaded(struct UMaterialInterface* InMat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "OnMaterialLoaded");
    struct
    {
        struct UMaterialInterface* InMat;
    } Parms{};
    Parms.InMat = (struct UMaterialInterface*)InMat;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::LoadSceneBP(struct FString InMeshName, struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "LoadSceneBP");
    struct
    {
        struct FString InMeshName;
        struct FString InAvatarId;
    } Parms{};
    Parms.InMeshName = (struct FString)InMeshName;
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::LoadAndSetLightLevel(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "LoadAndSetLightLevel");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallMatchDisplayCtrl::LoadAndSetClothMaterial(struct FString InMeshName, struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "LoadAndSetClothMaterial");
    struct
    {
        struct FString InMeshName;
        struct FString InAvatarId;
    } Parms{};
    Parms.InMeshName = (struct FString)InMeshName;
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

struct FVector AHallMatchDisplayCtrl::GetCharacterPositionBySlot(int32_t SlotId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayCtrl", "GetCharacterPositionBySlot");
    struct
    {
        int32_t SlotId;
        struct FVector ReturnValue;
    } Parms{};
    Parms.SlotId = (int32_t)SlotId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHallMatchDisplayLevelSequenceComponent::* ----
void UHallMatchDisplayLevelSequenceComponent::OnHallCharacterMeshLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMatchDisplayLevelSequenceComponent", "OnHallCharacterMeshLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallMPLobbyDisplayCtrl::* ----
void AHallMPLobbyDisplayCtrl::SetScreenMaterial(struct FName ScreenName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallMPLobbyDisplayCtrl", "SetScreenMaterial");
    struct
    {
        struct FName ScreenName;
    } Parms{};
    Parms.ScreenName = (struct FName)ScreenName;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallOperatorDisplayCtrl::* ----
void AHallOperatorDisplayCtrl::UnloadBPLevel(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "UnloadBPLevel");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::ToggleInteracted(uint8_t CanInteracted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "ToggleInteracted");
    struct
    {
        uint8_t CanInteracted;
    } Parms{};
    Parms.CanInteracted = (uint8_t)CanInteracted;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::StopSceneVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "StopSceneVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::StopPlaySequenceVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "StopPlaySequenceVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::StopPlay2DVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "StopPlay2DVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::StopCameraFade()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "StopCameraFade");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::StartCameraFade()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "StartCameraFade");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetExtraLightEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetExtraLightEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetDefaultSceneKey(struct FString InDefaultSceneKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetDefaultSceneKey");
    struct
    {
        struct FString InDefaultSceneKey;
    } Parms{};
    Parms.InDefaultSceneKey = (struct FString)InDefaultSceneKey;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCurrentCharacterSeqEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCurrentCharacterSeqEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCurCharacterAvatarId(struct FString AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCurCharacterAvatarId");
    struct
    {
        struct FString AvatarID;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCharacterSuitAvatarWithSequence(struct FString AvatarID, struct FString MarkedFrameName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCharacterSuitAvatarWithSequence");
    struct
    {
        struct FString AvatarID;
        struct FString MarkedFrameName;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    Parms.MarkedFrameName = (struct FString)MarkedFrameName;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCharacterInteractEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCharacterInteractEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCharacterActionShow(struct FString AvatarID, struct FString InActionID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCharacterActionShow");
    struct
    {
        struct FString AvatarID;
        struct FString InActionID;
    } Parms{};
    Parms.AvatarID = (struct FString)AvatarID;
    Parms.InActionID = (struct FString)InActionID;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCanCameraFade(uint8_t bCanCameraFade)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCanCameraFade");
    struct
    {
        uint8_t bCanCameraFade;
    } Parms{};
    Parms.bCanCameraFade = (uint8_t)bCanCameraFade;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCameraDisplayType(struct FString InDisplayType, struct FString InAvatarId, uint8_t bEnterLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCameraDisplayType");
    struct
    {
        struct FString InDisplayType;
        struct FString InAvatarId;
        uint8_t bEnterLevel;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.bEnterLevel = (uint8_t)bEnterLevel;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetCameraAppearanceDisplayType(struct FString InDisplayType, struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetCameraAppearanceDisplayType");
    struct
    {
        struct FString InDisplayType;
        struct FString InAvatarId;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetBPLevelDisplay(struct FString InAvatarId, uint8_t isHighLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetBPLevelDisplay");
    struct
    {
        struct FString InAvatarId;
        uint8_t isHighLevel;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.isHighLevel = (uint8_t)isHighLevel;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::SetBackgroundAndFloor(const struct FName& InBackgroundMatParamName, const struct FName& InFloorMatParamName, struct FString InBackgroundPath, struct FString InFloorPath, const float& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "SetBackgroundAndFloor");
    struct
    {
        struct FName InBackgroundMatParamName;
        struct FName InFloorMatParamName;
        struct FString InBackgroundPath;
        struct FString InFloorPath;
        float Index;
    } Parms{};
    Parms.InBackgroundMatParamName = (struct FName)InBackgroundMatParamName;
    Parms.InFloorMatParamName = (struct FName)InFloorMatParamName;
    Parms.InBackgroundPath = (struct FString)InBackgroundPath;
    Parms.InFloorPath = (struct FString)InFloorPath;
    Parms.Index = (float)Index;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::ResetDefaultSceneKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "ResetDefaultSceneKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::ResetCharacterSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "ResetCharacterSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::ResetActionShowCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "ResetActionShowCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::PlaySequenceVoiceInTrack(struct FString InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "PlaySequenceVoiceInTrack");
    struct
    {
        struct FString InAvatarId;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::PlaySequenceVoice(struct FString InAvatarId, struct FString InMarkedLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "PlaySequenceVoice");
    struct
    {
        struct FString InAvatarId;
        struct FString InMarkedLabel;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InMarkedLabel = (struct FString)InMarkedLabel;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::PlaySceneVideo(struct FString HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "PlaySceneVideo");
    struct
    {
        struct FString HeroId;
    } Parms{};
    Parms.HeroId = (struct FString)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::PlayMediaAfterLevelsLoaded(struct FName InDisplayTypeStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "PlayMediaAfterLevelsLoaded");
    struct
    {
        struct FName InDisplayTypeStr;
    } Parms{};
    Parms.InDisplayTypeStr = (struct FName)InDisplayTypeStr;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::PlayEventVoice(struct FString InAvatarId, struct FString InMarkedLabel, int32_t InEventIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "PlayEventVoice");
    struct
    {
        struct FString InAvatarId;
        struct FString InMarkedLabel;
        int32_t InEventIndex;
    } Parms{};
    Parms.InAvatarId = (struct FString)InAvatarId;
    Parms.InMarkedLabel = (struct FString)InMarkedLabel;
    Parms.InEventIndex = (int32_t)InEventIndex;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::Play2DVoice(struct FString HeroId, struct FString InVoiceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "Play2DVoice");
    struct
    {
        struct FString HeroId;
        struct FString InVoiceId;
    } Parms{};
    Parms.HeroId = (struct FString)HeroId;
    Parms.InVoiceId = (struct FString)InVoiceId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::OnMaterialLoaded(struct UMaterialInterface* InMat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "OnMaterialLoaded");
    struct
    {
        struct UMaterialInterface* InMat;
    } Parms{};
    Parms.InMat = (struct UMaterialInterface*)InMat;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::OnLevelAndSeqLoadedComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "OnLevelAndSeqLoadedComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::JumpToMarkedFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "JumpToMarkedFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallOperatorDisplayCtrl::IsVideoStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "IsVideoStopped");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate AHallOperatorDisplayCtrl::GetOn2DVoiceStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "GetOn2DVoiceStopped");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallOperatorDisplayCtrl::EnableMotionBlur(float InAmount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "EnableMotionBlur");
    struct
    {
        float InAmount;
    } Parms{};
    Parms.InAmount = (float)InAmount;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::EnableMainCamera(uint8_t bSucceeded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "EnableMainCamera");
    struct
    {
        uint8_t bSucceeded;
    } Parms{};
    Parms.bSucceeded = (uint8_t)bSucceeded;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorDisplayCtrl::DisableMotionBlur()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorDisplayCtrl", "DisableMotionBlur");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallOperatorItemDisplayCtrl::* ----
void AHallOperatorItemDisplayCtrl::TryGenerateAnimBP(struct FString InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "TryGenerateAnimBP");
    struct
    {
        struct FString InItemID;
    } Parms{};
    Parms.InItemID = (struct FString)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetSwitchParameter(struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetSwitchParameter");
    struct
    {
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetPlayState(uint8_t bTurnOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetPlayState");
    struct
    {
        uint8_t bTurnOn;
    } Parms{};
    Parms.bTurnOn = (uint8_t)bTurnOn;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetItemMaterialScalarParam(struct FName MatSlotName, struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetItemMaterialScalarParam");
    struct
    {
        struct FName MatSlotName;
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.MatSlotName = (struct FName)MatSlotName;
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetHeroPropsMysticalSkinScheme(const struct FName& SchemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetHeroPropsMysticalSkinScheme");
    struct
    {
        struct FName SchemeID;
    } Parms{};
    Parms.SchemeID = (struct FName)SchemeID;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetDisplayItem(struct FString HeroItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString HeroItemId;
    } Parms{};
    Parms.HeroItemId = (struct FString)HeroItemId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::SetCurrentSchemeId(struct FString InSchemeId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "SetCurrentSchemeId");
    struct
    {
        struct FString InSchemeId;
    } Parms{};
    Parms.InSchemeId = (struct FString)InSchemeId;
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::ResetDisplayItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "ResetDisplayItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallOperatorItemDisplayCtrl::OnAnimBPLoaded(const struct FSoftObjectPath& ItemModelPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "OnAnimBPLoaded");
    struct
    {
        struct FSoftObjectPath ItemModelPath;
    } Parms{};
    Parms.ItemModelPath = (struct FSoftObjectPath)ItemModelPath;
    this->ProcessEvent(Func, &Parms);
}

struct USkeletalMeshComponent* AHallOperatorItemDisplayCtrl::GetHeroItemSkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallOperatorItemDisplayCtrl", "GetHeroItemSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallPostProcessDisplayActor::* ----
void AHallPostProcessDisplayActor::SetAttachActor(struct AActor* AttachActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPostProcessDisplayActor", "SetAttachActor");
    struct
    {
        struct AActor* AttachActor;
    } Parms{};
    Parms.AttachActor = (struct AActor*)AttachActor;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* AHallPostProcessDisplayActor::GetMaterialInstDynamic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPostProcessDisplayActor", "GetMaterialInstDynamic");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallPreviewRoomDisplayCtrl::* ----
void AHallPreviewRoomDisplayCtrl::UnloadAllLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPreviewRoomDisplayCtrl", "UnloadAllLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallPreviewRoomDisplayCtrl::OnSingleLevelUnloadCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPreviewRoomDisplayCtrl", "OnSingleLevelUnloadCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallPreviewRoomDisplayCtrl::OnSingleLevelLoadCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPreviewRoomDisplayCtrl", "OnSingleLevelLoadCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallPreviewRoomDisplayCtrl::LoadPreviewRoomSceneByType(EPreviewRoomSceneType SceneType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPreviewRoomDisplayCtrl", "LoadPreviewRoomSceneByType");
    struct
    {
        enum EPreviewRoomSceneType SceneType;
    } Parms{};
    Parms.SceneType = (enum EPreviewRoomSceneType)SceneType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallPreviewRoomDisplayCtrl::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPreviewRoomDisplayCtrl", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPreviewRoomSceneType AHallPreviewRoomDisplayCtrl::GetCurrentSceneType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallPreviewRoomDisplayCtrl", "GetCurrentSceneType");
    struct
    {
        enum EPreviewRoomSceneType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallRandomMeshActor::* ----
void AHallRandomMeshActor::UpdateTimelineEffect(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "UpdateTimelineEffect");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::UpdateEffect(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "UpdateEffect");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::SetSkeletonMeshState(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "SetSkeletonMeshState");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::SetSkeletonMesh(struct USkeletalMesh* SkeletalMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "SetSkeletonMesh");
    struct
    {
        struct USkeletalMesh* SkeletalMesh;
    } Parms{};
    Parms.SkeletalMesh = (struct USkeletalMesh*)SkeletalMesh;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::SetSelected(uint8_t bIsSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "SetSelected");
    struct
    {
        uint8_t bIsSelected;
    } Parms{};
    Parms.bIsSelected = (uint8_t)bIsSelected;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::SetMesh(struct UStaticMesh* StaticMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "SetMesh");
    struct
    {
        struct UStaticMesh* StaticMesh;
    } Parms{};
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::SetHover(uint8_t bIsHover)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "SetHover");
    struct
    {
        uint8_t bIsHover;
    } Parms{};
    Parms.bIsHover = (uint8_t)bIsHover;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::RandomSkeletonMesh(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "RandomSkeletonMesh");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::RandomMesh(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "RandomMesh");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::PlaySkeletonAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "PlaySkeletonAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallRandomMeshActor::OnEffectFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "OnEffectFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AHallRandomMeshActor::IsSelected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "IsSelected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallRandomMeshActor::IsHover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "IsHover");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AHallRandomMeshActor::GetMeshActorId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallRandomMeshActor", "GetMeshActorId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallSceneActor::* ----
void AHallSceneActor::Unregiser()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneActor", "Unregiser");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSceneActor::Register()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneActor", "Register");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallSceneBGManager::* ----
void UHallSceneBGManager::SwitchBGMatVectorParam(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, struct FVector InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBGMatVectorParam");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct FName InParamName;
        struct FVector InValue;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InParamName = (struct FName)InParamName;
    Parms.InValue = (struct FVector)InValue;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHallSceneBGManager::SwitchBGMatTextureParamByPath(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, const struct FSoftObjectPath& InValue, struct FSoftObjectPath InDefaultTex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBGMatTextureParamByPath");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct FName InParamName;
        struct FSoftObjectPath InValue;
        struct FSoftObjectPath InDefaultTex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InParamName = (struct FName)InParamName;
    Parms.InValue = (struct FSoftObjectPath)InValue;
    Parms.InDefaultTex = (struct FSoftObjectPath)InDefaultTex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallSceneBGManager::SwitchBGMatTextureParam(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, struct UTexture* InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBGMatTextureParam");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct FName InParamName;
        struct UTexture* InValue;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InParamName = (struct FName)InParamName;
    Parms.InValue = (struct UTexture*)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::SwitchBGMatScalarParam(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBGMatScalarParam");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct FName InParamName;
        float InValue;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InParamName = (struct FName)InParamName;
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::SwitchBackgroundMatNoDynamic(int32_t InMatIndex, const struct FName& InMeshName, struct UMaterialInterface* InMatInterface)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBackgroundMatNoDynamic");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct UMaterialInterface* InMatInterface;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InMatInterface = (struct UMaterialInterface*)InMatInterface;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::SwitchBackgroundMatByPathNoUnloadLast(int32_t InMatIndex, const struct FName& InMeshName, const struct FSoftObjectPath& InMatPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBackgroundMatByPathNoUnloadLast");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct FSoftObjectPath InMatPath;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InMatPath = (struct FSoftObjectPath)InMatPath;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::SwitchBackgroundMatByPath(int32_t InMatIndex, const struct FName& InMeshName, const struct FSoftObjectPath& InMatPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBackgroundMatByPath");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct FSoftObjectPath InMatPath;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InMatPath = (struct FSoftObjectPath)InMatPath;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::SwitchBackgroundMat(int32_t InMatIndex, const struct FName& InMeshName, struct UMaterialInterface* InMatInterface)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SwitchBackgroundMat");
    struct
    {
        int32_t InMatIndex;
        struct FName InMeshName;
        struct UMaterialInterface* InMatInterface;
    } Parms{};
    Parms.InMatIndex = (int32_t)InMatIndex;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InMatInterface = (struct UMaterialInterface*)InMatInterface;
    this->ProcessEvent(Func, &Parms);
}

struct AActor* UHallSceneBGManager::SpawnActorAndSetPosition(struct UObject* InClass, struct AActor* AttachedParent, ECustomTransformRule TransformRule, const struct FTransform& InTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SpawnActorAndSetPosition");
    struct
    {
        struct UObject* InClass;
        struct AActor* AttachedParent;
        enum ECustomTransformRule TransformRule;
        struct FTransform InTransform;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    Parms.AttachedParent = (struct AActor*)AttachedParent;
    Parms.TransformRule = (enum ECustomTransformRule)TransformRule;
    Parms.InTransform = (struct FTransform)InTransform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallSceneBGManager::SetRegisteredActorVisibilityWithChildren(const struct FName& InName, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SetRegisteredActorVisibilityWithChildren");
    struct
    {
        struct FName InName;
        uint8_t bVisible;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHallSceneBGManager::SetRegisteredActorVisibility(const struct FName& InName, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "SetRegisteredActorVisibility");
    struct
    {
        struct FName InName;
        uint8_t bVisible;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallSceneBGManager::PreLoadAllMatchLevelSequences()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "PreLoadAllMatchLevelSequences");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::LoadAndSpawnActorFromSoftClass(const struct FSoftClassPath& InClassPath, struct AActor* AttachedParent, ECustomTransformRule TransformRule, const struct FTransform& InTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "LoadAndSpawnActorFromSoftClass");
    struct
    {
        struct FSoftClassPath InClassPath;
        struct AActor* AttachedParent;
        enum ECustomTransformRule TransformRule;
        struct FTransform InTransform;
    } Parms{};
    Parms.InClassPath = (struct FSoftClassPath)InClassPath;
    Parms.AttachedParent = (struct AActor*)AttachedParent;
    Parms.TransformRule = (enum ECustomTransformRule)TransformRule;
    Parms.InTransform = (struct FTransform)InTransform;
    this->ProcessEvent(Func, &Parms);
}

struct AActor* UHallSceneBGManager::GetRegisteredSceneBGActor(const struct FName& InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "GetRegisteredSceneBGActor");
    struct
    {
        struct FName InName;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UHallSceneBGManager::GetRegisteredSceneActor(const struct FName& InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "GetRegisteredSceneActor");
    struct
    {
        struct FName InName;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHallSceneBGManager* UHallSceneBGManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallSceneBGManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UHallSceneBGManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHallSceneBGManager::DestroySceneActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "DestroySceneActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneBGManager::ClearAllMatchLevelSequences()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneBGManager", "ClearAllMatchLevelSequences");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallSceneVideoPlayerComponent::* ----
void UHallSceneVideoPlayerComponent::SetNormalTexture(const struct FSoftObjectPath& ObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "SetNormalTexture");
    struct
    {
        struct FSoftObjectPath ObjectPath;
    } Parms{};
    Parms.ObjectPath = (struct FSoftObjectPath)ObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneVideoPlayerComponent::SetDefaultSceneKey(struct FString InDefaultSceneKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "SetDefaultSceneKey");
    struct
    {
        struct FString InDefaultSceneKey;
    } Parms{};
    Parms.InDefaultSceneKey = (struct FString)InDefaultSceneKey;
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneVideoPlayerComponent::ResetNormalTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "ResetNormalTexture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneVideoPlayerComponent::ResetDefaultSceneKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "ResetDefaultSceneKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallSceneVideoPlayerComponent::OnMediaReachedEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "OnMediaReachedEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHallSceneVideoPlayerComponent::IsUnUsingDefaultSceneKey(struct FString& InAvatarId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "IsUnUsingDefaultSceneKey");
    struct
    {
        struct FString InAvatarId;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InAvatarId = Parms.InAvatarId;
    return Parms.ReturnValue;
}

struct FString UHallSceneVideoPlayerComponent::GetDefaultSceneKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSceneVideoPlayerComponent", "GetDefaultSceneKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallSecretServiceCtrl::* ----
void AHallSecretServiceCtrl::StopSequence(struct FString InSeqName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSecretServiceCtrl", "StopSequence");
    struct
    {
        struct FString InSeqName;
    } Parms{};
    Parms.InSeqName = (struct FString)InSeqName;
    this->ProcessEvent(Func, &Parms);
}

void AHallSecretServiceCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSecretServiceCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallSecretServiceCtrl::ResetType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSecretServiceCtrl", "ResetType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSecretServiceCtrl::PlayCurrentSequence(struct FString InSeqName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSecretServiceCtrl", "PlayCurrentSequence");
    struct
    {
        struct FString InSeqName;
    } Parms{};
    Parms.InSeqName = (struct FString)InSeqName;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallSequenceDirector::* ----
void UHallSequenceDirector::PauseSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSequenceDirector", "PauseSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallSequenceDirector::DetachFromActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSequenceDirector", "DetachFromActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallSettlementDisplayCtrl::* ----
void AHallSettlementDisplayCtrl::PreLoadSettlementLevel(uint8_t isReleaseFocusPoint, int32_t OnlyFocusOneActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "PreLoadSettlementLevel");
    struct
    {
        uint8_t isReleaseFocusPoint;
        int32_t OnlyFocusOneActor;
    } Parms{};
    Parms.isReleaseFocusPoint = (uint8_t)isReleaseFocusPoint;
    Parms.OnlyFocusOneActor = (int32_t)OnlyFocusOneActor;
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::PlayLevelSeqActor(struct FName LevelSeqActorName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "PlayLevelSeqActor");
    struct
    {
        struct FName LevelSeqActorName;
    } Parms{};
    Parms.LevelSeqActorName = (struct FName)LevelSeqActorName;
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::OnSettlementEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "OnSettlementEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::OnMovieSceneSequencePlayerEventStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "OnMovieSceneSequencePlayerEventStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::OnMovieSceneSequencePlayerEventFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "OnMovieSceneSequencePlayerEventFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::OnLevelStreamingProgress(int32_t Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "OnLevelStreamingProgress");
    struct
    {
        int32_t Percent;
    } Parms{};
    Parms.Percent = (int32_t)Percent;
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::OnHallSettlementSeqEnd__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "OnHallSettlementSeqEnd__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::OnHallSettlementResReady__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "OnHallSettlementResReady__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallSettlementDisplayCtrl::DoPreloadSettlement(int32_t OnlyFocusOneActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementDisplayCtrl", "DoPreloadSettlement");
    struct
    {
        int32_t OnlyFocusOneActor;
    } Parms{};
    Parms.OnlyFocusOneActor = (int32_t)OnlyFocusOneActor;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallSettlementSnapshotStudio::* ----
struct AHallCharacter* AHallSettlementSnapshotStudio::SpawnCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementSnapshotStudio", "SpawnCharacter");
    struct
    {
        struct AHallCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* AHallSettlementSnapshotStudio::GetRenderTargetTexture(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementSnapshotStudio", "GetRenderTargetTexture");
    struct
    {
        int32_t Index;
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* AHallSettlementSnapshotStudio::GetCharacter(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementSnapshotStudio", "GetCharacter");
    struct
    {
        int32_t Index;
        struct AHallCharacter* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInterface* AHallSettlementSnapshotStudio::GetBackgroundMaterial(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSettlementSnapshotStudio", "GetBackgroundMaterial");
    struct
    {
        int32_t Index;
        struct UMaterialInterface* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallSettlementSnapshotStudio* AHallSettlementSnapshotStudio::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HallSettlementSnapshotStudio", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct AHallSettlementSnapshotStudio* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHallSurroundingCtrlComponent::* ----
void UHallSurroundingCtrlComponent::SetBgTexFromImg(struct AStaticMeshActor* BgActor, struct UImage* Image)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallSurroundingCtrlComponent", "SetBgTexFromImg");
    struct
    {
        struct AStaticMeshActor* BgActor;
        struct UImage* Image;
    } Parms{};
    Parms.BgActor = (struct AStaticMeshActor*)BgActor;
    Parms.Image = (struct UImage*)Image;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallVehicleDisplayCtrl::* ----
void AHallVehicleDisplayCtrl::UnLoadCurrentLevel(struct FString SceneType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "UnLoadCurrentLevel");
    struct
    {
        struct FString SceneType;
    } Parms{};
    Parms.SceneType = (struct FString)SceneType;
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::SetVehicleDisplayType(uint64_t VehicleId, uint64_t CameraTypeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "SetVehicleDisplayType");
    struct
    {
        uint64_t VehicleId;
        uint64_t CameraTypeIndex;
    } Parms{};
    Parms.VehicleId = (uint64_t)VehicleId;
    Parms.CameraTypeIndex = (uint64_t)CameraTypeIndex;
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::SetVectorParameterValue(struct FName InParamName, const struct FLinearColor& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "SetVectorParameterValue");
    struct
    {
        struct FName InParamName;
        struct FLinearColor Value;
    } Parms{};
    Parms.InParamName = (struct FName)InParamName;
    Parms.Value = (struct FLinearColor)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::SetScalarParameterValue(struct FName InParamName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "SetScalarParameterValue");
    struct
    {
        struct FName InParamName;
        float Value;
    } Parms{};
    Parms.InParamName = (struct FName)InParamName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::SequenceGoToEndAndStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "SequenceGoToEndAndStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::ResetParameterValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "ResetParameterValue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::ResetGeneralLevelSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "ResetGeneralLevelSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::PlaySequence(struct FName iSkinID, struct FName iVehicleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "PlaySequence");
    struct
    {
        struct FName iSkinID;
        struct FName iVehicleID;
    } Parms{};
    Parms.iSkinID = (struct FName)iSkinID;
    Parms.iVehicleID = (struct FName)iVehicleID;
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::OnUnloadLatentActionCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "OnUnloadLatentActionCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::OnLatentActionCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "OnLatentActionCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallVehicleDisplayCtrl::LoadVehicleLevel(struct FName iSkinID, struct FName iVehicleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallVehicleDisplayCtrl", "LoadVehicleLevel");
    struct
    {
        struct FName iSkinID;
        struct FName iVehicleID;
    } Parms{};
    Parms.iSkinID = (struct FName)iSkinID;
    Parms.iVehicleID = (struct FName)iVehicleID;
    this->ProcessEvent(Func, &Parms);
}

// ---- AHallWatchDisplayCtrl::* ----
void AHallWatchDisplayCtrl::SetDisplayWatchItem(struct FString InItemID, uint8_t checkSubLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWatchDisplayCtrl", "SetDisplayWatchItem");
    struct
    {
        struct FString InItemID;
        uint8_t checkSubLevel;
    } Parms{};
    Parms.InItemID = (struct FString)InItemID;
    Parms.checkSubLevel = (uint8_t)checkSubLevel;
    this->ProcessEvent(Func, &Parms);
}

void AHallWatchDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWatchDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallWatchDisplayCtrl::PlayWatchVO(struct FString InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWatchDisplayCtrl", "PlayWatchVO");
    struct
    {
        struct FString InItemID;
    } Parms{};
    Parms.InItemID = (struct FString)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallWatchDisplayCtrl::OnThemeLevelUnLoadCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWatchDisplayCtrl", "OnThemeLevelUnLoadCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWatchDisplayCtrl::OnThemeLevelLoadCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWatchDisplayCtrl", "OnThemeLevelLoadCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallWeaponDisplayComponent::* ----
void UHallWeaponDisplayComponent::SetShowWeaponPendant(uint8_t isShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "SetShowWeaponPendant");
    struct
    {
        uint8_t isShow;
    } Parms{};
    Parms.isShow = (uint8_t)isShow;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplayComponent::SetShowBowWeapon(uint8_t isShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "SetShowBowWeapon");
    struct
    {
        uint8_t isShow;
    } Parms{};
    Parms.isShow = (uint8_t)isShow;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplayComponent::SetIsAdapter(uint8_t IsAdapter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "SetIsAdapter");
    struct
    {
        uint8_t IsAdapter;
    } Parms{};
    Parms.IsAdapter = (uint8_t)IsAdapter;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplayComponent::SetCurWeaponDisplayType(struct FString InWeaponDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "SetCurWeaponDisplayType");
    struct
    {
        struct FString InWeaponDisplayType;
    } Parms{};
    Parms.InWeaponDisplayType = (struct FString)InWeaponDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplayComponent::PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "PostApplyWorldOffset");
    struct
    {
        struct UWorld* World;
        struct FIntVector IntVector1;
        struct FIntVector IntVector2;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IntVector1 = (struct FIntVector)IntVector1;
    Parms.IntVector2 = (struct FIntVector)IntVector2;
    this->ProcessEvent(Func, &Parms);
}

struct AActor* UHallWeaponDisplayComponent::GetSpawnPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "GetSpawnPoint");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDelegate UHallWeaponDisplayComponent::GetOnWeaponLoadedCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "GetOnWeaponLoadedCompleted");
    struct
    {
        struct FDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UHallWeaponDisplayComponent::GetCurWeaponDisplayType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "GetCurWeaponDisplayType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UHallWeaponDisplayComponent::GetCurrentSkinId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayComponent", "GetCurrentSkinId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHallWeaponDisplayCtrl::* ----
void AHallWeaponDisplayCtrl::StopCameraBlendProcess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "StopCameraBlendProcess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SkipWeaponCutScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SkipWeaponCutScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetWheelInteract(uint8_t InCanInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetWheelInteract");
    struct
    {
        uint8_t InCanInteract;
    } Parms{};
    Parms.InCanInteract = (uint8_t)InCanInteract;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetWeaponPendant(uint64_t PendantItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetWeaponPendant");
    struct
    {
        uint64_t PendantItemId;
    } Parms{};
    Parms.PendantItemId = (uint64_t)PendantItemId;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetWeaponDisplayType(struct FString InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetWeaponDisplayType");
    struct
    {
        struct FString InType;
    } Parms{};
    Parms.InType = (struct FString)InType;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetShowWeaponPendant(uint8_t isShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetShowWeaponPendant");
    struct
    {
        uint8_t isShow;
    } Parms{};
    Parms.isShow = (uint8_t)isShow;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetScaleMinAndMax(float Min, float Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetScaleMinAndMax");
    struct
    {
        float Min;
        float Max;
    } Parms{};
    Parms.Min = (float)Min;
    Parms.Max = (float)Max;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetReboundActive(uint8_t bReboundActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetReboundActive");
    struct
    {
        uint8_t bReboundActive;
    } Parms{};
    Parms.bReboundActive = (uint8_t)bReboundActive;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetItemCalBoundEnable(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetItemCalBoundEnable");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetIsAdapter(uint8_t IsAdapter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetIsAdapter");
    struct
    {
        uint8_t IsAdapter;
    } Parms{};
    Parms.IsAdapter = (uint8_t)IsAdapter;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetEnableTrans(uint8_t bEnableTrans)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetEnableTrans");
    struct
    {
        uint8_t bEnableTrans;
    } Parms{};
    Parms.bEnableTrans = (uint8_t)bEnableTrans;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayWeaponPendant(struct UModularWeaponDesc* WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayWeaponPendant");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayWeaponAutoBoundAdapter(struct UModularWeaponDesc* WeaponDesc, uint8_t bSwitchCameraEnabled, uint8_t IsMeleeWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayWeaponAutoBoundAdapter");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t bSwitchCameraEnabled;
        uint8_t IsMeleeWeapon;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.bSwitchCameraEnabled = (uint8_t)bSwitchCameraEnabled;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, struct FString SkinId, uint8_t IsMeleeWeapon, uint8_t bSwitchCameraEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        struct FString SkinId;
        uint8_t IsMeleeWeapon;
        uint8_t bSwitchCameraEnabled;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.SkinId = (struct FString)SkinId;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    Parms.bSwitchCameraEnabled = (uint8_t)bSwitchCameraEnabled;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayWatch(struct FString InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayWatch");
    struct
    {
        struct FString InItemID;
    } Parms{};
    Parms.InItemID = (struct FString)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayType(struct FString InDisplayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayType");
    struct
    {
        struct FString InDisplayType;
    } Parms{};
    Parms.InDisplayType = (struct FString)InDisplayType;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayPendant(struct UModularWeaponDesc* WeaponDesc, struct FString SkinId, uint8_t bSwitchCameraEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayPendant");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        struct FString SkinId;
        uint8_t bSwitchCameraEnabled;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.SkinId = (struct FString)SkinId;
    Parms.bSwitchCameraEnabled = (uint8_t)bSwitchCameraEnabled;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayItem(struct FString ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayItem");
    struct
    {
        struct FString ItemID;
    } Parms{};
    Parms.ItemID = (struct FString)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetDisplayHeroWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon, int64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetDisplayHeroWeapon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t IsMeleeWeapon;
        int64_t ItemID;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.IsMeleeWeapon = (uint8_t)IsMeleeWeapon;
    Parms.ItemID = (int64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::SetCanInteractState(uint8_t InCanInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "SetCanInteractState");
    struct
    {
        uint8_t InCanInteract;
    } Parms{};
    Parms.InCanInteract = (uint8_t)InCanInteract;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ResetWeaponCutScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ResetWeaponCutScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ResetWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ResetWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ResetToDefaultLight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ResetToDefaultLight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ResetGeneralLevelSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ResetGeneralLevelSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ResetDisplayItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ResetDisplayItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::PlayWeaponCutSceneByIndex(struct UModularWeaponDesc* InWeaponDesc, int32_t SequenceIndex, uint8_t bIsApplyOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "PlayWeaponCutSceneByIndex");
    struct
    {
        struct UModularWeaponDesc* InWeaponDesc;
        int32_t SequenceIndex;
        uint8_t bIsApplyOffset;
    } Parms{};
    Parms.InWeaponDesc = (struct UModularWeaponDesc*)InWeaponDesc;
    Parms.SequenceIndex = (int32_t)SequenceIndex;
    Parms.bIsApplyOffset = (uint8_t)bIsApplyOffset;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::PlayWeaponCutScene(struct UModularWeaponDesc* InWeaponDesc, uint8_t isMelee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "PlayWeaponCutScene");
    struct
    {
        struct UModularWeaponDesc* InWeaponDesc;
        uint8_t isMelee;
    } Parms{};
    Parms.InWeaponDesc = (struct UModularWeaponDesc*)InWeaponDesc;
    Parms.isMelee = (uint8_t)isMelee;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::PlaySequenceByRowName(struct FName InRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "PlaySequenceByRowName");
    struct
    {
        struct FName InRowName;
    } Parms{};
    Parms.InRowName = (struct FName)InRowName;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::OnDisplayWeaponSet(uint8_t bIsMelee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "OnDisplayWeaponSet");
    struct
    {
        uint8_t bIsMelee;
    } Parms{};
    Parms.bIsMelee = (uint8_t)bIsMelee;
    this->ProcessEvent(Func, &Parms);
}

struct FString AHallWeaponDisplayCtrl::GetWeaponDisplayType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "GetWeaponDisplayType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallWeaponDisplayCtrl::GetWeaponActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "GetWeaponActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AHallWeaponDisplayCtrl::GetSceneSkinExtraData(struct FCollectionWeaponData& InCollectionWeaponData, struct UModularWeaponDesc* WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "GetSceneSkinExtraData");
    struct
    {
        struct FCollectionWeaponData InCollectionWeaponData;
        struct UModularWeaponDesc* WeaponDesc;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    this->ProcessEvent(Func, &Parms);
    InCollectionWeaponData = Parms.InCollectionWeaponData;
    return Parms.ReturnValue;
}

uint8_t AHallWeaponDisplayCtrl::GetPendantExtraData(struct FCollectionWeaponData& InCollectionWeaponData, struct UModularWeaponDesc* WeaponDesc, struct FString ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "GetPendantExtraData");
    struct
    {
        struct FCollectionWeaponData InCollectionWeaponData;
        struct UModularWeaponDesc* WeaponDesc;
        struct FString ID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.ID = (struct FString)ID;
    this->ProcessEvent(Func, &Parms);
    InCollectionWeaponData = Parms.InCollectionWeaponData;
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate AHallWeaponDisplayCtrl::GetOnTouchPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "GetOnTouchPressed");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AHallWeaponDisplayCtrl::GetDisplayTargetActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "GetDisplayTargetActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHallWeaponDisplayCtrl::FocusWeaponNameArea(struct FString SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "FocusWeaponNameArea");
    struct
    {
        struct FString SkinId;
    } Parms{};
    Parms.SkinId = (struct FString)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::FitMeshToCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "FitMeshToCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::DisplayWeaponSkinScene(struct FString& InDisplayWeaponSkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "DisplayWeaponSkinScene");
    struct
    {
        struct FString InDisplayWeaponSkinId;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InDisplayWeaponSkinId = Parms.InDisplayWeaponSkinId;
}

void AHallWeaponDisplayCtrl::DestroyWatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "DestroyWatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ChangeWeaponName(struct FString InNewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ChangeWeaponName");
    struct
    {
        struct FString InNewName;
    } Parms{};
    Parms.InNewName = (struct FString)InNewName;
    this->ProcessEvent(Func, &Parms);
}

void AHallWeaponDisplayCtrl::ActivateWeaponLightGroup(uint64_t WeaponSkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplayCtrl", "ActivateWeaponLightGroup");
    struct
    {
        uint64_t WeaponSkinId;
    } Parms{};
    Parms.WeaponSkinId = (uint64_t)WeaponSkinId;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallWeaponDisplaySequenceComponent::* ----
void UHallWeaponDisplaySequenceComponent::UsePivotOffset(struct UModularWeaponDesc* InWeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplaySequenceComponent", "UsePivotOffset");
    struct
    {
        struct UModularWeaponDesc* InWeaponDesc;
    } Parms{};
    Parms.InWeaponDesc = (struct UModularWeaponDesc*)InWeaponDesc;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplaySequenceComponent::ResetPivot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplaySequenceComponent", "ResetPivot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplaySequenceComponent::PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplaySequenceComponent", "PostApplyWorldOffset");
    struct
    {
        struct UWorld* World;
        struct FIntVector IntVector1;
        struct FIntVector IntVector2;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IntVector1 = (struct FIntVector)IntVector1;
    Parms.IntVector2 = (struct FIntVector)IntVector2;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplaySequenceComponent::OnSequenceFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplaySequenceComponent", "OnSequenceFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponDisplaySequenceComponent::OnLoadWeaponCompleted(uint8_t bResult, int32_t SequenceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponDisplaySequenceComponent", "OnLoadWeaponCompleted");
    struct
    {
        uint8_t bResult;
        int32_t SequenceIndex;
    } Parms{};
    Parms.bResult = (uint8_t)bResult;
    Parms.SequenceIndex = (int32_t)SequenceIndex;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHallWeaponSkinSceneDisplayComponent::* ----
void UHallWeaponSkinSceneDisplayComponent::OnUnloadLatentActionCompleted(int32_t LinkID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponSkinSceneDisplayComponent", "OnUnloadLatentActionCompleted");
    struct
    {
        int32_t LinkID;
    } Parms{};
    Parms.LinkID = (int32_t)LinkID;
    this->ProcessEvent(Func, &Parms);
}

void UHallWeaponSkinSceneDisplayComponent::OnLoadLatentActionCompleted(int32_t LinkID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HallWeaponSkinSceneDisplayComponent", "OnLoadLatentActionCompleted");
    struct
    {
        int32_t LinkID;
    } Parms{};
    Parms.LinkID = (int32_t)LinkID;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHeroItemAnimInstance::* ----
void UHeroItemAnimInstance::SwitchTurnOnState(uint8_t bTurnOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HeroItemAnimInstance", "SwitchTurnOnState");
    struct
    {
        uint8_t bTurnOn;
    } Parms{};
    Parms.bTurnOn = (uint8_t)bTurnOn;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHeroItemAnimInstance::GetIsTurnedOn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HeroItemAnimInstance", "GetIsTurnedOn");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULuaLevelUtil::* ----
void ULuaLevelUtil::UnloadSettlement(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "UnloadSettlement");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelUtil::TestLuaCallPrint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "TestLuaCallPrint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelUtil::ShowLogoActor(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "ShowLogoActor");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelUtil::OnOpenSettlementSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "OnOpenSettlementSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelUtil::OnCloseSettlementSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "OnCloseSettlementSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelUtil::LoadSettlement(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "LoadSettlement");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelUtil::HideLogoActor(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelUtil", "HideLogoActor");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

// ---- ASandBoxMap::* ----
void ASandBoxMap::UnRegisterUIActor(int32_t Group, struct ASandBoxMapActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "UnRegisterUIActor");
    struct
    {
        int32_t Group;
        struct ASandBoxMapActor* Target;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.Target = (struct ASandBoxMapActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::UnregisterActor(int32_t Group, struct ASandBoxMapActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "UnregisterActor");
    struct
    {
        int32_t Group;
        struct ASandBoxMapActor* Target;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.Target = (struct ASandBoxMapActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SwitchToIndex(int32_t TargetIndex, struct FString Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SwitchToIndex");
    struct
    {
        int32_t TargetIndex;
        struct FString Type;
    } Parms{};
    Parms.TargetIndex = (int32_t)TargetIndex;
    Parms.Type = (struct FString)Type;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::StopGuideAnim(int32_t Group)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "StopGuideAnim");
    struct
    {
        int32_t Group;
    } Parms{};
    Parms.Group = (int32_t)Group;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::StopAnimByStartGame(int32_t Group)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "StopAnimByStartGame");
    struct
    {
        int32_t Group;
    } Parms{};
    Parms.Group = (int32_t)Group;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::StopAllSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "StopAllSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetTargetState(int32_t Index, ESandBoxMapState PrevState, ESandBoxMapState CurState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetTargetState");
    struct
    {
        int32_t Index;
        enum ESandBoxMapState PrevState;
        enum ESandBoxMapState CurState;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.PrevState = (enum ESandBoxMapState)PrevState;
    Parms.CurState = (enum ESandBoxMapState)CurState;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetMapLockStateInternal(int32_t maskId, uint8_t bIsLock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetMapLockStateInternal");
    struct
    {
        int32_t maskId;
        uint8_t bIsLock;
    } Parms{};
    Parms.maskId = (int32_t)maskId;
    Parms.bIsLock = (uint8_t)bIsLock;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetMapLockState(int32_t maskId, uint8_t bIsLock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetMapLockState");
    struct
    {
        int32_t maskId;
        uint8_t bIsLock;
    } Parms{};
    Parms.maskId = (int32_t)maskId;
    Parms.bIsLock = (uint8_t)bIsLock;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetHide(int32_t Group, uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetHide");
    struct
    {
        int32_t Group;
        uint8_t bHide;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetCameraPostionByPercent(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetCameraPostionByPercent");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetCameraParent(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetCameraParent");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SetActorState(int32_t Group, ESandBoxMapState State, ESandBoxMapModeType ModeType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SetActorState");
    struct
    {
        int32_t Group;
        enum ESandBoxMapState State;
        enum ESandBoxMapModeType ModeType;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.State = (enum ESandBoxMapState)State;
    Parms.ModeType = (enum ESandBoxMapModeType)ModeType;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::SelectTargetMode(int32_t Group, ESandBoxMapModeType ModeType, uint8_t bLocked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "SelectTargetMode");
    struct
    {
        int32_t Group;
        enum ESandBoxMapModeType ModeType;
        uint8_t bLocked;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.ModeType = (enum ESandBoxMapModeType)ModeType;
    Parms.bLocked = (uint8_t)bLocked;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::ScaleWidget(int32_t Index, float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "ScaleWidget");
    struct
    {
        int32_t Index;
        float Scale;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::ResetCameraPosition(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "ResetCameraPosition");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASandBoxMap::RemoveUIFollow(struct UUserWidget* UI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "RemoveUIFollow");
    struct
    {
        struct UUserWidget* UI;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UI = (struct UUserWidget*)UI;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASandBoxMap::RegisterUIActor(int32_t Group, struct ASandBoxMapActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "RegisterUIActor");
    struct
    {
        int32_t Group;
        struct ASandBoxMapActor* Target;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.Target = (struct ASandBoxMapActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::RegisterActor(int32_t Group, struct ASandBoxMapActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "RegisterActor");
    struct
    {
        int32_t Group;
        struct ASandBoxMapActor* Target;
    } Parms{};
    Parms.Group = (int32_t)Group;
    Parms.Target = (struct ASandBoxMapActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::RebindMaterialParametersAndPlay(struct ULevelSequence* Seq, int32_t maskId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "RebindMaterialParametersAndPlay");
    struct
    {
        struct ULevelSequence* Seq;
        int32_t maskId;
    } Parms{};
    Parms.Seq = (struct ULevelSequence*)Seq;
    Parms.maskId = (int32_t)maskId;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayUnlockSeq(int32_t maskId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayUnlockSeq");
    struct
    {
        int32_t maskId;
    } Parms{};
    Parms.maskId = (int32_t)maskId;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayTargetUnlock(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayTargetUnlock");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayPOIToPOISeq(struct FVector StopPos, struct FRotator StopRot, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayPOIToPOISeq");
    struct
    {
        struct FVector StopPos;
        struct FRotator StopRot;
        int32_t Index;
    } Parms{};
    Parms.StopPos = (struct FVector)StopPos;
    Parms.StopRot = (struct FRotator)StopRot;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayPOIToDetailSeq(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayPOIToDetailSeq");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayMapInSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayMapInSeq");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayGuideAnim(int32_t Group)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayGuideAnim");
    struct
    {
        int32_t Group;
    } Parms{};
    Parms.Group = (int32_t)Group;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::PlayDetailToPOISeq(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "PlayDetailToPOISeq");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::OnUnlockSeqFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "OnUnlockSeqFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::OnTargetChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "OnTargetChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::LeaveSandBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "LeaveSandBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASandBoxMap::IsPlayingSeq()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "IsPlayingSeq");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ASandBoxMap::IsCameraMoving()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "IsCameraMoving");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASandBoxMap::InitTargetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "InitTargetState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMap::InitSequenceParameterData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "InitSequenceParameterData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* ASandBoxMap::GetUIWidget(int32_t Group)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "GetUIWidget");
    struct
    {
        int32_t Group;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.Group = (int32_t)Group;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ASandBoxMap* ASandBoxMap::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SandBoxMap", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct ASandBoxMap* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASandBoxMap::EnterSandBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "EnterSandBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASandBoxMap::CheckIsClickUI(const struct FVector2D& ScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "CheckIsClickUI");
    struct
    {
        struct FVector2D ScreenPos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ScreenPos = (struct FVector2D)ScreenPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ASandBoxMap::AddUIFollowSubLevel(struct UUserWidget* UI, int32_t TargetIndex, int32_t subLevelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "AddUIFollowSubLevel");
    struct
    {
        struct UUserWidget* UI;
        int32_t TargetIndex;
        int32_t subLevelIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UI = (struct UUserWidget*)UI;
    Parms.TargetIndex = (int32_t)TargetIndex;
    Parms.subLevelIndex = (int32_t)subLevelIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ASandBoxMap::AddUIFollowMainTarget(struct UUserWidget* UI, int32_t TargetIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "AddUIFollowMainTarget");
    struct
    {
        struct UUserWidget* UI;
        int32_t TargetIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UI = (struct UUserWidget*)UI;
    Parms.TargetIndex = (int32_t)TargetIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASandBoxMap::AddUIFollow(struct UUserWidget* UI, struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMap", "AddUIFollow");
    struct
    {
        struct UUserWidget* UI;
        struct AActor* Target;
    } Parms{};
    Parms.UI = (struct UUserWidget*)UI;
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

// ---- ASandBoxMapActor::* ----
void ASandBoxMapActor::SwitchActorState(ESandBoxMapState SwitchState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "SwitchActorState");
    struct
    {
        enum ESandBoxMapState SwitchState;
    } Parms{};
    Parms.SwitchState = (enum ESandBoxMapState)SwitchState;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::StopGuideAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "StopGuideAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::StopAnimByStartGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "StopAnimByStartGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::SetOpacity(uint8_t bOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "SetOpacity");
    struct
    {
        uint8_t bOpacity;
    } Parms{};
    Parms.bOpacity = (uint8_t)bOpacity;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::SetHide(uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "SetHide");
    struct
    {
        uint8_t bHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::SetActorState(ESandBoxMapState State, ESandBoxMapModeType ModeType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "SetActorState");
    struct
    {
        enum ESandBoxMapState State;
        enum ESandBoxMapModeType ModeType;
    } Parms{};
    Parms.State = (enum ESandBoxMapState)State;
    Parms.ModeType = (enum ESandBoxMapModeType)ModeType;
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::PlayGuideAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "PlayGuideAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::PlayActorUnlockAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "PlayActorUnlockAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::LeaveSandBoxMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "LeaveSandBoxMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASandBoxMapActor::GetIsHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "GetIsHide");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASandBoxMapActor::EnterSandBoxMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "EnterSandBoxMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASandBoxMapActor::ChangeActorState(int32_t PrevIndex, int32_t CurIndex, ESandBoxMapState PrevState, ESandBoxMapState CurState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SandBoxMapActor", "ChangeActorState");
    struct
    {
        int32_t PrevIndex;
        int32_t CurIndex;
        enum ESandBoxMapState PrevState;
        enum ESandBoxMapState CurState;
    } Parms{};
    Parms.PrevIndex = (int32_t)PrevIndex;
    Parms.CurIndex = (int32_t)CurIndex;
    Parms.PrevState = (enum ESandBoxMapState)PrevState;
    Parms.CurState = (enum ESandBoxMapState)CurState;
    this->ProcessEvent(Func, &Parms);
}

// ---- ASyncMap::* ----
void ASyncMap::StopTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SyncMap", "StopTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASyncMap::StartTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SyncMap", "StartTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ASyncMap* ASyncMap::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SyncMap", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct ASyncMap* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
