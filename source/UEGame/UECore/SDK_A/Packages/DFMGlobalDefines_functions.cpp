#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"
#include "GPGameInput.hpp"
#include "GPGlobalDefines.hpp"
#include "GPQuest.hpp"
#include "NetworkControl.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBreakthroughUIConfig
struct FName UBreakthroughUIConfig::GetTextStyleByType(EBreakthroughTextType InTextType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetTextStyleByType");
    struct
    {
        enum EBreakthroughTextType InTextType;
        struct FName ReturnValue;
    } Parms{};
    Parms.InTextType = (enum EBreakthroughTextType)InTextType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBreakthroughUIConfig::GetTeamIconByTeamIDSelfRoom(int32_t InTeamId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetTeamIconByTeamIDSelfRoom");
    struct
    {
        int32_t InTeamId;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InTeamId = (int32_t)InTeamId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBreakthroughUIConfig::GetTeamIconByTeamID(int32_t InTeamId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetTeamIconByTeamID");
    struct
    {
        int32_t InTeamId;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InTeamId = (int32_t)InTeamId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBreakthroughUIConfig::GetSectorAnchorIconByName(const struct FName& InSectorAnchorString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetSectorAnchorIconByName");
    struct
    {
        struct FName InSectorAnchorString;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InSectorAnchorString = (struct FName)InSectorAnchorString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBreakthroughUIConfig::GetSameTeamIconByTeamIDSelfRoom(int32_t InTeamId, uint8_t bVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetSameTeamIconByTeamIDSelfRoom");
    struct
    {
        int32_t InTeamId;
        uint8_t bVehicle;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InTeamId = (int32_t)InTeamId;
    Parms.bVehicle = (uint8_t)bVehicle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBreakthroughUIConfig::GetSameTeamIconByTeamID(int32_t InTeamId, uint8_t bVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetSameTeamIconByTeamID");
    struct
    {
        int32_t InTeamId;
        uint8_t bVehicle;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InTeamId = (int32_t)InTeamId;
    Parms.bVehicle = (uint8_t)bVehicle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UBreakthroughUIConfig::GetIconPathByType(EBreakthroughUIIconType InIconType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetIconPathByType");
    struct
    {
        enum EBreakthroughUIIconType InIconType;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InIconType = (enum EBreakthroughUIIconType)InIconType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UBreakthroughUIConfig::GetColorByType(EBreakthroughUIColorType InColorType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BreakthroughUIConfig", "GetColorByType");
    struct
    {
        enum EBreakthroughUIColorType InColorType;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.InColorType = (enum EBreakthroughUIColorType)InColorType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCharacterBodyPartMeshStatics
void UCharacterBodyPartMeshStatics::SetMeshByConfig(struct UMeshComponent* Mesh, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CharacterBodyPartMeshStatics", "SetMeshByConfig");
    struct
    {
        struct UMeshComponent* Mesh;
        struct FName Name;
    } Parms{};
    Parms.Mesh = (struct UMeshComponent*)Mesh;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UCharacterCommercialDataLibrary
uint8_t UCharacterCommercialDataLibrary::IsCrossLinkageLines(struct FName LinesId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CharacterCommercialDataLibrary", "IsCrossLinkageLines");
    struct
    {
        struct FName LinesId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LinesId = (struct FName)LinesId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCharacterCommercialDataLibrary::IsAllowPlayCrossLinkageLines(struct FName LinesId, struct FName CurrentFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CharacterCommercialDataLibrary", "IsAllowPlayCrossLinkageLines");
    struct
    {
        struct FName LinesId;
        struct FName CurrentFashionId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LinesId = (struct FName)LinesId;
    Parms.CurrentFashionId = (struct FName)CurrentFashionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCollectionRoomConstantWrap
struct FName UCollectionRoomConstantWrap::GetConstantByName(struct FName ConstantName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CollectionRoomConstantWrap", "GetConstantByName");
    struct
    {
        struct FName ConstantName;
        struct FName ReturnValue;
    } Parms{};
    Parms.ConstantName = (struct FName)ConstantName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCollectionRoomLimitedCollectionWrap
struct FVector UCollectionRoomLimitedCollectionWrap::GetScaleByItemID(struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CollectionRoomLimitedCollectionWrap", "GetScaleByItemID");
    struct
    {
        struct FName ItemID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UCollectionRoomLimitedCollectionWrap::GetRotatorByItemID(struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CollectionRoomLimitedCollectionWrap", "GetRotatorByItemID");
    struct
    {
        struct FName ItemID;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UCollectionRoomLimitedCollectionWrap::GetLocationByItemID(struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CollectionRoomLimitedCollectionWrap", "GetLocationByItemID");
    struct
    {
        struct FName ItemID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCollectionRoomWeaponRackWrap
struct FTransform UCollectionRoomWeaponRackWrap::GetTransformByItemID(struct FName ItemID, uint8_t bOnCabinet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CollectionRoomWeaponRackWrap", "GetTransformByItemID");
    struct
    {
        struct FName ItemID;
        uint8_t bOnCabinet;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    Parms.bOnCabinet = (uint8_t)bOnCabinet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPCollectionWeaponDataConfig
struct UGPCollectionWeaponDataConfig* UGPCollectionWeaponDataConfig::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPCollectionWeaponDataConfig", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGPCollectionWeaponDataConfig* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// URedPackageConfigWrapper
uint8_t URedPackageConfigWrapper::IsUnLuckyNumber(int64_t Coins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "IsUnLuckyNumber");
    struct
    {
        int64_t Coins;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Coins = (int64_t)Coins;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URedPackageConfigWrapper::GetRedEnvelopeTotalTimesAndCoins(uint64_t ItemID, int32_t& Times, int64_t& Coins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "GetRedEnvelopeTotalTimesAndCoins");
    struct
    {
        uint64_t ItemID;
        int32_t Times;
        int64_t Coins;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Times = Parms.Times;
    Coins = Parms.Coins;
}

void URedPackageConfigWrapper::GetRandomHongBaoItemIdAndCoins(const int64_t& RemainCoins, const int32_t& RemainTimes, uint64_t& ItemID, int64_t& Coin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "GetRandomHongBaoItemIdAndCoins");
    struct
    {
        int64_t RemainCoins;
        int32_t RemainTimes;
        uint64_t ItemID;
        int64_t Coin;
    } Parms{};
    Parms.RemainCoins = (int64_t)RemainCoins;
    Parms.RemainTimes = (int32_t)RemainTimes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ItemID = Parms.ItemID;
    Coin = Parms.Coin;
}

int64_t URedPackageConfigWrapper::GetRandomCoinsByHongBaoItemId(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "GetRandomCoinsByHongBaoItemId");
    struct
    {
        uint64_t ItemID;
        int64_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t URedPackageConfigWrapper::GetHongBaoItemIdByCoins(int64_t Coins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "GetHongBaoItemIdByCoins");
    struct
    {
        int64_t Coins;
        uint64_t ReturnValue;
    } Parms{};
    Parms.Coins = (int64_t)Coins;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString URedPackageConfigWrapper::GetHongBaoConstValueById(struct FName ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "GetHongBaoConstValueById");
    struct
    {
        struct FName ID;
        struct FString ReturnValue;
    } Parms{};
    Parms.ID = (struct FName)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URedPackageConfigWrapper* URedPackageConfigWrapper::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RedPackageConfigWrapper", "Get");
    struct
    {
        struct URedPackageConfigWrapper* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ACSVChangeUtil
void ACSVChangeUtil::SaveTableToCSV(struct UDataTable* DataTable, struct FString CSVFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CSVChangeUtil", "SaveTableToCSV");
    struct
    {
        struct UDataTable* DataTable;
        struct FString CSVFileName;
    } Parms{};
    Parms.DataTable = (struct UDataTable*)DataTable;
    Parms.CSVFileName = (struct FString)CSVFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ACSVChangeUtil::SaveStringToCSV(struct TArray<struct FString> str, struct FString CSVFileName, uint8_t Append)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CSVChangeUtil", "SaveStringToCSV");
    struct
    {
        struct TArray<struct FString> str;
        struct FString CSVFileName;
        uint8_t Append;
    } Parms{};
    Parms.str = (struct TArray<struct FString>)str;
    Parms.CSVFileName = (struct FString)CSVFileName;
    Parms.Append = (uint8_t)Append;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ACSVChangeUtil::RefreshTableFromCSV(struct UDataTable* DataTable, struct FString CSVFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CSVChangeUtil", "RefreshTableFromCSV");
    struct
    {
        struct UDataTable* DataTable;
        struct FString CSVFileName;
    } Parms{};
    Parms.DataTable = (struct UDataTable*)DataTable;
    Parms.CSVFileName = (struct FString)CSVFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UDataTableRuntimeUtil
void UDataTableRuntimeUtil::SaveDataTableToCSV(struct UDataTable* DataTable, struct FString CSVFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableRuntimeUtil", "SaveDataTableToCSV");
    struct
    {
        struct UDataTable* DataTable;
        struct FString CSVFileName;
    } Parms{};
    Parms.DataTable = (struct UDataTable*)DataTable;
    Parms.CSVFileName = (struct FString)CSVFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDataTableRuntimeUtil::RefeshDataTableFromCSV(struct UDataTable* DataTable, struct FString CSVFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableRuntimeUtil", "RefeshDataTableFromCSV");
    struct
    {
        struct UDataTable* DataTable;
        struct FString CSVFileName;
    } Parms{};
    Parms.DataTable = (struct UDataTable*)DataTable;
    Parms.CSVFileName = (struct FString)CSVFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UDataTableRuntimeUtil::DataTableDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableRuntimeUtil", "DataTableDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDataTableRuntimeUtil::CSVDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DataTableRuntimeUtil", "CSVDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFCAPTCHALibrary
struct FName UDFCAPTCHALibrary::GetSceneName(ECAPTCHASceneType SceneType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFCAPTCHALibrary", "GetSceneName");
    struct
    {
        enum ECAPTCHASceneType SceneType;
        struct FName ReturnValue;
    } Parms{};
    Parms.SceneType = (enum ECAPTCHASceneType)SceneType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFCustomerServiceLibrary
int32_t UDFCustomerServiceLibrary::GetSupportPlatforms(struct FString SupportPlatformStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFCustomerServiceLibrary", "GetSupportPlatforms");
    struct
    {
        struct FString SupportPlatformStr;
        int32_t ReturnValue;
    } Parms{};
    Parms.SupportPlatformStr = (struct FString)SupportPlatformStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UDFCustomerServiceLibrary::GetEntranceName(ECustomerServicesEntranceType EntranceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFCustomerServiceLibrary", "GetEntranceName");
    struct
    {
        enum ECustomerServicesEntranceType EntranceType;
        struct FName ReturnValue;
    } Parms{};
    Parms.EntranceType = (enum ECustomerServicesEntranceType)EntranceType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMColorDefineBlueprintHelper
struct FDFMColorDefineRow UDFMColorDefineBlueprintHelper::GetColorByQualityId(int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMColorDefineBlueprintHelper", "GetColorByQualityId");
    struct
    {
        int32_t ID;
        struct FDFMColorDefineRow ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMCommonButton
void UDFMCommonButton::SetOpenDefaultSound(uint8_t bIsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonButton", "SetOpenDefaultSound");
    struct
    {
        uint8_t bIsOpen;
    } Parms{};
    Parms.bIsOpen = (uint8_t)bIsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonButton::OverLoadSound(struct FString InSoundName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonButton", "OverLoadSound");
    struct
    {
        struct FString InSoundName;
    } Parms{};
    Parms.InSoundName = (struct FString)InSoundName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonButton::OnPlayDefaultSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonButton", "OnPlayDefaultSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonButton::CloseDefaultSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonButton", "CloseDefaultSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMCommonHover
void UDFMCommonHover::StopAutoAnimation(struct FName AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "StopAutoAnimation");
    struct
    {
        struct FName AnimationName;
    } Parms{};
    Parms.AnimationName = (struct FName)AnimationName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::SetHideFreeAnalogCursorHideFocusContentRoot(uint8_t InHideFreeAnalogCursorHideFocusContentRoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "SetHideFreeAnalogCursorHideFocusContentRoot");
    struct
    {
        uint8_t InHideFreeAnalogCursorHideFocusContentRoot;
    } Parms{};
    Parms.InHideFreeAnalogCursorHideFocusContentRoot = (uint8_t)InHideFreeAnalogCursorHideFocusContentRoot;
    this->ProcessEvent(Func, &Parms);
}

struct UUMGSequencePlayer* UDFMCommonHover::PlayAutoAnimation(struct FName AnimationName, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, uint8_t bJumpToEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "PlayAutoAnimation");
    struct
    {
        struct FName AnimationName;
        int32_t NumberOfLoops;
        enum EUMGSequencePlayMode PlayMode;
        uint8_t bJumpToEnd;
        struct UUMGSequencePlayer* ReturnValue;
    } Parms{};
    Parms.AnimationName = (struct FName)AnimationName;
    Parms.NumberOfLoops = (int32_t)NumberOfLoops;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.bJumpToEnd = (uint8_t)bJumpToEnd;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMCommonHover::OnUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnProcessEnableStyleChanged(uint8_t bInActivated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnProcessEnableStyleChanged");
    struct
    {
        uint8_t bInActivated;
    } Parms{};
    Parms.bInActivated = (uint8_t)bInActivated;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnParentUnhoverd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnParentUnhoverd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnParentReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnParentReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnParentPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnParentPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnParentHoverd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnParentHoverd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnHandleFocusReceived(const struct FGeometry& InGeometry, const struct FFocusEvent& InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnHandleFocusReceived");
    struct
    {
        struct FGeometry InGeometry;
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InGeometry = (struct FGeometry)InGeometry;
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnHandleFocusLost(const struct FFocusEvent& InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnHandleFocusLost");
    struct
    {
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::OnCommonHoverEvent__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "OnCommonHoverEvent__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::HandleInputTypeChanged(EGPInputType InInputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "HandleInputTypeChanged");
    struct
    {
        enum EGPInputType InInputType;
    } Parms{};
    Parms.InInputType = (enum EGPInputType)InInputType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonHover::BindHoverEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonHover", "BindHoverEvents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMCommonMediaImage
void UDFMCommonMediaImage::StopMedia()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "StopMedia");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::SetVolumeFromConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "SetVolumeFromConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::SetVolume(float InVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "SetVolume");
    struct
    {
        float InVolume;
    } Parms{};
    Parms.InVolume = (float)InVolume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::SeekTo(int32_t TargetTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "SeekTo");
    struct
    {
        int32_t TargetTime;
    } Parms{};
    Parms.TargetTime = (int32_t)TargetTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::SafeCloseMedia()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "SafeCloseMedia");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::Play(struct FString MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "Play");
    struct
    {
        struct FString MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FString)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::OnLegacyTextureShowEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "OnLegacyTextureShowEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::MediaPlayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "MediaPlayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCommonMediaImage::MediaOpened(struct FString OpenedUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "MediaOpened");
    struct
    {
        struct FString OpenedUrl;
    } Parms{};
    Parms.OpenedUrl = (struct FString)OpenedUrl;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMCommonMediaImage::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMCommonMediaImage::InitDataByName(const struct FName& MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "InitDataByName");
    struct
    {
        struct FName MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FName)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMCommonMediaImage::GetTotalTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "GetTotalTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMCommonMediaImage::GetCurrentUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "GetCurrentUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMCommonMediaImage::GetCurMediaTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCommonMediaImage", "GetCurMediaTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMImage
void UDFMImage::SetRotated(uint8_t InRotated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImage", "SetRotated");
    struct
    {
        uint8_t InRotated;
    } Parms{};
    Parms.InRotated = (uint8_t)InRotated;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMImage::IsRotated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImage", "IsRotated");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMImage::IsRotate45()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImage", "IsRotate45");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMImageLoadingWidget
void UDFMImageLoadingWidget::StopLoadingAnim_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImageLoadingWidget", "StopLoadingAnim_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMImageLoadingWidget::StopLoadingAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImageLoadingWidget", "StopLoadingAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMImageLoadingWidget::PlayLoadingAnim_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImageLoadingWidget", "PlayLoadingAnim_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMImageLoadingWidget::PlayLoadingAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImageLoadingWidget", "PlayLoadingAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMImageLoadingWidget::OnIconSizeChange_AbsoluteSizeAndLocalSize(struct FVector2D AbsoluteSize, struct FVector2D LocalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImageLoadingWidget", "OnIconSizeChange_AbsoluteSizeAndLocalSize");
    struct
    {
        struct FVector2D AbsoluteSize;
        struct FVector2D LocalSize;
    } Parms{};
    Parms.AbsoluteSize = (struct FVector2D)AbsoluteSize;
    Parms.LocalSize = (struct FVector2D)LocalSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFMImageLoadingWidget::OnIconSizeChange(struct FVector2D LocalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMImageLoadingWidget", "OnIconSizeChange");
    struct
    {
        struct FVector2D LocalSize;
    } Parms{};
    Parms.LocalSize = (struct FVector2D)LocalSize;
    this->ProcessEvent(Func, &Parms);
}

// UDFMSDKWebBrowserWidget
void UDFMSDKWebBrowserWidget::StopLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "StopLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::Reload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "Reload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::OnWebBrowserCallback(struct FString Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "OnWebBrowserCallback");
    struct
    {
        struct FString Param;
    } Parms{};
    Parms.Param = (struct FString)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::OnSDFMSDKWebBrowserUrlChanged__DelegateSignature(const struct FText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "OnSDFMSDKWebBrowserUrlChanged__DelegateSignature");
    struct
    {
        struct FText Text;
    } Parms{};
    Parms.Text = (struct FText)Text;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::OnSDFMSDKWebBrowserLoadError__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "OnSDFMSDKWebBrowserLoadError__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::OnSDFMSDKWebBrowserLoadCompleted__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "OnSDFMSDKWebBrowserLoadCompleted__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::OnSDFMSDKWebBrowserCallback__DelegateSignature(struct FString Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "OnSDFMSDKWebBrowserCallback__DelegateSignature");
    struct
    {
        struct FString Param;
    } Parms{};
    Parms.Param = (struct FString)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::OnSDFMSDKWebBrowserBeforePopup__DelegateSignature(struct FString URL, struct FString Frame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "OnSDFMSDKWebBrowserBeforePopup__DelegateSignature");
    struct
    {
        struct FString URL;
        struct FString Frame;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Frame = (struct FString)Frame;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::LoadURL(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "LoadURL");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::LoadString(struct FString Contents, struct FString DummyURL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "LoadString");
    struct
    {
        struct FString Contents;
        struct FString DummyURL;
    } Parms{};
    Parms.Contents = (struct FString)Contents;
    Parms.DummyURL = (struct FString)DummyURL;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMSDKWebBrowserWidget::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMSDKWebBrowserWidget::IsLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "IsLoaded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMSDKWebBrowserWidget::GoForward()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "GoForward");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSDKWebBrowserWidget::GoBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "GoBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMSDKWebBrowserWidget::GetUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "GetUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMSDKWebBrowserWidget::GetTitleText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "GetTitleText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMSDKWebBrowserWidget::GetSystemDPIScaleFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "GetSystemDPIScaleFactor");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UDFMSDKWebBrowserWidget::GetAddressBarUrlText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "GetAddressBarUrlText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMSDKWebBrowserWidget::ExecuteJavascript(struct FString ScriptText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "ExecuteJavascript");
    struct
    {
        struct FString ScriptText;
    } Parms{};
    Parms.ScriptText = (struct FString)ScriptText;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMSDKWebBrowserWidget::CanGoForward()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "CanGoForward");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMSDKWebBrowserWidget::CanGoBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSDKWebBrowserWidget", "CanGoBack");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMWebMediaPlayer
void UDFMWebMediaPlayer::StopMedia()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "StopMedia");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMWebMediaPlayer::StopCurMedia()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "StopCurMedia");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMWebMediaPlayer::SeekTo(int32_t TargetTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "SeekTo");
    struct
    {
        int32_t TargetTime;
    } Parms{};
    Parms.TargetTime = (int32_t)TargetTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMWebMediaPlayer::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMWebMediaPlayer::Play(struct FString MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "Play");
    struct
    {
        struct FString MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FString)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMWebMediaPlayer::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMWebMediaPlayer::OnWebMediaFunctionCall(struct FString Function, struct FString Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "OnWebMediaFunctionCall");
    struct
    {
        struct FString Function;
        struct FString Params;
    } Parms{};
    Parms.Function = (struct FString)Function;
    Parms.Params = (struct FString)Params;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMWebMediaPlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMWebMediaPlayer::InitDataByName(const struct FName& MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "InitDataByName");
    struct
    {
        struct FName MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FName)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMWebMediaPlayer::GetTotalTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "GetTotalTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMWebMediaPlayer::GetCurrentUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "GetCurrentUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMWebMediaPlayer::GetCurMediaTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWebMediaPlayer", "GetCurMediaTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFPermissionConfigLibrary
int32_t UDFPermissionConfigLibrary::GetSupportPlatforms(struct FString SupportPlatformStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFPermissionConfigLibrary", "GetSupportPlatforms");
    struct
    {
        struct FString SupportPlatformStr;
        int32_t ReturnValue;
    } Parms{};
    Parms.SupportPlatformStr = (struct FString)SupportPlatformStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFRouletteBaseView
void UDFRouletteBaseView::UpdateDragOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRouletteBaseView", "UpdateDragOffset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFRouletteBaseView::SetRouletteHoverAndSliderAngle(float InSelectAngle, float InSliderAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRouletteBaseView", "SetRouletteHoverAndSliderAngle");
    struct
    {
        float InSelectAngle;
        float InSliderAngle;
    } Parms{};
    Parms.InSelectAngle = (float)InSelectAngle;
    Parms.InSliderAngle = (float)InSliderAngle;
    this->ProcessEvent(Func, &Parms);
}

void UDFRouletteBaseView::OnUnhovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRouletteBaseView", "OnUnhovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFRouletteBaseView::OnHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRouletteBaseView", "OnHovered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UDFRouletteBaseView::GetPressedStartLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRouletteBaseView", "GetPressedStartLocation");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UDFRouletteBaseView::GetCurPressedLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFRouletteBaseView", "GetCurPressedLocation");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFRouletteBaseView::CalculateAngle(const struct FVector2D& InVecA, const struct FVector2D& InVecB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFRouletteBaseView", "CalculateAngle");
    struct
    {
        struct FVector2D InVecA;
        struct FVector2D InVecB;
        float ReturnValue;
    } Parms{};
    Parms.InVecA = (struct FVector2D)InVecA;
    Parms.InVecB = (struct FVector2D)InVecB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFStreamMediaImage
void UDFStreamMediaImage::StopMedia()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "StopMedia");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::SetVolumeFromConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "SetVolumeFromConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::SetVolume(float InVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "SetVolume");
    struct
    {
        float InVolume;
    } Parms{};
    Parms.InVolume = (float)InVolume;
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::SeekTo(int32_t TargetTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "SeekTo");
    struct
    {
        int32_t TargetTime;
    } Parms{};
    Parms.TargetTime = (int32_t)TargetTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::Play(struct FString MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "Play");
    struct
    {
        struct FString MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FString)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::OnSubTitleAssetLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "OnSubTitleAssetLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::OnProcessEnterGameFlowStage(EGameFlowStageType InGameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "OnProcessEnterGameFlowStage");
    struct
    {
        enum EGameFlowStageType InGameFlowStage;
    } Parms{};
    Parms.InGameFlowStage = (enum EGameFlowStageType)InGameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::OnMediaAudioPlayBegin(const struct FName& AudioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "OnMediaAudioPlayBegin");
    struct
    {
        struct FName AudioName;
    } Parms{};
    Parms.AudioName = (struct FName)AudioName;
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::OnApplicationDeactivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "OnApplicationDeactivated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::OnApplicationActivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "OnApplicationActivated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::MediaPlayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "MediaPlayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::MediaOpened(struct FString OpenedUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "MediaOpened");
    struct
    {
        struct FString OpenedUrl;
    } Parms{};
    Parms.OpenedUrl = (struct FString)OpenedUrl;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFStreamMediaImage::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFStreamMediaImage::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFStreamMediaImage::InitDataByName(const struct FName& MediaConfigRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "InitDataByName");
    struct
    {
        struct FName MediaConfigRowName;
    } Parms{};
    Parms.MediaConfigRowName = (struct FName)MediaConfigRowName;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFStreamMediaImage::GetTotalTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "GetTotalTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFStreamMediaImage::GetCurrentUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "GetCurrentUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFStreamMediaImage::GetCurMediaTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "GetCurMediaTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFStreamMediaImage::DealWithNetworkControl(const ENetworkControlType& NetworkControlType, uint8_t ControlNetworkOrNot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "DealWithNetworkControl");
    struct
    {
        enum ENetworkControlType NetworkControlType;
        uint8_t ControlNetworkOrNot;
    } Parms{};
    Parms.NetworkControlType = (enum ENetworkControlType)NetworkControlType;
    Parms.ControlNetworkOrNot = (uint8_t)ControlNetworkOrNot;
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::ClearMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "ClearMemory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStreamMediaImage::CheckAudioSync()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStreamMediaImage", "CheckAudioSync");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UFashionListView
void UFashionListView::ScrollFashionItemIntoView(struct UWidget* WidgetToFind)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FashionListView", "ScrollFashionItemIntoView");
    struct
    {
        struct UWidget* WidgetToFind;
    } Parms{};
    Parms.WidgetToFind = (struct UWidget*)WidgetToFind;
    this->ProcessEvent(Func, &Parms);
}

void UFashionListView::OnInit(int32_t InIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FashionListView", "OnInit");
    struct
    {
        int32_t InIndex;
    } Parms{};
    Parms.InIndex = (int32_t)InIndex;
    this->ProcessEvent(Func, &Parms);
}

float UFashionListView::GetOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FashionListView", "GetOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UFashionListView::GetDragDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FashionListView", "GetDragDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFashionListView::DragToSnap(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FashionListView", "DragToSnap");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

struct USizeBox* UFashionListView::CreateSubSizeBox(int32_t InWidthOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FashionListView", "CreateSubSizeBox");
    struct
    {
        int32_t InWidthOverride;
        struct USizeBox* ReturnValue;
    } Parms{};
    Parms.InWidthOverride = (int32_t)InWidthOverride;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGlobalConstWrapper
uint8_t UGlobalConstWrapper::IsItemOnlyOwnerCanCarryOut(uint64_t ItemID, int32_t ForceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GlobalConstWrapper", "IsItemOnlyOwnerCanCarryOut");
    struct
    {
        uint64_t ItemID;
        int32_t ForceType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ForceType = (int32_t)ForceType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGlobalConstWrapper::IsItemIDForbiddenToCarryOut(uint64_t ItemID, int32_t ForceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GlobalConstWrapper", "IsItemIDForbiddenToCarryOut");
    struct
    {
        uint64_t ItemID;
        int32_t ForceType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ForceType = (int32_t)ForceType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGlobalConstWrapper::GetSpecifiedSearchTime(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GlobalConstWrapper", "GetSpecifiedSearchTime");
    struct
    {
        uint64_t ItemID;
        float ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGlobalConstWrapper::GetArchiveItemIdByExpertId(int64_t ExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GlobalConstWrapper", "GetArchiveItemIdByExpertId");
    struct
    {
        int64_t ExpertId;
        uint64_t ReturnValue;
    } Parms{};
    Parms.ExpertId = (int64_t)ExpertId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGlobalConstWrapper* UGlobalConstWrapper::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GlobalConstWrapper", "Get");
    struct
    {
        struct UGlobalConstWrapper* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGlobalDataTableSystemManager
void UGlobalDataTableSystemManager::OnLiteDataTableReset(const struct FName& TableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GlobalDataTableSystemManager", "OnLiteDataTableReset");
    struct
    {
        struct FName TableName;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    this->ProcessEvent(Func, &Parms);
}

void UGlobalDataTableSystemManager::OnLiteDataTableReady(const struct FName& TableName, float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GlobalDataTableSystemManager", "OnLiteDataTableReady");
    struct
    {
        struct FName TableName;
        float Progress;
    } Parms{};
    Parms.TableName = (struct FName)TableName;
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

// UBreakthroughRebornConfigManager
void UBreakthroughRebornConfigManager::PreloadCurveData(const struct FBreakthroughRebornConfigRow& InRebornConfigRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BreakthroughRebornConfigManager", "PreloadCurveData");
    struct
    {
        struct FBreakthroughRebornConfigRow InRebornConfigRow;
    } Parms{};
    Parms.InRebornConfigRow = (struct FBreakthroughRebornConfigRow)InRebornConfigRow;
    this->ProcessEvent(Func, &Parms);
}

void UBreakthroughRebornConfigManager::OnCurveDataLoadComplete(struct TArray<struct FSoftObjectPath> Assets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BreakthroughRebornConfigManager", "OnCurveDataLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    this->ProcessEvent(Func, &Parms);
}

// UBreakthroughRebornConfigByTagManager
void UBreakthroughRebornConfigByTagManager::PreloadCurveData(const struct FBreakthroughRebornConfigRow& InRebornConfigRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BreakthroughRebornConfigByTagManager", "PreloadCurveData");
    struct
    {
        struct FBreakthroughRebornConfigRow InRebornConfigRow;
    } Parms{};
    Parms.InRebornConfigRow = (struct FBreakthroughRebornConfigRow)InRebornConfigRow;
    this->ProcessEvent(Func, &Parms);
}

void UBreakthroughRebornConfigByTagManager::OnCurveDataLoadComplete(struct TArray<struct FSoftObjectPath> Assets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BreakthroughRebornConfigByTagManager", "OnCurveDataLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    this->ProcessEvent(Func, &Parms);
}

// UGPBlueprintUMGHelper
struct FText UGPBlueprintUMGHelper::TruncateText_Font(struct FSlateFontInfo Font, struct FText InText, float Width)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUMGHelper", "TruncateText_Font");
    struct
    {
        struct FSlateFontInfo Font;
        struct FText InText;
        float Width;
        struct FText ReturnValue;
    } Parms{};
    Parms.Font = (struct FSlateFontInfo)Font;
    Parms.InText = (struct FText)InText;
    Parms.Width = (float)Width;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UGPBlueprintUMGHelper::TruncateText_EditableTextBox(struct UEditableTextBox* TextBlock, struct FText InText, float Width)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPBlueprintUMGHelper", "TruncateText_EditableTextBox");
    struct
    {
        struct UEditableTextBox* TextBlock;
        struct FText InText;
        float Width;
        struct FText ReturnValue;
    } Parms{};
    Parms.TextBlock = (struct UEditableTextBox*)TextBlock;
    Parms.InText = (struct FText)InText;
    Parms.Width = (float)Width;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGuideUtils
int32_t UGuideUtils::StopGuide(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "StopGuide");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGuideUtils::StartGuide(struct UObject* WorldContextObj, int32_t GuideStageId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "StartGuide");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t GuideStageId;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.GuideStageId = (int32_t)GuideStageId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGuideUtils::SetNumberMpGuideIsFinished(struct UObject* WorldContextObj, int32_t bMpFinished)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "SetNumberMpGuideIsFinished");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t bMpFinished;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bMpFinished = (int32_t)bMpFinished;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::SetLootingAiIndex(struct UObject* WorldContextObj, int32_t aiIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "SetLootingAiIndex");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t aiIndex;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.aiIndex = (int32_t)aiIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGuideUtils::SetGuideStateInGame(struct UObject* WorldContextObj, uint8_t bGudingInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "SetGuideStateInGame");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t bGudingInGame;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bGudingInGame = (uint8_t)bGudingInGame;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGuideUtils::SetFinished3CGuideState(struct UObject* WorldContextObj, uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "SetFinished3CGuideState");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t State;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.State = (uint8_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::SetBoolMpGuideIsFinished(struct UObject* WorldContextObj, uint8_t bMpFinished)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "SetBoolMpGuideIsFinished");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t bMpFinished;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bMpFinished = (uint8_t)bMpFinished;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::SendClientCommonEventLog(struct UObject* WorldContextObj, int32_t EventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "SendClientCommonEventLog");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t EventId;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.EventId = (int32_t)EventId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::ResetNewPlayerMatchLootGuide(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "ResetNewPlayerMatchLootGuide");
    struct
    {
        struct UObject* WorldContextObj;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::NtfGuideEnd(struct UObject* WorldContextObj, EGuideStage GuideStageId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "NtfGuideEnd");
    struct
    {
        struct UObject* WorldContextObj;
        enum EGuideStage GuideStageId;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.GuideStageId = (enum EGuideStage)GuideStageId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::InitFinished3CGuideState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "InitFinished3CGuideState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGuideUtils::GetNumberMpGuideIsFinished(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "GetNumberMpGuideIsFinished");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGuideUtils::GetMpMatchCount(struct UObject* WorldContextObj, uint8_t bIgnoreQuit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "GetMpMatchCount");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t bIgnoreQuit;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.bIgnoreQuit = (uint8_t)bIgnoreQuit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGuideUtils::GetHasFinished3CGuide(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "GetHasFinished3CGuide");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGuideUtils::GetBoolMpGuideIsFinished(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "GetBoolMpGuideIsFinished");
    struct
    {
        struct UObject* WorldContextObj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGuideUtils::ClientSetNotFinishGuideCount(struct UObject* WorldContextObj, int32_t GuideCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "ClientSetNotFinishGuideCount");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t GuideCount;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.GuideCount = (int32_t)GuideCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::BoardcastOnPopFunctionClosed(struct UObject* WorldContextObj, int32_t GuidePopFunctionDescId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "BoardcastOnPopFunctionClosed");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t GuidePopFunctionDescId;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.GuidePopFunctionDescId = (int32_t)GuidePopFunctionDescId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGuideUtils::BoardcastOnGuideClickUIClosed(struct UObject* WorldContextObj, int32_t GuideClickId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GuideUtils", "BoardcastOnGuideClickUIClosed");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t GuideClickId;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.GuideClickId = (int32_t)GuideClickId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UItemCoreUtil
uint8_t UItemCoreUtil::IsHongBao(const struct FItemID& ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemCoreUtil", "IsHongBao");
    struct
    {
        struct FItemID ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemCoreUtil::IsGoldNest(const uint64_t& ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemCoreUtil", "IsGoldNest");
    struct
    {
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULineCanvasPanel
void ULineCanvasPanel::SetLinesVisibility(ESlateVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LineCanvasPanel", "SetLinesVisibility");
    struct
    {
        enum ESlateVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum ESlateVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void ULineCanvasPanel::DrawLines()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LineCanvasPanel", "DrawLines");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULineCanvasPanel::ClearLineImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LineCanvasPanel", "ClearLineImage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULineCanvasPanel::ClearLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LineCanvasPanel", "ClearLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULineCanvasPanel::AddLine(struct FVector2D Start, struct FVector2D End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LineCanvasPanel", "AddLine");
    struct
    {
        struct FVector2D Start;
        struct FVector2D End;
    } Parms{};
    Parms.Start = (struct FVector2D)Start;
    Parms.End = (struct FVector2D)End;
    this->ProcessEvent(Func, &Parms);
}

// UMapInfoConfig
struct FString UMapInfoConfig::GetMapPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapInfoConfig", "GetMapPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMapInfoData
void UMapInfoData::OnMapInfoConfigLoadedComplete(struct TArray<struct FSoftObjectPath> MapInfoConfigArrToLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapInfoData", "OnMapInfoConfigLoadedComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> MapInfoConfigArrToLoad;
    } Parms{};
    Parms.MapInfoConfigArrToLoad = (struct TArray<struct FSoftObjectPath>)MapInfoConfigArrToLoad;
    this->ProcessEvent(Func, &Parms);
}

// UMaskWidget
void UMaskWidget::SetMaskSizeXY(const int32_t& ClipIndex, const float& X, const float& Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskSizeXY");
    struct
    {
        int32_t ClipIndex;
        float X;
        float Y;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetMaskSize(const int32_t& ClipIndex, const struct FVector2D& size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskSize");
    struct
    {
        int32_t ClipIndex;
        struct FVector2D size;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.size = (struct FVector2D)size;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetMaskPosXY(const int32_t& ClipIndex, const float& X, const float& Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskPosXY");
    struct
    {
        int32_t ClipIndex;
        float X;
        float Y;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetMaskPosSizeXYZW(const int32_t& ClipIndex, const float& X, const float& Y, const float& Z, const float& W)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskPosSizeXYZW");
    struct
    {
        int32_t ClipIndex;
        float X;
        float Y;
        float Z;
        float W;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    Parms.W = (float)W;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetMaskPosSize(const int32_t& ClipIndex, const struct FVector4& PosSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskPosSize");
    struct
    {
        int32_t ClipIndex;
        struct FVector4 PosSize;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.PosSize = (struct FVector4)PosSize;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetMaskPos(const int32_t& ClipIndex, const struct FVector2D& pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskPos");
    struct
    {
        int32_t ClipIndex;
        struct FVector2D pos;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.pos = (struct FVector2D)pos;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetMaskImage(const int32_t& ClipIndex, struct UTexture2D* Tex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetMaskImage");
    struct
    {
        int32_t ClipIndex;
        struct UTexture2D* Tex;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.Tex = (struct UTexture2D*)Tex;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetBrushTintColor(struct FSlateColor TintColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetBrushTintColor");
    struct
    {
        struct FSlateColor TintColor;
    } Parms{};
    Parms.TintColor = (struct FSlateColor)TintColor;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetBgOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetBgOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetBgImage(struct UTexture2D* Tex, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetBgImage");
    struct
    {
        struct UTexture2D* Tex;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Tex = (struct UTexture2D*)Tex;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UMaskWidget::SetBgColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "SetBgColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMaskWidget::RemoveMaskClickClip(const int32_t& ClipIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "RemoveMaskClickClip");
    struct
    {
        int32_t ClipIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMaskWidget::EnableMaskClickClip(const int32_t& ClipIndex, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "EnableMaskClickClip");
    struct
    {
        int32_t ClipIndex;
        uint8_t Enable;
    } Parms{};
    Parms.ClipIndex = (int32_t)ClipIndex;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMaskWidget::AddMaskClickClip(const struct FVector2D& Position, const struct FVector2D& size, struct UTexture2D* Mask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaskWidget", "AddMaskClickClip");
    struct
    {
        struct FVector2D Position;
        struct FVector2D size;
        struct UTexture2D* Mask;
        int32_t ReturnValue;
    } Parms{};
    Parms.Position = (struct FVector2D)Position;
    Parms.size = (struct FVector2D)size;
    Parms.Mask = (struct UTexture2D*)Mask;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMobileCustomLayoutDataCenter
void UMobileCustomLayoutDataCenter::UpdateVehicleType(EVehicleType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "UpdateVehicleType");
    struct
    {
        enum EVehicleType InType;
    } Parms{};
    Parms.InType = (enum EVehicleType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::UpdateLayoutNameIncustom(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "UpdateLayoutNameIncustom");
    struct
    {
        struct FString InName;
    } Parms{};
    Parms.InName = (struct FString)InName;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::SetVehicleLayoutInfoArray(struct FString CustomLayoutName, struct FVehicleCustomLayoutInfo Info, struct FString LayoutName, int32_t InVehicleID, uint8_t bTriggerPreciseMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "SetVehicleLayoutInfoArray");
    struct
    {
        struct FString CustomLayoutName;
        struct FVehicleCustomLayoutInfo Info;
        struct FString LayoutName;
        int32_t InVehicleID;
        uint8_t bTriggerPreciseMatch;
    } Parms{};
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    Parms.Info = (struct FVehicleCustomLayoutInfo)Info;
    Parms.LayoutName = (struct FString)LayoutName;
    Parms.InVehicleID = (int32_t)InVehicleID;
    Parms.bTriggerPreciseMatch = (uint8_t)bTriggerPreciseMatch;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::SetPrecisePosMatch(uint8_t bin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "SetPrecisePosMatch");
    struct
    {
        uint8_t bin;
    } Parms{};
    Parms.bin = (uint8_t)bin;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::SetCustomLayoutInfo(struct FString CustomLayoutName, struct FCustomLayoutInfo Info, struct FString LayoutName, uint8_t bTriggerPreciseMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "SetCustomLayoutInfo");
    struct
    {
        struct FString CustomLayoutName;
        struct FCustomLayoutInfo Info;
        struct FString LayoutName;
        uint8_t bTriggerPreciseMatch;
    } Parms{};
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    Parms.Info = (struct FCustomLayoutInfo)Info;
    Parms.LayoutName = (struct FString)LayoutName;
    Parms.bTriggerPreciseMatch = (uint8_t)bTriggerPreciseMatch;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::SetCurrentLayoutToDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "SetCurrentLayoutToDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::SetCurrentBaseLayout(struct FString LayoutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "SetCurrentBaseLayout");
    struct
    {
        struct FString LayoutName;
    } Parms{};
    Parms.LayoutName = (struct FString)LayoutName;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMobileCustomLayoutDataCenter::SerializeLayoutInfoToString(struct FString LayoutName, const struct TMap<struct FString, struct FString>& ExtraData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "SerializeLayoutInfoToString");
    struct
    {
        struct FString LayoutName;
        struct TMap<struct FString, struct FString> ExtraData;
        struct FString ReturnValue;
    } Parms{};
    Parms.LayoutName = (struct FString)LayoutName;
    Parms.ExtraData = (struct TMap<struct FString, struct FString>)ExtraData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMobileCustomLayoutDataCenter::ResetAllLayoutToDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "ResetAllLayoutToDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::RemoveCustomKeyByName(struct FString LayoutName, struct FString BtnName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "RemoveCustomKeyByName");
    struct
    {
        struct FString LayoutName;
        struct FString BtnName;
    } Parms{};
    Parms.LayoutName = (struct FString)LayoutName;
    Parms.BtnName = (struct FString)BtnName;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::OnHudCustomLayoutChanged(struct FName CustomLayoutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "OnHudCustomLayoutChanged");
    struct
    {
        struct FName CustomLayoutName;
    } Parms{};
    Parms.CustomLayoutName = (struct FName)CustomLayoutName;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::OnCustomLayoutTableLoadComplete(const struct FSoftObjectPath& TablePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "OnCustomLayoutTableLoadComplete");
    struct
    {
        struct FSoftObjectPath TablePath;
    } Parms{};
    Parms.TablePath = (struct FSoftObjectPath)TablePath;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMobileCustomLayoutDataCenter::IsPrecisePosMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "IsPrecisePosMatch");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMobileCustomLayoutDataCenter::IsCurrentLayoutDiffWithDefault(struct FString CustomLayoutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "IsCurrentLayoutDiffWithDefault");
    struct
    {
        struct FString CustomLayoutName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleCustomLayoutInfo UMobileCustomLayoutDataCenter::GetVehicleLayoutInfoByNameType(struct FString CustomLayoutName, uint8_t bInCustomPanel, struct FString TargetLayoutName, int32_t CustomVehicleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "GetVehicleLayoutInfoByNameType");
    struct
    {
        struct FString CustomLayoutName;
        uint8_t bInCustomPanel;
        struct FString TargetLayoutName;
        int32_t CustomVehicleId;
        struct FVehicleCustomLayoutInfo ReturnValue;
    } Parms{};
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    Parms.bInCustomPanel = (uint8_t)bInCustomPanel;
    Parms.TargetLayoutName = (struct FString)TargetLayoutName;
    Parms.CustomVehicleId = (int32_t)CustomVehicleId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FCustomLayoutInfo UMobileCustomLayoutDataCenter::GetDefaultLayoutInfoByName(struct FString LayoutName, struct FString CustomLayoutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "GetDefaultLayoutInfoByName");
    struct
    {
        struct FString LayoutName;
        struct FString CustomLayoutName;
        struct FCustomLayoutInfo ReturnValue;
    } Parms{};
    Parms.LayoutName = (struct FString)LayoutName;
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FCustomLayoutInfo UMobileCustomLayoutDataCenter::GetCustomLayoutInfoByName(struct FString CustomLayoutName, uint8_t bInCustomPanel, struct FString TargetLayoutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "GetCustomLayoutInfoByName");
    struct
    {
        struct FString CustomLayoutName;
        uint8_t bInCustomPanel;
        struct FString TargetLayoutName;
        struct FCustomLayoutInfo ReturnValue;
    } Parms{};
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    Parms.bInCustomPanel = (uint8_t)bInCustomPanel;
    Parms.TargetLayoutName = (struct FString)TargetLayoutName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FCustomLayoutInfo UMobileCustomLayoutDataCenter::GetCurrentLayoutDefaultLayoutInfoByBane(struct FString CustomLayoutName, struct FString LayoutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "GetCurrentLayoutDefaultLayoutInfoByBane");
    struct
    {
        struct FString CustomLayoutName;
        struct FString LayoutName;
        struct FCustomLayoutInfo ReturnValue;
    } Parms{};
    Parms.CustomLayoutName = (struct FString)CustomLayoutName;
    Parms.LayoutName = (struct FString)LayoutName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMobileCustomLayoutDataCenter* UMobileCustomLayoutDataCenter::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MobileCustomLayoutDataCenter", "Get");
    struct
    {
        struct UMobileCustomLayoutDataCenter* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMobileCustomLayoutDataCenter::DeserializeString(struct FString Key, struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "DeserializeString");
    struct
    {
        struct FString Key;
        struct FString Info;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Info = (struct FString)Info;
    this->ProcessEvent(Func, &Parms);
}

void UMobileCustomLayoutDataCenter::DeserializeLayoutString(struct FString LayoutName, struct FString LayoutInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "DeserializeLayoutString");
    struct
    {
        struct FString LayoutName;
        struct FString LayoutInfoString;
    } Parms{};
    Parms.LayoutName = (struct FString)LayoutName;
    Parms.LayoutInfoString = (struct FString)LayoutInfoString;
    this->ProcessEvent(Func, &Parms);
}

struct TMap<struct FString, struct FCustomLayoutInfo> UMobileCustomLayoutDataCenter::DeserializeLayoutInfoString(struct FString LayoutInfoString, struct TMap<struct FString, struct FString>& ExtraData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileCustomLayoutDataCenter", "DeserializeLayoutInfoString");
    struct
    {
        struct FString LayoutInfoString;
        struct TMap<struct FString, struct FString> ExtraData;
        struct TMap<struct FString, struct FCustomLayoutInfo> ReturnValue;
    } Parms{};
    Parms.LayoutInfoString = (struct FString)LayoutInfoString;
    this->ProcessEvent(Func, &Parms);
    ExtraData = Parms.ExtraData;
    return Parms.ReturnValue;
}

// UPlatformPaddingBox
void UPlatformPaddingBox::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformPaddingBox", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

struct FMargin UPlatformPaddingBox::GetPadding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformPaddingBox", "GetPadding");
    struct
    {
        struct FMargin ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPlatformScaleBox
void UPlatformScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformScaleBox", "SetUserSpecifiedScale");
    struct
    {
        float InUserSpecifiedScale;
    } Parms{};
    Parms.InUserSpecifiedScale = (float)InUserSpecifiedScale;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformScaleBox::SetStretchDirection(EStretchDirection InStretchDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformScaleBox", "SetStretchDirection");
    struct
    {
        enum EStretchDirection InStretchDirection;
    } Parms{};
    Parms.InStretchDirection = (enum EStretchDirection)InStretchDirection;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformScaleBox::SetStretch(EStretch InStretch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformScaleBox", "SetStretch");
    struct
    {
        enum EStretch InStretch;
    } Parms{};
    Parms.InStretch = (enum EStretch)InStretch;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformScaleBox::SetIgnoreInheritedScale(uint8_t bInIgnoreInheritedScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformScaleBox", "SetIgnoreInheritedScale");
    struct
    {
        uint8_t bInIgnoreInheritedScale;
    } Parms{};
    Parms.bInIgnoreInheritedScale = (uint8_t)bInIgnoreInheritedScale;
    this->ProcessEvent(Func, &Parms);
}

struct FPlatformScale UPlatformScaleBox::GetActiveConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformScaleBox", "GetActiveConfig");
    struct
    {
        struct FPlatformScale ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPlatformSizeBox
void UPlatformSizeBox::SetWidthOverride(float InWidthOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetWidthOverride");
    struct
    {
        float InWidthOverride;
    } Parms{};
    Parms.InWidthOverride = (float)InWidthOverride;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetMinDesiredWidth");
    struct
    {
        float InMinDesiredWidth;
    } Parms{};
    Parms.InMinDesiredWidth = (float)InMinDesiredWidth;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetMinDesiredHeight");
    struct
    {
        float InMinDesiredHeight;
    } Parms{};
    Parms.InMinDesiredHeight = (float)InMinDesiredHeight;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetMinAspectRatio");
    struct
    {
        float InMinAspectRatio;
    } Parms{};
    Parms.InMinAspectRatio = (float)InMinAspectRatio;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetMaxDesiredWidth");
    struct
    {
        float InMaxDesiredWidth;
    } Parms{};
    Parms.InMaxDesiredWidth = (float)InMaxDesiredWidth;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetMaxDesiredHeight");
    struct
    {
        float InMaxDesiredHeight;
    } Parms{};
    Parms.InMaxDesiredHeight = (float)InMaxDesiredHeight;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetMaxAspectRatio");
    struct
    {
        float InMaxAspectRatio;
    } Parms{};
    Parms.InMaxAspectRatio = (float)InMaxAspectRatio;
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::SetHeightOverride(float InHeightOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "SetHeightOverride");
    struct
    {
        float InHeightOverride;
    } Parms{};
    Parms.InHeightOverride = (float)InHeightOverride;
    this->ProcessEvent(Func, &Parms);
}

struct FPlatformSize UPlatformSizeBox::GetActiveConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "GetActiveConfig");
    struct
    {
        struct FPlatformSize ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPlatformSizeBox::ClearWidthOverride()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearWidthOverride");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearMinDesiredWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearMinDesiredWidth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearMinDesiredHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearMinDesiredHeight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearMinAspectRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearMinAspectRatio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearMaxDesiredWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearMaxDesiredWidth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearMaxDesiredHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearMaxDesiredHeight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearMaxAspectRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearMaxAspectRatio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlatformSizeBox::ClearHeightOverride()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlatformSizeBox", "ClearHeightOverride");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPlatformWidgetSettings
struct UPlatformWidgetSettings* UPlatformWidgetSettings::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PlatformWidgetSettings", "Get");
    struct
    {
        struct UPlatformWidgetSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USkillConfigUtils
struct FSkillConfig USkillConfigUtils::GetSkillConfigDataRowBySkillID(int32_t Support_Skill_ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SkillConfigUtils", "GetSkillConfigDataRowBySkillID");
    struct
    {
        int32_t Support_Skill_ID;
        struct FSkillConfig ReturnValue;
    } Parms{};
    Parms.Support_Skill_ID = (int32_t)Support_Skill_ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USOLDecalConfig
struct FSoftObjectPath USOLDecalConfig::GetIconPathByType(struct FName DecalID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLDecalConfig", "GetIconPathByType");
    struct
    {
        struct FName DecalID;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.DecalID = (struct FName)DecalID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USOLMapLoadingHelper
uint8_t USOLMapLoadingHelper::GetEnableSOLMapEntryLoading(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLMapLoadingHelper", "GetEnableSOLMapEntryLoading");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USOLUIConfig
ESOLUIIconType USOLUIConfig::GetIconTypeByContractID(int32_t InContractID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLUIConfig", "GetIconTypeByContractID");
    struct
    {
        int32_t InContractID;
        enum ESOLUIIconType ReturnValue;
    } Parms{};
    Parms.InContractID = (int32_t)InContractID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath USOLUIConfig::GetIconPathByType(ESOLUIIconType InIconType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLUIConfig", "GetIconPathByType");
    struct
    {
        enum ESOLUIIconType InIconType;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InIconType = (enum ESOLUIIconType)InIconType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor USOLUIConfig::GetColorByType(ESOLUIColorType InColorType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLUIConfig", "GetColorByType");
    struct
    {
        enum ESOLUIColorType InColorType;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.InColorType = (enum ESOLUIColorType)InColorType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESOLUIIconType USOLUIConfig::ConvertQuestMarkerTypeToIcon(EGPQuestActionMarkerType InMarkerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLUIConfig", "ConvertQuestMarkerTypeToIcon");
    struct
    {
        enum EGPQuestActionMarkerType InMarkerType;
        enum ESOLUIIconType ReturnValue;
    } Parms{};
    Parms.InMarkerType = (enum EGPQuestActionMarkerType)InMarkerType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USphericalHarmonicsUtils
struct FSHresult USphericalHarmonicsUtils::GetShFromIblCubemap(struct UTextureRenderTargetCube* UCubemap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SphericalHarmonicsUtils", "GetShFromIblCubemap");
    struct
    {
        struct UTextureRenderTargetCube* UCubemap;
        struct FSHresult ReturnValue;
    } Parms{};
    Parms.UCubemap = (struct UTextureRenderTargetCube*)UCubemap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USquadConfigManager
uint8_t USquadConfigManager::HasTeamConfig(struct FName InSquadConfigTagName, int32_t InCampId, int32_t InTeamId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SquadConfigManager", "HasTeamConfig");
    struct
    {
        struct FName InSquadConfigTagName;
        int32_t InCampId;
        int32_t InTeamId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InSquadConfigTagName = (struct FName)InSquadConfigTagName;
    Parms.InCampId = (int32_t)InCampId;
    Parms.InTeamId = (int32_t)InTeamId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USquadConfigManager::HasSquadConfig(struct FName InSquadConfigTagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SquadConfigManager", "HasSquadConfig");
    struct
    {
        struct FName InSquadConfigTagName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InSquadConfigTagName = (struct FName)InSquadConfigTagName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USquadConfigManager::GetSquadTeamConfig(struct FName InSquadConfigTagName, int32_t InCampId, int32_t InTeamId, struct FSquadTeamConfig& OutTeamConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SquadConfigManager", "GetSquadTeamConfig");
    struct
    {
        struct FName InSquadConfigTagName;
        int32_t InCampId;
        int32_t InTeamId;
        struct FSquadTeamConfig OutTeamConfig;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InSquadConfigTagName = (struct FName)InSquadConfigTagName;
    Parms.InCampId = (int32_t)InCampId;
    Parms.InTeamId = (int32_t)InTeamId;
    this->ProcessEvent(Func, &Parms);
    OutTeamConfig = Parms.OutTeamConfig;
    return Parms.ReturnValue;
}

void USquadConfigManager::GetSquadConfigRow(struct FName InSquadConfigTagName, struct FSquadConfigRow& OutConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SquadConfigManager", "GetSquadConfigRow");
    struct
    {
        struct FName InSquadConfigTagName;
        struct FSquadConfigRow OutConfig;
    } Parms{};
    Parms.InSquadConfigTagName = (struct FName)InSquadConfigTagName;
    this->ProcessEvent(Func, &Parms);
    OutConfig = Parms.OutConfig;
}

// UTeammateConfig
struct FTeammateUIConfigRow UTeammateConfig::GetTeammateUIConfigRow(EDFMGamePlayMode InDFMGamePlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetTeammateUIConfigRow");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        struct FTeammateUIConfigRow ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UTeammateConfig::GetTeammateStateIconByType(EDFMGamePlayMode InDFMGamePlayMode, ETeammateState InTeammateState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetTeammateStateIconByType");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        enum ETeammateState InTeammateState;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InTeammateState = (enum ETeammateState)InTeammateState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UTeammateConfig::GetTeammateProgressBarColorByType(EDFMGamePlayMode InDFMGamePlayMode, ETeammateState InTeammateState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetTeammateProgressBarColorByType");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        enum ETeammateState InTeammateState;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InTeammateState = (enum ETeammateState)InTeammateState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UTeammateConfig::GetTeammateMaskColorByType(EDFMGamePlayMode InDFMGamePlayMode, ETeammateState InTeammateState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetTeammateMaskColorByType");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        enum ETeammateState InTeammateState;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InTeammateState = (enum ETeammateState)InTeammateState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UTeammateConfig::GetPlayerRelationShipColorByType(EDFMGamePlayMode InDFMGamePlayMode, EPlayerRelationShipType InPlayerRelationShipType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetPlayerRelationShipColorByType");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        enum EPlayerRelationShipType InPlayerRelationShipType;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InPlayerRelationShipType = (enum EPlayerRelationShipType)InPlayerRelationShipType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UTeammateConfig::GetPlayerIndexIconByIndex(EDFMGamePlayMode InDFMGamePlayMode, int32_t InPlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetPlayerIndexIconByIndex");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        int32_t InPlayerIndex;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InPlayerIndex = (int32_t)InPlayerIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UTeammateConfig::GetPlayerGamePlayStateIconByType(EDFMGamePlayMode InDFMGamePlayMode, int32_t InPlayerGamePlayState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetPlayerGamePlayStateIconByType");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        int32_t InPlayerGamePlayState;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InPlayerGamePlayState = (int32_t)InPlayerGamePlayState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UTeammateConfig::GetHeroAvatarIconByHeroId(EDFMGamePlayMode InDFMGamePlayMode, uint64_t InHeroId, uint8_t InIsMobile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetHeroAvatarIconByHeroId");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        uint64_t InHeroId;
        uint8_t InIsMobile;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InHeroId = (uint64_t)InHeroId;
    Parms.InIsMobile = (uint8_t)InIsMobile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UTeammateConfig::GetArmedForceIconByType(EDFMGamePlayMode InDFMGamePlayMode, EInGameBattleClassType InGameBattleClassType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TeammateConfig", "GetArmedForceIconByType");
    struct
    {
        enum EDFMGamePlayMode InDFMGamePlayMode;
        enum EInGameBattleClassType InGameBattleClassType;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InDFMGamePlayMode = (enum EDFMGamePlayMode)InDFMGamePlayMode;
    Parms.InGameBattleClassType = (enum EInGameBattleClassType)InGameBattleClassType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UTreasurePackItemConfigWrapper
uint8_t UTreasurePackItemConfigWrapper::IsTreasurePackItem(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TreasurePackItemConfigWrapper", "IsTreasurePackItem");
    struct
    {
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVehicleUnlockDataConfigManager
uint64_t UVehicleUnlockDataConfigManager::GetVehicleIDByVehicleItemID(uint64_t VehicleItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleUnlockDataConfigManager", "GetVehicleIDByVehicleItemID");
    struct
    {
        uint64_t VehicleItemID;
        uint64_t ReturnValue;
    } Parms{};
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVehicleModificationRulesDataConfigManager
struct FVehicleModificationRulesDataConfigList UVehicleModificationRulesDataConfigManager::GetList(uint64_t BaseID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleModificationRulesDataConfigManager", "GetList");
    struct
    {
        uint64_t BaseID;
        struct FVehicleModificationRulesDataConfigList ReturnValue;
    } Parms{};
    Parms.BaseID = (uint64_t)BaseID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVehicleSocketNameRowManager
uint64_t UVehicleSocketNameRowManager::GetSocketGUIDBySocketName(struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSocketNameRowManager", "GetSocketGUIDBySocketName");
    struct
    {
        struct FName SocketName;
        uint64_t ReturnValue;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVehicleFrontendTransformRowManager
struct FTransform UVehicleFrontendTransformRowManager::GetVehicleFrontendTransform(uint64_t ID, uint64_t VehicleItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendTransformRowManager", "GetVehicleFrontendTransform");
    struct
    {
        uint64_t ID;
        uint64_t VehicleItemID;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVehicleSkinDataConfigManager
uint64_t UVehicleSkinDataConfigManager::GetVehicleDefaultSkinAppearanceIDByVehicleSkinID(uint64_t VehicleSkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSkinDataConfigManager", "GetVehicleDefaultSkinAppearanceIDByVehicleSkinID");
    struct
    {
        uint64_t VehicleSkinID;
        uint64_t ReturnValue;
    } Parms{};
    Parms.VehicleSkinID = (uint64_t)VehicleSkinID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
