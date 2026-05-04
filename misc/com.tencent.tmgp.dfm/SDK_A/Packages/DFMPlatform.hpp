#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMPlatform
// Enums: 9
// Structs: 7
// Classes: 12

struct FPlatformDataRow;
struct UDataTable;
struct FCommunicationPermissionResult;
struct FDFMPlatformAchievementDataRow;
struct FUserPrivilegeCacheData;
struct FPlatformMatchInfo;
struct FPlatformMemberInfo;
struct FDFMPlatformFriend;
struct FDFMPlatformProduct;
struct UDFMAchievementsManager;
struct UDFMInitialChunkManager;
struct UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions;
struct UDFMOnlineIdentityProxy_CheckUserPrivilege;
struct UDFMOnlineIdentityManager;
struct UDFMOnlineSessionManager;
struct UDFMPlatformActivityManager;
struct UDFMPlatformFriendManager;
struct UDFMPlatformStoreManager;
struct UDFMPlatformUtils;
struct UPlatformStoreGDK;
struct IPlatformStoreInterface;

// Object: Enum DFMPlatform.EDFMPlatformPremiumFeaturesType
enum class EDFMPlatformPremiumFeaturesType : uint8_t
{
	RealtimeMultiplay = 0,
	CrossPlatform = 1,
	EngineSpectating = 2,
	EDFMPlatformPremiumFeaturesType_MAX = 3
};

// Object: Enum DFMPlatform.EDFMPermissionType
enum class EDFMPermissionType : uint8_t
{
	CommunicateUsingText = 0,
	CommunicateUsingVoice = 1,
	CommunicateUsingTextAndVoice = 2,
	EDFMPermissionType_MAX = 3
};

// Object: Enum DFMPlatform.EDFMAnonymousUserType
enum class EDFMAnonymousUserType : uint8_t
{
	CrossNetworkUser = 0,
	CrossNetWorkFriend = 1,
	EDFMAnonymousUserType_MAX = 2
};

// Object: Enum DFMPlatform.EDFMUserPrivileges
enum class EDFMUserPrivileges : uint8_t
{
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateOnline = 2,
	CanUseUserGeneratedContent = 3,
	CanUserCrossPlay = 4,
	EDFMUserPrivileges_MAX = 5
};

// Object: Enum DFMPlatform.EDFMSessionTaskType
enum class EDFMSessionTaskType : uint8_t
{
	None = 0,
	CreateSession = 1,
	DestroySession = 2,
	JoinSession = 3,
	UpdateSession = 4,
	AcceptInvite = 5,
	EDFMSessionTaskType_MAX = 6
};

// Object: Enum DFMPlatform.EDFMSessionUpdateType
enum class EDFMSessionUpdateType : uint8_t
{
	Default = 0,
	Leader = 1,
	MaxMember = 2,
	None = 3,
	EDFMSessionUpdateType_MAX = 4
};

// Object: Enum DFMPlatform.EDFMOnlineMangerState
enum class EDFMOnlineMangerState : uint8_t
{
	Idle = 0,
	Destroy_DestroyingSession = 1,
	Create_DestroyingOldSession = 2,
	Create_CreatingNewSession = 3,
	Create_StartingSession = 4,
	Join_DestroyingOldSession = 5,
	Join_JoiningNewSession = 6,
	AcceptInvite_DestroyingOldSession = 7,
	AcceptInvite_JoiningNewSession = 8,
	EDFMOnlineMangerState_MAX = 9
};

// Object: Enum DFMPlatform.EDFMSessionRestriction
enum class EDFMSessionRestriction : uint8_t
{
	Public = 0,
	InviteOnly = 1,
	FriendsOnly = 2,
	Private = 3,
	EDFMSessionRestriction_MAX = 4
};

// Object: Enum DFMPlatform.EPS5ActivityMatchState
enum class EPS5ActivityMatchState : uint8_t
{
	NoMatch = 0,
	InProgcess = 1,
	MatchEnd = 2,
	EPS5ActivityMatchState_MAX = 3
};

// Object: ScriptStruct DFMPlatform.CommunicationPermissionResult
// Size: 0x18 (Inherited: 0x0)
struct FCommunicationPermissionResult
{
	struct FString UserIdStr; // 0x0(0x10)
	uint8_t bCommunicationPermissionsAllowed : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct DFMPlatform.DFMPlatformAchievementDataRow
// Size: 0x38 (Inherited: 0x8)
struct FDFMPlatformAchievementDataRow : FTableRowBase
{
	struct FName Name; // 0x8(0x8)
	int64_t ID; // 0x10(0x8)
	uint8_t IsProgressive : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t IsHidden : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct FText Description; // 0x20(0x18)
};

// Object: ScriptStruct DFMPlatform.UserPrivilegeCacheData
// Size: 0x2 (Inherited: 0x0)
struct FUserPrivilegeCacheData
{
	uint8_t bIsCached : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bHasPrivilege : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct DFMPlatform.PlatformMatchInfo
// Size: 0x18 (Inherited: 0x0)
struct FPlatformMatchInfo
{
	struct TArray<struct FPlatformMemberInfo> Members; // 0x0(0x10)
	uint32_t ModeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMPlatform.PlatformMemberInfo
// Size: 0x30 (Inherited: 0x0)
struct FPlatformMemberInfo
{
	uint64_t PlayerId; // 0x0(0x8)
	uint32_t TeamID; // 0x8(0x4)
	uint8_t bIsPS5Player : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FString PlatformId; // 0x10(0x10)
	struct FString PlayerName; // 0x20(0x10)
};

// Object: ScriptStruct DFMPlatform.DFMPlatformFriend
// Size: 0x28 (Inherited: 0x0)
struct FDFMPlatformFriend
{
	struct FString PlatformId; // 0x0(0x10)
	struct FString PlatformName; // 0x10(0x10)
	uint8_t bIsOnline : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DFMPlatform.DFMPlatformProduct
// Size: 0x70 (Inherited: 0x0)
struct FDFMPlatformProduct
{
	struct FString StoreId; // 0x0(0x10)
	struct FString ProductID; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString CurrencyCode; // 0x30(0x10)
	struct FText DisplayPriceText; // 0x40(0x18)
	struct FText DisplayRegularPriceText; // 0x58(0x18)
};

// Object: Class DFMPlatform.DFMAchievementsManager
// Size: 0x50 (Inherited: 0x30)
struct UDFMAchievementsManager : UGameInstanceSubsystem
{
	struct UDataTable* AchievementsDataTable; // 0x30(0x8)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)


	// Object: Function DFMPlatform.DFMAchievementsManager.QueryAchievements
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13988cf4
	// Params: [ Num(0) Size(0x0) ]
	void QueryAchievements();

	// Object: Function DFMPlatform.DFMAchievementsManager.OnLoginCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x13988ce0
	// Params: [ Num(0) Size(0x0) ]
	void OnLoginCompleted();

	// Object: Function DFMPlatform.DFMAchievementsManager.HasAchievementByConfigIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13988bf4
	// Params: [ Num(3) Size(0x9) ]
	uint8_t HasAchievementByConfigIndex(int32_t ConfigIndex, float Progress);

	// Object: Function DFMPlatform.DFMAchievementsManager.HasAchievement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13988b08
	// Params: [ Num(3) Size(0xD) ]
	uint8_t HasAchievement(int64_t AchievementId, float Progress);

	// Object: Function DFMPlatform.DFMAchievementsManager.GrantAchievementByConfigIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13988a28
	// Params: [ Num(2) Size(0x8) ]
	void GrantAchievementByConfigIndex(int32_t ConfigIndex, float Progress);

	// Object: Function DFMPlatform.DFMAchievementsManager.GrantAchievement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13988948
	// Params: [ Num(2) Size(0xC) ]
	void GrantAchievement(int64_t AchievementId, float Progress);

	// Object: Function DFMPlatform.DFMAchievementsManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfdba81c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMAchievementsManager* Get(struct UObject* WorldCntext);
	DEFINE_UE_CLASS_HELPERS(UDFMAchievementsManager, "DFMAchievementsManager")

};

// Object: Class DFMPlatform.DFMInitialChunkManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMInitialChunkManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnPlatformChunksDownloadCompleteDelegate; // 0x30(0x10)


	// Object: Function DFMPlatform.DFMInitialChunkManager.IsPlatformAllChunksDownloaded
	// Flags: [Final|Native|Public]
	// Offset: 0x139894f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlatformAllChunksDownloaded();

	// Object: Function DFMPlatform.DFMInitialChunkManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfdbaa0c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMInitialChunkManager* Get(struct UObject* WorldCntext);
	DEFINE_UE_CLASS_HELPERS(UDFMInitialChunkManager, "DFMInitialChunkManager")

};

// Object: Class DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions
// Size: 0x88 (Inherited: 0x28)
struct UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions : UObject
{
	struct FDelegate OnGetCommunicationPermissionsToUserCompleteDelegate; // 0x28(0x10)
	struct UDFMOnlineIdentityManager* IdentityMgr; // 0x38(0x8)
	uint8_t Pad_0x40[0x48]; // 0x40(0x48)


	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.SetCheckUsers
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13989fd8
	// Params: [ Num(1) Size(0x10) ]
	void SetCheckUsers(const struct TArray<struct FString>& InTargetUserIDs);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.OnGetPlatformBlockedPlayerIdListComplete
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13989ed8
	// Params: [ Num(2) Size(0x18) ]
	void OnGetPlatformBlockedPlayerIdListComplete(uint8_t bWasSuccessful, const struct TArray<struct FString>& PlatformBlockedPlayerIdList);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.CreateInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13989e34
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions* CreateInstance(struct UDFMOnlineIdentityManager* InIdentityMgr);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.CheckUsersVoiceCommunicationPermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13989d88
	// Params: [ Num(1) Size(0x1) ]
	void CheckUsersVoiceCommunicationPermissions(uint8_t bForceCheck);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.CheckUsersTextCommunicationPermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13989cdc
	// Params: [ Num(1) Size(0x1) ]
	void CheckUsersTextCommunicationPermissions(uint8_t bForceCheck);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.CheckUsersPermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13989bf4
	// Params: [ Num(2) Size(0x2) ]
	void CheckUsersPermissions(EDFMPermissionType PermissionType, uint8_t bForceCheck);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions.CheckUsersCommunicationPermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13989b48
	// Params: [ Num(1) Size(0x1) ]
	void CheckUsersCommunicationPermissions(uint8_t bForceCheck);
	DEFINE_UE_CLASS_HELPERS(UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions, "DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions")

};

// Object: Class DFMPlatform.DFMOnlineIdentityProxy_CheckUserPrivilege
// Size: 0x68 (Inherited: 0x28)
struct UDFMOnlineIdentityProxy_CheckUserPrivilege : UObject
{
	struct FMulticastInlineDelegate OnGetUserPrivilegeCompleteDelegate; // 0x28(0x10)
	struct FDelegate OnGetCommunicationPermissionsToAnonymousUserCompleteDelegate; // 0x38(0x10)
	struct UDFMOnlineIdentityManager* IdentityMgr; // 0x48(0x8)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)


	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUserPrivilege.CreateInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398a264
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMOnlineIdentityProxy_CheckUserPrivilege* CreateInstance(struct UDFMOnlineIdentityManager* InIdentityMgr);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUserPrivilege.CheckUserPrivilege
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398a17c
	// Params: [ Num(2) Size(0x2) ]
	void CheckUserPrivilege(EDFMUserPrivileges UserPrivilege, uint8_t bShowPlatformUIToResolvePrivilege);

	// Object: Function DFMPlatform.DFMOnlineIdentityProxy_CheckUserPrivilege.CheckAnonymousUserCommunicationPermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398a0d8
	// Params: [ Num(1) Size(0x1) ]
	void CheckAnonymousUserCommunicationPermissions(EDFMAnonymousUserType UserType);
	DEFINE_UE_CLASS_HELPERS(UDFMOnlineIdentityProxy_CheckUserPrivilege, "DFMOnlineIdentityProxy_CheckUserPrivilege")

};

// Object: Class DFMPlatform.DFMOnlineIdentityManager
// Size: 0x240 (Inherited: 0x30)
struct UDFMOnlineIdentityManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnPlatformPrivilegesResetDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPlatformUserToUserPermissionCacheResetDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPlatformSystemUIOverlayStateChangedDelegate; // 0x50(0x10)
	struct FMulticastInlineDelegate OnPS5OnlineIdCacheUpdateDelegate; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPS5OnlineIdCacheUpdateWithOnlineId; // 0x70(0x10)
	uint8_t Pad_0x80[0x1C0]; // 0x80(0x1C0)


	// Object: Function DFMPlatform.DFMOnlineIdentityManager.UpdateOnlineIdsBygOpenIds
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1398a798
	// Params: [ Num(1) Size(0x10) ]
	void UpdateOnlineIdsBygOpenIds(struct TArray<uint64_t>& OpenIds);

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.SetUsingPlatformPremiumFeatures
	// Flags: [Final|Native|Public]
	// Offset: 0x1398a6b0
	// Params: [ Num(2) Size(0x2) ]
	void SetUsingPlatformPremiumFeatures(EDFMPlatformPremiumFeaturesType FeaturesType, uint8_t bUsing);

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.ManualClearPrivilegeCache
	// Flags: [Final|Native|Public]
	// Offset: 0x1398a69c
	// Params: [ Num(0) Size(0x0) ]
	void ManualClearPrivilegeCache();

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.ManualClearCommunicationsPermissionCache
	// Flags: [Final|Native|Public]
	// Offset: 0x1398a688
	// Params: [ Num(0) Size(0x0) ]
	void ManualClearCommunicationsPermissionCache();

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.ManualClearAllCache
	// Flags: [Final|Native|Public]
	// Offset: 0x1398a674
	// Params: [ Num(0) Size(0x0) ]
	void ManualClearAllCache();

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.GetPlayerPlatformIdByOpenId
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1398a594
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetPlayerPlatformIdByOpenId(uint64_t OpenId);

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.GetPlayerNickname
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1398a4b4
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetPlayerNickname(int32_t ControllerIndex);

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.GetPlayerLoginState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1398a3d4
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetPlayerLoginState(int32_t ControllerIndex);

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10787fb0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMOnlineIdentityManager* Get(struct UObject* WorldCntext);

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.BeginUpdatePendingOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0x1398a3c0
	// Params: [ Num(0) Size(0x0) ]
	void BeginUpdatePendingOpenId();

	// Object: Function DFMPlatform.DFMOnlineIdentityManager.AddPendingUpdateOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0x1398a31c
	// Params: [ Num(1) Size(0x8) ]
	void AddPendingUpdateOpenId(uint64_t OpenId);
	DEFINE_UE_CLASS_HELPERS(UDFMOnlineIdentityManager, "DFMOnlineIdentityManager")

};

// Object: Class DFMPlatform.DFMOnlineSessionManager
// Size: 0x750 (Inherited: 0x30)
struct UDFMOnlineSessionManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnCreateTeamSessionCompleteDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate OnCreateRoomSessionCompleteDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnDestroyTeamSessionCompleteDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDestroyRoomSessionCompleteDelegate; // 0x68(0x10)
	struct FMulticastInlineDelegate OnJoinTeamSessionCompleteDelegate; // 0x78(0x10)
	struct FMulticastInlineDelegate OnJoinRoomSessionCompleteDelegate; // 0x88(0x10)
	struct FMulticastInlineDelegate OnUpdateTeamSessionCompleteDelegate; // 0x98(0x10)
	struct FMulticastInlineDelegate OnUpdateRoomSessionCompleteDelegate; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnSessionMemberChangedCompleteDelegate; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnSessionLeaderChangedCompleteDelegate; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnAcceptInvitationFromTeamSessionCompleteDelegate; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnAcceptInvitationFromRoomSessionCompleteDelegate; // 0xE8(0x10)
	struct FMulticastInlineDelegate OnAcceptInvitationSessionCompleteDelegate; // 0xF8(0x10)
	uint8_t Pad_0x108[0x648]; // 0x108(0x648)


	// Object: Function DFMPlatform.DFMOnlineSessionManager.UpdateTeamSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398cad4
	// Params: [ Num(6) Size(0x2A) ]
	uint8_t UpdateTeamSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString TeamID, struct FString CustomInfoString, EDFMSessionUpdateType UpdateType);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.UpdateRoomSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c960
	// Params: [ Num(5) Size(0x29) ]
	uint8_t UpdateRoomSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString RoomId, struct FString CustomInfoString);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.SendTeamSessionInviteToUser
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c8a8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SendTeamSessionInviteToUser(struct FString UserIdStr);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.RemoveTeamSessionAccess
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c7f0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t RemoveTeamSessionAccess(struct FString UserIdStr);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.OnPlatformPrivilegesCheckCompleted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c7d4
	// Params: [ Num(0) Size(0x0) ]
	void OnPlatformPrivilegesCheckCompleted();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.JoinTeamSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c660
	// Params: [ Num(5) Size(0x29) ]
	uint8_t JoinTeamSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString TeamID, struct FString CustomInfoString);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.JoinRoomSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c4ec
	// Params: [ Num(5) Size(0x29) ]
	uint8_t JoinRoomSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString RoomId, struct FString CustomInfoString);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.IsTeamSessionLeader
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1398c4b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTeamSessionLeader();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.IsTeamSessionIdle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1398c47c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTeamSessionIdle();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.IsTeamSessionCreating
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c444
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTeamSessionCreating();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.IsInTeamSession
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1398c40c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInTeamSession();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.GetSessionID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1398c374
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSessionID();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.GetOnlineManagerState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1398c358
	// Params: [ Num(1) Size(0x1) ]
	EDFMOnlineMangerState GetOnlineManagerState();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xff1f51c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMOnlineSessionManager* Get(struct UObject* WorldCntext);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.EncodeBinaryToString
	// Flags: [Final|Native|Static|Private|HasOutParms]
	// Offset: 0x1398c268
	// Params: [ Num(2) Size(0x20) ]
	static struct FString EncodeBinaryToString(const struct TArray<uint8_t>& BinaryData);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.DestroyTeamSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c230
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DestroyTeamSession();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.DestroyRoomSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398c1f8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DestroyRoomSession();

	// Object: Function DFMPlatform.DFMOnlineSessionManager.DecompressCustomInfoBinaryToBytes
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x1398c118
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<uint8_t> DecompressCustomInfoBinaryToBytes(struct FString CompressedCustomInfoString);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.DecodeStringToBinary
	// Flags: [Final|Native|Static|Private|HasOutParms]
	// Offset: 0x1398bfd8
	// Params: [ Num(4) Size(0x25) ]
	static uint8_t DecodeStringToBinary(struct FString EncodedString, struct TArray<uint8_t>& OutBinaryData, int32_t ExpectedSize);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.CreateTeamSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398be64
	// Params: [ Num(5) Size(0x29) ]
	uint8_t CreateTeamSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString TeamID, struct FString CustomInfoString);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.CreateRoomSession
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398bcf0
	// Params: [ Num(5) Size(0x29) ]
	uint8_t CreateRoomSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString RoomId, struct FString CustomInfoString);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.CompressCustomInfoBinary
	// Flags: [Final|Native|Static|Private|HasOutParms]
	// Offset: 0x1398bc00
	// Params: [ Num(2) Size(0x20) ]
	static struct FString CompressCustomInfoBinary(const struct TArray<uint8_t>& BinaryData);

	// Object: Function DFMPlatform.DFMOnlineSessionManager.AddTeamSessionAccess
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398bb48
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AddTeamSessionAccess(struct FString UserIdStr);
	DEFINE_UE_CLASS_HELPERS(UDFMOnlineSessionManager, "DFMOnlineSessionManager")

};

// Object: Class DFMPlatform.DFMPlatformActivityManager
// Size: 0x188 (Inherited: 0x30)
struct UDFMPlatformActivityManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate GetMatchIDDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate SetMatchIDDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate LeaveMatchDelegate; // 0x50(0x10)
	uint8_t Pad_0x60[0x4]; // 0x60(0x4)
	EPS5ActivityMatchState ActivityMatchState; // 0x64(0x1)
	uint8_t bNeedSyncActivities : 1; // 0x65(0x1), Mask(0x1)
	uint8_t BitPad_0x65_1 : 7; // 0x65(0x1)
	uint8_t Pad_0x66[0x122]; // 0x66(0x122)


	// Object: Function DFMPlatform.DFMPlatformActivityManager.UpdateMatchState
	// Flags: [Final|Native|Public]
	// Offset: 0x1398da34
	// Params: [ Num(1) Size(0x18) ]
	void UpdateMatchState(struct FPlatformMatchInfo MatchInfo);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.StartMatchUpdateTimer
	// Flags: [Final|Native|Public]
	// Offset: 0x1398da20
	// Params: [ Num(0) Size(0x0) ]
	void StartMatchUpdateTimer();

	// Object: Function DFMPlatform.DFMPlatformActivityManager.StartActivity
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d974
	// Params: [ Num(1) Size(0x10) ]
	void StartActivity(struct FString ActivityId);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.SetMatchId
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d8c8
	// Params: [ Num(1) Size(0x10) ]
	void SetMatchId(struct FString MatchID);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.SetActivityMatchState
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d824
	// Params: [ Num(1) Size(0x4) ]
	void SetActivityMatchState(int32_t MatchState);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.SetActivityMatchResult
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d780
	// Params: [ Num(1) Size(0x4) ]
	void SetActivityMatchResult(int32_t MatchResult);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.ResumeActivity
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d604
	// Params: [ Num(3) Size(0x30) ]
	void ResumeActivity(struct FString ActivityId, struct TArray<struct FString> InProgressTasks, struct TArray<struct FString> CompletedTasks);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.HandlePlayerLeaveGameMatch
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d5f0
	// Params: [ Num(0) Size(0x0) ]
	void HandlePlayerLeaveGameMatch();

	// Object: Function DFMPlatform.DFMPlatformActivityManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfdbabfc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMPlatformActivityManager* Get(struct UObject* WorldContext);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.DestroySessionForActivity
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d5dc
	// Params: [ Num(0) Size(0x0) ]
	void DestroySessionForActivity();

	// Object: Function DFMPlatform.DFMPlatformActivityManager.CreateSessionForActivity
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d5c8
	// Params: [ Num(0) Size(0x0) ]
	void CreateSessionForActivity();

	// Object: Function DFMPlatform.DFMPlatformActivityManager.CreateGameMatch
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d4a8
	// Params: [ Num(2) Size(0x28) ]
	void CreateGameMatch(struct FString ActivityId, struct FPlatformMatchInfo MatchInfo);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.CreateBattleFieldMatch
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d3cc
	// Params: [ Num(1) Size(0x18) ]
	void CreateBattleFieldMatch(struct FPlatformMatchInfo MatchInfo);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.CompleteActivity
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d320
	// Params: [ Num(1) Size(0x10) ]
	void CompleteActivity(struct FString ActivityId);

	// Object: Function DFMPlatform.DFMPlatformActivityManager.CancelActivity
	// Flags: [Final|Native|Public]
	// Offset: 0x1398d274
	// Params: [ Num(1) Size(0x10) ]
	void CancelActivity(struct FString ActivityId);
	DEFINE_UE_CLASS_HELPERS(UDFMPlatformActivityManager, "DFMPlatformActivityManager")

};

// Object: Class DFMPlatform.DFMPlatformFriendManager
// Size: 0xE0 (Inherited: 0x30)
struct UDFMPlatformFriendManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnReadPlatformFriendsCompleteDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate OnGetPlatformBlockedPlayerIdListCompleteDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnBlockedPlatformUserCompleteDelegate; // 0x50(0x10)
	struct FMulticastInlineDelegate OnUnblockedPlatformUserCompleteDelegate; // 0x60(0x10)
	uint8_t Pad_0x70[0x70]; // 0x70(0x70)


	// Object: Function DFMPlatform.DFMPlatformFriendManager.UpdatePlatformFriends
	// Flags: [Final|Native|Public]
	// Offset: 0x1398e800
	// Params: [ Num(0) Size(0x0) ]
	void UpdatePlatformFriends();

	// Object: Function DFMPlatform.DFMPlatformFriendManager.UnblockPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x1398e754
	// Params: [ Num(1) Size(0x10) ]
	void UnblockPlayer(struct FString UserIdStr);

	// Object: Function DFMPlatform.DFMPlatformFriendManager.ReadFriendsList
	// Flags: [Final|Native|Public]
	// Offset: 0x1398e740
	// Params: [ Num(0) Size(0x0) ]
	void ReadFriendsList();

	// Object: Function DFMPlatform.DFMPlatformFriendManager.QueryBlockedPlayersList
	// Flags: [Final|Native|Public]
	// Offset: 0x1398e648
	// Params: [ Num(1) Size(0x10) ]
	void QueryBlockedPlayersList(struct FMulticastInlineDelegate Delegate);

	// Object: Function DFMPlatform.DFMPlatformFriendManager.GetPlatformFriends
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1398e5d8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FDFMPlatformFriend> GetPlatformFriends();

	// Object: Function DFMPlatform.DFMPlatformFriendManager.GetPlatformBlockedPlayerIdList
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1398e568
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetPlatformBlockedPlayerIdList();

	// Object: Function DFMPlatform.DFMPlatformFriendManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10788130
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMPlatformFriendManager* Get(struct UObject* WorldContext);

	// Object: Function DFMPlatform.DFMPlatformFriendManager.BlockPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x1398e4bc
	// Params: [ Num(1) Size(0x10) ]
	void BlockPlayer(struct FString UserIdStr);

	// Object: Function DFMPlatform.DFMPlatformFriendManager.AddRecentPlayers
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1398e400
	// Params: [ Num(1) Size(0x10) ]
	void AddRecentPlayers(const struct TArray<struct FString>& InRecentPlayersIdStrList);
	DEFINE_UE_CLASS_HELPERS(UDFMPlatformFriendManager, "DFMPlatformFriendManager")

};

// Object: Class DFMPlatform.DFMPlatformStoreManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMPlatformStoreManager : UGameInstanceSubsystem
{
	struct TScriptInterface<IPlatformStoreInterface> PlatformStoreInterface; // 0x30(0x10)


	// Object: Function DFMPlatform.DFMPlatformStoreManager.QueryOffers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398f0b4
	// Params: [ Num(0) Size(0x0) ]
	void QueryOffers();

	// Object: Function DFMPlatform.DFMPlatformStoreManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398f010
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMPlatformStoreManager* Get(struct UObject* WorldContext);

	// Object: Function DFMPlatform.DFMPlatformStoreManager.CheckOut
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1398ef64
	// Params: [ Num(1) Size(0x10) ]
	void CheckOut(struct FString ProductID);
	DEFINE_UE_CLASS_HELPERS(UDFMPlatformStoreManager, "DFMPlatformStoreManager")

};

// Object: Class DFMPlatform.DFMPlatformUtils
// Size: 0x28 (Inherited: 0x28)
struct UDFMPlatformUtils : UBlueprintFunctionLibrary
{

	// Object: Function DFMPlatform.DFMPlatformUtils.ShowStoreEmptyNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398fb04
	// Params: [ Num(0) Size(0x0) ]
	static void ShowStoreEmptyNotify();

	// Object: Function DFMPlatform.DFMPlatformUtils.ShowPlatformProfileUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398fa54
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t ShowPlatformProfileUI(struct FString RequesteeId);

	// Object: Function DFMPlatform.DFMPlatformUtils.RevokePlatformStoreUIVisibilityReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398f9c0
	// Params: [ Num(1) Size(0x8) ]
	static void RevokePlatformStoreUIVisibilityReason(struct FName Reason);

	// Object: Function DFMPlatform.DFMPlatformUtils.ReqShowPlatformStoreUIWithReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398f8f0
	// Params: [ Num(2) Size(0xC) ]
	static void ReqShowPlatformStoreUIWithReason(struct FName Reason, int32_t Priority);

	// Object: Function DFMPlatform.DFMPlatformUtils.ReqHidePlatformStoreUIWithReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398f820
	// Params: [ Num(2) Size(0xC) ]
	static void ReqHidePlatformStoreUIWithReason(struct FName Reason, int32_t Priority);

	// Object: Function DFMPlatform.DFMPlatformUtils.IsPlatformStoreUIVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1398f7e8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsPlatformStoreUIVisible();

	// Object: Function DFMPlatform.DFMPlatformUtils.IsConsolePlatformID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1398f740
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsConsolePlatformID(int32_t PlatformId);

	// Object: Function DFMPlatform.DFMPlatformUtils.GetPlatformOnlineSubsystemName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1398f70c
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetPlatformOnlineSubsystemName();

	// Object: Function DFMPlatform.DFMPlatformUtils.GetPlatformIDType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1398f6d8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetPlatformIDType();

	// Object: Function DFMPlatform.DFMPlatformUtils.GetPlatformData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1398f55c
	// Params: [ Num(4) Size(0x62) ]
	static uint8_t GetPlatformData(int32_t PlatformId, struct FPlatformDataRow& PlatformData, uint8_t bUseDefaultIcon);
	DEFINE_UE_CLASS_HELPERS(UDFMPlatformUtils, "DFMPlatformUtils")

};

// Object: Class DFMPlatform.PlatformStoreGDK
// Size: 0x80 (Inherited: 0x28)
struct UPlatformStoreGDK : UObject
{
	uint8_t Pad_0x28[0x58]; // 0x28(0x58)
	DEFINE_UE_CLASS_HELPERS(UPlatformStoreGDK, "PlatformStoreGDK")

};

// Object: Class DFMPlatform.PlatformStoreInterface
// Size: 0x28 (Inherited: 0x28)
struct IPlatformStoreInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IPlatformStoreInterface, "PlatformStoreInterface")

};

} // namespace SDK
