#include "DFMQuest.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMVehicle.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPCutScene.hpp"
#include "GPGameFlow.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPQuest.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ABossEncounterQuest
void ABossEncounterQuest::PlayVoToTeam(struct FName SubtitleSeqId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BossEncounterQuest", "PlayVoToTeam");
    struct
    {
        struct FName SubtitleSeqId;
    } Parms{};
    Parms.SubtitleSeqId = (struct FName)SubtitleSeqId;
    this->ProcessEvent(Func, &Parms);
}

// ADFMQuestClientProxy
void ADFMQuestClientProxy::UpdateOnlyShowActorTags(struct TArray<struct FName>& ActorTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "UpdateOnlyShowActorTags");
    struct
    {
        struct TArray<struct FName> ActorTags;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ActorTags = Parms.ActorTags;
}

void ADFMQuestClientProxy::UpdateOnlyHideActorTags(struct TArray<struct FName>& ActorTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "UpdateOnlyHideActorTags");
    struct
    {
        struct TArray<struct FName> ActorTags;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ActorTags = Parms.ActorTags;
}

void ADFMQuestClientProxy::UpdateBannerText(const struct FText& BannerText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "UpdateBannerText");
    struct
    {
        struct FText BannerText;
    } Parms{};
    Parms.BannerText = (struct FText)BannerText;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::SetPlayerCanSwitchWeapon(uint8_t bCanSwitch, uint8_t bForAllPlayers, struct AGPCharacter* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "SetPlayerCanSwitchWeapon");
    struct
    {
        uint8_t bCanSwitch;
        uint8_t bForAllPlayers;
        struct AGPCharacter* Player;
    } Parms{};
    Parms.bCanSwitch = (uint8_t)bCanSwitch;
    Parms.bForAllPlayers = (uint8_t)bForAllPlayers;
    Parms.Player = (struct AGPCharacter*)Player;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::SetPlayerCanMove(uint8_t bCanMove, uint8_t bForAllPlayers, struct AGPCharacter* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "SetPlayerCanMove");
    struct
    {
        uint8_t bCanMove;
        uint8_t bForAllPlayers;
        struct AGPCharacter* Player;
    } Parms{};
    Parms.bCanMove = (uint8_t)bCanMove;
    Parms.bForAllPlayers = (uint8_t)bForAllPlayers;
    Parms.Player = (struct AGPCharacter*)Player;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::SetPlayerCanInteract(uint8_t bCanInteract, uint8_t bCanUseItem, uint8_t bCanDrive, uint8_t bForAllPlayers, struct AGPCharacter* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "SetPlayerCanInteract");
    struct
    {
        uint8_t bCanInteract;
        uint8_t bCanUseItem;
        uint8_t bCanDrive;
        uint8_t bForAllPlayers;
        struct AGPCharacter* Player;
    } Parms{};
    Parms.bCanInteract = (uint8_t)bCanInteract;
    Parms.bCanUseItem = (uint8_t)bCanUseItem;
    Parms.bCanDrive = (uint8_t)bCanDrive;
    Parms.bForAllPlayers = (uint8_t)bForAllPlayers;
    Parms.Player = (struct AGPCharacter*)Player;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ServerStopMedia(struct FName MediaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ServerStopMedia");
    struct
    {
        struct FName MediaName;
    } Parms{};
    Parms.MediaName = (struct FName)MediaName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ServerStartMedia(struct FName MediaName, float TotalTime, float DelayOutTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ServerStartMedia");
    struct
    {
        struct FName MediaName;
        float TotalTime;
        float DelayOutTime;
    } Parms{};
    Parms.MediaName = (struct FName)MediaName;
    Parms.TotalTime = (float)TotalTime;
    Parms.DelayOutTime = (float)DelayOutTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ServerSkipQuestCutScene(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ServerSkipQuestCutScene");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::PlayerForbidMoveAndRotate(EForbidMoveReason Reason, uint8_t bEnable, uint8_t bForAllPlayers, struct AGPCharacter* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "PlayerForbidMoveAndRotate");
    struct
    {
        enum EForbidMoveReason Reason;
        uint8_t bEnable;
        uint8_t bForAllPlayers;
        struct AGPCharacter* Player;
    } Parms{};
    Parms.Reason = (enum EForbidMoveReason)Reason;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bForAllPlayers = (uint8_t)bForAllPlayers;
    Parms.Player = (struct AGPCharacter*)Player;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnSequenceEndPlay(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnSequenceEndPlay");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnSequenceBeginPlay(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnSequenceBeginPlay");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnRep_TodId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnRep_TodId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnRep_OnlyShowActorTags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnRep_OnlyShowActorTags");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnRep_OnlyHideActorTags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnRep_OnlyHideActorTags");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnRep_BossActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnRep_BossActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnRep_BannerText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnRep_BannerText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnEndMediaInternal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnEndMediaInternal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnDFMCommonBannerShowed(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnDFMCommonBannerShowed");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::OnCgScreenViewDisplayed(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "OnCgScreenViewDisplayed");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::HideAllPlayerCharacter(uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "HideAllPlayerCharacter");
    struct
    {
        uint8_t bHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::DisplayBossStrip(uint8_t bDisplay, struct AActor* BossActor, const struct FText& StripText, float HeightOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "DisplayBossStrip");
    struct
    {
        uint8_t bDisplay;
        struct AActor* BossActor;
        struct FText StripText;
        float HeightOffset;
    } Parms{};
    Parms.bDisplay = (uint8_t)bDisplay;
    Parms.BossActor = (struct AActor*)BossActor;
    Parms.StripText = (struct FText)StripText;
    Parms.HeightOffset = (float)HeightOffset;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientStreammingFocusLocation(struct FVector AbsoluteLoc, uint8_t bFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientStreammingFocusLocation");
    struct
    {
        struct FVector AbsoluteLoc;
        uint8_t bFocus;
    } Parms{};
    Parms.AbsoluteLoc = (struct FVector)AbsoluteLoc;
    Parms.bFocus = (uint8_t)bFocus;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientStopMedia(struct FName MediaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientStopMedia");
    struct
    {
        struct FName MediaName;
    } Parms{};
    Parms.MediaName = (struct FName)MediaName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientStartMedia(struct FName MediaName, float ClientTimeOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientStartMedia");
    struct
    {
        struct FName MediaName;
        float ClientTimeOut;
    } Parms{};
    Parms.MediaName = (struct FName)MediaName;
    Parms.ClientTimeOut = (float)ClientTimeOut;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientShowHeadMarker(struct AActor* Actor, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientShowHeadMarker");
    struct
    {
        struct AActor* Actor;
        uint8_t bShow;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientShowExitIcon(uint64_t PlayerUin, struct FName Tag, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientShowExitIcon");
    struct
    {
        uint64_t PlayerUin;
        struct FName Tag;
        uint8_t bShow;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    Parms.Tag = (struct FName)Tag;
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientShowCommonTips(struct FText TipsText, float ShowTime, int64_t SpecifyPlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientShowCommonTips");
    struct
    {
        struct FText TipsText;
        float ShowTime;
        int64_t SpecifyPlayerUin;
    } Parms{};
    Parms.TipsText = (struct FText)TipsText;
    Parms.ShowTime = (float)ShowTime;
    Parms.SpecifyPlayerUin = (int64_t)SpecifyPlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientSetRotateLimit(struct AGPCharacter* Player, uint8_t bEnableLimite, struct FVector2D YawLimit, struct FVector2D PitchLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientSetRotateLimit");
    struct
    {
        struct AGPCharacter* Player;
        uint8_t bEnableLimite;
        struct FVector2D YawLimit;
        struct FVector2D PitchLimit;
    } Parms{};
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.bEnableLimite = (uint8_t)bEnableLimite;
    Parms.YawLimit = (struct FVector2D)YawLimit;
    Parms.PitchLimit = (struct FVector2D)PitchLimit;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientSequencePreSpawn(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientSequencePreSpawn");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientSendCommonEventLog(int32_t EventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientSendCommonEventLog");
    struct
    {
        int32_t EventId;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientResetSequence(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientResetSequence");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientResetPlayerMeshRelativeLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientResetPlayerMeshRelativeLoc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientReplayCurStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientReplayCurStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientQuitGame(EMatchOverReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientQuitGame");
    struct
    {
        enum EMatchOverReason Reason;
    } Parms{};
    Parms.Reason = (enum EMatchOverReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPrepareToPlayQuestCutScene(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPrepareToPlayQuestCutScene");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPreloadMedia(struct FName MediaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPreloadMedia");
    struct
    {
        struct FName MediaName;
    } Parms{};
    Parms.MediaName = (struct FName)MediaName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPlayUiAudio(struct FName AudioEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPlayUiAudio");
    struct
    {
        struct FName AudioEventName;
    } Parms{};
    Parms.AudioEventName = (struct FName)AudioEventName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPlaySequence(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPlaySequence");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPlayMusic(struct FName MusicEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPlayMusic");
    struct
    {
        struct FName MusicEventName;
    } Parms{};
    Parms.MusicEventName = (struct FName)MusicEventName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPlayGuideNounExplainUI(int32_t GuidePopWindowId, float AutoCloseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPlayGuideNounExplainUI");
    struct
    {
        int32_t GuidePopWindowId;
        float AutoCloseTime;
    } Parms{};
    Parms.GuidePopWindowId = (int32_t)GuidePopWindowId;
    Parms.AutoCloseTime = (float)AutoCloseTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPlayGuideDialogUI(int32_t DialogID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPlayGuideDialogUI");
    struct
    {
        int32_t DialogID;
    } Parms{};
    Parms.DialogID = (int32_t)DialogID;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientPlayFxEffect(struct FName EffectName, struct AGPCharacter* FxInstigator, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientPlayFxEffect");
    struct
    {
        struct FName EffectName;
        struct AGPCharacter* FxInstigator;
        struct FVector Location;
    } Parms{};
    Parms.EffectName = (struct FName)EffectName;
    Parms.FxInstigator = (struct AGPCharacter*)FxInstigator;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientMarkExit(uint64_t PlayerUin, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientMarkExit");
    struct
    {
        uint64_t PlayerUin;
        struct FName Tag;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientListenInteractorButton(uint8_t bStart, struct FName ActorTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientListenInteractorButton");
    struct
    {
        uint8_t bStart;
        struct FName ActorTag;
    } Parms{};
    Parms.bStart = (uint8_t)bStart;
    Parms.ActorTag = (struct FName)ActorTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientListenHudLoad(uint8_t bStart, struct TArray<struct FName> ViewNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientListenHudLoad");
    struct
    {
        uint8_t bStart;
        struct TArray<struct FName> ViewNames;
    } Parms{};
    Parms.bStart = (uint8_t)bStart;
    Parms.ViewNames = (struct TArray<struct FName>)ViewNames;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientHUDViewsShowedWithDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientHUDViewsShowedWithDelegate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientHUDViewsShowed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientHUDViewsShowed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientHudViewLoadedWithDelegate(struct FName ViewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientHudViewLoadedWithDelegate");
    struct
    {
        struct FName ViewName;
    } Parms{};
    Parms.ViewName = (struct FName)ViewName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientHudViewLoaded(struct FName ViewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientHudViewLoaded");
    struct
    {
        struct FName ViewName;
    } Parms{};
    Parms.ViewName = (struct FName)ViewName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientHideAllPlayerCharacter(uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientHideAllPlayerCharacter");
    struct
    {
        uint8_t bHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientFreezeStreamingLayers(struct TArray<struct FString> InLayerWildcard, uint8_t bFreeze)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientFreezeStreamingLayers");
    struct
    {
        struct TArray<struct FString> InLayerWildcard;
        uint8_t bFreeze;
    } Parms{};
    Parms.InLayerWildcard = (struct TArray<struct FString>)InLayerWildcard;
    Parms.bFreeze = (uint8_t)bFreeze;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientEnableMoveAndFire(uint8_t bCanMoveAndFire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientEnableMoveAndFire");
    struct
    {
        uint8_t bCanMoveAndFire;
    } Parms{};
    Parms.bCanMoveAndFire = (uint8_t)bCanMoveAndFire;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientDisplayGuideClickUI(int32_t GuideClickId, uint8_t bForceClick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientDisplayGuideClickUI");
    struct
    {
        int32_t GuideClickId;
        uint8_t bForceClick;
    } Parms{};
    Parms.GuideClickId = (int32_t)GuideClickId;
    Parms.bForceClick = (uint8_t)bForceClick;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientCutScenePreload(struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientCutScenePreload");
    struct
    {
        struct FName CSTag;
    } Parms{};
    Parms.CSTag = (struct FName)CSTag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientCreateExitIcon(uint64_t PlayerUin, struct FName Tag, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientCreateExitIcon");
    struct
    {
        uint64_t PlayerUin;
        struct FName Tag;
        uint8_t bShow;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    Parms.Tag = (struct FName)Tag;
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientCloseGuideDialogUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientCloseGuideDialogUI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientCloseGuideClickUI(int32_t GuideClickId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientCloseGuideClickUI");
    struct
    {
        int32_t GuideClickId;
    } Parms{};
    Parms.GuideClickId = (int32_t)GuideClickId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientChangeTodId(int32_t WeatherID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientChangeTodId");
    struct
    {
        int32_t WeatherID;
    } Parms{};
    Parms.WeatherID = (int32_t)WeatherID;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientApplyCameraModifier(struct AGPCharacter* CHARACTER, struct UCameraModifier* ModifierClass, uint8_t bAdd, uint8_t bImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientApplyCameraModifier");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct UCameraModifier* ModifierClass;
        uint8_t bAdd;
        uint8_t bImmediately;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.ModifierClass = (struct UCameraModifier*)ModifierClass;
    Parms.bAdd = (uint8_t)bAdd;
    Parms.bImmediately = (uint8_t)bImmediately;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestClientProxy::ClientAddOrRemoveScreenEffect(struct FName EffectName, uint8_t bAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestClientProxy", "ClientAddOrRemoveScreenEffect");
    struct
    {
        struct FName EffectName;
        uint8_t bAdd;
    } Parms{};
    Parms.EffectName = (struct FName)EffectName;
    Parms.bAdd = (uint8_t)bAdd;
    this->ProcessEvent(Func, &Parms);
}

// AClientPerformanceTrigger
void AClientPerformanceTrigger::SetTimeDilation(uint8_t bAddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "SetTimeDilation");
    struct
    {
        uint8_t bAddOrRemove;
    } Parms{};
    Parms.bAddOrRemove = (uint8_t)bAddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::SetScreenEffect(uint8_t bAddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "SetScreenEffect");
    struct
    {
        uint8_t bAddOrRemove;
    } Parms{};
    Parms.bAddOrRemove = (uint8_t)bAddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::SetDisableSkills(uint8_t bAddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "SetDisableSkills");
    struct
    {
        uint8_t bAddOrRemove;
    } Parms{};
    Parms.bAddOrRemove = (uint8_t)bAddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::SetAudioEvent(uint8_t bAddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "SetAudioEvent");
    struct
    {
        uint8_t bAddOrRemove;
    } Parms{};
    Parms.bAddOrRemove = (uint8_t)bAddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::ResetTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "ResetTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::RemoveEffects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "RemoveEffects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::OnTriggerOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "OnTriggerOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::OnTriggerOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "OnTriggerOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::CheckPlayerStillInTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "CheckPlayerStillInTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AClientPerformanceTrigger::AddEffects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPerformanceTrigger", "AddEffects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMQuestActionLib
void UDFMQuestActionLib::QA_VehicleStartAutoDrive(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float ExpectVelocity, float ExpectDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_VehicleStartAutoDrive");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        float ExpectVelocity;
        float ExpectDuration;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.ExpectVelocity = (float)ExpectVelocity;
    Parms.ExpectDuration = (float)ExpectDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_VehicleAIStartDramaArea(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName DramaTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_VehicleAIStartDramaArea");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        struct FName DramaTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.DramaTag = (struct FName)DramaTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_VehicleAddImpulse(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float SpeedImpulse, struct FVector SpeedDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_VehicleAddImpulse");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        float SpeedImpulse;
        struct FVector SpeedDirection;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.SpeedImpulse = (float)SpeedImpulse;
    Parms.SpeedDirection = (struct FVector)SpeedDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_UpdateOptionalObjectiveHUD(struct AGPQuestActionContext* QAContext, struct FText ObjectiveTitle, EGPQuestObjectiveHUDType InMissionType, int32_t OptionalObjecitveIndex, EGPQuestOptionalObjectiveOperationType ObjectiveState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_UpdateOptionalObjectiveHUD");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText ObjectiveTitle;
        enum EGPQuestObjectiveHUDType InMissionType;
        int32_t OptionalObjecitveIndex;
        enum EGPQuestOptionalObjectiveOperationType ObjectiveState;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ObjectiveTitle = (struct FText)ObjectiveTitle;
    Parms.InMissionType = (enum EGPQuestObjectiveHUDType)InMissionType;
    Parms.OptionalObjecitveIndex = (int32_t)OptionalObjecitveIndex;
    Parms.ObjectiveState = (enum EGPQuestOptionalObjectiveOperationType)ObjectiveState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialUpdateOnlyShowActorTags(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ActorTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialUpdateOnlyShowActorTags");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> ActorTags;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorTags = (struct TArray<struct FName>)ActorTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialUpdateOnlyHideActorTags(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ActorTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialUpdateOnlyHideActorTags");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> ActorTags;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorTags = (struct TArray<struct FName>)ActorTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialUnLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialUnLockLuaHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> LuaHUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.LuaHUDPanelNames = (struct TArray<struct FString>)LuaHUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialUnLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialUnLockHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> HUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HUDPanelNames = (struct TArray<struct FName>)HUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialSwitchToDefaultKeySettings(struct AGPQuestActionContext* QAContext, uint8_t bUseDefault)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialSwitchToDefaultKeySettings");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bUseDefault;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bUseDefault = (uint8_t)bUseDefault;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialShowGuidePopWindowUI(struct AGPQuestActionContext* QAContext, int32_t GuidePopWindowId, struct FName GuideAudio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialShowGuidePopWindowUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t GuidePopWindowId;
        struct FName GuideAudio;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GuidePopWindowId = (int32_t)GuidePopWindowId;
    Parms.GuideAudio = (struct FName)GuideAudio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialShowGuidePopTipsUI(struct AGPQuestActionContext* QAContext, int32_t GuidePopTipsId, struct FName GuideAudio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialShowGuidePopTipsUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t GuidePopTipsId;
        struct FName GuideAudio;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GuidePopTipsId = (int32_t)GuidePopTipsId;
    Parms.GuideAudio = (struct FName)GuideAudio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialShowGuidePopButtonUI(struct AGPQuestActionContext* QAContext, struct FString ButtonWord)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialShowGuidePopButtonUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString ButtonWord;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ButtonWord = (struct FString)ButtonWord;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialShowGuideDialogUI(struct AGPQuestActionContext* QAContext, int32_t DialogID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialShowGuideDialogUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t DialogID;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DialogID = (int32_t)DialogID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialShowGuideClickUI(struct AGPQuestActionContext* QAContext, int32_t GuideClickId, uint8_t bForceClick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialShowGuideClickUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t GuideClickId;
        uint8_t bForceClick;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GuideClickId = (int32_t)GuideClickId;
    Parms.bForceClick = (uint8_t)bForceClick;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialSetPlayerStart(struct AGPQuestActionContext* QAContext, struct FName QATag_NewPlayerStartTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialSetPlayerStart");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_NewPlayerStartTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_NewPlayerStartTag = (struct FName)QATag_NewPlayerStartTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialSetListenMapTargetClick(struct AGPQuestActionContext* QAContext, uint8_t bListen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialSetListenMapTargetClick");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bListen;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bListen = (uint8_t)bListen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialSetCustomRooleteeMedItem(struct AGPQuestActionContext* QAContext, int64_t MedItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialSetCustomRooleteeMedItem");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int64_t MedItemId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MedItemId = (int64_t)MedItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialRemindEscape(struct AGPQuestActionContext* QAContext, uint8_t bOpenRemind)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialRemindEscape");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bOpenRemind;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bOpenRemind = (uint8_t)bOpenRemind;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialLockLuaHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> LuaHUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.LuaHUDPanelNames = (struct TArray<struct FString>)LuaHUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialLockHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> HUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HUDPanelNames = (struct TArray<struct FName>)HUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialDisableInputAction(struct AGPQuestActionContext* QAContext, EQAInputActionType ActionType, uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialDisableInputAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQAInputActionType ActionType;
        uint8_t bDisable;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActionType = (enum EQAInputActionType)ActionType;
    Parms.bDisable = (uint8_t)bDisable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TutorialChangeGuidePopButtonUIStrengh(struct AGPQuestActionContext* QAContext, uint8_t bStrong)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TutorialChangeGuidePopButtonUIStrengh");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bStrong;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bStrong = (uint8_t)bStrong;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TryKnockBackCharacter(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* Maker, struct ADFMCharacter* Taker, uint8_t bOveridePosition, struct FVector WeaponPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TryKnockBackCharacter");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ADFMCharacter* Maker;
        struct ADFMCharacter* Taker;
        uint8_t bOveridePosition;
        struct FVector WeaponPosition;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Maker = (struct ADFMCharacter*)Maker;
    Parms.Taker = (struct ADFMCharacter*)Taker;
    Parms.bOveridePosition = (uint8_t)bOveridePosition;
    Parms.WeaponPosition = (struct FVector)WeaponPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TeleportVehicleToTargetSpot(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName TargetSpotTag, float SpeedImpulse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TeleportVehicleToTargetSpot");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        struct FName TargetSpotTag;
        float SpeedImpulse;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.TargetSpotTag = (struct FName)TargetSpotTag;
    Parms.SpeedImpulse = (float)SpeedImpulse;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TeleportOnePlayerOnVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName SeatName, int32_t PlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TeleportOnePlayerOnVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        struct FName SeatName;
        int32_t PlayerIndex;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.SeatName = (struct FName)SeatName;
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TeleportOneCharacterOnVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName SeatName, struct AGPCharacter* TargetCharacter, uint8_t isTeleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TeleportOneCharacterOnVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        struct FName SeatName;
        struct AGPCharacter* TargetCharacter;
        uint8_t isTeleport;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.SeatName = (struct FName)SeatName;
    Parms.TargetCharacter = (struct AGPCharacter*)TargetCharacter;
    Parms.isTeleport = (uint8_t)isTeleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TeleportCharacterToTargetSpot(struct AGPQuestActionContext* QAContext, struct AGPCharacter* InCharacter, struct FName TargetSpotTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TeleportCharacterToTargetSpot");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* InCharacter;
        struct FName TargetSpotTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InCharacter = (struct AGPCharacter*)InCharacter;
    Parms.TargetSpotTag = (struct FName)TargetSpotTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_TeleportAllPlayersOnVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float ExpectVelocity, float ExpectDuration, uint8_t IsLeaderDrive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_TeleportAllPlayersOnVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        float ExpectVelocity;
        float ExpectDuration;
        uint8_t IsLeaderDrive;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.ExpectVelocity = (float)ExpectVelocity;
    Parms.ExpectDuration = (float)ExpectDuration;
    Parms.IsLeaderDrive = (uint8_t)IsLeaderDrive;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_StopTaggedTimer(struct AGPQuestActionContext* QAContext, struct FName TimerTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_StopTaggedTimer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName TimerTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TimerTag = (struct FName)TimerTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_StopListenChaseTarget(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, struct FName QATag_TargetTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_StopListenChaseTarget");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* TargetClass;
        struct FName QATag_TargetTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetClass = (struct AActor*)TargetClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_StopAudio(struct AGPQuestActionContext* QAContext, struct FName AudioName, int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_StopAudio");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AudioName;
        int32_t TransitionMS;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AudioName = (struct FName)AudioName;
    Parms.TransitionMS = (int32_t)TransitionMS;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FName UDFMQuestActionLib::QA_StartDramaArea(struct AGPQuestActionContext* QAContext, struct FName DramaTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_StartDramaArea");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName DramaTag;
        struct FName ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DramaTag = (struct FName)DramaTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestActionLib::QA_SpawnVehicleByDramaArea(struct AGPQuestActionContext* QAContext, struct FName DramaTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SpawnVehicleByDramaArea");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName DramaTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DramaTag = (struct FName)DramaTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SpawnVehicle(struct AGPQuestActionContext* QAContext, struct FName SpawnerTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SpawnVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SpawnerTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SpawnerTag = (struct FName)SpawnerTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ShowBanner(struct AGPQuestActionContext* QAContext, struct FText BannerText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ShowBanner");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText BannerText;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.BannerText = (struct FText)BannerText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetVehicleCampAndTeam(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, int32_t NewCampId, int32_t NewTeamId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetVehicleCampAndTeam");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        int32_t NewCampId;
        int32_t NewTeamId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.NewCampId = (int32_t)NewCampId;
    Parms.NewTeamId = (int32_t)NewTeamId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerRotateLimit(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, uint8_t bEnableLimit, struct FVector2D YawLimit, struct FVector2D PitchLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerRotateLimit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        uint8_t bEnableLimit;
        struct FVector2D YawLimit;
        struct FVector2D PitchLimit;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.bEnableLimit = (uint8_t)bEnableLimit;
    Parms.YawLimit = (struct FVector2D)YawLimit;
    Parms.PitchLimit = (struct FVector2D)PitchLimit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerRelaxIdleState(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, uint8_t bIsRelaxIdle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerRelaxIdleState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        uint8_t bIsRelaxIdle;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.bIsRelaxIdle = (uint8_t)bIsRelaxIdle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerHealthAndArmorPercent(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, float NewHealthPercent, float NewArmorPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerHealthAndArmorPercent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        float NewHealthPercent;
        float NewArmorPercent;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.NewHealthPercent = (float)NewHealthPercent;
    Parms.NewArmorPercent = (float)NewArmorPercent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerForbidMoveAndRotate(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, EForbidMoveReason Reason, uint8_t bEnable, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerForbidMoveAndRotate");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* SpecialPlayer;
        enum EForbidMoveReason Reason;
        uint8_t bEnable;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SpecialPlayer = (struct AGPCharacter*)SpecialPlayer;
    Parms.Reason = (enum EForbidMoveReason)Reason;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerCanSwitchWeapon(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, uint8_t bCanSwitchWeapon, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerCanSwitchWeapon");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* SpecialPlayer;
        uint8_t bCanSwitchWeapon;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SpecialPlayer = (struct AGPCharacter*)SpecialPlayer;
    Parms.bCanSwitchWeapon = (uint8_t)bCanSwitchWeapon;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerCanMove(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, uint8_t bCanMove, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerCanMove");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* SpecialPlayer;
        uint8_t bCanMove;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SpecialPlayer = (struct AGPCharacter*)SpecialPlayer;
    Parms.bCanMove = (uint8_t)bCanMove;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerCanInteract(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, uint8_t bCanInteract, uint8_t bCanUseItem, uint8_t bCanDrive, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerCanInteract");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* SpecialPlayer;
        uint8_t bCanInteract;
        uint8_t bCanUseItem;
        uint8_t bCanDrive;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SpecialPlayer = (struct AGPCharacter*)SpecialPlayer;
    Parms.bCanInteract = (uint8_t)bCanInteract;
    Parms.bCanUseItem = (uint8_t)bCanUseItem;
    Parms.bCanDrive = (uint8_t)bCanDrive;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerCanFire(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, uint8_t bEnable, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerCanFire");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* PlayerController;
        uint8_t bEnable;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetPlayerCameraRotationScale(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, float ratio, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetPlayerCameraRotationScale");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* PlayerController;
        float ratio;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.ratio = (float)ratio;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetObjectiveTitleWithTimeOut(struct AGPQuestActionContext* QAContext, struct FText InText, EGPQuestObjectiveHUDType InMissionHUDType, ESubtitleSequenceType SubtitleSeqType, struct TArray<struct FName> SubtitleSeqIds, struct AActor* SpeakerActor, float TimeOutSeconds, uint8_t bLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetObjectiveTitleWithTimeOut");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InText;
        enum EGPQuestObjectiveHUDType InMissionHUDType;
        enum ESubtitleSequenceType SubtitleSeqType;
        struct TArray<struct FName> SubtitleSeqIds;
        struct AActor* SpeakerActor;
        float TimeOutSeconds;
        uint8_t bLoop;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InText = (struct FText)InText;
    Parms.InMissionHUDType = (enum EGPQuestObjectiveHUDType)InMissionHUDType;
    Parms.SubtitleSeqType = (enum ESubtitleSequenceType)SubtitleSeqType;
    Parms.SubtitleSeqIds = (struct TArray<struct FName>)SubtitleSeqIds;
    Parms.SpeakerActor = (struct AActor*)SpeakerActor;
    Parms.TimeOutSeconds = (float)TimeOutSeconds;
    Parms.bLoop = (uint8_t)bLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetObjectiveTitleWithHealthBar(struct AGPQuestActionContext* QAContext, struct FText ObjectiveTitle, EGPQuestObjectiveHUDType InMissionType, struct AActor* ActorClass, struct FName QATag_TargetTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetObjectiveTitleWithHealthBar");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText ObjectiveTitle;
        enum EGPQuestObjectiveHUDType InMissionType;
        struct AActor* ActorClass;
        struct FName QATag_TargetTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ObjectiveTitle = (struct FText)ObjectiveTitle;
    Parms.InMissionType = (enum EGPQuestObjectiveHUDType)InMissionType;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetNetWorkForVehicleAutoDriving(struct AGPQuestActionContext* QAContext, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetNetWorkForVehicleAutoDriving");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bEnable;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetGamingAreaActivate(struct AGPQuestActionContext* QAContext, struct FName GamingAreaTag, uint8_t bActivate, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetGamingAreaActivate");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName GamingAreaTag;
        uint8_t bActivate;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GamingAreaTag = (struct FName)GamingAreaTag;
    Parms.bActivate = (uint8_t)bActivate;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetCurrentAITemplateTable(struct AGPQuestActionContext* QAContext, struct UDataTable* NpcTemplateTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetCurrentAITemplateTable");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UDataTable* NpcTemplateTable;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.NpcTemplateTable = (struct UDataTable*)NpcTemplateTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SetCarryBodyBoxLooted(struct AGPQuestActionContext* QAContext, struct AInventoryPickup_DeadBody* CarryBodyBox, uint8_t bLooted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SetCarryBodyBoxLooted");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AInventoryPickup_DeadBody* CarryBodyBox;
        uint8_t bLooted;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CarryBodyBox = (struct AInventoryPickup_DeadBody*)CarryBodyBox;
    Parms.bLooted = (uint8_t)bLooted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SendStartAutoDriveEventToAllPlayers(struct AGPQuestActionContext* QAContext, float ExpectVelocity, float ExpectDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SendStartAutoDriveEventToAllPlayers");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        float ExpectVelocity;
        float ExpectDuration;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ExpectVelocity = (float)ExpectVelocity;
    Parms.ExpectDuration = (float)ExpectDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_SendInteractionTag(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, struct FGameplayTag OperatorTag, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_SendInteractionTag");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* PlayerController;
        struct FGameplayTag OperatorTag;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.OperatorTag = (struct FGameplayTag)OperatorTag;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetQLevel(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetQLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetPlayerAbility(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetPlayerAbility");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetMulticast(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetMulticast");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetForReplayStage(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetForReplayStage");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetAllVehicle(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetAllVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetAllSubtitles(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetAllSubtitles");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetAllPlayerIdleState(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetAllPlayerIdleState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetAllPlayer(struct AGPQuestActionContext* QAContext, struct FGameplayTag FSMGlobalEvent, uint8_t bDetachFromActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetAllPlayer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FGameplayTag FSMGlobalEvent;
        uint8_t bDetachFromActor;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.FSMGlobalEvent = (struct FGameplayTag)FSMGlobalEvent;
    Parms.bDetachFromActor = (uint8_t)bDetachFromActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetAllAliveAiAndLabAi(struct AGPQuestActionContext* QAContext, EGPQuestActionScope Scope, uint8_t bResetRobortAi, uint8_t bResetLabAi, uint8_t bResetPlayerAi)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetAllAliveAiAndLabAi");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EGPQuestActionScope Scope;
        uint8_t bResetRobortAi;
        uint8_t bResetLabAi;
        uint8_t bResetPlayerAi;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.bResetRobortAi = (uint8_t)bResetRobortAi;
    Parms.bResetLabAi = (uint8_t)bResetLabAi;
    Parms.bResetPlayerAi = (uint8_t)bResetPlayerAi;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ResetAllAI(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ResetAllAI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_RemoveCharacterBuffDisableTag(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, EBuffDisableTag BuffDisableTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_RemoveCharacterBuffDisableTag");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        enum EBuffDisableTag BuffDisableTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.BuffDisableTag = (enum EBuffDisableTag)BuffDisableTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_RemoveBuff(struct AGPQuestActionContext* QAContext, int32_t BuffId, struct TArray<struct AActor*> PlayerCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_RemoveBuff");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t BuffId;
        struct TArray<struct AActor*> PlayerCharacters;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.BuffId = (int32_t)BuffId;
    Parms.PlayerCharacters = (struct TArray<struct AActor*>)PlayerCharacters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_RemoveAllPlayerWeapon(struct AGPQuestActionContext* QAContext, int64_t WeaponItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_RemoveAllPlayerWeapon");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int64_t WeaponItemId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.WeaponItemId = (int64_t)WeaponItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ReleasePlayerLocation(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ReleasePlayerLocation");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_RebornAllPlayer(struct AGPQuestActionContext* QAContext, uint8_t ResetAlivePlayerPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_RebornAllPlayer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t ResetAlivePlayerPosition;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ResetAlivePlayerPosition = (uint8_t)ResetAlivePlayerPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_RaidStopStageTimeLimit(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_RaidStopStageTimeLimit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_RaidNewStartPlayerAll(struct AGPQuestActionContext* QAContext, struct FName StartSpotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_RaidNewStartPlayerAll");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName StartSpotName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.StartSpotName = (struct FName)StartSpotName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayUiAudio(struct AGPQuestActionContext* QAContext, struct FName AudioEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayUiAudio");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AudioEventName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AudioEventName = (struct FName)AudioEventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlaySubtitleNoticeWithTeamIds(struct AGPQuestActionContext* QAContext, ESubtitleSequenceType SubtitleSequenceType, struct FName SubtitleSequenceId, struct TArray<int32_t> TeamIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlaySubtitleNoticeWithTeamIds");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum ESubtitleSequenceType SubtitleSequenceType;
        struct FName SubtitleSequenceId;
        struct TArray<int32_t> TeamIds;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SubtitleSequenceType = (enum ESubtitleSequenceType)SubtitleSequenceType;
    Parms.SubtitleSequenceId = (struct FName)SubtitleSequenceId;
    Parms.TeamIds = (struct TArray<int32_t>)TeamIds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlaySubtitleNoticeToNonContractTeams(struct AGPQuestActionContext* QAContext, ESubtitleSequenceType SubtitleSequenceType, struct FName SubtitleSequenceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlaySubtitleNoticeToNonContractTeams");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum ESubtitleSequenceType SubtitleSequenceType;
        struct FName SubtitleSequenceId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SubtitleSequenceType = (enum ESubtitleSequenceType)SubtitleSequenceType;
    Parms.SubtitleSequenceId = (struct FName)SubtitleSequenceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlaySubtitleNotice(struct AGPQuestActionContext* QAContext, ESubtitleSequenceType SubtitleSequenceType, struct FName SubtitleSequenceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlaySubtitleNotice");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum ESubtitleSequenceType SubtitleSequenceType;
        struct FName SubtitleSequenceId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SubtitleSequenceType = (enum ESubtitleSequenceType)SubtitleSequenceType;
    Parms.SubtitleSequenceId = (struct FName)SubtitleSequenceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayMusic(struct AGPQuestActionContext* QAContext, struct FName MusicEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayMusic");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName MusicEventName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MusicEventName = (struct FName)MusicEventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayExplosionEffect(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, EExplosionType ExplosionType, struct FVector ExplosionLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayExplosionEffect");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* GPCharacter;
        enum EExplosionType ExplosionType;
        struct FVector ExplosionLocation;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    Parms.ExplosionType = (enum EExplosionType)ExplosionType;
    Parms.ExplosionLocation = (struct FVector)ExplosionLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayerTryToStopSkill(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayerTryToStopSkill");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        int32_t SkillId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.SkillId = (int32_t)SkillId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayerTryStandUp(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayerTryStandUp");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayersGetOffFromVehicle(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayersGetOffFromVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* PlayerController;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayersDetachFromActor(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayersDetachFromActor");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayersAttachToActor(struct AGPQuestActionContext* QAContext, struct FName QATag, struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayersAttachToActor");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag;
        struct AActor* ActorClass;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag = (struct FName)QATag;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayerModifyAmmo(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, float Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayerModifyAmmo");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        float Val;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.Val = (float)Val;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayAudio3D(struct AGPQuestActionContext* QAContext, struct FName AudioName, struct FVector PlayingLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayAudio3D");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AudioName;
        struct FVector PlayingLocation;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AudioName = (struct FName)AudioName;
    Parms.PlayingLocation = (struct FVector)PlayingLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_PlayAudio2D(struct AGPQuestActionContext* QAContext, struct FName AudioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_PlayAudio2D");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AudioName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AudioName = (struct FName)AudioName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_OverridePlayerSpeedAndPose(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, EOverrideMovementType Pose, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_OverridePlayerSpeedAndPose");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* PlayerController;
        enum EOverrideMovementType Pose;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.Pose = (enum EOverrideMovementType)Pose;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_MulticastPlayFxEffect(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Instigator, struct FName EffectName, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_MulticastPlayFxEffect");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Instigator;
        struct FName EffectName;
        struct FVector Location;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Instigator = (struct AGPCharacter*)Instigator;
    Parms.EffectName = (struct FName)EffectName;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_MulticastAddOrRemoveScreenEffect(struct AGPQuestActionContext* QAContext, struct FName EffectName, uint8_t bAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_MulticastAddOrRemoveScreenEffect");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName EffectName;
        uint8_t bAdd;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.EffectName = (struct FName)EffectName;
    Parms.bAdd = (uint8_t)bAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_KillVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_KillVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_KillAI(struct AGPQuestActionContext* QAContext, struct FName AISpawnTag, EQAKillAIType QAType, int32_t MaxKilledNumPerFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_KillAI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AISpawnTag;
        enum EQAKillAIType QAType;
        int32_t MaxKilledNumPerFrame;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AISpawnTag = (struct FName)AISpawnTag;
    Parms.QAType = (enum EQAKillAIType)QAType;
    Parms.MaxKilledNumPerFrame = (int32_t)MaxKilledNumPerFrame;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_IntroClientShowPanel(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames, uint8_t bDisplay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_IntroClientShowPanel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> HUDPanelNames;
        uint8_t bDisplay;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HUDPanelNames = (struct TArray<struct FName>)HUDPanelNames;
    Parms.bDisplay = (uint8_t)bDisplay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_HideOrShowActorByTag(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ActorTags, uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_HideOrShowActorByTag");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> ActorTags;
        uint8_t bHide;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorTags = (struct TArray<struct FName>)ActorTags;
    Parms.bHide = (uint8_t)bHide;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_HelicopterChangePathState(struct AGPQuestActionContext* QAContext, int32_t PathState, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_HelicopterChangePathState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t PathState;
        struct FName Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PathState = (int32_t)PathState;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UDFMQuestActionLib::QA_GetWeaponCountsFromPlayer(struct AGPQuestActionContext* QAContext, int64_t WeaponItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_GetWeaponCountsFromPlayer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int64_t WeaponItemId;
        int32_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.WeaponItemId = (int64_t)WeaponItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UDFMQuestActionLib::QA_GetSocketAttachmentFromActor(struct AGPQuestActionContext* QAContext, struct AActor* Actor, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_GetSocketAttachmentFromActor");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* Actor;
        struct FName SocketName;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Actor = (struct AActor*)Actor;
    Parms.SocketName = (struct FName)SocketName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AInventoryPickup_DeadBody* UDFMQuestActionLib::QA_GetDeadBodyBoxOfCharacter(struct AGPQuestActionContext* QAContext, struct FName DeadCharacterTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_GetDeadBodyBoxOfCharacter");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName DeadCharacterTag;
        enum EGPQuestActionScope Scope;
        struct AInventoryPickup_DeadBody* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DeadCharacterTag = (struct FName)DeadCharacterTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UDFMQuestActionLib::QA_GetCharacterItemTypeOnAttachPosition(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* Target, EItemMainType ItemType, int32_t pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_GetCharacterItemTypeOnAttachPosition");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ADFMCharacter* Target;
        enum EItemMainType ItemType;
        int32_t pos;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Target = (struct ADFMCharacter*)Target;
    Parms.ItemType = (enum EItemMainType)ItemType;
    Parms.pos = (int32_t)pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AInventoryPickup_DeadBody* UDFMQuestActionLib::QA_GetCarryBodyBoxOfCharacter(struct AGPQuestActionContext* QAContext, struct FName DeadCharacterTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_GetCarryBodyBoxOfCharacter");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName DeadCharacterTag;
        enum EGPQuestActionScope Scope;
        struct AInventoryPickup_DeadBody* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DeadCharacterTag = (struct FName)DeadCharacterTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestActionLib::QA_FocusPlayerLocation(struct AGPQuestActionContext* QAContext, const struct FVector& InAbsoluteLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_FocusPlayerLocation");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FVector InAbsoluteLocation;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InAbsoluteLocation = (struct FVector)InAbsoluteLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_EggUnLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggUnLockLuaHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> LuaHUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.LuaHUDPanelNames = (struct TArray<struct FString>)LuaHUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_EggUnLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggUnLockHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> HUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HUDPanelNames = (struct TArray<struct FName>)HUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct AInventoryPickup_EggGoldenNest* UDFMQuestActionLib::QA_EggSpawnGoldenNestForPlayer(struct AGPQuestActionContext* QAContext, struct AInventoryPickup_EggGoldenNest* GoldenNestClass, struct FName ItemID, struct FString ItemUniqueId, struct FVector Location, struct FRotator Rotation, struct AGPCharacter* OwnerPlayer, struct FName TagToAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggSpawnGoldenNestForPlayer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AInventoryPickup_EggGoldenNest* GoldenNestClass;
        struct FName ItemID;
        struct FString ItemUniqueId;
        struct FVector Location;
        struct FRotator Rotation;
        struct AGPCharacter* OwnerPlayer;
        struct FName TagToAdd;
        struct AInventoryPickup_EggGoldenNest* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GoldenNestClass = (struct AInventoryPickup_EggGoldenNest*)GoldenNestClass;
    Parms.ItemID = (struct FName)ItemID;
    Parms.ItemUniqueId = (struct FString)ItemUniqueId;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.OwnerPlayer = (struct AGPCharacter*)OwnerPlayer;
    Parms.TagToAdd = (struct FName)TagToAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestActionLib::QA_EggLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggLockLuaHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> LuaHUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.LuaHUDPanelNames = (struct TArray<struct FString>)LuaHUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_EggLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggLockHudPanels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> HUDPanelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HUDPanelNames = (struct TArray<struct FName>)HUDPanelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_EggDisableInputAction(struct AGPQuestActionContext* QAContext, EQAInputActionType ActionType, uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggDisableInputAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQAInputActionType ActionType;
        uint8_t bDisable;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActionType = (enum EQAInputActionType)ActionType;
    Parms.bDisable = (uint8_t)bDisable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_EggClientEnterOrLeaveEggLevel(struct AGPQuestActionContext* QAContext, uint8_t bEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_EggClientEnterOrLeaveEggLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bEnter;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bEnter = (uint8_t)bEnter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_DisplayGuideClickUI(struct AGPQuestActionContext* QAContext, int32_t GuideClickId, uint8_t bForceClick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_DisplayGuideClickUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t GuideClickId;
        uint8_t bForceClick;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GuideClickId = (int32_t)GuideClickId;
    Parms.bForceClick = (uint8_t)bForceClick;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_DisplayBossBloodStrip(struct AGPQuestActionContext* QAContext, uint8_t bDisplay, struct AActor* BossActor, const struct FText& StripText, float HeightOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_DisplayBossBloodStrip");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bDisplay;
        struct AActor* BossActor;
        struct FText StripText;
        float HeightOffset;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bDisplay = (uint8_t)bDisplay;
    Parms.BossActor = (struct AActor*)BossActor;
    Parms.StripText = (struct FText)StripText;
    Parms.HeightOffset = (float)HeightOffset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_DisableActorVisualAndCollision(struct AGPQuestActionContext* QAContext, struct UObject* ActorClass, struct FName ActorTag, uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_DisableActorVisualAndCollision");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UObject* ActorClass;
        struct FName ActorTag;
        uint8_t bDisable;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct UObject*)ActorClass;
    Parms.ActorTag = (struct FName)ActorTag;
    Parms.bDisable = (uint8_t)bDisable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_DestroyAIVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_DestroyAIVehicle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_DeactivateFXProxyActors(struct AGPQuestActionContext* QAContext, struct FName ActorTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_DeactivateFXProxyActors");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName ActorTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorTag = (struct FName)ActorTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_CommonTips(struct AGPQuestActionContext* QAContext, struct FText InTipsText, float ShowTime, int64_t SpecifyPlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CommonTips");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InTipsText;
        float ShowTime;
        int64_t SpecifyPlayerUin;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InTipsText = (struct FText)InTipsText;
    Parms.ShowTime = (float)ShowTime;
    Parms.SpecifyPlayerUin = (int64_t)SpecifyPlayerUin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_CloseGuideClickUI(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CloseGuideClickUI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientStreammingFocusPoint(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, uint8_t bFocus, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientStreammingFocusPoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        uint8_t bFocus;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.bFocus = (uint8_t)bFocus;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientStreammingFocusLoc(struct AGPQuestActionContext* QAContext, struct FVector AbsoluteLoc, uint8_t bFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientStreammingFocusLoc");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FVector AbsoluteLoc;
        uint8_t bFocus;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AbsoluteLoc = (struct FVector)AbsoluteLoc;
    Parms.bFocus = (uint8_t)bFocus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientShowHUDPanel(struct AGPQuestActionContext* QAContext, struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientShowHUDPanel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName PanelConfigName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientShowHeadMarker(struct AGPQuestActionContext* QAContext, struct FName ActorTag, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientShowHeadMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName ActorTag;
        uint8_t bShow;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorTag = (struct FName)ActorTag;
    Parms.bShow = (uint8_t)bShow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientSequencePreSpawn(struct AGPQuestActionContext* QAContext, struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientSequencePreSpawn");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName CSTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CSTag = (struct FName)CSTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientSendEventLogPlatform(struct AGPQuestActionContext* QAContext, int32_t PCEventId, int32_t MobileEventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientSendEventLogPlatform");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t PCEventId;
        int32_t MobileEventId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PCEventId = (int32_t)PCEventId;
    Parms.MobileEventId = (int32_t)MobileEventId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientSendCommonEventLog(struct AGPQuestActionContext* QAContext, int32_t EventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientSendCommonEventLog");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t EventId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.EventId = (int32_t)EventId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientResetSequence(struct AGPQuestActionContext* QAContext, struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientResetSequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName CSTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CSTag = (struct FName)CSTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientResetPlayerMesh(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientResetPlayerMesh");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientRemoveGameHudState(struct AGPQuestActionContext* QAContext, EGameHUDSate State, uint8_t bForceRefresh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientRemoveGameHudState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EGameHUDSate State;
        uint8_t bForceRefresh;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.State = (enum EGameHUDSate)State;
    Parms.bForceRefresh = (uint8_t)bForceRefresh;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientPlaySequence(struct AGPQuestActionContext* QAContext, struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientPlaySequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName CSTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CSTag = (struct FName)CSTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientHUDPanelsOperateGameHudState(struct AGPQuestActionContext* QAContext, const struct TArray<struct FName>& PanelConfigNames, EGameHUDSate State, EVisibleGameHUDStateOperators Operator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientHUDPanelsOperateGameHudState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> PanelConfigNames;
        enum EGameHUDSate State;
        enum EVisibleGameHUDStateOperators Operator;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PanelConfigNames = (struct TArray<struct FName>)PanelConfigNames;
    Parms.State = (enum EGameHUDSate)State;
    Parms.Operator = (enum EVisibleGameHUDStateOperators)Operator;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientHideHUDPanel(struct AGPQuestActionContext* QAContext, struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientHideHUDPanel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName PanelConfigName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientHideActorInGame(struct AGPQuestActionContext* QAContext, struct UObject* ActorClass, struct FName ActorTag, uint8_t bHideInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientHideActorInGame");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UObject* ActorClass;
        struct FName ActorTag;
        uint8_t bHideInGame;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct UObject*)ActorClass;
    Parms.ActorTag = (struct FName)ActorTag;
    Parms.bHideInGame = (uint8_t)bHideInGame;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientFreezeStreamingLayers(struct AGPQuestActionContext* QAContext, const struct TArray<struct FString>& InLayerWildcard, uint8_t bFreeze)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientFreezeStreamingLayers");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> InLayerWildcard;
        uint8_t bFreeze;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InLayerWildcard = (struct TArray<struct FString>)InLayerWildcard;
    Parms.bFreeze = (uint8_t)bFreeze;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientCutScenePreload(struct AGPQuestActionContext* QAContext, struct FName CSTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientCutScenePreload");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName CSTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CSTag = (struct FName)CSTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClientAddGameHudState(struct AGPQuestActionContext* QAContext, EGameHUDSate State, uint8_t bForceRefresh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClientAddGameHudState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EGameHUDSate State;
        uint8_t bForceRefresh;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.State = (enum EGameHUDSate)State;
    Parms.bForceRefresh = (uint8_t)bForceRefresh;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ClearSpeedAndPoseOverride(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, uint8_t bOnAllPlayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ClearSpeedAndPoseOverride");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* PlayerController;
        uint8_t bOnAllPlayers;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.bOnAllPlayers = (uint8_t)bOnAllPlayers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_CleanVehicleAIDrama(struct AGPQuestActionContext* QAContext, struct FName VehicleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CleanVehicleAIDrama");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMQuestActionLib::QA_CheckCharacterHasItem(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* Target, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CheckCharacterHasItem");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ADFMCharacter* Target;
        struct FName ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Target = (struct ADFMCharacter*)Target;
    Parms.ItemID = (struct FName)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestActionLib::QA_CharacterRemoveBuffs(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct TArray<int32_t> ClearBuffs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CharacterRemoveBuffs");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* CHARACTER;
        struct TArray<int32_t> ClearBuffs;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.ClearBuffs = (struct TArray<int32_t>)ClearBuffs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_CharacterApplyCameraModifier(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct UCameraModifier* ModifierClass, uint8_t bAdd, uint8_t bImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CharacterApplyCameraModifier");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* CHARACTER;
        struct UCameraModifier* ModifierClass;
        uint8_t bAdd;
        uint8_t bImmediately;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.ModifierClass = (struct UCameraModifier*)ModifierClass;
    Parms.bAdd = (uint8_t)bAdd;
    Parms.bImmediately = (uint8_t)bImmediately;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ChangeTodType(struct AGPQuestActionContext* QAContext, int32_t WeatherID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ChangeTodType");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t WeatherID;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.WeatherID = (int32_t)WeatherID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_CallBPActorEvent(struct AGPQuestActionContext* QAContext, struct FName QATag, struct FString EventName, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_CallBPActorEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag;
        struct FString EventName;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag = (struct FName)QATag;
    Parms.EventName = (struct FString)EventName;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_AIStartDramaArea(struct AGPQuestActionContext* QAContext, struct FName AISpawnTag, struct FName DramaTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_AIStartDramaArea");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AISpawnTag;
        struct FName DramaTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AISpawnTag = (struct FName)AISpawnTag;
    Parms.DramaTag = (struct FName)DramaTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_AddWeaponOrAddCarrierAmmo(struct AGPQuestActionContext* QAContext, struct AActor* CharacterActor, int64_t WeaponItemId, int32_t AttachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_AddWeaponOrAddCarrierAmmo");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* CharacterActor;
        int64_t WeaponItemId;
        int32_t AttachPos;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CharacterActor = (struct AActor*)CharacterActor;
    Parms.WeaponItemId = (int64_t)WeaponItemId;
    Parms.AttachPos = (int32_t)AttachPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_AddDamageToCharacterOnSpecifyPart(struct AGPQuestActionContext* QAContext, struct AActor* CHARACTER, float HealthDamage, ECharacterPart DamagePart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_AddDamageToCharacterOnSpecifyPart");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* CHARACTER;
        float HealthDamage;
        enum ECharacterPart DamagePart;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.HealthDamage = (float)HealthDamage;
    Parms.DamagePart = (enum ECharacterPart)DamagePart;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_AddCharacterBuffDisableTag(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, EBuffDisableTag BuffDisableTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_AddCharacterBuffDisableTag");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        enum EBuffDisableTag BuffDisableTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.BuffDisableTag = (enum EBuffDisableTag)BuffDisableTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_AddBuff(struct AGPQuestActionContext* QAContext, int32_t BuffId, struct TArray<struct AActor*> PlayerCharacters, struct AActor* BuffMaker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_AddBuff");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t BuffId;
        struct TArray<struct AActor*> PlayerCharacters;
        struct AActor* BuffMaker;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.BuffId = (int32_t)BuffId;
    Parms.PlayerCharacters = (struct TArray<struct AActor*>)PlayerCharacters;
    Parms.BuffMaker = (struct AActor*)BuffMaker;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_AddAllPlayerWeapon(struct AGPQuestActionContext* QAContext, int64_t WeaponItemId, int32_t AmmoNum, int32_t AttachPos, uint8_t SwitchToThisWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_AddAllPlayerWeapon");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int64_t WeaponItemId;
        int32_t AmmoNum;
        int32_t AttachPos;
        uint8_t SwitchToThisWeapon;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.WeaponItemId = (int64_t)WeaponItemId;
    Parms.AmmoNum = (int32_t)AmmoNum;
    Parms.AttachPos = (int32_t)AttachPos;
    Parms.SwitchToThisWeapon = (uint8_t)SwitchToThisWeapon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMQuestActionLib::QA_ActivateFXProxyActors(struct AGPQuestActionContext* QAContext, struct FName ActorTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestActionLib", "QA_ActivateFXProxyActors");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName ActorTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorTag = (struct FName)ActorTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// USOLQuestActionLib
void USOLQuestActionLib::QA_UnloadQuestLevel(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_UnloadQuestLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct AAirDropGeneratorGroup* USOLQuestActionLib::QA_TriggerAirDrop(struct AGPQuestActionContext* QAContext, struct FName AirDropGroupTag, int32_t AirDropIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_TriggerAirDrop");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AirDropGroupTag;
        int32_t AirDropIndex;
        struct AAirDropGeneratorGroup* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AirDropGroupTag = (struct FName)AirDropGroupTag;
    Parms.AirDropIndex = (int32_t)AirDropIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USOLQuestActionLib::QA_ToggleExitOpenBanner(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FText ExitOpenText, ESOLUIIconType SOLUIIconType, float ExitOpenTextDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ToggleExitOpenBanner");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        struct FText ExitOpenText;
        enum ESOLUIIconType SOLUIIconType;
        float ExitOpenTextDuration;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.ExitOpenText = (struct FText)ExitOpenText;
    Parms.SOLUIIconType = (enum ESOLUIIconType)SOLUIIconType;
    Parms.ExitOpenTextDuration = (float)ExitOpenTextDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_TLogOperatePoint(struct AGPQuestActionContext* QAContext, struct FName OperatePointName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_TLogOperatePoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName OperatePointName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.OperatePointName = (struct FName)OperatePointName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_StopNPCStatusCheck(struct AGPQuestActionContext* QAContext, struct FName NPCTag, int32_t Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_StopNPCStatusCheck");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName NPCTag;
        int32_t Handle;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.NPCTag = (struct FName)NPCTag;
    Parms.Handle = (int32_t)Handle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ShowTipToClient(struct AGPQuestActionContext* QAContext, struct FText TipDes, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ShowTipToClient");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText TipDes;
        float Duration;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TipDes = (struct FText)TipDes;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ShowExitPreparationCutScene(struct AGPQuestActionContext* QAContext, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ShowExitPreparationCutScene");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetQuestObjectionDesc(struct AGPQuestActionContext* QAContext, struct FText ObjectionDes, uint8_t IsBrief)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetQuestObjectionDesc");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText ObjectionDes;
        uint8_t IsBrief;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ObjectionDes = (struct FText)ObjectionDes;
    Parms.IsBrief = (uint8_t)IsBrief;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetQuestMapRange(struct AGPQuestActionContext* QAContext, float ObjectiveRange, struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetQuestMapRange");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        float ObjectiveRange;
        struct AActor* TargetActor;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ObjectiveRange = (float)ObjectiveRange;
    Parms.TargetActor = (struct AActor*)TargetActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetOriginalPushOverDirection(struct AGPQuestActionContext* QAContext, struct FName VolumeTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetOriginalPushOverDirection");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VolumeTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VolumeTag = (struct FName)VolumeTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetLightData(struct AGPQuestActionContext* QAContext, struct FName Tag, uint8_t SwitchOn, struct FColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetLightData");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        uint8_t SwitchOn;
        struct FColor Color;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.SwitchOn = (uint8_t)SwitchOn;
    Parms.Color = (struct FColor)Color;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetInteractorTransform(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FTransform Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetInteractorTransform");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        struct FTransform Transform;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.Transform = (struct FTransform)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetInteractEnable(struct AGPQuestActionContext* QAContext, struct FName Tag, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetInteractEnable");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        uint8_t Enable;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetEnableEscapePoint(struct AGPQuestActionContext* QAContext, struct FName Tag, uint8_t Enable, float OpenCountDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetEnableEscapePoint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        uint8_t Enable;
        float OpenCountDown;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.Enable = (uint8_t)Enable;
    Parms.OpenCountDown = (float)OpenCountDown;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetContractTimeOut(struct AGPQuestActionContext* QAContext, float TimeLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetContractTimeOut");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        float TimeLimit;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TimeLimit = (float)TimeLimit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetContractNpcCloseTime(struct AGPQuestActionContext* QAContext, int32_t ContractID, int32_t CloseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetContractNpcCloseTime");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t ContractID;
        int32_t CloseTime;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ContractID = (int32_t)ContractID;
    Parms.CloseTime = (int32_t)CloseTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_SetContractBoss(struct AGPQuestActionContext* QAContext, struct FName BossTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_SetContractBoss");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName BossTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.BossTag = (struct FName)BossTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ResetQuestMapRange(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ResetQuestMapRange");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ResetContractCamp(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ResetContractCamp");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_PreloadMedia(struct AGPQuestActionContext* QAContext, struct FName MediaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_PreloadMedia");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName MediaName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MediaName = (struct FName)MediaName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_PlayRocketCutscene(struct AGPQuestActionContext* QAContext, struct FName HackPCTag, struct FName CutSceneTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_PlayRocketCutscene");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName HackPCTag;
        struct FName CutSceneTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HackPCTag = (struct FName)HackPCTag;
    Parms.CutSceneTag = (struct FName)CutSceneTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_PlayerExitByFakePayment(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, struct FName ExitTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_PlayerExitByFakePayment");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* GPCharacter;
        struct FName ExitTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    Parms.ExitTag = (struct FName)ExitTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_NtfInterruptInteract(struct AGPQuestActionContext* QAContext, struct AInteractorBase* InteractorBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_NtfInterruptInteract");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AInteractorBase* InteractorBase;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InteractorBase = (struct AInteractorBase*)InteractorBase;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_NtfDoorDestroyedForAILab(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_NtfDoorDestroyedForAILab");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_NotifySpawnAIEvent(struct AGPQuestActionContext* QAContext, struct FName NPCTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_NotifySpawnAIEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName NPCTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.NPCTag = (struct FName)NPCTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_NotifyAIEventWithOneParam(struct AGPQuestActionContext* QAContext, struct FName EventName, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_NotifyAIEventWithOneParam");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName EventName;
        struct AActor* Actor;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.EventName = (struct FName)EventName;
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_NotifyAIEvent(struct AGPQuestActionContext* QAContext, struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_NotifyAIEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName EventName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.EventName = (struct FName)EventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_NewPlayer_SetQuestObjectionDesc(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, struct FText ObjectionDes, uint8_t IsBrief)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_NewPlayer_SetQuestObjectionDesc");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* GPCharacter;
        struct FText ObjectionDes;
        uint8_t IsBrief;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    Parms.ObjectionDes = (struct FText)ObjectionDes;
    Parms.IsBrief = (uint8_t)IsBrief;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_MultiCastPreLoadLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LevelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_MultiCastPreLoadLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> LevelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.LevelNames = (struct TArray<struct FString>)LevelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_MultiCastLoadLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LevelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_MultiCastLoadLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FString> LevelNames;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.LevelNames = (struct TArray<struct FString>)LevelNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_LoadDynamicRequestLevels(struct AGPQuestActionContext* QAContext, struct FName DynamicRequestLevelGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_LoadDynamicRequestLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName DynamicRequestLevelGroupID;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DynamicRequestLevelGroupID = (struct FName)DynamicRequestLevelGroupID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_LaunchMissile(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FRotator BulletFireRot, struct FVector TargetLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_LaunchMissile");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        struct FRotator BulletFireRot;
        struct FVector TargetLoc;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.BulletFireRot = (struct FRotator)BulletFireRot;
    Parms.TargetLoc = (struct FVector)TargetLoc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

EQuestType USOLQuestActionLib::QA_GetQuestType(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetQuestType");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQuestType ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USOLQuestActionLib::QA_GetIsSeasonQuest_SOL(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetIsSeasonQuest_SOL");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USOLQuestActionLib::QA_GetIsQuest_SOL(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetIsQuest_SOL");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USOLQuestActionLib::QA_GetIsContractQuest_SOL(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetIsContractQuest_SOL");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ACHARACTER*> USOLQuestActionLib::QA_GetContractTeammates(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetContractTeammates");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct ACHARACTER*> ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ACHARACTER*> USOLQuestActionLib::QA_GetContractOtherCharacters(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetContractOtherCharacters");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct ACHARACTER*> ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t USOLQuestActionLib::QA_GetAIAliveCount(struct AGPQuestActionContext* QAContext, struct FName AITag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_GetAIAliveCount");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AITag;
        int32_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITag = (struct FName)AITag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USOLQuestActionLib::QA_DoWaterUp(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_DoWaterUp");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_CommitMissionResult(struct AGPQuestActionContext* QAContext, EGPQuestEndReason GPQuestEndReason, struct AGPCharacter* LastOperatePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_CommitMissionResult");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EGPQuestEndReason GPQuestEndReason;
        struct AGPCharacter* LastOperatePlayer;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GPQuestEndReason = (enum EGPQuestEndReason)GPQuestEndReason;
    Parms.LastOperatePlayer = (struct AGPCharacter*)LastOperatePlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ClientShowExitIcon(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct FName Tag, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ClientShowExitIcon");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* CHARACTER;
        struct FName Tag;
        uint8_t bShow;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Tag = (struct FName)Tag;
    Parms.bShow = (uint8_t)bShow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ClientCreateExitIcon(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct FName Tag, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ClientCreateExitIcon");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* CHARACTER;
        struct FName Tag;
        uint8_t bShow;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Tag = (struct FName)Tag;
    Parms.bShow = (uint8_t)bShow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ClearInteractCandidatorsByTeam(struct AGPQuestActionContext* QAContext, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ClearInteractCandidatorsByTeam");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ClearInteractCandidators(struct AGPQuestActionContext* QAContext, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ClearInteractCandidators");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ChangeContractCamp(struct AGPQuestActionContext* QAContext, ECampType CampId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ChangeContractCamp");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum ECampType CampId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CampId = (enum ECampType)CampId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_BreakC4DoorInRange(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FVector Center, float Range)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_BreakC4DoorInRange");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        struct FVector Center;
        float Range;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Center = (struct FVector)Center;
    Parms.Range = (float)Range;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_AutoMarkExit(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_AutoMarkExit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* CHARACTER;
        struct FName Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_AddMarkerOnAllActors_SOL(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName TargetTag, struct FVector OffsetLocation, float DistanceThreshold, float MarkerTimeLimit, uint8_t AlwaysTop, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_AddMarkerOnAllActors_SOL");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct AActor* TargetActorClass;
        struct FName TargetTag;
        struct FVector OffsetLocation;
        float DistanceThreshold;
        float MarkerTimeLimit;
        uint8_t AlwaysTop;
        enum EGPQuestActionMarkerType MarkerType;
        enum EGPQuestActionScope Scope;
        uint8_t ShowInBigMap;
        struct FName SocketName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.TargetActorClass = (struct AActor*)TargetActorClass;
    Parms.TargetTag = (struct FName)TargetTag;
    Parms.OffsetLocation = (struct FVector)OffsetLocation;
    Parms.DistanceThreshold = (float)DistanceThreshold;
    Parms.MarkerTimeLimit = (float)MarkerTimeLimit;
    Parms.AlwaysTop = (uint8_t)AlwaysTop;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.ShowInBigMap = (uint8_t)ShowInBigMap;
    Parms.SocketName = (struct FName)SocketName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct AGPQuestMarkerBase* USOLQuestActionLib::QA_AddMarker_SOL(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName QATag_TargetTag, struct FVector OffsetLocation, float DistanceThreshold, float MarkerTimeLimit, uint8_t AlwaysTop, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_AddMarker_SOL");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct AActor* TargetActorClass;
        struct FName QATag_TargetTag;
        struct FVector OffsetLocation;
        float DistanceThreshold;
        float MarkerTimeLimit;
        uint8_t AlwaysTop;
        enum EGPQuestActionMarkerType MarkerType;
        enum EGPQuestActionScope Scope;
        uint8_t ShowInBigMap;
        struct FName SocketName;
        struct AGPQuestMarkerBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.TargetActorClass = (struct AActor*)TargetActorClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.OffsetLocation = (struct FVector)OffsetLocation;
    Parms.DistanceThreshold = (float)DistanceThreshold;
    Parms.MarkerTimeLimit = (float)MarkerTimeLimit;
    Parms.AlwaysTop = (uint8_t)AlwaysTop;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.ShowInBigMap = (uint8_t)ShowInBigMap;
    Parms.SocketName = (struct FName)SocketName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USOLQuestActionLib::QA_ActivateTeamAllDeadBodyMarker(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ActivateTeamAllDeadBodyMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USOLQuestActionLib::QA_ActivateDeadBodyMarker(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* DFMCharacter, struct ASpawnJailBreakBody* JailBreakBody)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLQuestActionLib", "QA_ActivateDeadBodyMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ADFMCharacter* DFMCharacter;
        struct ASpawnJailBreakBody* JailBreakBody;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.JailBreakBody = (struct ASpawnJailBreakBody*)JailBreakBody;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UDFMQuestAITeamChecker
void UDFMQuestAITeamChecker::OnGroupSpawnEnd(struct AAIGroupSpawnerBase* Spawner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "OnGroupSpawnEnd");
    struct
    {
        struct AAIGroupSpawnerBase* Spawner;
    } Parms{};
    Parms.Spawner = (struct AAIGroupSpawnerBase*)Spawner;
    this->ProcessEvent(Func, &Parms);
}

void UDFMQuestAITeamChecker::OnActorDied(struct AGPCharacterBase* InCharacter, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "OnActorDied");
    struct
    {
        struct AGPCharacterBase* InCharacter;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.InCharacter = (struct AGPCharacterBase*)InCharacter;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMQuestAITeamChecker::MoveToLocation(struct FName SpotTag, uint8_t bWander)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "MoveToLocation");
    struct
    {
        struct FName SpotTag;
        uint8_t bWander;
    } Parms{};
    Parms.SpotTag = (struct FName)SpotTag;
    Parms.bWander = (uint8_t)bWander;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMQuestAITeamChecker::IsAllSpawnersEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "IsAllSpawnersEnd");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMQuestAITeamChecker::IsAllAIPawnsDied()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "IsAllAIPawnsDied");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMQuestAITeamChecker::GetTotalPawnsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "GetTotalPawnsNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMQuestAITeamChecker::GetLivingPawnsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "GetLivingPawnsNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APawn* UDFMQuestAITeamChecker::GetFirstAIPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "GetFirstAIPawn");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct APawn*> UDFMQuestAITeamChecker::GetAllAIPawns()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "GetAllAIPawns");
    struct
    {
        struct TArray<struct APawn*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestAITeamChecker::AddQuestMarker(struct AGPQuestMarkerBase* MarkerClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestAITeamChecker", "AddQuestMarker");
    struct
    {
        struct AGPQuestMarkerBase* MarkerClass;
    } Parms{};
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    this->ProcessEvent(Func, &Parms);
}

// ADFMQuestAIManager
struct ADFMQuestAIManager* ADFMQuestAIManager::QuestAIManager(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestAIManager", "QuestAIManager");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMQuestAIManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMQuestAITeamChecker* ADFMQuestAIManager::GetQuestAITeamChecker(struct UObject* WorldContextObject, struct FName TeamName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestAIManager", "GetQuestAITeamChecker");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName TeamName;
        struct UDFMQuestAITeamChecker* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TeamName = (struct FName)TeamName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMQuestAudioSubsystem
struct ADFMQuestAudioSubsystem* ADFMQuestAudioSubsystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestAudioSubsystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMQuestAudioSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMQuestGamingArea
void ADFMQuestGamingArea::OnQuestStageEnd(struct AGPQuestStage* QuestStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "OnQuestStageEnd");
    struct
    {
        struct AGPQuestStage* QuestStage;
    } Parms{};
    Parms.QuestStage = (struct AGPQuestStage*)QuestStage;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestGamingArea::OnQuestStageBegin(struct AGPQuestStage* QuestStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "OnQuestStageBegin");
    struct
    {
        struct AGPQuestStage* QuestStage;
    } Parms{};
    Parms.QuestStage = (struct AGPQuestStage*)QuestStage;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestGamingArea::OnQuestObjectiveEnd(int32_t QuestObjectiveID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "OnQuestObjectiveEnd");
    struct
    {
        int32_t QuestObjectiveID;
    } Parms{};
    Parms.QuestObjectiveID = (int32_t)QuestObjectiveID;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestGamingArea::OnQuestObjectiveBegin(int32_t QuestObjectiveID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "OnQuestObjectiveBegin");
    struct
    {
        int32_t QuestObjectiveID;
    } Parms{};
    Parms.QuestObjectiveID = (int32_t)QuestObjectiveID;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestGamingArea::OnQuestEnd(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "OnQuestEnd");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestGamingArea::OnQuestBegin(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "OnQuestBegin");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FGamingAreaPlayerInfo> ADFMQuestGamingArea::GetPlayersOutsideSpline2D(struct USplineComponent* SplineComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "GetPlayersOutsideSpline2D");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<struct FGamingAreaPlayerInfo> ReturnValue;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMQuestGamingArea::CheckWorldLocationInsideSpline2D(struct USplineComponent* SplineComp, const struct FVector& WorldLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingArea", "CheckWorldLocationInsideSpline2D");
    struct
    {
        struct USplineComponent* SplineComp;
        struct FVector WorldLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.WorldLocation = (struct FVector)WorldLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMQuestGamingAreaPlayerComponent
void UDFMQuestGamingAreaPlayerComponent::StartCountDown(int32_t CountDownSeconds, uint8_t bOutGamingAreaWouldSuicide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingAreaPlayerComponent", "StartCountDown");
    struct
    {
        int32_t CountDownSeconds;
        uint8_t bOutGamingAreaWouldSuicide;
    } Parms{};
    Parms.CountDownSeconds = (int32_t)CountDownSeconds;
    Parms.bOutGamingAreaWouldSuicide = (uint8_t)bOutGamingAreaWouldSuicide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMQuestGamingAreaPlayerComponent::ResetCountdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingAreaPlayerComponent", "ResetCountdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMQuestGamingAreaPlayerComponent::OnRep_OutGamingArea()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingAreaPlayerComponent", "OnRep_OutGamingArea");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMQuestGamingAreaPlayerComponent::GetRemainingSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingAreaPlayerComponent", "GetRemainingSeconds");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestGamingAreaPlayerComponent::CountdownEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestGamingAreaPlayerComponent", "CountdownEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMQuestGetItemListener
struct UDFMQuestGetItemListener* UDFMQuestGetItemListener::QA_GetItemListener(struct AGPQuestActionContext* QAContext, int64_t ListenedItemId, int32_t ItemNum, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestGetItemListener", "QA_GetItemListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int64_t ListenedItemId;
        int32_t ItemNum;
        uint8_t bOnce;
        struct UDFMQuestGetItemListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ListenedItemId = (int64_t)ListenedItemId;
    Parms.ItemNum = (int32_t)ItemNum;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMQuestHUDSubsystem
struct ADFMQuestHUDSubsystem* ADFMQuestHUDSubsystem::GetQuestHUDSubsystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestHUDSubsystem", "GetQuestHUDSubsystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMQuestHUDSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMQuestHUDSubsystem* ADFMQuestHUDSubsystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestHUDSubsystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMQuestHUDSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMQuestMarker
void ADFMQuestMarker::OnLoadedAllControllerClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestMarker", "OnLoadedAllControllerClass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMQuestPlayersChaseTargetComponent
void UDFMQuestPlayersChaseTargetComponent::OnRep_CurrentPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestPlayersChaseTargetComponent", "OnRep_CurrentPosition");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMQuestSubtitleSubsystem
void ADFMQuestSubtitleSubsystem::RemoveSubtitle(const ESubtitleType& SubtitleType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSubtitleSubsystem", "RemoveSubtitle");
    struct
    {
        enum ESubtitleType SubtitleType;
    } Parms{};
    Parms.SubtitleType = (enum ESubtitleType)SubtitleType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestSubtitleSubsystem::OnSequenceEndSubtitle(int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSubtitleSubsystem", "OnSequenceEndSubtitle");
    struct
    {
        int32_t Priority;
    } Parms{};
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestSubtitleSubsystem::OnSequenceBeginSubtitle(const struct FText& SubtitleContent, uint8_t bNoticeAudio, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSubtitleSubsystem", "OnSequenceBeginSubtitle");
    struct
    {
        struct FText SubtitleContent;
        uint8_t bNoticeAudio;
        int32_t Priority;
    } Parms{};
    Parms.SubtitleContent = (struct FText)SubtitleContent;
    Parms.bNoticeAudio = (uint8_t)bNoticeAudio;
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestSubtitleSubsystem::AddSubtitle(const struct FGPQuestObjectiveNoticeInfo& NoticeInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSubtitleSubsystem", "AddSubtitle");
    struct
    {
        struct FGPQuestObjectiveNoticeInfo NoticeInfo;
    } Parms{};
    Parms.NoticeInfo = (struct FGPQuestObjectiveNoticeInfo)NoticeInfo;
    this->ProcessEvent(Func, &Parms);
}

// UDFMQuestSystem
void UDFMQuestSystem::SpawnQuestHUDChannel(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "SpawnQuestHUDChannel");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMQuestSystem::SpawnQuestAudioChannel(struct UObject* WorldContextObject, struct ADFMQuestAudioSubsystem* AudioSysClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "SpawnQuestAudioChannel");
    struct
    {
        struct UObject* WorldContextObject;
        struct ADFMQuestAudioSubsystem* AudioSysClass;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AudioSysClass = (struct ADFMQuestAudioSubsystem*)AudioSysClass;
    this->ProcessEvent(Func, &Parms);
}

struct FGPAudioFuturePlayingID UDFMQuestSystem::PlayAudioOfText(const struct FGPQuestText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "PlayAudioOfText");
    struct
    {
        struct FGPQuestText Text;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.Text = (struct FGPQuestText)Text;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMQuestSystem::LoadQuestEx(struct UObject* WorldContextObject, struct FString QuestFolder, struct FString QuestName, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "LoadQuestEx");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString QuestFolder;
        struct FString QuestName;
        int32_t QuestID;
        struct AGPQuestVolume* GPQuestVolume;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestFolder = (struct FString)QuestFolder;
    Parms.QuestName = (struct FString)QuestName;
    Parms.QuestID = (int32_t)QuestID;
    Parms.GPQuestVolume = (struct AGPQuestVolume*)GPQuestVolume;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMQuestSystem::LoadQuestAudioTable(int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "LoadQuestAudioTable");
    struct
    {
        int32_t QuestID;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMQuestSystem::IsValidQuest(struct UObject* WorldContextObject, struct FString QuestFolder, struct FString QuestName, int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "IsValidQuest");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString QuestFolder;
        struct FString QuestName;
        int32_t QuestID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestFolder = (struct FString)QuestFolder;
    Parms.QuestName = (struct FString)QuestName;
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMQuestSystem::GetCurrentStageObjectivesCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "GetCurrentStageObjectivesCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMQuestSystem::GetCurrentQuestStagesCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "GetCurrentQuestStagesCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAudioEventAsset* UDFMQuestSystem::GetAudioOfText(const struct FGPQuestText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestSystem", "GetAudioOfText");
    struct
    {
        struct FGPQuestText Text;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.Text = (struct FGPQuestText)Text;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMQuestUtils
struct AGPQuest* UDFMQuestUtils::GetCurrentQuest(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestUtils", "GetCurrentQuest");
    struct
    {
        struct UObject* WorldContextObject;
        struct AGPQuest* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPQuestStage* UDFMQuestUtils::GetCurrentQStage(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestUtils", "GetCurrentQStage");
    struct
    {
        struct UObject* WorldContextObject;
        struct AGPQuestStage* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMQuestUtils::GetCurrentQObjectiveId(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMQuestUtils", "GetCurrentQObjectiveId");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMQuestVolume
void ADFMQuestVolume::OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestVolume", "OnLocalFocusChange");
    struct
    {
        struct AActor* OldTarget;
        struct AActor* NewTarget;
    } Parms{};
    Parms.OldTarget = (struct AActor*)OldTarget;
    Parms.NewTarget = (struct AActor*)NewTarget;
    this->ProcessEvent(Func, &Parms);
}

void ADFMQuestVolume::CheckShouldCharacterDoEnterVolume(struct AGPCharacter* GPCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMQuestVolume", "CheckShouldCharacterDoEnterVolume");
    struct
    {
        struct AGPCharacter* GPCharacter;
    } Parms{};
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    this->ProcessEvent(Func, &Parms);
}

// ADisplayHUDVolume
void ADisplayHUDVolume::OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DisplayHUDVolume", "OnVolumeEndOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ADisplayHUDVolume::OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DisplayHUDVolume", "OnVolumeBeginOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// AMovementRestrictionVolume
void AMovementRestrictionVolume::OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovementRestrictionVolume", "OnVolumeEndOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void AMovementRestrictionVolume::OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovementRestrictionVolume", "OnVolumeBeginOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// AEggQuest
struct FName AEggQuest::TagAllocator(struct TArray<struct FName> InTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuest", "TagAllocator");
    struct
    {
        struct TArray<struct FName> InTags;
        struct FName ReturnValue;
    } Parms{};
    Parms.InTags = (struct TArray<struct FName>)InTags;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AEggQuest::ResetQuestCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EggQuest", "ResetQuestCount");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AEggQuest::ResetQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuest", "ResetQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AEggQuest::OnServerGameEnd(EMatchOverReason MatchOverReason, int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuest", "OnServerGameEnd");
    struct
    {
        enum EMatchOverReason MatchOverReason;
        int64_t PlayerUin;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuest::OnCurrentCharacterDied(struct ACHARACTER* deadCharacter, struct AActor* KillerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuest", "OnCurrentCharacterDied");
    struct
    {
        struct ACHARACTER* deadCharacter;
        struct AActor* KillerActor;
    } Parms{};
    Parms.deadCharacter = (struct ACHARACTER*)deadCharacter;
    Parms.KillerActor = (struct AActor*)KillerActor;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuest::InitEggQuestInfo(struct ADFMCharacter* ToggleCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuest", "InitEggQuestInfo");
    struct
    {
        struct ADFMCharacter* ToggleCharacter;
    } Parms{};
    Parms.ToggleCharacter = (struct ADFMCharacter*)ToggleCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuest::BP_ResetQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuest", "BP_ResetQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AEggQuestClientProxy
void AEggQuestClientProxy::UnlockLuaHUDPanels(struct TArray<struct FString>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "UnlockLuaHUDPanels");
    struct
    {
        struct TArray<struct FString> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void AEggQuestClientProxy::UnlockHUDPanels(struct TArray<struct FName>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "UnlockHUDPanels");
    struct
    {
        struct TArray<struct FName> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void AEggQuestClientProxy::UnLoadRelevantLevels(const struct TArray<struct FString>& UnloadLevels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "UnLoadRelevantLevels");
    struct
    {
        struct TArray<struct FString> UnloadLevels;
    } Parms{};
    Parms.UnloadLevels = (struct TArray<struct FString>)UnloadLevels;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::OnRep_LockedLuaHUDNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "OnRep_LockedLuaHUDNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::OnRep_LockedHUDNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "OnRep_LockedHUDNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::OnRep_DisabledInputActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "OnRep_DisabledInputActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::LockLuaHUDPanels(struct TArray<struct FString>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "LockLuaHUDPanels");
    struct
    {
        struct TArray<struct FString> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void AEggQuestClientProxy::LockHUDPanels(struct TArray<struct FName>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "LockHUDPanels");
    struct
    {
        struct TArray<struct FName> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void AEggQuestClientProxy::LoadRelevantLevels(const struct TArray<struct FString>& LoadLevels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "LoadRelevantLevels");
    struct
    {
        struct TArray<struct FString> LoadLevels;
    } Parms{};
    Parms.LoadLevels = (struct TArray<struct FString>)LoadLevels;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::DisableInputAction(EInputActionType ActionType, uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "DisableInputAction");
    struct
    {
        enum EInputActionType ActionType;
        uint8_t bDisable;
    } Parms{};
    Parms.ActionType = (enum EInputActionType)ActionType;
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void AEggQuestClientProxy::ClientEnterOrLeaveEggLevel(uint8_t bEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EggQuestClientProxy", "ClientEnterOrLeaveEggLevel");
    struct
    {
        uint8_t bEnter;
    } Parms{};
    Parms.bEnter = (uint8_t)bEnter;
    this->ProcessEvent(Func, &Parms);
}

// AForestEggEntrance
void AForestEggEntrance::ResetEggEntrance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "ResetEggEntrance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::RelevantLevelsLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "RelevantLevelsLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnSubmissionTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnSubmissionTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnStreamingLoadingPercentage(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnStreamingLoadingPercentage");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnResetEntranceTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnResetEntranceTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnRep_TeamId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnRep_TeamId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnRep_SubmitFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnRep_SubmitFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnRelevantLevelsLoadTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnRelevantLevelsLoadTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnPreloadOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnPreloadOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnPreloadOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnPreloadOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnOneSubmissionComplete(struct ACHARACTER* OperatePlayer, struct AInteractor_Submission* SubmissionInteractor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnOneSubmissionComplete");
    struct
    {
        struct ACHARACTER* OperatePlayer;
        struct AInteractor_Submission* SubmissionInteractor;
    } Parms{};
    Parms.OperatePlayer = (struct ACHARACTER*)OperatePlayer;
    Parms.SubmissionInteractor = (struct AInteractor_Submission*)SubmissionInteractor;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnOneQuestComplete(struct AGPQuest* InQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnOneQuestComplete");
    struct
    {
        struct AGPQuest* InQuest;
    } Parms{};
    Parms.InQuest = (struct AGPQuest*)InQuest;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnOneCharacterEntered(struct ACHARACTER* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnOneCharacterEntered");
    struct
    {
        struct ACHARACTER* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct ACHARACTER*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::OnAllSubmissionComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "OnAllSubmissionComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::LoadRelevantLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "LoadRelevantLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::LaunchEggQuests()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "LaunchEggQuests");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::ClientBroadcastAllSubmissionComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "ClientBroadcastAllSubmissionComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AForestEggEntrance::CheckHaveRunningQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "CheckHaveRunningQuest");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AForestEggEntrance::CheckAllSubmissionHasCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "CheckAllSubmissionHasCompleted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AForestEggEntrance::BP_OnClientAllSubmissionComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "BP_OnClientAllSubmissionComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AForestEggEntrance::BP_OnAllSubmissionComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggEntrance", "BP_OnAllSubmissionComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AForestEggTunnel
void AForestEggTunnel::OnBoxOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggTunnel", "OnBoxOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void AForestEggTunnel::BP_OnBoxOverlap(struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ForestEggTunnel", "BP_OnBoxOverlap");
    struct
    {
        struct AActor* OtherActor;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_HUDLoadListener
struct UQA_HUDLoadListener* UQA_HUDLoadListener::QA_HUDLoadListener(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_HUDLoadListener", "QA_HUDLoadListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_HUDLoadListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_HUDLoadListener::OnHUDViewsAsyncLoad(float Progress, struct TArray<struct FName> BlockGameFlowViewNameArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_HUDLoadListener", "OnHUDViewsAsyncLoad");
    struct
    {
        float Progress;
        struct TArray<struct FName> BlockGameFlowViewNameArray;
    } Parms{};
    Parms.Progress = (float)Progress;
    Parms.BlockGameFlowViewNameArray = (struct TArray<struct FName>)BlockGameFlowViewNameArray;
    this->ProcessEvent(Func, &Parms);
}

// AIntroQuestClientProxy
void AIntroQuestClientProxy::SaveGame(struct AGPQuestActionContext* QAContext, struct FName CheckPointTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroQuestClientProxy", "SaveGame");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName CheckPointTag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CheckPointTag = (struct FName)CheckPointTag;
    this->ProcessEvent(Func, &Parms);
}

void AIntroQuestClientProxy::OnIntroCommonBannerShowed(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroQuestClientProxy", "OnIntroCommonBannerShowed");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void AIntroQuestClientProxy::NtfServerSpecialButtonClicked(struct FString ButtonName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroQuestClientProxy", "NtfServerSpecialButtonClicked");
    struct
    {
        struct FString ButtonName;
    } Parms{};
    Parms.ButtonName = (struct FString)ButtonName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AIntroQuestClientProxy::LoadGame(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroQuestClientProxy", "LoadGame");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AIntroQuestClientProxy::Intro_ClientShowPanel(struct TArray<struct FName> HUDNames, uint8_t bDisplay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroQuestClientProxy", "Intro_ClientShowPanel");
    struct
    {
        struct TArray<struct FName> HUDNames;
        uint8_t bDisplay;
    } Parms{};
    Parms.HUDNames = (struct TArray<struct FName>)HUDNames;
    Parms.bDisplay = (uint8_t)bDisplay;
    this->ProcessEvent(Func, &Parms);
}

void AIntroQuestClientProxy::ClientButtonClicked(struct FName ButtonName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntroQuestClientProxy", "ClientButtonClicked");
    struct
    {
        struct FName ButtonName;
    } Parms{};
    Parms.ButtonName = (struct FName)ButtonName;
    this->ProcessEvent(Func, &Parms);
}

// UObjectiveContentView
void UObjectiveContentView::SetTraceActor(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "SetTraceActor");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveContentView::SetTimeLimit(float TimeLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "SetTimeLimit");
    struct
    {
        float TimeLimit;
    } Parms{};
    Parms.TimeLimit = (float)TimeLimit;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveContentView::SetObjectiveTitle(const struct FText& NewTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "SetObjectiveTitle");
    struct
    {
        struct FText NewTitle;
    } Parms{};
    Parms.NewTitle = (struct FText)NewTitle;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveContentView::SetCommonProgressBarPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "SetCommonProgressBarPercent");
    struct
    {
        float Percent;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveContentView::SetCommomProgressHeathPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "SetCommomProgressHeathPercent");
    struct
    {
        float Percent;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

struct FText UObjectiveContentView::GetObjectiveTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "GetObjectiveTitle");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UObjectiveContentView::BP_TraceTargetHealth(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "BP_TraceTargetHealth");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveContentView::BP_SetObjectiveIcon(EGPQuestObjectiveHUDType InObjectiveHUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "BP_SetObjectiveIcon");
    struct
    {
        enum EGPQuestObjectiveHUDType InObjectiveHUDType;
    } Parms{};
    Parms.InObjectiveHUDType = (enum EGPQuestObjectiveHUDType)InObjectiveHUDType;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveContentView::BP_OnShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveContentView", "BP_OnShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UObjectiveHintView
void UObjectiveHintView::SetObjectiveType(uint8_t bMainObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "SetObjectiveType");
    struct
    {
        uint8_t bMainObjective;
    } Parms{};
    Parms.bMainObjective = (uint8_t)bMainObjective;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveHintView::SetObjectiveIconType(EGPQuestObjectiveHUDType InObjectiveHUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "SetObjectiveIconType");
    struct
    {
        enum EGPQuestObjectiveHUDType InObjectiveHUDType;
    } Parms{};
    Parms.InObjectiveHUDType = (enum EGPQuestObjectiveHUDType)InObjectiveHUDType;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveHintView::SetHintText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "SetHintText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

struct FText UObjectiveHintView::GetHintText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "GetHintText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UObjectiveHintView::BP_UpdateObjectiveType(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "BP_UpdateObjectiveType");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveHintView::BP_SetObjectiveIconType(EGPQuestObjectiveHUDType InObjectiveHUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "BP_SetObjectiveIconType");
    struct
    {
        enum EGPQuestObjectiveHUDType InObjectiveHUDType;
    } Parms{};
    Parms.InObjectiveHUDType = (enum EGPQuestObjectiveHUDType)InObjectiveHUDType;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveHintView::BP_FadeoutView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "BP_FadeoutView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveHintView::BP_FadeinView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveHintView", "BP_FadeinView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UObjectiveTipsView
void UObjectiveTipsView::SetTips(struct FText Tips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveTipsView", "SetTips");
    struct
    {
        struct FText Tips;
    } Parms{};
    Parms.Tips = (struct FText)Tips;
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveTipsView::BP_OnShowTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveTipsView", "BP_OnShowTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UObjectiveTipsView::BP_OnHideTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectiveTipsView", "BP_OnHideTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_ActivateTimeBomb
struct UQA_ActivateTimeBomb* UQA_ActivateTimeBomb::QA_ActivateTimeBomb(struct AGPQuestActionContext* QAContext, struct FName QATag_Interactor_TimeBomb_TimeBombActor, int32_t ExplodeDuration, int32_t RandomWiresNum, int32_t WrongWirePunishTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_ActivateTimeBomb", "QA_ActivateTimeBomb");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_Interactor_TimeBomb_TimeBombActor;
        int32_t ExplodeDuration;
        int32_t RandomWiresNum;
        int32_t WrongWirePunishTime;
        struct UQA_ActivateTimeBomb* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_Interactor_TimeBomb_TimeBombActor = (struct FName)QATag_Interactor_TimeBomb_TimeBombActor;
    Parms.ExplodeDuration = (int32_t)ExplodeDuration;
    Parms.RandomWiresNum = (int32_t)RandomWiresNum;
    Parms.WrongWirePunishTime = (int32_t)WrongWirePunishTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_ActivateTimeBomb::OnBombStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ActivateTimeBomb", "OnBombStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_AIDeathListener
struct UQA_AIDeathListener* UQA_AIDeathListener::QA_MultiAIDeathListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> AITags, int32_t AINum, uint8_t bShowMarker, struct FQMarkerSpawnParams QMarkerParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIDeathListener", "QA_MultiAIDeathListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> AITags;
        int32_t AINum;
        uint8_t bShowMarker;
        struct FQMarkerSpawnParams QMarkerParams;
        struct UQA_AIDeathListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITags = (struct TArray<struct FName>)AITags;
    Parms.AINum = (int32_t)AINum;
    Parms.bShowMarker = (uint8_t)bShowMarker;
    Parms.QMarkerParams = (struct FQMarkerSpawnParams)QMarkerParams;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AIDeathListener::QA_AISendKillEvent(struct AGPQuestActionContext* QAContext, struct FName AITag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIDeathListener", "QA_AISendKillEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AITag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITag = (struct FName)AITag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_AIDeathListener::QA_AISendFightStateEvent(struct AGPQuestActionContext* QAContext, struct FName AITag, EGPCharacterFightStateType StateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIDeathListener", "QA_AISendFightStateEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AITag;
        enum EGPCharacterFightStateType StateType;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITag = (struct FName)AITag;
    Parms.StateType = (enum EGPCharacterFightStateType)StateType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UQA_AIDeathListener* UQA_AIDeathListener::QA_AIDeathListener(struct AGPQuestActionContext* QAContext, struct FName AITag, int32_t AINum, uint8_t bShowMarker, struct FQMarkerSpawnParams QMarkerParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIDeathListener", "QA_AIDeathListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AITag;
        int32_t AINum;
        uint8_t bShowMarker;
        struct FQMarkerSpawnParams QMarkerParams;
        struct UQA_AIDeathListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITag = (struct FName)AITag;
    Parms.AINum = (int32_t)AINum;
    Parms.bShowMarker = (uint8_t)bShowMarker;
    Parms.QMarkerParams = (struct FQMarkerSpawnParams)QMarkerParams;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AIDeathListener::OnCharacterDied(struct ACHARACTER* DeadCharactet, struct AActor* KillerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AIDeathListener", "OnCharacterDied");
    struct
    {
        struct ACHARACTER* DeadCharactet;
        struct AActor* KillerActor;
    } Parms{};
    Parms.DeadCharactet = (struct ACHARACTER*)DeadCharactet;
    Parms.KillerActor = (struct AActor*)KillerActor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AISkillTaskListener
struct UQA_AISkillTaskListener* UQA_AISkillTaskListener::QA_AISkillTaskListener(struct AGPQuestActionContext* QAContext, struct FName AITag, struct FName ListenStateName, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AISkillTaskListener", "QA_AISkillTaskListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AITag;
        struct FName ListenStateName;
        uint8_t bOnce;
        struct UQA_AISkillTaskListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITag = (struct FName)AITag;
    Parms.ListenStateName = (struct FName)ListenStateName;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AISkillTaskListener::OnAIStartSkillTask(struct AGPCharacter* GPAICharacter, struct FName CustomStateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AISkillTaskListener", "OnAIStartSkillTask");
    struct
    {
        struct AGPCharacter* GPAICharacter;
        struct FName CustomStateName;
    } Parms{};
    Parms.GPAICharacter = (struct AGPCharacter*)GPAICharacter;
    Parms.CustomStateName = (struct FName)CustomStateName;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AISkillTaskListener::OnAIFinishSkillTask(struct AGPCharacter* GPAICharacter, struct FName CustomStateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AISkillTaskListener", "OnAIFinishSkillTask");
    struct
    {
        struct AGPCharacter* GPAICharacter;
        struct FName CustomStateName;
    } Parms{};
    Parms.GPAICharacter = (struct AGPCharacter*)GPAICharacter;
    Parms.CustomStateName = (struct FName)CustomStateName;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AIFightMeListener
struct UQA_AIFightMeListener* UQA_AIFightMeListener::QA_AIFightMeListener(struct AGPQuestActionContext* QAContext, struct FName Tag, struct ADFMPlayerController* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIFightMeListener", "QA_AIFightMeListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Tag;
        struct ADFMPlayerController* Player;
        struct UQA_AIFightMeListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.Player = (struct ADFMPlayerController*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AIFightMeListener::OnAIMesgReceive(struct ADFMCharacter* AI, EAIMsgType MsgType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AIFightMeListener", "OnAIMesgReceive");
    struct
    {
        struct ADFMCharacter* AI;
        enum EAIMsgType MsgType;
    } Parms{};
    Parms.AI = (struct ADFMCharacter*)AI;
    Parms.MsgType = (enum EAIMsgType)MsgType;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AIJob_BossEncounter_JobStateChangeListener
uint8_t UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_StartJob_OnTimeFinish(struct AGPQuestActionContext* QAContext, struct FString JobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_StartJob_OnTimeFinish");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_StartJob(struct AGPQuestActionContext* QAContext, struct FString JobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_StartJob");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_OnPlunder(struct AGPQuestActionContext* QAContext, struct FString JobName, ECampType CampId, int32_t EnemyContractID, struct FString EnemyJobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_OnPlunder");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
        enum ECampType CampId;
        int32_t EnemyContractID;
        struct FString EnemyJobName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    Parms.CampId = (enum ECampType)CampId;
    Parms.EnemyContractID = (int32_t)EnemyContractID;
    Parms.EnemyJobName = (struct FString)EnemyJobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_OnEndQuest(struct AGPQuestActionContext* QAContext, struct FString JobName, int32_t DelayTimeResetCamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_OnEndQuest");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
        int32_t DelayTimeResetCamp;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    Parms.DelayTimeResetCamp = (int32_t)DelayTimeResetCamp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UQA_AIJob_BossEncounter_JobStateChangeListener* UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_JobStateChangeListender(struct AGPQuestActionContext* QAContext, struct FString JobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_JobStateChangeListender");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
        struct UQA_AIJob_BossEncounter_JobStateChangeListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIGroupPatrolJob_BossEncounter* UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_GetJob(struct AGPQuestActionContext* QAContext, struct FString JobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_GetJob");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
        struct UAIGroupPatrolJob_BossEncounter* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_ChangeJobState(struct AGPQuestActionContext* QAContext, struct FString JobName, EAIGroupPatrolJobBossEncounterState JobState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_ChangeJobState");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
        enum EAIGroupPatrolJobBossEncounterState JobState;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    Parms.JobState = (enum EAIGroupPatrolJobBossEncounterState)JobState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_AIJob_BossEncounter_JobStateChangeListener::QA_AIJob_BossEncounter_ChangeJobOwner(struct AGPQuestActionContext* QAContext, struct FString JobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "QA_AIJob_BossEncounter_ChangeJobOwner");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString JobName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.JobName = (struct FString)JobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_AIJob_BossEncounter_JobStateChangeListener::OnJobStateChangeDelegate(struct UAIGroupPatrolJob_BossEncounter* Job, EAIGroupPatrolJobBossEncounterState OldState, EAIGroupPatrolJobBossEncounterState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AIJob_BossEncounter_JobStateChangeListener", "OnJobStateChangeDelegate");
    struct
    {
        struct UAIGroupPatrolJob_BossEncounter* Job;
        enum EAIGroupPatrolJobBossEncounterState OldState;
        enum EAIGroupPatrolJobBossEncounterState NewState;
    } Parms{};
    Parms.Job = (struct UAIGroupPatrolJob_BossEncounter*)Job;
    Parms.OldState = (enum EAIGroupPatrolJobBossEncounterState)OldState;
    Parms.NewState = (enum EAIGroupPatrolJobBossEncounterState)NewState;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AITeamSizeListener
struct UQA_AITeamSizeListener* UQA_AITeamSizeListener::QA_AITeamSizeListener(struct AGPQuestActionContext* QAContext, EQA_AITeamSizeListenerOption Option, struct FName QATag_AIGroupSpawnerBase_TeamName, EGPQuestActionCompareOperator Compare, int32_t size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AITeamSizeListener", "QA_AITeamSizeListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_AITeamSizeListenerOption Option;
        struct FName QATag_AIGroupSpawnerBase_TeamName;
        enum EGPQuestActionCompareOperator Compare;
        int32_t size;
        struct UQA_AITeamSizeListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Option = (enum EQA_AITeamSizeListenerOption)Option;
    Parms.QATag_AIGroupSpawnerBase_TeamName = (struct FName)QATag_AIGroupSpawnerBase_TeamName;
    Parms.Compare = (enum EGPQuestActionCompareOperator)Compare;
    Parms.size = (int32_t)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AITeamSizeListener::OnTeamPawnDied(struct UDFMQuestAITeamChecker* Checker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AITeamSizeListener", "OnTeamPawnDied");
    struct
    {
        struct UDFMQuestAITeamChecker* Checker;
    } Parms{};
    Parms.Checker = (struct UDFMQuestAITeamChecker*)Checker;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AllClientLoadingCompletedListener
struct UQA_AllClientLoadingCompletedListener* UQA_AllClientLoadingCompletedListener::QA_AllClientLoadingCompletedListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AllClientLoadingCompletedListener", "QA_AllClientLoadingCompletedListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bOnce;
        struct UQA_AllClientLoadingCompletedListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AllClientLoadingCompletedListener::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AllClientLoadingCompletedListener", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_BraveGame_OnTeamFuelCountChangeListener
struct UQA_BraveGame_OnTeamFuelCountChangeListener* UQA_BraveGame_OnTeamFuelCountChangeListener::QA_BraveGame_OnTeamFuelCountChangeListener(struct AGPQuestActionContext* QAContext, struct ABraveGame* BraveGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_BraveGame_OnTeamFuelCountChangeListener", "QA_BraveGame_OnTeamFuelCountChangeListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ABraveGame* BraveGame;
        struct UQA_BraveGame_OnTeamFuelCountChangeListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.BraveGame = (struct ABraveGame*)BraveGame;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_BraveGame_OnTeamFuelCountChangeListener::OnBraveGameTeamFuelCountChangeDelegate(struct ABraveGame* BraveGame, int32_t TeamFuelCount, uint8_t TeamFuelEnough)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_BraveGame_OnTeamFuelCountChangeListener", "OnBraveGameTeamFuelCountChangeDelegate");
    struct
    {
        struct ABraveGame* BraveGame;
        int32_t TeamFuelCount;
        uint8_t TeamFuelEnough;
    } Parms{};
    Parms.BraveGame = (struct ABraveGame*)BraveGame;
    Parms.TeamFuelCount = (int32_t)TeamFuelCount;
    Parms.TeamFuelEnough = (uint8_t)TeamFuelEnough;
    this->ProcessEvent(Func, &Parms);
}

// UQA_BreakItem_BreakListener
struct UQA_BreakItem_BreakListener* UQA_BreakItem_BreakListener::QA_BreakItem_BreakListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_BreakItem_BreakListener", "QA_BreakItem_BreakListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SourceTag;
        struct UQA_BreakItem_BreakListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SourceTag = (struct FName)SourceTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_BreakItem_BreakListener::NtfBreakItemBroken(struct AActor* BreakableItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_BreakItem_BreakListener", "NtfBreakItemBroken");
    struct
    {
        struct AActor* BreakableItem;
    } Parms{};
    Parms.BreakableItem = (struct AActor*)BreakableItem;
    this->ProcessEvent(Func, &Parms);
}

// UQA_ButtonClickedListener
struct UQA_ButtonClickedListener* UQA_ButtonClickedListener::QA_ButtonClickedListener(struct AGPQuestActionContext* QAContext, struct FName ButtonName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_ButtonClickedListener", "QA_ButtonClickedListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName ButtonName;
        struct UQA_ButtonClickedListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ButtonName = (struct FName)ButtonName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_ButtonClickedListener::OnSpecialButtonClicked(struct FName ButtonName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ButtonClickedListener", "OnSpecialButtonClicked");
    struct
    {
        struct FName ButtonName;
    } Parms{};
    Parms.ButtonName = (struct FName)ButtonName;
    this->ProcessEvent(Func, &Parms);
}

// UQA_MandelBrickListener
struct UQA_MandelBrickListener* UQA_MandelBrickListener::QA_MandelBrickListener(struct AGPQuestActionContext* QAContext, struct ACHARACTER* OperatorCharacter, struct FName MandelBrickTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_MandelBrickListener", "QA_MandelBrickListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ACHARACTER* OperatorCharacter;
        struct FName MandelBrickTag;
        struct UQA_MandelBrickListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.OperatorCharacter = (struct ACHARACTER*)OperatorCharacter;
    Parms.MandelBrickTag = (struct FName)MandelBrickTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_MandelBrickListener::OnServerSimulateInteraction(struct ACHARACTER* OperatorCharacter, EEndInteractionType EndReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_MandelBrickListener", "OnServerSimulateInteraction");
    struct
    {
        struct ACHARACTER* OperatorCharacter;
        enum EEndInteractionType EndReason;
    } Parms{};
    Parms.OperatorCharacter = (struct ACHARACTER*)OperatorCharacter;
    Parms.EndReason = (enum EEndInteractionType)EndReason;
    this->ProcessEvent(Func, &Parms);
}

void UQA_MandelBrickListener::OnClientSimulateInteraction(struct ACHARACTER* OperatorCharacter, uint8_t bStartSimulate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_MandelBrickListener", "OnClientSimulateInteraction");
    struct
    {
        struct ACHARACTER* OperatorCharacter;
        uint8_t bStartSimulate;
    } Parms{};
    Parms.OperatorCharacter = (struct ACHARACTER*)OperatorCharacter;
    Parms.bStartSimulate = (uint8_t)bStartSimulate;
    this->ProcessEvent(Func, &Parms);
}

// UQA_CarryBodyListener
struct UQA_CarryBodyListener* UQA_CarryBodyListener::QA_CarryBodyListener(struct AGPQuestActionContext* InQAContext, struct ACHARACTER* CHARACTER, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_CarryBodyListener", "QA_CarryBodyListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        struct ACHARACTER* CHARACTER;
        struct FName Name;
        struct UQA_CarryBodyListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_CarryBodyListener::FireOnDoInteract(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CarryBodyListener", "FireOnDoInteract");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_CarryBodySpawnListener
struct UQA_CarryBodySpawnListener* UQA_CarryBodySpawnListener::QA_OnCarryBodySpawnListener(struct AGPQuestActionContext* InQAContext, struct FName Tag, uint8_t Once)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_CarryBodySpawnListener", "QA_OnCarryBodySpawnListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        struct FName Tag;
        uint8_t Once;
        struct UQA_CarryBodySpawnListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.Tag = (struct FName)Tag;
    Parms.Once = (uint8_t)Once;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_CarryBodySpawnListener::OnCarryBodySpawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CarryBodySpawnListener", "OnCarryBodySpawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_CheckNpcStatuslistener
struct UQA_CheckNpcStatuslistener* UQA_CheckNpcStatuslistener::QA_CheckNpcStatuslistener(struct AGPQuestActionContext* QAContext, struct FName NPCTag, const struct FTransform& ResetToTrans, float Timeout, int32_t ResetToPhase, struct FName TargetTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_CheckNpcStatuslistener", "QA_CheckNpcStatuslistener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName NPCTag;
        struct FTransform ResetToTrans;
        float Timeout;
        int32_t ResetToPhase;
        struct FName TargetTag;
        struct UQA_CheckNpcStatuslistener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.NPCTag = (struct FName)NPCTag;
    Parms.ResetToTrans = (struct FTransform)ResetToTrans;
    Parms.Timeout = (float)Timeout;
    Parms.ResetToPhase = (int32_t)ResetToPhase;
    Parms.TargetTag = (struct FName)TargetTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_CheckNpcStatuslistener::OnStopCheckNpcStatus(int32_t InHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CheckNpcStatuslistener", "OnStopCheckNpcStatus");
    struct
    {
        int32_t InHandle;
    } Parms{};
    Parms.InHandle = (int32_t)InHandle;
    this->ProcessEvent(Func, &Parms);
}

void UQA_CheckNpcStatuslistener::OnNpcStatusTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CheckNpcStatuslistener", "OnNpcStatusTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_ClientHudLoadListener
struct UQA_ClientHudLoadListener* UQA_ClientHudLoadListener::QA_ClientHudLoadListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDNames, float TimeOutSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_ClientHudLoadListener", "QA_ClientHudLoadListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> HUDNames;
        float TimeOutSeconds;
        struct UQA_ClientHudLoadListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.HUDNames = (struct TArray<struct FName>)HUDNames;
    Parms.TimeOutSeconds = (float)TimeOutSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_ClientHudLoadListener::FireReturnActionTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientHudLoadListener", "FireReturnActionTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_ClientHudLoadListener::FireReturnActionLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ClientHudLoadListener", "FireReturnActionLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_Countdown
void UQA_Countdown::QA_StopStageCountdown(struct AGPQuestActionContext* QAContext, struct UQA_Countdown* QACountdown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Countdown", "QA_StopStageCountdown");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_Countdown* QACountdown;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QACountdown = (struct UQA_Countdown*)QACountdown;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_Countdown::QA_StopCountdown(struct AGPQuestActionContext* QAContext, struct UQA_Countdown* QACountdown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Countdown", "QA_StopCountdown");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_Countdown* QACountdown;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QACountdown = (struct UQA_Countdown*)QACountdown;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UQA_Countdown* UQA_Countdown::QA_StartStageCountdown(struct AGPQuestActionContext* QAContext, struct AGPQuestCountdownBase* CountdownClass, ECountDownHUDClassType CountDownHUDClassType, const struct FText& Title, int32_t Duration, struct UQA_Countdown*& QACountdownOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Countdown", "QA_StartStageCountdown");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestCountdownBase* CountdownClass;
        enum ECountDownHUDClassType CountDownHUDClassType;
        struct FText Title;
        int32_t Duration;
        struct UQA_Countdown* QACountdownOut;
        struct UQA_Countdown* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CountdownClass = (struct AGPQuestCountdownBase*)CountdownClass;
    Parms.CountDownHUDClassType = (enum ECountDownHUDClassType)CountDownHUDClassType;
    Parms.Title = (struct FText)Title;
    Parms.Duration = (int32_t)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    QACountdownOut = Parms.QACountdownOut;
    return Parms.ReturnValue;
}

struct UQA_Countdown* UQA_Countdown::QA_StartCountdown(struct AGPQuestActionContext* QAContext, EQA_CountdownType CountdownType, struct AGPQuestCountdownBase* CountdownClass, ECountDownHUDClassType CountDownHUDClassType, struct FText Title, int32_t Duration, struct UQA_Countdown*& QACountdownOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Countdown", "QA_StartCountdown");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_CountdownType CountdownType;
        struct AGPQuestCountdownBase* CountdownClass;
        enum ECountDownHUDClassType CountDownHUDClassType;
        struct FText Title;
        int32_t Duration;
        struct UQA_Countdown* QACountdownOut;
        struct UQA_Countdown* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CountdownType = (enum EQA_CountdownType)CountdownType;
    Parms.CountdownClass = (struct AGPQuestCountdownBase*)CountdownClass;
    Parms.CountDownHUDClassType = (enum ECountDownHUDClassType)CountDownHUDClassType;
    Parms.Title = (struct FText)Title;
    Parms.Duration = (int32_t)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    QACountdownOut = Parms.QACountdownOut;
    return Parms.ReturnValue;
}

void UQA_Countdown::OnCountdownFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_Countdown", "OnCountdownFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AGPQuestCountdownBase* UQA_Countdown::GetCountdownBaseObj()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_Countdown", "GetCountdownBaseObj");
    struct
    {
        struct AGPQuestCountdownBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_Countdown::FireReturnAction(EQA_CountdownAsyncReturnBranch Branch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_Countdown", "FireReturnAction");
    struct
    {
        enum EQA_CountdownAsyncReturnBranch Branch;
    } Parms{};
    Parms.Branch = (enum EQA_CountdownAsyncReturnBranch)Branch;
    this->ProcessEvent(Func, &Parms);
}

// UQA_Delay
struct UQA_Delay* UQA_Delay::QA_Delay(struct AGPQuestActionContext* QAContext, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Delay", "QA_Delay");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        float Delay;
        struct UQA_Delay* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Delay = (float)Delay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_Delay::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_Delay", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_EnableManningListener
struct UQA_EnableManningListener* UQA_EnableManningListener::QA_ManningListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag, struct AGPCharacter* Operator, int32_t TeamID, uint8_t Once)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_EnableManningListener", "QA_ManningListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SourceTag;
        struct AGPCharacter* Operator;
        int32_t TeamID;
        uint8_t Once;
        struct UQA_EnableManningListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SourceTag = (struct FName)SourceTag;
    Parms.Operator = (struct AGPCharacter*)Operator;
    Parms.TeamID = (int32_t)TeamID;
    Parms.Once = (uint8_t)Once;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_EnableManningListener::OnServerManningCompleted(struct UInteractorManningComponent* ManningComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_EnableManningListener", "OnServerManningCompleted");
    struct
    {
        struct UInteractorManningComponent* ManningComponent;
    } Parms{};
    Parms.ManningComponent = (struct UInteractorManningComponent*)ManningComponent;
    this->ProcessEvent(Func, &Parms);
}

// UQA_FadeOutListener
struct UQA_FadeOutListener* UQA_FadeOutListener::QA_FadeOutListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_FadeOutListener", "QA_FadeOutListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bOnce;
        struct UQA_FadeOutListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_FadeOutListener::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_FadeOutListener", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_FirstPlayerSeamLessEnterListener
struct UQA_FirstPlayerSeamLessEnterListener* UQA_FirstPlayerSeamLessEnterListener::QA_FirstPlayerSeamLessEnterListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_FirstPlayerSeamLessEnterListener", "QA_FirstPlayerSeamLessEnterListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bOnce;
        struct UQA_FirstPlayerSeamLessEnterListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_FirstPlayerSeamLessEnterListener::FireReturnAction(uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_FirstPlayerSeamLessEnterListener", "FireReturnAction");
    struct
    {
        uint64_t Uin;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

// UQA_FixedRocketExplodeListener
struct UQA_FixedRocketExplodeListener* UQA_FixedRocketExplodeListener::QA_FixedRocketExplodeListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_FixedRocketExplodeListener", "QA_FixedRocketExplodeListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bOnce;
        struct UQA_FixedRocketExplodeListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_FixedRocketExplodeListener::FireReturnAction(struct FName QATag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_FixedRocketExplodeListener", "FireReturnAction");
    struct
    {
        struct FName QATag;
    } Parms{};
    Parms.QATag = (struct FName)QATag;
    this->ProcessEvent(Func, &Parms);
}

// UQA_GPSequence
void UQA_GPSequence::QA_ResetSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_ResetSequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UQA_GPSequence* UQA_GPSequence::QA_PlaySequenceExtra(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, float PreEndRestTime, uint8_t bPreEndStartFade, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_PlaySequenceExtra");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        float PreEndRestTime;
        uint8_t bPreEndStartFade;
        enum EGPQuestActionScope Scope;
        struct UQA_GPSequence* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.PreEndRestTime = (float)PreEndRestTime;
    Parms.bPreEndStartFade = (uint8_t)bPreEndStartFade;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_GPSequence* UQA_GPSequence::QA_PlaySequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_PlaySequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPQuestActionScope Scope;
        struct UQA_GPSequence* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_GPSequence* UQA_GPSequence::QA_ListenSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_ListenSequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPQuestActionScope Scope;
        uint8_t bOnce;
        struct UQA_GPSequence* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQA_GPSequence::QA_GetSequenceLength(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_GetSequenceLength");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPQuestActionScope Scope;
        float ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_GPSequence* UQA_GPSequence::QA_CutScene(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_CutScene, EQA_GPSequenceOption Option, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_CutScene");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_CutScene;
        enum EQA_GPSequenceOption Option;
        enum EGPQuestActionScope Scope;
        struct UQA_GPSequence* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_CutScene = (struct FName)QATag_GPSequenceActor_CutScene;
    Parms.Option = (enum EQA_GPSequenceOption)Option;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_GPSequence::QA_BreakSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequence", "QA_BreakSequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_GPSequence::OnSkipSequenceInternal(struct AGPSequenceActor* SequencePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSequence", "OnSkipSequenceInternal");
    struct
    {
        struct AGPSequenceActor* SequencePlayer;
    } Parms{};
    Parms.SequencePlayer = (struct AGPSequenceActor*)SequencePlayer;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPSequence::OnPreEndSequenceInternal(struct AGPSequenceActor* SequencePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSequence", "OnPreEndSequenceInternal");
    struct
    {
        struct AGPSequenceActor* SequencePlayer;
    } Parms{};
    Parms.SequencePlayer = (struct AGPSequenceActor*)SequencePlayer;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPSequence::OnEndSequenceInternal(struct AGPSequenceActor* SequencePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSequence", "OnEndSequenceInternal");
    struct
    {
        struct AGPSequenceActor* SequencePlayer;
    } Parms{};
    Parms.SequencePlayer = (struct AGPSequenceActor*)SequencePlayer;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPSequence::OnBeginSequenceInternal(struct AGPSequenceActor* SequencePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSequence", "OnBeginSequenceInternal");
    struct
    {
        struct AGPSequenceActor* SequencePlayer;
    } Parms{};
    Parms.SequencePlayer = (struct AGPSequenceActor*)SequencePlayer;
    this->ProcessEvent(Func, &Parms);
}

// UQA_GPSequenceEventListener
struct UQA_GPSequenceEventListener* UQA_GPSequenceEventListener::QA_ListenSequenceEvent(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPSequenceCustomEvent EventName, struct FName EventSubName, EGPQuestActionScope Scope, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequenceEventListener", "QA_ListenSequenceEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPSequenceCustomEvent EventName;
        struct FName EventSubName;
        enum EGPQuestActionScope Scope;
        uint8_t bOnce;
        struct UQA_GPSequenceEventListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.EventName = (enum EGPSequenceCustomEvent)EventName;
    Parms.EventSubName = (struct FName)EventSubName;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_GPSequenceEventListener::QA_FireSequenceEvent(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSequenceEventListener", "QA_FireSequenceEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPSequenceActor_GPSequence;
        enum EGPSequenceCustomEvent EventName;
        struct FName EventSubName;
        struct FString EventArgs;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPSequenceActor_GPSequence = (struct FName)QATag_GPSequenceActor_GPSequence;
    Parms.EventName = (enum EGPSequenceCustomEvent)EventName;
    Parms.EventSubName = (struct FName)EventSubName;
    Parms.EventArgs = (struct FString)EventArgs;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_GPSequenceEventListener::OnSequenceEventInternal(struct AGPSequenceActor* SequencePlayer, EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSequenceEventListener", "OnSequenceEventInternal");
    struct
    {
        struct AGPSequenceActor* SequencePlayer;
        enum EGPSequenceCustomEvent EventName;
        struct FName EventSubName;
        struct FString EventArgs;
    } Parms{};
    Parms.SequencePlayer = (struct AGPSequenceActor*)SequencePlayer;
    Parms.EventName = (enum EGPSequenceCustomEvent)EventName;
    Parms.EventSubName = (struct FName)EventSubName;
    Parms.EventArgs = (struct FString)EventArgs;
    this->ProcessEvent(Func, &Parms);
}

// UQA_GPCommonMediaPlayer
struct UQA_GPCommonMediaPlayer* UQA_GPCommonMediaPlayer::QA_PlayCommonMedia(struct AGPQuestActionContext* QAContext, struct FName MediaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPCommonMediaPlayer", "QA_PlayCommonMedia");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName MediaName;
        struct UQA_GPCommonMediaPlayer* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MediaName = (struct FName)MediaName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_GPCommonMediaPlayer::OnEndMediaInternal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPCommonMediaPlayer", "OnEndMediaInternal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPCommonMediaPlayer::OnBeginMediaInternal(struct FString OpenedUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPCommonMediaPlayer", "OnBeginMediaInternal");
    struct
    {
        struct FString OpenedUrl;
    } Parms{};
    Parms.OpenedUrl = (struct FString)OpenedUrl;
    this->ProcessEvent(Func, &Parms);
}

// UQA_GPCommonMediaPlayer_Server
struct UQA_GPCommonMediaPlayer_Server* UQA_GPCommonMediaPlayer_Server::QA_PlayCommonMedia_Server(struct AGPQuestActionContext* QAContext, struct FName MediaName, float MediaLength, float Timeout, float DelayOutTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPCommonMediaPlayer_Server", "QA_PlayCommonMedia_Server");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName MediaName;
        float MediaLength;
        float Timeout;
        float DelayOutTime;
        struct UQA_GPCommonMediaPlayer_Server* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MediaName = (struct FName)MediaName;
    Parms.MediaLength = (float)MediaLength;
    Parms.Timeout = (float)Timeout;
    Parms.DelayOutTime = (float)DelayOutTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_GPCommonMediaPlayer_Server::OnTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPCommonMediaPlayer_Server", "OnTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPCommonMediaPlayer_Server::OnNotifyPlayerMediaEnd(uint32_t MediaNameCrc, uint64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPCommonMediaPlayer_Server", "OnNotifyPlayerMediaEnd");
    struct
    {
        uint32_t MediaNameCrc;
        uint64_t PlayerUin;
    } Parms{};
    Parms.MediaNameCrc = (uint32_t)MediaNameCrc;
    Parms.PlayerUin = (uint64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPCommonMediaPlayer_Server::OnEndMediaInternal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPCommonMediaPlayer_Server", "OnEndMediaInternal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_GPSubtitleSequence
struct UQA_GPSubtitleSequence* UQA_GPSubtitleSequence::QA_GPSubtitleSequenceWithTeamIds(struct AGPQuestActionContext* QAContext, const struct FName& SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType, struct TArray<int32_t> TeamIds, struct AActor* SpeakerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSubtitleSequence", "QA_GPSubtitleSequenceWithTeamIds");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SubtitleSeqId;
        enum ESubtitleSequenceType SubtitleSeqType;
        struct TArray<int32_t> TeamIds;
        struct AActor* SpeakerActor;
        struct UQA_GPSubtitleSequence* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SubtitleSeqId = (struct FName)SubtitleSeqId;
    Parms.SubtitleSeqType = (enum ESubtitleSequenceType)SubtitleSeqType;
    Parms.TeamIds = (struct TArray<int32_t>)TeamIds;
    Parms.SpeakerActor = (struct AActor*)SpeakerActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_GPSubtitleSequence* UQA_GPSubtitleSequence::QA_GPSubtitleSequence(struct AGPQuestActionContext* QAContext, const struct FName& SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType, struct AActor* SpeakerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_GPSubtitleSequence", "QA_GPSubtitleSequence");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SubtitleSeqId;
        enum ESubtitleSequenceType SubtitleSeqType;
        struct AActor* SpeakerActor;
        struct UQA_GPSubtitleSequence* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SubtitleSeqId = (struct FName)SubtitleSeqId;
    Parms.SubtitleSeqType = (enum ESubtitleSequenceType)SubtitleSeqType;
    Parms.SpeakerActor = (struct AActor*)SpeakerActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_GPSubtitleSequence::OnEndSubtitleSeqInternal(const struct FSubtitleSequenceInfo& SubtitleSeqInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSubtitleSequence", "OnEndSubtitleSeqInternal");
    struct
    {
        struct FSubtitleSequenceInfo SubtitleSeqInfo;
    } Parms{};
    Parms.SubtitleSeqInfo = (struct FSubtitleSequenceInfo)SubtitleSeqInfo;
    this->ProcessEvent(Func, &Parms);
}

void UQA_GPSubtitleSequence::OnBeginSubtitleSeqInternal(const struct FSubtitleSequenceInfo& SubtitleSeqInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_GPSubtitleSequence", "OnBeginSubtitleSeqInternal");
    struct
    {
        struct FSubtitleSequenceInfo SubtitleSeqInfo;
    } Parms{};
    Parms.SubtitleSeqInfo = (struct FSubtitleSequenceInfo)SubtitleSeqInfo;
    this->ProcessEvent(Func, &Parms);
}

// UQA_HealthListener
struct UQA_HealthListener* UQA_HealthListener::QA_HealthListener(struct AGPQuestActionContext* QAContext, struct FName QATag_, EGPQuestActionCompareOperator Compare, float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_HealthListener", "QA_HealthListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_;
        enum EGPQuestActionCompareOperator Compare;
        float Percent;
        struct UQA_HealthListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_ = (struct FName)QATag_;
    Parms.Compare = (enum EGPQuestActionCompareOperator)Compare;
    Parms.Percent = (float)Percent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_HealthListener::FireReturnAction(struct AActor* Owner, int32_t CurrentValue, int32_t MaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_HealthListener", "FireReturnAction");
    struct
    {
        struct AActor* Owner;
        int32_t CurrentValue;
        int32_t MaxValue;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.CurrentValue = (int32_t)CurrentValue;
    Parms.MaxValue = (int32_t)MaxValue;
    this->ProcessEvent(Func, &Parms);
}

// UQA_CharacterBuffListener
struct UQA_CharacterBuffListener* UQA_CharacterBuffListener::QA_CharacterBuffListener(struct AGPQuestActionContext* QAContext, struct AActor* CHARACTER, int32_t BuffId, uint8_t bListenAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_CharacterBuffListener", "QA_CharacterBuffListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* CHARACTER;
        int32_t BuffId;
        uint8_t bListenAdd;
        struct UQA_CharacterBuffListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.BuffId = (int32_t)BuffId;
    Parms.bListenAdd = (uint8_t)bListenAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_CharacterBuffListener::FireReturnAction(uint32_t BuffId, ECharacterPart CharacterPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CharacterBuffListener", "FireReturnAction");
    struct
    {
        uint32_t BuffId;
        enum ECharacterPart CharacterPart;
    } Parms{};
    Parms.BuffId = (uint32_t)BuffId;
    Parms.CharacterPart = (enum ECharacterPart)CharacterPart;
    this->ProcessEvent(Func, &Parms);
}

// UQA_InAreaPlayerListener
struct UQA_InAreaPlayerListener* UQA_InAreaPlayerListener::QA_InAreaPlayerListener(struct AGPQuestActionContext* QAContext, struct FName QATag, float FailedTimeLimit, float FixedNtfTimeStep, uint8_t bOnceForFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_InAreaPlayerListener", "QA_InAreaPlayerListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag;
        float FailedTimeLimit;
        float FixedNtfTimeStep;
        uint8_t bOnceForFailed;
        struct UQA_InAreaPlayerListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag = (struct FName)QATag;
    Parms.FailedTimeLimit = (float)FailedTimeLimit;
    Parms.FixedNtfTimeStep = (float)FixedNtfTimeStep;
    Parms.bOnceForFailed = (uint8_t)bOnceForFailed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_InAreaPlayerListener::NtfStatInAreaPlayers(struct TArray<struct ADFMPlayerCharacter*> DFMPlayerCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_InAreaPlayerListener", "NtfStatInAreaPlayers");
    struct
    {
        struct TArray<struct ADFMPlayerCharacter*> DFMPlayerCharacters;
    } Parms{};
    Parms.DFMPlayerCharacters = (struct TArray<struct ADFMPlayerCharacter*>)DFMPlayerCharacters;
    this->ProcessEvent(Func, &Parms);
}

void UQA_InAreaPlayerListener::NtfListenerFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_InAreaPlayerListener", "NtfListenerFailed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_InteractorController
struct UQA_InteractorController* UQA_InteractorController::QA_InteractorController(struct AGPQuestActionContext* QAContext, struct FName QATag_GPQuestInteractorInterface_InteractorTag, EQA_InteractorControllerOption Option, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_InteractorController", "QA_InteractorController");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_GPQuestInteractorInterface_InteractorTag;
        enum EQA_InteractorControllerOption Option;
        enum EGPQuestActionScope Scope;
        struct UQA_InteractorController* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_GPQuestInteractorInterface_InteractorTag = (struct FName)QATag_GPQuestInteractorInterface_InteractorTag;
    Parms.Option = (enum EQA_InteractorControllerOption)Option;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_InteractorController::OnInteractorStatusChanged(struct TScriptInterface<IGPQuestInteractorInterface> Interactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_InteractorController", "OnInteractorStatusChanged");
    struct
    {
        struct TScriptInterface<IGPQuestInteractorInterface> Interactor;
    } Parms{};
    Parms.Interactor = (struct TScriptInterface<IGPQuestInteractorInterface>)Interactor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_InteractorStatusListener
struct UQA_InteractorStatusListener* UQA_InteractorStatusListener::QA_InteractorStatusListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag, struct FName ReleaseParams, uint8_t Once, uint8_t OnlyTemateCanInteract, uint8_t OnlyReceiveContractTeamInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_InteractorStatusListener", "QA_InteractorStatusListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        struct FName InteractorTag;
        struct FName ReleaseParams;
        uint8_t Once;
        uint8_t OnlyTemateCanInteract;
        uint8_t OnlyReceiveContractTeamInteract;
        struct UQA_InteractorStatusListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.InteractorTag = (struct FName)InteractorTag;
    Parms.ReleaseParams = (struct FName)ReleaseParams;
    Parms.Once = (uint8_t)Once;
    Parms.OnlyTemateCanInteract = (uint8_t)OnlyTemateCanInteract;
    Parms.OnlyReceiveContractTeamInteract = (uint8_t)OnlyReceiveContractTeamInteract;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_InteractorStatusListener::FireOnStartInteractAnim(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_InteractorStatusListener", "FireOnStartInteractAnim");
    struct
    {
        uint64_t Uin;
        struct AActor* Actor;
        enum EInteractorType InteractorType;
        struct FString Params;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InteractorType = (enum EInteractorType)InteractorType;
    Parms.Params = (struct FString)Params;
    this->ProcessEvent(Func, &Parms);
}

void UQA_InteractorStatusListener::FireOnDoInteract(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_InteractorStatusListener", "FireOnDoInteract");
    struct
    {
        uint64_t Uin;
        struct AActor* Actor;
        enum EInteractorType InteractorType;
        struct FString Params;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InteractorType = (enum EInteractorType)InteractorType;
    Parms.Params = (struct FString)Params;
    this->ProcessEvent(Func, &Parms);
}

// UQA_InteractorButtonShownListener
struct UQA_InteractorButtonShownListener* UQA_InteractorButtonShownListener::QA_InteractorButtonShownListener(struct AGPQuestActionContext* QAContext, struct FName InteractorTag, uint8_t Once)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_InteractorButtonShownListener", "QA_InteractorButtonShownListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName InteractorTag;
        uint8_t Once;
        struct UQA_InteractorButtonShownListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InteractorTag = (struct FName)InteractorTag;
    Parms.Once = (uint8_t)Once;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_InteractorButtonShownListener::QA_InteractorButtonListenerStop(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_InteractorButtonShownListener", "QA_InteractorButtonListenerStop");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_InteractorButtonShownListener::OnInteractorButtonShown(ELootingStatus Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_InteractorButtonShownListener", "OnInteractorButtonShown");
    struct
    {
        enum ELootingStatus Status;
    } Parms{};
    Parms.Status = (enum ELootingStatus)Status;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TutorialLootingListener
struct UQA_TutorialLootingListener* UQA_TutorialLootingListener::QA_TutorialLootingListener(struct AGPQuestActionContext* QAContext, struct AActor* InteractorActor, int32_t LootingAiIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TutorialLootingListener", "QA_TutorialLootingListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* InteractorActor;
        int32_t LootingAiIndex;
        struct UQA_TutorialLootingListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InteractorActor = (struct AActor*)InteractorActor;
    Parms.LootingAiIndex = (int32_t)LootingAiIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TutorialLootingListener::OnTutorialLootingStatusChanged(ELootingStatus Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TutorialLootingListener", "OnTutorialLootingStatusChanged");
    struct
    {
        enum ELootingStatus Status;
    } Parms{};
    Parms.Status = (enum ELootingStatus)Status;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TutorialMapGuideListener
struct UQA_TutorialMapGuideListener* UQA_TutorialMapGuideListener::QA_TutorialMapGuideListener(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TutorialMapGuideListener", "QA_TutorialMapGuideListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_TutorialMapGuideListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TutorialMapGuideListener::OnTutorialMapGuideChanged(uint8_t bBigMapGuideFinished)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TutorialMapGuideListener", "OnTutorialMapGuideChanged");
    struct
    {
        uint8_t bBigMapGuideFinished;
    } Parms{};
    Parms.bBigMapGuideFinished = (uint8_t)bBigMapGuideFinished;
    this->ProcessEvent(Func, &Parms);
}

// UQA_MorseCodeSuccessListener
struct UQA_MorseCodeSuccessListener* UQA_MorseCodeSuccessListener::QA_MorseCodeSuccessListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_MorseCodeSuccessListener", "QA_MorseCodeSuccessListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        struct FName InteractorTag;
        struct UQA_MorseCodeSuccessListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.InteractorTag = (struct FName)InteractorTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_MorseCodeSuccessListener::FireMorseCodeSuccess(uint8_t bSuccess, struct AActor* Actor, uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_MorseCodeSuccessListener", "FireMorseCodeSuccess");
    struct
    {
        uint8_t bSuccess;
        struct AActor* Actor;
        uint64_t Uin;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    Parms.Actor = (struct AActor*)Actor;
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

// UQA_PortalDoorListener
struct UQA_PortalDoorListener* UQA_PortalDoorListener::QA_PortalDoorListener(struct AGPQuestActionContext* QAContext, struct FName PortalDoorTag, uint8_t bListenMultiTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PortalDoorListener", "QA_PortalDoorListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName PortalDoorTag;
        uint8_t bListenMultiTimes;
        struct UQA_PortalDoorListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PortalDoorTag = (struct FName)PortalDoorTag;
    Parms.bListenMultiTimes = (uint8_t)bListenMultiTimes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PortalDoorListener::FirePortalDoorToggled(struct AActor* PortalDoor, struct AGPCharacter* PlayerChara)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PortalDoorListener", "FirePortalDoorToggled");
    struct
    {
        struct AActor* PortalDoor;
        struct AGPCharacter* PlayerChara;
    } Parms{};
    Parms.PortalDoor = (struct AActor*)PortalDoor;
    Parms.PlayerChara = (struct AGPCharacter*)PlayerChara;
    this->ProcessEvent(Func, &Parms);
}

// UQA_HackPcOperationWillEnableTimeFinishListener
struct UQA_HackPcOperationWillEnableTimeFinishListener* UQA_HackPcOperationWillEnableTimeFinishListener::QA_HackPcOperationWillEnableTimeFinishListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_HackPcOperationWillEnableTimeFinishListener", "QA_HackPcOperationWillEnableTimeFinishListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        struct FName InteractorTag;
        struct UQA_HackPcOperationWillEnableTimeFinishListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.InteractorTag = (struct FName)InteractorTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_HackPcOperationWillEnableTimeFinishListener::OnBraveGameHackPcTimeFinish(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_HackPcOperationWillEnableTimeFinishListener", "OnBraveGameHackPcTimeFinish");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_LevelSequenceActingOnPauseTrigger
struct UQA_LevelSequenceActingOnPauseTrigger* UQA_LevelSequenceActingOnPauseTrigger::QA_LevelSequenceActingOnPauseTrigger(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName ActorTag, uint8_t bOnce, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_LevelSequenceActingOnPauseTrigger", "QA_LevelSequenceActingOnPauseTrigger");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        struct FName ActorTag;
        uint8_t bOnce;
        enum EGPQuestActionScope Scope;
        struct UQA_LevelSequenceActingOnPauseTrigger* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.ActorTag = (struct FName)ActorTag;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_LevelSequenceActingOnPauseTrigger::OnPauseTriggered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_LevelSequenceActingOnPauseTrigger", "OnPauseTriggered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_ListenPlayerOffBattle
struct UQA_ListenPlayerOffBattle* UQA_ListenPlayerOffBattle::QA_ListenPlayerOffBattle(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, float OffBattleTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_ListenPlayerOffBattle", "QA_ListenPlayerOffBattle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* GPCharacter;
        float OffBattleTime;
        struct UQA_ListenPlayerOffBattle* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    Parms.OffBattleTime = (float)OffBattleTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_ListenPlayerOffBattle::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ListenPlayerOffBattle", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_LootingDeadBodyListener
struct UQA_LootingDeadBodyListener* UQA_LootingDeadBodyListener::QA_LootingDeadBodyListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_LootingDeadBodyListener", "QA_LootingDeadBodyListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SourceTag;
        struct UQA_LootingDeadBodyListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SourceTag = (struct FName)SourceTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_LootingDeadBodyListener::NtfOwnerSearchDeadBody(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_LootingDeadBodyListener", "NtfOwnerSearchDeadBody");
    struct
    {
        uint64_t Uin;
        struct AActor* Actor;
        enum EInteractorType InteractorType;
        struct FString Params;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InteractorType = (enum EInteractorType)InteractorType;
    Parms.Params = (struct FString)Params;
    this->ProcessEvent(Func, &Parms);
}

// UQA_LootingListener
struct UQA_LootingListener* UQA_LootingListener::QA_PlayerLootingItemListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* ListenPlayer, struct FName SourceTag, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_LootingListener", "QA_PlayerLootingItemListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* ListenPlayer;
        struct FName SourceTag;
        uint8_t bOnce;
        struct UQA_LootingListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ListenPlayer = (struct AGPCharacter*)ListenPlayer;
    Parms.SourceTag = (struct FName)SourceTag;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_LootingListener* UQA_LootingListener::QA_LootingListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_LootingListener", "QA_LootingListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SourceTag;
        struct UQA_LootingListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SourceTag = (struct FName)SourceTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_LootingListener::OnServerItemMoveCmd(struct FItemMoveCmd ItemMoveCmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_LootingListener", "OnServerItemMoveCmd");
    struct
    {
        struct FItemMoveCmd ItemMoveCmd;
    } Parms{};
    Parms.ItemMoveCmd = (struct FItemMoveCmd)ItemMoveCmd;
    this->ProcessEvent(Func, &Parms);
}

// UQA_MultiTriggerListener
struct UQA_MultiTriggerListener* UQA_MultiTriggerListener::QA_MultiTriggerListener(struct AGPQuestActionContext* QAContext, EGPQuestActionTriggerType Type, struct FName QATag_, struct AActor* ActorTypeA, struct AActor* ActorTypeB, EQA_TriggerListenerOption Option, EGPQuestActionScope Scope, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_MultiTriggerListener", "QA_MultiTriggerListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EGPQuestActionTriggerType Type;
        struct FName QATag_;
        struct AActor* ActorTypeA;
        struct AActor* ActorTypeB;
        enum EQA_TriggerListenerOption Option;
        enum EGPQuestActionScope Scope;
        uint8_t bOnce;
        struct UQA_MultiTriggerListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Type = (enum EGPQuestActionTriggerType)Type;
    Parms.QATag_ = (struct FName)QATag_;
    Parms.ActorTypeA = (struct AActor*)ActorTypeA;
    Parms.ActorTypeB = (struct AActor*)ActorTypeB;
    Parms.Option = (enum EQA_TriggerListenerOption)Option;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_MultiTriggerListener::FireReturnAction_Overlap(struct AActor* Trigger, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_MultiTriggerListener", "FireReturnAction_Overlap");
    struct
    {
        struct AActor* Trigger;
        struct AActor* OtherActor;
    } Parms{};
    Parms.Trigger = (struct AActor*)Trigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void UQA_MultiTriggerListener::FireReturnAction_Hit(struct AActor* Trigger, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_MultiTriggerListener", "FireReturnAction_Hit");
    struct
    {
        struct AActor* Trigger;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.Trigger = (struct AActor*)Trigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

// UQA_PlayerDeathListener
struct UQA_PlayerDeathListener* UQA_PlayerDeathListener::QA_PlayerDeathListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerDeathListener", "QA_PlayerDeathListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bOnce;
        struct UQA_PlayerDeathListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PlayerDeathListener::FireReturnAction(struct ADFMPlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerDeathListener", "FireReturnAction");
    struct
    {
        struct ADFMPlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct ADFMPlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
}

// UQA_PlayerExitListener
struct UQA_PlayerExitListener* UQA_PlayerExitListener::QA_PlayerExitListener(struct AGPQuestActionContext* QAContext, struct ACHARACTER* Player, struct FName QATag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerExitListener", "QA_PlayerExitListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ACHARACTER* Player;
        struct FName QATag;
        struct UQA_PlayerExitListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct ACHARACTER*)Player;
    Parms.QATag = (struct FName)QATag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PlayerExitListener::QA_ActivePlayerExit(struct AGPQuestActionContext* QAContext, struct FName QATag, uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerExitListener", "QA_ActivePlayerExit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag;
        uint8_t bActive;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag = (struct FName)QATag;
    Parms.bActive = (uint8_t)bActive;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_PlayerExitListener::OnPlayerStartEscape(struct ACHARACTER* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerExitListener", "OnPlayerStartEscape");
    struct
    {
        struct ACHARACTER* Player;
    } Parms{};
    Parms.Player = (struct ACHARACTER*)Player;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerExitListener::OnPlayerEscaping(struct ACHARACTER* CHARACTER, struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerExitListener", "OnPlayerEscaping");
    struct
    {
        struct ACHARACTER* CHARACTER;
        struct AController* Controller;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.Controller = (struct AController*)Controller;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerExitListener::OnPlayerEscaped(struct ACHARACTER* Player, struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerExitListener", "OnPlayerEscaped");
    struct
    {
        struct ACHARACTER* Player;
        struct AController* Controller;
    } Parms{};
    Parms.Player = (struct ACHARACTER*)Player;
    Parms.Controller = (struct AController*)Controller;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerExitListener::OnPlayerCancelEscape(struct ACHARACTER* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerExitListener", "OnPlayerCancelEscape");
    struct
    {
        struct ACHARACTER* Player;
    } Parms{};
    Parms.Player = (struct ACHARACTER*)Player;
    this->ProcessEvent(Func, &Parms);
}

// UQA_PlayerSafePathListener
struct UQA_PlayerSafePathListener* UQA_PlayerSafePathListener::QA_PlayerSafePathListener(struct AGPQuestActionContext* QAContext, EQA_PlayerSafePathListenerOption Option, struct FName QATag_GPPlayerSafePathListener_PlayerSafePathListener, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerSafePathListener", "QA_PlayerSafePathListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_PlayerSafePathListenerOption Option;
        struct FName QATag_GPPlayerSafePathListener_PlayerSafePathListener;
        enum EGPQuestActionScope Scope;
        struct UQA_PlayerSafePathListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Option = (enum EQA_PlayerSafePathListenerOption)Option;
    Parms.QATag_GPPlayerSafePathListener_PlayerSafePathListener = (struct FName)QATag_GPPlayerSafePathListener_PlayerSafePathListener;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PlayerSafePathListener::OnLeaveSafePathInternal(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSafePathListener", "OnLeaveSafePathInternal");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerSafePathListener::OnEnterSafePathInternal(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSafePathListener", "OnEnterSafePathInternal");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// UQA_PlayersChaseTargetListener
struct UQA_PlayersChaseTargetListener* UQA_PlayersChaseTargetListener::QA_PlayersChaseTargetListener(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, EPlayersChaseTargetMode CheckMode, struct FName QATag_TargetTag, float TargetThreshold, float WarningThreshold, float FailThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayersChaseTargetListener", "QA_PlayersChaseTargetListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* TargetClass;
        enum EPlayersChaseTargetMode CheckMode;
        struct FName QATag_TargetTag;
        float TargetThreshold;
        float WarningThreshold;
        float FailThreshold;
        struct UQA_PlayersChaseTargetListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetClass = (struct AActor*)TargetClass;
    Parms.CheckMode = (enum EPlayersChaseTargetMode)CheckMode;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.TargetThreshold = (float)TargetThreshold;
    Parms.WarningThreshold = (float)WarningThreshold;
    Parms.FailThreshold = (float)FailThreshold;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PlayersChaseTargetListener::OnPlayerEnterWarningZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayersChaseTargetListener", "OnPlayerEnterWarningZone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayersChaseTargetListener::OnPlayerEnterTargetZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayersChaseTargetListener", "OnPlayerEnterTargetZone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayersChaseTargetListener::OnPlayerEnterSafeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayersChaseTargetListener", "OnPlayerEnterSafeZone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayersChaseTargetListener::OnPlayerEnterFailZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayersChaseTargetListener", "OnPlayerEnterFailZone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_PlayerSkillListener
struct UQA_PlayerSkillListener* UQA_PlayerSkillListener::QA_OnWeaponBowBeginFire(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerSkillListener", "QA_OnWeaponBowBeginFire");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_PlayerSkillListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_PlayerSkillListener* UQA_PlayerSkillListener::QA_OnSkillBeginTrigger(struct AGPQuestActionContext* QAContext, int32_t SkillId, struct AGPCharacter* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerSkillListener", "QA_OnSkillBeginTrigger");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t SkillId;
        struct AGPCharacter* Player;
        struct UQA_PlayerSkillListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SkillId = (int32_t)SkillId;
    Parms.Player = (struct AGPCharacter*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_PlayerSkillListener* UQA_PlayerSkillListener::QA_OnDetectorArrowSucceed(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, uint8_t bUntilSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerSkillListener", "QA_OnDetectorArrowSucceed");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        uint8_t bUntilSuccess;
        struct UQA_PlayerSkillListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.bUntilSuccess = (uint8_t)bUntilSuccess;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PlayerSkillListener::OnWeaponSwitchToBow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSkillListener", "OnWeaponSwitchToBow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerSkillListener::OnSkillSucceed(int64_t EffectNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSkillListener", "OnSkillSucceed");
    struct
    {
        int64_t EffectNum;
    } Parms{};
    Parms.EffectNum = (int64_t)EffectNum;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerSkillListener::OnSkillEnd(int64_t EffectNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSkillListener", "OnSkillEnd");
    struct
    {
        int64_t EffectNum;
    } Parms{};
    Parms.EffectNum = (int64_t)EffectNum;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerSkillListener::OnSkillCast(ECharingSlot Slot, int32_t SkillId, uint8_t CastOrEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSkillListener", "OnSkillCast");
    struct
    {
        enum ECharingSlot Slot;
        int32_t SkillId;
        uint8_t CastOrEnd;
    } Parms{};
    Parms.Slot = (enum ECharingSlot)Slot;
    Parms.SkillId = (int32_t)SkillId;
    Parms.CastOrEnd = (uint8_t)CastOrEnd;
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerSkillListener::OnChargeGunStateChanged(uint8_t bIsCharging)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerSkillListener", "OnChargeGunStateChanged");
    struct
    {
        uint8_t bIsCharging;
    } Parms{};
    Parms.bIsCharging = (uint8_t)bIsCharging;
    this->ProcessEvent(Func, &Parms);
}

// UQA_DetectorArrowFireListener
struct UQA_DetectorArrowFireListener* UQA_DetectorArrowFireListener::QA_DetectorArrowFireListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_DetectorArrowFireListener", "QA_DetectorArrowFireListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        struct UQA_DetectorArrowFireListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_DetectorArrowFireListener::OnSkillBeginFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_DetectorArrowFireListener", "OnSkillBeginFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_PlayerTransitionMove
struct UQA_PlayerTransitionMove* UQA_PlayerTransitionMove::QA_StartTransitionMove(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, struct FName QATag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerTransitionMove", "QA_StartTransitionMove");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        struct FName QATag;
        enum EGPQuestActionScope Scope;
        struct UQA_PlayerTransitionMove* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.QATag = (struct FName)QATag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_PlayerTransitionMove* UQA_PlayerTransitionMove::QA_AccurateInteractListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, struct FName QATag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_PlayerTransitionMove", "QA_AccurateInteractListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* Player;
        struct FName QATag;
        enum EGPQuestActionScope Scope;
        struct UQA_PlayerTransitionMove* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.QATag = (struct FName)QATag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_PlayerTransitionMove::OnPlayerTransitionMoveEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerTransitionMove", "OnPlayerTransitionMoveEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerTransitionMove::OnPlayerTransitionMoveBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerTransitionMove", "OnPlayerTransitionMoveBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_PlayerTransitionMove::OnPlayerAccurateInteract(struct ACHARACTER* Player, struct AActor* Interactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_PlayerTransitionMove", "OnPlayerAccurateInteract");
    struct
    {
        struct ACHARACTER* Player;
        struct AActor* Interactor;
    } Parms{};
    Parms.Player = (struct ACHARACTER*)Player;
    Parms.Interactor = (struct AActor*)Interactor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_RandomRangeExec
struct UQA_RandomRangeExec* UQA_RandomRangeExec::QA_RandomNumber(struct AGPQuestActionContext* QAContext, float Weight1, float Weight2, float Weight3, float Weight4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_RandomRangeExec", "QA_RandomNumber");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        float Weight1;
        float Weight2;
        float Weight3;
        float Weight4;
        struct UQA_RandomRangeExec* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Weight1 = (float)Weight1;
    Parms.Weight2 = (float)Weight2;
    Parms.Weight3 = (float)Weight3;
    Parms.Weight4 = (float)Weight4;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_RandomRangeExec::OnRange4Exec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_RandomRangeExec", "OnRange4Exec");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_RandomRangeExec::OnRange3Exec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_RandomRangeExec", "OnRange3Exec");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_RandomRangeExec::OnRange2Exec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_RandomRangeExec", "OnRange2Exec");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_RandomRangeExec::OnRange1Exec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_RandomRangeExec", "OnRange1Exec");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_RestResurrectCoin
struct UQA_RestResurrectCoin* UQA_RestResurrectCoin::QA_ResetResurrectCoin(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_RestResurrectCoin", "QA_ResetResurrectCoin");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* TargetPlayerCtrl;
        struct UQA_RestResurrectCoin* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetPlayerCtrl = (struct APlayerController*)TargetPlayerCtrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_SequenceStream
struct UQA_SequenceStream* UQA_SequenceStream::QA_StopSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_StopSequenceStream");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_StartSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_StartSequenceStream");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct FName SectionTag;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    Parms.SectionTag = (struct FName)SectionTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_SetNextSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName NextSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_SetNextSection");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct FName NextSection;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    Parms.NextSection = (struct FName)NextSection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_PreloadSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, int32_t PreloadNums)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_PreloadSequenceStream");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        int32_t PreloadNums;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    Parms.PreloadNums = (int32_t)PreloadNums;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_ListenSequenceSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_ListenSequenceSection");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct FName SectionTag;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    Parms.SectionTag = (struct FName)SectionTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_ListenSequenceAnySection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_ListenSequenceAnySection");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_GotoSequenceSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_GotoSequenceSection");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct FName SectionTag;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    Parms.SectionTag = (struct FName)SectionTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SequenceStream* UQA_SequenceStream::QA_GotoNextSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SequenceStream", "QA_GotoNextSection");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName SequenceStreamTag;
        struct FName SectionTag;
        struct UQA_SequenceStream* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SequenceStreamTag = (struct FName)SequenceStreamTag;
    Parms.SectionTag = (struct FName)SectionTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SequenceStream::OnSequenceSectionEnd(struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SequenceStream", "OnSequenceSectionEnd");
    struct
    {
        struct FName Key;
    } Parms{};
    Parms.Key = (struct FName)Key;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SequenceStream::OnSequenceSectionBegin(struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SequenceStream", "OnSequenceSectionBegin");
    struct
    {
        struct FName Key;
    } Parms{};
    Parms.Key = (struct FName)Key;
    this->ProcessEvent(Func, &Parms);
}

// UQA_CutSceneViewTargetListener
struct UQA_CutSceneViewTargetListener* UQA_CutSceneViewTargetListener::QA_SequenceToPlayerCameraListener(struct AGPQuestActionContext* QAContext, struct APlayerController* Player, float TransitionSpeed, uint8_t bCopyLocAndRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_CutSceneViewTargetListener", "QA_SequenceToPlayerCameraListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* Player;
        float TransitionSpeed;
        uint8_t bCopyLocAndRot;
        struct UQA_CutSceneViewTargetListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Player = (struct APlayerController*)Player;
    Parms.TransitionSpeed = (float)TransitionSpeed;
    Parms.bCopyLocAndRot = (uint8_t)bCopyLocAndRot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_CutSceneViewTargetListener::OnSequenceToGameplay(struct AActor* LastViewTarget, struct AActor* NewViewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CutSceneViewTargetListener", "OnSequenceToGameplay");
    struct
    {
        struct AActor* LastViewTarget;
        struct AActor* NewViewTarget;
    } Parms{};
    Parms.LastViewTarget = (struct AActor*)LastViewTarget;
    Parms.NewViewTarget = (struct AActor*)NewViewTarget;
    this->ProcessEvent(Func, &Parms);
}

void UQA_CutSceneViewTargetListener::OnGameplayToSequence(struct AActor* LastViewTarget, struct AActor* NewViewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_CutSceneViewTargetListener", "OnGameplayToSequence");
    struct
    {
        struct AActor* LastViewTarget;
        struct AActor* NewViewTarget;
    } Parms{};
    Parms.LastViewTarget = (struct AActor*)LastViewTarget;
    Parms.NewViewTarget = (struct AActor*)NewViewTarget;
    this->ProcessEvent(Func, &Parms);
}

// UQA_ShowGuidePopWindowListener
struct UQA_ShowGuidePopWindowListener* UQA_ShowGuidePopWindowListener::QA_ShowGuidePopWindowListener(struct AGPQuestActionContext* QAContext, int32_t GuideID, struct FName GuideAudio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_ShowGuidePopWindowListener", "QA_ShowGuidePopWindowListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t GuideID;
        struct FName GuideAudio;
        struct UQA_ShowGuidePopWindowListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.GuideID = (int32_t)GuideID;
    Parms.GuideAudio = (struct FName)GuideAudio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_ShowGuidePopWindowListener::FireReturnAction(int32_t GuideID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_ShowGuidePopWindowListener", "FireReturnAction");
    struct
    {
        int32_t GuideID;
    } Parms{};
    Parms.GuideID = (int32_t)GuideID;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SimplePathFollower
struct UQA_SimplePathFollower* UQA_SimplePathFollower::QA_SimplePathFollower(struct AGPQuestActionContext* QAContext, EQA_SimplePathFollowerOption Option, struct FName QATag_GPPathFollower_PathFollower, struct FName PathTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimplePathFollower", "QA_SimplePathFollower");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_SimplePathFollowerOption Option;
        struct FName QATag_GPPathFollower_PathFollower;
        struct FName PathTag;
        enum EGPQuestActionScope Scope;
        struct UQA_SimplePathFollower* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Option = (enum EQA_SimplePathFollowerOption)Option;
    Parms.QATag_GPPathFollower_PathFollower = (struct FName)QATag_GPPathFollower_PathFollower;
    Parms.PathTag = (struct FName)PathTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SimplePathFollower::OnEndFollowInternal(struct AActor* PathFollower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimplePathFollower", "OnEndFollowInternal");
    struct
    {
        struct AActor* PathFollower;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SimplePathFollower::OnBeginFollowInternal(struct AActor* PathFollower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimplePathFollower", "OnBeginFollowInternal");
    struct
    {
        struct AActor* PathFollower;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SimplePathFollowerCustomEvent
struct UQA_SimplePathFollowerCustomEvent* UQA_SimplePathFollowerCustomEvent::QA_SimplePathFollowerCustomEvent(struct AGPQuestActionContext* QAContext, struct FName FollowerTag, struct FName EventName, uint8_t bOnce, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimplePathFollowerCustomEvent", "QA_SimplePathFollowerCustomEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName FollowerTag;
        struct FName EventName;
        uint8_t bOnce;
        enum EGPQuestActionScope Scope;
        struct UQA_SimplePathFollowerCustomEvent* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.FollowerTag = (struct FName)FollowerTag;
    Parms.EventName = (struct FName)EventName;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SimplePathFollowerCustomEvent::OnCustomEventInternal(struct AActor* PathFollower, struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimplePathFollowerCustomEvent", "OnCustomEventInternal");
    struct
    {
        struct AActor* PathFollower;
        struct FName EventName;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    Parms.EventName = (struct FName)EventName;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SimpleActionListener
struct UQA_SimpleActionBase* UQA_SimpleActionListener::QAS_PlayCustomAnim(struct AGPQuestActionContext* QAContext, struct UAnimSequenceBase* AnimSequenceToPlay1P, struct UAnimSequenceBase* AnimSequenceToPlay3P, float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QAS_PlayCustomAnim");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UAnimSequenceBase* AnimSequenceToPlay1P;
        struct UAnimSequenceBase* AnimSequenceToPlay3P;
        float PlayRate;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AnimSequenceToPlay1P = (struct UAnimSequenceBase*)AnimSequenceToPlay1P;
    Parms.AnimSequenceToPlay3P = (struct UAnimSequenceBase*)AnimSequenceToPlay3P;
    Parms.PlayRate = (float)PlayRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionBase* UQA_SimpleActionListener::QAS_GetCompletedRaidFrontLevelNum(struct AGPQuestActionContext* QAContext, int32_t& Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QAS_GetCompletedRaidFrontLevelNum");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t Num;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Num = Parms.Num;
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_UnLoadMissionPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_UnLoadMissionPersistLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct TSoftObjectPtr<UWorld>> Levels;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Levels = (struct TArray<struct TSoftObjectPtr<UWorld>>)Levels;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_UnLoadMissionPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_UnLoadMissionPersistLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TSoftObjectPtr<UWorld> Level;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Level = (struct TSoftObjectPtr<UWorld>)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_UnLoadMissionBindPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_UnLoadMissionBindPersistLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct TSoftObjectPtr<UWorld>> Levels;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Levels = (struct TArray<struct TSoftObjectPtr<UWorld>>)Levels;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_UnLoadMissionBindPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_UnLoadMissionBindPersistLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TSoftObjectPtr<UWorld> Level;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Level = (struct TSoftObjectPtr<UWorld>)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SimpleActionListener::QA_TriggerTimeLineEventByTag(struct AGPQuestActionContext* QAContext, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_TriggerTimeLineEventByTag");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FString)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_SimpleActionListener::QA_TriggerTimeLineEventByName(struct AGPQuestActionContext* QAContext, struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_TriggerTimeLineEventByName");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Name;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SimpleStageAction(struct AGPQuestStage* QAContext, struct TArray<struct FSimpleActionArgument> Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SimpleStageAction");
    struct
    {
        struct AGPQuestStage* QAContext;
        struct TArray<struct FSimpleActionArgument> Args;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestStage*)QAContext;
    Parms.Args = (struct TArray<struct FSimpleActionArgument>)Args;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SimpleSingleAction(struct AGPQuestActionContext* QAContext, struct FSimpleActionArgument Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SimpleSingleAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FSimpleActionArgument Args;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Args = (struct FSimpleActionArgument)Args;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SimpleAction(struct AGPQuestActionContext* QAContext, struct TArray<struct FSimpleActionArgument> Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SimpleAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FSimpleActionArgument> Args;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Args = (struct TArray<struct FSimpleActionArgument>)Args;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_ShowTeamScore(struct AGPQuestActionContext* QAContext, uint8_t Show)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_ShowTeamScore");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t Show;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Show = (uint8_t)Show;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetTaskState(struct AGPQuestActionContext* GPQuest, struct FString CurrentTask, uint8_t complete)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetTaskState");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString CurrentTask;
        uint8_t complete;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.CurrentTask = (struct FString)CurrentTask;
    Parms.complete = (uint8_t)complete;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetTargetTask(struct AGPQuestActionContext* GPQuest, struct FString CurrentTask, struct FString TargetTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetTargetTask");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString CurrentTask;
        struct FString TargetTask;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.CurrentTask = (struct FString)CurrentTask;
    Parms.TargetTask = (struct FString)TargetTask;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetRaidTargetState(struct AGPQuestActionContext* GPQuest, struct FString Target, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetRaidTargetState");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString Target;
        uint8_t Value;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.Target = (struct FString)Target;
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetRaidTargets(struct AGPQuestActionContext* GPQuest, struct TArray<struct FString> Targets, struct TArray<struct FString> titles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetRaidTargets");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct TArray<struct FString> Targets;
        struct TArray<struct FString> titles;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.Targets = (struct TArray<struct FString>)Targets;
    Parms.titles = (struct TArray<struct FString>)titles;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetRaidLevelTime(struct AGPQuestActionContext* GPQuest, float LevelTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetRaidLevelTime");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        float LevelTime;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.LevelTime = (float)LevelTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetRaidLevelPos(struct AGPQuestActionContext* GPQuest, struct FString Target, struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetRaidLevelPos");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString Target;
        struct FVector pos;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.Target = (struct FString)Target;
    Parms.pos = (struct FVector)pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetRaidFailState(struct AGPQuestActionContext* GPQuest, struct FString Target, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetRaidFailState");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString Target;
        uint8_t Value;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.Target = (struct FString)Target;
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_SetRaidFails(struct AGPQuestActionContext* GPQuest, struct TArray<struct FString> Targets, struct TArray<struct FString> titles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_SetRaidFails");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct TArray<struct FString> Targets;
        struct TArray<struct FString> titles;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.Targets = (struct TArray<struct FString>)Targets;
    Parms.titles = (struct TArray<struct FString>)titles;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_RemoveBigWordMapMarker(struct AGPQuestActionContext* QAContext, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_RemoveBigWordMapMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Name;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_LoadMissionPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_LoadMissionPersistLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct TSoftObjectPtr<UWorld>> Levels;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Levels = (struct TArray<struct TSoftObjectPtr<UWorld>>)Levels;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_LoadMissionPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_LoadMissionPersistLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TSoftObjectPtr<UWorld> Level;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Level = (struct TSoftObjectPtr<UWorld>)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_LoadMissionBindPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_LoadMissionBindPersistLevels");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct TSoftObjectPtr<UWorld>> Levels;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Levels = (struct TArray<struct TSoftObjectPtr<UWorld>>)Levels;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_LoadMissionBindPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_LoadMissionBindPersistLevel");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TSoftObjectPtr<UWorld> Level;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Level = (struct TSoftObjectPtr<UWorld>)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionBase* UQA_SimpleActionListener::QA_GetMissionPlayers(struct AGPQuestActionContext* QAContext, struct TArray<struct APlayerController*>& TargetPlayerCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_GetMissionPlayers");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct APlayerController*> TargetPlayerCtrl;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TargetPlayerCtrl = Parms.TargetPlayerCtrl;
    return Parms.ReturnValue;
}

struct UQA_SimpleActionBase* UQA_SimpleActionListener::QA_GetMissionPlayer(struct AGPQuestActionContext* QAContext, struct APlayerController*& TargetPlayerCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_GetMissionPlayer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct APlayerController* TargetPlayerCtrl;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TargetPlayerCtrl = Parms.TargetPlayerCtrl;
    return Parms.ReturnValue;
}

struct UQA_SimpleActionBase* UQA_SimpleActionListener::QA_GetMainTrigger(struct AGPQuestActionContext* QAContext, struct UQASimpleQuestProxy*& MainTrigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_GetMainTrigger");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQASimpleQuestProxy* MainTrigger;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    MainTrigger = Parms.MainTrigger;
    return Parms.ReturnValue;
}

struct UQA_SimpleActionBase* UQA_SimpleActionListener::QA_EnableEffectTrigger(struct AGPQuestActionContext* QAContext, struct FString Tag, struct FLinearColor Color, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_EnableEffectTrigger");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Tag;
        struct FLinearColor Color;
        float Alpha;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FString)Tag;
    Parms.Color = (struct FLinearColor)Color;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionBase* UQA_SimpleActionListener::QA_DisableEffectTrigger(struct AGPQuestActionContext* QAContext, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_DisableEffectTrigger");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Tag;
        struct UQA_SimpleActionBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Tag = (struct FString)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_CreateTaskGroup(struct AGPQuestActionContext* GPQuest, struct FString Name, struct TArray<int32_t> Number)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_CreateTaskGroup");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString Name;
        struct TArray<int32_t> Number;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.Name = (struct FString)Name;
    Parms.Number = (struct TArray<int32_t>)Number;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_CreateABTeam(struct AGPQuestActionContext* GPQuest, struct FString A, struct FString B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_CreateABTeam");
    struct
    {
        struct AGPQuestActionContext* GPQuest;
        struct FString A;
        struct FString B;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuestActionContext*)GPQuest;
    Parms.A = (struct FString)A;
    Parms.B = (struct FString)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_CarraySomeBody(struct AGPQuestActionContext* QAContext, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_CarraySomeBody");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Name;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleActionListener* UQA_SimpleActionListener::QA_AddBigWordMapMarker(struct AGPQuestActionContext* QAContext, struct FName Name, EGPQuestActionMarkerType Type, uint8_t BindRotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleActionListener", "QA_AddBigWordMapMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Name;
        enum EGPQuestActionMarkerType Type;
        uint8_t BindRotate;
        struct UQA_SimpleActionListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FName)Name;
    Parms.Type = (enum EGPQuestActionMarkerType)Type;
    Parms.BindRotate = (uint8_t)BindRotate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SimpleActionListener::OnUnTriggerCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleActionListener", "OnUnTriggerCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_SimpleActionListener::OnTriggerCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleActionListener", "OnTriggerCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMMissionActionLib
void UDFMMissionActionLib::QA_SomeOneCarraySomeBody(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_SomeOneCarraySomeBody");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ACHARACTER* CHARACTER;
        struct FName Name;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_SetMissionTotalTime(struct AGPQuestActionContext* QAContext, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_SetMissionTotalTime");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        float Time;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_SetGameStateAction(struct AGPQuestActionContext* QAContext, struct FMissionStateAction Action, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_SetGameStateAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FMissionStateAction Action;
        int32_t Value;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Action = (struct FMissionStateAction)Action;
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_RemoveItem(struct AGPQuestActionContext* QAContext, int64_t ItemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_RemoveItem");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int64_t ItemID;
        int32_t Num;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ItemID = (int64_t)ItemID;
    Parms.Num = (int32_t)Num;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_PlayPlayerDialog(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, int32_t GroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_PlayPlayerDialog");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ACHARACTER* CHARACTER;
        int32_t GroupID;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.GroupID = (int32_t)GroupID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_PlayAbility(struct AGPQuestActionContext* QAContext, int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_PlayAbility");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t SkillId;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.SkillId = (int32_t)SkillId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_IsSomeOneCarraySomeBody(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, struct FName Name, uint8_t& carry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_IsSomeOneCarraySomeBody");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct ACHARACTER* CHARACTER;
        struct FName Name;
        uint8_t carry;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    carry = Parms.carry;
}

void UDFMMissionActionLib::QA_GetMissionTeamListeners(struct AGPQuestActionContext* QAContext, struct TArray<struct UQASimpleQuestProxy*>& Listeners)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionTeamListeners");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct UQASimpleQuestProxy*> Listeners;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Listeners = Parms.Listeners;
}

void UDFMMissionActionLib::QA_GetMissionTeamCharacter(struct AGPQuestActionContext* QAContext, struct FString Name, struct TArray<struct AGPCharacter*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionTeamCharacter");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Name;
        struct TArray<struct AGPCharacter*> OutActors;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UDFMMissionActionLib::QA_GetMissionSideListeners(struct AGPQuestActionContext* QAContext, struct TArray<struct UQASimpleQuestProxy*>& Listeners)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionSideListeners");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct UQASimpleQuestProxy*> Listeners;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Listeners = Parms.Listeners;
}

void UDFMMissionActionLib::QA_GetMissionPlayerCharacters(struct AGPQuestActionContext* QAContext, struct TArray<struct AGPCharacter*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionPlayerCharacters");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct AGPCharacter*> OutActors;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

struct AGPCharacter* UDFMMissionActionLib::QA_GetMissionPlayerCharacter(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionPlayerCharacter");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPCharacter* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMMissionActionLib::QA_GetMissionListeners(struct AGPQuestActionContext* QAContext, struct TArray<struct UQASimpleQuestProxy*>& Listeners)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionListeners");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct UQASimpleQuestProxy*> Listeners;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Listeners = Parms.Listeners;
}

void UDFMMissionActionLib::QA_GetMissionListener(struct AGPQuestActionContext* QAContext, struct FString Name, struct UQASimpleQuestProxy*& Listeners)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetMissionListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Name;
        struct UQASimpleQuestProxy* Listeners;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Listeners = Parms.Listeners;
}

void UDFMMissionActionLib::QA_GetGameStateAction(struct AGPQuestActionContext* QAContext, int32_t ActionId, int32_t& Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_GetGameStateAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t ActionId;
        int32_t Num;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActionId = (int32_t)ActionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Num = Parms.Num;
}

void UDFMMissionActionLib::QA_EndAllListener(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_EndAllListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_DoCarraySomeBody(struct AGPQuestActionContext* QAContext, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_DoCarraySomeBody");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName Name;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_AddGameStateAction(struct AGPQuestActionContext* QAContext, struct FMissionStateAction Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_AddGameStateAction");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FMissionStateAction Action;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Action = (struct FMissionStateAction)Action;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMMissionActionLib::QA_AddCarryBodyTag(struct AGPQuestActionContext* QAContext, struct FString Name, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMMissionActionLib", "QA_AddCarryBodyTag");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FString Name;
        struct FString Tag;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Name = (struct FString)Name;
    Parms.Tag = (struct FString)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UQA_LevelActionListener
struct UQA_LevelActionListener* UQA_LevelActionListener::QA_EnterRaidWorld(struct AGPQuest* GPQuest, struct TArray<struct TSoftObjectPtr<UWorld>> Levels, uint8_t New)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_LevelActionListener", "QA_EnterRaidWorld");
    struct
    {
        struct AGPQuest* GPQuest;
        struct TArray<struct TSoftObjectPtr<UWorld>> Levels;
        uint8_t New;
        struct UQA_LevelActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuest*)GPQuest;
    Parms.Levels = (struct TArray<struct TSoftObjectPtr<UWorld>>)Levels;
    Parms.New = (uint8_t)New;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_LevelActionListener* UQA_LevelActionListener::QA_EnterOpenWorld(struct AGPQuest* GPQuest, struct TArray<struct TSoftObjectPtr<UWorld>> Levels, uint8_t New)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_LevelActionListener", "QA_EnterOpenWorld");
    struct
    {
        struct AGPQuest* GPQuest;
        struct TArray<struct TSoftObjectPtr<UWorld>> Levels;
        uint8_t New;
        struct UQA_LevelActionListener* ReturnValue;
    } Parms{};
    Parms.GPQuest = (struct AGPQuest*)GPQuest;
    Parms.Levels = (struct TArray<struct TSoftObjectPtr<UWorld>>)Levels;
    Parms.New = (uint8_t)New;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_LevelActionListener::OnTriggerCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_LevelActionListener", "OnTriggerCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQASimpleActionProxy
void UQASimpleActionProxy::Init(struct FSimpleActionArguments& InArg1, struct FSimpleActionExtArgument& InArg2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleActionProxy", "Init");
    struct
    {
        struct FSimpleActionArguments InArg1;
        struct FSimpleActionExtArgument InArg2;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InArg1 = Parms.InArg1;
    InArg2 = Parms.InArg2;
}

struct TArray<struct APlayerController*> UQASimpleActionProxy::GetPlayers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleActionProxy", "GetPlayers");
    struct
    {
        struct TArray<struct APlayerController*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerController* UQASimpleActionProxy::GetPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleActionProxy", "GetPlayer");
    struct
    {
        struct APlayerController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQASimpleQuestProxy* UQASimpleActionProxy::GetMainTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleActionProxy", "GetMainTrigger");
    struct
    {
        struct UQASimpleQuestProxy* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UQASimpleActionProxy::GetCompletedRaidFrontLevelNum(struct AGPQuest* InArg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleActionProxy", "GetCompletedRaidFrontLevelNum");
    struct
    {
        struct AGPQuest* InArg;
        int32_t ReturnValue;
    } Parms{};
    Parms.InArg = (struct AGPQuest*)InArg;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQASimpleActionProxy::DoDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleActionProxy", "DoDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_SimpleQuestListener
struct UQA_SimpleQuestListener* UQA_SimpleQuestListener::QAS_CheckServerDone(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleQuestListener", "QAS_CheckServerDone");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_SimpleQuestListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_SimpleQuestListener* UQA_SimpleQuestListener::QA_SimpleSingleQuestListener(struct AGPQuestActionContext* QAContext, struct FSimpleObjectiveItemInfo ObjectiveItem, struct UQASimpleQuestProxy*& retsult, uint8_t Side, uint8_t showObjective, struct FString TaskGroup, float TimeLimit, int32_t ExcuteNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleQuestListener", "QA_SimpleSingleQuestListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FSimpleObjectiveItemInfo ObjectiveItem;
        struct UQASimpleQuestProxy* retsult;
        uint8_t Side;
        uint8_t showObjective;
        struct FString TaskGroup;
        float TimeLimit;
        int32_t ExcuteNum;
        struct UQA_SimpleQuestListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ObjectiveItem = (struct FSimpleObjectiveItemInfo)ObjectiveItem;
    Parms.Side = (uint8_t)Side;
    Parms.showObjective = (uint8_t)showObjective;
    Parms.TaskGroup = (struct FString)TaskGroup;
    Parms.TimeLimit = (float)TimeLimit;
    Parms.ExcuteNum = (int32_t)ExcuteNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    retsult = Parms.retsult;
    return Parms.ReturnValue;
}

struct UQA_SimpleQuestListener* UQA_SimpleQuestListener::QA_SimpleQuestListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FSimpleObjectiveItemInfo> ObjectiveItems, struct UQASimpleQuestProxy*& retsult, uint8_t Side, uint8_t showObjective, struct FString TaskGroup, float TimeLimit, int32_t ExcuteNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SimpleQuestListener", "QA_SimpleQuestListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FSimpleObjectiveItemInfo> ObjectiveItems;
        struct UQASimpleQuestProxy* retsult;
        uint8_t Side;
        uint8_t showObjective;
        struct FString TaskGroup;
        float TimeLimit;
        int32_t ExcuteNum;
        struct UQA_SimpleQuestListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ObjectiveItems = (struct TArray<struct FSimpleObjectiveItemInfo>)ObjectiveItems;
    Parms.Side = (uint8_t)Side;
    Parms.showObjective = (uint8_t)showObjective;
    Parms.TaskGroup = (struct FString)TaskGroup;
    Parms.TimeLimit = (float)TimeLimit;
    Parms.ExcuteNum = (int32_t)ExcuteNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    retsult = Parms.retsult;
    return Parms.ReturnValue;
}

void UQA_SimpleQuestListener::OnUnTriggerCallback(const int32_t& I, const float& LeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleQuestListener", "OnUnTriggerCallback");
    struct
    {
        int32_t I;
        float LeftTime;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.LeftTime = (float)LeftTime;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SimpleQuestListener::OnUnSingleTriggerCallback(const int32_t& I, const float& LeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleQuestListener", "OnUnSingleTriggerCallback");
    struct
    {
        int32_t I;
        float LeftTime;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.LeftTime = (float)LeftTime;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SimpleQuestListener::OnTriggerCallback(const int32_t& I, const float& LeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleQuestListener", "OnTriggerCallback");
    struct
    {
        int32_t I;
        float LeftTime;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.LeftTime = (float)LeftTime;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SimpleQuestListener::OnTimeTickTriggerCallback(const int32_t& I, const float& LeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleQuestListener", "OnTimeTickTriggerCallback");
    struct
    {
        int32_t I;
        float LeftTime;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.LeftTime = (float)LeftTime;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SimpleQuestListener::OnSingleTriggerCallback(const int32_t& I, const float& LeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SimpleQuestListener", "OnSingleTriggerCallback");
    struct
    {
        int32_t I;
        float LeftTime;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.LeftTime = (float)LeftTime;
    this->ProcessEvent(Func, &Parms);
}

// UQASimpleQuestProxy
void UQASimpleQuestProxy::BP_ShowTitle(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_ShowTitle");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_ShowMarker(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_ShowMarker");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_ShowMarkCircle(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_ShowMarkCircle");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_ShowComplete(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_ShowComplete");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetTriggerTime(int32_t Index, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetTriggerTime");
    struct
    {
        int32_t Index;
        float Time;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetTraceClass(int32_t Index, struct AActor* TraceClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetTraceClass");
    struct
    {
        int32_t Index;
        struct AActor* TraceClass;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.TraceClass = (struct AActor*)TraceClass;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetTraceBody(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetTraceBody");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetTitleFlag(int32_t Index, ETriggerTitleFlag fag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetTitleFlag");
    struct
    {
        int32_t Index;
        enum ETriggerTitleFlag fag;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.fag = (enum ETriggerTitleFlag)fag;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetTitle(int32_t Index, struct FString Title, uint8_t Anim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetTitle");
    struct
    {
        int32_t Index;
        struct FString Title;
        uint8_t Anim;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Title = (struct FString)Title;
    Parms.Anim = (uint8_t)Anim;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetTimeRateTick(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetTimeRateTick");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetSingleTimeLimit(int32_t Index, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetSingleTimeLimit");
    struct
    {
        int32_t Index;
        float Time;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetPublicWhenEmpty(uint8_t isPublic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetPublicWhenEmpty");
    struct
    {
        uint8_t isPublic;
    } Parms{};
    Parms.isPublic = (uint8_t)isPublic;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetOutArea(int32_t Index, struct FString Tag, struct FString Title, uint8_t Anim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetOutArea");
    struct
    {
        int32_t Index;
        struct FString Tag;
        struct FString Title;
        uint8_t Anim;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Tag = (struct FString)Tag;
    Parms.Title = (struct FString)Title;
    Parms.Anim = (uint8_t)Anim;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetName(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetName");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetMarkerType(int32_t Index, EGPQuestActionMarkerType MarkerType, uint8_t Now, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetMarkerType");
    struct
    {
        int32_t Index;
        enum EGPQuestActionMarkerType MarkerType;
        uint8_t Now;
        float Delay;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    Parms.Now = (uint8_t)Now;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetMarkerOffset(int32_t Index, struct FVector offset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetMarkerOffset");
    struct
    {
        int32_t Index;
        struct FVector offset;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.offset = (struct FVector)offset;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetMarkerMaxNum(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetMarkerMaxNum");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetMarkCircleOffset(int32_t Index, struct FVector offset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetMarkCircleOffset");
    struct
    {
        int32_t Index;
        struct FVector offset;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.offset = (struct FVector)offset;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetMapMarkerType(int32_t Index, EGPQuestActionMarkerType MarkerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetMapMarkerType");
    struct
    {
        int32_t Index;
        enum EGPQuestActionMarkerType MarkerType;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetHintType(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetHintType");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetGameStateAction(int32_t Index, struct FMissionStateAction Action, uint8_t Fire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetGameStateAction");
    struct
    {
        int32_t Index;
        struct FMissionStateAction Action;
        uint8_t Fire;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Action = (struct FMissionStateAction)Action;
    Parms.Fire = (uint8_t)Fire;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetDoTriggerNow(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetDoTriggerNow");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_SetAnyOne(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_SetAnyOne");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_ResetLitmitTime(float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_ResetLitmitTime");
    struct
    {
        float Time;
    } Parms{};
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UQASimpleQuestProxy::BP_IsTriggerComplete(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_IsTriggerComplete");
    struct
    {
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UQASimpleQuestProxy::BP_IsComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_IsComplete");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQASimpleQuestProxy::BP_HideMarker(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_HideMarker");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

int32_t UQASimpleQuestProxy::BP_GetValidTargetNum(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetValidTargetNum");
    struct
    {
        int32_t Index;
        int32_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UQASimpleQuestProxy::BP_GetValidTargetActor(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetValidTargetActor");
    struct
    {
        int32_t Index;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* UQASimpleQuestProxy::BP_GetTriggerCharacter(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetTriggerCharacter");
    struct
    {
        int32_t Index;
        struct ACHARACTER* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UQASimpleQuestProxy::BP_GetTotalValidTargetNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetTotalValidTargetNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UQASimpleQuestProxy::BP_GetTotalValidTargetActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetTotalValidTargetActor");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQASimpleQuestProxy::BP_GetTotalTargetNum(int32_t& Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetTotalTargetNum");
    struct
    {
        int32_t Num;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Num = Parms.Num;
}

int32_t UQASimpleQuestProxy::BP_GetTotalProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetTotalProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQASimpleQuestProxy::BP_GetTargetNum(int32_t Index, int32_t& Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetTargetNum");
    struct
    {
        int32_t Index;
        int32_t Num;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    Num = Parms.Num;
}

int32_t UQASimpleQuestProxy::BP_GetProgress(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetProgress");
    struct
    {
        int32_t Index;
        int32_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UQASimpleQuestProxy::BP_GetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQASimpleQuestProxy::BP_GetCurrentLeftTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetCurrentLeftTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UQASimpleQuestProxy::BP_GetCompleteResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetCompleteResult");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQASimpleQuestProxy::BP_GetArgs(struct FSimpleQuestArgument& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_GetArgs");
    struct
    {
        struct FSimpleQuestArgument Args;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Args = Parms.Args;
}

void UQASimpleQuestProxy::BP_EndOneListener(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_EndOneListener");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_EndListener(uint8_t Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_EndListener");
    struct
    {
        uint8_t Success;
    } Parms{};
    Parms.Success = (uint8_t)Success;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_EnableListener(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_EnableListener");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_EnableLimitTime(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_EnableLimitTime");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_BindHealth(int32_t Index, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_BindHealth");
    struct
    {
        int32_t Index;
        uint8_t Enable;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UQASimpleQuestProxy::BP_AddObjectiveItem(struct FSimpleObjectiveItemInfo Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QASimpleQuestProxy", "BP_AddObjectiveItem");
    struct
    {
        struct FSimpleObjectiveItemInfo Item;
    } Parms{};
    Parms.Item = (struct FSimpleObjectiveItemInfo)Item;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SpawnAI
struct UQA_SpawnAI* UQA_SpawnAI::QA_SpawnAI(struct AGPQuestActionContext* QAContext, struct FName QATag_AIGroupSpawnerBase_TeamName, struct FName QATag_MoveToSpotTag, uint8_t bWander, uint8_t bAddDefaultMarker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SpawnAI", "QA_SpawnAI");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_AIGroupSpawnerBase_TeamName;
        struct FName QATag_MoveToSpotTag;
        uint8_t bWander;
        uint8_t bAddDefaultMarker;
        struct UQA_SpawnAI* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_AIGroupSpawnerBase_TeamName = (struct FName)QATag_AIGroupSpawnerBase_TeamName;
    Parms.QATag_MoveToSpotTag = (struct FName)QATag_MoveToSpotTag;
    Parms.bWander = (uint8_t)bWander;
    Parms.bAddDefaultMarker = (uint8_t)bAddDefaultMarker;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SpawnAI::OnSpawnTeamEnd(struct UDFMQuestAITeamChecker* Checker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SpawnAI", "OnSpawnTeamEnd");
    struct
    {
        struct UDFMQuestAITeamChecker* Checker;
    } Parms{};
    Parms.Checker = (struct UDFMQuestAITeamChecker*)Checker;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SpawnAIByDrama
struct UQA_SpawnAIByDrama* UQA_SpawnAIByDrama::QA_SpawnAIByDrama(struct AGPQuestActionContext* QAContext, struct FName DramaTag, uint8_t DifficultyLevel, uint8_t bUseBPSpawnAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SpawnAIByDrama", "QA_SpawnAIByDrama");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName DramaTag;
        uint8_t DifficultyLevel;
        uint8_t bUseBPSpawnAI;
        struct UQA_SpawnAIByDrama* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.DramaTag = (struct FName)DramaTag;
    Parms.DifficultyLevel = (uint8_t)DifficultyLevel;
    Parms.bUseBPSpawnAI = (uint8_t)bUseBPSpawnAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SpawnAIByDrama::OnDramaAreaSpawnEnd_sync(const struct FSpawnAIListRes& AIList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SpawnAIByDrama", "OnDramaAreaSpawnEnd_sync");
    struct
    {
        struct FSpawnAIListRes AIList;
    } Parms{};
    Parms.AIList = (struct FSpawnAIListRes)AIList;
    this->ProcessEvent(Func, &Parms);
}

void UQA_SpawnAIByDrama::OnDramaAreaSpawnEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SpawnAIByDrama", "OnDramaAreaSpawnEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_SpawnedAIAliveSizeListener
struct UQA_SpawnedAIAliveSizeListener* UQA_SpawnedAIAliveSizeListener::QA_SpawnedAIAliveSizeListener(struct AGPQuestActionContext* QAContext, struct FName AITeamTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SpawnedAIAliveSizeListener", "QA_SpawnedAIAliveSizeListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName AITeamTag;
        struct UQA_SpawnedAIAliveSizeListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AITeamTag = (struct FName)AITeamTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SpawnedAIAliveSizeListener::OnSpawnedAIAliveSizeChanged(struct FName AISpawnTag, int32_t AIAliveSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SpawnedAIAliveSizeListener", "OnSpawnedAIAliveSizeChanged");
    struct
    {
        struct FName AISpawnTag;
        int32_t AIAliveSize;
    } Parms{};
    Parms.AISpawnTag = (struct FName)AISpawnTag;
    Parms.AIAliveSize = (int32_t)AIAliveSize;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TaggedTimer
struct UQA_TaggedTimer* UQA_TaggedTimer::QA_TaggedTimer(struct AGPQuestActionContext* QAContext, EQA_TimerMode Mode, struct FName QA_TimerTag, float TriggerInterval, int32_t TriggerCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TaggedTimer", "QA_TaggedTimer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_TimerMode Mode;
        struct FName QA_TimerTag;
        float TriggerInterval;
        int32_t TriggerCount;
        struct UQA_TaggedTimer* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Mode = (enum EQA_TimerMode)Mode;
    Parms.QA_TimerTag = (struct FName)QA_TimerTag;
    Parms.TriggerInterval = (float)TriggerInterval;
    Parms.TriggerCount = (int32_t)TriggerCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TaggedTimer::OnTimerTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TaggedTimer", "OnTimerTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_TaggedTimer::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TaggedTimer", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_TargetHealthListener
struct UQA_TargetHealthListener* UQA_TargetHealthListener::QA_TargetHealthListener(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, struct FName QATag_TargetTag, float HealthPercent, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TargetHealthListener", "QA_TargetHealthListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* TargetClass;
        struct FName QATag_TargetTag;
        float HealthPercent;
        uint8_t bOnce;
        struct UQA_TargetHealthListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetClass = (struct AActor*)TargetClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.HealthPercent = (float)HealthPercent;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TargetHealthListener::OnTargetActorTakeDamage(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TargetHealthListener", "OnTargetActorTakeDamage");
    struct
    {
        struct UDFMVehicleHealthComponent* TargetComponent;
        float NormalizedHpPercent;
    } Parms{};
    Parms.TargetComponent = (struct UDFMVehicleHealthComponent*)TargetComponent;
    Parms.NormalizedHpPercent = (float)NormalizedHpPercent;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TargetTakeDamageListener
struct UQA_TargetTakeDamageListener* UQA_TargetTakeDamageListener::QA_TargetTakeDamageListener(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, struct FName QATag_TargetTag, EQADamageType DamageType, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TargetTakeDamageListener", "QA_TargetTakeDamageListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* TargetClass;
        struct FName QATag_TargetTag;
        enum EQADamageType DamageType;
        uint8_t bOnce;
        struct UQA_TargetTakeDamageListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.TargetClass = (struct AActor*)TargetClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.DamageType = (enum EQADamageType)DamageType;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TargetTakeDamageListener::OnTargetActorTakeDamage(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TargetTakeDamageListener", "OnTargetActorTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TeamAllDiedListener
struct UQA_TeamAllDiedListener* UQA_TeamAllDiedListener::QA_TeamAllDiedListener(struct AGPQuestActionContext* QAContext, uint8_t EnableResurrectCoin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TeamAllDiedListener", "QA_TeamAllDiedListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t EnableResurrectCoin;
        struct UQA_TeamAllDiedListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.EnableResurrectCoin = (uint8_t)EnableResurrectCoin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TeamAllDiedListener::FireTeamAllDied(struct FTeamInfo TeamInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TeamAllDiedListener", "FireTeamAllDied");
    struct
    {
        struct FTeamInfo TeamInfo;
    } Parms{};
    Parms.TeamInfo = (struct FTeamInfo)TeamInfo;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TeamBuyBackListener
struct UQA_TeamBuyBackListener* UQA_TeamBuyBackListener::QA_TeamBuyBackListener(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TeamBuyBackListener", "QA_TeamBuyBackListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_TeamBuyBackListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TeamBuyBackListener::OnBuyBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TeamBuyBackListener", "OnBuyBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_TeamDeathListener
struct UQA_TeamDeathListener* UQA_TeamDeathListener::QA_TeamDeathListener(struct AGPQuestActionContext* QAContext, int32_t QTeamId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TeamDeathListener", "QA_TeamDeathListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        int32_t QTeamId;
        struct UQA_TeamDeathListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QTeamId = (int32_t)QTeamId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TeamDeathListener::FireReturnAction(struct FTeamInfo TeamInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TeamDeathListener", "FireReturnAction");
    struct
    {
        struct FTeamInfo TeamInfo;
    } Parms{};
    Parms.TeamInfo = (struct FTeamInfo)TeamInfo;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TeammateRebornListener
struct UQA_TeammateRebornListener* UQA_TeammateRebornListener::QA_TeammateRebornListener(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TeammateRebornListener", "QA_TeammateRebornListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_TeammateRebornListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TeammateRebornListener::FireTeammateReborn(struct AGPCharacterBase* GPCharacterBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TeammateRebornListener", "FireTeammateReborn");
    struct
    {
        struct AGPCharacterBase* GPCharacterBase;
    } Parms{};
    Parms.GPCharacterBase = (struct AGPCharacterBase*)GPCharacterBase;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TeleportPlayerAsync
struct UQA_TeleportPlayerAsync* UQA_TeleportPlayerAsync::QA_TeleportAllPlayersAsync(struct AGPQuestActionContext* QAContext, struct FName QATag_PlayerStartTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TeleportPlayerAsync", "QA_TeleportAllPlayersAsync");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_PlayerStartTag;
        struct UQA_TeleportPlayerAsync* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_PlayerStartTag = (struct FName)QATag_PlayerStartTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_TeleportPlayerAsync* UQA_TeleportPlayerAsync::QA_TeleportAllPlayerLocAndRot(struct AGPQuestActionContext* QAContext, struct FVector AbsoluteLoc, struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TeleportPlayerAsync", "QA_TeleportAllPlayerLocAndRot");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FVector AbsoluteLoc;
        struct FRotator Rotation;
        struct UQA_TeleportPlayerAsync* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.AbsoluteLoc = (struct FVector)AbsoluteLoc;
    Parms.Rotation = (struct FRotator)Rotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TeleportPlayerAsync::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TeleportPlayerAsync", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_Timer
struct UQA_Timer* UQA_Timer::QA_Timer(struct AGPQuestActionContext* QAContext, EQA_TimerMode Mode, float TriggerInterval, int32_t TriggerCount, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Timer", "QA_Timer");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_TimerMode Mode;
        float TriggerInterval;
        int32_t TriggerCount;
        struct FName Tag;
        struct UQA_Timer* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Mode = (enum EQA_TimerMode)Mode;
    Parms.TriggerInterval = (float)TriggerInterval;
    Parms.TriggerCount = (int32_t)TriggerCount;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_Timer::OnTimerTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_Timer", "OnTimerTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_Timer::FireReturnAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_Timer", "FireReturnAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQA_Tips
struct UQA_Tips* UQA_Tips::QA_Tips(struct AGPQuestActionContext* QAContext, struct FText sMessage, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_Tips", "QA_Tips");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText sMessage;
        float Time;
        struct UQA_Tips* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.sMessage = (struct FText)sMessage;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_TrainStatusListener
void UQA_TrainStatusListener::TrainPlateRotateComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TrainStatusListener", "TrainPlateRotateComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UQA_TrainStatusListener* UQA_TrainStatusListener::QA_TrainStatusListener(struct AGPQuestActionContext* InQAContext, struct FName InTrainTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TrainStatusListener", "QA_TrainStatusListener");
    struct
    {
        struct AGPQuestActionContext* InQAContext;
        struct FName InTrainTag;
        struct UQA_TrainStatusListener* ReturnValue;
    } Parms{};
    Parms.InQAContext = (struct AGPQuestActionContext*)InQAContext;
    Parms.InTrainTag = (struct FName)InTrainTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TrainStatusListener::FireTrainStatusChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TrainStatusListener", "FireTrainStatusChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_TrainStatusListener::FireBreakStatusChange(int32_t nDestruct, int32_t nTotal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TrainStatusListener", "FireBreakStatusChange");
    struct
    {
        int32_t nDestruct;
        int32_t nTotal;
    } Parms{};
    Parms.nDestruct = (int32_t)nDestruct;
    Parms.nTotal = (int32_t)nTotal;
    this->ProcessEvent(Func, &Parms);
}

// UQA_TriggerAISpawnUnit
struct UQA_TriggerAISpawnUnit* UQA_TriggerAISpawnUnit::QA_TriggerAISpawnUnit(struct AGPQuestActionContext* QAContext, struct FName UnitTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TriggerAISpawnUnit", "QA_TriggerAISpawnUnit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName UnitTag;
        struct UQA_TriggerAISpawnUnit* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.UnitTag = (struct FName)UnitTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_TriggerAISpawnUnit* UQA_TriggerAISpawnUnit::QA_StopTriggerAISpawnUnit(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> StoppedUnitTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TriggerAISpawnUnit", "QA_StopTriggerAISpawnUnit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> StoppedUnitTags;
        struct UQA_TriggerAISpawnUnit* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.StoppedUnitTags = (struct TArray<struct FName>)StoppedUnitTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_TriggerAISpawnUnit* UQA_TriggerAISpawnUnit::QA_ResetAISpawnUnit(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ResetUnitTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TriggerAISpawnUnit", "QA_ResetAISpawnUnit");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct FName> ResetUnitTags;
        struct UQA_TriggerAISpawnUnit* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ResetUnitTags = (struct TArray<struct FName>)ResetUnitTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_TriggerListener
struct UQA_TriggerListener* UQA_TriggerListener::QA_TriggerListener(struct AGPQuestActionContext* QAContext, EGPQuestActionTriggerType Type, struct FName QATag_, EQA_TriggerListenerOption Option, EGPQuestActionScope Scope, uint8_t bOnce, uint8_t bCheckOverlaping, uint8_t PlayerMustHasContract, struct FName TargetTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_TriggerListener", "QA_TriggerListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EGPQuestActionTriggerType Type;
        struct FName QATag_;
        enum EQA_TriggerListenerOption Option;
        enum EGPQuestActionScope Scope;
        uint8_t bOnce;
        uint8_t bCheckOverlaping;
        uint8_t PlayerMustHasContract;
        struct FName TargetTag;
        struct UQA_TriggerListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Type = (enum EGPQuestActionTriggerType)Type;
    Parms.QATag_ = (struct FName)QATag_;
    Parms.Option = (enum EQA_TriggerListenerOption)Option;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.bCheckOverlaping = (uint8_t)bCheckOverlaping;
    Parms.PlayerMustHasContract = (uint8_t)PlayerMustHasContract;
    Parms.TargetTag = (struct FName)TargetTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_TriggerListener::OnQuestPlundered(int32_t TeamID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TriggerListener", "OnQuestPlundered");
    struct
    {
        int32_t TeamID;
    } Parms{};
    Parms.TeamID = (int32_t)TeamID;
    this->ProcessEvent(Func, &Parms);
}

void UQA_TriggerListener::FireReturnAction_Overlap(struct AActor* Trigger, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TriggerListener", "FireReturnAction_Overlap");
    struct
    {
        struct AActor* Trigger;
        struct AActor* OtherActor;
    } Parms{};
    Parms.Trigger = (struct AActor*)Trigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void UQA_TriggerListener::FireReturnAction_Hit(struct AActor* Trigger, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TriggerListener", "FireReturnAction_Hit");
    struct
    {
        struct AActor* Trigger;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.Trigger = (struct AActor*)Trigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UQA_TriggerListener::DelayFireReturnAction_Overlap(struct AActor* Trigger, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_TriggerListener", "DelayFireReturnAction_Overlap");
    struct
    {
        struct AActor* Trigger;
        struct AActor* OtherActor;
    } Parms{};
    Parms.Trigger = (struct AActor*)Trigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_VehicleDeathListener
struct UQA_VehicleDeathListener* UQA_VehicleDeathListener::QA_VehicleDeathListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehicleDeathListener", "QA_VehicleDeathListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        uint8_t bOnce;
        struct UQA_VehicleDeathListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_VehicleDeathListener::FireReturnAction(struct AActor* DFMVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehicleDeathListener", "FireReturnAction");
    struct
    {
        struct AActor* DFMVehicle;
    } Parms{};
    Parms.DFMVehicle = (struct AActor*)DFMVehicle;
    this->ProcessEvent(Func, &Parms);
}

// UQA_VehicleDramaPathFinishedListener
struct UQA_VehicleDramaPathFinishedListener* UQA_VehicleDramaPathFinishedListener::QA_VehicleDramaPathFinishedListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, uint8_t bOnce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehicleDramaPathFinishedListener", "QA_VehicleDramaPathFinishedListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        uint8_t bOnce;
        struct UQA_VehicleDramaPathFinishedListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.bOnce = (uint8_t)bOnce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_VehicleDramaPathFinishedListener::FireReturnAction(struct AActor* DFMVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehicleDramaPathFinishedListener", "FireReturnAction");
    struct
    {
        struct AActor* DFMVehicle;
    } Parms{};
    Parms.DFMVehicle = (struct AActor*)DFMVehicle;
    this->ProcessEvent(Func, &Parms);
}

// UQA_VehicleDriverDiedListener
struct UQA_VehicleDriverDiedListener* UQA_VehicleDriverDiedListener::QA_VehicleDriverDiedListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehicleDriverDiedListener", "QA_VehicleDriverDiedListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        struct UQA_VehicleDriverDiedListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_VehicleDriverDiedListener::FireReturnAction(struct ADFMCharacter* DFMVehicleDriver)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehicleDriverDiedListener", "FireReturnAction");
    struct
    {
        struct ADFMCharacter* DFMVehicleDriver;
    } Parms{};
    Parms.DFMVehicleDriver = (struct ADFMCharacter*)DFMVehicleDriver;
    this->ProcessEvent(Func, &Parms);
}

// UQA_VehiclePathFollower
void UQA_VehiclePathFollower::QA_VehiclePathFollowStop(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowStop");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::QA_VehiclePathFollowResume(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowResume");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::QA_VehiclePathFollowPlay(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowPlay");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::QA_VehiclePathFollowPause(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowPause");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UQA_VehiclePathFollower* UQA_VehiclePathFollower::QA_VehiclePathFollowListen(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, uint8_t bOnce, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowListen");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        uint8_t bOnce;
        enum EGPQuestActionScope Scope;
        struct UQA_VehiclePathFollower* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_VehiclePathFollower* UQA_VehiclePathFollower::QA_VehiclePathFollower(struct AGPQuestActionContext* QAContext, EQA_VehiclePathFollowerOption Option, struct FName VehicleTag, struct FName PathTag, uint8_t bOnce, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollower");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        enum EQA_VehiclePathFollowerOption Option;
        struct FName VehicleTag;
        struct FName PathTag;
        uint8_t bOnce;
        enum EGPQuestActionScope Scope;
        struct UQA_VehiclePathFollower* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.Option = (enum EQA_VehiclePathFollowerOption)Option;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.PathTag = (struct FName)PathTag;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_VehiclePathFollower::QA_VehiclePathFollowCustomSpeedOn(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float NewSpeed, float FadingDistance, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowCustomSpeedOn");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        float NewSpeed;
        float FadingDistance;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.NewSpeed = (float)NewSpeed;
    Parms.FadingDistance = (float)FadingDistance;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::QA_VehiclePathFollowCustomSpeedOff(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float NewSpeed, float FadingDistance, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollower", "QA_VehiclePathFollowCustomSpeedOff");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        float NewSpeed;
        float FadingDistance;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.NewSpeed = (float)NewSpeed;
    Parms.FadingDistance = (float)FadingDistance;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::OnResumeFollowInternal(struct AActor* PathFollower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehiclePathFollower", "OnResumeFollowInternal");
    struct
    {
        struct AActor* PathFollower;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    this->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::OnPauseFollowInternal(struct AActor* PathFollower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehiclePathFollower", "OnPauseFollowInternal");
    struct
    {
        struct AActor* PathFollower;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    this->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::OnEndFollowInternal(struct AActor* PathFollower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehiclePathFollower", "OnEndFollowInternal");
    struct
    {
        struct AActor* PathFollower;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    this->ProcessEvent(Func, &Parms);
}

void UQA_VehiclePathFollower::OnBeginFollowInternal(struct AActor* PathFollower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehiclePathFollower", "OnBeginFollowInternal");
    struct
    {
        struct AActor* PathFollower;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    this->ProcessEvent(Func, &Parms);
}

// UQA_VehiclePathFollowerCustomEvent
struct UQA_VehiclePathFollowerCustomEvent* UQA_VehiclePathFollowerCustomEvent::QA_VehiclePathFollowListenCustomEvent(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName EventName, uint8_t bOnce, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehiclePathFollowerCustomEvent", "QA_VehiclePathFollowListenCustomEvent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VehicleTag;
        struct FName EventName;
        uint8_t bOnce;
        enum EGPQuestActionScope Scope;
        struct UQA_VehiclePathFollowerCustomEvent* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VehicleTag = (struct FName)VehicleTag;
    Parms.EventName = (struct FName)EventName;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_VehiclePathFollowerCustomEvent::OnCustomEventInternal(struct AActor* PathFollower, struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehiclePathFollowerCustomEvent", "OnCustomEventInternal");
    struct
    {
        struct AActor* PathFollower;
        struct FName EventName;
    } Parms{};
    Parms.PathFollower = (struct AActor*)PathFollower;
    Parms.EventName = (struct FName)EventName;
    this->ProcessEvent(Func, &Parms);
}

// UQA_VehicleSpawnListener
struct UQA_VehicleSpawnListener* UQA_VehicleSpawnListener::QA_VehicleSpawnListener(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_VehicleSpawnListener", "QA_VehicleSpawnListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct UQA_VehicleSpawnListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_VehicleSpawnListener::FireReturnAction(struct AVehicleSpawner* Spawner, struct ADFMVehicleBase* Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_VehicleSpawnListener", "FireReturnAction");
    struct
    {
        struct AVehicleSpawner* Spawner;
        struct ADFMVehicleBase* Vehicle;
    } Parms{};
    Parms.Spawner = (struct AVehicleSpawner*)Spawner;
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    this->ProcessEvent(Func, &Parms);
}

// UQA_WaitingParachuteListener
struct UQA_WaitingParachuteListener* UQA_WaitingParachuteListener::QA_WaitingParachuteListener(struct AGPQuestActionContext* QAContext, struct FName VolumeTag, struct AGPCharacter* ExcludePlayer, uint8_t bOnce, uint8_t bPlayerMustHasContract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_WaitingParachuteListener", "QA_WaitingParachuteListener");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName VolumeTag;
        struct AGPCharacter* ExcludePlayer;
        uint8_t bOnce;
        uint8_t bPlayerMustHasContract;
        struct UQA_WaitingParachuteListener* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.VolumeTag = (struct FName)VolumeTag;
    Parms.ExcludePlayer = (struct AGPCharacter*)ExcludePlayer;
    Parms.bOnce = (uint8_t)bOnce;
    Parms.bPlayerMustHasContract = (uint8_t)bPlayerMustHasContract;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_WaitingParachuteListener::PreEnterParachute(struct AGPCharacter* ParachuteCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_WaitingParachuteListener", "PreEnterParachute");
    struct
    {
        struct AGPCharacter* ParachuteCharacter;
    } Parms{};
    Parms.ParachuteCharacter = (struct AGPCharacter*)ParachuteCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UQA_WaitingParachuteListener::EnterPushOver(struct AGPQuestActionContext* QAContext, struct TArray<struct AGPCharacter*> PushOverCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_WaitingParachuteListener", "EnterPushOver");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct TArray<struct AGPCharacter*> PushOverCharacters;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PushOverCharacters = (struct TArray<struct AGPCharacter*>)PushOverCharacters;
    this->ProcessEvent(Func, &Parms);
}

// AQuestAudioPlacingActor
void AQuestAudioPlacingActor::PlayAudioOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestAudioPlacingActor", "PlayAudioOnServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AQuestAudioActor
void AQuestAudioActor::StopAudioOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestAudioActor", "StopAudioOnServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestAudioActor::StopAudioOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestAudioActor", "StopAudioOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestAudioActor::PlayAudioOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestAudioActor", "PlayAudioOnServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestAudioActor::PlayAudioOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestAudioActor", "PlayAudioOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestAudioActor::OnRep_QuestAudioConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestAudioActor", "OnRep_QuestAudioConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQuestCutSceneHUD
void UQuestCutSceneHUD::TouchTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestCutSceneHUD", "TouchTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQuestCutSceneHUD::OnSequenceEndPlay(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestCutSceneHUD", "OnSequenceEndPlay");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void UQuestCutSceneHUD::OnSequenceBeginPlay(struct AGPSequenceActor* SeqActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestCutSceneHUD", "OnSequenceBeginPlay");
    struct
    {
        struct AGPSequenceActor* SeqActor;
    } Parms{};
    Parms.SeqActor = (struct AGPSequenceActor*)SeqActor;
    this->ProcessEvent(Func, &Parms);
}

void UQuestCutSceneHUD::OnClieckSkipButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestCutSceneHUD", "OnClieckSkipButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQuestCutSceneHUD::DelayEnableTouchSkip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestCutSceneHUD", "DelayEnableTouchSkip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AQuestFxPlacingActor
void AQuestFxPlacingActor::PlayFxOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestFxPlacingActor", "PlayFxOnServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestFxPlacingActor::OnDelayFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestFxPlacingActor", "OnDelayFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AQuestFxActor
void AQuestFxActor::StopFxOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestFxActor", "StopFxOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestFxActor::PlayFxOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestFxActor", "PlayFxOnServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestFxActor::PlayFxOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestFxActor", "PlayFxOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AQuestFxActor::OnRep_QuestFxConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestFxActor", "OnRep_QuestFxConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQuestHUDController
void UQuestHUDController::OnQuestStateUpdate(struct FText PopText, const EGPQuestStageState& QuestState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestHUDController", "OnQuestStateUpdate");
    struct
    {
        struct FText PopText;
        enum EGPQuestStageState QuestState;
    } Parms{};
    Parms.PopText = (struct FText)PopText;
    Parms.QuestState = (enum EGPQuestStageState)QuestState;
    this->ProcessEvent(Func, &Parms);
}

void UQuestHUDController::OnOptionalObjectiveUpdate(const struct FGPQuestObjectiveHUDInfo& InObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestHUDController", "OnOptionalObjectiveUpdate");
    struct
    {
        struct FGPQuestObjectiveHUDInfo InObjective;
    } Parms{};
    Parms.InObjective = (struct FGPQuestObjectiveHUDInfo)InObjective;
    this->ProcessEvent(Func, &Parms);
}

void UQuestHUDController::OnObjectiveUpdate(const struct FGPQuestObjectiveHUDInfo& InObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestHUDController", "OnObjectiveUpdate");
    struct
    {
        struct FGPQuestObjectiveHUDInfo InObjective;
    } Parms{};
    Parms.InObjective = (struct FGPQuestObjectiveHUDInfo)InObjective;
    this->ProcessEvent(Func, &Parms);
}

void UQuestHUDController::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestHUDController", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQuestObjectiveView
void UQuestObjectiveView::ShowOptionalObjective(struct FGPQuestText QuestText, int32_t ObjectiveIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "ShowOptionalObjective");
    struct
    {
        struct FGPQuestText QuestText;
        int32_t ObjectiveIndex;
    } Parms{};
    Parms.QuestText = (struct FGPQuestText)QuestText;
    Parms.ObjectiveIndex = (int32_t)ObjectiveIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::SetStageTitle(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "SetStageTitle");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::SetStageRemainTime(float RemainTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "SetStageRemainTime");
    struct
    {
        float RemainTime;
    } Parms{};
    Parms.RemainTime = (float)RemainTime;
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::RemoveOptionalObjectives()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "RemoveOptionalObjectives");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::RemoveObjectiveItem(int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "RemoveObjectiveItem");
    struct
    {
        int32_t objectiveId;
    } Parms{};
    Parms.objectiveId = (int32_t)objectiveId;
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::NewOptionalObjective(struct FText ObjectiveTitle, int32_t ObjectiveIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "NewOptionalObjective");
    struct
    {
        struct FText ObjectiveTitle;
        int32_t ObjectiveIndex;
    } Parms{};
    Parms.ObjectiveTitle = (struct FText)ObjectiveTitle;
    Parms.ObjectiveIndex = (int32_t)ObjectiveIndex;
    this->ProcessEvent(Func, &Parms);
}

struct FText UQuestObjectiveView::GetStageTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "GetStageTitle");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObjectiveContentView* UQuestObjectiveView::GetOptionalObjective(int32_t ObjectiveIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "GetOptionalObjective");
    struct
    {
        int32_t ObjectiveIndex;
        struct UObjectiveContentView* ReturnValue;
    } Parms{};
    Parms.ObjectiveIndex = (int32_t)ObjectiveIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQuestObjectiveView::BP_UpdateStageTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "BP_UpdateStageTitle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::BP_StartWarning(uint8_t bStartWarning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "BP_StartWarning");
    struct
    {
        uint8_t bStartWarning;
    } Parms{};
    Parms.bStartWarning = (uint8_t)bStartWarning;
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::BP_ShowRemainTimeText(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "BP_ShowRemainTimeText");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UQuestObjectiveView::BP_OnShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestObjectiveView", "BP_OnShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQuestStatusTipsView
void UQuestStatusTipsView::SetQuestText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestStatusTipsView", "SetQuestText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UQuestStatusTipsView::SetQuestStatus(int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestStatusTipsView", "SetQuestStatus");
    struct
    {
        int32_t Status;
    } Parms{};
    Parms.Status = (int32_t)Status;
    this->ProcessEvent(Func, &Parms);
}

struct FText UQuestStatusTipsView::GetQuestTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestStatusTipsView", "GetQuestTitle");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQuestStatusTipsView::BP_UpdateQuestStatus(int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestStatusTipsView", "BP_UpdateQuestStatus");
    struct
    {
        int32_t Status;
    } Parms{};
    Parms.Status = (int32_t)Status;
    this->ProcessEvent(Func, &Parms);
}

void UQuestStatusTipsView::BP_FadeoutView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestStatusTipsView", "BP_FadeoutView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQuestStatusTipsView::BP_FadeinView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestStatusTipsView", "BP_FadeinView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ARaidQuestClientProxy
void ARaidQuestClientProxy::OnServerMatchEnded(EMatchOverReason MatchOverReason, int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidQuestClientProxy", "OnServerMatchEnded");
    struct
    {
        enum EMatchOverReason MatchOverReason;
        int64_t PlayerUin;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void ARaidQuestClientProxy::OnRep_DependentLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidQuestClientProxy", "OnRep_DependentLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ARaidQuestClientProxy::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidQuestClientProxy", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void ARaidQuestClientProxy::ClientUnLoadLevels(struct TArray<struct FString> RequestUnLoadLevels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidQuestClientProxy", "ClientUnLoadLevels");
    struct
    {
        struct TArray<struct FString> RequestUnLoadLevels;
    } Parms{};
    Parms.RequestUnLoadLevels = (struct TArray<struct FString>)RequestUnLoadLevels;
    this->ProcessEvent(Func, &Parms);
}

void ARaidQuestClientProxy::ClientPlayQuestEnd(EGPQuestEndReason EndReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RaidQuestClientProxy", "ClientPlayQuestEnd");
    struct
    {
        enum EGPQuestEndReason EndReason;
    } Parms{};
    Parms.EndReason = (enum EGPQuestEndReason)EndReason;
    this->ProcessEvent(Func, &Parms);
}

// ASOLQuestClientProxy
void ASOLQuestClientProxy::OnRep_MapQuestRangeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLQuestClientProxy", "OnRep_MapQuestRangeData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLQuestClientProxy::OnRep_ContractBossData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLQuestClientProxy", "OnRep_ContractBossData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLQuestClientProxy::OnBossAttributeChanged(struct AActor* ChangeActor, const struct FOnGPAttributeChangeData& ChangeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLQuestClientProxy", "OnBossAttributeChanged");
    struct
    {
        struct AActor* ChangeActor;
        struct FOnGPAttributeChangeData ChangeData;
    } Parms{};
    Parms.ChangeActor = (struct AActor*)ChangeActor;
    Parms.ChangeData = (struct FOnGPAttributeChangeData)ChangeData;
    this->ProcessEvent(Func, &Parms);
}

// ATutorialQuestClientProxy
void ATutorialQuestClientProxy::UnlockLuaHUDPanels(struct TArray<struct FString>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "UnlockLuaHUDPanels");
    struct
    {
        struct TArray<struct FString> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void ATutorialQuestClientProxy::UnlockHUDPanels(struct TArray<struct FName>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "UnlockHUDPanels");
    struct
    {
        struct TArray<struct FName> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void ATutorialQuestClientProxy::SwitchToDefaultKeySetting(uint8_t bSwitchToDefault)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "SwitchToDefaultKeySetting");
    struct
    {
        uint8_t bSwitchToDefault;
    } Parms{};
    Parms.bSwitchToDefault = (uint8_t)bSwitchToDefault;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ShowGuidePopWindowUI(int32_t GuidePopWindowId, struct FName GuideAudio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ShowGuidePopWindowUI");
    struct
    {
        int32_t GuidePopWindowId;
        struct FName GuideAudio;
    } Parms{};
    Parms.GuidePopWindowId = (int32_t)GuidePopWindowId;
    Parms.GuideAudio = (struct FName)GuideAudio;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ShowGuidePopTipsUI(int32_t GuidePopTipsId, struct FName GuideAudio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ShowGuidePopTipsUI");
    struct
    {
        int32_t GuidePopTipsId;
        struct FName GuideAudio;
    } Parms{};
    Parms.GuidePopTipsId = (int32_t)GuidePopTipsId;
    Parms.GuideAudio = (struct FName)GuideAudio;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ShowGuideDialogUI(int32_t DialogID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ShowGuideDialogUI");
    struct
    {
        int32_t DialogID;
    } Parms{};
    Parms.DialogID = (int32_t)DialogID;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ShowGuideClickUI(int32_t GuideClickId, uint8_t bForceClick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ShowGuideClickUI");
    struct
    {
        int32_t GuideClickId;
        uint8_t bForceClick;
    } Parms{};
    Parms.GuideClickId = (int32_t)GuideClickId;
    Parms.bForceClick = (uint8_t)bForceClick;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ShowGuideButtonUI(struct FString GuideButtonWord)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ShowGuideButtonUI");
    struct
    {
        struct FString GuideButtonWord;
    } Parms{};
    Parms.GuideButtonWord = (struct FString)GuideButtonWord;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::SetListenMapTargetClick(uint8_t bListen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "SetListenMapTargetClick");
    struct
    {
        uint8_t bListen;
    } Parms{};
    Parms.bListen = (uint8_t)bListen;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::SetListenMapHudStatus(uint8_t bStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "SetListenMapHudStatus");
    struct
    {
        uint8_t bStart;
    } Parms{};
    Parms.bStart = (uint8_t)bStart;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::SetListenLootingStatus(uint8_t bStart, int64_t NetGuid, int32_t aiIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "SetListenLootingStatus");
    struct
    {
        uint8_t bStart;
        int64_t NetGuid;
        int32_t aiIndex;
    } Parms{};
    Parms.bStart = (uint8_t)bStart;
    Parms.NetGuid = (int64_t)NetGuid;
    Parms.aiIndex = (int32_t)aiIndex;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::SetGuideButtonUIStrengh(uint8_t bStrong)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "SetGuideButtonUIStrengh");
    struct
    {
        uint8_t bStrong;
    } Parms{};
    Parms.bStrong = (uint8_t)bStrong;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::SetCustomRooleteeMedItem(int64_t MedItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "SetCustomRooleteeMedItem");
    struct
    {
        int64_t MedItemId;
    } Parms{};
    Parms.MedItemId = (int64_t)MedItemId;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ServerNotifySeamlessTravelEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ServerNotifySeamlessTravelEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ServerNotifyPopWindowClosed(int32_t GuidePopWindowId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ServerNotifyPopWindowClosed");
    struct
    {
        int32_t GuidePopWindowId;
    } Parms{};
    Parms.GuidePopWindowId = (int32_t)GuidePopWindowId;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ServerNotifyMapStatusChanged(uint8_t bOpenBigMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ServerNotifyMapStatusChanged");
    struct
    {
        uint8_t bOpenBigMap;
    } Parms{};
    Parms.bOpenBigMap = (uint8_t)bOpenBigMap;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ServerNotifyLootingStatusChanged(ELootingStatus Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ServerNotifyLootingStatusChanged");
    struct
    {
        enum ELootingStatus Status;
    } Parms{};
    Parms.Status = (enum ELootingStatus)Status;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::PopWindowClosed(int32_t GuidePopWindowId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "PopWindowClosed");
    struct
    {
        int32_t GuidePopWindowId;
    } Parms{};
    Parms.GuidePopWindowId = (int32_t)GuidePopWindowId;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnSeamlessTravelEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnSeamlessTravelEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_SwitchToDefaultKeySetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_SwitchToDefaultKeySetting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_RemindEscape()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_RemindEscape");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_LockedLuaHUDNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_LockedLuaHUDNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_LockedHUDNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_LockedHUDNames");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_ListenMapTargetClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_ListenMapTargetClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_IsListeningMapHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_IsListeningMapHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_IsListeningLooting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_IsListeningLooting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_GuidePopWindowId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_GuidePopWindowId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_GuidePopTipsId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_GuidePopTipsId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_GuidePopButtonWord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_GuidePopButtonWord");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_GuidePopButtonStrengh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_GuidePopButtonStrengh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_GuideClickId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_GuideClickId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_DisabledInputActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_DisabledInputActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_DialogId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_DialogId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnRep_CustomRooleteeMedItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnRep_CustomRooleteeMedItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnMarkBigMapTarget(uint8_t MapSignTypeInt, const struct FName& TargetName, const struct FVector& Location, uint8_t bIsAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnMarkBigMapTarget");
    struct
    {
        uint8_t MapSignTypeInt;
        struct FName TargetName;
        struct FVector Location;
        uint8_t bIsAdd;
    } Parms{};
    Parms.MapSignTypeInt = (uint8_t)MapSignTypeInt;
    Parms.TargetName = (struct FName)TargetName;
    Parms.Location = (struct FVector)Location;
    Parms.bIsAdd = (uint8_t)bIsAdd;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::LockLuaHUDPanels(struct TArray<struct FString>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "LockLuaHUDPanels");
    struct
    {
        struct TArray<struct FString> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void ATutorialQuestClientProxy::LockHUDPanels(struct TArray<struct FName>& PanelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "LockHUDPanels");
    struct
    {
        struct TArray<struct FName> PanelNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PanelNames = Parms.PanelNames;
}

void ATutorialQuestClientProxy::DisableInputAction(EInputActionType ActionType, uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "DisableInputAction");
    struct
    {
        enum EInputActionType ActionType;
        uint8_t bDisable;
    } Parms{};
    Parms.ActionType = (enum EInputActionType)ActionType;
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::ClientBroadcastRemindEscape(uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "ClientBroadcastRemindEscape");
    struct
    {
        uint8_t bOpen;
    } Parms{};
    Parms.bOpen = (uint8_t)bOpen;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::BP_HideBigMapExtraInfo(uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "BP_HideBigMapExtraInfo");
    struct
    {
        uint8_t bHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void ATutorialQuestClientProxy::BP_DisableInputAction(int32_t ActionType, uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TutorialQuestClientProxy", "BP_DisableInputAction");
    struct
    {
        int32_t ActionType;
        uint8_t bDisable;
    } Parms{};
    Parms.ActionType = (int32_t)ActionType;
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
