#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: EngineSettings
// Enums: 4
// Structs: 2
// Classes: 7

struct FAutoCompleteCommand;
struct FGameModeName;
struct UConsoleSettings;
struct UGameMapsSettings;
struct UGameNetworkManagerSettings;
struct UGameSessionSettings;
struct UGeneralEngineSettings;
struct UGeneralProjectSettings;
struct UHudSettings;

// Object: Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2
};

// Object: Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3
};

// Object: Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4
};

// Object: Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2
};

// Object: ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28 (Inherited: 0x0)
struct FAutoCompleteCommand
{
	struct FString Command; // 0x0(0x10)
	struct FString Desc; // 0x10(0x10)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct EngineSettings.GameModeName
// Size: 0x28 (Inherited: 0x0)
struct FGameModeName
{
	struct FString Name; // 0x0(0x10)
	struct FSoftClassPath GameMode; // 0x10(0x18)
};

// Object: Class EngineSettings.ConsoleSettings
// Size: 0x70 (Inherited: 0x28)
struct UConsoleSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UConsoleSettings, "ConsoleSettings")

	int32_t MaxScrollbackSize; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x30(0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x40(0x10)
	float BackgroundOpacityPercentage; // 0x50(0x4)
	bool bOrderTopToBottom; // 0x54(0x1)
	bool bDisplayHelpInAutoComplete; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	struct FColor InputColor; // 0x58(0x4)
	struct FColor HistoryColor; // 0x5C(0x4)
	struct FColor AutoCompleteCommandColor; // 0x60(0x4)
	struct FColor AutoCompleteCVarColor; // 0x64(0x4)
	struct FColor AutoCompleteFadedColor; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: Class EngineSettings.GameMapsSettings
// Size: 0xF0 (Inherited: 0x28)
struct UGameMapsSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameMapsSettings, "GameMapsSettings")

	struct FString LocalMapOptions; // 0x28(0x10)
	struct FSoftObjectPath TransitionMap; // 0x38(0x18)
	bool bUseSplitscreen; // 0x50(0x1)
	uint8_t TwoPlayerSplitscreenLayout; // 0x51(0x1)
	uint8_t ThreePlayerSplitscreenLayout; // 0x52(0x1)
	EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53(0x1)
	bool bOffsetPlayerGamepadIds; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
	struct FSoftClassPath GameInstanceClass; // 0x58(0x18)
	struct FSoftObjectPath GameDefaultMap; // 0x70(0x18)
	struct FSoftObjectPath ServerDefaultMap; // 0x88(0x18)
	struct FSoftClassPath GlobalDefaultGameMode; // 0xA0(0x18)
	struct FSoftClassPath GlobalDefaultServerGameMode; // 0xB8(0x18)
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // 0xD0(0x10)
	struct TArray<struct FGameModeName> GameModeClassAliases; // 0xE0(0x10)

	// Object: Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa7e4740
	// Params: [ Num(1) Size(0x1) ]
	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);

	// Object: Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa7e4708
	// Params: [ Num(1) Size(0x1) ]
	bool GetSkipAssigningGamepadToPlayer1();

	// Object: Function EngineSettings.GameMapsSettings.GetGameMapsSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa7e47f0
	// Params: [ Num(1) Size(0x8) ]
	static struct UGameMapsSettings* GetGameMapsSettings();
};

// Object: Class EngineSettings.GameNetworkManagerSettings
// Size: 0x58 (Inherited: 0x28)
struct UGameNetworkManagerSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameNetworkManagerSettings, "GameNetworkManagerSettings")

	int32_t MinDynamicBandwidth; // 0x28(0x4)
	int32_t MaxDynamicBandwidth; // 0x2C(0x4)
	int32_t TotalNetBandwidth; // 0x30(0x4)
	int32_t BadPingThreshold; // 0x34(0x4)
	uint8_t bIsStandbyCheckingEnabled : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float StandbyRxCheatTime; // 0x3C(0x4)
	float StandbyTxCheatTime; // 0x40(0x4)
	float PercentMissingForRxStandby; // 0x44(0x4)
	float PercentMissingForTxStandby; // 0x48(0x4)
	float PercentForBadPing; // 0x4C(0x4)
	float JoinInProgressStandbyWaitTime; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class EngineSettings.GameSessionSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameSessionSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameSessionSettings, "GameSessionSettings")

	int32_t MaxSpectators; // 0x28(0x4)
	int32_t MaxPlayers; // 0x2C(0x4)
	uint8_t bRequiresPushToTalk : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class EngineSettings.GeneralEngineSettings
// Size: 0x28 (Inherited: 0x28)
struct UGeneralEngineSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeneralEngineSettings, "GeneralEngineSettings")
};

// Object: Class EngineSettings.GeneralProjectSettings
// Size: 0x110 (Inherited: 0x28)
struct UGeneralProjectSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeneralProjectSettings, "GeneralProjectSettings")

	struct FString CompanyName; // 0x28(0x10)
	struct FString CompanyDistinguishedName; // 0x38(0x10)
	struct FString CopyrightNotice; // 0x48(0x10)
	struct FString Description; // 0x58(0x10)
	struct FString Homepage; // 0x68(0x10)
	struct FString LicensingTerms; // 0x78(0x10)
	struct FString PrivacyPolicy; // 0x88(0x10)
	struct FGuid ProjectID; // 0x98(0x10)
	struct FString ProjectName; // 0xA8(0x10)
	struct FString ProjectVersion; // 0xB8(0x10)
	struct FString SupportContact; // 0xC8(0x10)
	struct FText ProjectDisplayedTitle; // 0xD8(0x18)
	struct FText ProjectDebugTitleInfo; // 0xF0(0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x108(0x1)
	bool bUseBorderlessWindow; // 0x109(0x1)
	bool bStartInVR; // 0x10A(0x1)
	bool bAllowWindowResize; // 0x10B(0x1)
	bool bAllowClose; // 0x10C(0x1)
	bool bAllowMaximize; // 0x10D(0x1)
	bool bAllowMinimize; // 0x10E(0x1)
	uint8_t Pad_0x10F[0x1]; // 0x10F(0x1)
};

// Object: Class EngineSettings.HudSettings
// Size: 0x40 (Inherited: 0x28)
struct UHudSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHudSettings, "HudSettings")

	uint8_t bShowHUD : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TArray<struct FName> DebugDisplay; // 0x30(0x10)
};

} // namespace SDK
