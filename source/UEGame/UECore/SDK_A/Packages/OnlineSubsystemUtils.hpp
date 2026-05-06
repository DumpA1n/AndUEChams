#pragma once

#include "../CoreUObject_classes.hpp"
#include "AudioMixer.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OnlineSubsystemUtils
// Enums: 7
// Structs: 11
// Classes: 42

struct APlayerController;
struct FInAppPurchaseProductRequest;
struct FUniqueNetIdRepl;
struct ITurnBasedMatchInterface;
struct UNetConnection;
struct UNetDriver;
struct FBlueprintSessionResult;
struct FInAppPurchaseReceiptInfo2;
struct FOnlineProxyStoreOffer;
struct FInAppPurchaseRestoreInfo2;
struct FInAppPurchaseReceiptInfo;
struct FInAppPurchaseProductInfo2;
struct FInAppPurchaseProductRequest2;
struct FPlayerReservation;
struct FPIELoginSettingsInternal;
struct FPartyReservation;
struct FSpectatorReservation;
struct UIpNetDriver;
struct UIpConnection;
struct UAchievementBlueprintLibrary;
struct UAchievementQueryCallbackProxy;
struct UAchievementWriteCallbackProxy;
struct UConnectionCallbackProxy;
struct UCreateSessionCallbackProxy;
struct UDestroySessionCallbackProxy;
struct UEndMatchCallbackProxy;
struct UEndTurnCallbackProxy;
struct UFindSessionsCallbackProxy;
struct UFindTurnBasedMatchCallbackProxy;
struct UInAppPurchaseCallbackProxy;
struct UInAppPurchaseCallbackProxy2;
struct UInAppPurchaseQueryCallbackProxy;
struct UInAppPurchaseQueryCallbackProxy2;
struct UInAppPurchaseRestoreCallbackProxy;
struct UInAppPurchaseRestoreCallbackProxy2;
struct UJoinSessionCallbackProxy;
struct ULeaderboardBlueprintLibrary;
struct ULeaderboardFlushCallbackProxy;
struct ULeaderboardQueryCallbackProxy;
struct ULogoutCallbackProxy;
struct AOnlineBeacon;
struct AOnlineBeaconClient;
struct AOnlineBeaconHost;
struct AOnlineBeaconHostObject;
struct UOnlineEngineInterfaceImpl;
struct UOnlinePIESettings;
struct UOnlineSessionClient;
struct APartyBeaconClient;
struct APartyBeaconHost;
struct UPartyBeaconState;
struct UQuitMatchCallbackProxy;
struct UShowLoginUICallbackProxy;
struct ASpectatorBeaconClient;
struct ASpectatorBeaconHost;
struct USpectatorBeaconState;
struct ATestBeaconClient;
struct ATestBeaconHost;
struct UTurnBasedBlueprintLibrary;
struct UVoipListenerSynthComponent;

// Object: Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6
};

// Object: Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};

// Object: Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4
};

// Object: Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	EClientRequestType_MAX = 7
};

// Object: Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX = 16
};

// Object: Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6
};

// Object: Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};

// Object: ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0x108 (Inherited: 0x0)
struct FBlueprintSessionResult
{
	uint8_t Pad_0x0[0x108]; // 0x0(0x108)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseReceiptInfo2
{
	struct FString ItemName; // 0x0(0x10)
	struct FString itemID; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size: 0x110 (Inherited: 0x0)
struct FOnlineProxyStoreOffer
{
	struct FString OfferId; // 0x0(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32_t RegularPrice; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FText PriceText; // 0x78(0x18)
	int32_t NumericPrice; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FString CurrencyCode; // 0x98(0x10)
	struct FDateTime ReleaseDate; // 0xA8(0x8)
	struct FDateTime ExpirationDate; // 0xB0(0x8)
	EOnlineProxyStoreOfferDiscountType DiscountType; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xC0(0x50)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseRestoreInfo2
{
	struct FString ItemName; // 0x0(0x10)
	struct FString itemID; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseReceiptInfo
{
	struct FString ItemName; // 0x0(0x10)
	struct FString itemID; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size: 0xF8 (Inherited: 0x0)
struct FInAppPurchaseProductInfo2
{
	struct FString Identifier; // 0x0(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xA8(0x50)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Size: 0x18 (Inherited: 0x0)
struct FInAppPurchaseProductRequest2
{
	struct FString ProductIdentifier; // 0x0(0x10)
	bool bIsConsumable; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x50 (Inherited: 0x0)
struct FPlayerReservation
{
	struct FUniqueNetIdRepl UniqueID; // 0x0(0x28)
	struct FString ValidationStr; // 0x28(0x10)
	struct FString Platform; // 0x38(0x10)
	bool bAllowCrossplay; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float ElapsedTime; // 0x4C(0x4)
};

// Object: ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40 (Inherited: 0x0)
struct FPIELoginSettingsInternal
{
	struct FString ID; // 0x0(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<uint8_t> TokenBytes; // 0x30(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x50 (Inherited: 0x0)
struct FPartyReservation
{
	int32_t TeamNum; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FUniqueNetIdRepl PartyLeader; // 0x8(0x28)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x30(0x10)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x40(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// Size: 0x78 (Inherited: 0x0)
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl SpectatorId; // 0x0(0x28)
	struct FPlayerReservation Spectator; // 0x28(0x50)
};

// Object: Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x878 (Inherited: 0x7E0)
struct UIpNetDriver : UNetDriver
{
	DEFINE_UE_CLASS_HELPERS(UIpNetDriver, "IpNetDriver")

	uint8_t LogPortUnreach : 1; // 0x7E0(0x1), Mask(0x1)
	uint8_t AllowPlayerPortUnreach : 1; // 0x7E0(0x1), Mask(0x2)
	uint8_t BitPad_0x7E0_2 : 6; // 0x7E0(0x1)
	uint8_t Pad_0x7E1[0x3]; // 0x7E1(0x3)
	uint32_t MaxPortCountToTry; // 0x7E4(0x4)
	uint8_t Pad_0x7E8[0x10]; // 0x7E8(0x10)
	double MaxSecondsInReceive; // 0x7F8(0x8)
	double MaxSecondsInReceiveForDS; // 0x800(0x8)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x808(0x4)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x80C(0x4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x810(0x4)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x814(0x4)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x818(0x4)
	float ResolutionConnectionTimeout; // 0x81C(0x4)
	struct TArray<int32_t> NetTickDispatchTimeLimitPatterns; // 0x820(0x10)
	uint8_t Pad_0x830[0x48]; // 0x830(0x48)
};

// Object: Class OnlineSubsystemUtils.IpConnection
// Size: 0x1E20 (Inherited: 0x1D80)
struct UIpConnection : UNetConnection
{
	DEFINE_UE_CLASS_HELPERS(UIpConnection, "IpConnection")

	uint8_t Pad_0x1D80[0x50]; // 0x1D80(0x50)
	float SocketErrorDisconnectDelay; // 0x1DD0(0x4)
	uint8_t Pad_0x1DD4[0x4C]; // 0x1DD4(0x4C)
};

// Object: Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAchievementBlueprintLibrary, "AchievementBlueprintLibrary")

	// Object: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed7508
	// Params: [ Num(5) Size(0x20) ]
	static void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress);

	// Object: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed7150
	// Params: [ Num(8) Size(0x69) ]
	static void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden);
};

// Object: Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UAchievementQueryCallbackProxy, "AchievementQueryCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)

	// Object: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed77cc
	// Params: [ Num(3) Size(0x18) ]
	static struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed76e8
	// Params: [ Num(3) Size(0x18) ]
	static struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UAchievementWriteCallbackProxy, "AchievementWriteCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)

	// Object: Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed78b8
	// Params: [ Num(6) Size(0x28) ]
	static struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag);
};

// Object: Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UConnectionCallbackProxy, "ConnectionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)

	// Object: Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed7a64
	// Params: [ Num(3) Size(0x18) ]
	static struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UCreateSessionCallbackProxy, "CreateSessionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x48]; // 0x50(0x48)

	// Object: Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed7b50
	// Params: [ Num(5) Size(0x20) ]
	static struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
};

// Object: Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UDestroySessionCallbackProxy, "DestroySessionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)

	// Object: Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed7ccc
	// Params: [ Num(3) Size(0x18) ]
	static struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UEndMatchCallbackProxy, "EndMatchCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)

	// Object: Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed7db8
	// Params: [ Num(7) Size(0x40) ]
	static struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, uint8_t LocalPlayerOutcome, uint8_t OtherPlayersOutcome);
};

// Object: Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UEndTurnCallbackProxy, "EndTurnCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)

	// Object: Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed801c
	// Params: [ Num(5) Size(0x38) ]
	static struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

// Object: Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UFindSessionsCallbackProxy, "FindSessionsCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x40]; // 0x50(0x40)

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4ed8460
	// Params: [ Num(2) Size(0x118) ]
	static struct FString GetServerName(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4ed85c4
	// Params: [ Num(2) Size(0x10C) ]
	static int32_t GetPingInMs(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4ed8208
	// Params: [ Num(2) Size(0x10C) ]
	static int32_t GetMaxPlayers(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4ed8334
	// Params: [ Num(2) Size(0x10C) ]
	static int32_t GetCurrentPlayers(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed86f0
	// Params: [ Num(5) Size(0x20) ]
	static struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
};

// Object: Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UFindTurnBasedMatchCallbackProxy, "FindTurnBasedMatchCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x38]; // 0x50(0x38)

	// Object: Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed886c
	// Params: [ Num(8) Size(0x38) ]
	static struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInAppPurchaseCallbackProxy, "InAppPurchaseCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x38]; // 0x48(0x38)

	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed8ab4
	// Params: [ Num(3) Size(0x28) ]
	static struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xA8 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInAppPurchaseCallbackProxy2, "InAppPurchaseCallbackProxy2")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x60]; // 0x48(0x60)

	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed8cb8
	// Params: [ Num(2) Size(0x10) ]
	static struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ed8c10
	// Params: [ Num(2) Size(0x10) ]
	static struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed8d60
	// Params: [ Num(3) Size(0x28) ]
	static struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInAppPurchaseQueryCallbackProxy, "InAppPurchaseQueryCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)

	// Object: Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed8e6c
	// Params: [ Num(3) Size(0x20) ]
	static struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, const struct TArray<struct FString>& ProductIdentifiers);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInAppPurchaseQueryCallbackProxy2, "InAppPurchaseQueryCallbackProxy2")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)

	// Object: Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed8fb4
	// Params: [ Num(3) Size(0x20) ]
	static struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, const struct TArray<struct FString>& ProductIdentifiers);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInAppPurchaseRestoreCallbackProxy, "InAppPurchaseRestoreCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)

	// Object: Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed90b8
	// Params: [ Num(3) Size(0x20) ]
	static struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xA8 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInAppPurchaseRestoreCallbackProxy2, "InAppPurchaseRestoreCallbackProxy2")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x60]; // 0x48(0x60)

	// Object: Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ed9220
	// Params: [ Num(3) Size(0x20) ]
	static struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x180 (Inherited: 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UJoinSessionCallbackProxy, "JoinSessionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x130]; // 0x50(0x130)

	// Object: Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4edd158
	// Params: [ Num(4) Size(0x120) ]
	static struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Object: Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(ULeaderboardBlueprintLibrary, "LeaderboardBlueprintLibrary")

	// Object: Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4edd308
	// Params: [ Num(4) Size(0x15) ]
	static bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue);
};

// Object: Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULeaderboardFlushCallbackProxy, "LeaderboardFlushCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)

	// Object: Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4edd444
	// Params: [ Num(3) Size(0x18) ]
	static struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName);
};

// Object: Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULeaderboardQueryCallbackProxy, "LeaderboardQueryCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)

	// Object: Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4edd530
	// Params: [ Num(3) Size(0x18) ]
	static struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName);
};

// Object: Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(ULogoutCallbackProxy, "LogoutCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)

	// Object: Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4edd61c
	// Params: [ Num(3) Size(0x18) ]
	static struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x330 (Inherited: 0x300)
struct AOnlineBeacon : AActor
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeacon, "OnlineBeacon")

	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	float BeaconConnectionInitialTimeout; // 0x308(0x4)
	float BeaconConnectionTimeout; // 0x30C(0x4)
	struct UNetDriver* NetDriver; // 0x310(0x8)
	uint8_t Pad_0x318[0x18]; // 0x318(0x18)
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x390 (Inherited: 0x330)
struct AOnlineBeaconClient : AOnlineBeacon
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeaconClient, "OnlineBeaconClient")

	struct AOnlineBeaconHostObject* BeaconOwner; // 0x330(0x8)
	struct UNetConnection* BeaconConnection; // 0x338(0x8)
	EBeaconConnectionState ConnectionState; // 0x340(0x1)
	uint8_t Pad_0x341[0x4F]; // 0x341(0x4F)

	// Object: Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetClient]
	// Offset: 0x4edd778
	// Params: [ Num(0) Size(0x0) ]
	void ClientOnConnected();
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x3E8 (Inherited: 0x330)
struct AOnlineBeaconHost : AOnlineBeacon
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeaconHost, "OnlineBeaconHost")

	int32_t ListenPort; // 0x330(0x4)
	uint8_t Pad_0x334[0x4]; // 0x334(0x4)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x338(0x10)
	uint8_t Pad_0x348[0xA0]; // 0x348(0xA0)
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x328 (Inherited: 0x300)
struct AOnlineBeaconHostObject : AActor
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeaconHostObject, "OnlineBeaconHostObject")

	struct FString BeaconTypeName; // 0x300(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x310(0x8)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x318(0x10)
};

// Object: Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x128 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface
{
	DEFINE_UE_CLASS_HELPERS(UOnlineEngineInterfaceImpl, "OnlineEngineInterfaceImpl")

	struct FName VoiceSubsystemNameOverride; // 0x28(0x8)
	uint8_t Pad_0x30[0xF8]; // 0x30(0xF8)
};

// Object: Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UOnlinePIESettings, "OnlinePIESettings")

	bool bOnlinePIEEnabled; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Object: Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1E0 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession
{
	DEFINE_UE_CLASS_HELPERS(UOnlineSessionClient, "OnlineSessionClient")

	uint8_t Pad_0x28[0x1B0]; // 0x28(0x1B0)
	bool bIsFromInvite; // 0x1D8(0x1)
	bool bHandlingDisconnect; // 0x1D9(0x1)
	uint8_t Pad_0x1DA[0x6]; // 0x1DA(0x6)
};

// Object: Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x450 (Inherited: 0x390)
struct APartyBeaconClient : AOnlineBeaconClient
{
	DEFINE_UE_CLASS_HELPERS(APartyBeaconClient, "PartyBeaconClient")

	uint8_t Pad_0x390[0x30]; // 0x390(0x30)
	struct FString DestSessionId; // 0x3C0(0x10)
	struct FPartyReservation PendingReservation; // 0x3D0(0x50)
	EClientRequestType RequestType; // 0x420(0x1)
	bool bPendingReservationSent; // 0x421(0x1)
	bool bCancelReservation; // 0x422(0x1)
	uint8_t Pad_0x423[0x2D]; // 0x423(0x2D)

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x4eddb00
	// Params: [ Num(2) Size(0x60) ]
	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x4eddc68
	// Params: [ Num(2) Size(0x60) ]
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x4edd998
	// Params: [ Num(2) Size(0x60) ]
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x4edd8a8
	// Params: [ Num(1) Size(0x28) ]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edddec
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edddd0
	// Params: [ Num(0) Size(0x0) ]
	void ClientSendReservationFull();

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4eddf4c
	// Params: [ Num(1) Size(0x1) ]
	void ClientReservationResponse(uint8_t ReservationResponse);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edde9c
	// Params: [ Num(1) Size(0x1) ]
	void ClientCancelReservationResponse(uint8_t ReservationResponse);
};

// Object: Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x3A0 (Inherited: 0x328)
struct APartyBeaconHost : AOnlineBeaconHostObject
{
	DEFINE_UE_CLASS_HELPERS(APartyBeaconHost, "PartyBeaconHost")

	struct UPartyBeaconState* State; // 0x328(0x8)
	uint8_t Pad_0x330[0x60]; // 0x330(0x60)
	bool bLogoutOnSessionTimeout; // 0x390(0x1)
	uint8_t Pad_0x391[0x3]; // 0x391(0x3)
	float SessionTimeoutSecs; // 0x394(0x4)
	float TravelSessionTimeoutSecs; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
};

// Object: Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x78 (Inherited: 0x28)
struct UPartyBeaconState : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPartyBeaconState, "PartyBeaconState")

	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	int32_t NumTeams; // 0x38(0x4)
	int32_t NumPlayersPerTeam; // 0x3C(0x4)
	struct FName TeamAssignmentMethod; // 0x40(0x8)
	int32_t ReservedHostTeamNum; // 0x48(0x4)
	int32_t ForceTeamNum; // 0x4C(0x4)
	bool bRestrictCrossConsole; // 0x50(0x1)
	bool bEnableRemovalRequests; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct TArray<struct FPartyReservation> Reservations; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
};

// Object: Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UQuitMatchCallbackProxy, "QuitMatchCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)

	// Object: Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ede988
	// Params: [ Num(6) Size(0x30) ]
	static struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, uint8_t Outcome, int32_t TurnTimeoutInSeconds);
};

// Object: Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60 (Inherited: 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UShowLoginUICallbackProxy, "ShowLoginUICallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)

	// Object: Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4edeba4
	// Params: [ Num(3) Size(0x18) ]
	static struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController);
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x478 (Inherited: 0x390)
struct ASpectatorBeaconClient : AOnlineBeaconClient
{
	DEFINE_UE_CLASS_HELPERS(ASpectatorBeaconClient, "SpectatorBeaconClient")

	uint8_t Pad_0x390[0x30]; // 0x390(0x30)
	struct FString DestSessionId; // 0x3C0(0x10)
	struct FSpectatorReservation PendingReservation; // 0x3D0(0x78)
	ESpectatorClientRequestType RequestType; // 0x448(0x1)
	bool bPendingReservationSent; // 0x449(0x1)
	bool bCancelReservation; // 0x44A(0x1)
	uint8_t Pad_0x44B[0x2D]; // 0x44B(0x2D)

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x4edede4
	// Params: [ Num(2) Size(0x88) ]
	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x4edecf4
	// Params: [ Num(1) Size(0x28) ]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edef7c
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edef60
	// Params: [ Num(0) Size(0x0) ]
	void ClientSendReservationFull();

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edf0dc
	// Params: [ Num(1) Size(0x1) ]
	void ClientReservationResponse(uint8_t ReservationResponse);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4edf02c
	// Params: [ Num(1) Size(0x1) ]
	void ClientCancelReservationResponse(uint8_t ReservationResponse);
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x3A0 (Inherited: 0x328)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject
{
	DEFINE_UE_CLASS_HELPERS(ASpectatorBeaconHost, "SpectatorBeaconHost")

	struct USpectatorBeaconState* State; // 0x328(0x8)
	uint8_t Pad_0x330[0x60]; // 0x330(0x60)
	bool bLogoutOnSessionTimeout; // 0x390(0x1)
	uint8_t Pad_0x391[0x3]; // 0x391(0x3)
	float SessionTimeoutSecs; // 0x394(0x4)
	float TravelSessionTimeoutSecs; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60 (Inherited: 0x28)
struct USpectatorBeaconState : UObject
{
	DEFINE_UE_CLASS_HELPERS(USpectatorBeaconState, "SpectatorBeaconState")

	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	bool bRestrictCrossConsole; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x390 (Inherited: 0x390)
struct ATestBeaconClient : AOnlineBeaconClient
{
	DEFINE_UE_CLASS_HELPERS(ATestBeaconClient, "TestBeaconClient")

	// Object: Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x4ee20ec
	// Params: [ Num(0) Size(0x0) ]
	void ServerPong();

	// Object: Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x4ee2148
	// Params: [ Num(0) Size(0x0) ]
	void ClientPing();
};

// Object: Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x328 (Inherited: 0x328)
struct ATestBeaconHost : AOnlineBeaconHostObject
{
	DEFINE_UE_CLASS_HELPERS(ATestBeaconHost, "TestBeaconHost")
};

// Object: Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UTurnBasedBlueprintLibrary, "TurnBasedBlueprintLibrary")

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4ee2414
	// Params: [ Num(3) Size(0x18) ]
	static void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ee21f0
	// Params: [ Num(5) Size(0x38) ]
	static void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ee2528
	// Params: [ Num(4) Size(0x24) ]
	static void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4ee2700
	// Params: [ Num(4) Size(0x21) ]
	static void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn);
};

// Object: Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x750 (Inherited: 0x6F0)
struct UVoipListenerSynthComponent : USynthComponent
{
	DEFINE_UE_CLASS_HELPERS(UVoipListenerSynthComponent, "VoipListenerSynthComponent")

	uint8_t Pad_0x6F0[0x60]; // 0x6F0(0x60)

	// Object: Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4ee28ec
	// Params: [ Num(1) Size(0x1) ]
	bool IsIdling();
};

} // namespace SDK
