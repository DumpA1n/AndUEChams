#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: SafeHouse
// Enums: 6
// Structs: 7
// Classes: 31

struct AActor;
struct ACHARACTER;
struct ADFMCharacter;
struct ADFMRangeTargetCharacter;
struct ADFMWeapon;
struct AExponentialHeightFog;
struct AGPCharacterBase;
struct AGPSplinePath;
struct AInventoryPickup;
struct AWeaponBase;
enum class EEndPlayReason : uint8_t;
enum class EIconState : uint8_t;
enum class EShowCabinetType : uint8_t;
enum class ESlateVisibility : uint8_t;
struct UAnimMontage;
struct UAnimSequenceBase;
struct UBoxComponent;
struct UButton;
struct UCameraComponent;
struct UCameraShake;
struct UCanvasPanel;
struct UCurveFloat;
struct UGPAudioEventAsset;
struct UImage;
struct UInventoryManager;
struct UMaterialInterface;
struct UParticleSystemComponent;
struct USkeletalMeshComponent;
struct USlider;
struct USphereComponent;
struct UTimelineComponent;
struct UUserWidget;
struct UWeaponManagerComponent;
struct UWidget;
struct UWidgetAnimation;
struct UWidgetComponent;
struct FNPCUIInfo;
struct FBuildingUIInfo;
struct FSafeHouseAreaInfoRow;
struct FSafeHouseAreaLevelRow;
struct FSafeHouseBuildingCondition;
struct FSavedTrans;
struct FRangeTargetConfig;
struct UAnimNotify_ResetWeapon;
struct UCollectionRoomPickupActorManager;
struct ACollectionRoomPickupPlaceActor;
struct ACollectionRoomWeaponCabinet;
struct AInteractor_CollectionRoomPutback;
struct UInteractorExecutor_Rewarehouse;
struct UInteractorExecutor_SinglePutback;
struct UIrisSafeHouseInteractorDepartmentTitle;
struct UIrisSafeHouseInteractorIcon;
struct UIrisSafeHouseInteractorNPCIcon;
struct UIrisSafeHouseInteractorOperate;
struct UIrisSafeHouseInteractorView;
struct URaidSelectMap;
struct ASafeHouseBuilding;
struct ASafeHouseBuildingProxy;
struct ASafeHouseDepartment;
struct USafeHouseGameplayDelegates;
struct USafeHouseGameplayUtils;
struct USafeHouseInteractorCommonView;
struct ASafeHouseLightCtrl;
struct ASafeHouseRangeData;
struct USafeHouseRangeUtil;
struct USHBuildingCameraComponent;
struct USHBuildingWhiteDotComponent;
struct USHInteractorBaseComponent;
struct USHInteractorNPCComponent;
struct USHInteractorBasePattern;
struct USHInteractorOpenUIPattern;
struct USHInteractorPlayDialoguePattern;
struct USHInteractorCallFunctionPattern;
struct UNewIrisSafeHouseInteractorView;

// Object: Enum SafeHouse.ECollectionRoomPutbackType
enum class ECollectionRoomPutbackType : uint8_t
{
	SKU = 0,
	WeaponRackWall = 1,
	WeaponRackDesk = 2,
	ECollectionRoomPutbackType_MAX = 3
};

// Object: Enum SafeHouse.DepartmentTitleState
enum class EDepartmentTitleState : uint8_t
{
	None = 0,
	Hide = 1,
	Show = 2,
	DepartmentTitleState_MAX = 3
};

// Object: Enum SafeHouse.NPCIconState
enum class ENPCIconState : uint8_t
{
	None = 0,
	Hide = 1,
	ShowName = 2,
	NPCIconState_MAX = 3
};

// Object: Enum SafeHouse.SafeHouseDepartmentType
enum class ESafeHouseDepartmentType : uint8_t
{
	None = 0,
	RD = 1,
	Combat = 2,
	Med = 3,
	TE = 4,
	Tactical = 5,
	SafeHouseDepartmentType_MAX = 6
};

// Object: Enum SafeHouse.SafeHouseNPCType
enum class ESafeHouseNPCType : uint8_t
{
	None = 0,
	CommonNPC = 1,
	Insurance = 2,
	Merchant = 3,
	Scavenger = 4,
	SafeHouseNPCType_MAX = 5
};

// Object: Enum SafeHouse.SafeHouseInteractiveType
enum class ESafeHouseInteractiveType : uint8_t
{
	None = 0,
	OpenUI = 1,
	PlayDialogue = 2,
	CallFunction = 3,
	SafeHouseInteractiveType_MAX = 4
};

// Object: ScriptStruct SafeHouse.NPCUIInfo
// Size: 0x10 (Inherited: 0x0)
struct FNPCUIInfo
{
	struct TWeakObjectPtr<struct UIrisSafeHouseInteractorNPCIcon> UI; // 0x0(0x8)
	struct TWeakObjectPtr<struct USHInteractorNPCComponent> NPCCmp; // 0x8(0x8)
};

// Object: ScriptStruct SafeHouse.BuildingUIInfo
// Size: 0x8 (Inherited: 0x0)
struct FBuildingUIInfo
{
	struct TWeakObjectPtr<struct ASafeHouseBuildingProxy> BuildingIns; // 0x0(0x8)
};

// Object: ScriptStruct SafeHouse.SafeHouseAreaInfoRow
// Size: 0x98 (Inherited: 0x10)
struct FSafeHouseAreaInfoRow : FDescRowBase
{
	int32_t AreaID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText AreaName; // 0x18(0x18)
	int32_t MaxLevel; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString Levels_1; // 0x38(0x10)
	struct FString UnlockCondition_1; // 0x48(0x10)
	struct FString Levels_2; // 0x58(0x10)
	struct FString UnlockCondition_2; // 0x68(0x10)
	struct FString Levels_3; // 0x78(0x10)
	struct FString UnlockCondition_3; // 0x88(0x10)
};

// Object: ScriptStruct SafeHouse.SafeHouseAreaLevelRow
// Size: 0x50 (Inherited: 0x10)
struct FSafeHouseAreaLevelRow : FDescRowBase
{
	struct FText AreaName; // 0x10(0x18)
	int32_t Level; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FString> Levels; // 0x30(0x10)
	struct TArray<struct FSafeHouseBuildingCondition> Conditions; // 0x40(0x10)
};

// Object: ScriptStruct SafeHouse.SafeHouseBuildingCondition
// Size: 0x8 (Inherited: 0x0)
struct FSafeHouseBuildingCondition
{
	int32_t BuildingId; // 0x0(0x4)
	int32_t BuildingLevel; // 0x4(0x4)
};

// Object: ScriptStruct SafeHouse.SavedTrans
// Size: 0x30 (Inherited: 0x0)
struct FSavedTrans
{
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector translation; // 0x10(0xC)
	struct FVector Scale3D; // 0x1C(0xC)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct SafeHouse.RangeTargetConfig
// Size: 0x40 (Inherited: 0x0)
struct FRangeTargetConfig
{
	struct ADFMRangeTargetCharacter* RangeTarget; // 0x0(0x8)
	struct AActor* RangeTargetParent; // 0x8(0x8)
	struct AGPSplinePath* RefSplinePath; // 0x10(0x8)
	uint8_t bMelee : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float StartDistance; // 0x1C(0x4)
	float EndDistance; // 0x20(0x4)
	float DefaultDistance; // 0x24(0x4)
	int32_t HealthLvl; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	uint64_t DefaultHelmet; // 0x30(0x8)
	uint64_t DefaultBreastPlate; // 0x38(0x8)
};

// Object: Class SafeHouse.AnimNotify_ResetWeapon
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_ResetWeapon : UAnimNotify
{	DEFINE_UE_CLASS_HELPERS(UAnimNotify_ResetWeapon, "AnimNotify_ResetWeapon")

};

// Object: Class SafeHouse.CollectionRoomPickupActorManager
// Size: 0x1C0 (Inherited: 0x30)
struct UCollectionRoomPickupActorManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x190]; // 0x30(0x190)


	// Object: Function SafeHouse.CollectionRoomPickupActorManager.ResetPickupActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15104c28
	// Params: [ Num(4) Size(0xD) ]
	void ResetPickupActor(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID, uint8_t bPutBack);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.ResetGridIdToUVMap
	// Flags: [Final|Native|Public]
	// Offset: 0x15104c14
	// Params: [ Num(0) Size(0x0) ]
	void ResetGridIdToUVMap();

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.RemoveCollectionItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15104afc
	// Params: [ Num(3) Size(0xC) ]
	void RemoveCollectionItem(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.RemoveAllCollectionItems
	// Flags: [Final|Native|Public]
	// Offset: 0x15104ae8
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllCollectionItems();

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.RemoveAllAdapterPickups
	// Flags: [Final|Native|Public]
	// Offset: 0x15104ad4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllAdapterPickups();

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.IsPickupActorsNeedReset
	// Flags: [Final|Native|Public]
	// Offset: 0x151049b0
	// Params: [ Num(4) Size(0xD) ]
	uint8_t IsPickupActorsNeedReset(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.HasPickupActorsNeedReset
	// Flags: [Final|Native|Public]
	// Offset: 0x15104978
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasPickupActorsNeedReset();

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.GetPlaceActorByCabinetAndGrid
	// Flags: [Final|Native|Public]
	// Offset: 0x15104858
	// Params: [ Num(4) Size(0x18) ]
	struct ACollectionRoomPickupPlaceActor* GetPlaceActorByCabinetAndGrid(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.GetPickupActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15104738
	// Params: [ Num(4) Size(0x18) ]
	struct AInventoryPickup* GetPickupActor(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.GetDisplayCabinetTextureUVByGrid
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x151045e4
	// Params: [ Num(3) Size(0xC) ]
	void GetDisplayCabinetTextureUVByGrid(const int32_t& GridID, int32_t& U, int32_t& V);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.GetAllWeaponCabinetWeaponNeedReset
	// Flags: [Final|Native|Public]
	// Offset: 0x1510454c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetAllWeaponCabinetWeaponNeedReset();

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x151044a8
	// Params: [ Num(2) Size(0x10) ]
	static struct UCollectionRoomPickupActorManager* Get(struct UObject* WorldContextObj);

	// Object: Function SafeHouse.CollectionRoomPickupActorManager.ClearItemInventoryInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x15104494
	// Params: [ Num(0) Size(0x0) ]
	void ClearItemInventoryInfo();
	DEFINE_UE_CLASS_HELPERS(UCollectionRoomPickupActorManager, "CollectionRoomPickupActorManager")

};

// Object: Class SafeHouse.CollectionRoomPickupPlaceActor
// Size: 0x390 (Inherited: 0x370)
struct ACollectionRoomPickupPlaceActor : AActor
{
	EShowCabinetType CabinetType; // 0x370(0x4)
	int32_t CabinetId; // 0x374(0x4)
	int32_t GridID; // 0x378(0x4)
	uint8_t bIsWeaponCabinet : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	uint8_t Pad_0x37D[0x3]; // 0x37D(0x3)
	int32_t U; // 0x380(0x4)
	int32_t V; // 0x384(0x4)
	uint64_t ItemGid; // 0x388(0x8)
	DEFINE_UE_CLASS_HELPERS(ACollectionRoomPickupPlaceActor, "CollectionRoomPickupPlaceActor")

};

// Object: Class SafeHouse.CollectionRoomWeaponCabinet
// Size: 0x370 (Inherited: 0x370)
struct ACollectionRoomWeaponCabinet : AActor
{

	// Object: Function SafeHouse.CollectionRoomWeaponCabinet.SetToIdlePose
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SetToIdlePose();

	// Object: Function SafeHouse.CollectionRoomWeaponCabinet.Rewarehouse
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Rewarehouse();

	// Object: Function SafeHouse.CollectionRoomWeaponCabinet.IsRewarehousing
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x15104dc8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRewarehousing();
	DEFINE_UE_CLASS_HELPERS(ACollectionRoomWeaponCabinet, "CollectionRoomWeaponCabinet")

};

// Object: Class SafeHouse.Interactor_CollectionRoomPutback
// Size: 0x1080 (Inherited: 0x1050)
struct AInteractor_CollectionRoomPutback : AInteractorBaseProxy
{
	ECollectionRoomPutbackType PutbackType; // 0x104D(0x1)
	struct TSoftObjectPtr<ACollectionRoomPickupPlaceActor> ConfiguredPlaceActor; // 0x1050(0x28)
	struct ACollectionRoomPickupPlaceActor* PlaceActor; // 0x1078(0x8)


	// Object: Function SafeHouse.Interactor_CollectionRoomPutback.ShouldShowPutbackTips
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15104e94
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldShowPutbackTips();

	// Object: Function SafeHouse.Interactor_CollectionRoomPutback.PutbackItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15104e80
	// Params: [ Num(0) Size(0x0) ]
	void PutbackItem();
	DEFINE_UE_CLASS_HELPERS(AInteractor_CollectionRoomPutback, "Interactor_CollectionRoomPutback")

};

// Object: Class SafeHouse.InteractorExecutor_Rewarehouse
// Size: 0xF0 (Inherited: 0xF0)
struct UInteractorExecutor_Rewarehouse : UInteractorBaseExecutor
{	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_Rewarehouse, "InteractorExecutor_Rewarehouse")

};

// Object: Class SafeHouse.InteractorExecutor_SinglePutback
// Size: 0x1B8 (Inherited: 0xF0)
struct UInteractorExecutor_SinglePutback : UInteractorBaseExecutor
{
	struct TSoftObjectPtr<UAnimSequenceBase> FPPAnimationPath; // 0xF0(0x28)
	float ItemPutbackDelay; // 0x118(0x4)
	float WeaponRestoreDelay; // 0x11C(0x4)
	float FPPBlendInTime; // 0x120(0x4)
	float FPPBlendOutTime; // 0x124(0x4)
	struct TMap<ECollectionRoomPutbackType, struct UGPAudioEventAsset*> PutbackAudioEventMap; // 0x128(0x50)
	uint8_t Pad_0x178[0x18]; // 0x178(0x18)
	struct UAnimMontage* CachedAnimMontage; // 0x190(0x8)
	struct TWeakObjectPtr<struct AInteractor_CollectionRoomPutback> CachedPutbackInteractor; // 0x198(0x8)
	struct TWeakObjectPtr<struct ACHARACTER> CachedOperatorCharacter; // 0x1A0(0x8)
	uint8_t Pad_0x1A8[0x10]; // 0x1A8(0x10)


	// Object: Function SafeHouse.InteractorExecutor_SinglePutback.OnWeaponChangeInterrupt
	// Flags: [Final|Native|Protected]
	// Offset: 0x15104f14
	// Params: [ Num(3) Size(0x18) ]
	void OnWeaponChangeInterrupt(struct AGPCharacterBase* GPCharacterBase, struct AWeaponBase* OldWeapon, struct AWeaponBase* NewWeapon);

	// Object: Function SafeHouse.InteractorExecutor_SinglePutback.OnNewInteractKeyDown
	// Flags: [Final|Native|Protected]
	// Offset: 0x15104f00
	// Params: [ Num(0) Size(0x0) ]
	void OnNewInteractKeyDown();

	// Object: Function SafeHouse.InteractorExecutor_SinglePutback.OnFiringInterrupt
	// Flags: [Final|Native|Protected]
	// Offset: 0x15104eec
	// Params: [ Num(0) Size(0x0) ]
	void OnFiringInterrupt();
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_SinglePutback, "InteractorExecutor_SinglePutback")

};

// Object: Class SafeHouse.IrisSafeHouseInteractorDepartmentTitle
// Size: 0x318 (Inherited: 0x2F8)
struct UIrisSafeHouseInteractorDepartmentTitle : UUserWidget
{
	struct UWidgetAnimation* WBP_Title_in; // 0x2F8(0x8)
	struct UWidgetAnimation* WBP_Title_out; // 0x300(0x8)
	uint8_t bCanPlayAnim : 1; // 0x308(0x1), Mask(0x1)
	uint8_t BitPad_0x308_1 : 7; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct UWidgetAnimation* AnimationToPlay; // 0x310(0x8)


	// Object: Function SafeHouse.IrisSafeHouseInteractorDepartmentTitle.SetInfo
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x30) ]
	void SetInfo(struct FSoftObjectPath IconImgPath, const struct FText& Name);
	DEFINE_UE_CLASS_HELPERS(UIrisSafeHouseInteractorDepartmentTitle, "IrisSafeHouseInteractorDepartmentTitle")

};

// Object: Class SafeHouse.IrisSafeHouseInteractorIcon
// Size: 0x328 (Inherited: 0x2F8)
struct UIrisSafeHouseInteractorIcon : UUserWidget
{
	struct UWidgetAnimation* AnimationToPlay; // 0x2F8(0x8)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_Icon_in; // 0x300(0x8)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_Icon_out; // 0x308(0x8)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_name_in; // 0x310(0x8)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_name_out; // 0x318(0x8)
	uint8_t bCanPlayAnim : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t bEnableLog : 1; // 0x321(0x1), Mask(0x1)
	uint8_t BitPad_0x321_1 : 7; // 0x321(0x1)
	uint8_t Pad_0x322[0x6]; // 0x322(0x6)


	// Object: Function SafeHouse.IrisSafeHouseInteractorIcon.SetVisibilityByOpacity
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetVisibilityByOpacity(float Opacity);

	// Object: Function SafeHouse.IrisSafeHouseInteractorIcon.SetUIVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15105660
	// Params: [ Num(1) Size(0x1) ]
	void SetUIVisibility(ESlateVisibility State);

	// Object: Function SafeHouse.IrisSafeHouseInteractorIcon.SetInfo
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(5) Size(0x64) ]
	void SetInfo(struct FSoftObjectPath IconImgPath, const struct FText& Name, const struct FText& DeviceLevel, const struct FText& CapDeviceLevel, int32_t Type);

	// Object: Function SafeHouse.IrisSafeHouseInteractorIcon.PlayCurrentAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510564c
	// Params: [ Num(0) Size(0x0) ]
	void PlayCurrentAnim();

	// Object: Function SafeHouse.IrisSafeHouseInteractorIcon.GetCurState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15105618
	// Params: [ Num(1) Size(0x1) ]
	EIconState GetCurState();
	DEFINE_UE_CLASS_HELPERS(UIrisSafeHouseInteractorIcon, "IrisSafeHouseInteractorIcon")

};

// Object: Class SafeHouse.IrisSafeHouseInteractorNPCIcon
// Size: 0x318 (Inherited: 0x2F8)
struct UIrisSafeHouseInteractorNPCIcon : UUserWidget
{
	struct UWidgetAnimation* AnimationToPlay; // 0x2F8(0x8)
	struct UWidgetAnimation* WBP_Interaction_Npc_in_1; // 0x300(0x8)
	struct UWidgetAnimation* WBP_Interaction_Npc_out_1; // 0x308(0x8)
	uint8_t bCanPlayAnim : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t Pad_0x311[0x7]; // 0x311(0x7)


	// Object: Function SafeHouse.IrisSafeHouseInteractorNPCIcon.SetUIVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x151059d0
	// Params: [ Num(1) Size(0x1) ]
	void SetUIVisibility(ESlateVisibility State);

	// Object: Function SafeHouse.IrisSafeHouseInteractorNPCIcon.SetInfo
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x30) ]
	void SetInfo(struct FSoftObjectPath IconImgPath, const struct FText& Name);

	// Object: Function SafeHouse.IrisSafeHouseInteractorNPCIcon.GetCurState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510599c
	// Params: [ Num(1) Size(0x1) ]
	ENPCIconState GetCurState();
	DEFINE_UE_CLASS_HELPERS(UIrisSafeHouseInteractorNPCIcon, "IrisSafeHouseInteractorNPCIcon")

};

// Object: Class SafeHouse.IrisSafeHouseInteractorOperate
// Size: 0x308 (Inherited: 0x2F8)
struct UIrisSafeHouseInteractorOperate : UUserWidget
{
	struct UWidget* OperatePanel; // 0x2F8(0x8)
	struct UCanvasPanel* Content; // 0x300(0x8)


	// Object: Function SafeHouse.IrisSafeHouseInteractorOperate.RefreshUI
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void RefreshUI(int32_t BuidingID);
	DEFINE_UE_CLASS_HELPERS(UIrisSafeHouseInteractorOperate, "IrisSafeHouseInteractorOperate")

};

// Object: Class SafeHouse.IrisSafeHouseInteractorView
// Size: 0x6A0 (Inherited: 0x668)
struct UIrisSafeHouseInteractorView : ULuaUIHudBaseView
{
	struct TArray<struct FBuildingUIInfo> BuildingInfos; // 0x668(0x10)
	struct TArray<struct FNPCUIInfo> NPCInfos; // 0x678(0x10)
	struct UIrisSafeHouseInteractorOperate* OperateView; // 0x688(0x8)
	struct UCanvasPanel* IconContainer; // 0x690(0x8)
	uint8_t Pad_0x698[0x8]; // 0x698(0x8)


	// Object: Function SafeHouse.IrisSafeHouseInteractorView.RemoveNPCICON
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveNPCICON(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.IrisSafeHouseInteractorView.RemoveInteractorCmp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15105c80
	// Params: [ Num(1) Size(0x8) ]
	void RemoveInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.IrisSafeHouseInteractorView.RemoveBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15105bdc
	// Params: [ Num(1) Size(0x8) ]
	void RemoveBuilding(struct ASafeHouseBuildingProxy* BuildingIns);

	// Object: Function SafeHouse.IrisSafeHouseInteractorView.AddNPCICON
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct UIrisSafeHouseInteractorNPCIcon* AddNPCICON(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.IrisSafeHouseInteractorView.AddInteractorCmp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15105b38
	// Params: [ Num(1) Size(0x8) ]
	void AddInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.IrisSafeHouseInteractorView.AddBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15105a94
	// Params: [ Num(1) Size(0x8) ]
	void AddBuilding(struct ASafeHouseBuildingProxy* BuildingIns);
	DEFINE_UE_CLASS_HELPERS(UIrisSafeHouseInteractorView, "IrisSafeHouseInteractorView")

};

// Object: Class SafeHouse.RaidSelectMap
// Size: 0x6F8 (Inherited: 0x610)
struct URaidSelectMap : ULuaUIBaseView
{
	uint8_t Pad_0x610[0x8]; // 0x610(0x8)
	float ScaleConfig; // 0x618(0x4)
	uint8_t Pad_0x61C[0x30]; // 0x61C(0x30)
	float GoSpeed; // 0x64C(0x4)
	struct FVector2D DefaultMapSize; // 0x650(0x8)
	uint8_t Pad_0x658[0x18]; // 0x658(0x18)
	struct UImage* MapBase; // 0x670(0x8)
	struct UWidget* MapPanel; // 0x678(0x8)
	struct UCanvasPanel* MapItemContainer; // 0x680(0x8)
	struct UWidget* RootCanvas; // 0x688(0x8)
	struct UButton* ScaleUpBtn; // 0x690(0x8)
	struct UButton* ScaleDownBtn; // 0x698(0x8)
	struct USlider* ScaleSlider; // 0x6A0(0x8)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UUserWidget>> MapItemDic; // 0x6A8(0x50)


	// Object: Function SafeHouse.RaidSelectMap.RemoveMapItem
	// Flags: [Final|Native|Protected]
	// Offset: 0x15106168
	// Params: [ Num(2) Size(0x18) ]
	struct UUserWidget* RemoveMapItem(struct FString Name);

	// Object: Function SafeHouse.RaidSelectMap.OnSliderValueChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x151060c4
	// Params: [ Num(1) Size(0x4) ]
	void OnSliderValueChanged(float Value);

	// Object: Function SafeHouse.RaidSelectMap.OnSliderUpButtonClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x151060b0
	// Params: [ Num(0) Size(0x0) ]
	void OnSliderUpButtonClicked();

	// Object: Function SafeHouse.RaidSelectMap.OnSliderDownButtonClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x1510609c
	// Params: [ Num(0) Size(0x0) ]
	void OnSliderDownButtonClicked();

	// Object: Function SafeHouse.RaidSelectMap.GoToMapItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15105fa4
	// Params: [ Num(1) Size(0x10) ]
	void GoToMapItem(struct FString Name);

	// Object: Function SafeHouse.RaidSelectMap.GetMapItem
	// Flags: [Final|Native|Protected]
	// Offset: 0x15105ea4
	// Params: [ Num(2) Size(0x18) ]
	struct UUserWidget* GetMapItem(struct FString Name);

	// Object: Function SafeHouse.RaidSelectMap.AddMapItem
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x15105d38
	// Params: [ Num(3) Size(0x20) ]
	void AddMapItem(struct FString Name, struct UUserWidget* UI, struct FVector2D Position);
	DEFINE_UE_CLASS_HELPERS(URaidSelectMap, "RaidSelectMap")

};

// Object: Class SafeHouse.SafeHouseBuilding
// Size: 0x3E0 (Inherited: 0x370)
struct ASafeHouseBuilding : AActor
{
	struct USHBuildingCameraComponent* CameraCmp; // 0x370(0x8)
	struct USHBuildingWhiteDotComponent* WhiteDotCmp; // 0x378(0x8)
	struct UParticleSystemComponent* UpgradeParticleCmp; // 0x380(0x8)
	struct UBoxComponent* BoxCmp; // 0x388(0x8)
	struct UIrisSafeHouseInteractorIcon* Interaction3DTipWidget; // 0x390(0x8)
	struct UIrisSafeHouseInteractorIcon* Interaction3DTipBgWidget; // 0x398(0x8)
	struct UWidgetComponent* Interaction3DTipWidgetCmp; // 0x3A0(0x8)
	struct UWidgetComponent* Interaction3DTipBgWidgetCmp; // 0x3A8(0x8)
	struct UBoxComponent* TriggerBoxCmp; // 0x3B0(0x8)
	uint8_t Pad_0x3B8[0x10]; // 0x3B8(0x10)
	float ThresholdAngle; // 0x3C8(0x4)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	struct UTimelineComponent* Timeline; // 0x3D0(0x8)
	struct UCurveFloat* FloatCurve; // 0x3D8(0x8)


	// Object: Function SafeHouse.SafeHouseBuilding.TimelineFinishedCallBack
	// Flags: [Final|Native|Private]
	// Offset: 0x15106a78
	// Params: [ Num(0) Size(0x0) ]
	void TimelineFinishedCallBack();

	// Object: Function SafeHouse.SafeHouseBuilding.TimelineCallBack
	// Flags: [Final|Native|Private]
	// Offset: 0x151069d4
	// Params: [ Num(1) Size(0x4) ]
	void TimelineCallBack(float Interval);

	// Object: Function SafeHouse.SafeHouseBuilding.SetupWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x151069c0
	// Params: [ Num(0) Size(0x0) ]
	void SetupWidget();

	// Object: Function SafeHouse.SafeHouseBuilding.SetUIVisibilityByOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510691c
	// Params: [ Num(1) Size(0x4) ]
	void SetUIVisibilityByOpacity(float Opacity);

	// Object: Function SafeHouse.SafeHouseBuilding.SetUIVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15106878
	// Params: [ Num(1) Size(0x1) ]
	void SetUIVisibility(ESlateVisibility State);

	// Object: Function SafeHouse.SafeHouseBuilding.SetTurningData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15106798
	// Params: [ Num(2) Size(0xC) ]
	void SetTurningData(struct UCurveFloat* Curve, float Angle);

	// Object: Function SafeHouse.SafeHouseBuilding.SetCanPlayAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x151066ec
	// Params: [ Num(1) Size(0x1) ]
	void SetCanPlayAnim(uint8_t bCanPlay);

	// Object: Function SafeHouse.SafeHouseBuilding.SetBuldingInteractRot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15106648
	// Params: [ Num(1) Size(0xC) ]
	void SetBuldingInteractRot(struct FRotator NewRot);

	// Object: Function SafeHouse.SafeHouseBuilding.SetAnimState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimState(int32_t State);

	// Object: Function SafeHouse.SafeHouseBuilding.Set3DUIMaterials
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15106550
	// Params: [ Num(1) Size(0x10) ]
	void Set3DUIMaterials(struct TArray<struct UMaterialInterface*> Materials);

	// Object: Function SafeHouse.SafeHouseBuilding.PlayTurningAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510653c
	// Params: [ Num(0) Size(0x0) ]
	void PlayTurningAnim();

	// Object: Function SafeHouse.SafeHouseBuilding.PlayMeshEffectManually
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PlayMeshEffectManually();

	// Object: Function SafeHouse.SafeHouseBuilding.PlayMeshEffect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PlayMeshEffect();

	// Object: Function SafeHouse.SafeHouseBuilding.OnEndInteract
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndInteract();

	// Object: Function SafeHouse.SafeHouseBuilding.OnBeginInteract
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginInteract();

	// Object: Function SafeHouse.SafeHouseBuilding.GetShakeClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15106508
	// Params: [ Num(1) Size(0x8) ]
	struct UCameraShake* GetShakeClass();

	// Object: Function SafeHouse.SafeHouseBuilding.GetIntersetBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x151064d4
	// Params: [ Num(1) Size(0x8) ]
	struct UBoxComponent* GetIntersetBox();

	// Object: Function SafeHouse.SafeHouseBuilding.GetIcon2DOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x151064a0
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetIcon2DOffset();

	// Object: Function SafeHouse.SafeHouseBuilding.GetBuldingInteractRot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15106468
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetBuldingInteractRot();

	// Object: Function SafeHouse.SafeHouseBuilding.GetBuldingInteractLoc
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15106430
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBuldingInteractLoc();
	DEFINE_UE_CLASS_HELPERS(ASafeHouseBuilding, "SafeHouseBuilding")

};

// Object: Class SafeHouse.SafeHouseBuildingProxy
// Size: 0x448 (Inherited: 0x370)
struct ASafeHouseBuildingProxy : AActor
{
	struct ASafeHouseBuilding* BuildingIns; // 0x370(0x8)
	struct USphereComponent* WhiteDotSphereCmp; // 0x378(0x8)
	struct UCameraComponent* CameraCmp; // 0x380(0x8)
	struct UCameraShake* CurShakeClass; // 0x388(0x8)
	float CameraBlendTime; // 0x390(0x4)
	int32_t BuildingId; // 0x394(0x4)
	struct TMap<int32_t, struct FSavedTrans> BuildingTrans; // 0x398(0x50)
	struct FVector2D Icon2DOffset; // 0x3E8(0x8)
	float MinDistToShow; // 0x3F0(0x4)
	float ShowNameDist; // 0x3F4(0x4)
	float ShowIconDist; // 0x3F8(0x4)
	float MinHeightDiffToInteract; // 0x3FC(0x4)
	uint8_t bEnable3DUI : 1; // 0x400(0x1), Mask(0x1)
	uint8_t BitPad_0x400_1 : 7; // 0x400(0x1)
	uint8_t bEnableInteraction : 1; // 0x401(0x1), Mask(0x1)
	uint8_t BitPad_0x401_1 : 7; // 0x401(0x1)
	uint8_t bEnableUIRotation : 1; // 0x402(0x1), Mask(0x1)
	uint8_t BitPad_0x402_1 : 7; // 0x402(0x1)
	uint8_t bMeshVisible : 1; // 0x403(0x1), Mask(0x1)
	uint8_t BitPad_0x403_1 : 7; // 0x403(0x1)
	float CanOperateDis; // 0x404(0x4)
	float CanOperateAngleFacing; // 0x408(0x4)
	float CanOperateAngleNotFacing; // 0x40C(0x4)
	struct UCurveFloat* TurningFloatCurve; // 0x410(0x8)
	float TurningThresholdAngle; // 0x418(0x4)
	uint8_t Pad_0x41C[0x4]; // 0x41C(0x4)
	struct TArray<struct UMaterialInterface*> UIMaterials; // 0x420(0x10)
	uint8_t bMeshEffectHasBeenPlayed : 1; // 0x430(0x1), Mask(0x1)
	uint8_t BitPad_0x430_1 : 7; // 0x430(0x1)
	uint8_t bUseCustomize3DUISize : 1; // 0x431(0x1), Mask(0x1)
	uint8_t BitPad_0x431_1 : 7; // 0x431(0x1)
	uint8_t Pad_0x432[0x2]; // 0x432(0x2)
	struct FVector2D Customize3DUISize; // 0x434(0x8)
	uint8_t bFacingUI : 1; // 0x43C(0x1), Mask(0x1)
	uint8_t BitPad_0x43C_1 : 7; // 0x43C(0x1)
	uint8_t bCanOperate : 1; // 0x43D(0x1), Mask(0x1)
	uint8_t BitPad_0x43D_1 : 7; // 0x43D(0x1)
	uint8_t Pad_0x43E[0x7]; // 0x43E(0x7)
	uint8_t bEnableLog : 1; // 0x445(0x1), Mask(0x1)
	uint8_t BitPad_0x445_1 : 7; // 0x445(0x1)
	uint8_t Pad_0x446[0x2]; // 0x446(0x2)


	// Object: Function SafeHouse.SafeHouseBuildingProxy.UpdateInteraction
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC) ]
	void UpdateInteraction(uint8_t bOperating, float dist, float DistToScreenCenter);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SwitchBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510965c
	// Params: [ Num(2) Size(0xC) ]
	void SwitchBuilding(struct UObject* BuildingClass, int32_t InBuildingLevel);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.StopPlayUpgradeParticle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15109648
	// Params: [ Num(0) Size(0x0) ]
	void StopPlayUpgradeParticle();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.StopFocusOnBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15109634
	// Params: [ Num(0) Size(0x0) ]
	void StopFocusOnBuilding();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.StartPlayUpgradeParticle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15109620
	// Params: [ Num(0) Size(0x0) ]
	void StartPlayUpgradeParticle();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.StartFocusOnBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510960c
	// Params: [ Num(0) Size(0x0) ]
	void StartFocusOnBuilding();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SetUseCustomize3DUISize
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15109510
	// Params: [ Num(2) Size(0xC) ]
	void SetUseCustomize3DUISize(const uint8_t& bEnable, const struct FVector2D& size);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SetUIVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510946c
	// Params: [ Num(1) Size(0x1) ]
	void SetUIVisibility(ESlateVisibility State);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SetInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15108fe4
	// Params: [ Num(5) Size(0x64) ]
	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name, struct FText DeviceLevel, struct FText CapDeviceLevel, int32_t Type);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SetCountDownVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15108f38
	// Params: [ Num(1) Size(0x1) ]
	void SetCountDownVisible(uint8_t Visible);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SetCountDownText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15108e40
	// Params: [ Num(1) Size(0x10) ]
	void SetCountDownText(struct FString CountDownInfo);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.SetAnimState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15108d9c
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimState(int32_t State);

	// Object: Function SafeHouse.SafeHouseBuildingProxy.MeshUpgradeEffectPlayed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void MeshUpgradeEffectPlayed();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.IsInteractionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15108d64
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInteractionEnabled();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.GetIcon2DOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15108d30
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetIcon2DOffset();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.GetCameraFocusOffset
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCameraFocusOffset();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.GetBuldingInteractLoc
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15108cf8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBuldingInteractLoc();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.GetBuildingID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15108cc4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBuildingID();

	// Object: Function SafeHouse.SafeHouseBuildingProxy.AddSeamlessFlag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15108cb0
	// Params: [ Num(0) Size(0x0) ]
	void AddSeamlessFlag();
	DEFINE_UE_CLASS_HELPERS(ASafeHouseBuildingProxy, "SafeHouseBuildingProxy")

};

// Object: Class SafeHouse.SafeHouseDepartment
// Size: 0x390 (Inherited: 0x370)
struct ASafeHouseDepartment : AActor
{
	struct UIrisSafeHouseInteractorDepartmentTitle* TitleUserWidget; // 0x370(0x8)
	struct UWidgetComponent* TitleWidgetCmp; // 0x378(0x8)
	ESafeHouseDepartmentType DepartmentType; // 0x380(0x1)
	uint8_t Pad_0x381[0x3]; // 0x381(0x3)
	float ShowTitleDist; // 0x384(0x4)
	uint8_t EnalbeAnim : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x7]; // 0x389(0x7)


	// Object: Function SafeHouse.SafeHouseDepartment.SetInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x151097e0
	// Params: [ Num(2) Size(0x30) ]
	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name);
	DEFINE_UE_CLASS_HELPERS(ASafeHouseDepartment, "SafeHouseDepartment")

};

// Object: Class SafeHouse.SafeHouseGameplayDelegates
// Size: 0x80 (Inherited: 0x30)
struct USafeHouseGameplayDelegates : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnSafeHouseAreaLevelUp; // 0x30(0x10)
	struct FMulticastInlineDelegate WeaponRackResetWeapon; // 0x40(0x10)
	struct FMulticastInlineDelegate WeaponRackRewarehouse; // 0x50(0x10)
	struct FMulticastInlineDelegate OnPickupPutBack; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPickupInteractPutBack; // 0x70(0x10)


	// Object: Function SafeHouse.SafeHouseGameplayDelegates.SafeHouseAreaLevelUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15109a78
	// Params: [ Num(1) Size(0x18) ]
	void SafeHouseAreaLevelUp(struct FText AreaName);

	// Object: Function SafeHouse.SafeHouseGameplayDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfc76714
	// Params: [ Num(2) Size(0x10) ]
	static struct USafeHouseGameplayDelegates* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(USafeHouseGameplayDelegates, "SafeHouseGameplayDelegates")

};

// Object: Class SafeHouse.SafeHouseGameplayUtils
// Size: 0x28 (Inherited: 0x28)
struct USafeHouseGameplayUtils : UObject
{

	// Object: Function SafeHouse.SafeHouseGameplayUtils.SetCharacterStaminaChangeRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15109e54
	// Params: [ Num(2) Size(0xC) ]
	static void SetCharacterStaminaChangeRate(struct ADFMCharacter* CHARACTER, float ChangeRate);

	// Object: Function SafeHouse.SafeHouseGameplayUtils.SetCharacterStamina
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15109d4c
	// Params: [ Num(3) Size(0x10) ]
	static void SetCharacterStamina(struct ADFMCharacter* CHARACTER, float Stamina, float MaxStamina);

	// Object: Function SafeHouse.SafeHouseGameplayUtils.NotifyEnter3DSafeHouse
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10808978
	// Params: [ Num(2) Size(0x9) ]
	static void NotifyEnter3DSafeHouse(struct UObject* WorldContextObj, uint8_t bEnter);

	// Object: Function SafeHouse.SafeHouseGameplayUtils.GetSafeHouseAreaLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15109c00
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> GetSafeHouseAreaLevels(struct UObject* WorldContextObj, struct FString AreaName);
	DEFINE_UE_CLASS_HELPERS(USafeHouseGameplayUtils, "SafeHouseGameplayUtils")

};

// Object: Class SafeHouse.SafeHouseInteractorCommonView
// Size: 0x668 (Inherited: 0x668)
struct USafeHouseInteractorCommonView : ULuaUIHudBaseView
{	DEFINE_UE_CLASS_HELPERS(USafeHouseInteractorCommonView, "SafeHouseInteractorCommonView")

};

// Object: Class SafeHouse.SafeHouseLightCtrl
// Size: 0x378 (Inherited: 0x370)
struct ASafeHouseLightCtrl : AActor
{
	struct TWeakObjectPtr<struct AExponentialHeightFog> SafeHouseHeightFog; // 0x370(0x8)


	// Object: Function SafeHouse.SafeHouseLightCtrl.ToggleHeightFog
	// Flags: [Final|Native|Public]
	// Offset: 0x15109f44
	// Params: [ Num(1) Size(0x1) ]
	void ToggleHeightFog(uint8_t Enable);

	// Object: Function SafeHouse.SafeHouseLightCtrl.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfc41d68
	// Params: [ Num(2) Size(0x10) ]
	static struct ASafeHouseLightCtrl* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(ASafeHouseLightCtrl, "SafeHouseLightCtrl")

};

// Object: Class SafeHouse.SafeHouseRangeData
// Size: 0x3C8 (Inherited: 0x370)
struct ASafeHouseRangeData : AActor
{
	struct TArray<struct FRangeTargetConfig> AllNormalRangeTargetConfigs; // 0x370(0x10)
	struct TArray<float> AllHealthRanges; // 0x380(0x10)
	uint8_t bShowDamageHUD : 1; // 0x390(0x1), Mask(0x1)
	uint8_t BitPad_0x390_1 : 7; // 0x390(0x1)
	uint8_t Pad_0x391[0x7]; // 0x391(0x7)
	struct AActor* RangeTargetClass; // 0x398(0x8)
	struct FVector RangeTargetAttachLoc; // 0x3A0(0xC)
	struct FRotator RangeTargetAttachRot; // 0x3AC(0xC)
	struct FName RangeTargetAttachBoneName; // 0x3B8(0x8)
	struct UAnimSequenceBase* RangeTargetDownAnim; // 0x3C0(0x8)
	DEFINE_UE_CLASS_HELPERS(ASafeHouseRangeData, "SafeHouseRangeData")

};

// Object: Class SafeHouse.SafeHouseRangeUtil
// Size: 0x28 (Inherited: 0x28)
struct USafeHouseRangeUtil : UObject
{

	// Object: Function SafeHouse.SafeHouseRangeUtil.SwitchToWeapon
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510ae1c
	// Params: [ Num(2) Size(0xC) ]
	static void SwitchToWeapon(struct ADFMCharacter* DFMCharacter, uint32_t EquipPosition);

	// Object: Function SafeHouse.SafeHouseRangeUtil.SetWeaponAction
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510ad44
	// Params: [ Num(2) Size(0x9) ]
	static void SetWeaponAction(struct ADFMCharacter* DFMCharacter, uint8_t Enable);

	// Object: Function SafeHouse.SafeHouseRangeUtil.SetupRangeWeapon
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510acb0
	// Params: [ Num(1) Size(0x8) ]
	static void SetupRangeWeapon(struct ADFMWeapon* RangeWeapon);

	// Object: Function SafeHouse.SafeHouseRangeUtil.SetRangeDamageMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510abd8
	// Params: [ Num(2) Size(0x9) ]
	static void SetRangeDamageMode(struct UObject* WorldContextObj, uint8_t bSOL);

	// Object: Function SafeHouse.SafeHouseRangeUtil.SetAllowAimOn
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510ab00
	// Params: [ Num(2) Size(0x9) ]
	static void SetAllowAimOn(struct ADFMCharacter* DFMCharacter, uint8_t bAllowAimOn);

	// Object: Function SafeHouse.SafeHouseRangeUtil.RecoverPlayerAmmo_SOL
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510aa6c
	// Params: [ Num(1) Size(0x8) ]
	static void RecoverPlayerAmmo_SOL(struct UInventoryManager* InvMgr);

	// Object: Function SafeHouse.SafeHouseRangeUtil.PlayFirstEquipAnim
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a9d8
	// Params: [ Num(1) Size(0x8) ]
	static void PlayFirstEquipAnim(struct ADFMCharacter* DFMCharacter);

	// Object: Function SafeHouse.SafeHouseRangeUtil.NotifyEnterRange
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a900
	// Params: [ Num(2) Size(0x9) ]
	static void NotifyEnterRange(struct UObject* WorldContextObj, uint8_t bEnter);

	// Object: Function SafeHouse.SafeHouseRangeUtil.IsZooming
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a858
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsZooming(struct ADFMCharacter* DFMCharacter);

	// Object: Function SafeHouse.SafeHouseRangeUtil.IsInRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1510a7b0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInRange(struct UObject* WorldContextObj);

	// Object: Function SafeHouse.SafeHouseRangeUtil.IsInCollectionRoom
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1510a708
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInCollectionRoom(struct UObject* WorldContextObj);

	// Object: Function SafeHouse.SafeHouseRangeUtil.IsCharacterAiming
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a660
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsCharacterAiming(struct ADFMCharacter* DFMCharacter);

	// Object: Function SafeHouse.SafeHouseRangeUtil.InitPlayerAmmo_SOL
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1510a4c4
	// Params: [ Num(4) Size(0x61) ]
	static void InitPlayerAmmo_SOL(struct UInventoryManager* InvMgr, struct UWeaponManagerComponent* WeaponMgr, struct TMap<uint64_t, uint64_t>& WeaponAmmoMapping, uint8_t bUnlimitedAmmo);

	// Object: Function SafeHouse.SafeHouseRangeUtil.InitPlayerAmmo_MP
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a3ec
	// Params: [ Num(2) Size(0x9) ]
	static void InitPlayerAmmo_MP(struct UWeaponManagerComponent* WeaponMgr, uint8_t bUnlimitedAmmo);

	// Object: Function SafeHouse.SafeHouseRangeUtil.DynamicAddRangeInvisibleHudState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a2bc
	// Params: [ Num(2) Size(0x18) ]
	static void DynamicAddRangeInvisibleHudState(struct UObject* WorldContextObj, struct TArray<struct FName> HudNameList);

	// Object: Function SafeHouse.SafeHouseRangeUtil.ClearFirstActiveWeapons
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a228
	// Params: [ Num(1) Size(0x8) ]
	static void ClearFirstActiveWeapons(struct ADFMCharacter* DFMCharacter);

	// Object: Function SafeHouse.SafeHouseRangeUtil.CancelWeaponZoom
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a150
	// Params: [ Num(2) Size(0x9) ]
	static void CancelWeaponZoom(struct ADFMCharacter* DFMCharacter, uint8_t IsQuickZoom);

	// Object: Function SafeHouse.SafeHouseRangeUtil.CancelFirstEquipAnim
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a0bc
	// Params: [ Num(1) Size(0x8) ]
	static void CancelFirstEquipAnim(struct ADFMCharacter* DFMCharacter);

	// Object: Function SafeHouse.SafeHouseRangeUtil.CancelCharacterAiming
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1510a028
	// Params: [ Num(1) Size(0x8) ]
	static void CancelCharacterAiming(struct ADFMCharacter* DFMCharacter);
	DEFINE_UE_CLASS_HELPERS(USafeHouseRangeUtil, "SafeHouseRangeUtil")

};

// Object: Class SafeHouse.SHBuildingCameraComponent
// Size: 0xC00 (Inherited: 0xBF0)
struct USHBuildingCameraComponent : UCameraComponent
{
	struct UCameraShake* CameraShakeClass; // 0xBF0(0x8)
	uint8_t Pad_0xBF8[0x8]; // 0xBF8(0x8)
	DEFINE_UE_CLASS_HELPERS(USHBuildingCameraComponent, "SHBuildingCameraComponent")

};

// Object: Class SafeHouse.SHBuildingWhiteDotComponent
// Size: 0x250 (Inherited: 0x240)
struct USHBuildingWhiteDotComponent : USceneComponent
{
	uint8_t bOverrideIconOffset : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	struct FVector2D IconOffset; // 0x244(0x8)
	uint8_t Pad_0x24C[0x4]; // 0x24C(0x4)
	DEFINE_UE_CLASS_HELPERS(USHBuildingWhiteDotComponent, "SHBuildingWhiteDotComponent")

};

// Object: Class SafeHouse.SHInteractorBaseComponent
// Size: 0x140 (Inherited: 0xF8)
struct USHInteractorBaseComponent : UActorComponent
{
	struct FText InteractorName; // 0xF8(0x18)
	float InteractDis; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct USHInteractorBasePattern* InteractorPattern; // 0x118(0x8)
	ESafeHouseDepartmentType DepartmentType; // 0x120(0x1)
	uint8_t Pad_0x121[0x3]; // 0x121(0x3)
	int32_t DeviceID; // 0x124(0x4)
	uint8_t bEnableIcon : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x17]; // 0x129(0x17)


	// Object: Function SafeHouse.SHInteractorBaseComponent.OnEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnEndPlay(EEndPlayReason EndPlayReason);

	// Object: Function SafeHouse.SHInteractorBaseComponent.OnBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginPlay();

	// Object: Function SafeHouse.SHInteractorBaseComponent.GetWhiteDot3DLoc
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1510b0c0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetWhiteDot3DLoc();
	DEFINE_UE_CLASS_HELPERS(USHInteractorBaseComponent, "SHInteractorBaseComponent")

};

// Object: Class SafeHouse.SHInteractorNPCComponent
// Size: 0x190 (Inherited: 0x140)
struct USHInteractorNPCComponent : USHInteractorBaseComponent
{
	ESafeHouseNPCType NPCType; // 0x140(0x1)
	uint8_t Pad_0x141[0xF]; // 0x141(0xF)
	int32_t NPCID; // 0x150(0x4)
	uint8_t bEnableInteraction : 1; // 0x154(0x1), Mask(0x1)
	uint8_t BitPad_0x154_1 : 7; // 0x154(0x1)
	uint8_t bEnableUIRotation : 1; // 0x155(0x1), Mask(0x1)
	uint8_t BitPad_0x155_1 : 7; // 0x155(0x1)
	uint8_t Pad_0x156[0x2]; // 0x156(0x2)
	float ShowNameDist; // 0x158(0x4)
	float CanOperateDis; // 0x15C(0x4)
	float MinHeightDiffToInteract; // 0x160(0x4)
	float CanOperateAngleFacing; // 0x164(0x4)
	float CanOperateAngleNotFacing; // 0x168(0x4)
	uint8_t bFacingUI : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t BitPad_0x16C_1 : 7; // 0x16C(0x1)
	uint8_t bCanOperate : 1; // 0x16D(0x1), Mask(0x1)
	uint8_t BitPad_0x16D_1 : 7; // 0x16D(0x1)
	uint8_t Pad_0x16E[0x2]; // 0x16E(0x2)
	struct UIrisSafeHouseInteractorNPCIcon* Interaction3DTipWidget; // 0x170(0x8)
	struct UWidgetComponent* Interaction3DTipWidgetCmp; // 0x178(0x8)
	struct USkeletalMeshComponent* Skeleton; // 0x180(0x8)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)


	// Object: Function SafeHouse.SHInteractorNPCComponent.UpdateInteraction
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC) ]
	void UpdateInteraction(uint8_t bOperating, float dist, float DistToScreenCenter);

	// Object: Function SafeHouse.SHInteractorNPCComponent.SetupWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510b664
	// Params: [ Num(0) Size(0x0) ]
	void SetupWidget();

	// Object: Function SafeHouse.SHInteractorNPCComponent.SetUIVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510b5c0
	// Params: [ Num(1) Size(0x1) ]
	void SetUIVisibility(ESlateVisibility State);

	// Object: Function SafeHouse.SHInteractorNPCComponent.SetNPCInteractRot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1510b51c
	// Params: [ Num(1) Size(0xC) ]
	void SetNPCInteractRot(struct FRotator NewRot);

	// Object: Function SafeHouse.SHInteractorNPCComponent.SetNPCInteractLoc
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1510b478
	// Params: [ Num(1) Size(0xC) ]
	void SetNPCInteractLoc(struct FVector NewLoc);

	// Object: Function SafeHouse.SHInteractorNPCComponent.SetInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1510b25c
	// Params: [ Num(2) Size(0x30) ]
	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name);

	// Object: Function SafeHouse.SHInteractorNPCComponent.IsInteractionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510b224
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInteractionEnabled();

	// Object: Function SafeHouse.SHInteractorNPCComponent.GetNPCInteractLoc
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1510b1ec
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetNPCInteractLoc();
	DEFINE_UE_CLASS_HELPERS(USHInteractorNPCComponent, "SHInteractorNPCComponent")

};

// Object: Class SafeHouse.SHInteractorBasePattern
// Size: 0x30 (Inherited: 0x28)
struct USHInteractorBasePattern : UObject
{
	ESafeHouseInteractiveType InteractiveType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	DEFINE_UE_CLASS_HELPERS(USHInteractorBasePattern, "SHInteractorBasePattern")

};

// Object: Class SafeHouse.SHInteractorOpenUIPattern
// Size: 0x40 (Inherited: 0x30)
struct USHInteractorOpenUIPattern : USHInteractorBasePattern
{
	struct FString UIName; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(USHInteractorOpenUIPattern, "SHInteractorOpenUIPattern")

};

// Object: Class SafeHouse.SHInteractorPlayDialoguePattern
// Size: 0x40 (Inherited: 0x30)
struct USHInteractorPlayDialoguePattern : USHInteractorBasePattern
{
	struct FString DialogEventName; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(USHInteractorPlayDialoguePattern, "SHInteractorPlayDialoguePattern")

};

// Object: Class SafeHouse.SHInteractorCallFunctionPattern
// Size: 0x50 (Inherited: 0x30)
struct USHInteractorCallFunctionPattern : USHInteractorBasePattern
{
	struct FString FunctionName; // 0x30(0x10)
	struct FString Args; // 0x40(0x10)
	DEFINE_UE_CLASS_HELPERS(USHInteractorCallFunctionPattern, "SHInteractorCallFunctionPattern")

};

// Object: Class SafeHouse.NewIrisSafeHouseInteractorView
// Size: 0x690 (Inherited: 0x658)
struct UNewIrisSafeHouseInteractorView : ULuaHudView
{
	struct TArray<struct FBuildingUIInfo> BuildingInfos; // 0x658(0x10)
	struct TArray<struct FNPCUIInfo> NPCInfos; // 0x668(0x10)
	struct UIrisSafeHouseInteractorOperate* OperateView; // 0x678(0x8)
	struct UCanvasPanel* IconContainer; // 0x680(0x8)
	uint8_t Pad_0x688[0x8]; // 0x688(0x8)


	// Object: Function SafeHouse.NewIrisSafeHouseInteractorView.RemoveNPCICON
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveNPCICON(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.NewIrisSafeHouseInteractorView.RemoveInteractorCmp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510d344
	// Params: [ Num(1) Size(0x8) ]
	void RemoveInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.NewIrisSafeHouseInteractorView.RemoveBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510d2a0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveBuilding(struct ASafeHouseBuildingProxy* BuildingIns);

	// Object: Function SafeHouse.NewIrisSafeHouseInteractorView.AddNPCICON
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct UIrisSafeHouseInteractorNPCIcon* AddNPCICON(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.NewIrisSafeHouseInteractorView.AddInteractorCmp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510d1fc
	// Params: [ Num(1) Size(0x8) ]
	void AddInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp);

	// Object: Function SafeHouse.NewIrisSafeHouseInteractorView.AddBuilding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1510d158
	// Params: [ Num(1) Size(0x8) ]
	void AddBuilding(struct ASafeHouseBuildingProxy* BuildingIns);
	DEFINE_UE_CLASS_HELPERS(UNewIrisSafeHouseInteractorView, "NewIrisSafeHouseInteractorView")

};

} // namespace SDK
