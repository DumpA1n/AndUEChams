#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: LAI
// Enums: 1
// Structs: 5
// Classes: 10

struct AActor;
enum class ESlateVisibility : uint8_t;
enum class EUMGSequencePlayMode : uint8_t;
struct FLuaBPVar;
struct FPointerEvent;
struct FSlateBrush;
struct UGameInstance;
struct UPanelWidget;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct UWorld;
struct FUserInfo2;
struct FUserInfo1;
struct FUserInfo;
struct FReplifetimeCond;
struct FScopedNamedEventWrapper;
struct ULAI;
struct ULuaListItemObject;
struct ULuaLogWrapper;
struct ULuaPerfTest;
struct ULuautils;
struct UTestObject;
struct USluaTestCase;
struct UTestBindUserWidget;
struct UWidgetAnimationUtil;
struct UWidgetUtil;

// Object: Enum LAI.ELuaLogCategory
enum class ELuaLogCategory : uint8_t
{
	LuaTemp = 0,
	LuaSAccount = 1,
	LuaSActivity = 2,
	LuaSArmedForce = 3,
	LuaSAuction = 4,
	LuaSBlackSite = 5,
	LuaSChat = 6,
	LuaSCollection = 7,
	LuaSComparePrice = 8,
	LuaSCurrency = 9,
	LuaSDataTableHotfix = 10,
	LuaSEquipment = 11,
	LuaSFacePop = 12,
	LuaSFriend = 13,
	LuaSFrontEndChat = 14,
	LuaSGameMode = 15,
	LuaSGM = 16,
	LuaSGrowthRoad = 17,
	LuaSGuide = 18,
	LuaSGunsmith = 19,
	LuaSHero = 20,
	LuaSHope = 21,
	LuaSInsurance = 22,
	LuaSInventory = 23,
	LuaSIrisRaid = 24,
	LuaSIrisSafeHouse = 25,
	LuaSLitePack = 26,
	LuaSLocalize = 27,
	LuaSLogUpload = 28,
	LuaSLooting = 29,
	LuaSMail = 30,
	LuaSMatch = 31,
	LuaSMidas = 32,
	LuaSModeHall = 33,
	LuaSModuleSwitcher = 34,
	LuaSModuleUnlock = 35,
	LuaSPersonal = 36,
	LuaSPreset = 37,
	LuaSProperty = 38,
	LuaSPVEEntry = 39,
	LuaSPVESettlement = 40,
	LuaSQuest = 41,
	LuaSQuickPatch = 42,
	LuaSRanking = 43,
	LuaSRecruit = 44,
	LuaSReport = 45,
	LuaSReward = 46,
	LuaSRoleInfo = 47,
	LuaSRoom = 48,
	LuaSScav = 49,
	LuaSSDKInfo = 50,
	LuaSSeason = 51,
	LuaSSettlement = 52,
	LuaSShopMystery = 53,
	LuaSShop = 54,
	LuaSShopStation = 55,
	LuaSSocial = 56,
	LuaSStore = 57,
	LuaSSystemSetting = 58,
	LuaSTeam = 59,
	LuaSTipsRecord = 60,
	LuaSVehicle = 61,
	LuaSWeaponAssembly = 62,
	LuaSWorldEntrance = 63,
	LuaMACE = 64,
	LuaMActivity = 65,
	LuaMArchive = 66,
	LuaMArmedForce = 67,
	LuaMAuction = 68,
	LuaMBattlefieldEntry = 69,
	LuaMBlackSite = 70,
	LuaMChat = 71,
	LuaMCollection = 72,
	LuaMCommonBar = 73,
	LuaMCommonTips = 74,
	LuaMCommonUILibrary = 75,
	LuaMCommonWidget = 76,
	LuaMComparePrice = 77,
	LuaMCurrency = 78,
	LuaMDiscovery = 79,
	LuaMExample = 80,
	LuaMFacePop = 81,
	LuaMFastEquip = 82,
	LuaMFriend = 83,
	LuaMGamelet = 84,
	LuaMGameMode = 85,
	LuaMGCloudSDK = 86,
	LuaMGM = 87,
	LuaMGPM = 88,
	LuaMGuide = 89,
	LuaMGunsmith = 90,
	LuaMGVoice = 91,
	LuaMHall = 92,
	LuaMHero = 93,
	LuaMHotUpdate = 94,
	LuaMHUD = 95,
	LuaMHUDToolBar = 96,
	LuaMInGame = 97,
	LuaMInsurance = 98,
	LuaMInventory = 99,
	LuaMIrisRaid = 100,
	LuaMIrisSafeHouse = 101,
	LuaMItemDetail = 102,
	LuaMJump = 103,
	LuaMLBS = 104,
	LuaMLitePackage = 105,
	LuaMLobbyBHD = 106,
	LuaMLobbyDisplay = 107,
	LuaMLogin = 108,
	LuaMLooting = 109,
	LuaMMail = 110,
	LuaMMap = 111,
	LuaMMatch = 112,
	LuaMMidas = 113,
	LuaM = 114,
	LuaMParamAdjust = 115,
	LuaMPostLaunch = 116,
	LuaMPreload = 117,
	LuaMPreparation = 118,
	LuaMPVESettlement = 119,
	LuaMQuest = 120,
	LuaMRanking = 121,
	LuaMReconnect = 122,
	LuaMRecruit = 123,
	LuaMReddot = 124,
	LuaMReddotTrie = 125,
	LuaMReport = 126,
	LuaMReward = 127,
	LuaMRoleInfo = 128,
	LuaMRoom = 129,
	LuaMRuntimeDebug = 130,
	LuaMSandBoxMap = 131,
	LuaMSettlement = 132,
	LuaMShop = 133,
	LuaMSocial = 134,
	LuaMSOLHealthSystem = 135,
	LuaMSOL = 136,
	LuaMStore = 137,
	LuaMStoryDialog = 138,
	LuaMSystemSetting = 139,
	LuaMTeam = 140,
	LuaMTgpa = 141,
	LuaMTransition = 142,
	LuaMTss = 143,
	LuaMUISceneObject = 144,
	LuaMVehicle = 145,
	LuaMVersionUpdate = 146,
	LuaMWeaponAssembly = 147,
	LuaMWeaponDebugView = 148,
	LuaMWeaponGameplay = 149,
	LuaSLiveRadio = 150,
	LuaSMarket = 151,
	LuaMLiveRadio = 152,
	LuaMMarket = 153,
	LuaMRange = 154,
	LuaFManager = 155,
	LuaSBattlePass = 156,
	LuaMAchievement = 157,
	LuaMBattlePass = 158,
	LuaSBHD = 159,
	LuaSExperienceData = 160,
	LuaSMoss = 161,
	LuaSPay = 162,
	LuaSTournament = 163,
	LuaMCDNIcon = 164,
	LuaMCustomerServices = 165,
	LuaMDeepLink = 166,
	LuaMInvite = 167,
	LuaMMicroOfficialWeb = 168,
	LuaMMoss = 169,
	LuaMOpActMinorProtection = 170,
	LuaMOpActQQBonusCenter = 171,
	LuaMOpActQQChannel = 172,
	LuaMOpActQQGameHub = 173,
	LuaMOpActQQPrivilege = 174,
	LuaMOpActWeChatGameHub = 175,
	LuaMOpActWeChatPrivilege = 176,
	LuaMOpActWeChatWelfare = 177,
	LuaMPay = 178,
	LuaMPermission = 179,
	LuaMShare = 180,
	LuaMTournament = 181,
	LuaSPlayerReturn = 182,
	LuaMOpActWeChatVideoChannel = 183,
	LuaMOpActXYClub = 184,
	LuaMPlayerReturn = 185,
	LuaSArmory = 186,
	LuaSItemUnlockPath = 187,
	LuaSJump = 188,
	LuaSRankingList = 189,
	LuaSRecovery = 190,
	LuaSReputation = 191,
	LuaSSubscribe = 192,
	LuaMArmory = 193,
	LuaMDFDevops = 194,
	LuaMDFOnlineService = 195,
	LuaMDiscord = 196,
	LuaMLocalizeFont = 197,
	LuaMNetworkControl = 198,
	LuaMOpActPerks = 199,
	LuaMRankingList = 200,
	LuaMRecovery = 201,
	LuaMReputation = 202,
	LuaMSubscribe = 203,
	LuaMWeGameSDK = 204,
	LuaSCollectionRoom = 205,
	LuaSGamelet = 206,
	LuaMAccountBind = 207,
	LuaMCollectionRoom = 208,
	LuaMExpansionPackCoordinator = 209,
	LuaMMusicPlayer = 210,
	LuaMNetworkBusiness = 211,
	LuaMPopupManager = 212,
	LuaMPopupSequencer = 213,
	LuaMImGui = 214,
	LuaMImGuiPanel = 215,
	LuaMOpActXunYouClub = 216,
	LuaMLobbySOLChallenge = 217,
	LuaSLobbySOLChallenge = 218,
	LuaSPlatformPrivilege = 219,
	LuaSCAPTCHA = 220,
	LuaSRebornGrowthLine = 221,
	LuaMCAPTCHA = 222,
	LuaMJumpRoute = 223,
	LuaMPreviewRoom = 224,
	LuaMRebornGrowthLine = 225,
	LuaMSafe = 226,
	ELuaLogCategory_MAX = 227
};

// Object: ScriptStruct LAI.UserInfo2
// Size: 0x10 (Inherited: 0x0)
struct FUserInfo2
{
	struct TArray<int32_t> p1; // 0x0(0x10)
};

// Object: ScriptStruct LAI.UserInfo1
// Size: 0x60 (Inherited: 0x0)
struct FUserInfo1
{
	struct TArray<int32_t> p2; // 0x0(0x10)
	struct TMap<int32_t, struct FUserInfo2> p3; // 0x10(0x50)
};

// Object: ScriptStruct LAI.UserInfo
// Size: 0xA0 (Inherited: 0x0)
struct FUserInfo
{
	struct UObject* obj; // 0x0(0x8)
	struct FString Name; // 0x8(0x10)
	int32_t ID; // 0x18(0x4)
	int32_t Level; // 0x1C(0x4)
	struct TArray<int32_t> pos; // 0x20(0x10)
	struct TArray<int32_t> ids; // 0x30(0x10)
	struct FUserInfo1 others; // 0x40(0x60)
};

// Object: ScriptStruct LAI.ReplifetimeCond
// Size: 0x18 (Inherited: 0x0)
struct FReplifetimeCond
{
	struct FString PropertyName; // 0x0(0x10)
	ELifetimeCondition Cond; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct LAI.ScopedNamedEventWrapper
// Size: 0x1 (Inherited: 0x0)
struct FScopedNamedEventWrapper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: Class LAI.LAI
// Size: 0x28 (Inherited: 0x28)
struct ULAI : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(ULAI, "LAI")

	// Object: Function LAI.LAI.TickLuaState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76707d4
	// Params: [ Num(1) Size(0x4) ]
	static void TickLuaState(float DeltaTime);

	// Object: Function LAI.LAI.ShutdownLuaByOuter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670740
	// Params: [ Num(1) Size(0x8) ]
	static void ShutdownLuaByOuter(struct UGameInstance* InOuter);

	// Object: Function LAI.LAI.SetConfigCacheIniString
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf1a09c8
	// Params: [ Num(4) Size(0x40) ]
	static void SetConfigCacheIniString(struct FString Section, struct FString Key, struct FString Value, struct FString Filename);

	// Object: Function LAI.LAI.SetConfigCacheIniArray
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767049c
	// Params: [ Num(4) Size(0x40) ]
	static void SetConfigCacheIniArray(struct FString Section, struct FString Key, struct TArray<struct FString> Content, struct FString Filename);

	// Object: Function LAI.LAI.PrintLuaStack
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76703c4
	// Params: [ Num(2) Size(0x9) ]
	static void PrintLuaStack(struct UGameInstance* GameIns, uint8_t bForceAnyThread);

	// Object: Function LAI.LAI.PrintCStack
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76703b0
	// Params: [ Num(0) Size(0x0) ]
	static void PrintCStack();

	// Object: Function LAI.LAI.LuaCtorFunction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x76701a4
	// Params: [ Num(4) Size(0x38) ]
	static void LuaCtorFunction(struct UObject* WorldContextObject, struct FString Filename, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName);

	// Object: Function LAI.LAI.LuaCtorCallFunction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x766ff20
	// Params: [ Num(5) Size(0x48) ]
	static void LuaCtorCallFunction(struct UObject* WorldContextObject, struct FString Filename, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName);

	// Object: Function LAI.LAI.LuaCallFunction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x766fcd4
	// Params: [ Num(5) Size(0x58) ]
	static struct FLuaBPVar LuaCallFunction(struct UObject* WorldContextObject, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName);

	// Object: Function LAI.LAI.IsSubClassOf
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xe7a92c0
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsSubClassOf(struct UObject* Child, struct UObject* Parent);

	// Object: Function LAI.LAI.IsEnableLua
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x766fc9c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnableLua();

	// Object: Function LAI.LAI.InitLuaState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x766fb78
	// Params: [ Num(3) Size(0x11) ]
	static void InitLuaState(uint8_t IsEnable, struct UGameInstance* InOuter, uint8_t bIsDS);

	// Object: Function LAI.LAI.GetObjectUniqueID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf84b130
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t GetObjectUniqueID(struct UObject* obj);

	// Object: Function LAI.LAI.GetObjectClassName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x766faa0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetObjectClassName(struct UObject* InOuter);

	// Object: Function LAI.LAI.GetObjectClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x766f9fc
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetObjectClass(struct UObject* InOuter);

	// Object: Function LAI.LAI.GetLuaStartRound
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfd48114
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetLuaStartRound();

	// Object: Function LAI.LAI.GetLuaStack
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x766f924
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetLuaStack(struct UGameInstance* GameIns);

	// Object: Function LAI.LAI.GetConfigCacheIniString
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xecce604
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t GetConfigCacheIniString(struct FString Section, struct FString Key, struct FString Filename, struct FString& OutStr);

	// Object: Function LAI.LAI.GetConfigCacheIniArray
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x766f718
	// Params: [ Num(4) Size(0x40) ]
	static struct TArray<struct FString> GetConfigCacheIniArray(struct FString Section, struct FString Key, struct FString Filename);

	// Object: Function LAI.LAI.DynamicUnbind
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xef0ffec
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t DynamicUnbind(struct UObject* obj);

	// Object: Function LAI.LAI.DynamicBind
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfa3d87c
	// Params: [ Num(4) Size(0x1A) ]
	static uint8_t DynamicBind(struct FString LuaFilePath, struct UObject* obj, uint8_t bRefSelfTable);

	// Object: Function LAI.LAI.DoString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x766f5ec
	// Params: [ Num(2) Size(0x18) ]
	static void DoString(struct UObject* obj, struct FString str);

	// Object: Function LAI.LAI.DoFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x766f4c0
	// Params: [ Num(2) Size(0x18) ]
	static void DoFile(struct UObject* obj, struct FString str);

	// Object: Function LAI.LAI.CreateVarFromPointerEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x766f158
	// Params: [ Num(3) Size(0x98) ]
	static struct FLuaBPVar CreateVarFromPointerEvent(struct UObject* WorldContextObject, struct FPointerEvent PointerEvent);

	// Object: Function LAI.LAI.CreateVarFromObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x766f03c
	// Params: [ Num(3) Size(0x30) ]
	static struct FLuaBPVar CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* InTheObject);

	// Object: Function LAI.LAI.CheckGlobalFuncExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x766ee8c
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t CheckGlobalFuncExist(struct UObject* WorldContextObject, struct FString FuncName, struct FString StateName);
};

// Object: Class LAI.LuaListItemObject
// Size: 0x30 (Inherited: 0x28)
struct ULuaListItemObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaListItemObject, "LuaListItemObject")

	int32_t ItemIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class LAI.LuaLogWrapper
// Size: 0x28 (Inherited: 0x28)
struct ULuaLogWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaLogWrapper, "LuaLogWrapper")

	// Object: Function LAI.LuaLogWrapper.IsInBlackList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7670958
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsInBlackList(struct FString Code);
};

// Object: Class LAI.LuaPerfTest
// Size: 0x28 (Inherited: 0x28)
struct ULuaPerfTest : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(ULuaPerfTest, "LuaPerfTest")

	// Object: Function LAI.LuaPerfTest.TestSetVisibility_UserWidget
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76710a0
	// Params: [ Num(2) Size(0x9) ]
	static void TestSetVisibility_UserWidget(struct UUserWidget* View, ESlateVisibility Visibility);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_UserWidget
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767100c
	// Params: [ Num(1) Size(0x8) ]
	static void TestEmptyCall_UserWidget(struct UUserWidget* UserWidget);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_String
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670f28
	// Params: [ Num(1) Size(0x10) ]
	static void TestEmptyCall_String(struct FString str);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_Object
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670e94
	// Params: [ Num(1) Size(0x8) ]
	static void TestEmptyCall_Object(struct UObject* obj);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_MultiParams
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x7670ca0
	// Params: [ Num(5) Size(0x28) ]
	static void TestEmptyCall_MultiParams(struct UUserWidget* UserWidget, struct FVector2D Vector2D, struct FString str, float I, int32_t J);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_Int
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670c0c
	// Params: [ Num(1) Size(0x4) ]
	static void TestEmptyCall_Int(int32_t I);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_FVector2D
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x7670b7c
	// Params: [ Num(1) Size(0x8) ]
	static void TestEmptyCall_FVector2D(struct FVector2D Vector2D);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall_Float
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670ae8
	// Params: [ Num(1) Size(0x4) ]
	static void TestEmptyCall_Float(float I);

	// Object: Function LAI.LuaPerfTest.TestEmptyCall
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670ad4
	// Params: [ Num(0) Size(0x0) ]
	static void TestEmptyCall();

	// Object: Function LAI.LuaPerfTest.TestCallInCpp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7670a40
	// Params: [ Num(1) Size(0x8) ]
	static void TestCallInCpp(struct UObject* WorldContext);
};

// Object: Class LAI.Luautils
// Size: 0x28 (Inherited: 0x28)
struct ULuautils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(ULuautils, "Luautils")

	// Object: Function LAI.Luautils.TestLongJmpLimitation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671f1c
	// Params: [ Num(1) Size(0x8) ]
	static void TestLongJmpLimitation(struct UObject* ContextObj);

	// Object: Function LAI.Luautils.TestEnsureFailed
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671f08
	// Params: [ Num(0) Size(0x0) ]
	static void TestEnsureFailed();

	// Object: Function LAI.Luautils.PyGetAllWidgets
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7671e30
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UWidget*> PyGetAllWidgets(struct UUserWidget* UserWidget);

	// Object: Function LAI.Luautils.PrintLuaMacro
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671e1c
	// Params: [ Num(0) Size(0x0) ]
	static void PrintLuaMacro();

	// Object: Function LAI.Luautils.MountProtoKeyName2StructName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xea769bc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString MountProtoKeyName2StructName(struct FString Value);

	// Object: Function LAI.Luautils.LuaThrow_UFunction_Lambda
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671e08
	// Params: [ Num(0) Size(0x0) ]
	static void LuaThrow_UFunction_Lambda();

	// Object: Function LAI.Luautils.LuaThrow_UFunction
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671df4
	// Params: [ Num(0) Size(0x0) ]
	static void LuaThrow_UFunction();

	// Object: Function LAI.Luautils.IsSubClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671d14
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsSubClass(struct UObject* Lhs, struct UObject* Rhs);

	// Object: Function LAI.Luautils.IsObjValid
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671c6c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsObjValid(struct UObject* InObj);

	// Object: Function LAI.Luautils.IsLuaSLootingLogActive
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf039734
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsLuaSLootingLogActive(int32_t InLogLevel);

	// Object: Function LAI.Luautils.IsLuaMCollectionRoomLogActive
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671bc4
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsLuaMCollectionRoomLogActive(int32_t InLogLevel);

	// Object: Function LAI.Luautils.GetUInt64StrToInt64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671ad0
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetUInt64StrToInt64(struct FString Value);

	// Object: Function LAI.Luautils.GetUInt64String
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76719f8
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetUInt64String(uint64_t Value);

	// Object: Function LAI.Luautils.GetStringFromBytes
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x76718e0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetStringFromBytes(struct TArray<uint8_t>& InBytes);

	// Object: Function LAI.Luautils.GetPrivateClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767183c
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetPrivateClass(struct UObject* P);

	// Object: Function LAI.Luautils.GetOverInt64String
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671764
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetOverInt64String(int64_t Value);

	// Object: Function LAI.Luautils.GetName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767168c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetName(struct UObject* P);

	// Object: Function LAI.Luautils.GetLogCurVerbosity
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xeeae034
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t GetLogCurVerbosity(int32_t LogCategoryEnum);

	// Object: Function LAI.Luautils.GetCurrentLevelName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76715b4
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetCurrentLevelName(struct UObject* ContextObj);

	// Object: Function LAI.Luautils.GetAllWidgets
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x76713d0
	// Params: [ Num(4) Size(0x38) ]
	static void GetAllWidgets(struct UUserWidget* UserWidget, struct TArray<struct FName>& names, struct TArray<struct UWidget*>& Widgets, struct TArray<struct FName>& TypesOfWidget);

	// Object: Function LAI.Luautils.GetActorWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767132c
	// Params: [ Num(2) Size(0x10) ]
	static struct UWorld* GetActorWorld(struct AActor* obj);

	// Object: Function LAI.Luautils.ClipboardPaste
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x767125c
	// Params: [ Num(1) Size(0x10) ]
	static void ClipboardPaste(struct FString& str);

	// Object: Function LAI.Luautils.ClipboardCopy
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7671178
	// Params: [ Num(1) Size(0x10) ]
	static void ClipboardCopy(struct FString str);
};

// Object: Class LAI.TestObject
// Size: 0x28 (Inherited: 0x28)
struct UTestObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTestObject, "TestObject")
};

// Object: Class LAI.SluaTestCase
// Size: 0x258 (Inherited: 0x28)
struct USluaTestCase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USluaTestCase, "SluaTestCase")

	struct TWeakObjectPtr<struct UObject> weakptr; // 0x28(0x8)
	struct TArray<struct UObject*> foos; // 0x30(0x10)
	struct TMap<struct FString, struct FString> maps; // 0x40(0x50)
	struct TArray<struct FString> strs; // 0x90(0x10)
	struct TMap<int32_t, struct FUserInfo> UserInfo; // 0xA0(0x50)
	struct TArray<struct FUserInfo> userArray; // 0xF0(0x10)
	struct FSlateBrush Brush; // 0x100(0x90)
	int32_t Value; // 0x190(0x4)
	uint8_t Pad_0x194[0x4]; // 0x194(0x4)
	struct FUserInfo Info; // 0x198(0xA0)
	struct FDelegate OnTestGetCount; // 0x238(0x10)
	struct FMulticastInlineDelegate OnTestAAA; // 0x248(0x10)

	// Object: Function LAI.SluaTestCase.TwoArgs
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76735e4
	// Params: [ Num(5) Size(0x30) ]
	void TwoArgs(struct FString A, int32_t B, float C, struct FString D, struct UObject* Widget);

	// Object: Function LAI.SluaTestCase.TestUnicastDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76734f0
	// Params: [ Num(1) Size(0x10) ]
	void TestUnicastDelegate(struct FString str);

	// Object: Function LAI.SluaTestCase.TestStruct
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7673268
	// Params: [ Num(7) Size(0x44) ]
	struct FVector TestStruct(struct FVector V, ESlateVisibility E, struct FVector& v2, int32_t I, int32_t& i2, struct FString str);

	// Object: Function LAI.SluaTestCase.TestOIntOStrOEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7672fdc
	// Params: [ Num(6) Size(0x2A) ]
	void TestOIntOStrOEnum(int32_t I, int32_t& oi, struct FString S, struct FString& os, ESlateVisibility E, ESlateVisibility& oe);

	// Object: Function LAI.SluaTestCase.TestLuaCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7672ee4
	// Params: [ Num(1) Size(0x20) ]
	void TestLuaCallback(struct FLuaBPVar callback);

	// Object: Function LAI.SluaTestCase.TestIntStrEnum_Enum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672d60
	// Params: [ Num(4) Size(0x1A) ]
	ESlateVisibility TestIntStrEnum_Enum(int32_t I, struct FString S, ESlateVisibility E);

	// Object: Function LAI.SluaTestCase.TestIntStrEnum_Arr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672ba4
	// Params: [ Num(4) Size(0x30) ]
	struct TArray<int32_t> TestIntStrEnum_Arr(int32_t I, struct FString S, ESlateVisibility E);

	// Object: Function LAI.SluaTestCase.TestIntStr_Str
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672a28
	// Params: [ Num(3) Size(0x28) ]
	struct FString TestIntStr_Str(int32_t I, struct FString S);

	// Object: Function LAI.SluaTestCase.TestInt_int
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x767297c
	// Params: [ Num(2) Size(0x8) ]
	int32_t TestInt_int(int32_t I);

	// Object: Function LAI.SluaTestCase.TestAAA
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672888
	// Params: [ Num(1) Size(0x10) ]
	void TestAAA(struct FString str);

	// Object: Function LAI.SluaTestCase.StaticFunc
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7672874
	// Params: [ Num(0) Size(0x0) ]
	static void StaticFunc();

	// Object: Function LAI.SluaTestCase.setupfoo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76727d0
	// Params: [ Num(1) Size(0x8) ]
	void setupfoo(struct UObject* obj);

	// Object: Function LAI.SluaTestCase.SetButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x767272c
	// Params: [ Num(1) Size(0x8) ]
	void SetButton(struct UUserWidget* Widget);

	// Object: Function LAI.SluaTestCase.SetArrayStr
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x767264c
	// Params: [ Num(1) Size(0x10) ]
	void SetArrayStr(const struct TArray<struct FString>& array);

	// Object: Function LAI.SluaTestCase.ReturnIntWithInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76725a0
	// Params: [ Num(2) Size(0x8) ]
	int32_t ReturnIntWithInt(int32_t I);

	// Object: Function LAI.SluaTestCase.ReturnInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x767256c
	// Params: [ Num(1) Size(0x4) ]
	int32_t ReturnInt();

	// Object: DelegateFunction LAI.SluaTestCase.OnTestGetCount__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x14) ]
	int32_t OnTestGetCount__DelegateSignature(struct FString str);

	// Object: DelegateFunction LAI.SluaTestCase.OnTestAAA__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnTestAAA__DelegateSignature(struct FString str);

	// Object: DelegateFunction LAI.SluaTestCase.OnAssetClassLoaded__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnAssetClassLoaded__DelegateSignature(int32_t P);

	// Object: Function LAI.SluaTestCase.LoadAssetClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x76724d0
	// Params: [ Num(1) Size(0x10) ]
	static void LoadAssetClass(struct FDelegate OnLoaded);

	// Object: Function LAI.SluaTestCase.GetUserInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672498
	// Params: [ Num(1) Size(0xA0) ]
	struct FUserInfo GetUserInfo();

	// Object: Function LAI.SluaTestCase.GetMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76723e4
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<int32_t, struct FString> GetMap();

	// Object: Function LAI.SluaTestCase.GetBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672244
	// Params: [ Num(1) Size(0x90) ]
	struct FSlateBrush GetBrush();

	// Object: Function LAI.SluaTestCase.GetArrayStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76721b0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetArrayStr();

	// Object: Function LAI.SluaTestCase.GetArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672118
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetArray();

	// Object: Function LAI.SluaTestCase.FuncWithStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x767201c
	// Params: [ Num(2) Size(0x14) ]
	int32_t FuncWithStr(struct FString str);

	// Object: Function LAI.SluaTestCase.EmptyFunc
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7672008
	// Params: [ Num(0) Size(0x0) ]
	void EmptyFunc();

	// Object: Function LAI.SluaTestCase.delfoo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7671ff4
	// Params: [ Num(0) Size(0x0) ]
	void delfoo();
};

// Object: Class LAI.TestBindUserWidget
// Size: 0x2F8 (Inherited: 0x2F8)
struct UTestBindUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UTestBindUserWidget, "TestBindUserWidget")

	// Object: Function LAI.TestBindUserWidget.TestReturnSelf
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UTestBindUserWidget* TestReturnSelf();

	// Object: Function LAI.TestBindUserWidget.TestReturnInt
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	int32_t TestReturnInt();
};

// Object: Class LAI.WidgetAnimationUtil
// Size: 0x28 (Inherited: 0x28)
struct UWidgetAnimationUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UWidgetAnimationUtil, "WidgetAnimationUtil")

	// Object: Function LAI.WidgetAnimationUtil.StopAllWidgetAnimations
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf81126c
	// Params: [ Num(1) Size(0x8) ]
	static void StopAllWidgetAnimations(struct UUserWidget* UserWidget);

	// Object: Function LAI.WidgetAnimationUtil.PlayWidgetAnimationsWithSuffix
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x76742e4
	// Params: [ Num(8) Size(0x30) ]
	static struct UWidgetAnimation* PlayWidgetAnimationsWithSuffix(struct UUserWidget* UserWidget, const struct FName& nameSuffix, float StartAtTime, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState);

	// Object: Function LAI.WidgetAnimationUtil.PlayWidgetAnimationsListIn
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x76741f4
	// Params: [ Num(3) Size(0x18) ]
	static struct UWidgetAnimation* PlayWidgetAnimationsListIn(struct UUserWidget* UserWidget, const struct FName& nameSuffix);

	// Object: Function LAI.WidgetAnimationUtil.MofidyAnimationBindingObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x767409c
	// Params: [ Num(5) Size(0x21) ]
	static uint8_t MofidyAnimationBindingObject(struct UUserWidget* Widget, struct UWidgetAnimation* Animation, struct UObject* OldBindObj, struct UObject* NewBindObj);

	// Object: Function LAI.WidgetAnimationUtil.MofidyAnimation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7673da4
	// Params: [ Num(8) Size(0x39) ]
	static uint8_t MofidyAnimation(struct UWidgetAnimation* Animation, struct UObject* BindObj, const struct FName& TrackName, int32_t SectionIndex, struct FName& PropertyName, int32_t FrameIndex, struct TArray<float> Vars);

	// Object: Function LAI.WidgetAnimationUtil.ModifyAnimationByTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7673c74
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t ModifyAnimationByTag(struct UWidgetAnimation* Animation, struct FName& Tag, float Value);

	// Object: Function LAI.WidgetAnimationUtil.GetWidgetAnimations
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7673b50
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UWidgetAnimation*> GetWidgetAnimations(struct UUserWidget* UserWidget, const struct FName& nameSuffix);

	// Object: Function LAI.WidgetAnimationUtil.GetAllWidgetAnimations
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7673a6c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UWidgetAnimation*> GetAllWidgetAnimations(struct UUserWidget* UserWidget);

	// Object: Function LAI.WidgetAnimationUtil.CopyWidgetAnimation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x76739c8
	// Params: [ Num(2) Size(0x10) ]
	static struct UWidgetAnimation* CopyWidgetAnimation(struct UWidgetAnimation* CloneFrom);
};

// Object: Class LAI.WidgetUtil
// Size: 0x28 (Inherited: 0x28)
struct UWidgetUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UWidgetUtil, "WidgetUtil")

	// Object: Function LAI.WidgetUtil.TryAddChild
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7675384
	// Params: [ Num(3) Size(0x20) ]
	static struct FString TryAddChild(struct UWidget* TargetWidget, struct UWidget* ChildWidget);

	// Object: Function LAI.WidgetUtil.Translate
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x76752a8
	// Params: [ Num(2) Size(0x10) ]
	static void Translate(struct UWidget* Widget, const struct FVector2D& NewTranslation);

	// Object: Function LAI.WidgetUtil.ToggleTabNavigation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767520c
	// Params: [ Num(1) Size(0x1) ]
	static void ToggleTabNavigation(uint8_t bEnable);

	// Object: Function LAI.WidgetUtil.ToggleKeyNavigation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7675170
	// Params: [ Num(1) Size(0x1) ]
	static void ToggleKeyNavigation(uint8_t bEnable);

	// Object: Function LAI.WidgetUtil.ToggleAnalogNavigation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76750d4
	// Params: [ Num(1) Size(0x1) ]
	static void ToggleAnalogNavigation(uint8_t bEnable);

	// Object: Function LAI.WidgetUtil.SetVisibleAndHittable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674fb0
	// Params: [ Num(3) Size(0xA) ]
	static void SetVisibleAndHittable(struct UWidget* Widget, uint8_t bVisible, uint8_t bHittable);

	// Object: Function LAI.WidgetUtil.SetVisible
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674ed8
	// Params: [ Num(2) Size(0x9) ]
	static void SetVisible(struct UWidget* Widget, uint8_t bVisible);

	// Object: Function LAI.WidgetUtil.Scale
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x7674dfc
	// Params: [ Num(2) Size(0x10) ]
	static void Scale(struct UWidget* Widget, const struct FVector2D& NewScale);

	// Object: Function LAI.WidgetUtil.IsVisible
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674d54
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsVisible(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForVolatility
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674cac
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForVolatility(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForVisibility
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674c04
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForVisibility(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForRenderTransform
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674b5c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForRenderTransform(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForPaintAndVolatility
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674ab4
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForPaintAndVolatility(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForPaint
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674a0c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForPaint(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForLayoutAndVolatility
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674964
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForLayoutAndVolatility(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForLayout
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76748bc
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForLayout(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidatedForChildOrder
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674814
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidatedForChildOrder(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsInvalidated
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x767476c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInvalidated(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.IsAddable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x76746c4
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsAddable(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.GetTopAddableWidget
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674620
	// Params: [ Num(2) Size(0x10) ]
	static struct UPanelWidget* GetTopAddableWidget(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.FindTopAddableChild
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xef1bda8
	// Params: [ Num(2) Size(0x10) ]
	static struct UPanelWidget* FindTopAddableChild(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.FindBottomAddableParent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf87ffc8
	// Params: [ Num(2) Size(0x10) ]
	static struct UPanelWidget* FindBottomAddableParent(struct UWidget* Widget);

	// Object: Function LAI.WidgetUtil.AddToTopContainer
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7674540
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t AddToTopContainer(struct UWidget* TargetWidget, struct UWidget* ChildWidget);
};

} // namespace SDK
