#include "DFMIrisSeamless.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMQuest.hpp"
#include "Engine.hpp"
#include "GPCutScene.hpp"
#include "GPGameFlow.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPQuest.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMFSM_IrisEnterGetOffHelicopterAction::* ----
void UDFMFSM_IrisEnterGetOffHelicopterAction::StartGetOnRope()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "StartGetOnRope");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOffHelicopterAction::OnStateEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "OnStateEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOffHelicopterAction::OnStateBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "OnStateBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOffHelicopterAction::OnStartGetOnRopeComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "OnStartGetOnRopeComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOffHelicopterAction::OnGetDownRopeComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "OnGetDownRopeComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOffHelicopterAction::OnDownAnimStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "OnDownAnimStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOffHelicopterAction::GetDownRope(struct USplineComponent* Spline)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOffHelicopterAction", "GetDownRope");
    struct
    {
        struct USplineComponent* Spline;
    } Parms{};
    Parms.Spline = (struct USplineComponent*)Spline;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_IrisEnterGetOnHelicopterAction::* ----
void UDFMFSM_IrisEnterGetOnHelicopterAction::OnStateUpdate(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOnHelicopterAction", "OnStateUpdate");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOnHelicopterAction::OnStateEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOnHelicopterAction", "OnStateEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterGetOnHelicopterAction::OnStateBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterGetOnHelicopterAction", "OnStateBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_IrisEnterInHelicopterAction::* ----
void UDFMFSM_IrisEnterInHelicopterAction::TransportHelicopterToFlyPoint(struct AActor* Helicopter, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "TransportHelicopterToFlyPoint");
    struct
    {
        struct AActor* Helicopter;
        struct FVector Location;
    } Parms{};
    Parms.Helicopter = (struct AActor*)Helicopter;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterInHelicopterAction::SetCanCharacterRotate(uint8_t canRotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "SetCanCharacterRotate");
    struct
    {
        uint8_t canRotate;
    } Parms{};
    Parms.canRotate = (uint8_t)canRotate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterInHelicopterAction::OnStreamingLoadingPercentage(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "OnStreamingLoadingPercentage");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterInHelicopterAction::OnStateUpdate(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "OnStateUpdate");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterInHelicopterAction::OnStateEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "OnStateEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterInHelicopterAction::OnStateBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "OnStateBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_IrisEnterInHelicopterAction::OnHelicopterTeleportComplete(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_IrisEnterInHelicopterAction", "OnHelicopterTeleportComplete");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterSeamlessGameplayHelper::* ----
uint8_t UDFMIrisEnterSeamlessGameplayHelper::SwitchClientPlayer(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SwitchClientPlayer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::StartPointRandomSeedNotify(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "StartPointRandomSeedNotify");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::StartMatchSucceed(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, struct FString map_name, uint8_t isInRoome, struct FPlayerFrontEndMatchInfo MatchInfo, int32_t RebornPlayerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "StartMatchSucceed");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        struct FString map_name;
        uint8_t isInRoome;
        struct FPlayerFrontEndMatchInfo MatchInfo;
        int32_t RebornPlayerType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    Parms.map_name = (struct FString)map_name;
    Parms.isInRoome = (uint8_t)isInRoome;
    Parms.MatchInfo = (struct FPlayerFrontEndMatchInfo)MatchInfo;
    Parms.RebornPlayerType = (int32_t)RebornPlayerType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::StartMatchCheck(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, struct FString map_name, uint8_t isInRoome)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "StartMatchCheck");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        struct FString map_name;
        uint8_t isInRoome;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    Parms.map_name = (struct FString)map_name;
    Parms.isInRoome = (uint8_t)isInRoome;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::StartLaunchLocalDS(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, uint64_t room_id, uint64_t map_id, struct FString map_name, uint32_t dsa_ip, uint32_t dsa_port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "StartLaunchLocalDS");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        uint64_t room_id;
        uint64_t map_id;
        struct FString map_name;
        uint32_t dsa_ip;
        uint32_t dsa_port;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    Parms.room_id = (uint64_t)room_id;
    Parms.map_id = (uint64_t)map_id;
    Parms.map_name = (struct FString)map_name;
    Parms.dsa_ip = (uint32_t)dsa_ip;
    Parms.dsa_port = (uint32_t)dsa_port;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::SetStarLinkIconEnable(struct UObject* WorldContextObject, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SetStarLinkIconEnable");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t Enable;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int64_t UDFMIrisEnterSeamlessGameplayHelper::SetRealWeatherId(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SetRealWeatherId");
    struct
    {
        struct UObject* WorldContextObject;
        int64_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::SetPlayerStartAllocatorInitParams(struct UObject* WorldContextObject, struct FStartSpotAllocatorInitParams InParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SetPlayerStartAllocatorInitParams");
    struct
    {
        struct UObject* WorldContextObject;
        struct FStartSpotAllocatorInitParams InParams;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InParams = (struct FStartSpotAllocatorInitParams)InParams;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::SetMatchCount(struct UObject* WorldContextObject, int32_t InCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SetMatchCount");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t InCount;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InCount = (int32_t)InCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::SetClientSeamlessTravelEnable(struct UObject* WorldContextObject, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SetClientSeamlessTravelEnable");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t Enable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::SetClientManualSwitchPlayerEnable(struct UObject* WorldContextObject, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SetClientManualSwitchPlayerEnable");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t Enable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::SendNotifySeamlessLoginReadyAfterLoading(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SendNotifySeamlessLoginReadyAfterLoading");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::SeamlessLog(struct FString Log)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "SeamlessLog");
    struct
    {
        struct FString Log;
    } Parms{};
    Parms.Log = (struct FString)Log;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::ResetSeamlessEnterSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ResetSeamlessEnterSystem");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::RealMatchSucceed(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "RealMatchSucceed");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::ReadyToConnectRemoteDS(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ReadyToConnectRemoteDS");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::ReadyToConnectDS(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ReadyToConnectDS");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::QuestActorAddSeamlessFlag(struct AActor* InActor, ESeamlessFlag InFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "QuestActorAddSeamlessFlag");
    struct
    {
        struct AActor* InActor;
        enum ESeamlessFlag InFlag;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InFlag = (enum ESeamlessFlag)InFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::ProcessMapGlitchEffect(struct UObject* WorldContext, int32_t CurrentEnterMapID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ProcessMapGlitchEffect");
    struct
    {
        struct UObject* WorldContext;
        int32_t CurrentEnterMapID;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.CurrentEnterMapID = (int32_t)CurrentEnterMapID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::ProcessMandelBrickEvent(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ProcessMandelBrickEvent");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::PrepareIntroEvent(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, struct TArray<struct FString> EventIds, int32_t EventCourseId, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "PrepareIntroEvent");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
        struct TArray<struct FString> EventIds;
        int32_t EventCourseId;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    Parms.EventIds = (struct TArray<struct FString>)EventIds;
    Parms.EventCourseId = (int32_t)EventCourseId;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::PreLoadSeamlessMapIcons(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "PreLoadSeamlessMapIcons");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::PreAllocAllPlayerStartSpot(struct UObject* WorldContextObject, struct TArray<struct FTeamMemberIdentity>& InTeamMemberIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "PreAllocAllPlayerStartSpot");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FTeamMemberIdentity> InTeamMemberIds;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InTeamMemberIds = Parms.InTeamMemberIds;
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::LoadMapDataTable(struct UObject* WorldContextObject, struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "LoadMapDataTable");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString MapName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.MapName = (struct FString)MapName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::LoadIntroEventCSLevel(struct UObject* WorldContextObject, struct FSoftObjectPath LevelPath, uint8_t bLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "LoadIntroEventCSLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FSoftObjectPath LevelPath;
        uint8_t bLoad;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelPath = (struct FSoftObjectPath)LevelPath;
    Parms.bLoad = (uint8_t)bLoad;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UDFMIrisEnterSeamlessGameplayHelper::GetTideEnterLocByPlayerStartPoint(struct UObject* WorldContextObject, struct AActor* DefaultLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetTideEnterLocByPlayerStartPoint");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* DefaultLoc;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.DefaultLoc = (struct AActor*)DefaultLoc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::GetSeamlessEnterEnable(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetSeamlessEnterEnable");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AEnterMovePath* UDFMIrisEnterSeamlessGameplayHelper::GetHelicopterMovePathByPlayerStartPoint(struct UObject* WorldContextObject, struct AEnterMovePath* DefaultPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetHelicopterMovePathByPlayerStartPoint");
    struct
    {
        struct UObject* WorldContextObject;
        struct AEnterMovePath* DefaultPath;
        struct AEnterMovePath* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.DefaultPath = (struct AEnterMovePath*)DefaultPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerController* UDFMIrisEnterSeamlessGameplayHelper::GetDSLocalPlayerControllerDuringSeamless(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetDSLocalPlayerControllerDuringSeamless");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSeamlessGameplayHelper::GetCVarForceEnableSpecialWeatherEventSOL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetCVarForceEnableSpecialWeatherEventSOL");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSeamlessGameplayHelper::GetCVarForceEnableMandelBrickEventSOL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetCVarForceEnableMandelBrickEventSOL");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSeamlessGameplayHelper::GetCVarForceEnableIntroEventSOL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetCVarForceEnableIntroEventSOL");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSeamlessGameplayHelper::GetCVarDisableDeviceSeamless()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "GetCVarDisableDeviceSeamless");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ATeamStart* UDFMIrisEnterSeamlessGameplayHelper::FindCorrespondTeamStart(struct APlayerStart* PlayerStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "FindCorrespondTeamStart");
    struct
    {
        struct APlayerStart* PlayerStart;
        struct ATeamStart* ReturnValue;
    } Parms{};
    Parms.PlayerStart = (struct APlayerStart*)PlayerStart;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::FakeStartPointRandomSeedNotify(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "FakeStartPointRandomSeedNotify");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::FakeStartMatchSucceed(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "FakeStartMatchSucceed");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::FakeRealMatchSucceed(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "FakeRealMatchSucceed");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::FakeReadyToConnectDS(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "FakeReadyToConnectDS");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::FakeCancelMatchSucceed(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "FakeCancelMatchSucceed");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::EnableStreamingAndHud(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "EnableStreamingAndHud");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::ConfirmReadyToConnectRemoteDS(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ConfirmReadyToConnectRemoteDS");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::ConfirmReadyToConnectDS(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "ConfirmReadyToConnectDS");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::CollectExposureVolumeInSafeHouse(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "CollectExposureVolumeInSafeHouse");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSeamlessGameplayHelper::CollectDataForIntroEvent(struct UObject* WorldContextObject, struct UDFMIrisEnterComponent* IrisEnterComponent, int32_t EventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "CollectDataForIntroEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMIrisEnterComponent* IrisEnterComponent;
        int32_t EventId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.IrisEnterComponent = (struct UDFMIrisEnterComponent*)IrisEnterComponent;
    Parms.EventId = (int32_t)EventId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSeamlessGameplayHelper::CleanupExposureOverrideVolume(struct UObject* WorldContextObject, float VolumePriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "CleanupExposureOverrideVolume");
    struct
    {
        struct UObject* WorldContextObject;
        float VolumePriority;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.VolumePriority = (float)VolumePriority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSeamlessGameplayHelper::CancelMatchSucceed(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSeamlessGameplayHelper", "CancelMatchSucceed");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterStageBase::* ----
uint8_t UDFMIrisEnterStageBase::TrySwitchNextStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "TrySwitchNextStage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterStageBase::SequenceLoadTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "SequenceLoadTimeout");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterStageBase::InitStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "InitStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EIrisEnterStageType UDFMIrisEnterStageBase::GetIrisEnterStageType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "GetIrisEnterStageType");
    struct
    {
        enum EIrisEnterStageType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMIrisEnterStageBase::GetIrisEnterStageName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "GetIrisEnterStageName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterStageBase::DelaySwitchToEnterStage(EIrisEnterStageType NewStageType, float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "DelaySwitchToEnterStage");
    struct
    {
        enum EIrisEnterStageType NewStageType;
        float DelayTime;
    } Parms{};
    Parms.NewStageType = (enum EIrisEnterStageType)NewStageType;
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterStageBase::CheckIrisEnterSubsystemValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStageBase", "CheckIrisEnterSubsystemValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMIrisEnterStage_Match::* ----
void UDFMIrisEnterStage_Match::ProcessSequenceWarmUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Match", "ProcessSequenceWarmUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Match::ProcessReferencePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Match", "ProcessReferencePackage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Match::ProcessIntroEventCutSceneLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Match", "ProcessIntroEventCutSceneLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Match::ProcessGIReplaceVolume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Match", "ProcessGIReplaceVolume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterStage_GetOn::* ----
void UDFMIrisEnterStage_GetOn::ProcessTideEnterLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessTideEnterLoc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_GetOn::ProcessMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessMovePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_GetOn::ProcessMandelBrickEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessMandelBrickEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_GetOn::ProcessIntroEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessIntroEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_GetOn::ProcessInDoorStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessInDoorStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_GetOn::ProcessHelicopterMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessHelicopterMovePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_GetOn::ProcessDefaultMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "ProcessDefaultMovePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterStage_GetOn::GetOnHelicopter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_GetOn", "GetOnHelicopter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMIrisEnterStage_PadShow::* ----
uint8_t UDFMIrisEnterStage_PadShow::WarmUpSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "WarmUpSequence");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterStage_PadShow::TransportToStartPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "TransportToStartPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_PadShow::TideEntryTransportToStartPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "TideEntryTransportToStartPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_PadShow::PlayIntroVideo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "PlayIntroVideo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_PadShow::PlayIntroCutScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "PlayIntroCutScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_PadShow::OnIntroVideoEnd(struct FString VideoName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "OnIntroVideoEnd");
    struct
    {
        struct FString VideoName;
    } Parms{};
    Parms.VideoName = (struct FString)VideoName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_PadShow::OnIntroCutSceneEnd(struct AGPSequenceActor* GPSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "OnIntroCutSceneEnd");
    struct
    {
        struct AGPSequenceActor* GPSequenceActor;
    } Parms{};
    Parms.GPSequenceActor = (struct AGPSequenceActor*)GPSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_PadShow::HelicopterTransportToStartPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_PadShow", "HelicopterTransportToStartPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterStage_InfoInteract::* ----
uint8_t UDFMIrisEnterStage_InfoInteract::WarmUpSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "WarmUpSequence");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterStage_InfoInteract::WaitNotifyAbseilTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "WaitNotifyAbseilTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::UpdateMapTgLog(int32_t OpType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "UpdateMapTgLog");
    struct
    {
        int32_t OpType;
    } Parms{};
    Parms.OpType = (int32_t)OpType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::StartLevelStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "StartLevelStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::StartLevelPhysicsLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "StartLevelPhysicsLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::ShowSeamlessEnterTips(uint8_t TipsType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "ShowSeamlessEnterTips");
    struct
    {
        uint8_t TipsType;
    } Parms{};
    Parms.TipsType = (uint8_t)TipsType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::ShowHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "ShowHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::ShowHideSeamlessEntryMap(uint8_t Show)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "ShowHideSeamlessEntryMap");
    struct
    {
        uint8_t Show;
    } Parms{};
    Parms.Show = (uint8_t)Show;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::RestLoopSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "RestLoopSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::RealSwitchNextStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "RealSwitchNextStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::PlayEndSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "PlayEndSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnStartConnectDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnStartConnectDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnPostConnectDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnPostConnectDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnLevelStreamingTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnLevelStreamingTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnLevelStreamingProgress(int32_t Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnLevelStreamingProgress");
    struct
    {
        int32_t Percent;
    } Parms{};
    Parms.Percent = (int32_t)Percent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnLevelPhysicsLoadTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnLevelPhysicsLoadTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnLevelPhysicsLoadComplete(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnLevelPhysicsLoadComplete");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnInteractComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnInteractComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnHUDViewAsyncLoadProgress(float InProgress, struct TArray<struct FName> BlockGameFlowViewNameArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnHUDViewAsyncLoadProgress");
    struct
    {
        float InProgress;
        struct TArray<struct FName> BlockGameFlowViewNameArray;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    Parms.BlockGameFlowViewNameArray = (struct TArray<struct FName>)BlockGameFlowViewNameArray;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnHUDPreloadTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnHUDPreloadTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnDSNotifyAllPlayerReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnDSNotifyAllPlayerReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnClientReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnClientReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::OnCheckPlayerStartSpot(struct APlayerStart* DSPlayerStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "OnCheckPlayerStartSpot");
    struct
    {
        struct APlayerStart* DSPlayerStart;
    } Parms{};
    Parms.DSPlayerStart = (struct APlayerStart*)DSPlayerStart;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_InfoInteract::HideHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "HideHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UDFMIrisEnterStage_InfoInteract::GetWaitNotifyAbseilTimeoutTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_InfoInteract", "GetWaitNotifyAbseilTimeoutTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMIrisEnterStage_Abseil::* ----
void UDFMIrisEnterStage_Abseil::SetAbseilCompletet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Abseil", "SetAbseilCompletet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Abseil::ProcessLandingCameraTransition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Abseil", "ProcessLandingCameraTransition");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Abseil::OnAbseilTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Abseil", "OnAbseilTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Abseil::OnAbseilSequenceEnd(struct AGPSequenceActor* GPSequenceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Abseil", "OnAbseilSequenceEnd");
    struct
    {
        struct AGPSequenceActor* GPSequenceActor;
    } Parms{};
    Parms.GPSequenceActor = (struct AGPSequenceActor*)GPSequenceActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Abseil::ListenToAbseilEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Abseil", "ListenToAbseilEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterStage_Fail::* ----
void UDFMIrisEnterStage_Fail::TeleportBackSafeHouse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Fail", "TeleportBackSafeHouse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Fail::GameFlowBackSafeHouse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Fail", "GameFlowBackSafeHouse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterStage_Fail::BackToLobby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterStage_Fail", "BackToLobby");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterSubsystem::* ----
void UDFMIrisEnterSubsystem::WarmUpSequenceAndAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "WarmUpSequenceAndAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::UpdateHelicopterAlongSpline(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "UpdateHelicopterAlongSpline");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::UpdateEnterStage2Server(int32_t OpType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "UpdateEnterStage2Server");
    struct
    {
        int32_t OpType;
    } Parms{};
    Parms.OpType = (int32_t)OpType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::UnloadLightingLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "UnloadLightingLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSubsystem::TrySwitchNextStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "TrySwitchNextStage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSubsystem::TryConnectDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "TryConnectDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::TransportStreamingTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "TransportStreamingTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::TransportHelicopterToFlyPoint(struct AActor* Helicopter, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "TransportHelicopterToFlyPoint");
    struct
    {
        struct AActor* Helicopter;
        struct FVector Location;
    } Parms{};
    Parms.Helicopter = (struct AActor*)Helicopter;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ToggleHelicopterTiding(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ToggleHelicopterTiding");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SwitchToGetOnStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SwitchToGetOnStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SwitchToEnterStage(EIrisEnterStageType NewStageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SwitchToEnterStage");
    struct
    {
        enum EIrisEnterStageType NewStageType;
    } Parms{};
    Parms.NewStageType = (enum EIrisEnterStageType)NewStageType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::StartListenTODActorLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "StartListenTODActorLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::StartHelicopterSplineMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "StartHelicopterSplineMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::StartFocusLevelStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "StartFocusLevelStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ShowOrHideSeamlessStateHUD(uint8_t ShowOrHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ShowOrHideSeamlessStateHUD");
    struct
    {
        uint8_t ShowOrHide;
    } Parms{};
    Parms.ShowOrHide = (uint8_t)ShowOrHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ShowHud(const struct FName& HudName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ShowHud");
    struct
    {
        struct FName HudName;
    } Parms{};
    Parms.HudName = (struct FName)HudName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ShowHideHUDPanel(struct FName Name, uint8_t ShowOrHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ShowHideHUDPanel");
    struct
    {
        struct FName Name;
        uint8_t ShowOrHide;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.ShowOrHide = (uint8_t)ShowOrHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ShowBlackScreen(float FadeTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ShowBlackScreen");
    struct
    {
        float FadeTime;
    } Parms{};
    Parms.FadeTime = (float)FadeTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ShowAndHideBlackScreen(float FadeInTime, float ShowTime, float FadeOutTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ShowAndHideBlackScreen");
    struct
    {
        float FadeInTime;
        float ShowTime;
        float FadeOutTime;
    } Parms{};
    Parms.FadeInTime = (float)FadeInTime;
    Parms.ShowTime = (float)ShowTime;
    Parms.FadeOutTime = (float)FadeOutTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SetTrialsSeamlessInfo(const struct FTrialsSeamlessInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SetTrialsSeamlessInfo");
    struct
    {
        struct FTrialsSeamlessInfo Info;
    } Parms{};
    Parms.Info = (struct FTrialsSeamlessInfo)Info;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SetSelfFashionSuitID(struct FName SuitId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SetSelfFashionSuitID");
    struct
    {
        struct FName SuitId;
    } Parms{};
    Parms.SuitId = (struct FName)SuitId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SetRTCVar(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SetRTCVar");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SetRealMoviePoint(struct AActor* MovieRootPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SetRealMoviePoint");
    struct
    {
        struct AActor* MovieRootPoint;
    } Parms{};
    Parms.MovieRootPoint = (struct AActor*)MovieRootPoint;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SetEquipmentData(int64_t PlayerId, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SetEquipmentData");
    struct
    {
        int64_t PlayerId;
        struct FName ItemID;
    } Parms{};
    Parms.PlayerId = (int64_t)PlayerId;
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SetCurLoadingMapName(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SetCurLoadingMapName");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::SeamlessCoverShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "SeamlessCoverShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ResetSeamlessEnter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ResetSeamlessEnter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::RequestSubtitle(const struct FName& SubtitleId, ESubtitleSequenceType SubtitleSeqType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "RequestSubtitle");
    struct
    {
        struct FName SubtitleId;
        enum ESubtitleSequenceType SubtitleSeqType;
    } Parms{};
    Parms.SubtitleId = (struct FName)SubtitleId;
    Parms.SubtitleSeqType = (enum ESubtitleSequenceType)SubtitleSeqType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ReadyToConnectDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ReadyToConnectDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::PseudoOnEnterStageChanged(uint8_t NewStageType, uint8_t OldStageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "PseudoOnEnterStageChanged");
    struct
    {
        uint8_t NewStageType;
        uint8_t OldStageType;
    } Parms{};
    Parms.NewStageType = (uint8_t)NewStageType;
    Parms.OldStageType = (uint8_t)OldStageType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::PseudoGameplaySwitchPadShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "PseudoGameplaySwitchPadShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::PseudoGameplayConfigLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "PseudoGameplayConfigLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ProtectLobbyToGameTimeout(float TimeLimit, uint8_t OnlyClear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ProtectLobbyToGameTimeout");
    struct
    {
        float TimeLimit;
        uint8_t OnlyClear;
    } Parms{};
    Parms.TimeLimit = (float)TimeLimit;
    Parms.OnlyClear = (uint8_t)OnlyClear;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ProtectInSafeHouseStageTimeout(float TimeLimit, uint8_t OnlyClear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ProtectInSafeHouseStageTimeout");
    struct
    {
        float TimeLimit;
        uint8_t OnlyClear;
    } Parms{};
    Parms.TimeLimit = (float)TimeLimit;
    Parms.OnlyClear = (uint8_t)OnlyClear;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ProtectInGameTimeout(float TimeLimit, uint8_t OnlyClear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ProtectInGameTimeout");
    struct
    {
        float TimeLimit;
        uint8_t OnlyClear;
    } Parms{};
    Parms.TimeLimit = (float)TimeLimit;
    Parms.OnlyClear = (uint8_t)OnlyClear;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ProcessInDoorStart(uint8_t bForceIndoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ProcessInDoorStart");
    struct
    {
        uint8_t bForceIndoor;
    } Parms{};
    Parms.bForceIndoor = (uint8_t)bForceIndoor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::PrepareProxyHallCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "PrepareProxyHallCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnTODActorLoad(struct AActor* TODActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnTODActorLoad");
    struct
    {
        struct AActor* TODActor;
    } Parms{};
    Parms.TODActor = (struct AActor*)TODActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnStreamingLoadingPercentage(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnStreamingLoadingPercentage");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnSeamlessVideoEnd(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnSeamlessVideoEnd");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnSeamlessTravelEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnSeamlessTravelEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnSeamlessReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnSeamlessReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnProxyCharacterSetupMeshEvent(struct FName ItemID, struct UMeshComponent* Comp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnProxyCharacterSetupMeshEvent");
    struct
    {
        struct FName ItemID;
        struct UMeshComponent* Comp;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    Parms.Comp = (struct UMeshComponent*)Comp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnPostEnterGameFlow(EGameFlowStageType InGameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnPostEnterGameFlow");
    struct
    {
        enum EGameFlowStageType InGameFlowStage;
    } Parms{};
    Parms.InGameFlowStage = (enum EGameFlowStageType)InGameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnPostConnectDS(struct UNetConnection* NetConnection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnPostConnectDS");
    struct
    {
        struct UNetConnection* NetConnection;
    } Parms{};
    Parms.NetConnection = (struct UNetConnection*)NetConnection;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnNetDisconnectInSeamless(struct UWorld* World, struct UNetDriver* NetDriver, ENetworkFailure FailureType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnNetDisconnectInSeamless");
    struct
    {
        struct UWorld* World;
        struct UNetDriver* NetDriver;
        enum ENetworkFailure FailureType;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.NetDriver = (struct UNetDriver*)NetDriver;
    Parms.FailureType = (enum ENetworkFailure)FailureType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnLobbyToGameTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnLobbyToGameTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnLightingLevelLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnLightingLevelLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnInSafeHouseStageTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnInSafeHouseStageTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnInGameTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnInGameTimeout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnGameplayConfigLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnGameplayConfigLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnAsyncMapBaseAssetLoad(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnAsyncMapBaseAssetLoad");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::OnAsyncLoadEdgeMaskMapTexture(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "OnAsyncLoadEdgeMaskMapTexture");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::NotifyEverythingReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "NotifyEverythingReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::MakeSureRealMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "MakeSureRealMovePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::LuaAddSOLQuest(struct TArray<struct FSOLQuest> QuestArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "LuaAddSOLQuest");
    struct
    {
        struct TArray<struct FSOLQuest> QuestArr;
    } Parms{};
    Parms.QuestArr = (struct TArray<struct FSOLQuest>)QuestArr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::LuaAddItemID(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "LuaAddItemID");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::LuaAddActivityQuest(struct TArray<struct FSOLQuestObjection> ActivityQuestObjectionArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "LuaAddActivityQuest");
    struct
    {
        struct TArray<struct FSOLQuestObjection> ActivityQuestObjectionArr;
    } Parms{};
    Parms.ActivityQuestObjectionArr = (struct TArray<struct FSOLQuestObjection>)ActivityQuestObjectionArr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::LoadLightingLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "LoadLightingLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::LoadGameplayConfigLevel(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "LoadGameplayConfigLevel");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ListenRTCVarChange(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ListenRTCVarChange");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::ListenNetDisconnect(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ListenNetDisconnect");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSubsystem::IsSeamlessEnterValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "IsSeamlessEnterValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::IsInGuide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "IsInGuide");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::IsFirstSequenceReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "IsFirstSequenceReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::IsConnectDSIgnoreClientReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSubsystem", "IsConnectDSIgnoreClientReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSubsystem::InitStartSpotAllocator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "InitStartSpotAllocator");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::InitIrisSeamlessEnter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "InitIrisSeamlessEnter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::HideSelfCharacterHeadMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "HideSelfCharacterHeadMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::HideHud(const struct FName& HudName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "HideHud");
    struct
    {
        struct FName HudName;
    } Parms{};
    Parms.HudName = (struct FName)HudName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::HideBlackScreen(float FadeTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "HideBlackScreen");
    struct
    {
        float FadeTime;
    } Parms{};
    Parms.FadeTime = (float)FadeTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::GMPseudoSeamlessEntryStart(struct FString MapName, int32_t TeamStartId, int32_t extra)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GMPseudoSeamlessEntryStart");
    struct
    {
        struct FString MapName;
        int32_t TeamStartId;
        int32_t extra;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    Parms.TeamStartId = (int32_t)TeamStartId;
    Parms.extra = (int32_t)extra;
    this->ProcessEvent(Func, &Parms);
}

float UDFMIrisEnterSubsystem::GetWaitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetWaitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSubsystem::GetTeamIndexByUin(uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetTeamIndexByUin");
    struct
    {
        uint64_t Uin;
        int32_t ReturnValue;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::GetStartLocAndRotFromMovieRoot(struct FVector& OutLoc, struct FRotator& OutRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetStartLocAndRotFromMovieRoot");
    struct
    {
        struct FVector OutLoc;
        struct FRotator OutRot;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutLoc = Parms.OutLoc;
    OutRot = Parms.OutRot;
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::GetStartLocAndRotFromMovePath(struct FVector& OutLoc, struct FRotator& OutRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetStartLocAndRotFromMovePath");
    struct
    {
        struct FVector OutLoc;
        struct FRotator OutRot;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutLoc = Parms.OutLoc;
    OutRot = Parms.OutRot;
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSubsystem::GetSortValue(const struct FSOLQuest& Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetSortValue");
    struct
    {
        struct FSOLQuest Quest;
        int32_t ReturnValue;
    } Parms{};
    Parms.Quest = (struct FSOLQuest)Quest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMIrisEnterSubsystem::GetSOLSpecialWeatherEventID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetSOLSpecialWeatherEventID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AEnterMovePath* UDFMIrisEnterSubsystem::GetMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetMovePath");
    struct
    {
        struct AEnterMovePath* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::GetForceSimplestSeamless()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetForceSimplestSeamless");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMIrisEnterSubsystem::GetCutSceneMediaVideoName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetCutSceneMediaVideoName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESeamlessEntryMatchType UDFMIrisEnterSubsystem::GetCurrentSeamlessMatchType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetCurrentSeamlessMatchType");
    struct
    {
        enum ESeamlessEntryMatchType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EIrisEnterStageType UDFMIrisEnterSubsystem::GetCurrentEnterStageType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetCurrentEnterStageType");
    struct
    {
        enum EIrisEnterStageType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMIrisEnterSubsystem::GetCurLoadingMapName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "GetCurLoadingMapName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMIrisEnterSubsystem* UDFMIrisEnterSubsystem::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterSubsystem", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMIrisEnterSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::ForceStopSeamlessEnter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ForceStopSeamlessEnter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSubsystem::EnableStreamingPoolSizeAdjust(uint8_t bIncrease)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "EnableStreamingPoolSizeAdjust");
    struct
    {
        uint8_t bIncrease;
    } Parms{};
    Parms.bIncrease = (uint8_t)bIncrease;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::EnableProxyCharacterMeshLock(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "EnableProxyCharacterMeshLock");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::DelaySwitchToEnterStage(EIrisEnterStageType NewStageType, float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "DelaySwitchToEnterStage");
    struct
    {
        enum EIrisEnterStageType NewStageType;
        float DelayTime;
    } Parms{};
    Parms.NewStageType = (enum EIrisEnterStageType)NewStageType;
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::DelayShowSeamlessAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "DelayShowSeamlessAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMIrisEnterSubsystem::CollectSeamlessEnterObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "CollectSeamlessEnterObject");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::CheckNeedMandelBrickEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "CheckNeedMandelBrickEvent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::CheckNeedIntroEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "CheckNeedIntroEvent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMIrisEnterSubsystem::CharacterGetOnHelicopter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "CharacterGetOnHelicopter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMIrisEnterSubsystem::ChangeLevelTOD(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "ChangeLevelTOD");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::AsyncLoadMapBaseAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "AsyncLoadMapBaseAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::AdjustSplineToPlayerStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "AdjustSplineToPlayerStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::AddTeammatesFashionSuitID(struct FName SuitId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "AddTeammatesFashionSuitID");
    struct
    {
        struct FName SuitId;
    } Parms{};
    Parms.SuitId = (struct FName)SuitId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterSubsystem::AddOrRemoveHUDState(const struct FName& HUDStateName, uint8_t AddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMIrisEnterSubsystem", "AddOrRemoveHUDState");
    struct
    {
        struct FName HUDStateName;
        uint8_t AddOrRemove;
    } Parms{};
    Parms.HUDStateName = (struct FName)HUDStateName;
    Parms.AddOrRemove = (uint8_t)AddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMIrisEnterUtils::* ----
void UDFMIrisEnterUtils::ReloadMap(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterUtils", "ReloadMap");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMIrisEnterUtils::LaunchDS(struct UObject* WorldContext, struct FString DSPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterUtils", "LaunchDS");
    struct
    {
        struct UObject* WorldContext;
        struct FString DSPort;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.DSPort = (struct FString)DSPort;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UDFMQuestSystem* UDFMIrisEnterUtils::GetDFMQuestSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMIrisEnterUtils", "GetDFMQuestSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMQuestSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UQA_ClientSeamlessTravelStatusListener::* ----
void UQA_ClientSeamlessTravelStatusListener::UnListenClientSeamlessTravelStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "UnListenClientSeamlessTravelStatus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UQA_ClientSeamlessTravelStatusListener* UQA_ClientSeamlessTravelStatusListener::QA_ClientSeamlessTravelStatusListener(struct AGPQuestActionContext* InQAContext, EClientSeamlessTravelStatus ListenStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_ClientSeamlessTravelStatusListener", "QA_ClientSeamlessTravelStatusListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        enum EClientSeamlessTravelStatus ListenStatus;
        struct UQA_ClientSeamlessTravelStatusListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.ListenStatus = (enum EClientSeamlessTravelStatus)ListenStatus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_ClientSeamlessTravelStatusListener::OnSwitchClientPlayer(struct UObject* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnSwitchClientPlayer");
    struct
    {
        struct UObject* Player;
    } Parms{};
    Parms.Player = (struct UObject*)Player;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnSeamlessStageEnter(ESeamlessStage Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnSeamlessStageEnter");
    struct
    {
        enum ESeamlessStage Stage;
    } Parms{};
    Parms.Stage = (enum ESeamlessStage)Stage;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnPreStandaloneInitialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnPreStandaloneInitialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnPreConnectDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnPreConnectDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnPreCleanupDynamicObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnPreCleanupDynamicObjects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnPostStandaloneInitialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnPostStandaloneInitialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnPostConnectDS(struct UNetConnection* Connection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnPostConnectDS");
    struct
    {
        struct UNetConnection* Connection;
    } Parms{};
    Parms.Connection = (struct UNetConnection*)Connection;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnPostCleanupDynamicObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnPostCleanupDynamicObjects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnNetDriverShutdown(struct UNetDriver* NetDriver)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnNetDriverShutdown");
    struct
    {
        struct UNetDriver* NetDriver;
    } Parms{};
    Parms.NetDriver = (struct UNetDriver*)NetDriver;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnClientSeamlessTravelEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnClientSeamlessTravelEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnClientSeamlessTravelBegin(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnClientSeamlessTravelBegin");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::OnClientCreateNewPlayerController(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "OnClientCreateNewPlayerController");
    struct
    {
        struct APlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::ListenClientSeamlessTravelStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "ListenClientSeamlessTravelStatus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientSeamlessTravelStatusListener::ClientSeamlessTravelStatusChange(struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientSeamlessTravelStatusListener", "ClientSeamlessTravelStatusChange");
    struct
    {
        struct UObject* Object;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    this->ProcessEvent(Func, &Parms);
}

// ---- ASafeHouseHelicopter::* ----
void ASafeHouseHelicopter::ToggleCastShadow(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "ToggleCastShadow");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::SetTickEnable(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "SetTickEnable");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::PlayHelicopterAudio(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "PlayHelicopterAudio");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::OnSpawnLandVFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnSpawnLandVFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::OnSetRopeVisable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnSetRopeVisable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::OnRopeDownFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnRopeDownFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector ASafeHouseHelicopter::OnGetSpineLoc(float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnGetSpineLoc");
    struct
    {
        float Time;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USplineComponent* ASafeHouseHelicopter::OnGetRopeDownSpline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnGetRopeDownSpline");
    struct
    {
        struct USplineComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ASafeHouseHelicopter::OnGetoffSpineLoc(float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnGetoffSpineLoc");
    struct
    {
        float Time;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator ASafeHouseHelicopter::OnGetoffDropPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnGetoffDropPoint");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* ASafeHouseHelicopter::OnGetMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnGetMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ASafeHouseHelicopter::OnGetLandPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnGetLandPoint");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASafeHouseHelicopter::OnDropDownRope()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnDropDownRope");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::OnDestoryVFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnDestoryVFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::OnDelayResetPos(float DelayTime, struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnDelayResetPos");
    struct
    {
        float DelayTime;
        struct FVector pos;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::OnAssetLoaded(struct TArray<struct FSoftObjectPath> AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "OnAssetLoaded");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetRef;
    } Parms{};
    Parms.AssetRef = (struct TArray<struct FSoftObjectPath>)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

struct FRotator ASafeHouseHelicopter::GetLookAtRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "GetLookAtRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASafeHouseHelicopter::DoOpenDoor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "DoOpenDoor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::BP_AttachLighting(uint8_t Warning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "BP_AttachLighting");
    struct
    {
        uint8_t Warning;
    } Parms{};
    Parms.Warning = (uint8_t)Warning;
    this->ProcessEvent(Func, &Parms);
}

void ASafeHouseHelicopter::AttachLighting(uint8_t Warning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeHouseHelicopter", "AttachLighting");
    struct
    {
        uint8_t Warning;
    } Parms{};
    Parms.Warning = (uint8_t)Warning;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
