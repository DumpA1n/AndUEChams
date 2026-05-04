#include "SafeHouse.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UCollectionRoomPickupActorManager::* ----
void UCollectionRoomPickupActorManager::ResetPickupActor(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID, uint8_t bPutBack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "ResetPickupActor");
    struct
    {
        enum EShowCabinetType CabinetType;
        int32_t CabinetId;
        int32_t GridID;
        uint8_t bPutBack;
    } Parms{};
    Parms.CabinetType = (enum EShowCabinetType)CabinetType;
    Parms.CabinetId = (int32_t)CabinetId;
    Parms.GridID = (int32_t)GridID;
    Parms.bPutBack = (uint8_t)bPutBack;
    this->ProcessEvent(Func, &Parms);
}

void UCollectionRoomPickupActorManager::ResetGridIdToUVMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "ResetGridIdToUVMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCollectionRoomPickupActorManager::RemoveCollectionItem(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "RemoveCollectionItem");
    struct
    {
        enum EShowCabinetType CabinetType;
        int32_t CabinetId;
        int32_t GridID;
    } Parms{};
    Parms.CabinetType = (enum EShowCabinetType)CabinetType;
    Parms.CabinetId = (int32_t)CabinetId;
    Parms.GridID = (int32_t)GridID;
    this->ProcessEvent(Func, &Parms);
}

void UCollectionRoomPickupActorManager::RemoveAllCollectionItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "RemoveAllCollectionItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCollectionRoomPickupActorManager::RemoveAllAdapterPickups()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "RemoveAllAdapterPickups");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCollectionRoomPickupActorManager::IsPickupActorsNeedReset(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "IsPickupActorsNeedReset");
    struct
    {
        enum EShowCabinetType CabinetType;
        int32_t CabinetId;
        int32_t GridID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CabinetType = (enum EShowCabinetType)CabinetType;
    Parms.CabinetId = (int32_t)CabinetId;
    Parms.GridID = (int32_t)GridID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCollectionRoomPickupActorManager::HasPickupActorsNeedReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "HasPickupActorsNeedReset");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACollectionRoomPickupPlaceActor* UCollectionRoomPickupActorManager::GetPlaceActorByCabinetAndGrid(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "GetPlaceActorByCabinetAndGrid");
    struct
    {
        enum EShowCabinetType CabinetType;
        int32_t CabinetId;
        int32_t GridID;
        struct ACollectionRoomPickupPlaceActor* ReturnValue;
    } Parms{};
    Parms.CabinetType = (enum EShowCabinetType)CabinetType;
    Parms.CabinetId = (int32_t)CabinetId;
    Parms.GridID = (int32_t)GridID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AInventoryPickup* UCollectionRoomPickupActorManager::GetPickupActor(EShowCabinetType CabinetType, int32_t CabinetId, int32_t GridID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "GetPickupActor");
    struct
    {
        enum EShowCabinetType CabinetType;
        int32_t CabinetId;
        int32_t GridID;
        struct AInventoryPickup* ReturnValue;
    } Parms{};
    Parms.CabinetType = (enum EShowCabinetType)CabinetType;
    Parms.CabinetId = (int32_t)CabinetId;
    Parms.GridID = (int32_t)GridID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCollectionRoomPickupActorManager::GetDisplayCabinetTextureUVByGrid(const int32_t& GridID, int32_t& U, int32_t& V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "GetDisplayCabinetTextureUVByGrid");
    struct
    {
        int32_t GridID;
        int32_t U;
        int32_t V;
    } Parms{};
    Parms.GridID = (int32_t)GridID;
    this->ProcessEvent(Func, &Parms);
    U = Parms.U;
    V = Parms.V;
}

struct TArray<int32_t> UCollectionRoomPickupActorManager::GetAllWeaponCabinetWeaponNeedReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "GetAllWeaponCabinetWeaponNeedReset");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCollectionRoomPickupActorManager* UCollectionRoomPickupActorManager::Get(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CollectionRoomPickupActorManager", "Get");
    struct
    {
        struct UObject* WorldContextObj;
        struct UCollectionRoomPickupActorManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCollectionRoomPickupActorManager::ClearItemInventoryInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomPickupActorManager", "ClearItemInventoryInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ACollectionRoomWeaponCabinet::* ----
void ACollectionRoomWeaponCabinet::SetToIdlePose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomWeaponCabinet", "SetToIdlePose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACollectionRoomWeaponCabinet::Rewarehouse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomWeaponCabinet", "Rewarehouse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ACollectionRoomWeaponCabinet::IsRewarehousing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CollectionRoomWeaponCabinet", "IsRewarehousing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AInteractor_CollectionRoomPutback::* ----
uint8_t AInteractor_CollectionRoomPutback::ShouldShowPutbackTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_CollectionRoomPutback", "ShouldShowPutbackTips");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AInteractor_CollectionRoomPutback::PutbackItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_CollectionRoomPutback", "PutbackItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UInteractorExecutor_SinglePutback::* ----
void UInteractorExecutor_SinglePutback::OnWeaponChangeInterrupt(struct AGPCharacterBase* GPCharacterBase, struct AWeaponBase* OldWeapon, struct AWeaponBase* NewWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorExecutor_SinglePutback", "OnWeaponChangeInterrupt");
    struct
    {
        struct AGPCharacterBase* GPCharacterBase;
        struct AWeaponBase* OldWeapon;
        struct AWeaponBase* NewWeapon;
    } Parms{};
    Parms.GPCharacterBase = (struct AGPCharacterBase*)GPCharacterBase;
    Parms.OldWeapon = (struct AWeaponBase*)OldWeapon;
    Parms.NewWeapon = (struct AWeaponBase*)NewWeapon;
    this->ProcessEvent(Func, &Parms);
}

void UInteractorExecutor_SinglePutback::OnNewInteractKeyDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorExecutor_SinglePutback", "OnNewInteractKeyDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UInteractorExecutor_SinglePutback::OnFiringInterrupt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorExecutor_SinglePutback", "OnFiringInterrupt");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisSafeHouseInteractorDepartmentTitle::* ----
void UIrisSafeHouseInteractorDepartmentTitle::SetInfo(struct FSoftObjectPath IconImgPath, const struct FText& Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorDepartmentTitle", "SetInfo");
    struct
    {
        struct FSoftObjectPath IconImgPath;
        struct FText Name;
    } Parms{};
    Parms.IconImgPath = (struct FSoftObjectPath)IconImgPath;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisSafeHouseInteractorIcon::* ----
void UIrisSafeHouseInteractorIcon::SetVisibilityByOpacity(float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorIcon", "SetVisibilityByOpacity");
    struct
    {
        float Opacity;
    } Parms{};
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
}

void UIrisSafeHouseInteractorIcon::SetUIVisibility(ESlateVisibility State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorIcon", "SetUIVisibility");
    struct
    {
        enum ESlateVisibility State;
    } Parms{};
    Parms.State = (enum ESlateVisibility)State;
    this->ProcessEvent(Func, &Parms);
}

void UIrisSafeHouseInteractorIcon::SetInfo(struct FSoftObjectPath IconImgPath, const struct FText& Name, const struct FText& DeviceLevel, const struct FText& CapDeviceLevel, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorIcon", "SetInfo");
    struct
    {
        struct FSoftObjectPath IconImgPath;
        struct FText Name;
        struct FText DeviceLevel;
        struct FText CapDeviceLevel;
        int32_t Type;
    } Parms{};
    Parms.IconImgPath = (struct FSoftObjectPath)IconImgPath;
    Parms.Name = (struct FText)Name;
    Parms.DeviceLevel = (struct FText)DeviceLevel;
    Parms.CapDeviceLevel = (struct FText)CapDeviceLevel;
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UIrisSafeHouseInteractorIcon::PlayCurrentAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorIcon", "PlayCurrentAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EIconState UIrisSafeHouseInteractorIcon::GetCurState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorIcon", "GetCurState");
    struct
    {
        enum EIconState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UIrisSafeHouseInteractorNPCIcon::* ----
void UIrisSafeHouseInteractorNPCIcon::SetUIVisibility(ESlateVisibility State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorNPCIcon", "SetUIVisibility");
    struct
    {
        enum ESlateVisibility State;
    } Parms{};
    Parms.State = (enum ESlateVisibility)State;
    this->ProcessEvent(Func, &Parms);
}

void UIrisSafeHouseInteractorNPCIcon::SetInfo(struct FSoftObjectPath IconImgPath, const struct FText& Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorNPCIcon", "SetInfo");
    struct
    {
        struct FSoftObjectPath IconImgPath;
        struct FText Name;
    } Parms{};
    Parms.IconImgPath = (struct FSoftObjectPath)IconImgPath;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
}

ENPCIconState UIrisSafeHouseInteractorNPCIcon::GetCurState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorNPCIcon", "GetCurState");
    struct
    {
        enum ENPCIconState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UIrisSafeHouseInteractorOperate::* ----
void UIrisSafeHouseInteractorOperate::RefreshUI(int32_t BuidingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorOperate", "RefreshUI");
    struct
    {
        int32_t BuidingID;
    } Parms{};
    Parms.BuidingID = (int32_t)BuidingID;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisSafeHouseInteractorView::* ----
uint8_t UIrisSafeHouseInteractorView::RemoveNPCICON(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorView", "RemoveNPCICON");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIrisSafeHouseInteractorView::RemoveInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorView", "RemoveInteractorCmp");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
}

void UIrisSafeHouseInteractorView::RemoveBuilding(struct ASafeHouseBuildingProxy* BuildingIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorView", "RemoveBuilding");
    struct
    {
        struct ASafeHouseBuildingProxy* BuildingIns;
    } Parms{};
    Parms.BuildingIns = (struct ASafeHouseBuildingProxy*)BuildingIns;
    this->ProcessEvent(Func, &Parms);
}

struct UIrisSafeHouseInteractorNPCIcon* UIrisSafeHouseInteractorView::AddNPCICON(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorView", "AddNPCICON");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
        struct UIrisSafeHouseInteractorNPCIcon* ReturnValue;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIrisSafeHouseInteractorView::AddInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorView", "AddInteractorCmp");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
}

void UIrisSafeHouseInteractorView::AddBuilding(struct ASafeHouseBuildingProxy* BuildingIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisSafeHouseInteractorView", "AddBuilding");
    struct
    {
        struct ASafeHouseBuildingProxy* BuildingIns;
    } Parms{};
    Parms.BuildingIns = (struct ASafeHouseBuildingProxy*)BuildingIns;
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidSelectMap::* ----
struct UUserWidget* URaidSelectMap::RemoveMapItem(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "RemoveMapItem");
    struct
    {
        struct FString Name;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URaidSelectMap::OnSliderValueChanged(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "OnSliderValueChanged");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void URaidSelectMap::OnSliderUpButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "OnSliderUpButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidSelectMap::OnSliderDownButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "OnSliderDownButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidSelectMap::GoToMapItem(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "GoToMapItem");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* URaidSelectMap::GetMapItem(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "GetMapItem");
    struct
    {
        struct FString Name;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URaidSelectMap::AddMapItem(struct FString Name, struct UUserWidget* UI, struct FVector2D Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidSelectMap", "AddMapItem");
    struct
    {
        struct FString Name;
        struct UUserWidget* UI;
        struct FVector2D Position;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.UI = (struct UUserWidget*)UI;
    Parms.Position = (struct FVector2D)Position;
    this->ProcessEvent(Func, &Parms);
}

// ---- ASafeHouseBuilding::* ----
void ASafeHouseBuilding::TimelineFinishedCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "TimelineFinishedCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::TimelineCallBack(float Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "TimelineCallBack");
    struct
    {
        float Interval;
    } Parms{};
    Parms.Interval = (float)Interval;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetupWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetupWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetUIVisibilityByOpacity(float Opacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetUIVisibilityByOpacity");
    struct
    {
        float Opacity;
    } Parms{};
    Parms.Opacity = (float)Opacity;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetUIVisibility(ESlateVisibility State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetUIVisibility");
    struct
    {
        enum ESlateVisibility State;
    } Parms{};
    Parms.State = (enum ESlateVisibility)State;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetTurningData(struct UCurveFloat* Curve, float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetTurningData");
    struct
    {
        struct UCurveFloat* Curve;
        float Angle;
    } Parms{};
    Parms.Curve = (struct UCurveFloat*)Curve;
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetCanPlayAnim(uint8_t bCanPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetCanPlayAnim");
    struct
    {
        uint8_t bCanPlay;
    } Parms{};
    Parms.bCanPlay = (uint8_t)bCanPlay;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetBuldingInteractRot(struct FRotator NewRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetBuldingInteractRot");
    struct
    {
        struct FRotator NewRot;
    } Parms{};
    Parms.NewRot = (struct FRotator)NewRot;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::SetAnimState(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "SetAnimState");
    struct
    {
        int32_t State;
    } Parms{};
    Parms.State = (int32_t)State;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::Set3DUIMaterials(struct TArray<struct UMaterialInterface*> Materials)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "Set3DUIMaterials");
    struct
    {
        struct TArray<struct UMaterialInterface*> Materials;
    } Parms{};
    Parms.Materials = (struct TArray<struct UMaterialInterface*>)Materials;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::PlayTurningAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "PlayTurningAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::PlayMeshEffectManually()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "PlayMeshEffectManually");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::PlayMeshEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "PlayMeshEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::OnEndInteract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "OnEndInteract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuilding::OnBeginInteract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "OnBeginInteract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UCameraShake* ASafeHouseBuilding::GetShakeClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "GetShakeClass");
    struct
    {
        struct UCameraShake* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBoxComponent* ASafeHouseBuilding::GetIntersetBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "GetIntersetBox");
    struct
    {
        struct UBoxComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D ASafeHouseBuilding::GetIcon2DOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "GetIcon2DOffset");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator ASafeHouseBuilding::GetBuldingInteractRot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "GetBuldingInteractRot");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ASafeHouseBuilding::GetBuldingInteractLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuilding", "GetBuldingInteractLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ASafeHouseBuildingProxy::* ----
void ASafeHouseBuildingProxy::UpdateInteraction(uint8_t bOperating, float dist, float DistToScreenCenter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "UpdateInteraction");
    struct
    {
        uint8_t bOperating;
        float dist;
        float DistToScreenCenter;
    } Parms{};
    Parms.bOperating = (uint8_t)bOperating;
    Parms.dist = (float)dist;
    Parms.DistToScreenCenter = (float)DistToScreenCenter;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SwitchBuilding(struct UObject* BuildingClass, int32_t InBuildingLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SwitchBuilding");
    struct
    {
        struct UObject* BuildingClass;
        int32_t InBuildingLevel;
    } Parms{};
    Parms.BuildingClass = (struct UObject*)BuildingClass;
    Parms.InBuildingLevel = (int32_t)InBuildingLevel;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::StopPlayUpgradeParticle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "StopPlayUpgradeParticle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::StopFocusOnBuilding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "StopFocusOnBuilding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::StartPlayUpgradeParticle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "StartPlayUpgradeParticle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::StartFocusOnBuilding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "StartFocusOnBuilding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SetUseCustomize3DUISize(const uint8_t& bEnable, const struct FVector2D& size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SetUseCustomize3DUISize");
    struct
    {
        uint8_t bEnable;
        struct FVector2D size;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    Parms.size = (struct FVector2D)size;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SetUIVisibility(ESlateVisibility State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SetUIVisibility");
    struct
    {
        enum ESlateVisibility State;
    } Parms{};
    Parms.State = (enum ESlateVisibility)State;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name, struct FText DeviceLevel, struct FText CapDeviceLevel, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SetInfo");
    struct
    {
        struct FSoftObjectPath IconImgPath;
        struct FText Name;
        struct FText DeviceLevel;
        struct FText CapDeviceLevel;
        int32_t Type;
    } Parms{};
    Parms.IconImgPath = (struct FSoftObjectPath)IconImgPath;
    Parms.Name = (struct FText)Name;
    Parms.DeviceLevel = (struct FText)DeviceLevel;
    Parms.CapDeviceLevel = (struct FText)CapDeviceLevel;
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SetCountDownVisible(uint8_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SetCountDownVisible");
    struct
    {
        uint8_t Visible;
    } Parms{};
    Parms.Visible = (uint8_t)Visible;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SetCountDownText(struct FString CountDownInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SetCountDownText");
    struct
    {
        struct FString CountDownInfo;
    } Parms{};
    Parms.CountDownInfo = (struct FString)CountDownInfo;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::SetAnimState(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "SetAnimState");
    struct
    {
        int32_t State;
    } Parms{};
    Parms.State = (int32_t)State;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseBuildingProxy::MeshUpgradeEffectPlayed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "MeshUpgradeEffectPlayed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASafeHouseBuildingProxy::IsInteractionEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "IsInteractionEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D ASafeHouseBuildingProxy::GetIcon2DOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "GetIcon2DOffset");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ASafeHouseBuildingProxy::GetCameraFocusOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "GetCameraFocusOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ASafeHouseBuildingProxy::GetBuldingInteractLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "GetBuldingInteractLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ASafeHouseBuildingProxy::GetBuildingID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "GetBuildingID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASafeHouseBuildingProxy::AddSeamlessFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseBuildingProxy", "AddSeamlessFlag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ASafeHouseDepartment::* ----
void ASafeHouseDepartment::SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseDepartment", "SetInfo");
    struct
    {
        struct FSoftObjectPath IconImgPath;
        struct FText Name;
    } Parms{};
    Parms.IconImgPath = (struct FSoftObjectPath)IconImgPath;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
}

// ---- USafeHouseGameplayDelegates::* ----
void USafeHouseGameplayDelegates::SafeHouseAreaLevelUp(struct FText AreaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseGameplayDelegates", "SafeHouseAreaLevelUp");
    struct
    {
        struct FText AreaName;
    } Parms{};
    Parms.AreaName = (struct FText)AreaName;
    this->ProcessEvent(Func, &Parms);
}

struct USafeHouseGameplayDelegates* USafeHouseGameplayDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseGameplayDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct USafeHouseGameplayDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USafeHouseGameplayUtils::* ----
void USafeHouseGameplayUtils::SetCharacterStaminaChangeRate(struct ADFMCharacter* CHARACTER, float ChangeRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseGameplayUtils", "SetCharacterStaminaChangeRate");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        float ChangeRate;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    Parms.ChangeRate = (float)ChangeRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseGameplayUtils::SetCharacterStamina(struct ADFMCharacter* CHARACTER, float Stamina, float MaxStamina)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseGameplayUtils", "SetCharacterStamina");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        float Stamina;
        float MaxStamina;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    Parms.Stamina = (float)Stamina;
    Parms.MaxStamina = (float)MaxStamina;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseGameplayUtils::NotifyEnter3DSafeHouse(struct UObject* WorldContextObj, uint8_t bEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseGameplayUtils", "NotifyEnter3DSafeHouse");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t bEnter;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bEnter = (uint8_t)bEnter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FString> USafeHouseGameplayUtils::GetSafeHouseAreaLevels(struct UObject* WorldContextObj, struct FString AreaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseGameplayUtils", "GetSafeHouseAreaLevels");
    struct
    {
        struct UObject* WorldContextObj;
        struct FString AreaName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.AreaName = (struct FString)AreaName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ASafeHouseLightCtrl::* ----
void ASafeHouseLightCtrl::ToggleHeightFog(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseLightCtrl", "ToggleHeightFog");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

struct ASafeHouseLightCtrl* ASafeHouseLightCtrl::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseLightCtrl", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct ASafeHouseLightCtrl* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USafeHouseRangeUtil::* ----
void USafeHouseRangeUtil::SwitchToWeapon(struct ADFMCharacter* DFMCharacter, uint32_t EquipPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "SwitchToWeapon");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint32_t EquipPosition;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.EquipPosition = (uint32_t)EquipPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::SetWeaponAction(struct ADFMCharacter* DFMCharacter, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "SetWeaponAction");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t Enable;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::SetupRangeWeapon(struct ADFMWeapon* RangeWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "SetupRangeWeapon");
    struct
    {
        struct ADFMWeapon* RangeWeapon;
    } Parms{};
    Parms.RangeWeapon = (struct ADFMWeapon*)RangeWeapon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::SetRangeDamageMode(struct UObject* WorldContextObj, uint8_t bSOL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "SetRangeDamageMode");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t bSOL;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bSOL = (uint8_t)bSOL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::SetAllowAimOn(struct ADFMCharacter* DFMCharacter, uint8_t bAllowAimOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "SetAllowAimOn");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t bAllowAimOn;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.bAllowAimOn = (uint8_t)bAllowAimOn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::RecoverPlayerAmmo_SOL(struct UInventoryManager* InvMgr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "RecoverPlayerAmmo_SOL");
    struct
    {
        struct UInventoryManager* InvMgr;
    } Parms{};
    Parms.InvMgr = (struct UInventoryManager*)InvMgr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::PlayFirstEquipAnim(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "PlayFirstEquipAnim");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::NotifyEnterRange(struct UObject* WorldContextObj, uint8_t bEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "NotifyEnterRange");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t bEnter;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bEnter = (uint8_t)bEnter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t USafeHouseRangeUtil::IsZooming(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "IsZooming");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USafeHouseRangeUtil::IsInRange(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "IsInRange");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USafeHouseRangeUtil::IsInCollectionRoom(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "IsInCollectionRoom");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USafeHouseRangeUtil::IsCharacterAiming(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "IsCharacterAiming");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USafeHouseRangeUtil::InitPlayerAmmo_SOL(struct UInventoryManager* InvMgr, struct UWeaponManagerComponent* WeaponMgr, struct TMap<uint64_t, uint64_t>& WeaponAmmoMapping, uint8_t bUnlimitedAmmo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "InitPlayerAmmo_SOL");
    struct
    {
        struct UInventoryManager* InvMgr;
        struct UWeaponManagerComponent* WeaponMgr;
        struct TMap<uint64_t, uint64_t> WeaponAmmoMapping;
        uint8_t bUnlimitedAmmo;
    } Parms{};
    Parms.InvMgr = (struct UInventoryManager*)InvMgr;
    Parms.WeaponMgr = (struct UWeaponManagerComponent*)WeaponMgr;
    Parms.bUnlimitedAmmo = (uint8_t)bUnlimitedAmmo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    WeaponAmmoMapping = Parms.WeaponAmmoMapping;
}

void USafeHouseRangeUtil::InitPlayerAmmo_MP(struct UWeaponManagerComponent* WeaponMgr, uint8_t bUnlimitedAmmo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "InitPlayerAmmo_MP");
    struct
    {
        struct UWeaponManagerComponent* WeaponMgr;
        uint8_t bUnlimitedAmmo;
    } Parms{};
    Parms.WeaponMgr = (struct UWeaponManagerComponent*)WeaponMgr;
    Parms.bUnlimitedAmmo = (uint8_t)bUnlimitedAmmo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::DynamicAddRangeInvisibleHudState(struct UObject* WorldContextObj, struct TArray<struct FName> HudNameList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "DynamicAddRangeInvisibleHudState");
    struct
    {
        struct UObject* WorldContextObj;
        struct TArray<struct FName> HudNameList;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.HudNameList = (struct TArray<struct FName>)HudNameList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::ClearFirstActiveWeapons(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "ClearFirstActiveWeapons");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::CancelWeaponZoom(struct ADFMCharacter* DFMCharacter, uint8_t IsQuickZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "CancelWeaponZoom");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t IsQuickZoom;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.IsQuickZoom = (uint8_t)IsQuickZoom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::CancelFirstEquipAnim(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "CancelFirstEquipAnim");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USafeHouseRangeUtil::CancelCharacterAiming(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseRangeUtil", "CancelCharacterAiming");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- USHInteractorBaseComponent::* ----
void USHInteractorBaseComponent::OnEndPlay(EEndPlayReason EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorBaseComponent", "OnEndPlay");
    struct
    {
        enum EEndPlayReason EndPlayReason;
    } Parms{};
    Parms.EndPlayReason = (enum EEndPlayReason)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

void USHInteractorBaseComponent::OnBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorBaseComponent", "OnBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector USHInteractorBaseComponent::GetWhiteDot3DLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorBaseComponent", "GetWhiteDot3DLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USHInteractorNPCComponent::* ----
void USHInteractorNPCComponent::UpdateInteraction(uint8_t bOperating, float dist, float DistToScreenCenter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "UpdateInteraction");
    struct
    {
        uint8_t bOperating;
        float dist;
        float DistToScreenCenter;
    } Parms{};
    Parms.bOperating = (uint8_t)bOperating;
    Parms.dist = (float)dist;
    Parms.DistToScreenCenter = (float)DistToScreenCenter;
    this->ProcessEvent(Func, &Parms);
}

void USHInteractorNPCComponent::SetupWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "SetupWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USHInteractorNPCComponent::SetUIVisibility(ESlateVisibility State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "SetUIVisibility");
    struct
    {
        enum ESlateVisibility State;
    } Parms{};
    Parms.State = (enum ESlateVisibility)State;
    this->ProcessEvent(Func, &Parms);
}

void USHInteractorNPCComponent::SetNPCInteractRot(struct FRotator NewRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "SetNPCInteractRot");
    struct
    {
        struct FRotator NewRot;
    } Parms{};
    Parms.NewRot = (struct FRotator)NewRot;
    this->ProcessEvent(Func, &Parms);
}

void USHInteractorNPCComponent::SetNPCInteractLoc(struct FVector NewLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "SetNPCInteractLoc");
    struct
    {
        struct FVector NewLoc;
    } Parms{};
    Parms.NewLoc = (struct FVector)NewLoc;
    this->ProcessEvent(Func, &Parms);
}

void USHInteractorNPCComponent::SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "SetInfo");
    struct
    {
        struct FSoftObjectPath IconImgPath;
        struct FText Name;
    } Parms{};
    Parms.IconImgPath = (struct FSoftObjectPath)IconImgPath;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USHInteractorNPCComponent::IsInteractionEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "IsInteractionEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector USHInteractorNPCComponent::GetNPCInteractLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SHInteractorNPCComponent", "GetNPCInteractLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UNewIrisSafeHouseInteractorView::* ----
uint8_t UNewIrisSafeHouseInteractorView::RemoveNPCICON(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NewIrisSafeHouseInteractorView", "RemoveNPCICON");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNewIrisSafeHouseInteractorView::RemoveInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NewIrisSafeHouseInteractorView", "RemoveInteractorCmp");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
}

void UNewIrisSafeHouseInteractorView::RemoveBuilding(struct ASafeHouseBuildingProxy* BuildingIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NewIrisSafeHouseInteractorView", "RemoveBuilding");
    struct
    {
        struct ASafeHouseBuildingProxy* BuildingIns;
    } Parms{};
    Parms.BuildingIns = (struct ASafeHouseBuildingProxy*)BuildingIns;
    this->ProcessEvent(Func, &Parms);
}

struct UIrisSafeHouseInteractorNPCIcon* UNewIrisSafeHouseInteractorView::AddNPCICON(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NewIrisSafeHouseInteractorView", "AddNPCICON");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
        struct UIrisSafeHouseInteractorNPCIcon* ReturnValue;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNewIrisSafeHouseInteractorView::AddInteractorCmp(struct USHInteractorBaseComponent* InteractorCmp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NewIrisSafeHouseInteractorView", "AddInteractorCmp");
    struct
    {
        struct USHInteractorBaseComponent* InteractorCmp;
    } Parms{};
    Parms.InteractorCmp = (struct USHInteractorBaseComponent*)InteractorCmp;
    this->ProcessEvent(Func, &Parms);
}

void UNewIrisSafeHouseInteractorView::AddBuilding(struct ASafeHouseBuildingProxy* BuildingIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NewIrisSafeHouseInteractorView", "AddBuilding");
    struct
    {
        struct ASafeHouseBuildingProxy* BuildingIns;
    } Parms{};
    Parms.BuildingIns = (struct ASafeHouseBuildingProxy*)BuildingIns;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
