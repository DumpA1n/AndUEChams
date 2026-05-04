#include "IrisWorld.hpp"
#include "DFMGameLoading.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"
#include "GPCutScene.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPQuest.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBigMapIrisHUDView::* ----
void UBigMapIrisHUDView::PlaySwitchAnimationIris(uint8_t bSwitchToFullScreen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapIrisHUDView", "PlaySwitchAnimationIris");
    struct
    {
        uint8_t bSwitchToFullScreen;
    } Parms{};
    Parms.bSwitchToFullScreen = (uint8_t)bSwitchToFullScreen;
    this->ProcessEvent(Func, &Parms);
}

void UBigMapIrisHUDView::OnStrongholdTeleportClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapIrisHUDView", "OnStrongholdTeleportClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBigMapIrisHUDView::OnStrongholdClick(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapIrisHUDView", "OnStrongholdClick");
    struct
    {
        struct FName Name;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
}

void UBigMapIrisHUDView::OnQuestItemClick(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapIrisHUDView", "OnQuestItemClick");
    struct
    {
        struct FName Name;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBigMapQuestDetailView::* ----
void UBigMapQuestDetailView::OnTrackBtnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapQuestDetailView", "OnTrackBtnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBigMapQuestDetailView::OnProcessItemWidget(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapQuestDetailView", "OnProcessItemWidget");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

int32_t UBigMapQuestDetailView::GetQuestItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BigMapQuestDetailView", "GetQuestItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCountDownHUDBaseView::* ----
void UCountDownHUDBaseView::SetType(int32_t TypeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "SetType");
    struct
    {
        int32_t TypeID;
    } Parms{};
    Parms.TypeID = (int32_t)TypeID;
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::SetTotalTime(float InTotalTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "SetTotalTime");
    struct
    {
        float InTotalTime;
    } Parms{};
    Parms.InTotalTime = (float)InTotalTime;
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::SetTitle(struct FText Title_, EQA_CountdownType InCountdownType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "SetTitle");
    struct
    {
        struct FText Title_;
        enum EQA_CountdownType InCountdownType;
    } Parms{};
    Parms.Title_ = (struct FText)Title_;
    Parms.InCountdownType = (enum EQA_CountdownType)InCountdownType;
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::SetRemainningTime(float InRemainningTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "SetRemainningTime");
    struct
    {
        float InRemainningTime;
    } Parms{};
    Parms.InRemainningTime = (float)InRemainningTime;
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::BP_StartFinalCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "BP_StartFinalCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::BP_SetTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "BP_SetTitle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::BP_SetRemainningTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "BP_SetRemainningTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::BP_PlayCountAudio(uint8_t Strong)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "BP_PlayCountAudio");
    struct
    {
        uint8_t Strong;
    } Parms{};
    Parms.Strong = (uint8_t)Strong;
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::BP_FadeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "BP_FadeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCountDownHUDBaseView::BP_FadeIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CountDownHUDBaseView", "BP_FadeIn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADeadBodyDrugSubSystem::* ----
void ADeadBodyDrugSubSystem::OnAIPlayerDiedEvent(struct AController* cpc, struct AController* KillerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DeadBodyDrugSubSystem", "OnAIPlayerDiedEvent");
    struct
    {
        struct AController* cpc;
        struct AController* KillerController;
    } Parms{};
    Parms.cpc = (struct AController*)cpc;
    Parms.KillerController = (struct AController*)KillerController;
    this->ProcessEvent(Func, &Parms);
}

void ADeadBodyDrugSubSystem::OnActiveRaidEntity(uint32_t RaidEntityID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DeadBodyDrugSubSystem", "OnActiveRaidEntity");
    struct
    {
        uint32_t RaidEntityID;
    } Parms{};
    Parms.RaidEntityID = (uint32_t)RaidEntityID;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisRaidDataComponent::* ----
void UIrisRaidDataComponent::SwitchRaidStage(ERaidStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "SwitchRaidStage");
    struct
    {
        enum ERaidStage NewStage;
    } Parms{};
    Parms.NewStage = (enum ERaidStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerStateComfirmed(uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerStateComfirmed");
    struct
    {
        uint64_t PlayerId;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerRaidVote(int64_t QuestID, uint64_t PlayerId, uint8_t bCancelVote)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerRaidVote");
    struct
    {
        int64_t QuestID;
        uint64_t PlayerId;
        uint8_t bCancelVote;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.bCancelVote = (uint8_t)bCancelVote;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerRaidGiveUpVote(uint64_t PlayerId, uint8_t bGiveUp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerRaidGiveUpVote");
    struct
    {
        uint64_t PlayerId;
        uint8_t bGiveUp;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.bGiveUp = (uint8_t)bGiveUp;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerOnRaidLevelComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerOnRaidLevelComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerOnRaidBuyCondition(uint64_t PropId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerOnRaidBuyCondition");
    struct
    {
        uint64_t PropId;
    } Parms{};
    Parms.PropId = (uint64_t)PropId;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerOnMissionSettlement(int32_t RaidID, int32_t QuestID, struct TArray<int32_t> ItemArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerOnMissionSettlement");
    struct
    {
        int32_t RaidID;
        int32_t QuestID;
        struct TArray<int32_t> ItemArray;
    } Parms{};
    Parms.RaidID = (int32_t)RaidID;
    Parms.QuestID = (int32_t)QuestID;
    Parms.ItemArray = (struct TArray<int32_t>)ItemArray;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerAddConditionProp(uint64_t ConditionProp, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerAddConditionProp");
    struct
    {
        uint64_t ConditionProp;
        uint64_t PlayerId;
    } Parms{};
    Parms.ConditionProp = (uint64_t)ConditionProp;
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerActivateRaidEntity(uint32_t EntityID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerActivateRaidEntity");
    struct
    {
        uint32_t EntityID;
    } Parms{};
    Parms.EntityID = (uint32_t)EntityID;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ServerActivateQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ServerActivateQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnTeamPurchaseRevive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnTeamPurchaseRevive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnStageStateChanged(struct AGPQuestStage* InStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnStageStateChanged");
    struct
    {
        struct AGPQuestStage* InStage;
    } Parms{};
    Parms.InStage = (struct AGPQuestStage*)InStage;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnReplayStage(struct AGPQuestStage* InStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnReplayStage");
    struct
    {
        struct AGPQuestStage* InStage;
    } Parms{};
    Parms.InStage = (struct AGPQuestStage*)InStage;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRep_RaidVoteInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRep_RaidVoteInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRep_RaidStateInfo(struct FRaidStateInfo LastRaidStateInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRep_RaidStateInfo");
    struct
    {
        struct FRaidStateInfo LastRaidStateInfo;
    } Parms{};
    Parms.LastRaidStateInfo = (struct FRaidStateInfo)LastRaidStateInfo;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRep_RaidGiveUpVoteInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRep_RaidGiveUpVoteInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRep_MissionSettlementDatas()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRep_MissionSettlementDatas");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRep_ConfirmedPlayers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRep_ConfirmedPlayers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRep_ConditionProps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRep_ConditionProps");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRaidIntroCSPlayEnd(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRaidIntroCSPlayEnd");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnRaidIntroCSBegin(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnRaidIntroCSBegin");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnQuitGameInitiative(EMatchOverReason MatchOverReason, int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnQuitGameInitiative");
    struct
    {
        enum EMatchOverReason MatchOverReason;
        int64_t PlayerUin;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnQLevelLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnQLevelLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnPostEndStage(struct AGPQuestStage* InStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnPostEndStage");
    struct
    {
        struct AGPQuestStage* InStage;
    } Parms{};
    Parms.InStage = (struct AGPQuestStage*)InStage;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnPostEndQuest(struct AGPQuest* InQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnPostEndQuest");
    struct
    {
        struct AGPQuest* InQuest;
    } Parms{};
    Parms.InQuest = (struct AGPQuest*)InQuest;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::OnClientReadyToPlayNotify(uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "OnClientReadyToPlayNotify");
    struct
    {
        uint64_t PlayerId;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::NtfClientPlayRaidIntroCS(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "NtfClientPlayRaidIntroCS");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::NotifyServerLoadQLevelComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "NotifyServerLoadQLevelComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::MulticastUnLoadQuestLevel(struct FString QLevelPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "MulticastUnLoadQuestLevel");
    struct
    {
        struct FString QLevelPath;
    } Parms{};
    Parms.QLevelPath = (struct FString)QLevelPath;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::MulticastLoadQuestLevel(struct FString QLevelPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "MulticastLoadQuestLevel");
    struct
    {
        struct FString QLevelPath;
    } Parms{};
    Parms.QLevelPath = (struct FString)QLevelPath;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::InitIrisRaidData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "InitIrisRaidData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataComponent::ClientQuestCountdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ClientQuestCountdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UIrisRaidDataComponent::ClientGetQuestTimeLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataComponent", "ClientGetQuestTimeLeft");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UIrisRaidDataStatisticsComponent::* ----
void UIrisRaidDataStatisticsComponent::OnServerRaidQuestEnded(int64_t CurQuestID, ERaidStage CurStage, int32_t TimeSpent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataStatisticsComponent", "OnServerRaidQuestEnded");
    struct
    {
        int64_t CurQuestID;
        enum ERaidStage CurStage;
        int32_t TimeSpent;
    } Parms{};
    Parms.CurQuestID = (int64_t)CurQuestID;
    Parms.CurStage = (enum ERaidStage)CurStage;
    Parms.TimeSpent = (int32_t)TimeSpent;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataStatisticsComponent::OnServerActiveRaidEntity(uint32_t RaidEntityID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataStatisticsComponent", "OnServerActiveRaidEntity");
    struct
    {
        uint32_t RaidEntityID;
    } Parms{};
    Parms.RaidEntityID = (uint32_t)RaidEntityID;
    this->ProcessEvent(Func, &Parms);
}

void UIrisRaidDataStatisticsComponent::OnAIDeath(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidDataStatisticsComponent", "OnAIDeath");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisRaidEntranceView::* ----
void UIrisRaidEntranceView::EnterRaid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisRaidEntranceView", "EnterRaid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UStronghold::* ----
void UStronghold::SpawnNPCs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Stronghold", "SpawnNPCs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UStronghold::OnStateChange(EStrongholdState ENewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Stronghold", "OnStateChange");
    struct
    {
        enum EStrongholdState ENewState;
    } Parms{};
    Parms.ENewState = (enum EStrongholdState)ENewState;
    this->ProcessEvent(Func, &Parms);
}

void UStronghold::OnSpawnEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Stronghold", "OnSpawnEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint32_t UStronghold::GetShID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Stronghold", "GetShID");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UStronghold::ClearNPCs(uint8_t bAll)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Stronghold", "ClearNPCs");
    struct
    {
        uint8_t bAll;
    } Parms{};
    Parms.bAll = (uint8_t)bAll;
    this->ProcessEvent(Func, &Parms);
}

// ---- AStrongholdSpawnContainer::* ----
void AStrongholdSpawnContainer::Unspawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StrongholdSpawnContainer", "Unspawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AStrongholdSpawnContainer::ResetSpawnContainer(const struct FItemID& ItemID, const struct TArray<struct FInventoryItemInfo>& BoxInnerItems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StrongholdSpawnContainer", "ResetSpawnContainer");
    struct
    {
        struct FItemID ItemID;
        struct TArray<struct FInventoryItemInfo> BoxInnerItems;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    Parms.BoxInnerItems = (struct TArray<struct FInventoryItemInfo>)BoxInnerItems;
    this->ProcessEvent(Func, &Parms);
}

struct AInventoryPickup_Container* AStrongholdSpawnContainer::BP_AddSpawnContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StrongholdSpawnContainer", "BP_AddSpawnContainer");
    struct
    {
        struct AInventoryPickup_Container* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UIrisStrongholdComponent::* ----
void UIrisStrongholdComponent::UpdateState(uint32_t StrongholdID, EStrongholdState EState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "UpdateState");
    struct
    {
        uint32_t StrongholdID;
        enum EStrongholdState EState;
    } Parms{};
    Parms.StrongholdID = (uint32_t)StrongholdID;
    Parms.EState = (enum EStrongholdState)EState;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::TraceStronghold(uint32_t StrongholdID, EStrongholdState EState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "TraceStronghold");
    struct
    {
        uint32_t StrongholdID;
        enum EStrongholdState EState;
    } Parms{};
    Parms.StrongholdID = (uint32_t)StrongholdID;
    Parms.EState = (enum EStrongholdState)EState;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::ServerTeleportTo(struct FVector TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "ServerTeleportTo");
    struct
    {
        struct FVector TargetLocation;
    } Parms{};
    Parms.TargetLocation = (struct FVector)TargetLocation;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::RmStronghold(uint32_t StrongholdID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "RmStronghold");
    struct
    {
        uint32_t StrongholdID;
    } Parms{};
    Parms.StrongholdID = (uint32_t)StrongholdID;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::ReqTeleportToStronghold(uint32_t StrongholdID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "ReqTeleportToStronghold");
    struct
    {
        uint32_t StrongholdID;
    } Parms{};
    Parms.StrongholdID = (uint32_t)StrongholdID;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::OnRep_StrongholdArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "OnRep_StrongholdArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::OnFinishMission(uint64_t missionid, struct AGPPlayerController* cpc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "OnFinishMission");
    struct
    {
        uint64_t missionid;
        struct AGPPlayerController* cpc;
    } Parms{};
    Parms.missionid = (uint64_t)missionid;
    Parms.cpc = (struct AGPPlayerController*)cpc;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::OnEnterStrongholdClient(uint32_t StrongholdID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "OnEnterStrongholdClient");
    struct
    {
        uint32_t StrongholdID;
    } Parms{};
    Parms.StrongholdID = (uint32_t)StrongholdID;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::OnBeginMission(uint64_t missionid, struct AGPPlayerController* cpc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "OnBeginMission");
    struct
    {
        uint64_t missionid;
        struct AGPPlayerController* cpc;
    } Parms{};
    Parms.missionid = (uint64_t)missionid;
    Parms.cpc = (struct AGPPlayerController*)cpc;
    this->ProcessEvent(Func, &Parms);
}

void UIrisStrongholdComponent::ClientTeleportToStronghold(struct FVector TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisStrongholdComponent", "ClientTeleportToStronghold");
    struct
    {
        struct FVector TargetLocation;
    } Parms{};
    Parms.TargetLocation = (struct FVector)TargetLocation;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisWorldCustomPlayerStateDataComponent::* ----
void UIrisWorldCustomPlayerStateDataComponent::OnRep_EndAlertTimestamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldCustomPlayerStateDataComponent", "OnRep_EndAlertTimestamp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AIrisWorldGameMode::* ----
void AIrisWorldGameMode::RebornPlayer(struct AController* PlayerController, uint8_t RefillArmor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameMode", "RebornPlayer");
    struct
    {
        struct AController* PlayerController;
        uint8_t RefillArmor;
    } Parms{};
    Parms.PlayerController = (struct AController*)PlayerController;
    Parms.RefillArmor = (uint8_t)RefillArmor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisWorldGameplayDelegates::* ----
void UIrisWorldGameplayDelegates::NotifyIrisSafeHouseReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplayDelegates", "NotifyIrisSafeHouseReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UIrisWorldGameplayDelegates* UIrisWorldGameplayDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGameplayDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UIrisWorldGameplayDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AIrisWorldGameplaySubsystem::* ----
void AIrisWorldGameplaySubsystem::OnClientSeamlessTravelFinished(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "OnClientSeamlessTravelFinished");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameplaySubsystem::OnClientSeamlessTravelBegin(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "OnClientSeamlessTravelBegin");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameplaySubsystem::OnClientGameLoadingFinished(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "OnClientGameLoadingFinished");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameplaySubsystem::NotifyClientReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "NotifyClientReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameplaySubsystem::ClientPlayRaidIntro()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "ClientPlayRaidIntro");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameplaySubsystem::ClientOnRaidIntroCSPlayEnd(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "ClientOnRaidIntroCSPlayEnd");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameplaySubsystem::ClientOnRaidIntroCSBegin(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameplaySubsystem", "ClientOnRaidIntroCSBegin");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisWorldGamePlayUtils::* ----
struct AActor* UIrisWorldGamePlayUtils::SpawnTeamMateCharacter(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "SpawnTeamMateCharacter");
    struct
    {
        struct UWorld* WorldContext;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UIrisWorldGamePlayUtils::SpawnSafeHouseBuilding(struct UWorld* WorldContext, struct UObject* BuildingClass, struct FString PosTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "SpawnSafeHouseBuilding");
    struct
    {
        struct UWorld* WorldContext;
        struct UObject* BuildingClass;
        struct FString PosTag;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    Parms.BuildingClass = (struct UObject*)BuildingClass;
    Parms.PosTag = (struct FString)PosTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIrisWorldGamePlayUtils::ReplayRaidMission(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "ReplayRaidMission");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::PlayerUseResurrectCoin(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "PlayerUseResurrectCoin");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::PlayerGiveUpRaidGame(struct UObject* WorldContext, uint8_t bGiveUp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "PlayerGiveUpRaidGame");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bGiveUp;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bGiveUp = (uint8_t)bGiveUp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::PlayerExitRaidGame(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "PlayerExitRaidGame");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::OpenRaidPreviewHUD(struct UObject* InWorldContext, int32_t RaidID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "OpenRaidPreviewHUD");
    struct
    {
        struct UObject* InWorldContext;
        int32_t RaidID;
    } Parms{};
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    Parms.RaidID = (int32_t)RaidID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::OpenRaidHUD(struct UObject* InWorldContext, int64_t RaidID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "OpenRaidHUD");
    struct
    {
        struct UObject* InWorldContext;
        int64_t RaidID;
    } Parms{};
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    Parms.RaidID = (int64_t)RaidID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::JoinTheNewHost(struct UObject* WorldContext, struct FString HostURL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "JoinTheNewHost");
    struct
    {
        struct UObject* WorldContext;
        struct FString HostURL;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.HostURL = (struct FString)HostURL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UIrisWorldGamePlayUtils::GetIrisRaidStage(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "GetIrisRaidStage");
    struct
    {
        struct UObject* WorldContext;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UIrisWorldGamePlayUtils::GetIrisRaidName(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "GetIrisRaidName");
    struct
    {
        struct UObject* WorldContext;
        struct FText ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FText> UIrisWorldGamePlayUtils::GetIrisRaidAllStageName(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "GetIrisRaidAllStageName");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<struct FText> ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FSoftObjectPath> UIrisWorldGamePlayUtils::GetIrisRaidAllBgObjectPath(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "GetIrisRaidAllBgObjectPath");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<struct FSoftObjectPath> ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIrisWorldGamePlayUtils::ExitSafeHouse(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "ExitSafeHouse");
    struct
    {
        struct UWorld* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::ExitGunsmith(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "ExitGunsmith");
    struct
    {
        struct UWorld* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::EnterSafeHouse(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "EnterSafeHouse");
    struct
    {
        struct UWorld* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UIrisWorldGamePlayUtils::EnterGunsmith(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "EnterGunsmith");
    struct
    {
        struct UWorld* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIrisWorldGamePlayUtils::DestroyTeamMateCharacter(struct UWorld* WorldContext, struct AActor* CharacterActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "DestroyTeamMateCharacter");
    struct
    {
        struct UWorld* WorldContext;
        struct AActor* CharacterActor;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    Parms.CharacterActor = (struct AActor*)CharacterActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UIrisWorldGamePlayUtils::ActivateMission(struct UWorld* WorldContext, int64_t missionid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGamePlayUtils", "ActivateMission");
    struct
    {
        struct UWorld* WorldContext;
        int64_t missionid;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    Parms.missionid = (int64_t)missionid;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UIrisWorldGameplayBlueprintHelper::* ----
void UIrisWorldGameplayBlueprintHelper::StartRedAlert(struct UObject* WorldContextObject, float Timeout)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGameplayBlueprintHelper", "StartRedAlert");
    struct
    {
        struct UObject* WorldContextObject;
        float Timeout;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Timeout = (float)Timeout;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UDFMPlayerResurrectComponent* UIrisWorldGameplayBlueprintHelper::GetFirstPlayerResurrectCom(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGameplayBlueprintHelper", "GetFirstPlayerResurrectCom");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMPlayerResurrectComponent* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIrisWorldGameplayBlueprintHelper::ForceEndRedAlert(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGameplayBlueprintHelper", "ForceEndRedAlert");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- AIrisWorldGameState::* ----
void AIrisWorldGameState::SetMuteFoliage(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGameState", "SetMuteFoliage");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::SetGameplayPrefGroup(EGPPrefGroupName InPrefGroupName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "SetGameplayPrefGroup");
    struct
    {
        enum EGPPrefGroupName InPrefGroupName;
    } Parms{};
    Parms.InPrefGroupName = (enum EGPPrefGroupName)InPrefGroupName;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::ServerNotifyPlayerReborn(struct AGPCharacterBase* GPCharacterBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "ServerNotifyPlayerReborn");
    struct
    {
        struct AGPCharacterBase* GPCharacterBase;
    } Parms{};
    Parms.GPCharacterBase = (struct AGPCharacterBase*)GPCharacterBase;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::RequestLeaderResState(uint64_t ResPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "RequestLeaderResState");
    struct
    {
        uint64_t ResPlayer;
    } Parms{};
    Parms.ResPlayer = (uint64_t)ResPlayer;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::OnRep_PerfGroupName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "OnRep_PerfGroupName");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::OnRep_IsTeammateAllDied()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "OnRep_IsTeammateAllDied");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::OnRep_GameFlowStageChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "OnRep_GameFlowStageChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::OnRep_CurGameRuleType(EGameRuleType LastRuleType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "OnRep_CurGameRuleType");
    struct
    {
        enum EGameRuleType LastRuleType;
    } Parms{};
    Parms.LastRuleType = (enum EGameRuleType)LastRuleType;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldGameState::NotifyTeamMemberAllDead(struct FTeamInfo TeamInfo, struct AGPCharacter* LastDiedCharacter, struct AGPCharacter* KillerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "NotifyTeamMemberAllDead");
    struct
    {
        struct FTeamInfo TeamInfo;
        struct AGPCharacter* LastDiedCharacter;
        struct AGPCharacter* KillerCharacter;
    } Parms{};
    Parms.TeamInfo = (struct FTeamInfo)TeamInfo;
    Parms.LastDiedCharacter = (struct AGPCharacter*)LastDiedCharacter;
    Parms.KillerCharacter = (struct AGPCharacter*)KillerCharacter;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AIrisWorldGameState::IsIrisTeamAllDie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "IsIrisTeamAllDie");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AIrisWorldGameState::IsInPVERaid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "IsInPVERaid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AIrisWorldPlayerState* AIrisWorldGameState::GetPlayerStateByIndex(int32_t PlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "GetPlayerStateByIndex");
    struct
    {
        int32_t PlayerIndex;
        struct AIrisWorldPlayerState* ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AIrisWorldGameState::GetMuteFoliage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldGameState", "GetMuteFoliage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameRuleType AIrisWorldGameState::GetGameRuleType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "GetGameRuleType");
    struct
    {
        enum EGameRuleType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataStatisticsBaseComponent* AIrisWorldGameState::GetDataStatisticsBaseComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "GetDataStatisticsBaseComponent");
    struct
    {
        struct UDataStatisticsBaseComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AIrisWorldGameState::ClientReadyToPlayNotify(uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldGameState", "ClientReadyToPlayNotify");
    struct
    {
        uint64_t PlayerId;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

// ---- AIrisWorldHUD::* ----
void AIrisWorldHUD::OnQuestStageChanged(struct FName QuestStageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldHUD", "OnQuestStageChanged");
    struct
    {
        struct FName QuestStageName;
    } Parms{};
    Parms.QuestStageName = (struct FName)QuestStageName;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldHUD::CreateQuestHudView(EDFMGamePlayMode DFMGamePlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldHUD", "CreateQuestHudView");
    struct
    {
        enum EDFMGamePlayMode DFMGamePlayMode;
    } Parms{};
    Parms.DFMGamePlayMode = (enum EDFMGamePlayMode)DFMGamePlayMode;
    this->ProcessEvent(Func, &Parms);
}

// ---- UIrisWorldPlayerSettlementComponent::* ----
void UIrisWorldPlayerSettlementComponent::ServerCollectPlayerSettlementData(EMatchOverReason MatchOverReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerSettlementComponent", "ServerCollectPlayerSettlementData");
    struct
    {
        enum EMatchOverReason MatchOverReason;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    this->ProcessEvent(Func, &Parms);
}

// ---- AIrisWorldPlayerState::* ----
void AIrisWorldPlayerState::SetPlayerVisiable(uint8_t bPlayerVisiable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "SetPlayerVisiable");
    struct
    {
        uint8_t bPlayerVisiable;
    } Parms{};
    Parms.bPlayerVisiable = (uint8_t)bPlayerVisiable;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerSendRaidSettlementInfo(uint8_t bSucceed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerSendRaidSettlementInfo");
    struct
    {
        uint8_t bSucceed;
    } Parms{};
    Parms.bSucceed = (uint8_t)bSucceed;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerResetRaidDifficulty(uint8_t NewDifficulty, uint8_t bReplayRaid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerResetRaidDifficulty");
    struct
    {
        uint8_t NewDifficulty;
        uint8_t bReplayRaid;
    } Parms{};
    Parms.NewDifficulty = (uint8_t)NewDifficulty;
    Parms.bReplayRaid = (uint8_t)bReplayRaid;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerReplayMission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerReplayMission");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerRaidVote(int64_t QuestID, uint8_t bCancelVote)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerRaidVote");
    struct
    {
        int64_t QuestID;
        uint8_t bCancelVote;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    Parms.bCancelVote = (uint8_t)bCancelVote;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerRaidGiveUpVote(uint8_t bGiveUp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerRaidGiveUpVote");
    struct
    {
        uint8_t bGiveUp;
    } Parms{};
    Parms.bGiveUp = (uint8_t)bGiveUp;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerPendingLeaveDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerPendingLeaveDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerConfirmPurchase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerConfirmPurchase");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerAddConditionProp(uint64_t PropId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerAddConditionProp");
    struct
    {
        uint64_t PropId;
    } Parms{};
    Parms.PropId = (uint64_t)PropId;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerActiveRaidEntity(uint32_t EntityID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerActiveRaidEntity");
    struct
    {
        uint32_t EntityID;
    } Parms{};
    Parms.EntityID = (uint32_t)EntityID;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ServerActiveDiscovery()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ServerActiveDiscovery");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AIrisWorldPlayerState::Server_IsMeritEnough(float ConsumeValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "Server_IsMeritEnough");
    struct
    {
        float ConsumeValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ConsumeValue = (float)ConsumeValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AIrisWorldPlayerState::Server_ConsumeMerit(float ConsumeValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "Server_ConsumeMerit");
    struct
    {
        float ConsumeValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ConsumeValue = (float)ConsumeValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AIrisWorldPlayerState::OnRep_MeritChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "OnRep_MeritChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AIrisWorldPlayerState::IsTeamLeader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "IsTeamLeader");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AIrisWorldPlayerState::IfMeritEnoughToBuy(float NeedMerit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "IfMeritEnoughToBuy");
    struct
    {
        float NeedMerit;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NeedMerit = (float)NeedMerit;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AIrisWorldPlayerState::GetPlayerVisiable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "GetPlayerVisiable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AIrisWorldPlayerState::GetMerit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "GetMerit");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AIrisWorldPlayerState::DeactiveCheckPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "DeactiveCheckPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::BP_ServerActiveRaid(int32_t EntityID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "BP_ServerActiveRaid");
    struct
    {
        int32_t EntityID;
    } Parms{};
    Parms.EntityID = (int32_t)EntityID;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::BP_ServerActiveDiscovery()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "BP_ServerActiveDiscovery");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::AddMerit(float AddValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "AddMerit");
    struct
    {
        float AddValue;
    } Parms{};
    Parms.AddValue = (float)AddValue;
    this->ProcessEvent(Func, &Parms);
}

void AIrisWorldPlayerState::ActiveCheckPoint(int32_t SpotGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldPlayerState", "ActiveCheckPoint");
    struct
    {
        int32_t SpotGroupID;
    } Parms{};
    Parms.SpotGroupID = (int32_t)SpotGroupID;
    this->ProcessEvent(Func, &Parms);
}

// ---- AIrisWorldRaidInfoActor::* ----
struct AIrisWorldRaidInfoActor* AIrisWorldRaidInfoActor::GetRaidInfo(struct UObject* InWorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IrisWorldRaidInfoActor", "GetRaidInfo");
    struct
    {
        struct UObject* InWorldContext;
        struct AIrisWorldRaidInfoActor* ReturnValue;
    } Parms{};
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AIrisWorldRaidInfoActor::BPGetRaidLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldRaidInfoActor", "BPGetRaidLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ERaidStage AIrisWorldRaidInfoActor::BPGetCurRaidStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldRaidInfoActor", "BPGetCurRaidStage");
    struct
    {
        enum ERaidStage ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AIrisWorldRaidInfoActor::BPGetCurRaidEntityID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IrisWorldRaidInfoActor", "BPGetCurRaidEntityID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMapMissionHUDView::* ----
void UMapMissionHUDView::OnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapMissionHUDView", "OnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UMapStrongholdHUDView::* ----
void UMapStrongholdHUDView::OnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapStrongholdHUDView", "OnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UQA_FillAllWeaponAmmo::* ----
struct UQA_FillAllWeaponAmmo* UQA_FillAllWeaponAmmo::QA_FillAllWeaponAmmo(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_FillAllWeaponAmmo", "QA_FillAllWeaponAmmo");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* TargetPlayerCtrl;
        struct UQA_FillAllWeaponAmmo* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetPlayerCtrl = (struct APlayerController*)TargetPlayerCtrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_FillAllWeaponAmmo* UQA_FillAllWeaponAmmo::QA_FillAllPlayersAmmo(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_FillAllWeaponAmmo", "QA_FillAllPlayersAmmo");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_FillAllWeaponAmmo* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UQA_GetRaidDifficult::* ----
struct UQA_GetRaidDifficult* UQA_GetRaidDifficult::QA_GetRaidDifficult(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GetRaidDifficult", "QA_GetRaidDifficult");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_GetRaidDifficult* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_GetRaidDifficult::OnGetDifficult_Simple(EGameDifficultLevel Difficult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GetRaidDifficult", "OnGetDifficult_Simple");
    struct
    {
        enum EGameDifficultLevel Difficult;
    } Parms{};
    Parms.Difficult = (enum EGameDifficultLevel)Difficult;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GetRaidDifficult::OnGetDifficult_Normal(EGameDifficultLevel Difficult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GetRaidDifficult", "OnGetDifficult_Normal");
    struct
    {
        enum EGameDifficultLevel Difficult;
    } Parms{};
    Parms.Difficult = (enum EGameDifficultLevel)Difficult;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GetRaidDifficult::OnGetDifficult_Hard(EGameDifficultLevel Difficult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GetRaidDifficult", "OnGetDifficult_Hard");
    struct
    {
        enum EGameDifficultLevel Difficult;
    } Parms{};
    Parms.Difficult = (enum EGameDifficultLevel)Difficult;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GetRaidDifficult::OnGetDifficult_Any(EGameDifficultLevel Difficult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GetRaidDifficult", "OnGetDifficult_Any");
    struct
    {
        enum EGameDifficultLevel Difficult;
    } Parms{};
    Parms.Difficult = (enum EGameDifficultLevel)Difficult;
    this->ProcessEvent(Func, &Parms);
}

// ---- UQA_IrisCheckPoint::* ----
struct UQA_IrisCheckPoint* UQA_IrisCheckPoint::QA_EnableFindNearestCheckPoint(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_IrisCheckPoint", "QA_EnableFindNearestCheckPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_IrisCheckPoint* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_IrisCheckPoint* UQA_IrisCheckPoint::QA_DisableFindNearestCheckPoint(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_IrisCheckPoint", "QA_DisableFindNearestCheckPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_IrisCheckPoint* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_IrisCheckPoint* UQA_IrisCheckPoint::QA_DeactiveTeamIrisCheckPoint(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_IrisCheckPoint", "QA_DeactiveTeamIrisCheckPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_IrisCheckPoint* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_IrisCheckPoint* UQA_IrisCheckPoint::QA_DeactiveIrisCheckPoint(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_IrisCheckPoint", "QA_DeactiveIrisCheckPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* TargetPlayerCtrl;
        struct UQA_IrisCheckPoint* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetPlayerCtrl = (struct APlayerController*)TargetPlayerCtrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_IrisCheckPoint* UQA_IrisCheckPoint::QA_ActiveTeamIrisCheckPoint(struct AGPQuestActionContext* QAContext, int32_t StartPointGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_IrisCheckPoint", "QA_ActiveTeamIrisCheckPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t StartPointGroup;
        struct UQA_IrisCheckPoint* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.StartPointGroup = (int32_t)StartPointGroup;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_IrisCheckPoint* UQA_IrisCheckPoint::QA_ActiveIrisCheckPoint(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl, int32_t StartPointGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_IrisCheckPoint", "QA_ActiveIrisCheckPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* TargetPlayerCtrl;
        int32_t StartPointGroup;
        struct UQA_IrisCheckPoint* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetPlayerCtrl = (struct APlayerController*)TargetPlayerCtrl;
    Parms.StartPointGroup = (int32_t)StartPointGroup;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URaidBuyConditionView::* ----
void URaidBuyConditionView::ShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "ShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnSelectConditionProp(uint64_t PropId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnSelectConditionProp");
    struct
    {
        uint64_t PropId;
    } Parms{};
    Parms.PropId = (uint64_t)PropId;
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnRaidStageChanged(ERaidStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnRaidStageChanged");
    struct
    {
        enum ERaidStage NewStage;
    } Parms{};
    Parms.NewStage = (enum ERaidStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnPurchaseCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnPurchaseCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnPurchaseConditionProp(uint64_t PropId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnPurchaseConditionProp");
    struct
    {
        uint64_t PropId;
    } Parms{};
    Parms.PropId = (uint64_t)PropId;
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnPlayerConfirmed(struct TArray<uint64_t> ConfirmedPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnPlayerConfirmed");
    struct
    {
        struct TArray<uint64_t> ConfirmedPlayers;
    } Parms{};
    Parms.ConfirmedPlayers = (struct TArray<uint64_t>)ConfirmedPlayers;
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnConditionPropsUpdate(struct TArray<uint64_t> InConditions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnConditionPropsUpdate");
    struct
    {
        struct TArray<uint64_t> InConditions;
    } Parms{};
    Parms.InConditions = (struct TArray<uint64_t>)InConditions;
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::OnClickdeConfirmButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "OnClickdeConfirmButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::InitWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "InitWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidBuyConditionView::HideView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidBuyConditionView", "HideView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidCountDownHUDView::* ----
void URaidCountDownHUDView::SetType(int32_t TypeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "SetType");
    struct
    {
        int32_t TypeID;
    } Parms{};
    Parms.TypeID = (int32_t)TypeID;
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::SetTotalTime(float InTotalTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "SetTotalTime");
    struct
    {
        float InTotalTime;
    } Parms{};
    Parms.InTotalTime = (float)InTotalTime;
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::SetTitle(struct FText Title_, EQA_CountdownType InCountdownType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "SetTitle");
    struct
    {
        struct FText Title_;
        enum EQA_CountdownType InCountdownType;
    } Parms{};
    Parms.Title_ = (struct FText)Title_;
    Parms.InCountdownType = (enum EQA_CountdownType)InCountdownType;
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::SetRemainningTime(float InRemainningTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "SetRemainningTime");
    struct
    {
        float InRemainningTime;
    } Parms{};
    Parms.InRemainningTime = (float)InRemainningTime;
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_StartFinalCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_StartFinalCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_SetTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_SetTitle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_SetRemainningTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_SetRemainningTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_SetLoopAnimationType(int32_t InLoopAnimationType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_SetLoopAnimationType");
    struct
    {
        int32_t InLoopAnimationType;
    } Parms{};
    Parms.InLoopAnimationType = (int32_t)InLoopAnimationType;
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_PlayCountAudio(uint8_t Strong)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_PlayCountAudio");
    struct
    {
        uint8_t Strong;
    } Parms{};
    Parms.Strong = (uint8_t)Strong;
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_FadeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_FadeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_FadeIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_FadeIn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidCountDownHUDView::BP_CountDownColorChanged(uint8_t bIsChanged)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidCountDownHUDView", "BP_CountDownColorChanged");
    struct
    {
        uint8_t bIsChanged;
    } Parms{};
    Parms.bIsChanged = (uint8_t)bIsChanged;
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidMainHUDView::* ----
void URaidMainHUDView::ShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "ShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::PreviewRaidEntity(const struct FRaidEntityRow& InRaidEntity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "PreviewRaidEntity");
    struct
    {
        struct FRaidEntityRow InRaidEntity;
    } Parms{};
    Parms.InRaidEntity = (struct FRaidEntityRow)InRaidEntity;
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::PlayUIAudioEvent(struct FName AudioEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "PlayUIAudioEvent");
    struct
    {
        struct FName AudioEventName;
    } Parms{};
    Parms.AudioEventName = (struct FName)AudioEventName;
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnRaidStageChanged(ERaidStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnRaidStageChanged");
    struct
    {
        enum ERaidStage NewStage;
    } Parms{};
    Parms.NewStage = (enum ERaidStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnMissionSelected(struct URaidMissionItemView* MissionItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnMissionSelected");
    struct
    {
        struct URaidMissionItemView* MissionItem;
    } Parms{};
    Parms.MissionItem = (struct URaidMissionItemView*)MissionItem;
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnMissionObjectiveUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnMissionObjectiveUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnMissionCountdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnMissionCountdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnGamePlayModeChanged(EDFMGamePlayMode NewGamePlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnGamePlayModeChanged");
    struct
    {
        enum EDFMGamePlayMode NewGamePlayMode;
    } Parms{};
    Parms.NewGamePlayMode = (enum EDFMGamePlayMode)NewGamePlayMode;
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnClickedRaidReturn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnClickedRaidReturn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnClickedRaidProcess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnClickedRaidProcess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnClickedRaidCondition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnClickedRaidCondition");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnClickedExitRaid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnClickedExitRaid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::OnBuyConditionProp(uint64_t PropId, uint8_t bBuy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "OnBuyConditionProp");
    struct
    {
        uint64_t PropId;
        uint8_t bBuy;
    } Parms{};
    Parms.PropId = (uint64_t)PropId;
    Parms.bBuy = (uint8_t)bBuy;
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::HideView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "HideView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainHUDView::BPUpdateTimeLeftTxtColor(uint8_t bRed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainHUDView", "BPUpdateTimeLeftTxtColor");
    struct
    {
        uint8_t bRed;
    } Parms{};
    Parms.bRed = (uint8_t)bRed;
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidMainSideView::* ----
void URaidMainSideView::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainSideView", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainSideView::OnClickedConfirm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainSideView", "OnClickedConfirm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMainSideView::InitWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMainSideView", "InitWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidMapHUDController::* ----
void URaidMapHUDController::UpdateEnemyStatus(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMapHUDController", "UpdateEnemyStatus");
    struct
    {
        float Delta;
    } Parms{};
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
}

void URaidMapHUDController::OnHealthDamaged(float Damage, const struct FTakeHitInfo& TakeHitInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMapHUDController", "OnHealthDamaged");
    struct
    {
        float Damage;
        struct FTakeHitInfo TakeHitInfo;
    } Parms{};
    Parms.Damage = (float)Damage;
    Parms.TakeHitInfo = (struct FTakeHitInfo)TakeHitInfo;
    this->ProcessEvent(Func, &Parms);
}

void URaidMapHUDController::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMapHUDController", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMapHUDController::OnEnemySpotted(struct AActor* SpottedEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMapHUDController", "OnEnemySpotted");
    struct
    {
        struct AActor* SpottedEnemy;
    } Parms{};
    Parms.SpottedEnemy = (struct AActor*)SpottedEnemy;
    this->ProcessEvent(Func, &Parms);
}

void URaidMapHUDController::OnAIFightAndFocusOnMe(struct ADFMCharacter* ACharacter, EAIMsgType MsgType, uint8_t bAIFocusOnMe, const struct FAIMsgExtendInfo& AIMsgExtendInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMapHUDController", "OnAIFightAndFocusOnMe");
    struct
    {
        struct ADFMCharacter* ACharacter;
        enum EAIMsgType MsgType;
        uint8_t bAIFocusOnMe;
        struct FAIMsgExtendInfo AIMsgExtendInfo;
    } Parms{};
    Parms.ACharacter = (struct ADFMCharacter*)ACharacter;
    Parms.MsgType = (enum EAIMsgType)MsgType;
    Parms.bAIFocusOnMe = (uint8_t)bAIFocusOnMe;
    Parms.AIMsgExtendInfo = (struct FAIMsgExtendInfo)AIMsgExtendInfo;
    this->ProcessEvent(Func, &Parms);
}

uint8_t URaidMapHUDController::EnemyIsOnPlayerView(struct AActor* SpottedEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMapHUDController", "EnemyIsOnPlayerView");
    struct
    {
        struct AActor* SpottedEnemy;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SpottedEnemy = (struct AActor*)SpottedEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URaidMissionCompleteView::* ----
void URaidMissionCompleteView::OnTouchEvent_Clicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMissionCompleteView", "OnTouchEvent_Clicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidMissionItemView::* ----
void URaidMissionItemView::OnRaidMissionSettlement(int32_t RaidID, int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMissionItemView", "OnRaidMissionSettlement");
    struct
    {
        int32_t RaidID;
        int32_t QuestID;
    } Parms{};
    Parms.RaidID = (int32_t)RaidID;
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void URaidMissionItemView::OnClickedMission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMissionItemView", "OnClickedMission");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidMissionItemView::BP_SwitchMissionBgState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMissionItemView", "BP_SwitchMissionBgState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidMissionTargetItemView::* ----
void URaidMissionTargetItemView::OnMissionStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidMissionTargetItemView", "OnMissionStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidPreviewHUDView::* ----
void URaidPreviewHUDView::StartMatchTeammate(int32_t RaidID, int32_t SubMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "StartMatchTeammate");
    struct
    {
        int32_t RaidID;
        int32_t SubMode;
    } Parms{};
    Parms.RaidID = (int32_t)RaidID;
    Parms.SubMode = (int32_t)SubMode;
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::ShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "ShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::SetPreviewRaidID(uint32_t RaidID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "SetPreviewRaidID");
    struct
    {
        uint32_t RaidID;
    } Parms{};
    Parms.RaidID = (uint32_t)RaidID;
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnStartMatchCheckStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnStartMatchCheckStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnNormalModeCheckStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnNormalModeCheckStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnHardModeCheckStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnHardModeCheckStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnEasyModeCheckStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnEasyModeCheckStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnClickedStartRaid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnClickedStartRaid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnClickedReturnToWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnClickedReturnToWorld");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::OnClickedRaidDetail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "OnClickedRaidDetail");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPreviewHUDView::HideView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "HideView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FRaidEntityRow URaidPreviewHUDView::GetPreviewRaidEntity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPreviewHUDView", "GetPreviewRaidEntity");
    struct
    {
        struct FRaidEntityRow ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URaidPropItemView::* ----
void URaidPropItemView::OnPropItemStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPropItemView", "OnPropItemStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidPropItemView::OnClickedPurchaseBtn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidPropItemView", "OnClickedPurchaseBtn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidScreenMarkerView::* ----
void URaidScreenMarkerView::ShowLine(uint8_t bEnableShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "ShowLine");
    struct
    {
        uint8_t bEnableShow;
    } Parms{};
    Parms.bEnableShow = (uint8_t)bEnableShow;
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetTargetMarkerAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetTargetMarkerAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetTargetInteractMarkerAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetTargetInteractMarkerAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetProtectMarkerAppearance(uint8_t bIsAim, uint8_t bNeedShowHp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetProtectMarkerAppearance");
    struct
    {
        uint8_t bIsAim;
        uint8_t bNeedShowHp;
    } Parms{};
    Parms.bIsAim = (uint8_t)bIsAim;
    Parms.bNeedShowHp = (uint8_t)bNeedShowHp;
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetNPCTeamMateMarkerAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetNPCTeamMateMarkerAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetInteractMarkerCircleProgress(float InProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetInteractMarkerCircleProgress");
    struct
    {
        float InProgress;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetInteractMarkerAppearance(EGPQuestActionMarkerType InQuestActionMarkerType, uint8_t bIsAim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetInteractMarkerAppearance");
    struct
    {
        enum EGPQuestActionMarkerType InQuestActionMarkerType;
        uint8_t bIsAim;
    } Parms{};
    Parms.InQuestActionMarkerType = (enum EGPQuestActionMarkerType)InQuestActionMarkerType;
    Parms.bIsAim = (uint8_t)bIsAim;
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetDestroyMarkerAppearanceWithHPBar(uint8_t bIsAim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetDestroyMarkerAppearanceWithHPBar");
    struct
    {
        uint8_t bIsAim;
    } Parms{};
    Parms.bIsAim = (uint8_t)bIsAim;
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetDestroyMarkerAppearance(uint8_t bIsAim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetDestroyMarkerAppearance");
    struct
    {
        uint8_t bIsAim;
    } Parms{};
    Parms.bIsAim = (uint8_t)bIsAim;
    this->ProcessEvent(Func, &Parms);
}

void URaidScreenMarkerView::SetCommomProgressHeathPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidScreenMarkerView", "SetCommomProgressHeathPercent");
    struct
    {
        float Percent;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidStageRemainTimeView::* ----
void URaidStageRemainTimeView::SetRaidGameDifficultLevelText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidStageRemainTimeView", "SetRaidGameDifficultLevelText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidStageRemainTimeView::OnClientRaidStageChanged(ERaidStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidStageRemainTimeView", "OnClientRaidStageChanged");
    struct
    {
        enum ERaidStage NewStage;
    } Parms{};
    Parms.NewStage = (enum ERaidStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidTeamHUDController::* ----
void URaidTeamHUDController::OnHurtCheckBtnStateChanged(uint8_t bIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidTeamHUDController", "OnHurtCheckBtnStateChanged");
    struct
    {
        uint8_t bIsChecked;
    } Parms{};
    Parms.bIsChecked = (uint8_t)bIsChecked;
    this->ProcessEvent(Func, &Parms);
}

// ---- UPlayerVoteItem::* ----
void UPlayerVoteItem::BPOnUpdatePlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerVoteItem", "BPOnUpdatePlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidVoteItemView::* ----
void URaidVoteItemView::UpdateVoteInfo(const struct TArray<struct FRaidVoteInfo>& RaidVoteInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteItemView", "UpdateVoteInfo");
    struct
    {
        struct TArray<struct FRaidVoteInfo> RaidVoteInfo;
    } Parms{};
    Parms.RaidVoteInfo = (struct TArray<struct FRaidVoteInfo>)RaidVoteInfo;
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteItemView::UpdateView(const struct FQuestRow& InQuestRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteItemView", "UpdateView");
    struct
    {
        struct FQuestRow InQuestRow;
    } Parms{};
    Parms.InQuestRow = (struct FQuestRow)InQuestRow;
    this->ProcessEvent(Func, &Parms);
}

// ---- URaidVoteView::* ----
void URaidVoteView::UpdateVoteInfo(struct TArray<struct FRaidVoteInfo> RaidVoteInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "UpdateVoteInfo");
    struct
    {
        struct TArray<struct FRaidVoteInfo> RaidVoteInfo;
    } Parms{};
    Parms.RaidVoteInfo = (struct TArray<struct FRaidVoteInfo>)RaidVoteInfo;
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::ShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "ShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::PlayUIAudioEvent(struct FName AudioEventName, uint8_t bPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "PlayUIAudioEvent");
    struct
    {
        struct FName AudioEventName;
        uint8_t bPlay;
    } Parms{};
    Parms.AudioEventName = (struct FName)AudioEventName;
    Parms.bPlay = (uint8_t)bPlay;
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnVoteCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnVoteCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnRaidStageChanged(ERaidStage NewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnRaidStageChanged");
    struct
    {
        enum ERaidStage NewStage;
    } Parms{};
    Parms.NewStage = (enum ERaidStage)NewStage;
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnMissionSelected(struct URaidMissionItemView* MissionItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnMissionSelected");
    struct
    {
        struct URaidMissionItemView* MissionItem;
    } Parms{};
    Parms.MissionItem = (struct URaidMissionItemView*)MissionItem;
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnDecisionCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnDecisionCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::OnClickdeConfirmButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "OnClickdeConfirmButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::InitWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "InitWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URaidVoteView::HideView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidVoteView", "HideView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URedAlertHUDView::* ----
float URedAlertHUDView::GetRedAlertEndtimestamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RedAlertHUDView", "GetRedAlertEndtimestamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ASafeHouseLevelSubSys::* ----
struct ASafeHouseLevelSubSys* ASafeHouseLevelSubSys::Get(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SafeHouseLevelSubSys", "Get");
    struct
    {
        struct UWorld* WorldContext;
        struct ASafeHouseLevelSubSys* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USeamlessTravelTestView::* ----
void USeamlessTravelTestView::OnSeamlessTravelEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SeamlessTravelTestView", "OnSeamlessTravelEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USeamlessTravelTestView::OnPostConnectDS(struct UNetConnection* InNetConnection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SeamlessTravelTestView", "OnPostConnectDS");
    struct
    {
        struct UNetConnection* InNetConnection;
    } Parms{};
    Parms.InNetConnection = (struct UNetConnection*)InNetConnection;
    this->ProcessEvent(Func, &Parms);
}

void USeamlessTravelTestView::OnClientCreateNewPlayerController(struct APlayerController* InPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SeamlessTravelTestView", "OnClientCreateNewPlayerController");
    struct
    {
        struct APlayerController* InPlayerController;
    } Parms{};
    Parms.InPlayerController = (struct APlayerController*)InPlayerController;
    this->ProcessEvent(Func, &Parms);
}

void USeamlessTravelTestView::DelaySwitchPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SeamlessTravelTestView", "DelaySwitchPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- USubGameMode_SafeHouse::* ----
void USubGameMode_SafeHouse::OnSafeHouseEnvUnloadSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubGameMode_SafeHouse", "OnSafeHouseEnvUnloadSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USubGameMode_SafeHouse::OnSafeHouseEnvLoadSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubGameMode_SafeHouse", "OnSafeHouseEnvLoadSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AWorldCruiseActor::* ----
void AWorldCruiseActor::StartTarget(struct AGPPlayerController* cpc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldCruiseActor", "StartTarget");
    struct
    {
        struct AGPPlayerController* cpc;
    } Parms{};
    Parms.cpc = (struct AGPPlayerController*)cpc;
    this->ProcessEvent(Func, &Parms);
}

void AWorldCruiseActor::EndTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldCruiseActor", "EndTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AWorldCruiseActorSpawner::* ----
void AWorldCruiseActorSpawner::Spawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldCruiseActorSpawner", "Spawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWorldCruiseActorSpawner::DoCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldCruiseActorSpawner", "DoCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
