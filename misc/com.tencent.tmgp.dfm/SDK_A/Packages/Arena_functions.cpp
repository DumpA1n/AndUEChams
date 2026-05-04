#include "Arena.hpp"
#include "DFMGameplay.hpp"
#include "GPGameplay.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UArenaCountdownHudController::* ----
void UArenaCountdownHudController::OnArenaRoundStateUIEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownHudController", "OnArenaRoundStateUIEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaCountdownHudView::* ----
void UArenaCountdownHudView::ShowCommonCountdown(struct FArenaCommonCountDownInfo CountDownInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownHudView", "ShowCommonCountdown");
    struct
    {
        struct FArenaCommonCountDownInfo CountDownInfo;
    } Parms{};
    Parms.CountDownInfo = (struct FArenaCommonCountDownInfo)CountDownInfo;
    this->ProcessEvent(Func, &Parms);
}

void UArenaCountdownHudView::SetCurCountdownTime(int32_t InCurCountdownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownHudView", "SetCurCountdownTime");
    struct
    {
        int32_t InCurCountdownTime;
    } Parms{};
    Parms.InCurCountdownTime = (int32_t)InCurCountdownTime;
    this->ProcessEvent(Func, &Parms);
}

void UArenaCountdownHudView::SetCountdownTimeText(int32_t InCurCountdownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownHudView", "SetCountdownTimeText");
    struct
    {
        int32_t InCurCountdownTime;
    } Parms{};
    Parms.InCurCountdownTime = (int32_t)InCurCountdownTime;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaCountdownView::* ----
void UArenaCountdownView::ShowCommonCountdown(struct FArenaCommonCountDownInfo CountDownInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownView", "ShowCommonCountdown");
    struct
    {
        struct FArenaCommonCountDownInfo CountDownInfo;
    } Parms{};
    Parms.CountDownInfo = (struct FArenaCommonCountDownInfo)CountDownInfo;
    this->ProcessEvent(Func, &Parms);
}

void UArenaCountdownView::SetCurCountdownTime(int32_t InCurCountdownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownView", "SetCurCountdownTime");
    struct
    {
        int32_t InCurCountdownTime;
    } Parms{};
    Parms.InCurCountdownTime = (int32_t)InCurCountdownTime;
    this->ProcessEvent(Func, &Parms);
}

void UArenaCountdownView::SetCountdownTimeText(int32_t InCurCountdownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownView", "SetCountdownTimeText");
    struct
    {
        int32_t InCurCountdownTime;
    } Parms{};
    Parms.InCurCountdownTime = (int32_t)InCurCountdownTime;
    this->ProcessEvent(Func, &Parms);
}

void UArenaCountdownView::OnArenaRoundStateUIEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaCountdownView", "OnArenaRoundStateUIEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AArenaHUD::* ----
void AArenaHUD::OnInGameEquipmentRentalEvent(int32_t RentalEvent, int32_t Param1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaHUD", "OnInGameEquipmentRentalEvent");
    struct
    {
        int32_t RentalEvent;
        int32_t Param1;
    } Parms{};
    Parms.RentalEvent = (int32_t)RentalEvent;
    Parms.Param1 = (int32_t)Param1;
    this->ProcessEvent(Func, &Parms);
}

void AArenaHUD::OnClientArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaHUD", "OnClientArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaOpenEquipRentalBtnHudView::* ----
void UArenaOpenEquipRentalBtnHudView::OnClientArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaOpenEquipRentalBtnHudView", "OnClientArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaOpenEquipRentalBtnHudView::DoOpenEquimentRentalBtnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaOpenEquipRentalBtnHudView", "DoOpenEquimentRentalBtnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaOpenEquipRentalBtnView::* ----
void UArenaOpenEquipRentalBtnView::OnClientArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaOpenEquipRentalBtnView", "OnClientArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaOpenEquipRentalBtnView::DoOpenEquimentRentalBtnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaOpenEquipRentalBtnView", "DoOpenEquimentRentalBtnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardHudController::* ----
void UArenaScoreBoardHudController::UpdateBoardInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardHudController", "UpdateBoardInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaScoreBoardHudController::OnArenaPlayerStatItemListChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardHudController", "OnArenaPlayerStatItemListChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardHudView::* ----
void UArenaScoreBoardHudView::UpdateBoardInfo(struct TArray<struct FArenaPlayerStatItem> PlayerInfoList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardHudView", "UpdateBoardInfo");
    struct
    {
        struct TArray<struct FArenaPlayerStatItem> PlayerInfoList;
    } Parms{};
    Parms.PlayerInfoList = (struct TArray<struct FArenaPlayerStatItem>)PlayerInfoList;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardItemHudView::* ----
void UArenaScoreBoardItemHudView::OnClientCharacterLiveStatusChanged(struct AGPPlayerState* PlayerState, int32_t CharacterLiveStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardItemHudView", "OnClientCharacterLiveStatusChanged");
    struct
    {
        struct AGPPlayerState* PlayerState;
        int32_t CharacterLiveStatus;
    } Parms{};
    Parms.PlayerState = (struct AGPPlayerState*)PlayerState;
    Parms.CharacterLiveStatus = (int32_t)CharacterLiveStatus;
    this->ProcessEvent(Func, &Parms);
}

void UArenaScoreBoardItemHudView::BP_SetDead(uint8_t bIsDead)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardItemHudView", "BP_SetDead");
    struct
    {
        uint8_t bIsDead;
    } Parms{};
    Parms.bIsDead = (uint8_t)bIsDead;
    this->ProcessEvent(Func, &Parms);
}

void UArenaScoreBoardItemHudView::BP_SetColor(uint8_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardItemHudView", "BP_SetColor");
    struct
    {
        uint8_t Type;
    } Parms{};
    Parms.Type = (uint8_t)Type;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardItemView::* ----
void UArenaScoreBoardItemView::OnClientCharacterLiveStatusChanged(struct AGPPlayerState* PlayerState, int32_t CharacterLiveStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardItemView", "OnClientCharacterLiveStatusChanged");
    struct
    {
        struct AGPPlayerState* PlayerState;
        int32_t CharacterLiveStatus;
    } Parms{};
    Parms.PlayerState = (struct AGPPlayerState*)PlayerState;
    Parms.CharacterLiveStatus = (int32_t)CharacterLiveStatus;
    this->ProcessEvent(Func, &Parms);
}

void UArenaScoreBoardItemView::BP_SetDead(uint8_t bIsDead)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardItemView", "BP_SetDead");
    struct
    {
        uint8_t bIsDead;
    } Parms{};
    Parms.bIsDead = (uint8_t)bIsDead;
    this->ProcessEvent(Func, &Parms);
}

void UArenaScoreBoardItemView::BP_SetColor(uint8_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardItemView", "BP_SetColor");
    struct
    {
        uint8_t Type;
    } Parms{};
    Parms.Type = (uint8_t)Type;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardTeamHudView::* ----
void UArenaScoreBoardTeamHudView::BP_SetColor(uint8_t isBlue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardTeamHudView", "BP_SetColor");
    struct
    {
        uint8_t isBlue;
    } Parms{};
    Parms.isBlue = (uint8_t)isBlue;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardTeamView::* ----
void UArenaScoreBoardTeamView::BP_SetColor(uint8_t isBlue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardTeamView", "BP_SetColor");
    struct
    {
        uint8_t isBlue;
    } Parms{};
    Parms.isBlue = (uint8_t)isBlue;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaScoreBoardView::* ----
void UArenaScoreBoardView::UpdateBoardInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardView", "UpdateBoardInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaScoreBoardView::OnArenaPlayerStatItemListChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaScoreBoardView", "OnArenaPlayerStatItemListChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaStatusTipsBannerHudView::* ----
void UArenaStatusTipsBannerHudView::OnShowFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerHudView", "OnShowFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaStatusTipsBannerHudView::OnAnimOutFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerHudView", "OnAnimOutFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaStatusTipsBannerHudView::BP_ShowTip(int32_t UIType, const struct FText& TipText1, const struct FText& TipText2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerHudView", "BP_ShowTip");
    struct
    {
        int32_t UIType;
        struct FText TipText1;
        struct FText TipText2;
    } Parms{};
    Parms.UIType = (int32_t)UIType;
    Parms.TipText1 = (struct FText)TipText1;
    Parms.TipText2 = (struct FText)TipText2;
    this->ProcessEvent(Func, &Parms);
}

void UArenaStatusTipsBannerHudView::BP_HideTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerHudView", "BP_HideTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaStatusTipsBannerView::* ----
void UArenaStatusTipsBannerView::OnShowFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerView", "OnShowFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaStatusTipsBannerView::OnAnimOutFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerView", "OnAnimOutFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaStatusTipsBannerView::BP_ShowTip(int32_t UIType, const struct FText& TipText1, const struct FText& TipText2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerView", "BP_ShowTip");
    struct
    {
        int32_t UIType;
        struct FText TipText1;
        struct FText TipText2;
    } Parms{};
    Parms.UIType = (int32_t)UIType;
    Parms.TipText1 = (struct FText)TipText1;
    Parms.TipText2 = (struct FText)TipText2;
    this->ProcessEvent(Func, &Parms);
}

void UArenaStatusTipsBannerView::BP_HideTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaStatusTipsBannerView", "BP_HideTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaTopBarHudView::* ----
void UArenaTopBarHudView::OnTopBarButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarHudView", "OnTopBarButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarHudView::OnClientArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarHudView", "OnClientArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarHudView::OnBlueprintPlunderInfoUpdate(const struct FBlueprintPlunderInfo& BlueprintPlunderInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarHudView", "OnBlueprintPlunderInfoUpdate");
    struct
    {
        struct FBlueprintPlunderInfo BlueprintPlunderInfo;
    } Parms{};
    Parms.BlueprintPlunderInfo = (struct FBlueprintPlunderInfo)BlueprintPlunderInfo;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarHudView::OnArenaScoreChange(int32_t ArenaScore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarHudView", "OnArenaScoreChange");
    struct
    {
        int32_t ArenaScore;
    } Parms{};
    Parms.ArenaScore = (int32_t)ArenaScore;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaTopBarPlayerView::* ----
void UArenaTopBarPlayerView::UpdatePlayerState(uint8_t InIsDead, uint8_t InIsMatchOver, uint8_t bPlayAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "UpdatePlayerState");
    struct
    {
        uint8_t InIsDead;
        uint8_t InIsMatchOver;
        uint8_t bPlayAnim;
    } Parms{};
    Parms.InIsDead = (uint8_t)InIsDead;
    Parms.InIsMatchOver = (uint8_t)InIsMatchOver;
    Parms.bPlayAnim = (uint8_t)bPlayAnim;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::UpdatePlayer(struct ADFMPlayerState* InPlayerState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "UpdatePlayer");
    struct
    {
        struct ADFMPlayerState* InPlayerState;
    } Parms{};
    Parms.InPlayerState = (struct ADFMPlayerState*)InPlayerState;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::ResetView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "ResetView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::OnClientCharacterLiveStatusChanged(struct AGPPlayerState* InPlayerState, int32_t CharacterLiveStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "OnClientCharacterLiveStatusChanged");
    struct
    {
        struct AGPPlayerState* InPlayerState;
        int32_t CharacterLiveStatus;
    } Parms{};
    Parms.InPlayerState = (struct AGPPlayerState*)InPlayerState;
    Parms.CharacterLiveStatus = (int32_t)CharacterLiveStatus;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::OnAvatarImageLoaded(const struct FSoftObjectPath& ImgPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "OnAvatarImageLoaded");
    struct
    {
        struct FSoftObjectPath ImgPath;
    } Parms{};
    Parms.ImgPath = (struct FSoftObjectPath)ImgPath;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::LoadAvatarImage(int64_t InHeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "LoadAvatarImage");
    struct
    {
        int64_t InHeroId;
    } Parms{};
    Parms.InHeroId = (int64_t)InHeroId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UArenaTopBarPlayerView::IsPlayerOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "IsPlayerOut");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UArenaTopBarPlayerView::InitTopbar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "InitTopbar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::InitPlayer(struct ADFMPlayerState* InPlayerState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "InitPlayer");
    struct
    {
        struct ADFMPlayerState* InPlayerState;
    } Parms{};
    Parms.InPlayerState = (struct ADFMPlayerState*)InPlayerState;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::BP_UpdatePlayerState(uint8_t InbIsDead, uint8_t InbIsMatchOver, uint8_t bPlayAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "BP_UpdatePlayerState");
    struct
    {
        uint8_t InbIsDead;
        uint8_t InbIsMatchOver;
        uint8_t bPlayAnim;
    } Parms{};
    Parms.InbIsDead = (uint8_t)InbIsDead;
    Parms.InbIsMatchOver = (uint8_t)InbIsMatchOver;
    Parms.bPlayAnim = (uint8_t)bPlayAnim;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarPlayerView::BP_SetHaveBrick(uint8_t bHaveBrick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarPlayerView", "BP_SetHaveBrick");
    struct
    {
        uint8_t bHaveBrick;
    } Parms{};
    Parms.bHaveBrick = (uint8_t)bHaveBrick;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaTopBarTeamView::* ----
void UArenaTopBarTeamView::BP_TeamDeciphering(uint8_t isDeciphering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarTeamView", "BP_TeamDeciphering");
    struct
    {
        uint8_t isDeciphering;
    } Parms{};
    Parms.isDeciphering = (uint8_t)isDeciphering;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarTeamView::BP_SetTeamWinRoundCount(int32_t RoundCount, uint8_t bPlayAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarTeamView", "BP_SetTeamWinRoundCount");
    struct
    {
        int32_t RoundCount;
        uint8_t bPlayAnim;
    } Parms{};
    Parms.RoundCount = (int32_t)RoundCount;
    Parms.bPlayAnim = (uint8_t)bPlayAnim;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarTeamView::BP_SetTeamOut(uint8_t isTeamOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarTeamView", "BP_SetTeamOut");
    struct
    {
        uint8_t isTeamOut;
    } Parms{};
    Parms.isTeamOut = (uint8_t)isTeamOut;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarTeamView::BP_SetIsLocalTeam(uint8_t bIsLocalTeam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarTeamView", "BP_SetIsLocalTeam");
    struct
    {
        uint8_t bIsLocalTeam;
    } Parms{};
    Parms.bIsLocalTeam = (uint8_t)bIsLocalTeam;
    this->ProcessEvent(Func, &Parms);
}

// ---- UArenaTopBarView::* ----
void UArenaTopBarView::OnTopBarButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarView", "OnTopBarButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarView::OnClientArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarView", "OnClientArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarView::OnBlueprintPlunderInfoUpdate(const struct FBlueprintPlunderInfo& BlueprintPlunderInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarView", "OnBlueprintPlunderInfoUpdate");
    struct
    {
        struct FBlueprintPlunderInfo BlueprintPlunderInfo;
    } Parms{};
    Parms.BlueprintPlunderInfo = (struct FBlueprintPlunderInfo)BlueprintPlunderInfo;
    this->ProcessEvent(Func, &Parms);
}

void UArenaTopBarView::OnArenaScoreChange(int32_t ArenaScore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArenaTopBarView", "OnArenaScoreChange");
    struct
    {
        int32_t ArenaScore;
    } Parms{};
    Parms.ArenaScore = (int32_t)ArenaScore;
    this->ProcessEvent(Func, &Parms);
}

// ---- UPlayerEquipmentRentalComponent::* ----
void UPlayerEquipmentRentalComponent::ServerRefreshType(int32_t TypeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "ServerRefreshType");
    struct
    {
        int32_t TypeID;
    } Parms{};
    Parms.TypeID = (int32_t)TypeID;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerEquipmentRentalComponent::ServerApplyRental(int32_t TypeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "ServerApplyRental");
    struct
    {
        int32_t TypeID;
    } Parms{};
    Parms.TypeID = (int32_t)TypeID;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerEquipmentRentalComponent::OnServerArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "OnServerArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlayerEquipmentRentalComponent::OnRep_RentalData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "OnRep_RentalData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlayerEquipmentRentalComponent::OnClientArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "OnClientArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlayerEquipmentRentalComponent::NotiryScoreChange(int32_t ArenaScore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "NotiryScoreChange");
    struct
    {
        int32_t ArenaScore;
    } Parms{};
    Parms.ArenaScore = (int32_t)ArenaScore;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPlayerEquipmentRentalComponent::GetScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "GetScore");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEquipmentRentalData UPlayerEquipmentRentalComponent::GetRentalData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "GetRentalData");
    struct
    {
        struct FEquipmentRentalData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPlayerEquipmentRentalComponent::ClientNotifyResult(int32_t RentalEvent, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerEquipmentRentalComponent", "ClientNotifyResult");
    struct
    {
        int32_t RentalEvent;
        int32_t ErrorCode;
    } Parms{};
    Parms.RentalEvent = (int32_t)RentalEvent;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

// ---- APlayerState_Arena::* ----
void APlayerState_Arena::OnRep_ArenaScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerState_Arena", "OnRep_ArenaScore");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t APlayerState_Arena::GetArenaScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerState_Arena", "GetArenaScore");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APlayerState_Arena::ClientShowScoreFeedback(int32_t ScoreType, int32_t InScore, int32_t Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerState_Arena", "ClientShowScoreFeedback");
    struct
    {
        int32_t ScoreType;
        int32_t InScore;
        int32_t Distance;
    } Parms{};
    Parms.ScoreType = (int32_t)ScoreType;
    Parms.InScore = (int32_t)InScore;
    Parms.Distance = (int32_t)Distance;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
