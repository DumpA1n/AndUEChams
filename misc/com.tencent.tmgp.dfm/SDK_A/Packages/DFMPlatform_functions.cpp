#include "DFMPlatform.hpp"
#include "DFMGlobalDefines.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMAchievementsManager::* ----
void UDFMAchievementsManager::QueryAchievements()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAchievementsManager", "QueryAchievements");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAchievementsManager::OnLoginCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAchievementsManager", "OnLoginCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAchievementsManager::HasAchievementByConfigIndex(int32_t ConfigIndex, float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAchievementsManager", "HasAchievementByConfigIndex");
    struct
    {
        int32_t ConfigIndex;
        float Progress;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ConfigIndex = (int32_t)ConfigIndex;
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAchievementsManager::HasAchievement(int64_t AchievementId, float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAchievementsManager", "HasAchievement");
    struct
    {
        int64_t AchievementId;
        float Progress;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AchievementId = (int64_t)AchievementId;
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAchievementsManager::GrantAchievementByConfigIndex(int32_t ConfigIndex, float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAchievementsManager", "GrantAchievementByConfigIndex");
    struct
    {
        int32_t ConfigIndex;
        float Progress;
    } Parms{};
    Parms.ConfigIndex = (int32_t)ConfigIndex;
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAchievementsManager::GrantAchievement(int64_t AchievementId, float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAchievementsManager", "GrantAchievement");
    struct
    {
        int64_t AchievementId;
        float Progress;
    } Parms{};
    Parms.AchievementId = (int64_t)AchievementId;
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMAchievementsManager* UDFMAchievementsManager::Get(struct UObject* WorldCntext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAchievementsManager", "Get");
    struct
    {
        struct UObject* WorldCntext;
        struct UDFMAchievementsManager* ReturnValue;
    } Parms{};
    Parms.WorldCntext = (struct UObject*)WorldCntext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMInitialChunkManager::* ----
uint8_t UDFMInitialChunkManager::IsPlatformAllChunksDownloaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInitialChunkManager", "IsPlatformAllChunksDownloaded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMInitialChunkManager* UDFMInitialChunkManager::Get(struct UObject* WorldCntext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMInitialChunkManager", "Get");
    struct
    {
        struct UObject* WorldCntext;
        struct UDFMInitialChunkManager* ReturnValue;
    } Parms{};
    Parms.WorldCntext = (struct UObject*)WorldCntext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::* ----
void UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::SetCheckUsers(const struct TArray<struct FString>& InTargetUserIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "SetCheckUsers");
    struct
    {
        struct TArray<struct FString> InTargetUserIDs;
    } Parms{};
    Parms.InTargetUserIDs = (struct TArray<struct FString>)InTargetUserIDs;
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::OnGetPlatformBlockedPlayerIdListComplete(uint8_t bWasSuccessful, const struct TArray<struct FString>& PlatformBlockedPlayerIdList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "OnGetPlatformBlockedPlayerIdListComplete");
    struct
    {
        uint8_t bWasSuccessful;
        struct TArray<struct FString> PlatformBlockedPlayerIdList;
    } Parms{};
    Parms.bWasSuccessful = (uint8_t)bWasSuccessful;
    Parms.PlatformBlockedPlayerIdList = (struct TArray<struct FString>)PlatformBlockedPlayerIdList;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions* UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::CreateInstance(struct UDFMOnlineIdentityManager* InIdentityMgr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "CreateInstance");
    struct
    {
        struct UDFMOnlineIdentityManager* InIdentityMgr;
        struct UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions* ReturnValue;
    } Parms{};
    Parms.InIdentityMgr = (struct UDFMOnlineIdentityManager*)InIdentityMgr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::CheckUsersVoiceCommunicationPermissions(uint8_t bForceCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "CheckUsersVoiceCommunicationPermissions");
    struct
    {
        uint8_t bForceCheck;
    } Parms{};
    Parms.bForceCheck = (uint8_t)bForceCheck;
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::CheckUsersTextCommunicationPermissions(uint8_t bForceCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "CheckUsersTextCommunicationPermissions");
    struct
    {
        uint8_t bForceCheck;
    } Parms{};
    Parms.bForceCheck = (uint8_t)bForceCheck;
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::CheckUsersPermissions(EDFMPermissionType PermissionType, uint8_t bForceCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "CheckUsersPermissions");
    struct
    {
        enum EDFMPermissionType PermissionType;
        uint8_t bForceCheck;
    } Parms{};
    Parms.PermissionType = (enum EDFMPermissionType)PermissionType;
    Parms.bForceCheck = (uint8_t)bForceCheck;
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityProxy_CheckUsersCommunicationPermissions::CheckUsersCommunicationPermissions(uint8_t bForceCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUsersCommunicationPermissions", "CheckUsersCommunicationPermissions");
    struct
    {
        uint8_t bForceCheck;
    } Parms{};
    Parms.bForceCheck = (uint8_t)bForceCheck;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMOnlineIdentityProxy_CheckUserPrivilege::* ----
struct UDFMOnlineIdentityProxy_CheckUserPrivilege* UDFMOnlineIdentityProxy_CheckUserPrivilege::CreateInstance(struct UDFMOnlineIdentityManager* InIdentityMgr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineIdentityProxy_CheckUserPrivilege", "CreateInstance");
    struct
    {
        struct UDFMOnlineIdentityManager* InIdentityMgr;
        struct UDFMOnlineIdentityProxy_CheckUserPrivilege* ReturnValue;
    } Parms{};
    Parms.InIdentityMgr = (struct UDFMOnlineIdentityManager*)InIdentityMgr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMOnlineIdentityProxy_CheckUserPrivilege::CheckUserPrivilege(EDFMUserPrivileges UserPrivilege, uint8_t bShowPlatformUIToResolvePrivilege)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUserPrivilege", "CheckUserPrivilege");
    struct
    {
        enum EDFMUserPrivileges UserPrivilege;
        uint8_t bShowPlatformUIToResolvePrivilege;
    } Parms{};
    Parms.UserPrivilege = (enum EDFMUserPrivileges)UserPrivilege;
    Parms.bShowPlatformUIToResolvePrivilege = (uint8_t)bShowPlatformUIToResolvePrivilege;
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityProxy_CheckUserPrivilege::CheckAnonymousUserCommunicationPermissions(EDFMAnonymousUserType UserType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityProxy_CheckUserPrivilege", "CheckAnonymousUserCommunicationPermissions");
    struct
    {
        enum EDFMAnonymousUserType UserType;
    } Parms{};
    Parms.UserType = (enum EDFMAnonymousUserType)UserType;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMOnlineIdentityManager::* ----
void UDFMOnlineIdentityManager::UpdateOnlineIdsBygOpenIds(struct TArray<uint64_t>& OpenIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "UpdateOnlineIdsBygOpenIds");
    struct
    {
        struct TArray<uint64_t> OpenIds;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OpenIds = Parms.OpenIds;
}

void UDFMOnlineIdentityManager::SetUsingPlatformPremiumFeatures(EDFMPlatformPremiumFeaturesType FeaturesType, uint8_t bUsing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "SetUsingPlatformPremiumFeatures");
    struct
    {
        enum EDFMPlatformPremiumFeaturesType FeaturesType;
        uint8_t bUsing;
    } Parms{};
    Parms.FeaturesType = (enum EDFMPlatformPremiumFeaturesType)FeaturesType;
    Parms.bUsing = (uint8_t)bUsing;
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityManager::ManualClearPrivilegeCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "ManualClearPrivilegeCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityManager::ManualClearCommunicationsPermissionCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "ManualClearCommunicationsPermissionCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityManager::ManualClearAllCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "ManualClearAllCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMOnlineIdentityManager::GetPlayerPlatformIdByOpenId(uint64_t OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "GetPlayerPlatformIdByOpenId");
    struct
    {
        uint64_t OpenId;
        struct FString ReturnValue;
    } Parms{};
    Parms.OpenId = (uint64_t)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMOnlineIdentityManager::GetPlayerNickname(int32_t ControllerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "GetPlayerNickname");
    struct
    {
        int32_t ControllerIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.ControllerIndex = (int32_t)ControllerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMOnlineIdentityManager::GetPlayerLoginState(int32_t ControllerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "GetPlayerLoginState");
    struct
    {
        int32_t ControllerIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.ControllerIndex = (int32_t)ControllerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMOnlineIdentityManager* UDFMOnlineIdentityManager::Get(struct UObject* WorldCntext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineIdentityManager", "Get");
    struct
    {
        struct UObject* WorldCntext;
        struct UDFMOnlineIdentityManager* ReturnValue;
    } Parms{};
    Parms.WorldCntext = (struct UObject*)WorldCntext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMOnlineIdentityManager::BeginUpdatePendingOpenId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "BeginUpdatePendingOpenId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMOnlineIdentityManager::AddPendingUpdateOpenId(uint64_t OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineIdentityManager", "AddPendingUpdateOpenId");
    struct
    {
        uint64_t OpenId;
    } Parms{};
    Parms.OpenId = (uint64_t)OpenId;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMOnlineSessionManager::* ----
uint8_t UDFMOnlineSessionManager::UpdateTeamSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString TeamID, struct FString CustomInfoString, EDFMSessionUpdateType UpdateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "UpdateTeamSession");
    struct
    {
        enum EDFMSessionRestriction JoinRestriction;
        int32_t MaxPlayers;
        struct FString TeamID;
        struct FString CustomInfoString;
        enum EDFMSessionUpdateType UpdateType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JoinRestriction = (enum EDFMSessionRestriction)JoinRestriction;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.TeamID = (struct FString)TeamID;
    Parms.CustomInfoString = (struct FString)CustomInfoString;
    Parms.UpdateType = (enum EDFMSessionUpdateType)UpdateType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::UpdateRoomSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString RoomId, struct FString CustomInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "UpdateRoomSession");
    struct
    {
        enum EDFMSessionRestriction JoinRestriction;
        int32_t MaxPlayers;
        struct FString RoomId;
        struct FString CustomInfoString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JoinRestriction = (enum EDFMSessionRestriction)JoinRestriction;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.RoomId = (struct FString)RoomId;
    Parms.CustomInfoString = (struct FString)CustomInfoString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::SendTeamSessionInviteToUser(struct FString UserIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "SendTeamSessionInviteToUser");
    struct
    {
        struct FString UserIdStr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIdStr = (struct FString)UserIdStr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::RemoveTeamSessionAccess(struct FString UserIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "RemoveTeamSessionAccess");
    struct
    {
        struct FString UserIdStr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIdStr = (struct FString)UserIdStr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMOnlineSessionManager::OnPlatformPrivilegesCheckCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "OnPlatformPrivilegesCheckCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMOnlineSessionManager::JoinTeamSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString TeamID, struct FString CustomInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "JoinTeamSession");
    struct
    {
        enum EDFMSessionRestriction JoinRestriction;
        int32_t MaxPlayers;
        struct FString TeamID;
        struct FString CustomInfoString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JoinRestriction = (enum EDFMSessionRestriction)JoinRestriction;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.TeamID = (struct FString)TeamID;
    Parms.CustomInfoString = (struct FString)CustomInfoString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::JoinRoomSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString RoomId, struct FString CustomInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "JoinRoomSession");
    struct
    {
        enum EDFMSessionRestriction JoinRestriction;
        int32_t MaxPlayers;
        struct FString RoomId;
        struct FString CustomInfoString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JoinRestriction = (enum EDFMSessionRestriction)JoinRestriction;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.RoomId = (struct FString)RoomId;
    Parms.CustomInfoString = (struct FString)CustomInfoString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::IsTeamSessionLeader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "IsTeamSessionLeader");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::IsTeamSessionIdle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "IsTeamSessionIdle");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::IsTeamSessionCreating()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "IsTeamSessionCreating");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::IsInTeamSession()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "IsInTeamSession");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMOnlineSessionManager::GetSessionID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "GetSessionID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDFMOnlineMangerState UDFMOnlineSessionManager::GetOnlineManagerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "GetOnlineManagerState");
    struct
    {
        enum EDFMOnlineMangerState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMOnlineSessionManager* UDFMOnlineSessionManager::Get(struct UObject* WorldCntext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineSessionManager", "Get");
    struct
    {
        struct UObject* WorldCntext;
        struct UDFMOnlineSessionManager* ReturnValue;
    } Parms{};
    Parms.WorldCntext = (struct UObject*)WorldCntext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMOnlineSessionManager::EncodeBinaryToString(const struct TArray<uint8_t>& BinaryData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineSessionManager", "EncodeBinaryToString");
    struct
    {
        struct TArray<uint8_t> BinaryData;
        struct FString ReturnValue;
    } Parms{};
    Parms.BinaryData = (struct TArray<uint8_t>)BinaryData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::DestroyTeamSession()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "DestroyTeamSession");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::DestroyRoomSession()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "DestroyRoomSession");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint8_t> UDFMOnlineSessionManager::DecompressCustomInfoBinaryToBytes(struct FString CompressedCustomInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineSessionManager", "DecompressCustomInfoBinaryToBytes");
    struct
    {
        struct FString CompressedCustomInfoString;
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    Parms.CompressedCustomInfoString = (struct FString)CompressedCustomInfoString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::DecodeStringToBinary(struct FString EncodedString, struct TArray<uint8_t>& OutBinaryData, int32_t ExpectedSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineSessionManager", "DecodeStringToBinary");
    struct
    {
        struct FString EncodedString;
        struct TArray<uint8_t> OutBinaryData;
        int32_t ExpectedSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EncodedString = (struct FString)EncodedString;
    Parms.ExpectedSize = (int32_t)ExpectedSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutBinaryData = Parms.OutBinaryData;
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::CreateTeamSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString TeamID, struct FString CustomInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "CreateTeamSession");
    struct
    {
        enum EDFMSessionRestriction JoinRestriction;
        int32_t MaxPlayers;
        struct FString TeamID;
        struct FString CustomInfoString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JoinRestriction = (enum EDFMSessionRestriction)JoinRestriction;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.TeamID = (struct FString)TeamID;
    Parms.CustomInfoString = (struct FString)CustomInfoString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::CreateRoomSession(EDFMSessionRestriction JoinRestriction, int32_t MaxPlayers, struct FString RoomId, struct FString CustomInfoString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "CreateRoomSession");
    struct
    {
        enum EDFMSessionRestriction JoinRestriction;
        int32_t MaxPlayers;
        struct FString RoomId;
        struct FString CustomInfoString;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JoinRestriction = (enum EDFMSessionRestriction)JoinRestriction;
    Parms.MaxPlayers = (int32_t)MaxPlayers;
    Parms.RoomId = (struct FString)RoomId;
    Parms.CustomInfoString = (struct FString)CustomInfoString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMOnlineSessionManager::CompressCustomInfoBinary(const struct TArray<uint8_t>& BinaryData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMOnlineSessionManager", "CompressCustomInfoBinary");
    struct
    {
        struct TArray<uint8_t> BinaryData;
        struct FString ReturnValue;
    } Parms{};
    Parms.BinaryData = (struct TArray<uint8_t>)BinaryData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMOnlineSessionManager::AddTeamSessionAccess(struct FString UserIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMOnlineSessionManager", "AddTeamSessionAccess");
    struct
    {
        struct FString UserIdStr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIdStr = (struct FString)UserIdStr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMPlatformActivityManager::* ----
void UDFMPlatformActivityManager::UpdateMatchState(struct FPlatformMatchInfo MatchInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "UpdateMatchState");
    struct
    {
        struct FPlatformMatchInfo MatchInfo;
    } Parms{};
    Parms.MatchInfo = (struct FPlatformMatchInfo)MatchInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::StartMatchUpdateTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "StartMatchUpdateTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::StartActivity(struct FString ActivityId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "StartActivity");
    struct
    {
        struct FString ActivityId;
    } Parms{};
    Parms.ActivityId = (struct FString)ActivityId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::SetMatchId(struct FString MatchID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "SetMatchId");
    struct
    {
        struct FString MatchID;
    } Parms{};
    Parms.MatchID = (struct FString)MatchID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::SetActivityMatchState(int32_t MatchState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "SetActivityMatchState");
    struct
    {
        int32_t MatchState;
    } Parms{};
    Parms.MatchState = (int32_t)MatchState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::SetActivityMatchResult(int32_t MatchResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "SetActivityMatchResult");
    struct
    {
        int32_t MatchResult;
    } Parms{};
    Parms.MatchResult = (int32_t)MatchResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::ResumeActivity(struct FString ActivityId, struct TArray<struct FString> InProgressTasks, struct TArray<struct FString> CompletedTasks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "ResumeActivity");
    struct
    {
        struct FString ActivityId;
        struct TArray<struct FString> InProgressTasks;
        struct TArray<struct FString> CompletedTasks;
    } Parms{};
    Parms.ActivityId = (struct FString)ActivityId;
    Parms.InProgressTasks = (struct TArray<struct FString>)InProgressTasks;
    Parms.CompletedTasks = (struct TArray<struct FString>)CompletedTasks;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::HandlePlayerLeaveGameMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "HandlePlayerLeaveGameMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMPlatformActivityManager* UDFMPlatformActivityManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformActivityManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMPlatformActivityManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPlatformActivityManager::DestroySessionForActivity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "DestroySessionForActivity");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::CreateSessionForActivity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "CreateSessionForActivity");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::CreateGameMatch(struct FString ActivityId, struct FPlatformMatchInfo MatchInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "CreateGameMatch");
    struct
    {
        struct FString ActivityId;
        struct FPlatformMatchInfo MatchInfo;
    } Parms{};
    Parms.ActivityId = (struct FString)ActivityId;
    Parms.MatchInfo = (struct FPlatformMatchInfo)MatchInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::CreateBattleFieldMatch(struct FPlatformMatchInfo MatchInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "CreateBattleFieldMatch");
    struct
    {
        struct FPlatformMatchInfo MatchInfo;
    } Parms{};
    Parms.MatchInfo = (struct FPlatformMatchInfo)MatchInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::CompleteActivity(struct FString ActivityId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "CompleteActivity");
    struct
    {
        struct FString ActivityId;
    } Parms{};
    Parms.ActivityId = (struct FString)ActivityId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformActivityManager::CancelActivity(struct FString ActivityId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformActivityManager", "CancelActivity");
    struct
    {
        struct FString ActivityId;
    } Parms{};
    Parms.ActivityId = (struct FString)ActivityId;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMPlatformFriendManager::* ----
void UDFMPlatformFriendManager::UpdatePlatformFriends()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "UpdatePlatformFriends");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformFriendManager::UnblockPlayer(struct FString UserIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "UnblockPlayer");
    struct
    {
        struct FString UserIdStr;
    } Parms{};
    Parms.UserIdStr = (struct FString)UserIdStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformFriendManager::ReadFriendsList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "ReadFriendsList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformFriendManager::QueryBlockedPlayersList(struct FMulticastInlineDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "QueryBlockedPlayersList");
    struct
    {
        struct FMulticastInlineDelegate Delegate;
    } Parms{};
    Parms.Delegate = (struct FMulticastInlineDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FDFMPlatformFriend> UDFMPlatformFriendManager::GetPlatformFriends()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "GetPlatformFriends");
    struct
    {
        struct TArray<struct FDFMPlatformFriend> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UDFMPlatformFriendManager::GetPlatformBlockedPlayerIdList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "GetPlatformBlockedPlayerIdList");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMPlatformFriendManager* UDFMPlatformFriendManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformFriendManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMPlatformFriendManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPlatformFriendManager::BlockPlayer(struct FString UserIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "BlockPlayer");
    struct
    {
        struct FString UserIdStr;
    } Parms{};
    Parms.UserIdStr = (struct FString)UserIdStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlatformFriendManager::AddRecentPlayers(const struct TArray<struct FString>& InRecentPlayersIdStrList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformFriendManager", "AddRecentPlayers");
    struct
    {
        struct TArray<struct FString> InRecentPlayersIdStrList;
    } Parms{};
    Parms.InRecentPlayersIdStrList = (struct TArray<struct FString>)InRecentPlayersIdStrList;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMPlatformStoreManager::* ----
void UDFMPlatformStoreManager::QueryOffers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformStoreManager", "QueryOffers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMPlatformStoreManager* UDFMPlatformStoreManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformStoreManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMPlatformStoreManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPlatformStoreManager::CheckOut(struct FString ProductID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlatformStoreManager", "CheckOut");
    struct
    {
        struct FString ProductID;
    } Parms{};
    Parms.ProductID = (struct FString)ProductID;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMPlatformUtils::* ----
void UDFMPlatformUtils::ShowStoreEmptyNotify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "ShowStoreEmptyNotify");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPlatformUtils::ShowPlatformProfileUI(struct FString RequesteeId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "ShowPlatformProfileUI");
    struct
    {
        struct FString RequesteeId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RequesteeId = (struct FString)RequesteeId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPlatformUtils::RevokePlatformStoreUIVisibilityReason(struct FName Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "RevokePlatformStoreUIVisibilityReason");
    struct
    {
        struct FName Reason;
    } Parms{};
    Parms.Reason = (struct FName)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMPlatformUtils::ReqShowPlatformStoreUIWithReason(struct FName Reason, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "ReqShowPlatformStoreUIWithReason");
    struct
    {
        struct FName Reason;
        int32_t Priority;
    } Parms{};
    Parms.Reason = (struct FName)Reason;
    Parms.Priority = (int32_t)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMPlatformUtils::ReqHidePlatformStoreUIWithReason(struct FName Reason, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "ReqHidePlatformStoreUIWithReason");
    struct
    {
        struct FName Reason;
        int32_t Priority;
    } Parms{};
    Parms.Reason = (struct FName)Reason;
    Parms.Priority = (int32_t)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPlatformUtils::IsPlatformStoreUIVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "IsPlatformStoreUIVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMPlatformUtils::IsConsolePlatformID(int32_t PlatformId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "IsConsolePlatformID");
    struct
    {
        int32_t PlatformId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlatformId = (int32_t)PlatformId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UDFMPlatformUtils::GetPlatformOnlineSubsystemName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "GetPlatformOnlineSubsystemName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMPlatformUtils::GetPlatformIDType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "GetPlatformIDType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMPlatformUtils::GetPlatformData(int32_t PlatformId, struct FPlatformDataRow& PlatformData, uint8_t bUseDefaultIcon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlatformUtils", "GetPlatformData");
    struct
    {
        int32_t PlatformId;
        struct FPlatformDataRow PlatformData;
        uint8_t bUseDefaultIcon;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlatformId = (int32_t)PlatformId;
    Parms.bUseDefaultIcon = (uint8_t)bUseDefaultIcon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlatformData = Parms.PlatformData;
    return Parms.ReturnValue;
}

} // namespace SDK
