#include "OnlineSubsystemUtils.hpp"
#include "Engine.hpp"
#include "OnlineSubsystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAchievementBlueprintLibrary
void UAchievementBlueprintLibrary::GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementProgress");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FName AchievementID;
        bool bFoundID;
        float Progress;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.AchievementID = (struct FName)AchievementID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bFoundID = Parms.bFoundID;
    Progress = Parms.Progress;
}

void UAchievementBlueprintLibrary::GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementDescription");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FName AchievementID;
        bool bFoundID;
        struct FText Title;
        struct FText LockedDescription;
        struct FText UnlockedDescription;
        bool bHidden;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.AchievementID = (struct FName)AchievementID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bFoundID = Parms.bFoundID;
    Title = Parms.Title;
    LockedDescription = Parms.LockedDescription;
    UnlockedDescription = Parms.UnlockedDescription;
    bHidden = Parms.bHidden;
}

// UAchievementQueryCallbackProxy
struct UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AchievementQueryCallbackProxy", "CacheAchievements");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct UAchievementQueryCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AchievementQueryCallbackProxy", "CacheAchievementDescriptions");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct UAchievementQueryCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAchievementWriteCallbackProxy
struct UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AchievementWriteCallbackProxy", "WriteAchievementProgress");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FName AchievementName;
        float Progress;
        int32_t UserTag;
        struct UAchievementWriteCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.AchievementName = (struct FName)AchievementName;
    Parms.Progress = (float)Progress;
    Parms.UserTag = (int32_t)UserTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UConnectionCallbackProxy
struct UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConnectionCallbackProxy", "ConnectToService");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct UConnectionCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCreateSessionCallbackProxy
struct UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CreateSessionCallbackProxy", "CreateSession");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        int32_t PublicConnections;
        bool bUseLAN;
        struct UCreateSessionCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.PublicConnections = (int32_t)PublicConnections;
    Parms.bUseLAN = (bool)bUseLAN;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDestroySessionCallbackProxy
struct UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DestroySessionCallbackProxy", "DestroySession");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct UDestroySessionCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UEndMatchCallbackProxy
struct UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, uint8_t LocalPlayerOutcome, uint8_t OtherPlayersOutcome)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EndMatchCallbackProxy", "EndMatch");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;
        struct FString MatchID;
        uint8_t LocalPlayerOutcome;
        uint8_t OtherPlayersOutcome;
        struct UEndMatchCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchActor = (struct TScriptInterface<ITurnBasedMatchInterface>)MatchActor;
    Parms.MatchID = (struct FString)MatchID;
    Parms.LocalPlayerOutcome = (uint8_t)LocalPlayerOutcome;
    Parms.OtherPlayersOutcome = (uint8_t)OtherPlayersOutcome;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UEndTurnCallbackProxy
struct UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EndTurnCallbackProxy", "EndTurn");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FString MatchID;
        struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface;
        struct UEndTurnCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchID = (struct FString)MatchID;
    Parms.TurnBasedMatchInterface = (struct TScriptInterface<ITurnBasedMatchInterface>)TurnBasedMatchInterface;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UFindSessionsCallbackProxy
struct FString UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FindSessionsCallbackProxy", "GetServerName");
    struct
    {
        struct FBlueprintSessionResult Result;
        struct FString ReturnValue;
    } Parms{};
    Parms.Result = (struct FBlueprintSessionResult)Result;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FindSessionsCallbackProxy", "GetPingInMs");
    struct
    {
        struct FBlueprintSessionResult Result;
        int32_t ReturnValue;
    } Parms{};
    Parms.Result = (struct FBlueprintSessionResult)Result;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FindSessionsCallbackProxy", "GetMaxPlayers");
    struct
    {
        struct FBlueprintSessionResult Result;
        int32_t ReturnValue;
    } Parms{};
    Parms.Result = (struct FBlueprintSessionResult)Result;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FindSessionsCallbackProxy", "GetCurrentPlayers");
    struct
    {
        struct FBlueprintSessionResult Result;
        int32_t ReturnValue;
    } Parms{};
    Parms.Result = (struct FBlueprintSessionResult)Result;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FindSessionsCallbackProxy", "FindSessions");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        int32_t MaxResults;
        bool bUseLAN;
        struct UFindSessionsCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MaxResults = (int32_t)MaxResults;
    Parms.bUseLAN = (bool)bUseLAN;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UFindTurnBasedMatchCallbackProxy
struct UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FindTurnBasedMatchCallbackProxy", "FindTurnBasedMatch");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;
        int32_t MinPlayers;
        int32_t MaxPlayers;
        int32_t PlayerGroup;
        bool ShowExistingMatches;
        struct UFindTurnBasedMatchCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchActor = (struct TScriptInterface<ITurnBasedMatchInterface>)MatchActor;
    Parms.MinPlayers = (int32_t)MinPlayers;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.PlayerGroup = (int32_t)PlayerGroup;
    Parms.ShowExistingMatches = (bool)ShowExistingMatches;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UInAppPurchaseCallbackProxy
struct UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseCallbackProxy", "CreateProxyObjectForInAppPurchase");
    struct
    {
        struct APlayerController* PlayerController;
        struct FInAppPurchaseProductRequest ProductRequest;
        struct UInAppPurchaseCallbackProxy* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.ProductRequest = (struct FInAppPurchaseProductRequest)ProductRequest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UInAppPurchaseCallbackProxy2
struct UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseUnprocessedPurchases");
    struct
    {
        struct APlayerController* PlayerController;
        struct UInAppPurchaseCallbackProxy2* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseQueryOwned");
    struct
    {
        struct APlayerController* PlayerController;
        struct UInAppPurchaseCallbackProxy2* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchase");
    struct
    {
        struct APlayerController* PlayerController;
        struct FInAppPurchaseProductRequest2 ProductRequest;
        struct UInAppPurchaseCallbackProxy2* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.ProductRequest = (struct FInAppPurchaseProductRequest2)ProductRequest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UInAppPurchaseQueryCallbackProxy
struct UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, const struct TArray<struct FString>& ProductIdentifiers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseQueryCallbackProxy", "CreateProxyObjectForInAppPurchaseQuery");
    struct
    {
        struct APlayerController* PlayerController;
        struct TArray<struct FString> ProductIdentifiers;
        struct UInAppPurchaseQueryCallbackProxy* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.ProductIdentifiers = (struct TArray<struct FString>)ProductIdentifiers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UInAppPurchaseQueryCallbackProxy2
struct UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, const struct TArray<struct FString>& ProductIdentifiers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseQueryCallbackProxy2", "CreateProxyObjectForInAppPurchaseQuery");
    struct
    {
        struct APlayerController* PlayerController;
        struct TArray<struct FString> ProductIdentifiers;
        struct UInAppPurchaseQueryCallbackProxy2* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.ProductIdentifiers = (struct TArray<struct FString>)ProductIdentifiers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UInAppPurchaseRestoreCallbackProxy
struct UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(const struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseRestoreCallbackProxy", "CreateProxyObjectForInAppPurchaseRestore");
    struct
    {
        struct TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags;
        struct APlayerController* PlayerController;
        struct UInAppPurchaseRestoreCallbackProxy* ReturnValue;
    } Parms{};
    Parms.ConsumableProductFlags = (struct TArray<struct FInAppPurchaseProductRequest>)ConsumableProductFlags;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UInAppPurchaseRestoreCallbackProxy2
struct UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(const struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("InAppPurchaseRestoreCallbackProxy2", "CreateProxyObjectForInAppPurchaseRestore");
    struct
    {
        struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;
        struct APlayerController* PlayerController;
        struct UInAppPurchaseRestoreCallbackProxy2* ReturnValue;
    } Parms{};
    Parms.ConsumableProductFlags = (struct TArray<struct FInAppPurchaseProductRequest2>)ConsumableProductFlags;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UJoinSessionCallbackProxy
struct UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("JoinSessionCallbackProxy", "JoinSession");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FBlueprintSessionResult SearchResult;
        struct UJoinSessionCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.SearchResult = (struct FBlueprintSessionResult)SearchResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULeaderboardBlueprintLibrary
bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LeaderboardBlueprintLibrary", "WriteLeaderboardInteger");
    struct
    {
        struct APlayerController* PlayerController;
        struct FName StatName;
        int32_t StatValue;
        bool ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.StatName = (struct FName)StatName;
    Parms.StatValue = (int32_t)StatValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULeaderboardFlushCallbackProxy
struct ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LeaderboardFlushCallbackProxy", "CreateProxyObjectForFlush");
    struct
    {
        struct APlayerController* PlayerController;
        struct FName SessionName;
        struct ULeaderboardFlushCallbackProxy* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.SessionName = (struct FName)SessionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULeaderboardQueryCallbackProxy
struct ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LeaderboardQueryCallbackProxy", "CreateProxyObjectForIntQuery");
    struct
    {
        struct APlayerController* PlayerController;
        struct FName StatName;
        struct ULeaderboardQueryCallbackProxy* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.StatName = (struct FName)StatName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULogoutCallbackProxy
struct ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogoutCallbackProxy", "Logout");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct ULogoutCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AOnlineBeaconClient
void AOnlineBeaconClient::ClientOnConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OnlineBeaconClient", "ClientOnConnected");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// APartyBeaconClient
void APartyBeaconClient::ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ServerUpdateReservationRequest");
    struct
    {
        struct FString SessionId;
        struct FPartyReservation ReservationUpdate;
    } Parms{};
    Parms.SessionId = (struct FString)SessionId;
    Parms.ReservationUpdate = (struct FPartyReservation)ReservationUpdate;
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ServerReservationRequest");
    struct
    {
        struct FString SessionId;
        struct FPartyReservation Reservation;
    } Parms{};
    Parms.SessionId = (struct FString)SessionId;
    Parms.Reservation = (struct FPartyReservation)Reservation;
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ServerRemoveMemberFromReservationRequest");
    struct
    {
        struct FString SessionId;
        struct FPartyReservation ReservationUpdate;
    } Parms{};
    Parms.SessionId = (struct FString)SessionId;
    Parms.ReservationUpdate = (struct FPartyReservation)ReservationUpdate;
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ServerCancelReservationRequest");
    struct
    {
        struct FUniqueNetIdRepl PartyLeader;
    } Parms{};
    Parms.PartyLeader = (struct FUniqueNetIdRepl)PartyLeader;
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ClientSendReservationUpdates");
    struct
    {
        int32_t NumRemainingReservations;
    } Parms{};
    Parms.NumRemainingReservations = (int32_t)NumRemainingReservations;
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ClientSendReservationFull()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ClientSendReservationFull");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ClientReservationResponse(uint8_t ReservationResponse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ClientReservationResponse");
    struct
    {
        uint8_t ReservationResponse;
    } Parms{};
    Parms.ReservationResponse = (uint8_t)ReservationResponse;
    this->ProcessEvent(Func, &Parms);
}

void APartyBeaconClient::ClientCancelReservationResponse(uint8_t ReservationResponse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PartyBeaconClient", "ClientCancelReservationResponse");
    struct
    {
        uint8_t ReservationResponse;
    } Parms{};
    Parms.ReservationResponse = (uint8_t)ReservationResponse;
    this->ProcessEvent(Func, &Parms);
}

// UQuitMatchCallbackProxy
struct UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, uint8_t Outcome, int32_t TurnTimeoutInSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QuitMatchCallbackProxy", "QuitMatch");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FString MatchID;
        uint8_t Outcome;
        int32_t TurnTimeoutInSeconds;
        struct UQuitMatchCallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchID = (struct FString)MatchID;
    Parms.Outcome = (uint8_t)Outcome;
    Parms.TurnTimeoutInSeconds = (int32_t)TurnTimeoutInSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UShowLoginUICallbackProxy
struct UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ShowLoginUICallbackProxy", "ShowExternalLoginUI");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* InPlayerController;
        struct UShowLoginUICallbackProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InPlayerController = (struct APlayerController*)InPlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ASpectatorBeaconClient
void ASpectatorBeaconClient::ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpectatorBeaconClient", "ServerReservationRequest");
    struct
    {
        struct FString SessionId;
        struct FSpectatorReservation Reservation;
    } Parms{};
    Parms.SessionId = (struct FString)SessionId;
    Parms.Reservation = (struct FSpectatorReservation)Reservation;
    this->ProcessEvent(Func, &Parms);
}

void ASpectatorBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpectatorBeaconClient", "ServerCancelReservationRequest");
    struct
    {
        struct FUniqueNetIdRepl Spectator;
    } Parms{};
    Parms.Spectator = (struct FUniqueNetIdRepl)Spectator;
    this->ProcessEvent(Func, &Parms);
}

void ASpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpectatorBeaconClient", "ClientSendReservationUpdates");
    struct
    {
        int32_t NumRemainingReservations;
    } Parms{};
    Parms.NumRemainingReservations = (int32_t)NumRemainingReservations;
    this->ProcessEvent(Func, &Parms);
}

void ASpectatorBeaconClient::ClientSendReservationFull()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpectatorBeaconClient", "ClientSendReservationFull");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpectatorBeaconClient::ClientReservationResponse(uint8_t ReservationResponse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpectatorBeaconClient", "ClientReservationResponse");
    struct
    {
        uint8_t ReservationResponse;
    } Parms{};
    Parms.ReservationResponse = (uint8_t)ReservationResponse;
    this->ProcessEvent(Func, &Parms);
}

void ASpectatorBeaconClient::ClientCancelReservationResponse(uint8_t ReservationResponse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpectatorBeaconClient", "ClientCancelReservationResponse");
    struct
    {
        uint8_t ReservationResponse;
    } Parms{};
    Parms.ReservationResponse = (uint8_t)ReservationResponse;
    this->ProcessEvent(Func, &Parms);
}

// ATestBeaconClient
void ATestBeaconClient::ServerPong()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestBeaconClient", "ServerPong");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATestBeaconClient::ClientPing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestBeaconClient", "ClientPing");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UTurnBasedBlueprintLibrary
void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TurnBasedBlueprintLibrary", "RegisterTurnBasedMatchInterfaceObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct UObject* Object;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.Object = (struct UObject*)Object;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TurnBasedBlueprintLibrary", "GetPlayerDisplayName");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FString MatchID;
        int32_t PlayerIndex;
        struct FString PlayerDisplayName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchID = (struct FString)MatchID;
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlayerDisplayName = Parms.PlayerDisplayName;
}

void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TurnBasedBlueprintLibrary", "GetMyPlayerIndex");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FString MatchID;
        int32_t PlayerIndex;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchID = (struct FString)MatchID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlayerIndex = Parms.PlayerIndex;
}

void UTurnBasedBlueprintLibrary::GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TurnBasedBlueprintLibrary", "GetIsMyTurn");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* PlayerController;
        struct FString MatchID;
        bool bIsMyTurn;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.MatchID = (struct FString)MatchID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bIsMyTurn = Parms.bIsMyTurn;
}

// UVoipListenerSynthComponent
bool UVoipListenerSynthComponent::IsIdling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VoipListenerSynthComponent", "IsIdling");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
