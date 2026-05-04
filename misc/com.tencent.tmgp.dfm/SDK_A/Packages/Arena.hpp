#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameHud.hpp"
#include "DFMGameplay.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "HudFramework.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: Arena
// Enums: 0
// Structs: 3
// Classes: 26

struct ADFMPlayerState;
struct AGPPlayerState;
struct AGameState_Arena;
struct FArenaPlayerStatItem;
struct FBlueprintPlunderInfo;
struct UButton;
struct UCanvasPanel;
struct UDFButton;
struct UDFImage;
struct UDFInteractorMainHudView;
struct UDFMInteractorView;
struct UDFTextBlock;
struct UHDKeyIconBoxWidget;
struct UImage;
struct ULuaUIBaseView;
struct UPanelWidget;
struct URemainTimeHUDView;
struct USOLRemainTimeHudView;
struct UTextBlock;
struct UWidgetAnimation;
struct FArenaCommonCountDownInfo;
struct FEquipmentRentalData;
struct FEquipmentRentalTypeData;
struct UArenaCountdownHudController;
struct UArenaCountdownHudView;
struct UArenaCountdownView;
struct AArenaHUD;
struct UArenaOpenEquipRentalBtnHudView;
struct UArenaOpenEquipRentalBtnView;
struct UArenaScoreBoardHudController;
struct UArenaScoreBoardHudView;
struct UArenaScoreBoardItemHudView;
struct UArenaScoreBoardItemView;
struct UArenaScoreBoardPanelHudView;
struct UArenaScoreBoardPanelView;
struct UArenaScoreBoardPlayerHudView;
struct UArenaScoreBoardPlayerView;
struct UArenaScoreBoardTeamHudView;
struct UArenaScoreBoardTeamView;
struct UArenaScoreBoardView;
struct UArenaStatusTipsBannerHudView;
struct UArenaStatusTipsBannerView;
struct UArenaTopBarHudView;
struct UArenaTopBarPlayerView;
struct UArenaTopBarTeamView;
struct UArenaTopBarView;
struct UInGameEquipmentRentalView;
struct UPlayerEquipmentRentalComponent;
struct APlayerState_Arena;

// Object: ScriptStruct Arena.ArenaCommonCountDownInfo
// Size: 0x50 (Inherited: 0x0)
struct FArenaCommonCountDownInfo
{
	struct FText CountDownTitle; // 0x0(0x18)
	float EndCountDownTime; // 0x18(0x4)
	uint8_t bShow : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t bUseTenSecondsWidgetShow : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t BitPad_0x1D_1 : 7; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	int32_t EmphasizeNum; // 0x20(0x4)
	struct FName KeyName; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText KeyText; // 0x30(0x18)
	uint8_t bIsGamePointRound : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct Arena.EquipmentRentalData
// Size: 0x20 (Inherited: 0x0)
struct FEquipmentRentalData
{
	int32_t CurRentalTypeID; // 0x0(0x4)
	int32_t CurApplyScore; // 0x4(0x4)
	int32_t RefreshCount; // 0x8(0x4)
	int32_t RentalCount; // 0xC(0x4)
	struct TArray<struct FEquipmentRentalTypeData> RentalTypeDataArr; // 0x10(0x10)
};

// Object: ScriptStruct Arena.EquipmentRentalTypeData
// Size: 0x8 (Inherited: 0x0)
struct FEquipmentRentalTypeData
{
	int32_t TypeID; // 0x0(0x4)
	int32_t PresetId; // 0x4(0x4)
};

// Object: Class Arena.ArenaCountdownHudController
// Size: 0xE8 (Inherited: 0x80)
struct UArenaCountdownHudController : UBaseHudController
{
	struct UArenaCountdownHudView* ArenaCountdownHudView; // 0x80(0x8)
	uint8_t Pad_0x88[0x60]; // 0x88(0x60)


	// Object: Function Arena.ArenaCountdownHudController.OnArenaRoundStateUIEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425acb0
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaRoundStateUIEvent();
	DEFINE_UE_CLASS_HELPERS(UArenaCountdownHudController, "ArenaCountdownHudController")

};

// Object: Class Arena.ArenaCountdownHudView
// Size: 0x518 (Inherited: 0x400)
struct UArenaCountdownHudView : UGPBaseHudView
{
	uint8_t Pad_0x400[0x50]; // 0x400(0x50)
	struct FName CountDown_KeyName; // 0x450(0x8)
	struct FText CountDown_KeyText; // 0x458(0x18)
	struct UCanvasPanel* Event_CanvasPanel; // 0x470(0x8)
	struct UCanvasPanel* TenSecondsExit_CanvasPanel; // 0x478(0x8)
	struct UWidgetAnimation* Anim_FinalCutDownNum_loop; // 0x480(0x8)
	struct UWidgetAnimation* Anim_FinalCutDown_in; // 0x488(0x8)
	struct UWidgetAnimation* Anim_FinalCutDown_out; // 0x490(0x8)
	struct UWidgetAnimation* Anim_FinalCutDown_GamePoint; // 0x498(0x8)
	float Anim_GamePoint_Length; // 0x4A0(0x4)
	float Anim_GamePoint_Speed; // 0x4A4(0x4)
	uint8_t Pad_0x4A8[0x4]; // 0x4A8(0x4)
	float Anim_Out_Length; // 0x4AC(0x4)
	uint8_t Pad_0x4B0[0x8]; // 0x4B0(0x8)
	struct UTextBlock* TenSecondsExit_TimeText; // 0x4B8(0x8)
	struct UTextBlock* TenSecondsExit_TitleText; // 0x4C0(0x8)
	uint8_t Pad_0x4C8[0x10]; // 0x4C8(0x10)
	struct UPanelWidget* KeyContent; // 0x4D8(0x8)
	struct UTextBlock* KeyText; // 0x4E0(0x8)
	struct UHDKeyIconBoxWidget* KeyIconBox; // 0x4E8(0x8)
	int32_t AudioTime_CountDown_Step1; // 0x4F0(0x4)
	int32_t AudioTime_CountDown_Step2; // 0x4F4(0x4)
	struct FName AudioName_CountDown_Step1; // 0x4F8(0x8)
	struct FName AudioName_CountDown_Step2; // 0x500(0x8)
	uint8_t Pad_0x508[0x10]; // 0x508(0x10)


	// Object: Function Arena.ArenaCountdownHudView.ShowCommonCountdown
	// Flags: [Final|Native|Public]
	// Offset: 0x1425ae14
	// Params: [ Num(1) Size(0x50) ]
	void ShowCommonCountdown(struct FArenaCommonCountDownInfo CountDownInfo);

	// Object: Function Arena.ArenaCountdownHudView.SetCurCountdownTime
	// Flags: [Final|Native|Public]
	// Offset: 0x1425ad70
	// Params: [ Num(1) Size(0x4) ]
	void SetCurCountdownTime(int32_t InCurCountdownTime);

	// Object: Function Arena.ArenaCountdownHudView.SetCountdownTimeText
	// Flags: [Final|Native|Public]
	// Offset: 0x1425accc
	// Params: [ Num(1) Size(0x4) ]
	void SetCountdownTimeText(int32_t InCurCountdownTime);
	DEFINE_UE_CLASS_HELPERS(UArenaCountdownHudView, "ArenaCountdownHudView")

};

// Object: Class Arena.ArenaCountdownView
// Size: 0x510 (Inherited: 0x3F0)
struct UArenaCountdownView : UBaseUIView
{
	uint8_t Pad_0x3F0[0x50]; // 0x3F0(0x50)
	struct FName CountDown_KeyName; // 0x440(0x8)
	struct FText CountDown_KeyText; // 0x448(0x18)
	struct UCanvasPanel* Event_CanvasPanel; // 0x460(0x8)
	struct UCanvasPanel* TenSecondsExit_CanvasPanel; // 0x468(0x8)
	struct UWidgetAnimation* Anim_FinalCutDownNum_loop; // 0x470(0x8)
	struct UWidgetAnimation* Anim_FinalCutDown_in; // 0x478(0x8)
	struct UWidgetAnimation* Anim_FinalCutDown_out; // 0x480(0x8)
	struct UWidgetAnimation* Anim_FinalCutDown_GamePoint; // 0x488(0x8)
	float Anim_GamePoint_Length; // 0x490(0x4)
	float Anim_GamePoint_Speed; // 0x494(0x4)
	uint8_t Pad_0x498[0x4]; // 0x498(0x4)
	float Anim_Out_Length; // 0x49C(0x4)
	uint8_t Pad_0x4A0[0x10]; // 0x4A0(0x10)
	struct UTextBlock* TenSecondsExit_TimeText; // 0x4B0(0x8)
	struct UTextBlock* TenSecondsExit_TitleText; // 0x4B8(0x8)
	uint8_t Pad_0x4C0[0x10]; // 0x4C0(0x10)
	struct UPanelWidget* KeyContent; // 0x4D0(0x8)
	struct UTextBlock* KeyText; // 0x4D8(0x8)
	struct UHDKeyIconBoxWidget* KeyIconBox; // 0x4E0(0x8)
	int32_t AudioTime_CountDown_Step1; // 0x4E8(0x4)
	int32_t AudioTime_CountDown_Step2; // 0x4EC(0x4)
	struct FName AudioName_CountDown_Step1; // 0x4F0(0x8)
	struct FName AudioName_CountDown_Step2; // 0x4F8(0x8)
	uint8_t Pad_0x500[0x10]; // 0x500(0x10)


	// Object: Function Arena.ArenaCountdownView.ShowCommonCountdown
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b214
	// Params: [ Num(1) Size(0x50) ]
	void ShowCommonCountdown(struct FArenaCommonCountDownInfo CountDownInfo);

	// Object: Function Arena.ArenaCountdownView.SetCurCountdownTime
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b170
	// Params: [ Num(1) Size(0x4) ]
	void SetCurCountdownTime(int32_t InCurCountdownTime);

	// Object: Function Arena.ArenaCountdownView.SetCountdownTimeText
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b0cc
	// Params: [ Num(1) Size(0x4) ]
	void SetCountdownTimeText(int32_t InCurCountdownTime);

	// Object: Function Arena.ArenaCountdownView.OnArenaRoundStateUIEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b0b8
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaRoundStateUIEvent();
	DEFINE_UE_CLASS_HELPERS(UArenaCountdownView, "ArenaCountdownView")

};

// Object: Class Arena.ArenaHUD
// Size: 0x768 (Inherited: 0x730)
struct AArenaHUD : ADFMHUD
{
	int32_t RemainTimeHud_UrgentTime; // 0x72C(0x4)
	struct AGameState_Arena* GameState; // 0x730(0x8)
	struct APlayerState_Arena* PlayerState; // 0x738(0x8)
	uint8_t Pad_0x744[0x4]; // 0x744(0x4)
	uint8_t bIsPlayerDataReady : 1; // 0x748(0x1), Mask(0x1)
	uint8_t BitPad_0x748_1 : 7; // 0x748(0x1)
	uint8_t Pad_0x749[0x7]; // 0x749(0x7)
	struct URemainTimeHUDView* RemainTimeHUD; // 0x750(0x8)
	struct USOLRemainTimeHudView* SOLRemainTimeHudView; // 0x758(0x8)
	uint8_t Pad_0x760[0x8]; // 0x760(0x8)


	// Object: Function Arena.ArenaHUD.OnInGameEquipmentRentalEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x1425b560
	// Params: [ Num(2) Size(0x8) ]
	void OnInGameEquipmentRentalEvent(int32_t RentalEvent, int32_t Param1);

	// Object: Function Arena.ArenaHUD.OnClientArenaRoundStateChange
	// Flags: [Final|Native|Public]
	// Offset: 0x1425b54c
	// Params: [ Num(0) Size(0x0) ]
	void OnClientArenaRoundStateChange();
	DEFINE_UE_CLASS_HELPERS(AArenaHUD, "ArenaHUD")

};

// Object: Class Arena.ArenaOpenEquipRentalBtnHudView
// Size: 0x420 (Inherited: 0x400)
struct UArenaOpenEquipRentalBtnHudView : UGPBaseHudView
{
	struct UButton* OpenEquimentRentalBtn; // 0x400(0x8)
	uint8_t Pad_0x408[0x10]; // 0x408(0x10)
	struct UDFInteractorMainHudView* InteractorView; // 0x418(0x8)


	// Object: Function Arena.ArenaOpenEquipRentalBtnHudView.OnClientArenaRoundStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b664
	// Params: [ Num(0) Size(0x0) ]
	void OnClientArenaRoundStateChange();

	// Object: Function Arena.ArenaOpenEquipRentalBtnHudView.DoOpenEquimentRentalBtnClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b650
	// Params: [ Num(0) Size(0x0) ]
	void DoOpenEquimentRentalBtnClick();
	DEFINE_UE_CLASS_HELPERS(UArenaOpenEquipRentalBtnHudView, "ArenaOpenEquipRentalBtnHudView")

};

// Object: Class Arena.ArenaOpenEquipRentalBtnView
// Size: 0x408 (Inherited: 0x3F0)
struct UArenaOpenEquipRentalBtnView : UBaseUIView
{
	struct UButton* OpenEquimentRentalBtn; // 0x3F0(0x8)
	uint8_t Pad_0x3F8[0x8]; // 0x3F8(0x8)
	struct UDFMInteractorView* InteractorView; // 0x400(0x8)


	// Object: Function Arena.ArenaOpenEquipRentalBtnView.OnClientArenaRoundStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b694
	// Params: [ Num(0) Size(0x0) ]
	void OnClientArenaRoundStateChange();

	// Object: Function Arena.ArenaOpenEquipRentalBtnView.DoOpenEquimentRentalBtnClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425b680
	// Params: [ Num(0) Size(0x0) ]
	void DoOpenEquimentRentalBtnClick();
	DEFINE_UE_CLASS_HELPERS(UArenaOpenEquipRentalBtnView, "ArenaOpenEquipRentalBtnView")

};

// Object: Class Arena.ArenaScoreBoardHudController
// Size: 0x98 (Inherited: 0x80)
struct UArenaScoreBoardHudController : UBaseHudController
{
	struct UArenaScoreBoardHudView* ArenaScoreBoardHudView; // 0x80(0x8)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function Arena.ArenaScoreBoardHudController.UpdateBoardInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1425b6c4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateBoardInfo();

	// Object: Function Arena.ArenaScoreBoardHudController.OnArenaPlayerStatItemListChange
	// Flags: [Final|Native|Public]
	// Offset: 0x1425b6b0
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaPlayerStatItemListChange();
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardHudController, "ArenaScoreBoardHudController")

};

// Object: Class Arena.ArenaScoreBoardHudView
// Size: 0x420 (Inherited: 0x400)
struct UArenaScoreBoardHudView : UGPBaseHudView
{
	struct UArenaScoreBoardPanelHudView* ArenaScoreBoardPanel; // 0x400(0x8)
	struct FName ArenaScoreBoardPanel_Name; // 0x408(0x8)
	uint8_t Pad_0x410[0x10]; // 0x410(0x10)


	// Object: Function Arena.ArenaScoreBoardHudView.UpdateBoardInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1425b6e0
	// Params: [ Num(1) Size(0x10) ]
	void UpdateBoardInfo(struct TArray<struct FArenaPlayerStatItem> PlayerInfoList);
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardHudView, "ArenaScoreBoardHudView")

};

// Object: Class Arena.ArenaScoreBoardItemHudView
// Size: 0x3D8 (Inherited: 0x2F8)
struct UArenaScoreBoardItemHudView : UUserWidget
{
	struct UDFTextBlock* PlayerName; // 0x2F8(0x8)
	struct UDFTextBlock* PlayerScore; // 0x300(0x8)
	struct UDFTextBlock* Kill; // 0x308(0x8)
	struct UDFTextBlock* Death; // 0x310(0x8)
	struct UDFTextBlock* Assist; // 0x318(0x8)
	struct UDFImage* PlayerPlatformIcon; // 0x320(0x8)
	struct UArenaScoreBoardPlayerHudView* PlayerAvatar; // 0x328(0x8)
	struct ULuaUIBaseView* PlayerWeaponView; // 0x330(0x8)
	struct ULuaUIBaseView* PlayerHelmetView; // 0x338(0x8)
	struct ULuaUIBaseView* PlayerBreastPlateView; // 0x340(0x8)
	struct FName PlayerAvatar_Name; // 0x348(0x8)
	struct FName PlayerWeaponView_Name; // 0x350(0x8)
	struct FName PlayerHelmetView_Name; // 0x358(0x8)
	struct FName PlayerBreastPlateView_Name; // 0x360(0x8)
	struct FName PlayerPlatformIcon_Name; // 0x368(0x8)
	uint8_t Pad_0x370[0x68]; // 0x370(0x68)


	// Object: Function Arena.ArenaScoreBoardItemHudView.OnClientCharacterLiveStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1425b8c4
	// Params: [ Num(2) Size(0xC) ]
	void OnClientCharacterLiveStatusChanged(struct AGPPlayerState* PlayerState, int32_t CharacterLiveStatus);

	// Object: Function Arena.ArenaScoreBoardItemHudView.BP_SetDead
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetDead(uint8_t bIsDead);

	// Object: Function Arena.ArenaScoreBoardItemHudView.BP_SetColor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetColor(uint8_t Type);
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardItemHudView, "ArenaScoreBoardItemHudView")

};

// Object: Class Arena.ArenaScoreBoardItemView
// Size: 0x4D0 (Inherited: 0x3F0)
struct UArenaScoreBoardItemView : UBaseUIView
{
	struct UDFTextBlock* PlayerName; // 0x3F0(0x8)
	struct UDFTextBlock* PlayerScore; // 0x3F8(0x8)
	struct UDFTextBlock* Kill; // 0x400(0x8)
	struct UDFTextBlock* Death; // 0x408(0x8)
	struct UDFTextBlock* Assist; // 0x410(0x8)
	struct UDFImage* PlayerPlatformIcon; // 0x418(0x8)
	struct UArenaScoreBoardPlayerView* PlayerAvatar; // 0x420(0x8)
	struct ULuaUIBaseView* PlayerWeaponView; // 0x428(0x8)
	struct ULuaUIBaseView* PlayerHelmetView; // 0x430(0x8)
	struct ULuaUIBaseView* PlayerBreastPlateView; // 0x438(0x8)
	struct FName PlayerAvatar_Name; // 0x440(0x8)
	struct FName PlayerWeaponView_Name; // 0x448(0x8)
	struct FName PlayerHelmetView_Name; // 0x450(0x8)
	struct FName PlayerBreastPlateView_Name; // 0x458(0x8)
	struct FName PlayerPlatformIcon_Name; // 0x460(0x8)
	uint8_t Pad_0x468[0x68]; // 0x468(0x68)


	// Object: Function Arena.ArenaScoreBoardItemView.OnClientCharacterLiveStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1425ba98
	// Params: [ Num(2) Size(0xC) ]
	void OnClientCharacterLiveStatusChanged(struct AGPPlayerState* PlayerState, int32_t CharacterLiveStatus);

	// Object: Function Arena.ArenaScoreBoardItemView.BP_SetDead
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetDead(uint8_t bIsDead);

	// Object: Function Arena.ArenaScoreBoardItemView.BP_SetColor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetColor(uint8_t Type);
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardItemView, "ArenaScoreBoardItemView")

};

// Object: Class Arena.ArenaScoreBoardPanelHudView
// Size: 0x398 (Inherited: 0x2F8)
struct UArenaScoreBoardPanelHudView : UUserWidget
{
	struct TArray<struct UArenaScoreBoardTeamHudView*> ArenaScoreBoardTeams; // 0x2F8(0x10)
	struct TArray<struct FName> ArenaScoreBoardTeams_Name; // 0x308(0x10)
	uint8_t Pad_0x318[0x80]; // 0x318(0x80)
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardPanelHudView, "ArenaScoreBoardPanelHudView")

};

// Object: Class Arena.ArenaScoreBoardPanelView
// Size: 0x490 (Inherited: 0x3F0)
struct UArenaScoreBoardPanelView : UBaseUIView
{
	struct TArray<struct UArenaScoreBoardTeamView*> ArenaScoreBoardTeams; // 0x3F0(0x10)
	struct TArray<struct FName> ArenaScoreBoardTeams_Name; // 0x400(0x10)
	uint8_t Pad_0x410[0x80]; // 0x410(0x80)
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardPanelView, "ArenaScoreBoardPanelView")

};

// Object: Class Arena.ArenaScoreBoardPlayerHudView
// Size: 0x320 (Inherited: 0x2F8)
struct UArenaScoreBoardPlayerHudView : UUserWidget
{
	struct UImage* AvatarImg; // 0x2F8(0x8)
	struct TWeakObjectPtr<struct ADFMPlayerState> PlayerState; // 0x300(0x8)
	uint8_t Pad_0x308[0x18]; // 0x308(0x18)
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardPlayerHudView, "ArenaScoreBoardPlayerHudView")

};

// Object: Class Arena.ArenaScoreBoardPlayerView
// Size: 0x418 (Inherited: 0x3F0)
struct UArenaScoreBoardPlayerView : UBaseUIView
{
	struct UImage* AvatarImg; // 0x3F0(0x8)
	struct TWeakObjectPtr<struct ADFMPlayerState> PlayerState; // 0x3F8(0x8)
	uint8_t Pad_0x400[0x18]; // 0x400(0x18)
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardPlayerView, "ArenaScoreBoardPlayerView")

};

// Object: Class Arena.ArenaScoreBoardTeamHudView
// Size: 0x380 (Inherited: 0x2F8)
struct UArenaScoreBoardTeamHudView : UUserWidget
{
	struct UDFTextBlock* TextTeamScore; // 0x2F8(0x8)
	struct UDFTextBlock* TextTeamName; // 0x300(0x8)
	struct UImage* ImageTeamId; // 0x308(0x8)
	struct TArray<struct UArenaScoreBoardItemHudView*> ArenaScoreBoardItems; // 0x310(0x10)
	struct TArray<struct FName> ArenaScoreBoardItems_Name; // 0x320(0x10)
	uint8_t Pad_0x330[0x50]; // 0x330(0x50)


	// Object: Function Arena.ArenaScoreBoardTeamHudView.BP_SetColor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetColor(uint8_t isBlue);
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardTeamHudView, "ArenaScoreBoardTeamHudView")

};

// Object: Class Arena.ArenaScoreBoardTeamView
// Size: 0x478 (Inherited: 0x3F0)
struct UArenaScoreBoardTeamView : UBaseUIView
{
	struct UDFTextBlock* TextTeamScore; // 0x3F0(0x8)
	struct UDFTextBlock* TextTeamName; // 0x3F8(0x8)
	struct UImage* ImageTeamId; // 0x400(0x8)
	struct TArray<struct UArenaScoreBoardItemView*> ArenaScoreBoardItems; // 0x408(0x10)
	struct TArray<struct FName> ArenaScoreBoardItems_Name; // 0x418(0x10)
	uint8_t Pad_0x428[0x50]; // 0x428(0x50)


	// Object: Function Arena.ArenaScoreBoardTeamView.BP_SetColor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetColor(uint8_t isBlue);
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardTeamView, "ArenaScoreBoardTeamView")

};

// Object: Class Arena.ArenaScoreBoardView
// Size: 0x410 (Inherited: 0x3F0)
struct UArenaScoreBoardView : UBaseUIView
{
	struct UArenaScoreBoardPanelView* ArenaScoreBoardPanel; // 0x3F0(0x8)
	struct FName ArenaScoreBoardPanel_Name; // 0x3F8(0x8)
	uint8_t Pad_0x400[0x10]; // 0x400(0x10)


	// Object: Function Arena.ArenaScoreBoardView.UpdateBoardInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1425bce0
	// Params: [ Num(0) Size(0x0) ]
	void UpdateBoardInfo();

	// Object: Function Arena.ArenaScoreBoardView.OnArenaPlayerStatItemListChange
	// Flags: [Final|Native|Public]
	// Offset: 0x1425bccc
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaPlayerStatItemListChange();
	DEFINE_UE_CLASS_HELPERS(UArenaScoreBoardView, "ArenaScoreBoardView")

};

// Object: Class Arena.ArenaStatusTipsBannerHudView
// Size: 0x4F0 (Inherited: 0x400)
struct UArenaStatusTipsBannerHudView : UGPBaseHudView
{
	float ShowTime; // 0x3FC(0x4)
	float AnimOutTime; // 0x400(0x4)
	struct FText Tip1_Draw; // 0x408(0x18)
	struct FText Tip1_Win; // 0x420(0x18)
	struct FText Tip1_Lose; // 0x438(0x18)
	struct FText Tip2_TimeFinish; // 0x450(0x18)
	struct FText Tip2_Win_EnemyAllDie; // 0x468(0x18)
	struct FText Tip2_Win_ArenaBrickUpload; // 0x480(0x18)
	struct FText Tip2_Lose_TeammateAllDie; // 0x498(0x18)
	struct FText Tip2_Lose_ArenaBrickUpload; // 0x4B0(0x18)
	struct FText Tip2_Win_EnemyAllEscape; // 0x4C8(0x18)
	uint8_t Pad_0x4E0[0x10]; // 0x4E0(0x10)


	// Object: Function Arena.ArenaStatusTipsBannerHudView.OnShowFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x1425be78
	// Params: [ Num(0) Size(0x0) ]
	void OnShowFinish();

	// Object: Function Arena.ArenaStatusTipsBannerHudView.OnAnimOutFinish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1425be64
	// Params: [ Num(0) Size(0x0) ]
	void OnAnimOutFinish();

	// Object: Function Arena.ArenaStatusTipsBannerHudView.BP_ShowTip
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x38) ]
	void BP_ShowTip(int32_t UIType, const struct FText& TipText1, const struct FText& TipText2);

	// Object: Function Arena.ArenaStatusTipsBannerHudView.BP_HideTip
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_HideTip();
	DEFINE_UE_CLASS_HELPERS(UArenaStatusTipsBannerHudView, "ArenaStatusTipsBannerHudView")

};

// Object: Class Arena.ArenaStatusTipsBannerView
// Size: 0x4E8 (Inherited: 0x3F8)
struct UArenaStatusTipsBannerView : UBaseMutexUIView
{
	float ShowTime; // 0x3F8(0x4)
	float AnimOutTime; // 0x3FC(0x4)
	struct FText Tip1_Draw; // 0x400(0x18)
	struct FText Tip1_Win; // 0x418(0x18)
	struct FText Tip1_Lose; // 0x430(0x18)
	struct FText Tip2_TimeFinish; // 0x448(0x18)
	struct FText Tip2_Win_EnemyAllDie; // 0x460(0x18)
	struct FText Tip2_Win_ArenaBrickUpload; // 0x478(0x18)
	struct FText Tip2_Lose_TeammateAllDie; // 0x490(0x18)
	struct FText Tip2_Lose_ArenaBrickUpload; // 0x4A8(0x18)
	struct FText Tip2_Win_EnemyAllEscape; // 0x4C0(0x18)
	uint8_t Pad_0x4D8[0x10]; // 0x4D8(0x10)


	// Object: Function Arena.ArenaStatusTipsBannerView.OnShowFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c010
	// Params: [ Num(0) Size(0x0) ]
	void OnShowFinish();

	// Object: Function Arena.ArenaStatusTipsBannerView.OnAnimOutFinish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1425bffc
	// Params: [ Num(0) Size(0x0) ]
	void OnAnimOutFinish();

	// Object: Function Arena.ArenaStatusTipsBannerView.BP_ShowTip
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x38) ]
	void BP_ShowTip(int32_t UIType, const struct FText& TipText1, const struct FText& TipText2);

	// Object: Function Arena.ArenaStatusTipsBannerView.BP_HideTip
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_HideTip();
	DEFINE_UE_CLASS_HELPERS(UArenaStatusTipsBannerView, "ArenaStatusTipsBannerView")

};

// Object: Class Arena.ArenaTopBarHudView
// Size: 0x470 (Inherited: 0x400)
struct UArenaTopBarHudView : UGPBaseHudView
{
	struct UDFButton* TopBarButton; // 0x400(0x8)
	struct UDFTextBlock* TextRound; // 0x408(0x8)
	struct UDFTextBlock* TextScore; // 0x410(0x8)
	struct TArray<struct UArenaTopBarTeamView*> ArenaTopBarTeamViews; // 0x418(0x10)
	struct TArray<struct FName> ArenaTopBarTeamViews_Name; // 0x428(0x10)
	uint8_t Pad_0x438[0x28]; // 0x438(0x28)
	struct APlayerState_Arena* LocalPlayerState; // 0x460(0x8)
	uint8_t Pad_0x468[0x8]; // 0x468(0x8)


	// Object: Function Arena.ArenaTopBarHudView.OnTopBarButtonClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425c250
	// Params: [ Num(0) Size(0x0) ]
	void OnTopBarButtonClicked();

	// Object: Function Arena.ArenaTopBarHudView.OnClientArenaRoundStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425c23c
	// Params: [ Num(0) Size(0x0) ]
	void OnClientArenaRoundStateChange();

	// Object: Function Arena.ArenaTopBarHudView.OnBlueprintPlunderInfoUpdate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1425c0d0
	// Params: [ Num(1) Size(0x118) ]
	void OnBlueprintPlunderInfoUpdate(const struct FBlueprintPlunderInfo& BlueprintPlunderInfo);

	// Object: Function Arena.ArenaTopBarHudView.OnArenaScoreChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425c02c
	// Params: [ Num(1) Size(0x4) ]
	void OnArenaScoreChange(int32_t ArenaScore);
	DEFINE_UE_CLASS_HELPERS(UArenaTopBarHudView, "ArenaTopBarHudView")

};

// Object: Class Arena.ArenaTopBarPlayerView
// Size: 0x338 (Inherited: 0x2F8)
struct UArenaTopBarPlayerView : UUserWidget
{
	struct UImage* AvatarImg; // 0x2F8(0x8)
	struct UImage* Image_MandelBrick; // 0x300(0x8)
	uint8_t bPrintDebugLog : 1; // 0x308(0x1), Mask(0x1)
	uint8_t BitPad_0x308_1 : 7; // 0x308(0x1)
	uint8_t bCheckOffline : 1; // 0x309(0x1), Mask(0x1)
	uint8_t BitPad_0x309_1 : 7; // 0x309(0x1)
	uint8_t bCheckOfflinePlayer : 1; // 0x30A(0x1), Mask(0x1)
	uint8_t BitPad_0x30A_1 : 7; // 0x30A(0x1)
	uint8_t Pad_0x30B[0x1]; // 0x30B(0x1)
	struct TWeakObjectPtr<struct ADFMPlayerState> PlayerState; // 0x30C(0x8)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	uint64_t PlayerUin; // 0x318(0x8)
	int64_t HeroId; // 0x320(0x8)
	uint8_t bIsDead : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t bIsMatchOver : 1; // 0x329(0x1), Mask(0x1)
	uint8_t BitPad_0x329_1 : 7; // 0x329(0x1)
	uint8_t Pad_0x32A[0x6]; // 0x32A(0x6)
	uint64_t LoadAvatarImgHandle; // 0x330(0x8)


	// Object: Function Arena.ArenaTopBarPlayerView.UpdatePlayerState
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c73c
	// Params: [ Num(3) Size(0x3) ]
	void UpdatePlayerState(uint8_t InIsDead, uint8_t InIsMatchOver, uint8_t bPlayAnim);

	// Object: Function Arena.ArenaTopBarPlayerView.UpdatePlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c698
	// Params: [ Num(1) Size(0x8) ]
	void UpdatePlayer(struct ADFMPlayerState* InPlayerState);

	// Object: Function Arena.ArenaTopBarPlayerView.ResetView
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c684
	// Params: [ Num(0) Size(0x0) ]
	void ResetView();

	// Object: Function Arena.ArenaTopBarPlayerView.OnClientCharacterLiveStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c5a4
	// Params: [ Num(2) Size(0xC) ]
	void OnClientCharacterLiveStatusChanged(struct AGPPlayerState* InPlayerState, int32_t CharacterLiveStatus);

	// Object: Function Arena.ArenaTopBarPlayerView.OnAvatarImageLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x1425c4e4
	// Params: [ Num(1) Size(0x18) ]
	void OnAvatarImageLoaded(const struct FSoftObjectPath& ImgPath);

	// Object: Function Arena.ArenaTopBarPlayerView.LoadAvatarImage
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c440
	// Params: [ Num(1) Size(0x8) ]
	void LoadAvatarImage(int64_t InHeroId);

	// Object: Function Arena.ArenaTopBarPlayerView.IsPlayerOut
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c408
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlayerOut();

	// Object: Function Arena.ArenaTopBarPlayerView.InitTopbar
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c3f4
	// Params: [ Num(0) Size(0x0) ]
	void InitTopbar();

	// Object: Function Arena.ArenaTopBarPlayerView.InitPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x1425c350
	// Params: [ Num(1) Size(0x8) ]
	void InitPlayer(struct ADFMPlayerState* InPlayerState);

	// Object: Function Arena.ArenaTopBarPlayerView.BP_UpdatePlayerState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x3) ]
	void BP_UpdatePlayerState(uint8_t InbIsDead, uint8_t InbIsMatchOver, uint8_t bPlayAnim);

	// Object: Function Arena.ArenaTopBarPlayerView.BP_SetHaveBrick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetHaveBrick(uint8_t bHaveBrick);
	DEFINE_UE_CLASS_HELPERS(UArenaTopBarPlayerView, "ArenaTopBarPlayerView")

};

// Object: Class Arena.ArenaTopBarTeamView
// Size: 0x330 (Inherited: 0x2F8)
struct UArenaTopBarTeamView : UUserWidget
{
	struct TArray<struct UArenaTopBarPlayerView*> ArenaTopBarPlayerViews; // 0x2F8(0x10)
	struct TArray<struct FName> ArenaTopBarPlayerViews_Name; // 0x308(0x10)
	uint8_t Pad_0x318[0x18]; // 0x318(0x18)


	// Object: Function Arena.ArenaTopBarTeamView.BP_TeamDeciphering
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_TeamDeciphering(uint8_t isDeciphering);

	// Object: Function Arena.ArenaTopBarTeamView.BP_SetTeamWinRoundCount
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x5) ]
	void BP_SetTeamWinRoundCount(int32_t RoundCount, uint8_t bPlayAnim);

	// Object: Function Arena.ArenaTopBarTeamView.BP_SetTeamOut
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetTeamOut(uint8_t isTeamOut);

	// Object: Function Arena.ArenaTopBarTeamView.BP_SetIsLocalTeam
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetIsLocalTeam(uint8_t bIsLocalTeam);
	DEFINE_UE_CLASS_HELPERS(UArenaTopBarTeamView, "ArenaTopBarTeamView")

};

// Object: Class Arena.ArenaTopBarView
// Size: 0x458 (Inherited: 0x3F0)
struct UArenaTopBarView : UBaseUIView
{
	struct UDFButton* TopBarButton; // 0x3F0(0x8)
	struct UDFTextBlock* TextRound; // 0x3F8(0x8)
	struct UDFTextBlock* TextScore; // 0x400(0x8)
	struct TArray<struct UArenaTopBarTeamView*> ArenaTopBarTeamViews; // 0x408(0x10)
	struct TArray<struct FName> ArenaTopBarTeamViews_Name; // 0x418(0x10)
	uint8_t Pad_0x428[0x28]; // 0x428(0x28)
	struct APlayerState_Arena* LocalPlayerState; // 0x450(0x8)


	// Object: Function Arena.ArenaTopBarView.OnTopBarButtonClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425cd3c
	// Params: [ Num(0) Size(0x0) ]
	void OnTopBarButtonClicked();

	// Object: Function Arena.ArenaTopBarView.OnClientArenaRoundStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425cd28
	// Params: [ Num(0) Size(0x0) ]
	void OnClientArenaRoundStateChange();

	// Object: Function Arena.ArenaTopBarView.OnBlueprintPlunderInfoUpdate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1425cbbc
	// Params: [ Num(1) Size(0x118) ]
	void OnBlueprintPlunderInfoUpdate(const struct FBlueprintPlunderInfo& BlueprintPlunderInfo);

	// Object: Function Arena.ArenaTopBarView.OnArenaScoreChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425cb18
	// Params: [ Num(1) Size(0x4) ]
	void OnArenaScoreChange(int32_t ArenaScore);
	DEFINE_UE_CLASS_HELPERS(UArenaTopBarView, "ArenaTopBarView")

};

// Object: Class Arena.InGameEquipmentRentalView
// Size: 0x668 (Inherited: 0x668)
struct UInGameEquipmentRentalView : ULuaUIHudBaseView
{	DEFINE_UE_CLASS_HELPERS(UInGameEquipmentRentalView, "InGameEquipmentRentalView")

};

// Object: Class Arena.PlayerEquipmentRentalComponent
// Size: 0x190 (Inherited: 0x100)
struct UPlayerEquipmentRentalComponent : UGPNetworkActorComponent
{
	int32_t RefreshFreeCountMax; // 0xFC(0x4)
	int32_t RentalCountMax; // 0x100(0x4)
	struct TArray<int32_t> CheckHasNoEquip_WeaponPositions; // 0x108(0x10)
	struct TArray<int32_t> CheckHasNoEquip_EquipmentType; // 0x118(0x10)
	struct TArray<int32_t> DropEquip_WeaponPositions; // 0x128(0x10)
	struct TArray<int32_t> DropEquip_IgnoreEquipmentType; // 0x138(0x10)
	int32_t SwitchMainWeaponType; // 0x148(0x4)
	uint8_t Pad_0x14C[0x14]; // 0x14C(0x14)
	struct APlayerState_Arena* PlayerState; // 0x160(0x8)
	struct FEquipmentRentalData RentalData; // 0x168(0x20)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)


	// Object: Function Arena.PlayerEquipmentRentalComponent.ServerRefreshType
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable]
	// Offset: 0x1425d1f8
	// Params: [ Num(1) Size(0x4) ]
	void ServerRefreshType(int32_t TypeID);

	// Object: Function Arena.PlayerEquipmentRentalComponent.ServerApplyRental
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable]
	// Offset: 0x1425d14c
	// Params: [ Num(1) Size(0x4) ]
	void ServerApplyRental(int32_t TypeID);

	// Object: Function Arena.PlayerEquipmentRentalComponent.OnServerArenaRoundStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425d138
	// Params: [ Num(0) Size(0x0) ]
	void OnServerArenaRoundStateChange();

	// Object: Function Arena.PlayerEquipmentRentalComponent.OnRep_RentalData
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425d124
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RentalData();

	// Object: Function Arena.PlayerEquipmentRentalComponent.OnClientArenaRoundStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425d110
	// Params: [ Num(0) Size(0x0) ]
	void OnClientArenaRoundStateChange();

	// Object: Function Arena.PlayerEquipmentRentalComponent.NotiryScoreChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425d06c
	// Params: [ Num(1) Size(0x4) ]
	void NotiryScoreChange(int32_t ArenaScore);

	// Object: Function Arena.PlayerEquipmentRentalComponent.GetScore
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1425d038
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetScore();

	// Object: Function Arena.PlayerEquipmentRentalComponent.GetRentalData
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1425cf98
	// Params: [ Num(1) Size(0x20) ]
	struct FEquipmentRentalData GetRentalData();

	// Object: Function Arena.PlayerEquipmentRentalComponent.ClientNotifyResult
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x1425ceb4
	// Params: [ Num(2) Size(0x8) ]
	void ClientNotifyResult(int32_t RentalEvent, int32_t ErrorCode);
	DEFINE_UE_CLASS_HELPERS(UPlayerEquipmentRentalComponent, "PlayerEquipmentRentalComponent")

};

// Object: Class Arena.PlayerState_Arena
// Size: 0x1A78 (Inherited: 0x1A78)
struct APlayerState_Arena : ADFMPlayerState
{
	int32_t ArenaScore; // 0x1A74(0x4)


	// Object: Function Arena.PlayerState_Arena.OnRep_ArenaScore
	// Flags: [Final|Native|Protected]
	// Offset: 0x1425d470
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ArenaScore();

	// Object: Function Arena.PlayerState_Arena.GetArenaScore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1425d43c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetArenaScore();

	// Object: Function Arena.PlayerState_Arena.ClientShowScoreFeedback
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x1425d31c
	// Params: [ Num(3) Size(0xC) ]
	void ClientShowScoreFeedback(int32_t ScoreType, int32_t InScore, int32_t Distance);
	DEFINE_UE_CLASS_HELPERS(APlayerState_Arena, "PlayerState_Arena")

};

} // namespace SDK
