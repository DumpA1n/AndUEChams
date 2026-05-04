#include "BP_DFMGameInstance.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBP_DFMGameInstance_C::* ----
void UBP_DFMGameInstance_C::Show_Network_Error(ENetworkFailure Type, uint8_t IsServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "Show Network Error");
    struct
    {
        enum ENetworkFailure Type;
        uint8_t IsServer;
    } Parms{};
    Parms.Type = (enum ENetworkFailure)Type;
    Parms.IsServer = (uint8_t)IsServer;
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::EncodePlayerBasicInfoList(struct TArray<struct FString>& PlayerIds, struct FString& Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "EncodePlayerBasicInfoList");
    struct
    {
        struct TArray<struct FString> PlayerIds;
        struct FString Buffer;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PlayerIds = Parms.PlayerIds;
    Buffer = Parms.Buffer;
}

void UBP_DFMGameInstance_C::Join_Local_DS_Internal(struct FString DSAddr, struct FString PlayerId, int32_t ModularWeapon, struct FString Cookie, struct FString MapID, int32_t SpotGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "Join Local DS Internal");
    struct
    {
        struct FString DSAddr;
        struct FString PlayerId;
        int32_t ModularWeapon;
        struct FString Cookie;
        struct FString MapID;
        int32_t SpotGroup;
    } Parms{};
    Parms.DSAddr = (struct FString)DSAddr;
    Parms.PlayerId = (struct FString)PlayerId;
    Parms.ModularWeapon = (int32_t)ModularWeapon;
    Parms.Cookie = (struct FString)Cookie;
    Parms.MapID = (struct FString)MapID;
    Parms.SpotGroup = (int32_t)SpotGroup;
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::Start_Local_DS_Internal(struct FString MapName, int32_t RoomId, int32_t Port, int32_t DSAPort, int32_t InPort, struct FString DSAIP, struct TArray<struct FString>& PlayerIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "Start Local DS Internal");
    struct
    {
        struct FString MapName;
        int32_t RoomId;
        int32_t Port;
        int32_t DSAPort;
        int32_t InPort;
        struct FString DSAIP;
        struct TArray<struct FString> PlayerIds;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    Parms.RoomId = (int32_t)RoomId;
    Parms.Port = (int32_t)Port;
    Parms.DSAPort = (int32_t)DSAPort;
    Parms.InPort = (int32_t)InPort;
    Parms.DSAIP = (struct FString)DSAIP;
    this->ProcessEvent(Func, &Parms);
    PlayerIds = Parms.PlayerIds;
}

void UBP_DFMGameInstance_C::Show_Local_DSPanel_Internal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "Show Local DSPanel Internal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::OnExecJoinLocalDS(struct FString DSAddr, struct FString PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "OnExecJoinLocalDS");
    struct
    {
        struct FString DSAddr;
        struct FString PlayerId;
    } Parms{};
    Parms.DSAddr = (struct FString)DSAddr;
    Parms.PlayerId = (struct FString)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::OnExecShowLocalDSPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "OnExecShowLocalDSPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::OnExecStartLocalDS(struct FString MapName, const struct TArray<struct FString>& PlayerIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "OnExecStartLocalDS");
    struct
    {
        struct FString MapName;
        struct TArray<struct FString> PlayerIds;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    Parms.PlayerIds = (struct TArray<struct FString>)PlayerIds;
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::OnStartGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "OnStartGameInstance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::HandleNetworkError(ENetworkFailure FailureType, uint8_t bIsServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "HandleNetworkError");
    struct
    {
        enum ENetworkFailure FailureType;
        uint8_t bIsServer;
    } Parms{};
    Parms.FailureType = (enum ENetworkFailure)FailureType;
    Parms.bIsServer = (uint8_t)bIsServer;
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::ReciveFirstWorldBegunPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "ReciveFirstWorldBegunPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_DFMGameInstance_C::ExecuteUbergraph_BP_DFMGameInstance(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_DFMGameInstance_C", "ExecuteUbergraph_BP_DFMGameInstance");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
