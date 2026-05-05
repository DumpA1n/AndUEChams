#pragma once

#include "../CoreUObject_classes.hpp"
#include "AudioMixer.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OnlineSubsystemUtils
// Enums: 5
// Structs: 5
// Classes: 39

struct APlayerController;
enum class EMPMatchOutcome : uint8_t;
struct FInAppPurchaseProductRequest;
struct FUniqueNetIdRepl;
struct ITurnBasedMatchInterface;
struct UNetConnection;
struct UNetDriver;
struct FBlueprintSessionResult;
struct FPlayerReservation;
struct FPIELoginSettingsInternal;
struct FPartyReservation;
struct FSpectatorReservation;
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
struct UInAppPurchaseQueryCallbackProxy;
struct UInAppPurchaseRestoreCallbackProxy;
struct UIpNetDriver;
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

// Object: ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x50 (Inherited: 0x0)
struct FPlayerReservation
{
	struct FUniqueNetIdRepl UniqueId; // 0x0(0x28)
	struct FString ValidationStr; // 0x28(0x10)
	struct FString platform; // 0x38(0x10)
	uint8_t bAllowCrossplay : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
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

// Object: Class OnlineSubsystemUtils.IpConnection
// Size: 0x1DE0 (Inherited: 0x1D80)
struct UIpConnection : UNetConnection
{
	DEFINE_UE_CLASS_HELPERS(UIpConnection, "IpConnection")

	uint8_t Pad_0x1D80[0x50]; // 0x1D80(0x50)
	float SocketErrorDisconnectDelay; // 0x1DD0(0x4)
	uint8_t Pad_0x1DD4[0xC]; // 0x1DD4(0xC)
};

// Object: Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAchievementBlueprintLibrary, "AchievementBlueprintLibrary")

	// Object: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ba8998
	// Params: [ Num(5) Size(0x20) ]
	static void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, uint8_t& bFoundID, float& Progress);

	// Object: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8ba85e0
	// Params: [ Num(8) Size(0x69) ]
	static void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, uint8_t& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, uint8_t& bHidden);
};

// Object: Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x60 (Inherited: 0x28)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UAchievementQueryCallbackProxy, "AchievementQueryCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)

	// Object: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba8c8c
	// Params: [ Num(3) Size(0x18) ]
	static struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController);

	// Object: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba8bb0
	// Params: [ Num(3) Size(0x18) ]
	static struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x78 (Inherited: 0x28)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UAchievementWriteCallbackProxy, "AchievementWriteCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)

	// Object: Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba8e20
	// Params: [ Num(6) Size(0x28) ]
	static struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag);
};

// Object: Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x70 (Inherited: 0x28)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UConnectionCallbackProxy, "ConnectionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x28]; // 0x48(0x28)

	// Object: Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba8fb8
	// Params: [ Num(3) Size(0x18) ]
	static struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UCreateSessionCallbackProxy, "CreateSessionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)

	// Object: Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba909c
	// Params: [ Num(5) Size(0x20) ]
	static struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, uint8_t bUseLAN);
};

// Object: Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x70 (Inherited: 0x28)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UDestroySessionCallbackProxy, "DestroySessionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x28]; // 0x48(0x28)

	// Object: Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba9208
	// Params: [ Num(3) Size(0x18) ]
	static struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x78 (Inherited: 0x28)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UEndMatchCallbackProxy, "EndMatchCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)

	// Object: Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba92ec
	// Params: [ Num(7) Size(0x40) ]
	static struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome);
};

// Object: Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x70 (Inherited: 0x28)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UEndTurnCallbackProxy, "EndTurnCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x28]; // 0x48(0x28)

	// Object: Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba952c
	// Params: [ Num(5) Size(0x38) ]
	static struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

// Object: Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x88 (Inherited: 0x28)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UFindSessionsCallbackProxy, "FindSessionsCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x40]; // 0x48(0x40)

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ba9bd8
	// Params: [ Num(2) Size(0x118) ]
	static struct FString GetServerName(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ba9aac
	// Params: [ Num(2) Size(0x10C) ]
	static int32_t GetPingInMs(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ba9980
	// Params: [ Num(2) Size(0x10C) ]
	static int32_t GetMaxPlayers(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8ba9854
	// Params: [ Num(2) Size(0x10C) ]
	static int32_t GetCurrentPlayers(const struct FBlueprintSessionResult& Result);

	// Object: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba96fc
	// Params: [ Num(5) Size(0x20) ]
	static struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, uint8_t bUseLAN);
};

// Object: Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UFindTurnBasedMatchCallbackProxy, "FindTurnBasedMatchCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x38]; // 0x48(0x38)

	// Object: Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ba9d4c
	// Params: [ Num(8) Size(0x38) ]
	static struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, uint8_t ShowExistingMatches);
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
	// Offset: 0x8ba9f78
	// Params: [ Num(3) Size(0x28) ]
	static struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
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
	// Offset: 0x8baa078
	// Params: [ Num(3) Size(0x20) ]
	static struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, const struct TArray<struct FString>& ProductIdentifiers);
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
	// Offset: 0x8baa178
	// Params: [ Num(3) Size(0x20) ]
	static struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x800 (Inherited: 0x7B0)
struct UIpNetDriver : UNetDriver
{
	DEFINE_UE_CLASS_HELPERS(UIpNetDriver, "IpNetDriver")

	uint8_t LogPortUnreach : 1; // 0x7B0(0x1), Mask(0x1)
	uint8_t AllowPlayerPortUnreach : 1; // 0x7B0(0x1), Mask(0x2)
	uint8_t BitPad_0x7B0_2 : 6; // 0x7B0(0x1)
	uint8_t Pad_0x7B1[0x3]; // 0x7B1(0x3)
	uint32_t MaxPortCountToTry; // 0x7B4(0x4)
	uint8_t Pad_0x7B8[0xC]; // 0x7B8(0xC)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x7C4(0x4)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x7C8(0x4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x7CC(0x4)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x7D0(0x4)
	uint8_t Pad_0x7D4[0x4]; // 0x7D4(0x4)
	double MaxSecondsInReceive; // 0x7D8(0x8)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x7E0(0x4)
	uint8_t Pad_0x7E4[0x1C]; // 0x7E4(0x1C)
};

// Object: Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x178 (Inherited: 0x28)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UJoinSessionCallbackProxy, "JoinSessionCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x130]; // 0x48(0x130)

	// Object: Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8baa410
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
	// Offset: 0x8baa5b8
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue);
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
	// Offset: 0x8baa6e8
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
	// Offset: 0x8baa7cc
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
	// Offset: 0x8baa8b0
	// Params: [ Num(3) Size(0x18) ]
	static struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController);
};

// Object: Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x3A0 (Inherited: 0x370)
struct AOnlineBeacon : AActor
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeacon, "OnlineBeacon")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	float BeaconConnectionInitialTimeout; // 0x378(0x4)
	float BeaconConnectionTimeout; // 0x37C(0x4)
	struct UNetDriver* NetDriver; // 0x380(0x8)
	uint8_t Pad_0x388[0x18]; // 0x388(0x18)
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x400 (Inherited: 0x3A0)
struct AOnlineBeaconClient : AOnlineBeacon
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeaconClient, "OnlineBeaconClient")

	struct AOnlineBeaconHostObject* BeaconOwner; // 0x3A0(0x8)
	struct UNetConnection* BeaconConnection; // 0x3A8(0x8)
	EBeaconConnectionState ConnectionState; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x4F]; // 0x3B1(0x4F)

	// Object: Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetClient]
	// Offset: 0x8baaaf4
	// Params: [ Num(0) Size(0x0) ]
	void ClientOnConnected();
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x458 (Inherited: 0x3A0)
struct AOnlineBeaconHost : AOnlineBeacon
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeaconHost, "OnlineBeaconHost")

	int32_t ListenPort; // 0x3A0(0x4)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x3A8(0x10)
	uint8_t Pad_0x3B8[0xA0]; // 0x3B8(0xA0)
};

// Object: Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x398 (Inherited: 0x370)
struct AOnlineBeaconHostObject : AActor
{
	DEFINE_UE_CLASS_HELPERS(AOnlineBeaconHostObject, "OnlineBeaconHostObject")

	struct FString BeaconTypeName; // 0x370(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x380(0x8)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x388(0x10)
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

	uint8_t bOnlinePIEEnabled : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Object: Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1E0 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession
{
	DEFINE_UE_CLASS_HELPERS(UOnlineSessionClient, "OnlineSessionClient")

	uint8_t Pad_0x28[0x1B0]; // 0x28(0x1B0)
	uint8_t bIsFromInvite : 1; // 0x1D8(0x1), Mask(0x1)
	uint8_t BitPad_0x1D8_1 : 7; // 0x1D8(0x1)
	uint8_t bHandlingDisconnect : 1; // 0x1D9(0x1), Mask(0x1)
	uint8_t BitPad_0x1D9_1 : 7; // 0x1D9(0x1)
	uint8_t Pad_0x1DA[0x6]; // 0x1DA(0x6)
};

// Object: Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x4C0 (Inherited: 0x400)
struct APartyBeaconClient : AOnlineBeaconClient
{
	DEFINE_UE_CLASS_HELPERS(APartyBeaconClient, "PartyBeaconClient")

	uint8_t Pad_0x400[0x30]; // 0x400(0x30)
	struct FString DestSessionId; // 0x430(0x10)
	struct FPartyReservation PendingReservation; // 0x440(0x50)
	EClientRequestType RequestType; // 0x490(0x1)
	uint8_t bPendingReservationSent : 1; // 0x491(0x1), Mask(0x1)
	uint8_t BitPad_0x491_1 : 7; // 0x491(0x1)
	uint8_t bCancelReservation : 1; // 0x492(0x1), Mask(0x1)
	uint8_t BitPad_0x492_1 : 7; // 0x492(0x1)
	uint8_t Pad_0x493[0x2D]; // 0x493(0x2D)

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8baba2c
	// Params: [ Num(2) Size(0x60) ]
	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8bab8cc
	// Params: [ Num(2) Size(0x60) ]
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8bab76c
	// Params: [ Num(2) Size(0x60) ]
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8bab680
	// Params: [ Num(1) Size(0x28) ]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bab5d4
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bab5b8
	// Params: [ Num(0) Size(0x0) ]
	void ClientSendReservationFull();

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bab50c
	// Params: [ Num(1) Size(0x1) ]
	void ClientReservationResponse(EPartyReservationResult ReservationResponse);

	// Object: Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bab460
	// Params: [ Num(1) Size(0x1) ]
	void ClientCancelReservationResponse(EPartyReservationResult ReservationResponse);
};

// Object: Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x410 (Inherited: 0x398)
struct APartyBeaconHost : AOnlineBeaconHostObject
{
	DEFINE_UE_CLASS_HELPERS(APartyBeaconHost, "PartyBeaconHost")

	struct UPartyBeaconState* State; // 0x398(0x8)
	uint8_t Pad_0x3A0[0x60]; // 0x3A0(0x60)
	uint8_t bLogoutOnSessionTimeout : 1; // 0x400(0x1), Mask(0x1)
	uint8_t BitPad_0x400_1 : 7; // 0x400(0x1)
	uint8_t Pad_0x401[0x3]; // 0x401(0x3)
	float SessionTimeoutSecs; // 0x404(0x4)
	float TravelSessionTimeoutSecs; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
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
	uint8_t bRestrictCrossConsole : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bEnableRemovalRequests : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct TArray<struct FPartyReservation> Reservations; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
};

// Object: Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x70 (Inherited: 0x28)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	DEFINE_UE_CLASS_HELPERS(UQuitMatchCallbackProxy, "QuitMatchCallbackProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	uint8_t Pad_0x48[0x28]; // 0x48(0x28)

	// Object: Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8babc4c
	// Params: [ Num(6) Size(0x30) ]
	static struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds);
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
	// Offset: 0x8babe48
	// Params: [ Num(3) Size(0x18) ]
	static struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController);
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x4E8 (Inherited: 0x400)
struct ASpectatorBeaconClient : AOnlineBeaconClient
{
	DEFINE_UE_CLASS_HELPERS(ASpectatorBeaconClient, "SpectatorBeaconClient")

	uint8_t Pad_0x400[0x30]; // 0x400(0x30)
	struct FString DestSessionId; // 0x430(0x10)
	struct FSpectatorReservation PendingReservation; // 0x440(0x78)
	ESpectatorClientRequestType RequestType; // 0x4B8(0x1)
	uint8_t bPendingReservationSent : 1; // 0x4B9(0x1), Mask(0x1)
	uint8_t BitPad_0x4B9_1 : 7; // 0x4B9(0x1)
	uint8_t bCancelReservation : 1; // 0x4BA(0x1), Mask(0x1)
	uint8_t BitPad_0x4BA_1 : 7; // 0x4BA(0x1)
	uint8_t Pad_0x4BB[0x2D]; // 0x4BB(0x2D)

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8bac698
	// Params: [ Num(2) Size(0x88) ]
	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x8bac5ac
	// Params: [ Num(1) Size(0x28) ]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bac500
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bac4e4
	// Params: [ Num(0) Size(0x0) ]
	void ClientSendReservationFull();

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bac438
	// Params: [ Num(1) Size(0x1) ]
	void ClientReservationResponse(ESpectatorReservationResult ReservationResponse);

	// Object: Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bac38c
	// Params: [ Num(1) Size(0x1) ]
	void ClientCancelReservationResponse(ESpectatorReservationResult ReservationResponse);
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x410 (Inherited: 0x398)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject
{
	DEFINE_UE_CLASS_HELPERS(ASpectatorBeaconHost, "SpectatorBeaconHost")

	struct USpectatorBeaconState* State; // 0x398(0x8)
	uint8_t Pad_0x3A0[0x60]; // 0x3A0(0x60)
	uint8_t bLogoutOnSessionTimeout : 1; // 0x400(0x1), Mask(0x1)
	uint8_t BitPad_0x400_1 : 7; // 0x400(0x1)
	uint8_t Pad_0x401[0x3]; // 0x401(0x3)
	float SessionTimeoutSecs; // 0x404(0x4)
	float TravelSessionTimeoutSecs; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
};

// Object: Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60 (Inherited: 0x28)
struct USpectatorBeaconState : UObject
{
	DEFINE_UE_CLASS_HELPERS(USpectatorBeaconState, "SpectatorBeaconState")

	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	uint8_t bRestrictCrossConsole : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x400 (Inherited: 0x400)
struct ATestBeaconClient : AOnlineBeaconClient
{
	DEFINE_UE_CLASS_HELPERS(ATestBeaconClient, "TestBeaconClient")

	// Object: Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x8bac94c
	// Params: [ Num(0) Size(0x0) ]
	void ServerPong();

	// Object: Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8bac930
	// Params: [ Num(0) Size(0x0) ]
	void ClientPing();
};

// Object: Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x398 (Inherited: 0x398)
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
	// Offset: 0x8bacf40
	// Params: [ Num(3) Size(0x18) ]
	static void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8bacd3c
	// Params: [ Num(5) Size(0x38) ]
	static void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8bacb7c
	// Params: [ Num(4) Size(0x24) ]
	static void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex);

	// Object: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8bac9bc
	// Params: [ Num(4) Size(0x21) ]
	static void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, uint8_t& bIsMyTurn);
};

// Object: Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x700 (Inherited: 0x6D0)
struct UVoipListenerSynthComponent : USynthComponent
{
	DEFINE_UE_CLASS_HELPERS(UVoipListenerSynthComponent, "VoipListenerSynthComponent")

	uint8_t Pad_0x6D0[0x30]; // 0x6D0(0x30)

	// Object: Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8bad05c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsIdling();
};

} // namespace SDK
