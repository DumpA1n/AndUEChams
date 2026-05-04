#include "GM.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMWeaponAssemble.hpp"
#include "DWorldTools.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMPlayerGMComponent::* ----
void UDFMPlayerGMComponent::VCCheckTool(float InRangeHalfX, float InRangeHalfY, float InCellSize, float InDeltaAngle, float InDebuglifetime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "VCCheckTool");
    struct
    {
        float InRangeHalfX;
        float InRangeHalfY;
        float InCellSize;
        float InDeltaAngle;
        float InDebuglifetime;
    } Parms{};
    Parms.InRangeHalfX = (float)InRangeHalfX;
    Parms.InRangeHalfY = (float)InRangeHalfY;
    Parms.InCellSize = (float)InCellSize;
    Parms.InDeltaAngle = (float)InDeltaAngle;
    Parms.InDebuglifetime = (float)InDebuglifetime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UseSkill_T(int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UseSkill_T");
    struct
    {
        int32_t SkillId;
    } Parms{};
    Parms.SkillId = (int32_t)SkillId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UseSkill(int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UseSkill");
    struct
    {
        int32_t SkillId;
    } Parms{};
    Parms.SkillId = (int32_t)SkillId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UseAILabGM(int64_t Uin, struct FString GMCmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UseAILabGM");
    struct
    {
        int64_t Uin;
        struct FString GMCmd;
    } Parms{};
    Parms.Uin = (int64_t)Uin;
    Parms.GMCmd = (struct FString)GMCmd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdatePerceptionDebugInfoToClient(struct TArray<struct FPerceptionDebugData> PerceptionDebugInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdatePerceptionDebugInfoToClient");
    struct
    {
        struct TArray<struct FPerceptionDebugData> PerceptionDebugInfo;
    } Parms{};
    Parms.PerceptionDebugInfo = (struct TArray<struct FPerceptionDebugData>)PerceptionDebugInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdatePerceptionDebugInfo(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdatePerceptionDebugInfo");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateMonitorAIMouse(struct FVector CamLoc, struct FRotator CamRot, struct FVector pint, struct FVector Dir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateMonitorAIMouse");
    struct
    {
        struct FVector CamLoc;
        struct FRotator CamRot;
        struct FVector pint;
        struct FVector Dir;
    } Parms{};
    Parms.CamLoc = (struct FVector)CamLoc;
    Parms.CamRot = (struct FRotator)CamRot;
    Parms.pint = (struct FVector)pint;
    Parms.Dir = (struct FVector)Dir;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateMonitorAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateMonitorAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateHitRateDebugInfoToClient(struct TArray<struct FAIHitRateDebugData> AIHitRateData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateHitRateDebugInfoToClient");
    struct
    {
        struct TArray<struct FAIHitRateDebugData> AIHitRateData;
    } Parms{};
    Parms.AIHitRateData = (struct TArray<struct FAIHitRateDebugData>)AIHitRateData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateDrawAIDsLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateDrawAIDsLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateDebugToClient(struct APawn* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateDebugToClient");
    struct
    {
        struct APawn* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct APawn*)AICharacter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateAILabInfoToClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateAILabInfoToClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateAILabDebug(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateAILabDebug");
    struct
    {
        struct FString Msg;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateAIDifficultyDebugInfoToClient(struct FAiDifficultyDebugDataInfos Infos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateAIDifficultyDebugInfoToClient");
    struct
    {
        struct FAiDifficultyDebugDataInfos Infos;
    } Parms{};
    Parms.Infos = (struct FAiDifficultyDebugDataInfos)Infos;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateAIDebugInfoToClient(struct APawn* AICharacter, struct FString DebugInfoMsg, struct FString DebugInfoMsgRight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateAIDebugInfoToClient");
    struct
    {
        struct APawn* AICharacter;
        struct FString DebugInfoMsg;
        struct FString DebugInfoMsgRight;
    } Parms{};
    Parms.AICharacter = (struct APawn*)AICharacter;
    Parms.DebugInfoMsg = (struct FString)DebugInfoMsg;
    Parms.DebugInfoMsgRight = (struct FString)DebugInfoMsgRight;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::UpdateAIDebugInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "UpdateAIDebugInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TryToSampleWaterData(int32_t SampledCount, float MaxDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TryToSampleWaterData");
    struct
    {
        int32_t SampledCount;
        float MaxDistance;
    } Parms{};
    Parms.SampledCount = (int32_t)SampledCount;
    Parms.MaxDistance = (float)MaxDistance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TryLanding(struct FVector StartLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TryLanding");
    struct
    {
        struct FVector StartLoc;
    } Parms{};
    Parms.StartLoc = (struct FVector)StartLoc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TransAILabCommand(int64_t Uin, int32_t Command, float value1, float value2, int64_t Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TransAILabCommand");
    struct
    {
        int64_t Uin;
        int32_t Command;
        float value1;
        float value2;
        int64_t Value3;
    } Parms{};
    Parms.Uin = (int64_t)Uin;
    Parms.Command = (int32_t)Command;
    Parms.value1 = (float)value1;
    Parms.value2 = (float)value2;
    Parms.Value3 = (int64_t)Value3;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ToggleXPP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ToggleXPP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ToggleLocationDebug(int32_t DebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ToggleLocationDebug");
    struct
    {
        int32_t DebugMode;
    } Parms{};
    Parms.DebugMode = (int32_t)DebugMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ToggleAudioEventDebugPanel(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ToggleAudioEventDebugPanel");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ToggleAILabDebugMode(int32_t DebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ToggleAILabDebugMode");
    struct
    {
        int32_t DebugMode;
    } Parms{};
    Parms.DebugMode = (int32_t)DebugMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TestWeaponTrace(int32_t TraceTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TestWeaponTrace");
    struct
    {
        int32_t TraceTimes;
    } Parms{};
    Parms.TraceTimes = (int32_t)TraceTimes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TestServerSwitchAssassinateState(uint8_t Enter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TestServerSwitchAssassinateState");
    struct
    {
        uint8_t Enter;
    } Parms{};
    Parms.Enter = (uint8_t)Enter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TestServerFinishAssassinate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TestServerFinishAssassinate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TestServerEndMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TestServerEndMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::TestGMViewClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "TestGMViewClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SwitchAIPrevPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SwitchAIPrevPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SwitchAINextPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SwitchAINextPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::StopCutscene(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "StopCutscene");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::StartSchemeAI(int32_t PlayerSchemeId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "StartSchemeAI");
    struct
    {
        int32_t PlayerSchemeId;
    } Parms{};
    Parms.PlayerSchemeId = (int32_t)PlayerSchemeId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::StarSucker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "StarSucker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SprintSwimStaminaDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SprintSwimStaminaDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpeedUpOccupy(int32_t multipy, float MoveSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpeedUpOccupy");
    struct
    {
        int32_t multipy;
        float MoveSpeed;
    } Parms{};
    Parms.multipy = (int32_t)multipy;
    Parms.MoveSpeed = (float)MoveSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnTestAI(int32_t Index, int32_t Num, struct FVector postion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnTestAI");
    struct
    {
        int32_t Index;
        int32_t Num;
        struct FVector postion;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Num = (int32_t)Num;
    Parms.postion = (struct FVector)postion;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnPvpAiAround(struct FString StrParams, int32_t Num, int32_t ArmedForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnPvpAiAround");
    struct
    {
        struct FString StrParams;
        int32_t Num;
        int32_t ArmedForce;
    } Parms{};
    Parms.StrParams = (struct FString)StrParams;
    Parms.Num = (int32_t)Num;
    Parms.ArmedForce = (int32_t)ArmedForce;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnPortableAmmoBox(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnPortableAmmoBox");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnGMStatueAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnGMStatueAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnGMAI2(struct FString npcName, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnGMAI2");
    struct
    {
        struct FString npcName;
        int32_t Num;
    } Parms{};
    Parms.npcName = (struct FString)npcName;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnGMAI(struct FString npcName, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnGMAI");
    struct
    {
        struct FString npcName;
        int32_t Num;
    } Parms{};
    Parms.npcName = (struct FString)npcName;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SpawnAndBreakItem(struct FString ItemPath, const struct FVector& Location, float Lifetime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SpawnAndBreakItem");
    struct
    {
        struct FString ItemPath;
        struct FVector Location;
        float Lifetime;
    } Parms{};
    Parms.ItemPath = (struct FString)ItemPath;
    Parms.Location = (struct FVector)Location;
    Parms.Lifetime = (float)Lifetime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SOLRandomContract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SOLRandomContract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SOLRandomContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SOLRandomContainer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SkillInputActionTest(int32_t Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SkillInputActionTest");
    struct
    {
        int32_t Param;
    } Parms{};
    Parms.Param = (int32_t)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SkillIgnoreCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SkillIgnoreCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SkillCheckMemoryLeakage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SkillCheckMemoryLeakage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ShowRandomRoomDebugInfo(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ShowRandomRoomDebugInfo");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ShowGroupLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ShowGroupLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ShowGMPanel(struct FName PaenlName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ShowGMPanel");
    struct
    {
        struct FName PaenlName;
    } Parms{};
    Parms.PaenlName = (struct FName)PaenlName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Show3CDebugInfo(float NearlyDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Show3CDebugInfo");
    struct
    {
        float NearlyDistance;
    } Parms{};
    Parms.NearlyDistance = (float)NearlyDistance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetPerkCondForceSucceed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetPerkCondForceSucceed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetOldMonitorAI(struct ADFMCharacter* AI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetOldMonitorAI");
    struct
    {
        struct ADFMCharacter* AI;
    } Parms{};
    Parms.AI = (struct ADFMCharacter*)AI;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetMockPathLen(struct AMockPathHelper* MPH, float Degree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetMockPathLen");
    struct
    {
        struct AMockPathHelper* MPH;
        float Degree;
    } Parms{};
    Parms.MPH = (struct AMockPathHelper*)MPH;
    Parms.Degree = (float)Degree;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetMockPathFocusPlayer(struct AMockPathHelper* MPH, uint8_t bFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetMockPathFocusPlayer");
    struct
    {
        struct AMockPathHelper* MPH;
        uint8_t bFocus;
    } Parms{};
    Parms.MPH = (struct AMockPathHelper*)MPH;
    Parms.bFocus = (uint8_t)bFocus;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetMockPathFocus(struct AMockPathHelper* MPH, float Yaw, float Pitch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetMockPathFocus");
    struct
    {
        struct AMockPathHelper* MPH;
        float Yaw;
        float Pitch;
    } Parms{};
    Parms.MPH = (struct AMockPathHelper*)MPH;
    Parms.Yaw = (float)Yaw;
    Parms.Pitch = (float)Pitch;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetMockPathDegree(struct AMockPathHelper* MPH, float Degree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetMockPathDegree");
    struct
    {
        struct AMockPathHelper* MPH;
        float Degree;
    } Parms{};
    Parms.MPH = (struct AMockPathHelper*)MPH;
    Parms.Degree = (float)Degree;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetFPPLowerMeshYOffset(float YOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetFPPLowerMeshYOffset");
    struct
    {
        float YOffset;
    } Parms{};
    Parms.YOffset = (float)YOffset;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetFPPLowerMeshHidden(uint8_t bHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetFPPLowerMeshHidden");
    struct
    {
        uint8_t bHidden;
    } Parms{};
    Parms.bHidden = (uint8_t)bHidden;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetEndGameTimeout(float Timeout)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetEndGameTimeout");
    struct
    {
        float Timeout;
    } Parms{};
    Parms.Timeout = (float)Timeout;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetDramaNpcName(struct ADramaArea* drama, struct FName npcName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetDramaNpcName");
    struct
    {
        struct ADramaArea* drama;
        struct FName npcName;
    } Parms{};
    Parms.drama = (struct ADramaArea*)drama;
    Parms.npcName = (struct FName)npcName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetDramaBehaviorTree(struct ADramaArea* drama, struct FSoftObjectPath BehaviorTreeSoft)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetDramaBehaviorTree");
    struct
    {
        struct ADramaArea* drama;
        struct FSoftObjectPath BehaviorTreeSoft;
    } Parms{};
    Parms.drama = (struct ADramaArea*)drama;
    Parms.BehaviorTreeSoft = (struct FSoftObjectPath)BehaviorTreeSoft;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetDebugFullThreatInfo(uint8_t bFullThreat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetDebugFullThreatInfo");
    struct
    {
        uint8_t bFullThreat;
    } Parms{};
    Parms.bFullThreat = (uint8_t)bFullThreat;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetCharacterWaitingStartSOLState(int32_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetCharacterWaitingStartSOLState");
    struct
    {
        int32_t Enable;
    } Parms{};
    Parms.Enable = (int32_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetArmedForce(int32_t ArmID, int32_t HeroId, int32_t BagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetArmedForce");
    struct
    {
        int32_t ArmID;
        int32_t HeroId;
        int32_t BagId;
    } Parms{};
    Parms.ArmID = (int32_t)ArmID;
    Parms.HeroId = (int32_t)HeroId;
    Parms.BagId = (int32_t)BagId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetAINonPerceptualEx(uint8_t bNonPerceptual)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetAINonPerceptualEx");
    struct
    {
        uint8_t bNonPerceptual;
    } Parms{};
    Parms.bNonPerceptual = (uint8_t)bNonPerceptual;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetAINonPerceptual(uint8_t bNonPerceptual)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetAINonPerceptual");
    struct
    {
        uint8_t bNonPerceptual;
    } Parms{};
    Parms.bNonPerceptual = (uint8_t)bNonPerceptual;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetActorWithTagToLocation(struct FName Tag, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetActorWithTagToLocation");
    struct
    {
        struct FName Tag;
        struct FVector Location;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SetAbilityByType(ESkillLogicType ESkillLogicType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SetAbilityByType");
    struct
    {
        enum ESkillLogicType ESkillLogicType;
    } Parms{};
    Parms.ESkillLogicType = (enum ESkillLogicType)ESkillLogicType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerWeaponUpdatePartDynamicEffective(struct AWeaponBase* Weapon, uint64_t PartFunctionId, uint8_t bDynamicEffective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerWeaponUpdatePartDynamicEffective");
    struct
    {
        struct AWeaponBase* Weapon;
        uint64_t PartFunctionId;
        uint8_t bDynamicEffective;
    } Parms{};
    Parms.Weapon = (struct AWeaponBase*)Weapon;
    Parms.PartFunctionId = (uint64_t)PartFunctionId;
    Parms.bDynamicEffective = (uint8_t)bDynamicEffective;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerVCCheck(float InRangeHalfX, float InRangeHalfY, float InCellSize, float InDeltaAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerVCCheck");
    struct
    {
        float InRangeHalfX;
        float InRangeHalfY;
        float InCellSize;
        float InDeltaAngle;
    } Parms{};
    Parms.InRangeHalfX = (float)InRangeHalfX;
    Parms.InRangeHalfY = (float)InRangeHalfY;
    Parms.InCellSize = (float)InCellSize;
    Parms.InDeltaAngle = (float)InDeltaAngle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUseStartSpotTemplate(struct FName RowId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUseStartSpotTemplate");
    struct
    {
        struct FName RowId;
    } Parms{};
    Parms.RowId = (struct FName)RowId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUseOptOnDoorFrontCheck(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUseOptOnDoorFrontCheck");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUseGlassOpt(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUseGlassOpt");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUseForceStartSpot(struct FString StartSpotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUseForceStartSpot");
    struct
    {
        struct FString StartSpotName;
    } Parms{};
    Parms.StartSpotName = (struct FString)StartSpotName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUseCustomMovementSpeed(uint8_t bUseCustomSpeed, float CustomSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUseCustomMovementSpeed");
    struct
    {
        uint8_t bUseCustomSpeed;
        float CustomSpeed;
    } Parms{};
    Parms.bUseCustomSpeed = (uint8_t)bUseCustomSpeed;
    Parms.CustomSpeed = (float)CustomSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUseConstMovementSpeed(uint8_t bUseConstSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUseConstMovementSpeed");
    struct
    {
        uint8_t bUseConstSpeed;
    } Parms{};
    Parms.bUseConstSpeed = (uint8_t)bUseConstSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerUnEquipPerk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerUnEquipPerk");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerTriggerBossDied()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerTriggerBossDied");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerToggleLocationDebug(int32_t DebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerToggleLocationDebug");
    struct
    {
        int32_t DebugMode;
    } Parms{};
    Parms.DebugMode = (int32_t)DebugMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerThreeInspect(int64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerThreeInspect");
    struct
    {
        int64_t ItemID;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerThreeAnimJumpToEndByItemGid(uint64_t InItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerThreeAnimJumpToEndByItemGid");
    struct
    {
        uint64_t InItemGid;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerTestRadialDamage(int64_t AttackId, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerTestRadialDamage");
    struct
    {
        int64_t AttackId;
        struct FVector Location;
    } Parms{};
    Parms.AttackId = (int64_t)AttackId;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerTestNightVisionEquipment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerTestNightVisionEquipment");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerTestAreaFreeze(int32_t AreaID, uint8_t bEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerTestAreaFreeze");
    struct
    {
        int32_t AreaID;
        uint8_t bEnter;
    } Parms{};
    Parms.AreaID = (int32_t)AreaID;
    Parms.bEnter = (uint8_t)bEnter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerTeleportToLegalTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerTeleportToLegalTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSwitchToEmptyHand(float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSwitchToEmptyHand");
    struct
    {
        float DelayTime;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSwitchCharacterAvatarID(uint64_t PlayerId, struct FName HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSwitchCharacterAvatarID");
    struct
    {
        uint64_t PlayerId;
        struct FName HeroId;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.HeroId = (struct FName)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerStopLooting(uint8_t bSwitchFromLoot2BagView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerStopLooting");
    struct
    {
        uint8_t bSwitchFromLoot2BagView;
    } Parms{};
    Parms.bSwitchFromLoot2BagView = (uint8_t)bSwitchFromLoot2BagView;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSprintSwimStaminaDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSprintSwimStaminaDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnTestAI(int32_t Index, int32_t Num, struct FVector postion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnTestAI");
    struct
    {
        int32_t Index;
        int32_t Num;
        struct FVector postion;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Num = (int32_t)Num;
    Parms.postion = (struct FVector)postion;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnPvpAiAround(struct FString StrParams, int32_t Num, int32_t ArmedForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnPvpAiAround");
    struct
    {
        struct FString StrParams;
        int32_t Num;
        int32_t ArmedForce;
    } Parms{};
    Parms.StrParams = (struct FString)StrParams;
    Parms.Num = (int32_t)Num;
    Parms.ArmedForce = (int32_t)ArmedForce;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnPortableAmmoBox(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnPortableAmmoBox");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnPickupWhenReleaseDoor(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnPickupWhenReleaseDoor");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnNormalFootball()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnNormalFootball");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnMovingFish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnMovingFish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnJetForTest(int32_t Num, float Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnJetForTest");
    struct
    {
        int32_t Num;
        float Height;
    } Parms{};
    Parms.Num = (int32_t)Num;
    Parms.Height = (float)Height;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnJailBreakDeadBody(int32_t TeamStartGroupId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnJailBreakDeadBody");
    struct
    {
        int32_t TeamStartGroupId;
    } Parms{};
    Parms.TeamStartGroupId = (int32_t)TeamStartGroupId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnItemWithSourcePlayer(uint64_t ItemID, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnItemWithSourcePlayer");
    struct
    {
        uint64_t ItemID;
        uint64_t PlayerId;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnItemPickup(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnItemPickup");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnItemOwnedToPlayer(uint64_t ItemID, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnItemOwnedToPlayer");
    struct
    {
        uint64_t ItemID;
        uint64_t PlayerId;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnFootballStaticGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnFootballStaticGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnFootballAIGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnFootballAIGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnFireArrow(uint64_t BulletId, struct FVector StartLoc, struct FRotator StartRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnFireArrow");
    struct
    {
        uint64_t BulletId;
        struct FVector StartLoc;
        struct FRotator StartRot;
    } Parms{};
    Parms.BulletId = (uint64_t)BulletId;
    Parms.StartLoc = (struct FVector)StartLoc;
    Parms.StartRot = (struct FRotator)StartRot;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnArchiveItemNew(int32_t Level, uint8_t KilledByBoss, struct FString Killer, struct FString BeKiller, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnArchiveItemNew");
    struct
    {
        int32_t Level;
        uint8_t KilledByBoss;
        struct FString Killer;
        struct FString BeKiller;
        uint64_t KillerWeaponID;
        uint64_t MapID;
        int64_t KillTimestamp;
        int64_t EquipmentValue;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.KilledByBoss = (uint8_t)KilledByBoss;
    Parms.Killer = (struct FString)Killer;
    Parms.BeKiller = (struct FString)BeKiller;
    Parms.KillerWeaponID = (uint64_t)KillerWeaponID;
    Parms.MapID = (uint64_t)MapID;
    Parms.KillTimestamp = (int64_t)KillTimestamp;
    Parms.EquipmentValue = (int64_t)EquipmentValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnArchiveItem(struct FString Killer, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnArchiveItem");
    struct
    {
        struct FString Killer;
        uint64_t KillerWeaponID;
        uint64_t MapID;
        int64_t KillTimestamp;
        int64_t EquipmentValue;
    } Parms{};
    Parms.Killer = (struct FString)Killer;
    Parms.KillerWeaponID = (uint64_t)KillerWeaponID;
    Parms.MapID = (uint64_t)MapID;
    Parms.KillTimestamp = (int64_t)KillTimestamp;
    Parms.EquipmentValue = (int64_t)EquipmentValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnAndBreakItem(struct FString ItemPath, struct FVector Location, float Lifetime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnAndBreakItem");
    struct
    {
        struct FString ItemPath;
        struct FVector Location;
        float Lifetime;
    } Parms{};
    Parms.ItemPath = (struct FString)ItemPath;
    Parms.Location = (struct FVector)Location;
    Parms.Lifetime = (float)Lifetime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSpawnAIForView(struct FName npcName, int32_t NpcDiffculty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSpawnAIForView");
    struct
    {
        struct FName npcName;
        int32_t NpcDiffculty;
    } Parms{};
    Parms.npcName = (struct FName)npcName;
    Parms.NpcDiffculty = (int32_t)NpcDiffculty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSOLRandomContract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSOLRandomContract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSOLRandomContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSOLRandomContainer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSkillIgnoreCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSkillIgnoreCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerShowWaterSparseOctree(int32_t LOD, float Range)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerShowWaterSparseOctree");
    struct
    {
        int32_t LOD;
        float Range;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    Parms.Range = (float)Range;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerShowSparseOctree(int32_t LOD, float Range)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerShowSparseOctree");
    struct
    {
        int32_t LOD;
        float Range;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    Parms.Range = (float)Range;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerShowRandomRoomDebugInfo(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerShowRandomRoomDebugInfo");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetVehicleHPLock(uint8_t bLock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetVehicleHPLock");
    struct
    {
        uint8_t bLock;
    } Parms{};
    Parms.bLock = (uint8_t)bLock;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetTestScanDelayDuration(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetTestScanDelayDuration");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetTestInRelink(uint8_t InRelink)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetTestInRelink");
    struct
    {
        uint8_t InRelink;
    } Parms{};
    Parms.InRelink = (uint8_t)InRelink;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetTestDelayReplicate(uint8_t bTest, float DelayDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetTestDelayReplicate");
    struct
    {
        uint8_t bTest;
        float DelayDuration;
    } Parms{};
    Parms.bTest = (uint8_t)bTest;
    Parms.DelayDuration = (float)DelayDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetScanableEffectDuration(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetScanableEffectDuration");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetRelinkPerformDataByConfigId(int32_t ConfigId, uint8_t bSpecial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetRelinkPerformDataByConfigId");
    struct
    {
        int32_t ConfigId;
        uint8_t bSpecial;
    } Parms{};
    Parms.ConfigId = (int32_t)ConfigId;
    Parms.bSpecial = (uint8_t)bSpecial;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetPlayerContributorID(int32_t ContributorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetPlayerContributorID");
    struct
    {
        int32_t ContributorID;
    } Parms{};
    Parms.ContributorID = (int32_t)ContributorID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetPerkCondForceSucceed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetPerkCondForceSucceed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetMaxReceiveValue(uint8_t bDaily, int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetMaxReceiveValue");
    struct
    {
        uint8_t bDaily;
        int64_t Value;
    } Parms{};
    Parms.bDaily = (uint8_t)bDaily;
    Parms.Value = (int64_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetMapId(int32_t MapID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetMapId");
    struct
    {
        int32_t MapID;
    } Parms{};
    Parms.MapID = (int32_t)MapID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetItemCarryOutRemainNum(uint64_t ItemID, uint64_t RemainNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetItemCarryOutRemainNum");
    struct
    {
        uint64_t ItemID;
        uint64_t RemainNum;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.RemainNum = (uint64_t)RemainNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetInterlayerEffectDuration(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetInterlayerEffectDuration");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetFallout(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetFallout");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetEndGameTimeout(float Timeout)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetEndGameTimeout");
    struct
    {
        float Timeout;
    } Parms{};
    Parms.Timeout = (float)Timeout;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetCharacterWaitingStartSOLState(int32_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetCharacterWaitingStartSOLState");
    struct
    {
        int32_t Enable;
    } Parms{};
    Parms.Enable = (int32_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetBattleClass(uint32_t BattleClassId, struct TArray<uint32_t> AbilityIdArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetBattleClass");
    struct
    {
        uint32_t BattleClassId;
        struct TArray<uint32_t> AbilityIdArr;
    } Parms{};
    Parms.BattleClassId = (uint32_t)BattleClassId;
    Parms.AbilityIdArr = (struct TArray<uint32_t>)AbilityIdArr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetAmmoConsumeType(struct AWeaponBase* Weapon, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetAmmoConsumeType");
    struct
    {
        struct AWeaponBase* Weapon;
        int32_t Type;
    } Parms{};
    Parms.Weapon = (struct AWeaponBase*)Weapon;
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetAllPickupScanable(uint8_t Scanable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetAllPickupScanable");
    struct
    {
        uint8_t Scanable;
    } Parms{};
    Parms.Scanable = (uint8_t)Scanable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSetAllOpenBoxScanable(int32_t InDoRandom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSetAllOpenBoxScanable");
    struct
    {
        int32_t InDoRandom;
    } Parms{};
    Parms.InDoRandom = (int32_t)InDoRandom;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerSendHongBao(uint64_t ReceiverPlayerId, uint64_t ItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerSendHongBao");
    struct
    {
        uint64_t ReceiverPlayerId;
        uint64_t ItemGid;
    } Parms{};
    Parms.ReceiverPlayerId = (uint64_t)ReceiverPlayerId;
    Parms.ItemGid = (uint64_t)ItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerScientistCommand(int32_t Command)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerScientistCommand");
    struct
    {
        int32_t Command;
    } Parms{};
    Parms.Command = (int32_t)Command;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerRunLuaCodeOnDS(uint64_t Index, struct FString LuaCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerRunLuaCodeOnDS");
    struct
    {
        uint64_t Index;
        struct FString LuaCode;
    } Parms{};
    Parms.Index = (uint64_t)Index;
    Parms.LuaCode = (struct FString)LuaCode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerRequestSubtitleSequence(struct FName SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerRequestSubtitleSequence");
    struct
    {
        struct FName SubtitleSeqId;
        enum ESubtitleSequenceType SubtitleSeqType;
    } Parms{};
    Parms.SubtitleSeqId = (struct FName)SubtitleSeqId;
    Parms.SubtitleSeqType = (enum ESubtitleSequenceType)SubtitleSeqType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerReportMapEconomy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerReportMapEconomy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerRemoveBagAmmo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerRemoveBagAmmo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerRedBagAnimJumpToEndByItemGid(uint64_t InItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerRedBagAnimJumpToEndByItemGid");
    struct
    {
        uint64_t InItemGid;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerRangeScan(struct FVector CamLoc, struct FVector CamDir, float Dis, float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerRangeScan");
    struct
    {
        struct FVector CamLoc;
        struct FVector CamDir;
        float Dis;
        float Angle;
    } Parms{};
    Parms.CamLoc = (struct FVector)CamLoc;
    Parms.CamDir = (struct FVector)CamDir;
    Parms.Dis = (float)Dis;
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerQuestJumpObjective(int32_t objectiveId, int32_t InstIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerQuestJumpObjective");
    struct
    {
        int32_t objectiveId;
        int32_t InstIndex;
    } Parms{};
    Parms.objectiveId = (int32_t)objectiveId;
    Parms.InstIndex = (int32_t)InstIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerQueryPath(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerQueryPath");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerPrintWeaponInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerPrintWeaponInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerPlayerBan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerPlayerBan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerOxygenDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerOxygenDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerOpenAssaKillShowEffectInEnd(uint8_t InEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerOpenAssaKillShowEffectInEnd");
    struct
    {
        uint8_t InEnd;
    } Parms{};
    Parms.InEnd = (uint8_t)InEnd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerNotifyAI(uint64_t PlayerId, struct FString NotifyMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerNotifyAI");
    struct
    {
        uint64_t PlayerId;
        struct FString NotifyMessage;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.NotifyMessage = (struct FString)NotifyMessage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerNewAddBuff(uint64_t BuffId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerNewAddBuff");
    struct
    {
        uint64_t BuffId;
    } Parms{};
    Parms.BuffId = (uint64_t)BuffId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerMoveToLocation(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerMoveToLocation");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerMoveToActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerMoveToActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerModifyAmmo(struct AWeaponBase* Weapon, int32_t Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerModifyAmmo");
    struct
    {
        struct AWeaponBase* Weapon;
        int32_t Val;
    } Parms{};
    Parms.Weapon = (struct AWeaponBase*)Weapon;
    Parms.Val = (int32_t)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerMapSelectPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerMapSelectPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerLoadQuest(int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerLoadQuest");
    struct
    {
        int32_t QuestID;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerLandingTest(struct FVector2D LeftUp, struct FVector2D RightUp, struct FVector2D LeftDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerLandingTest");
    struct
    {
        struct FVector2D LeftUp;
        struct FVector2D RightUp;
        struct FVector2D LeftDown;
    } Parms{};
    Parms.LeftUp = (struct FVector2D)LeftUp;
    Parms.RightUp = (struct FVector2D)RightUp;
    Parms.LeftDown = (struct FVector2D)LeftDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerKillAllJetForTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerKillAllJetForTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerKickTeammate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerKickTeammate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerHoldJet(uint8_t bHold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerHoldJet");
    struct
    {
        uint8_t bHold;
    } Parms{};
    Parms.bHold = (uint8_t)bHold;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerHasEnoughSpaceToAddAmmo(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerHasEnoughSpaceToAddAmmo");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGoTrackingPickUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGoTrackingPickUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGotoWithNavAdjust(struct FVector Location, struct FRotator Dir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGotoWithNavAdjust");
    struct
    {
        struct FVector Location;
        struct FRotator Dir;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Dir = (struct FRotator)Dir;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGoto2D(struct FVector2D Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGoto2D");
    struct
    {
        struct FVector2D Location;
    } Parms{};
    Parms.Location = (struct FVector2D)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGoto(struct FVector Location, struct FRotator Dir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGoto");
    struct
    {
        struct FVector Location;
        struct FRotator Dir;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Dir = (struct FRotator)Dir;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMWeaponTestRemoveAllSpawnCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMWeaponTestRemoveAllSpawnCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMWeaponTestCharacterStopAutoFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMWeaponTestCharacterStopAutoFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMWeaponTestCharacterAutoFire(float FireInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMWeaponTestCharacterAutoFire");
    struct
    {
        float FireInterval;
    } Parms{};
    Parms.FireInterval = (float)FireInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMUnEquipLeftWeapon(uint64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMUnEquipLeftWeapon");
    struct
    {
        uint64_t WeaponID;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMTriggerPreMiniGameSucceed(struct FName MiniGameTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMTriggerPreMiniGameSucceed");
    struct
    {
        struct FName MiniGameTag;
    } Parms{};
    Parms.MiniGameTag = (struct FName)MiniGameTag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMToggleExit(int32_t ID, uint8_t Enable, float CountDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMToggleExit");
    struct
    {
        int32_t ID;
        uint8_t Enable;
        float CountDown;
    } Parms{};
    Parms.ID = (int32_t)ID;
    Parms.Enable = (uint8_t)Enable;
    Parms.CountDown = (float)CountDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMTimeScale(float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMTimeScale");
    struct
    {
        float Scale;
    } Parms{};
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMTestSpawnCharacterInLocation(struct FTestCharacterParam TestCharacterParam, struct FTestWeaponParam Weapon01, struct FTestWeaponParam Weapon02)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMTestSpawnCharacterInLocation");
    struct
    {
        struct FTestCharacterParam TestCharacterParam;
        struct FTestWeaponParam Weapon01;
        struct FTestWeaponParam Weapon02;
    } Parms{};
    Parms.TestCharacterParam = (struct FTestCharacterParam)TestCharacterParam;
    Parms.Weapon01 = (struct FTestWeaponParam)Weapon01;
    Parms.Weapon02 = (struct FTestWeaponParam)Weapon02;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMTestPassiveMove(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMTestPassiveMove");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSpawnLimit(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSpawnLimit");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSpawnAllSniperDrama()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSpawnAllSniperDrama");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSkinPlayer(struct AGPPlayerState* PS, uint64_t WeaponID, uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSkinPlayer");
    struct
    {
        struct AGPPlayerState* PS;
        uint64_t WeaponID;
        uint64_t SkinId;
    } Parms{};
    Parms.PS = (struct AGPPlayerState*)PS;
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSkinPendant(struct ADFMCharacter* GPChar, uint64_t PendantItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSkinPendant");
    struct
    {
        struct ADFMCharacter* GPChar;
        uint64_t PendantItemId;
    } Parms{};
    Parms.GPChar = (struct ADFMCharacter*)GPChar;
    Parms.PendantItemId = (uint64_t)PendantItemId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSkinGun(struct ADFMCharacter* GPChar, uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSkinGun");
    struct
    {
        struct ADFMCharacter* GPChar;
        uint64_t SkinId;
    } Parms{};
    Parms.GPChar = (struct ADFMCharacter*)GPChar;
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSkinAppGun(struct ADFMCharacter* GPChar, uint64_t SkinId, uint64_t MysticalId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSkinAppGun");
    struct
    {
        struct ADFMCharacter* GPChar;
        uint64_t SkinId;
        uint64_t MysticalId;
    } Parms{};
    Parms.GPChar = (struct ADFMCharacter*)GPChar;
    Parms.SkinId = (uint64_t)SkinId;
    Parms.MysticalId = (uint64_t)MysticalId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSimulateDSFrameTime(float AvgMax, float AvgMin, float StunRate, float StunMax, float StunMin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSimulateDSFrameTime");
    struct
    {
        float AvgMax;
        float AvgMin;
        float StunRate;
        float StunMax;
        float StunMin;
    } Parms{};
    Parms.AvgMax = (float)AvgMax;
    Parms.AvgMin = (float)AvgMin;
    Parms.StunRate = (float)StunRate;
    Parms.StunMax = (float)StunMax;
    Parms.StunMin = (float)StunMin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMShowNavExtInfo(float RefreshTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMShowNavExtInfo");
    struct
    {
        float RefreshTime;
    } Parms{};
    Parms.RefreshTime = (float)RefreshTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSetDropLogicCounter(uint32_t Key, uint32_t InCounter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSetDropLogicCounter");
    struct
    {
        uint32_t Key;
        uint32_t InCounter;
    } Parms{};
    Parms.Key = (uint32_t)Key;
    Parms.InCounter = (uint32_t)InCounter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSetDebugTransform(uint64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSetDebugTransform");
    struct
    {
        uint64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSetDangerLevel(int32_t InDangerLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSetDangerLevel");
    struct
    {
        int32_t InDangerLevel;
    } Parms{};
    Parms.InDangerLevel = (int32_t)InDangerLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMSetCurrent(uint32_t InCurrent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMSetCurrent");
    struct
    {
        uint32_t InCurrent;
    } Parms{};
    Parms.InCurrent = (uint32_t)InCurrent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMResetTriggerExitByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMResetTriggerExitByIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMResetAllAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMResetAllAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMRemovePerkSPEffect(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMRemovePerkSPEffect");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMRemovePerk(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMRemovePerk");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMRemoveDropLogicBuff(uint32_t InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMRemoveDropLogicBuff");
    struct
    {
        uint32_t InKey;
    } Parms{};
    Parms.InKey = (uint32_t)InKey;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMLineTraceWater(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMLineTraceWater");
    struct
    {
        struct FVector Start;
        struct FVector End;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMJPSTrace(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMJPSTrace");
    struct
    {
        struct FVector Start;
        struct FVector End;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMGodDamage(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMGodDamage");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMGiveWepaonByDesc(struct FGPWeaponDescInfo WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMGiveWepaonByDesc");
    struct
    {
        struct FGPWeaponDescInfo WeaponDesc;
    } Parms{};
    Parms.WeaponDesc = (struct FGPWeaponDescInfo)WeaponDesc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMGiveWeapon(uint64_t PresetId, struct TArray<uint64_t> Items)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMGiveWeapon");
    struct
    {
        uint64_t PresetId;
        struct TArray<uint64_t> Items;
    } Parms{};
    Parms.PresetId = (uint64_t)PresetId;
    Parms.Items = (struct TArray<uint64_t>)Items;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMGiveCurrency(float InValue, int64_t FakeQuestId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMGiveCurrency");
    struct
    {
        float InValue;
        int64_t FakeQuestId;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.FakeQuestId = (int64_t)FakeQuestId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMForceTeamDamage(uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMForceTeamDamage");
    struct
    {
        uint8_t bForce;
    } Parms{};
    Parms.bForce = (uint8_t)bForce;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMEquipLeftWeapon(uint64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMEquipLeftWeapon");
    struct
    {
        uint64_t WeaponID;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMEndAssaShark()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMEndAssaShark");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMEnableFriendDamage(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMEnableFriendDamage");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMConsumeCurrency(float ConsumeValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMConsumeCurrency");
    struct
    {
        float ConsumeValue;
    } Parms{};
    Parms.ConsumeValue = (float)ConsumeValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMClearAllAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMClearAllAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMCD(int32_t operate, int32_t Slot, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMCD");
    struct
    {
        int32_t operate;
        int32_t Slot;
        float Time;
    } Parms{};
    Parms.operate = (int32_t)operate;
    Parms.Slot = (int32_t)Slot;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMBraveGameEvent(struct FString EventName, int32_t Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMBraveGameEvent");
    struct
    {
        struct FString EventName;
        int32_t Param;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Param = (int32_t)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMBraveGameConveyFixRandomPC(int32_t Index1, int32_t Index2, int32_t Index3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMBraveGameConveyFixRandomPC");
    struct
    {
        int32_t Index1;
        int32_t Index2;
        int32_t Index3;
    } Parms{};
    Parms.Index1 = (int32_t)Index1;
    Parms.Index2 = (int32_t)Index2;
    Parms.Index3 = (int32_t)Index3;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAttemptUpdateWeaponItem(uint64_t GunGID, struct FGPWeaponDescInfo NewDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAttemptUpdateWeaponItem");
    struct
    {
        uint64_t GunGID;
        struct FGPWeaponDescInfo NewDesc;
    } Parms{};
    Parms.GunGID = (uint64_t)GunGID;
    Parms.NewDesc = (struct FGPWeaponDescInfo)NewDesc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAssaID(uint64_t AssaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAssaID");
    struct
    {
        uint64_t AssaID;
    } Parms{};
    Parms.AssaID = (uint64_t)AssaID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMArenaTriggerEvent(struct FString Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMArenaTriggerEvent");
    struct
    {
        struct FString Event;
    } Parms{};
    Parms.Event = (struct FString)Event;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAddTestDeadBox(float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAddTestDeadBox");
    struct
    {
        float X;
        float Y;
        float Z;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAddPerkSPEffect(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAddPerkSPEffect");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAddPerk(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAddPerk");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAddHolidayID(uint32_t Key, uint8_t bAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAddHolidayID");
    struct
    {
        uint32_t Key;
        uint8_t bAdd;
    } Parms{};
    Parms.Key = (uint32_t)Key;
    Parms.bAdd = (uint8_t)bAdd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAddDropLogicBuff(uint32_t Key, uint32_t InDropLogicID, uint32_t InCounter, int32_t TodayActiveTimes, int32_t CareerTriggerCnt, int32_t TodayActiveUpBound, int32_t CareerTriggerUpBound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAddDropLogicBuff");
    struct
    {
        uint32_t Key;
        uint32_t InDropLogicID;
        uint32_t InCounter;
        int32_t TodayActiveTimes;
        int32_t CareerTriggerCnt;
        int32_t TodayActiveUpBound;
        int32_t CareerTriggerUpBound;
    } Parms{};
    Parms.Key = (uint32_t)Key;
    Parms.InDropLogicID = (uint32_t)InDropLogicID;
    Parms.InCounter = (uint32_t)InCounter;
    Parms.TodayActiveTimes = (int32_t)TodayActiveTimes;
    Parms.CareerTriggerCnt = (int32_t)CareerTriggerCnt;
    Parms.TodayActiveUpBound = (int32_t)TodayActiveUpBound;
    Parms.CareerTriggerUpBound = (int32_t)CareerTriggerUpBound;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGMAddArenaScore(int32_t InAddScore, uint8_t InAddIncreaseScoreCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGMAddArenaScore");
    struct
    {
        int32_t InAddScore;
        uint8_t InAddIncreaseScoreCount;
    } Parms{};
    Parms.InAddScore = (int32_t)InAddScore;
    Parms.InAddIncreaseScoreCount = (uint8_t)InAddIncreaseScoreCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveWeaponFromStr(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveWeaponFromStr");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveResetSlot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveResetSlot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveItemImpl(int64_t ItemID, int32_t Num, int32_t AttachPos, int32_t BindType, float Durability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveItemImpl");
    struct
    {
        int64_t ItemID;
        int32_t Num;
        int32_t AttachPos;
        int32_t BindType;
        float Durability;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    Parms.Num = (int32_t)Num;
    Parms.AttachPos = (int32_t)AttachPos;
    Parms.BindType = (int32_t)BindType;
    Parms.Durability = (float)Durability;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveItem(uint64_t ItemID, int32_t Num, EAttachPosition AttachPos, int32_t BindType, float Durability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveItem");
    struct
    {
        uint64_t ItemID;
        int32_t Num;
        enum EAttachPosition AttachPos;
        int32_t BindType;
        float Durability;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.Num = (int32_t)Num;
    Parms.AttachPos = (enum EAttachPosition)AttachPos;
    Parms.BindType = (int32_t)BindType;
    Parms.Durability = (float)Durability;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveInfinityCarriedAmmo(struct AWeaponBase* Weapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveInfinityCarriedAmmo");
    struct
    {
        struct AWeaponBase* Weapon;
    } Parms{};
    Parms.Weapon = (struct AWeaponBase*)Weapon;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveAbilityByType(ESkillLogicType ESkillLogicType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveAbilityByType");
    struct
    {
        enum ESkillLogicType ESkillLogicType;
    } Parms{};
    Parms.ESkillLogicType = (enum ESkillLogicType)ESkillLogicType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGiveAbilityByExpertID(int64_t ExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGiveAbilityByExpertID");
    struct
    {
        int64_t ExpertId;
    } Parms{};
    Parms.ExpertId = (int64_t)ExpertId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGetTrackingItemPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGetTrackingItemPosition");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGetRedBagOnlyFromTeammate(uint8_t bOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGetRedBagOnlyFromTeammate");
    struct
    {
        uint8_t bOnly;
    } Parms{};
    Parms.bOnly = (uint8_t)bOnly;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerGetCurrentFirstWeaponItemID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerGetCurrentFirstWeaponItemID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerForceFinishMission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerForceFinishMission");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerForceEnableImpendingDeath(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerForceEnableImpendingDeath");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerForceCheckGuideItem(uint8_t bForceCheckGuideItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerForceCheckGuideItem");
    struct
    {
        uint8_t bForceCheckGuideItem;
    } Parms{};
    Parms.bForceCheckGuideItem = (uint8_t)bForceCheckGuideItem;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerFootballSignAnimJumpToEndByItemGid(uint64_t InItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerFootballSignAnimJumpToEndByItemGid");
    struct
    {
        uint64_t InItemGid;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerFootballSign(int64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerFootballSign");
    struct
    {
        int64_t ItemID;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerFootballGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerFootballGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerFinishCurrentStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerFinishCurrentStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerExecuteConsoleCommand(struct FString Command)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerExecuteConsoleCommand");
    struct
    {
        struct FString Command;
    } Parms{};
    Parms.Command = (struct FString)Command;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerEquipPerk(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerEquipPerk");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerEnableWaterRouteVis(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerEnableWaterRouteVis");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerEnableTearOffAICharacterAfterDeath(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerEnableTearOffAICharacterAfterDeath");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerEnablePvpAIDebug(int32_t Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerEnablePvpAIDebug");
    struct
    {
        int32_t Param;
    } Parms{};
    Parms.Param = (int32_t)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerEnableAISpeakDebug(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerEnableAISpeakDebug");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseForwardAndCheckHitFirstly(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseForwardAndCheckHitFirstly");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseFakeTickInterval(uint8_t InbUse, float InInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseFakeTickInterval");
    struct
    {
        uint8_t InbUse;
        float InInterval;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    Parms.InInterval = (float)InInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseDSCheckNearly(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseDSCheckNearly");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseCheckUnlock(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseCheckUnlock");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseCheckHack(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseCheckHack");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseCheckCollSweep(int32_t Index, uint8_t InbUse, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseCheckCollSweep");
    struct
    {
        int32_t Index;
        uint8_t InbUse;
        float InRadius;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.InbUse = (uint8_t)InbUse;
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoUseCheckCapture(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoUseCheckCapture");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoSetNearlyThreshold(float Dis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoSetNearlyThreshold");
    struct
    {
        float Dis;
    } Parms{};
    Parms.Dis = (float)Dis;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoSetInteractSystemDSCheck(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoSetInteractSystemDSCheck");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoSetInteractorCheckCollisionChannel(uint8_t InbUsePawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoSetInteractorCheckCollisionChannel");
    struct
    {
        uint8_t InbUsePawn;
    } Parms{};
    Parms.InbUsePawn = (uint8_t)InbUsePawn;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoSetDSOpenCloseDoorSpeedScale(float RotOpen, float RotClose, float SlideOpen, float SlideClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoSetDSOpenCloseDoorSpeedScale");
    struct
    {
        float RotOpen;
        float RotClose;
        float SlideOpen;
        float SlideClose;
    } Parms{};
    Parms.RotOpen = (float)RotOpen;
    Parms.RotClose = (float)RotClose;
    Parms.SlideOpen = (float)SlideOpen;
    Parms.SlideClose = (float)SlideClose;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoOpenInteractSystemDetailLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoOpenInteractSystemDetailLog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDontDestroyFootballGateNoRep(uint8_t InDont)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDontDestroyFootballGateNoRep");
    struct
    {
        uint8_t InDont;
    } Parms{};
    Parms.InDont = (uint8_t)InDont;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDoDSUseClientPosToCheckBlock(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDoDSUseClientPosToCheckBlock");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDisablePvpAIDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDisablePvpAIDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerDisableMoveClientIsBoss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerDisableMoveClientIsBoss");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerCompelteContract(struct AActor* Source, int32_t ContractID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerCompelteContract");
    struct
    {
        struct AActor* Source;
        int32_t ContractID;
    } Parms{};
    Parms.Source = (struct AActor*)Source;
    Parms.ContractID = (int32_t)ContractID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerCommand(struct FString Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerCommand");
    struct
    {
        struct FString Cmd;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerCheckNotInterceptPickup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerCheckNotInterceptPickup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerCheckInterceptAndAdd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerCheckInterceptAndAdd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerChangeCampIdToRebornMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerChangeCampIdToRebornMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAzSpawnCapacitorKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAzSpawnCapacitorKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAzRandomCapacitor(uint64_t RandSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAzRandomCapacitor");
    struct
    {
        uint64_t RandSeed;
    } Parms{};
    Parms.RandSeed = (uint64_t)RandSeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAILabDebugMode(int32_t DebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAILabDebugMode");
    struct
    {
        int32_t DebugMode;
    } Parms{};
    Parms.DebugMode = (int32_t)DebugMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAIGiveWeapon(uint64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAIGiveWeapon");
    struct
    {
        uint64_t WeaponID;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAddVehicleSkinInfo(uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAddVehicleSkinInfo");
    struct
    {
        uint64_t SkinId;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAddVehiclePartInfo(uint64_t PartId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAddVehiclePartInfo");
    struct
    {
        uint64_t PartId;
    } Parms{};
    Parms.PartId = (uint64_t)PartId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAddSlotWeapon(uint64_t PresetId, int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAddSlotWeapon");
    struct
    {
        uint64_t PresetId;
        int32_t Slot;
    } Parms{};
    Parms.PresetId = (uint64_t)PresetId;
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAddMerit(float Merit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAddMerit");
    struct
    {
        float Merit;
    } Parms{};
    Parms.Merit = (float)Merit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAddAndUseAbilityItem(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAddAndUseAbilityItem");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAddAmmoToInventoryManager(uint64_t ItemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAddAmmoToInventoryManager");
    struct
    {
        uint64_t ItemID;
        int32_t Num;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerActivateVaultGasVolume(uint8_t bActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerActivateVaultGasVolume");
    struct
    {
        uint8_t bActivate;
    } Parms{};
    Parms.bActivate = (uint8_t)bActivate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ServerAcceptActivity(int64_t TaskID, int64_t GoalID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ServerAcceptActivity");
    struct
    {
        int64_t TaskID;
        int64_t GoalID;
    } Parms{};
    Parms.TaskID = (int64_t)TaskID;
    Parms.GoalID = (int64_t)GoalID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Server2ClientMoveInfo(float SOlScore, float MPScore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Server2ClientMoveInfo");
    struct
    {
        float SOlScore;
        float MPScore;
    } Parms{};
    Parms.SOlScore = (float)SOlScore;
    Parms.MPScore = (float)MPScore;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Server2ClientCharacterWaterInfo(float WaterHeight, float WaterDepth, float WaveOffset, float LastGatherDataTime, struct FVector LastGatherDataPos, uint8_t IsClientCameraLocUnderWater, uint8_t IsEyeUnderWater, uint8_t IsCapsuleCenterInWater, uint8_t IsCapsuleBottomInWater, float GatherCapsuleHeight, uint8_t IsCharacterStateCanSwim, uint8_t IsNeedFootRipple)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Server2ClientCharacterWaterInfo");
    struct
    {
        float WaterHeight;
        float WaterDepth;
        float WaveOffset;
        float LastGatherDataTime;
        struct FVector LastGatherDataPos;
        uint8_t IsClientCameraLocUnderWater;
        uint8_t IsEyeUnderWater;
        uint8_t IsCapsuleCenterInWater;
        uint8_t IsCapsuleBottomInWater;
        float GatherCapsuleHeight;
        uint8_t IsCharacterStateCanSwim;
        uint8_t IsNeedFootRipple;
    } Parms{};
    Parms.WaterHeight = (float)WaterHeight;
    Parms.WaterDepth = (float)WaterDepth;
    Parms.WaveOffset = (float)WaveOffset;
    Parms.LastGatherDataTime = (float)LastGatherDataTime;
    Parms.LastGatherDataPos = (struct FVector)LastGatherDataPos;
    Parms.IsClientCameraLocUnderWater = (uint8_t)IsClientCameraLocUnderWater;
    Parms.IsEyeUnderWater = (uint8_t)IsEyeUnderWater;
    Parms.IsCapsuleCenterInWater = (uint8_t)IsCapsuleCenterInWater;
    Parms.IsCapsuleBottomInWater = (uint8_t)IsCapsuleBottomInWater;
    Parms.GatherCapsuleHeight = (float)GatherCapsuleHeight;
    Parms.IsCharacterStateCanSwim = (uint8_t)IsCharacterStateCanSwim;
    Parms.IsNeedFootRipple = (uint8_t)IsNeedFootRipple;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Server2ClientCameraLocDiff(struct FVector ServerCameraLoc, float FOV, float Yaw, float Pitch, struct FVector CharacterLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Server2ClientCameraLocDiff");
    struct
    {
        struct FVector ServerCameraLoc;
        float FOV;
        float Yaw;
        float Pitch;
        struct FVector CharacterLoc;
    } Parms{};
    Parms.ServerCameraLoc = (struct FVector)ServerCameraLoc;
    Parms.FOV = (float)FOV;
    Parms.Yaw = (float)Yaw;
    Parms.Pitch = (float)Pitch;
    Parms.CharacterLoc = (struct FVector)CharacterLoc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SendPlayerDropBuffInfoStr(struct FString OutStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SendPlayerDropBuffInfoStr");
    struct
    {
        struct FString OutStr;
    } Parms{};
    Parms.OutStr = (struct FString)OutStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SendFailedPointLoop(struct TArray<struct FVCCheckFailed> SendFailedPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SendFailedPointLoop");
    struct
    {
        struct TArray<struct FVCCheckFailed> SendFailedPoints;
    } Parms{};
    Parms.SendFailedPoints = (struct TArray<struct FVCCheckFailed>)SendFailedPoints;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SendFailedPointFinish(struct TArray<struct FVCCheckFailed> SendFailedPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SendFailedPointFinish");
    struct
    {
        struct TArray<struct FVCCheckFailed> SendFailedPoints;
    } Parms{};
    Parms.SendFailedPoints = (struct TArray<struct FVCCheckFailed>)SendFailedPoints;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::SendDropLogicStr(struct FString InStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "SendDropLogicStr");
    struct
    {
        struct FString InStr;
    } Parms{};
    Parms.InStr = (struct FString)InStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ScientistCommand(int32_t Command)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ScientistCommand");
    struct
    {
        int32_t Command;
    } Parms{};
    Parms.Command = (int32_t)Command;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ResetCurrentWheeledVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ResetCurrentWheeledVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RequestUpdateBTDebugString(struct ADFMAICharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RequestUpdateBTDebugString");
    struct
    {
        struct ADFMAICharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ADFMAICharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RequestHitRateDebugInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RequestHitRateDebugInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RequestDrawCover(struct TArray<struct FVector> Locations, float Range, struct ADFMAICharacter* AI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RequestDrawCover");
    struct
    {
        struct TArray<struct FVector> Locations;
        float Range;
        struct ADFMAICharacter* AI;
    } Parms{};
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    Parms.Range = (float)Range;
    Parms.AI = (struct ADFMAICharacter*)AI;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ReportMapEconomy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ReportMapEconomy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemoveScreenEffect(struct FString EffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemoveScreenEffect");
    struct
    {
        struct FString EffectName;
    } Parms{};
    Parms.EffectName = (struct FString)EffectName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemovePerkSPEffect(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemovePerkSPEffect");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemovePerk(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemovePerk");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemoveHudOrState(struct FName Name, uint8_t bReleasePanel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemoveHudOrState");
    struct
    {
        struct FName Name;
        uint8_t bReleasePanel;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.bReleasePanel = (uint8_t)bReleasePanel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemoveBuff(uint64_t BuffId, uint8_t CharaterPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemoveBuff");
    struct
    {
        uint64_t BuffId;
        uint8_t CharaterPart;
    } Parms{};
    Parms.BuffId = (uint64_t)BuffId;
    Parms.CharaterPart = (uint8_t)CharaterPart;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemoveAllScreenEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemoveAllScreenEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RemoveAllBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RemoveAllBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::RaidS3ArmoredCarAddHP(float AddedHealth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "RaidS3ArmoredCarAddHP");
    struct
    {
        float AddedHealth;
    } Parms{};
    Parms.AddedHealth = (float)AddedHealth;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ProcessExecFunc(struct FString Command)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ProcessExecFunc");
    struct
    {
        struct FString Command;
    } Parms{};
    Parms.Command = (struct FString)Command;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::PrintCurrentInteractWorldLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "PrintCurrentInteractWorldLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::PrintAllCompAndInitAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "PrintAllCompAndInitAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::PlayWwiseDynamicDialogue(struct FName& Prefix, struct TMap<struct FName, struct FName>& Switchs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "PlayWwiseDynamicDialogue");
    struct
    {
        struct FName Prefix;
        struct TMap<struct FName, struct FName> Switchs;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Prefix = Parms.Prefix;
    Switchs = Parms.Switchs;
}

void UDFMPlayerGMComponent::PlayerVehicleMaxHP(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "PlayerVehicleMaxHP");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::PlayCutscene(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "PlayCutscene");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::PlayAllParticles(int32_t InBatchNum, float InTimeoutSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "PlayAllParticles");
    struct
    {
        int32_t InBatchNum;
        float InTimeoutSeconds;
    } Parms{};
    Parms.InBatchNum = (int32_t)InBatchNum;
    Parms.InTimeoutSeconds = (float)InTimeoutSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OxygenDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OxygenDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnWarmParticleTimeout(struct UParticleSystemComponent* PSystem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnWarmParticleTimeout");
    struct
    {
        struct UParticleSystemComponent* PSystem;
    } Parms{};
    Parms.PSystem = (struct UParticleSystemComponent*)PSystem;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnWarmParticlePlayFinished(struct UParticleSystemComponent* PSystem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnWarmParticlePlayFinished");
    struct
    {
        struct UParticleSystemComponent* PSystem;
    } Parms{};
    Parms.PSystem = (struct UParticleSystemComponent*)PSystem;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnShowInputDebugPanel(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnShowInputDebugPanel");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnPickupInfosUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnPickupInfosUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnLoadingPercentage(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnLoadingPercentage");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnDetorurResult(struct TArray<struct FVector> Paths, struct FVector StartPos, struct FVector EndPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnDetorurResult");
    struct
    {
        struct TArray<struct FVector> Paths;
        struct FVector StartPos;
        struct FVector EndPos;
    } Parms{};
    Parms.Paths = (struct TArray<struct FVector>)Paths;
    Parms.StartPos = (struct FVector)StartPos;
    Parms.EndPos = (struct FVector)EndPos;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::OnAIViewDeadbody(struct ACHARACTER* CHARACTER, struct AActor* Deadbody)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "OnAIViewDeadbody");
    struct
    {
        struct ACHARACTER* CHARACTER;
        struct AActor* Deadbody;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.Deadbody = (struct AActor*)Deadbody;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::NotifyServerRaidS3ArmoredCarAddHP(float AddedHealth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "NotifyServerRaidS3ArmoredCarAddHP");
    struct
    {
        float AddedHealth;
    } Parms{};
    Parms.AddedHealth = (float)AddedHealth;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::NotifyServerPlayerVehicleMaxHP(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "NotifyServerPlayerVehicleMaxHP");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::NotifyLuaCodeResult(uint64_t Index, struct FString Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "NotifyLuaCodeResult");
    struct
    {
        uint64_t Index;
        struct FString Result;
    } Parms{};
    Parms.Index = (uint64_t)Index;
    Parms.Result = (struct FString)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::NotifyAI(struct FString NotifyMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "NotifyAI");
    struct
    {
        struct FString NotifyMessage;
    } Parms{};
    Parms.NotifyMessage = (struct FString)NotifyMessage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::NewAddBuff(uint64_t BuffId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "NewAddBuff");
    struct
    {
        uint64_t BuffId;
    } Parms{};
    Parms.BuffId = (uint64_t)BuffId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::MultiWorldStart(uint64_t RoomId, int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "MultiWorldStart");
    struct
    {
        uint64_t RoomId;
        int32_t Port;
    } Parms{};
    Parms.RoomId = (uint64_t)RoomId;
    Parms.Port = (int32_t)Port;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::MultiWorldEnd(uint64_t RoomId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "MultiWorldEnd");
    struct
    {
        uint64_t RoomId;
    } Parms{};
    Parms.RoomId = (uint64_t)RoomId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::MulticastGMTimeScale(float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "MulticastGMTimeScale");
    struct
    {
        float Scale;
    } Parms{};
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::KickTeammate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "KickTeammate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPlayerGMComponent::IsAISpeakDebugEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "IsAISpeakDebugEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPlayerGMComponent::InvTest_RefillBullets_Server(uint8_t bLeft, uint64_t TargetBulletID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "InvTest_RefillBullets_Server");
    struct
    {
        uint8_t bLeft;
        uint64_t TargetBulletID;
    } Parms{};
    Parms.bLeft = (uint8_t)bLeft;
    Parms.TargetBulletID = (uint64_t)TargetBulletID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::InvTest_RefillBullets(uint8_t bLeft, uint64_t TargetBulletID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "InvTest_RefillBullets");
    struct
    {
        uint8_t bLeft;
        uint64_t TargetBulletID;
    } Parms{};
    Parms.bLeft = (uint8_t)bLeft;
    Parms.TargetBulletID = (uint64_t)TargetBulletID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWhoIsYourDaddy(int32_t Health)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWhoIsYourDaddy");
    struct
    {
        int32_t Health;
    } Parms{};
    Parms.Health = (int32_t)Health;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponUpdatePartDynamicEffective(uint64_t PartFunctionId, uint8_t bDynamicEffective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponUpdatePartDynamicEffective");
    struct
    {
        uint64_t PartFunctionId;
        uint8_t bDynamicEffective;
    } Parms{};
    Parms.PartFunctionId = (uint64_t)PartFunctionId;
    Parms.bDynamicEffective = (uint8_t)bDynamicEffective;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponUpdateBulletModel(int32_t AmmoCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponUpdateBulletModel");
    struct
    {
        int32_t AmmoCount;
    } Parms{};
    Parms.AmmoCount = (int32_t)AmmoCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestSpawnWeaponMesh(uint64_t WeaponID, uint64_t SkinAppId, uint8_t MeshType, uint32_t Index, uint64_t MysticalId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestSpawnWeaponMesh");
    struct
    {
        uint64_t WeaponID;
        uint64_t SkinAppId;
        uint8_t MeshType;
        uint32_t Index;
        uint64_t MysticalId;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.SkinAppId = (uint64_t)SkinAppId;
    Parms.MeshType = (uint8_t)MeshType;
    Parms.Index = (uint32_t)Index;
    Parms.MysticalId = (uint64_t)MysticalId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestSpawnCharacterInFace(struct FName CharacterConfig, uint64_t WeaponID, uint64_t SkinAppId, float Distance, int32_t Index, uint8_t FaceTo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestSpawnCharacterInFace");
    struct
    {
        struct FName CharacterConfig;
        uint64_t WeaponID;
        uint64_t SkinAppId;
        float Distance;
        int32_t Index;
        uint8_t FaceTo;
    } Parms{};
    Parms.CharacterConfig = (struct FName)CharacterConfig;
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.SkinAppId = (uint64_t)SkinAppId;
    Parms.Distance = (float)Distance;
    Parms.Index = (int32_t)Index;
    Parms.FaceTo = (uint8_t)FaceTo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestSpawnCharacter(struct FName CharacterConfig, uint64_t WeaponID, uint64_t SkinAppId, struct FVector Location, struct FRotator Rotator, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestSpawnCharacter");
    struct
    {
        struct FName CharacterConfig;
        uint64_t WeaponID;
        uint64_t SkinAppId;
        struct FVector Location;
        struct FRotator Rotator;
        int32_t Index;
    } Parms{};
    Parms.CharacterConfig = (struct FName)CharacterConfig;
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.SkinAppId = (uint64_t)SkinAppId;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestRemoveAllWeaponMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestRemoveAllWeaponMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestRemoveAllSpawnCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestRemoveAllSpawnCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestFocusWeaponMesh(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestFocusWeaponMesh");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestCharacterStopAutoFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestCharacterStopAutoFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponTestCharacterAutoFire(float FireInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponTestCharacterAutoFire");
    struct
    {
        float FireInterval;
    } Parms{};
    Parms.FireInterval = (float)FireInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponReplicateTimeOut(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponReplicateTimeOut");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponRefreshFiringAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponRefreshFiringAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeaponConsumeType(uint8_t ConsumeType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeaponConsumeType");
    struct
    {
        uint8_t ConsumeType;
    } Parms{};
    Parms.ConsumeType = (uint8_t)ConsumeType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWeapon_CallLuaWeaponMain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWeapon_CallLuaWeaponMain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWaterUpRest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWaterUpRest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWaterUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWaterUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMWaterDataCheck(float Precision, uint8_t bExecuteOneStep, uint8_t bDrawDebugEachStep, float HalfEdgeLength, uint8_t bShouldDrawNoConnectionPoint, uint8_t bGenerateFakeErrorSphere)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMWaterDataCheck");
    struct
    {
        float Precision;
        uint8_t bExecuteOneStep;
        uint8_t bDrawDebugEachStep;
        float HalfEdgeLength;
        uint8_t bShouldDrawNoConnectionPoint;
        uint8_t bGenerateFakeErrorSphere;
    } Parms{};
    Parms.Precision = (float)Precision;
    Parms.bExecuteOneStep = (uint8_t)bExecuteOneStep;
    Parms.bDrawDebugEachStep = (uint8_t)bDrawDebugEachStep;
    Parms.HalfEdgeLength = (float)HalfEdgeLength;
    Parms.bShouldDrawNoConnectionPoint = (uint8_t)bShouldDrawNoConnectionPoint;
    Parms.bGenerateFakeErrorSphere = (uint8_t)bGenerateFakeErrorSphere;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMVehicleStopMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMVehicleStopMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMVehiclePlayMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMVehiclePlayMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseTA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseTA");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseStartSpotTemplate(struct FName RowId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseStartSpotTemplate");
    struct
    {
        struct FName RowId;
    } Parms{};
    Parms.RowId = (struct FName)RowId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseSKUBrick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseSKUBrick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseOptOnDoorFrontCheck(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseOptOnDoorFrontCheck");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseOnlyPlayerCharacterWhenCheckPreInMaxDis(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseOnlyPlayerCharacterWhenCheckPreInMaxDis");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseGlassOpt(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseGlassOpt");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseForwardAndCheckHitFirstly(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseForwardAndCheckHitFirstly");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseFakeTickInterval(uint8_t InbUse, float InInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseFakeTickInterval");
    struct
    {
        uint8_t InbUse;
        float InInterval;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    Parms.InInterval = (float)InInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseDSCheckNearly(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseDSCheckNearly");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseCustomMovementSpeed(uint8_t bUseCustomSpeed, float CustomSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseCustomMovementSpeed");
    struct
    {
        uint8_t bUseCustomSpeed;
        float CustomSpeed;
    } Parms{};
    Parms.bUseCustomSpeed = (uint8_t)bUseCustomSpeed;
    Parms.CustomSpeed = (float)CustomSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseConstMovementSpeed(uint8_t bUseConstSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseConstMovementSpeed");
    struct
    {
        uint8_t bUseConstSpeed;
    } Parms{};
    Parms.bUseConstSpeed = (uint8_t)bUseConstSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseClientWhenCheckPreInMaxDis(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseClientWhenCheckPreInMaxDis");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseClientOverlapWhenCheckPreInMaxDis(uint8_t InbUse, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseClientOverlapWhenCheckPreInMaxDis");
    struct
    {
        uint8_t InbUse;
        float InRadius;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseCheckUnlock(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseCheckUnlock");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseCheckHack(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseCheckHack");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseCheckCollSweep(int32_t Index, uint8_t InbUse, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseCheckCollSweep");
    struct
    {
        int32_t Index;
        uint8_t InbUse;
        float InRadius;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.InbUse = (uint8_t)InbUse;
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseCheckCapture(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseCheckCapture");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUseAILabGM(int64_t Uin, struct FString GMCmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUseAILabGM");
    struct
    {
        int64_t Uin;
        struct FString GMCmd;
    } Parms{};
    Parms.Uin = (int64_t)Uin;
    Parms.GMCmd = (struct FString)GMCmd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUnlockLootingBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUnlockLootingBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUnEquipPerk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUnEquipPerk");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMUnEquipLeftWeapon(uint64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMUnEquipLeftWeapon");
    struct
    {
        uint64_t WeaponID;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTryCallDeliverAI(int32_t Diff, int32_t Style, uint8_t IsTeammate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTryCallDeliverAI");
    struct
    {
        int32_t Diff;
        int32_t Style;
        uint8_t IsTeammate;
    } Parms{};
    Parms.Diff = (int32_t)Diff;
    Parms.Style = (int32_t)Style;
    Parms.IsTeammate = (uint8_t)IsTeammate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggleSOLTimeLineEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggleSOLTimeLineEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggleInteractorWhiteDotDistance(uint8_t ShowWhiteDotDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggleInteractorWhiteDotDistance");
    struct
    {
        uint8_t ShowWhiteDotDistance;
    } Parms{};
    Parms.ShowWhiteDotDistance = (uint8_t)ShowWhiteDotDistance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggleBattleFieldPlayerAudio(int32_t InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggleBattleFieldPlayerAudio");
    struct
    {
        int32_t InType;
    } Parms{};
    Parms.InType = (int32_t)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerSOLTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerSOLTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerPreMiniGameSucceed(struct FName MiniGameTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerPreMiniGameSucceed");
    struct
    {
        struct FName MiniGameTag;
    } Parms{};
    Parms.MiniGameTag = (struct FName)MiniGameTag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerInteractorKeyPressed(int32_t KeyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerInteractorKeyPressed");
    struct
    {
        int32_t KeyIndex;
    } Parms{};
    Parms.KeyIndex = (int32_t)KeyIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerHudStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerHudStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerFirework()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerFirework");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerEarthquake(int32_t Intensity, float DelaySeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerEarthquake");
    struct
    {
        int32_t Intensity;
        float DelaySeconds;
    } Parms{};
    Parms.Intensity = (int32_t)Intensity;
    Parms.DelaySeconds = (float)DelaySeconds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerBossDied()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerBossDied");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerAShellSpawn(int32_t Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerAShellSpawn");
    struct
    {
        int32_t Delay;
    } Parms{};
    Parms.Delay = (int32_t)Delay;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerArenaEnd(int32_t InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerArenaEnd");
    struct
    {
        int32_t InType;
    } Parms{};
    Parms.InType = (int32_t)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTriggerAllPlayerToEscape()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTriggerAllPlayerToEscape");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTransAILabCommand(int64_t Uin, int32_t Command, float value1, float value2, int64_t Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTransAILabCommand");
    struct
    {
        int64_t Uin;
        int32_t Command;
        float value1;
        float value2;
        int64_t Value3;
    } Parms{};
    Parms.Uin = (int64_t)Uin;
    Parms.Command = (int32_t)Command;
    Parms.value1 = (float)value1;
    Parms.value2 = (float)value2;
    Parms.Value3 = (int64_t)Value3;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleVehicleTurretLock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleVehicleTurretLock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleUIBatch(int32_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleUIBatch");
    struct
    {
        int32_t Visible;
    } Parms{};
    Parms.Visible = (int32_t)Visible;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleTrainSOL(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleTrainSOL");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleSpectateMode(int32_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleSpectateMode");
    struct
    {
        int32_t Visible;
    } Parms{};
    Parms.Visible = (int32_t)Visible;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleParticleSystemComponentDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleParticleSystemComponentDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleObserverMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleObserverMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleHUD(int32_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleHUD");
    struct
    {
        int32_t Visible;
    } Parms{};
    Parms.Visible = (int32_t)Visible;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleHideMiniMap(int32_t InHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleHideMiniMap");
    struct
    {
        int32_t InHide;
    } Parms{};
    Parms.InHide = (int32_t)InHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleFirePriorityDebugView(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleFirePriorityDebugView");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMToggleExit(int32_t ID, uint8_t Enable, float CountDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMToggleExit");
    struct
    {
        int32_t ID;
        uint8_t Enable;
        float CountDown;
    } Parms{};
    Parms.ID = (int32_t)ID;
    Parms.Enable = (uint8_t)Enable;
    Parms.CountDown = (float)CountDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTimeScale(float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTimeScale");
    struct
    {
        float Scale;
    } Parms{};
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMThreeInspect(int64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMThreeInspect");
    struct
    {
        int64_t ItemID;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMThreeAnimJumpToEndByItemGid(uint64_t InItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMThreeAnimJumpToEndByItemGid");
    struct
    {
        uint64_t InItemGid;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestTrace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestTrace");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestTearOff(int32_t TearOffMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestTearOff");
    struct
    {
        int32_t TearOffMode;
    } Parms{};
    Parms.TearOffMode = (int32_t)TearOffMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestSweepCast(float LocX, float LocY, float LocZ, float Height, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestSweepCast");
    struct
    {
        float LocX;
        float LocY;
        float LocZ;
        float Height;
        float radius;
    } Parms{};
    Parms.LocX = (float)LocX;
    Parms.LocY = (float)LocY;
    Parms.LocZ = (float)LocZ;
    Parms.Height = (float)Height;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestRadialDamage(int64_t AttackId, float X, float Y, float Z, uint8_t bDebugDraw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestRadialDamage");
    struct
    {
        int64_t AttackId;
        float X;
        float Y;
        float Z;
        uint8_t bDebugDraw;
    } Parms{};
    Parms.AttackId = (int64_t)AttackId;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    Parms.bDebugDraw = (uint8_t)bDebugDraw;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestPassiveMove(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestPassiveMove");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestNightVisionEquipment(uint8_t bTestOnServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestNightVisionEquipment");
    struct
    {
        uint8_t bTestOnServer;
    } Parms{};
    Parms.bTestOnServer = (uint8_t)bTestOnServer;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestFindPath(struct FVector Start, struct FVector End, float LiftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestFindPath");
    struct
    {
        struct FVector Start;
        struct FVector End;
        float LiftTime;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.LiftTime = (float)LiftTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestDragForPassiveMove(int32_t Stage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestDragForPassiveMove");
    struct
    {
        int32_t Stage;
    } Parms{};
    Parms.Stage = (int32_t)Stage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestAutoMoveToLocation(float LocX, float LocY, float LocZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestAutoMoveToLocation");
    struct
    {
        float LocX;
        float LocY;
        float LocZ;
    } Parms{};
    Parms.LocX = (float)LocX;
    Parms.LocY = (float)LocY;
    Parms.LocZ = (float)LocZ;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestAreaFreeze(int32_t AreaID, uint8_t bEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestAreaFreeze");
    struct
    {
        int32_t AreaID;
        uint8_t bEnter;
    } Parms{};
    Parms.AreaID = (int32_t)AreaID;
    Parms.bEnter = (uint8_t)bEnter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTestAISpawnRate(int32_t Count, int32_t TagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTestAISpawnRate");
    struct
    {
        int32_t Count;
        int32_t TagId;
    } Parms{};
    Parms.Count = (int32_t)Count;
    Parms.TagId = (int32_t)TagId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTeelMeLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTeelMeLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTeamInfoSetTeammateState(int32_t TeammateState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTeamInfoSetTeammateState");
    struct
    {
        int32_t TeammateState;
    } Parms{};
    Parms.TeammateState = (int32_t)TeammateState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMTeamInfoSetPlayerGamePlayState(int32_t InPlayerGamePlayState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMTeamInfoSetPlayerGamePlayState");
    struct
    {
        int32_t InPlayerGamePlayState;
    } Parms{};
    Parms.InPlayerGamePlayState = (int32_t)InPlayerGamePlayState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSwitchWeapon(EAttachPosition pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSwitchWeapon");
    struct
    {
        enum EAttachPosition pos;
    } Parms{};
    Parms.pos = (enum EAttachPosition)pos;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmSwitchToEmptyHand(float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmSwitchToEmptyHand");
    struct
    {
        float DelayTime;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSwitchSkillWeapon(int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSwitchSkillWeapon");
    struct
    {
        int32_t SkillId;
    } Parms{};
    Parms.SkillId = (int32_t)SkillId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSwitchCharacterAvatarID(uint64_t PlayerId, struct FName HeroId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSwitchCharacterAvatarID");
    struct
    {
        uint64_t PlayerId;
        struct FName HeroId;
    } Parms{};
    Parms.PlayerId = (uint64_t)PlayerId;
    Parms.HeroId = (struct FName)HeroId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSwitchBreakableItemSkeletalMeshLodControl(int32_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSwitchBreakableItemSkeletalMeshLodControl");
    struct
    {
        int32_t IsOpen;
    } Parms{};
    Parms.IsOpen = (int32_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSwitchBreakableItemDestoryTime(int32_t isNeverDestroy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSwitchBreakableItemDestoryTime");
    struct
    {
        int32_t isNeverDestroy;
    } Parms{};
    Parms.isNeverDestroy = (int32_t)isNeverDestroy;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSuperSprint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSuperSprint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSummonAILab(int32_t Type, int32_t Diff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSummonAILab");
    struct
    {
        int32_t Type;
        int32_t Diff;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.Diff = (int32_t)Diff;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMStopLooting(uint8_t bSwitchFromLoot2BagView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMStopLooting");
    struct
    {
        uint8_t bSwitchFromLoot2BagView;
    } Parms{};
    Parms.bSwitchFromLoot2BagView = (uint8_t)bSwitchFromLoot2BagView;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMStopGuide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMStopGuide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMStopExitTriggerAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMStopExitTriggerAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMStopCurrentExitCutScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMStopCurrentExitCutScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMStartSpectate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMStartSpectate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMStartGuideInGame(int32_t StageId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMStartGuideInGame");
    struct
    {
        int32_t StageId;
    } Parms{};
    Parms.StageId = (int32_t)StageId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpeedUpOccupy(int32_t multipy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpeedUpOccupy");
    struct
    {
        int32_t multipy;
    } Parms{};
    Parms.multipy = (int32_t)multipy;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpectateNext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpectateNext");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnVehicle(struct FString VehicleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnVehicle");
    struct
    {
        struct FString VehicleName;
    } Parms{};
    Parms.VehicleName = (struct FString)VehicleName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnTotalVehicles(float dist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnTotalVehicles");
    struct
    {
        float dist;
    } Parms{};
    Parms.dist = (float)dist;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnSmokeActor(int32_t SmokeId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnSmokeActor");
    struct
    {
        int32_t SmokeId;
    } Parms{};
    Parms.SmokeId = (int32_t)SmokeId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnProfileVehicles(float dist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnProfileVehicles");
    struct
    {
        float dist;
    } Parms{};
    Parms.dist = (float)dist;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnPlunderContract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnPlunderContract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnPickupWhenReleaseDoor(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnPickupWhenReleaseDoor");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnNormalFootball()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnNormalFootball");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnMovingFish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnMovingFish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnMovieBP(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnMovieBP");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnLimit(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnLimit");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnJetForTest(int32_t Num, float Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnJetForTest");
    struct
    {
        int32_t Num;
        float Height;
    } Parms{};
    Parms.Num = (int32_t)Num;
    Parms.Height = (float)Height;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnJailBreakDeadBody(int32_t TeamStartGroupId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnJailBreakDeadBody");
    struct
    {
        int32_t TeamStartGroupId;
    } Parms{};
    Parms.TeamStartGroupId = (int32_t)TeamStartGroupId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnItemWithSourcePlayer(uint64_t ItemID, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnItemWithSourcePlayer");
    struct
    {
        uint64_t ItemID;
        uint64_t PlayerId;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnItemPickup(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnItemPickup");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnItemOwnedToPlayer(uint64_t ItemID, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnItemOwnedToPlayer");
    struct
    {
        uint64_t ItemID;
        uint64_t PlayerId;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnItem(int64_t ItemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnItem");
    struct
    {
        int64_t ItemID;
        int32_t Num;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnInLocation(struct FString AIName, float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnInLocation");
    struct
    {
        struct FString AIName;
        float X;
        float Y;
        float Z;
    } Parms{};
    Parms.AIName = (struct FString)AIName;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnFootballStaticGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnFootballStaticGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnFootballAIGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnFootballAIGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnFireArrow(uint64_t BulletId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnFireArrow");
    struct
    {
        uint64_t BulletId;
    } Parms{};
    Parms.BulletId = (uint64_t)BulletId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnDFMCharacterInLocation(struct FString CharacterID, struct FString BagId, struct FString ChestId, struct FString VestID, struct FString WeaponID1, struct FString WeaponID2, float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnDFMCharacterInLocation");
    struct
    {
        struct FString CharacterID;
        struct FString BagId;
        struct FString ChestId;
        struct FString VestID;
        struct FString WeaponID1;
        struct FString WeaponID2;
        float X;
        float Y;
        float Z;
    } Parms{};
    Parms.CharacterID = (struct FString)CharacterID;
    Parms.BagId = (struct FString)BagId;
    Parms.ChestId = (struct FString)ChestId;
    Parms.VestID = (struct FString)VestID;
    Parms.WeaponID1 = (struct FString)WeaponID1;
    Parms.WeaponID2 = (struct FString)WeaponID2;
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnArchiveItemNew(int32_t Level, uint8_t KilledByBoss, struct FString Killer, struct FString BeKiller, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnArchiveItemNew");
    struct
    {
        int32_t Level;
        uint8_t KilledByBoss;
        struct FString Killer;
        struct FString BeKiller;
        uint64_t KillerWeaponID;
        uint64_t MapID;
        int64_t KillTimestamp;
        int64_t EquipmentValue;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.KilledByBoss = (uint8_t)KilledByBoss;
    Parms.Killer = (struct FString)Killer;
    Parms.BeKiller = (struct FString)BeKiller;
    Parms.KillerWeaponID = (uint64_t)KillerWeaponID;
    Parms.MapID = (uint64_t)MapID;
    Parms.KillTimestamp = (int64_t)KillTimestamp;
    Parms.EquipmentValue = (int64_t)EquipmentValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnArchiveItem(struct FString Killer, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnArchiveItem");
    struct
    {
        struct FString Killer;
        uint64_t KillerWeaponID;
        uint64_t MapID;
        int64_t KillTimestamp;
        int64_t EquipmentValue;
    } Parms{};
    Parms.Killer = (struct FString)Killer;
    Parms.KillerWeaponID = (uint64_t)KillerWeaponID;
    Parms.MapID = (uint64_t)MapID;
    Parms.KillTimestamp = (int64_t)KillTimestamp;
    Parms.EquipmentValue = (int64_t)EquipmentValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnAllSniperDrama()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnAllSniperDrama");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSpawnAI(struct FString BotName, struct FString Args, uint8_t TPToStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSpawnAI");
    struct
    {
        struct FString BotName;
        struct FString Args;
        uint8_t TPToStart;
    } Parms{};
    Parms.BotName = (struct FString)BotName;
    Parms.Args = (struct FString)Args;
    Parms.TPToStart = (uint8_t)TPToStart;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSOLStartMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSOLStartMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSnapshot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSnapshot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkinPlayer(uint64_t WeaponID, uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkinPlayer");
    struct
    {
        uint64_t WeaponID;
        uint64_t SkinId;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkinPendant(uint64_t PendantItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkinPendant");
    struct
    {
        uint64_t PendantItemId;
    } Parms{};
    Parms.PendantItemId = (uint64_t)PendantItemId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkinMysticalGun(uint64_t SkinId, uint64_t MysticalId, uint64_t RandomSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkinMysticalGun");
    struct
    {
        uint64_t SkinId;
        uint64_t MysticalId;
        uint64_t RandomSeed;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    Parms.MysticalId = (uint64_t)MysticalId;
    Parms.RandomSeed = (uint64_t)RandomSeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkinMysticalAppGun(uint64_t SkinApperanceId, uint64_t MysticalId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkinMysticalAppGun");
    struct
    {
        uint64_t SkinApperanceId;
        uint64_t MysticalId;
    } Parms{};
    Parms.SkinApperanceId = (uint64_t)SkinApperanceId;
    Parms.MysticalId = (uint64_t)MysticalId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkinGun(uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkinGun");
    struct
    {
        uint64_t SkinId;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkinAppGun(uint64_t SkinApperanceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkinAppGun");
    struct
    {
        uint64_t SkinApperanceId;
    } Parms{};
    Parms.SkinApperanceId = (uint64_t)SkinApperanceId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSkillInspect(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSkillInspect");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSimulateSplitRedEnvelope(uint64_t EnvelopeItemID, int64_t TryTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSimulateSplitRedEnvelope");
    struct
    {
        uint64_t EnvelopeItemID;
        int64_t TryTimes;
    } Parms{};
    Parms.EnvelopeItemID = (uint64_t)EnvelopeItemID;
    Parms.TryTimes = (int64_t)TryTimes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSimulateOpenBox(int32_t Times)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSimulateOpenBox");
    struct
    {
        int32_t Times;
    } Parms{};
    Parms.Times = (int32_t)Times;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSimulateDSFrameTimeDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSimulateDSFrameTimeDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSimulateDSFrameTime(float AvgMax, float AvgMin, float StunRate, float StunMax, float StunMin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSimulateDSFrameTime");
    struct
    {
        float AvgMax;
        float AvgMin;
        float StunRate;
        float StunMax;
        float StunMin;
    } Parms{};
    Parms.AvgMax = (float)AvgMax;
    Parms.AvgMin = (float)AvgMin;
    Parms.StunRate = (float)StunRate;
    Parms.StunMax = (float)StunMax;
    Parms.StunMin = (float)StunMin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSimulateCollectionDataEvent(int64_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSimulateCollectionDataEvent");
    struct
    {
        int64_t Type;
    } Parms{};
    Parms.Type = (int64_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowWaterSparseOctree(int32_t LOD, float Range)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowWaterSparseOctree");
    struct
    {
        int32_t LOD;
        float Range;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    Parms.Range = (float)Range;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowUIHidePanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowUIHidePanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowSparseOctree(int32_t LOD, float Range)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowSparseOctree");
    struct
    {
        int32_t LOD;
        float Range;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    Parms.Range = (float)Range;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowSOLCommonBanner(int32_t Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowSOLCommonBanner");
    struct
    {
        int32_t Val;
    } Parms{};
    Parms.Val = (int32_t)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowSOLBroadcastBanner(struct FString Text, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowSOLBroadcastBanner");
    struct
    {
        struct FString Text;
        float Duration;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowSocket(struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowSocket");
    struct
    {
        struct FName SocketName;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowSkill()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowSkill");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowServerMoveInfo(int32_t MoveType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowServerMoveInfo");
    struct
    {
        int32_t MoveType;
    } Parms{};
    Parms.MoveType = (int32_t)MoveType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowRebornPlayerBanner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowRebornPlayerBanner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowPickupInfos(int32_t ShowType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowPickupInfos");
    struct
    {
        int32_t ShowType;
    } Parms{};
    Parms.ShowType = (int32_t)ShowType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowNavExtInfo(float RefreshTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowNavExtInfo");
    struct
    {
        float RefreshTime;
    } Parms{};
    Parms.RefreshTime = (float)RefreshTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowNav(float Range)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowNav");
    struct
    {
        float Range;
    } Parms{};
    Parms.Range = (float)Range;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowMovingFishPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowMovingFishPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowLogicBuff(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowLogicBuff");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmShowKillTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmShowKillTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowInputDebugPanel(int32_t InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowInputDebugPanel");
    struct
    {
        int32_t InType;
    } Parms{};
    Parms.InType = (int32_t)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowGroupLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowGroupLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowFps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowFps");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowFoliage(uint8_t bSneakOpt, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowFoliage");
    struct
    {
        uint8_t bSneakOpt;
        uint8_t bEnable;
    } Parms{};
    Parms.bSneakOpt = (uint8_t)bSneakOpt;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowDeadBoxText(int32_t TextType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowDeadBoxText");
    struct
    {
        int32_t TextType;
    } Parms{};
    Parms.TextType = (int32_t)TextType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowCharacterWaterInfo(int32_t ShowType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowCharacterWaterInfo");
    struct
    {
        int32_t ShowType;
    } Parms{};
    Parms.ShowType = (int32_t)ShowType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowCharacterLightAttachmentAsGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowCharacterLightAttachmentAsGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowCameraLocDiff(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowCameraLocDiff");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowAllVaultGasVolume(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowAllVaultGasVolume");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowAllSmokeBlindnessVolume(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowAllSmokeBlindnessVolume");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowAllFlameDamageVolume(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowAllFlameDamageVolume");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMShowAllFishShoal(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMShowAllFishShoal");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetWorldTimeDilation(float NewTimeDilation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetWorldTimeDilation");
    struct
    {
        float NewTimeDilation;
    } Parms{};
    Parms.NewTimeDilation = (float)NewTimeDilation;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetWeatherAudioId(int64_t WeatherID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetWeatherAudioId");
    struct
    {
        int64_t WeatherID;
    } Parms{};
    Parms.WeatherID = (int64_t)WeatherID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetVolumetricViewDistance(float InDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetVolumetricViewDistance");
    struct
    {
        float InDistance;
    } Parms{};
    Parms.InDistance = (float)InDistance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetVehicleHPLock(uint8_t bLock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetVehicleHPLock");
    struct
    {
        uint8_t bLock;
    } Parms{};
    Parms.bLock = (uint8_t)bLock;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetUseGlassEffectCull(uint8_t InUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetUseGlassEffectCull");
    struct
    {
        uint8_t InUse;
    } Parms{};
    Parms.InUse = (uint8_t)InUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSettlement(uint8_t MathOverReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSettlement");
    struct
    {
        uint8_t MathOverReason;
    } Parms{};
    Parms.MathOverReason = (uint8_t)MathOverReason;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetTestScanDelayDuration(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetTestScanDelayDuration");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetTestInRelink(uint8_t InRelink)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetTestInRelink");
    struct
    {
        uint8_t InRelink;
    } Parms{};
    Parms.InRelink = (uint8_t)InRelink;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetTestDelayReplicate(uint8_t bTest, float DelayDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetTestDelayReplicate");
    struct
    {
        uint8_t bTest;
        float DelayDuration;
    } Parms{};
    Parms.bTest = (uint8_t)bTest;
    Parms.DelayDuration = (float)DelayDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLTimelineConfig(uint8_t Enable, int32_t Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLTimelineConfig");
    struct
    {
        uint8_t Enable;
        int32_t Interval;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.Interval = (int32_t)Interval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLShellingConfig(uint8_t Enable, int32_t AreaNumLimit, int32_t ShellNumPerZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLShellingConfig");
    struct
    {
        uint8_t Enable;
        int32_t AreaNumLimit;
        int32_t ShellNumPerZone;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.AreaNumLimit = (int32_t)AreaNumLimit;
    Parms.ShellNumPerZone = (int32_t)ShellNumPerZone;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLParatrooperRealNumLimit(int32_t TotalNum, int32_t NumPerZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLParatrooperRealNumLimit");
    struct
    {
        int32_t TotalNum;
        int32_t NumPerZone;
    } Parms{};
    Parms.TotalNum = (int32_t)TotalNum;
    Parms.NumPerZone = (int32_t)NumPerZone;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLParatrooperFakeNumLimit(int32_t TotalNum, int32_t NumPerZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLParatrooperFakeNumLimit");
    struct
    {
        int32_t TotalNum;
        int32_t NumPerZone;
    } Parms{};
    Parms.TotalNum = (int32_t)TotalNum;
    Parms.NumPerZone = (int32_t)NumPerZone;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLParatrooperEnable(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLParatrooperEnable");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLIntroEventState(struct FString EventIdsStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLIntroEventState");
    struct
    {
        struct FString EventIdsStr;
    } Parms{};
    Parms.EventIdsStr = (struct FString)EventIdsStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSOLHolidayEventIdArray(struct FString HolidayEventIdsStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSOLHolidayEventIdArray");
    struct
    {
        struct FString HolidayEventIdsStr;
    } Parms{};
    Parms.HolidayEventIdsStr = (struct FString)HolidayEventIdsStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetShellingFX(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetShellingFX");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetServerCVarInt(struct FString CVarName, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetServerCVarInt");
    struct
    {
        struct FString CVarName;
        int32_t Value;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetScanableEffectDuration(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetScanableEffectDuration");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetSafeBoxSkinID(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetSafeBoxSkinID");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetReplicationVolumeEnableGlobal(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetReplicationVolumeEnableGlobal");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetReplicationVolumeEnableConnection(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetReplicationVolumeEnableConnection");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetRelinkTrackProperty(float Param1, float Param2, float param3, float paramFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetRelinkTrackProperty");
    struct
    {
        float Param1;
        float Param2;
        float param3;
        float paramFactor;
    } Parms{};
    Parms.Param1 = (float)Param1;
    Parms.Param2 = (float)Param2;
    Parms.param3 = (float)param3;
    Parms.paramFactor = (float)paramFactor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetRelinkPerformDataByConfigId(int32_t ConfigId, uint8_t bSpecial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetRelinkPerformDataByConfigId");
    struct
    {
        int32_t ConfigId;
        uint8_t bSpecial;
    } Parms{};
    Parms.ConfigId = (int32_t)ConfigId;
    Parms.bSpecial = (uint8_t)bSpecial;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetRecycleTime(int32_t InRecycleTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetRecycleTime");
    struct
    {
        int32_t InRecycleTime;
    } Parms{};
    Parms.InRecycleTime = (int32_t)InRecycleTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetPickupInfosDis(float Dis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetPickupInfosDis");
    struct
    {
        float Dis;
    } Parms{};
    Parms.Dis = (float)Dis;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetPickupCullScreenSize(int32_t InID, float CullScreenSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetPickupCullScreenSize");
    struct
    {
        int32_t InID;
        float CullScreenSize;
    } Parms{};
    Parms.InID = (int32_t)InID;
    Parms.CullScreenSize = (float)CullScreenSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetPanningRule(int32_t Rule)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetPanningRule");
    struct
    {
        int32_t Rule;
    } Parms{};
    Parms.Rule = (int32_t)Rule;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetNeedCheckAndRefresh(uint8_t InbNeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetNeedCheckAndRefresh");
    struct
    {
        uint8_t InbNeed;
    } Parms{};
    Parms.InbNeed = (uint8_t)InbNeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetNearlyThreshold(float Dis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetNearlyThreshold");
    struct
    {
        float Dis;
    } Parms{};
    Parms.Dis = (float)Dis;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetMaxSubstepsDeltaTime(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetMaxSubstepsDeltaTime");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetMaxSubsteps(int32_t MaxSubsteps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetMaxSubsteps");
    struct
    {
        int32_t MaxSubsteps;
    } Parms{};
    Parms.MaxSubsteps = (int32_t)MaxSubsteps;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetMaxReceiveValue(uint8_t bDaily, int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetMaxReceiveValue");
    struct
    {
        uint8_t bDaily;
        int64_t Value;
    } Parms{};
    Parms.bDaily = (uint8_t)bDaily;
    Parms.Value = (int64_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetMatchTime(int32_t MatchTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetMatchTime");
    struct
    {
        int32_t MatchTime;
    } Parms{};
    Parms.MatchTime = (int32_t)MatchTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetMapLevel(int32_t MapLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetMapLevel");
    struct
    {
        int32_t MapLevel;
    } Parms{};
    Parms.MapLevel = (int32_t)MapLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetMapId(int32_t MapID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetMapId");
    struct
    {
        int32_t MapID;
    } Parms{};
    Parms.MapID = (int32_t)MapID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetItemCarryOutRemainNum(uint64_t ItemID, int32_t RemainNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetItemCarryOutRemainNum");
    struct
    {
        uint64_t ItemID;
        int32_t RemainNum;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.RemainNum = (int32_t)RemainNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInterlayerEffectDuration(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInterlayerEffectDuration");
    struct
    {
        float Duration;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInteractSystemDSCheck(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInteractSystemDSCheck");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInteractOutlineLaziedOpened(uint8_t InbOpened)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInteractOutlineLaziedOpened");
    struct
    {
        uint8_t InbOpened;
    } Parms{};
    Parms.InbOpened = (uint8_t)InbOpened;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInteractorUseSceneQuery(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInteractorUseSceneQuery");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInteractorSceneQueryRadius(float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInteractorSceneQueryRadius");
    struct
    {
        float InRadius;
    } Parms{};
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInteractorDetectInterval(float InInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInteractorDetectInterval");
    struct
    {
        float InInterval;
    } Parms{};
    Parms.InInterval = (float)InInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetInteractorCheckCollisionChannel(uint8_t InbUsePawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetInteractorCheckCollisionChannel");
    struct
    {
        uint8_t InbUsePawn;
    } Parms{};
    Parms.InbUsePawn = (uint8_t)InbUsePawn;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetHRTFs(int32_t HRTFIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetHRTFs");
    struct
    {
        int32_t HRTFIndex;
    } Parms{};
    Parms.HRTFIndex = (int32_t)HRTFIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetGamepadAutoSprintMinThreshold(float Threshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetGamepadAutoSprintMinThreshold");
    struct
    {
        float Threshold;
    } Parms{};
    Parms.Threshold = (float)Threshold;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetGameAIDifficulty(int32_t AILevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetGameAIDifficulty");
    struct
    {
        int32_t AILevel;
    } Parms{};
    Parms.AILevel = (int32_t)AILevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetFingerprint(int32_t ConfigId, int32_t Difficulty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetFingerprint");
    struct
    {
        int32_t ConfigId;
        int32_t Difficulty;
    } Parms{};
    Parms.ConfigId = (int32_t)ConfigId;
    Parms.Difficulty = (int32_t)Difficulty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetFallout(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetFallout");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetDSOpenCloseDoorSpeedScale(float RotOpen, float RotClose, float SlideOpen, float SlideClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetDSOpenCloseDoorSpeedScale");
    struct
    {
        float RotOpen;
        float RotClose;
        float SlideOpen;
        float SlideClose;
    } Parms{};
    Parms.RotOpen = (float)RotOpen;
    Parms.RotClose = (float)RotClose;
    Parms.SlideOpen = (float)SlideOpen;
    Parms.SlideClose = (float)SlideClose;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetDropLogicCounter(uint32_t Key, uint32_t InCounter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetDropLogicCounter");
    struct
    {
        uint32_t Key;
        uint32_t InCounter;
    } Parms{};
    Parms.Key = (uint32_t)Key;
    Parms.InCounter = (uint32_t)InCounter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetDecipherTime(int32_t InDecipherTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetDecipherTime");
    struct
    {
        int32_t InDecipherTime;
    } Parms{};
    Parms.InDecipherTime = (int32_t)InDecipherTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetDebugTransform(uint64_t PlayerUin, uint8_t ToServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetDebugTransform");
    struct
    {
        uint64_t PlayerUin;
        uint8_t ToServer;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    Parms.ToServer = (uint8_t)ToServer;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetDeadBoxType(int32_t DeadBoxType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetDeadBoxType");
    struct
    {
        int32_t DeadBoxType;
    } Parms{};
    Parms.DeadBoxType = (int32_t)DeadBoxType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetDangerLevel(int32_t InDangerLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetDangerLevel");
    struct
    {
        int32_t InDangerLevel;
    } Parms{};
    Parms.InDangerLevel = (int32_t)InDangerLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetCurrent(uint32_t InCurrent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetCurrent");
    struct
    {
        uint32_t InCurrent;
    } Parms{};
    Parms.InCurrent = (uint32_t)InCurrent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetCloseAIHint(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetCloseAIHint");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetCharacterOutline(uint8_t bAdd, uint8_t bIncludeSelf, int32_t OutLineType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetCharacterOutline");
    struct
    {
        uint8_t bAdd;
        uint8_t bIncludeSelf;
        int32_t OutLineType;
    } Parms{};
    Parms.bAdd = (uint8_t)bAdd;
    Parms.bIncludeSelf = (uint8_t)bIncludeSelf;
    Parms.OutLineType = (int32_t)OutLineType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetCacheVehicleWeapon(uint8_t bEnableCache, uint8_t bCacheOnlyLastSeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetCacheVehicleWeapon");
    struct
    {
        uint8_t bEnableCache;
        uint8_t bCacheOnlyLastSeat;
    } Parms{};
    Parms.bEnableCache = (uint8_t)bEnableCache;
    Parms.bCacheOnlyLastSeat = (uint8_t)bCacheOnlyLastSeat;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetBoxMeshType(int32_t MeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetBoxMeshType");
    struct
    {
        int32_t MeshType;
    } Parms{};
    Parms.MeshType = (int32_t)MeshType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetBattleClass(uint32_t BattleClassId, const struct TArray<uint32_t>& AbilityIdArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetBattleClass");
    struct
    {
        uint32_t BattleClassId;
        struct TArray<uint32_t> AbilityIdArr;
    } Parms{};
    Parms.BattleClassId = (uint32_t)BattleClassId;
    Parms.AbilityIdArr = (struct TArray<uint32_t>)AbilityIdArr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAltarInteractLimit(int32_t InLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAltarInteractLimit");
    struct
    {
        int32_t InLimit;
    } Parms{};
    Parms.InLimit = (int32_t)InLimit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllVehicleCloaking(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllVehicleCloaking");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllVehicleAddComponentDamage(struct FName ComponentName, float Damage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllVehicleAddComponentDamage");
    struct
    {
        struct FName ComponentName;
        float Damage;
    } Parms{};
    Parms.ComponentName = (struct FName)ComponentName;
    Parms.Damage = (float)Damage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllRemoterCharacterAKFootSoundAttenuationScalar(EGPAudioFootSoundType FootSoundType, float ScaleValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllRemoterCharacterAKFootSoundAttenuationScalar");
    struct
    {
        enum EGPAudioFootSoundType FootSoundType;
        float ScaleValue;
    } Parms{};
    Parms.FootSoundType = (enum EGPAudioFootSoundType)FootSoundType;
    Parms.ScaleValue = (float)ScaleValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllRemoterCharacterAKFootSoundAttenuationByRTPC(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllRemoterCharacterAKFootSoundAttenuationByRTPC");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllRemoterCharacterAKAttenuationScalar(EGPAudioBlueprintType AudioBlueprintType, float ScaleValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllRemoterCharacterAKAttenuationScalar");
    struct
    {
        enum EGPAudioBlueprintType AudioBlueprintType;
        float ScaleValue;
    } Parms{};
    Parms.AudioBlueprintType = (enum EGPAudioBlueprintType)AudioBlueprintType;
    Parms.ScaleValue = (float)ScaleValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllPickupScanable(uint8_t Scanable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllPickupScanable");
    struct
    {
        uint8_t Scanable;
    } Parms{};
    Parms.Scanable = (uint8_t)Scanable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllOpenBoxScanable(int32_t InDoRandom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllOpenBoxScanable");
    struct
    {
        int32_t InDoRandom;
    } Parms{};
    Parms.InDoRandom = (int32_t)InDoRandom;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllOnlyScanableVisible(uint8_t InVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllOnlyScanableVisible");
    struct
    {
        uint8_t InVisible;
    } Parms{};
    Parms.InVisible = (uint8_t)InVisible;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAllAIInFront()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAllAIInFront");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSetAbilityDebugLogLevel(int32_t NewAbilityDebugLogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSetAbilityDebugLogLevel");
    struct
    {
        int32_t NewAbilityDebugLogLevel;
    } Parms{};
    Parms.NewAbilityDebugLogLevel = (int32_t)NewAbilityDebugLogLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerWaterUpRest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerWaterUpRest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerWaterUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerWaterUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerUseSKUBrick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerUseSKUBrick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggleSOLTimeLineEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggleSOLTimeLineEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggleBattleFieldPlayerAudio(int32_t InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggleBattleFieldPlayerAudio");
    struct
    {
        int32_t InType;
    } Parms{};
    Parms.InType = (int32_t)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggerSOLTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggerSOLTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggerFirework()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggerFirework");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggerAShellSpawn(int32_t Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggerAShellSpawn");
    struct
    {
        int32_t Delay;
    } Parms{};
    Parms.Delay = (int32_t)Delay;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggerArenaEnd(int32_t InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggerArenaEnd");
    struct
    {
        int32_t InType;
    } Parms{};
    Parms.InType = (int32_t)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTriggerAllPlayerToEscape()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTriggerAllPlayerToEscape");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerToggleTrainSOL(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerToggleTrainSOL");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerToggleObserverMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerToggleObserverMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTestFindPath(struct FVector Start, struct FVector End, float LiftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTestFindPath");
    struct
    {
        struct FVector Start;
        struct FVector End;
        float LiftTime;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.LiftTime = (float)LiftTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTestAISpawnRate(int32_t Count, int32_t TagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTestAISpawnRate");
    struct
    {
        int32_t Count;
        int32_t TagId;
    } Parms{};
    Parms.Count = (int32_t)Count;
    Parms.TagId = (int32_t)TagId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerTeelMeLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerTeelMeLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerStartSchemeAI(int32_t PlayerSchemeId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerStartSchemeAI");
    struct
    {
        int32_t PlayerSchemeId;
    } Parms{};
    Parms.PlayerSchemeId = (int32_t)PlayerSchemeId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnVehicle(struct FString VehicleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnVehicle");
    struct
    {
        struct FString VehicleName;
    } Parms{};
    Parms.VehicleName = (struct FString)VehicleName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnTotalVehicles(float dist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnTotalVehicles");
    struct
    {
        float dist;
    } Parms{};
    Parms.dist = (float)dist;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnSmokeActor(int32_t SmokeId, struct FVector Location, struct FRotator Rotation, struct AGPCharacter* CharacterOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnSmokeActor");
    struct
    {
        int32_t SmokeId;
        struct FVector Location;
        struct FRotator Rotation;
        struct AGPCharacter* CharacterOwner;
    } Parms{};
    Parms.SmokeId = (int32_t)SmokeId;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.CharacterOwner = (struct AGPCharacter*)CharacterOwner;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnProfileVehicles(float dist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnProfileVehicles");
    struct
    {
        float dist;
    } Parms{};
    Parms.dist = (float)dist;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnPlunderContract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnPlunderContract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnItem(uint32_t CharacterID, int64_t ItemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnItem");
    struct
    {
        uint32_t CharacterID;
        int64_t ItemID;
        int32_t Num;
    } Parms{};
    Parms.CharacterID = (uint32_t)CharacterID;
    Parms.ItemID = (int64_t)ItemID;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnInLocation(struct FString AIName, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnInLocation");
    struct
    {
        struct FString AIName;
        struct FVector Location;
    } Parms{};
    Parms.AIName = (struct FString)AIName;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnDFMCharacterInLocation(struct FString CharacterID, struct FString BagId, struct FString ChestId, struct FString VestID, struct FString WeaponID1, struct FString WeaponID2, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnDFMCharacterInLocation");
    struct
    {
        struct FString CharacterID;
        struct FString BagId;
        struct FString ChestId;
        struct FString VestID;
        struct FString WeaponID1;
        struct FString WeaponID2;
        struct FVector Location;
    } Parms{};
    Parms.CharacterID = (struct FString)CharacterID;
    Parms.BagId = (struct FString)BagId;
    Parms.ChestId = (struct FString)ChestId;
    Parms.VestID = (struct FString)VestID;
    Parms.WeaponID1 = (struct FString)WeaponID1;
    Parms.WeaponID2 = (struct FString)WeaponID2;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnBot(struct FString BotName, struct FString Args, uint8_t TPToStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnBot");
    struct
    {
        struct FString BotName;
        struct FString Args;
        uint8_t TPToStart;
    } Parms{};
    Parms.BotName = (struct FString)BotName;
    Parms.Args = (struct FString)Args;
    Parms.TPToStart = (uint8_t)TPToStart;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSpawnBossSquad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSpawnBossSquad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSimulateOpenBox(int32_t Times)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSimulateOpenBox");
    struct
    {
        int32_t Times;
    } Parms{};
    Parms.Times = (int32_t)Times;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSimulateCollectionDataEvent(int64_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSimulateCollectionDataEvent");
    struct
    {
        int64_t Type;
    } Parms{};
    Parms.Type = (int64_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSettlement(uint8_t MatchOverReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSettlement");
    struct
    {
        uint8_t MatchOverReason;
    } Parms{};
    Parms.MatchOverReason = (uint8_t)MatchOverReason;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetStamina(float StaminaValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetStamina");
    struct
    {
        float StaminaValue;
    } Parms{};
    Parms.StaminaValue = (float)StaminaValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLTimelineConfig(uint8_t Enable, int32_t Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLTimelineConfig");
    struct
    {
        uint8_t Enable;
        int32_t Interval;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.Interval = (int32_t)Interval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLShellingConfig(uint8_t Enable, int32_t AreaNumLimit, int32_t ShellNumPerZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLShellingConfig");
    struct
    {
        uint8_t Enable;
        int32_t AreaNumLimit;
        int32_t ShellNumPerZone;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.AreaNumLimit = (int32_t)AreaNumLimit;
    Parms.ShellNumPerZone = (int32_t)ShellNumPerZone;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLParatrooperRealNumLimit(int32_t TotalNum, int32_t NumPerZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLParatrooperRealNumLimit");
    struct
    {
        int32_t TotalNum;
        int32_t NumPerZone;
    } Parms{};
    Parms.TotalNum = (int32_t)TotalNum;
    Parms.NumPerZone = (int32_t)NumPerZone;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLParatrooperFakeNumLimit(int32_t TotalNum, int32_t NumPerZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLParatrooperFakeNumLimit");
    struct
    {
        int32_t TotalNum;
        int32_t NumPerZone;
    } Parms{};
    Parms.TotalNum = (int32_t)TotalNum;
    Parms.NumPerZone = (int32_t)NumPerZone;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLParatrooperEnable(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLParatrooperEnable");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLIntroEventState(struct FString EventIdsStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLIntroEventState");
    struct
    {
        struct FString EventIdsStr;
    } Parms{};
    Parms.EventIdsStr = (struct FString)EventIdsStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSOLHolidayEventIdArray(struct FString HolidayEventIdsStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSOLHolidayEventIdArray");
    struct
    {
        struct FString HolidayEventIdsStr;
    } Parms{};
    Parms.HolidayEventIdsStr = (struct FString)HolidayEventIdsStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetServerCVarInt(struct FString CVarName, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetServerCVarInt");
    struct
    {
        struct FString CVarName;
        int32_t Value;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetSafeBoxSkinID(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetSafeBoxSkinID");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetReplicationVolumeEnableGlobal(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetReplicationVolumeEnableGlobal");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetReplicationVolumeEnableConnection(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetReplicationVolumeEnableConnection");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetRecycleTime(int32_t InRecycleTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetRecycleTime");
    struct
    {
        int32_t InRecycleTime;
    } Parms{};
    Parms.InRecycleTime = (int32_t)InRecycleTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetMatchTime(int32_t MatchTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetMatchTime");
    struct
    {
        int32_t MatchTime;
    } Parms{};
    Parms.MatchTime = (int32_t)MatchTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetMapLevel(int32_t MapLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetMapLevel");
    struct
    {
        int32_t MapLevel;
    } Parms{};
    Parms.MapLevel = (int32_t)MapLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetGameAIDifficultyStatic(struct UObject* Context, int32_t AILevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPlayerGMComponent", "GMServerSetGameAIDifficultyStatic");
    struct
    {
        struct UObject* Context;
        int32_t AILevel;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.AILevel = (int32_t)AILevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetGameAIDifficulty(int32_t AILevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetGameAIDifficulty");
    struct
    {
        int32_t AILevel;
    } Parms{};
    Parms.AILevel = (int32_t)AILevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetFingerprint(int32_t ConfigId, int32_t Difficulty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetFingerprint");
    struct
    {
        int32_t ConfigId;
        int32_t Difficulty;
    } Parms{};
    Parms.ConfigId = (int32_t)ConfigId;
    Parms.Difficulty = (int32_t)Difficulty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetDecipherTime(int32_t InDecipherTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetDecipherTime");
    struct
    {
        int32_t InDecipherTime;
    } Parms{};
    Parms.InDecipherTime = (int32_t)InDecipherTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetDeadBoxType(int32_t DeadBoxType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetDeadBoxType");
    struct
    {
        int32_t DeadBoxType;
    } Parms{};
    Parms.DeadBoxType = (int32_t)DeadBoxType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetCloseAIHint(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetCloseAIHint");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetBoxMeshType(int32_t MeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetBoxMeshType");
    struct
    {
        int32_t MeshType;
    } Parms{};
    Parms.MeshType = (int32_t)MeshType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerSetAllVehicleCloaking(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerSetAllVehicleCloaking");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerRunPilotVoxelization(float boxX, float boxY, float boxZ, float BigBoxSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerRunPilotVoxelization");
    struct
    {
        float boxX;
        float boxY;
        float boxZ;
        float BigBoxSize;
    } Parms{};
    Parms.boxX = (float)boxX;
    Parms.boxY = (float)boxY;
    Parms.boxZ = (float)boxZ;
    Parms.BigBoxSize = (float)BigBoxSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerRotateCurrentDriveVehicle(float Roll, float Pitch, float Yaw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerRotateCurrentDriveVehicle");
    struct
    {
        float Roll;
        float Pitch;
        float Yaw;
    } Parms{};
    Parms.Roll = (float)Roll;
    Parms.Pitch = (float)Pitch;
    Parms.Yaw = (float)Yaw;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerRestartAISpawners()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerRestartAISpawners");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerResetExitTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerResetExitTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerResetAISpawnTemplate(struct FString TemplateName, int32_t ActivityId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerResetAISpawnTemplate");
    struct
    {
        struct FString TemplateName;
        int32_t ActivityId;
    } Parms{};
    Parms.TemplateName = (struct FString)TemplateName;
    Parms.ActivityId = (int32_t)ActivityId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerRemoveQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerRemoveQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerRefreshGenerator(int32_t SpawnID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerRefreshGenerator");
    struct
    {
        int32_t SpawnID;
    } Parms{};
    Parms.SpawnID = (int32_t)SpawnID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerReducePlayerExitEscapeCount(int32_t ReduceEscapeCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerReducePlayerExitEscapeCount");
    struct
    {
        int32_t ReduceEscapeCount;
    } Parms{};
    Parms.ReduceEscapeCount = (int32_t)ReduceEscapeCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerReducePlayerExitCountDownTime(float ReduceCountDownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerReducePlayerExitCountDownTime");
    struct
    {
        float ReduceCountDownTime;
    } Parms{};
    Parms.ReduceCountDownTime = (float)ReduceCountDownTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerRangeScan(float Dis, float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerRangeScan");
    struct
    {
        float Dis;
        float Angle;
    } Parms{};
    Parms.Dis = (float)Dis;
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerPrintWorldActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerPrintWorldActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerPlayCutScene(struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerPlayCutScene");
    struct
    {
        struct FName Tag;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerOpenAllDoor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerOpenAllDoor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerMPResetDifficultPool(struct FString StrDifficulty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerMPResetDifficultPool");
    struct
    {
        struct FString StrDifficulty;
    } Parms{};
    Parms.StrDifficulty = (struct FString)StrDifficulty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerMPResetDifficultName(struct FString StrDifficulty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerMPResetDifficultName");
    struct
    {
        struct FString StrDifficulty;
    } Parms{};
    Parms.StrDifficulty = (struct FString)StrDifficulty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerMPFulfullAI(int32_t MaxCountPerSide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerMPFulfullAI");
    struct
    {
        int32_t MaxCountPerSide;
    } Parms{};
    Parms.MaxCountPerSide = (int32_t)MaxCountPerSide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerMPFRemoveAllAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerMPFRemoveAllAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerMPAiFunc(struct FString Name, float Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerMPAiFunc");
    struct
    {
        struct FString Name;
        float Val;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Val = (float)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerKillAINotRomytheus(float diatance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerKillAINotRomytheus");
    struct
    {
        float diatance;
    } Parms{};
    Parms.diatance = (float)diatance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerKillAI(float diatance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerKillAI");
    struct
    {
        float diatance;
    } Parms{};
    Parms.diatance = (float)diatance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerHackSOLTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerHackSOLTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerGMSetAllAIInFront()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerGMSetAllAIInFront");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerGetOverLoadEquipment(int32_t OverLoadType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerGetOverLoadEquipment");
    struct
    {
        int32_t OverLoadType;
    } Parms{};
    Parms.OverLoadType = (int32_t)OverLoadType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerGetAiDifficultyInfo(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerGetAiDifficultyInfo");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerForceSOLMajorEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerForceSOLMajorEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerForceSOLEvacuationEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerForceSOLEvacuationEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerForceMoveVehicle(struct TArray<struct AActor*> TargetVehicleArray, float XOffset, float YOffset, float ZOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerForceMoveVehicle");
    struct
    {
        struct TArray<struct AActor*> TargetVehicleArray;
        float XOffset;
        float YOffset;
        float ZOffset;
    } Parms{};
    Parms.TargetVehicleArray = (struct TArray<struct AActor*>)TargetVehicleArray;
    Parms.XOffset = (float)XOffset;
    Parms.YOffset = (float)YOffset;
    Parms.ZOffset = (float)ZOffset;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerForceFireCrackerRankId(int32_t RankId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerForceFireCrackerRankId");
    struct
    {
        int32_t RankId;
    } Parms{};
    Parms.RankId = (int32_t)RankId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerForceCountDownTriggerRealTime(int32_t TriggerId, struct FString RealTriggerTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerForceCountDownTriggerRealTime");
    struct
    {
        int32_t TriggerId;
        struct FString RealTriggerTime;
    } Parms{};
    Parms.TriggerId = (int32_t)TriggerId;
    Parms.RealTriggerTime = (struct FString)RealTriggerTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerFinishQuest(int64_t QuestID, int64_t QuestObjectId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerFinishQuest");
    struct
    {
        int64_t QuestID;
        int64_t QuestObjectId;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    Parms.QuestObjectId = (int64_t)QuestObjectId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerExportPxScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerExportPxScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerExitJailBreak(struct AGPPlayerState* GPPlayerState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerExitJailBreak");
    struct
    {
        struct AGPPlayerState* GPPlayerState;
    } Parms{};
    Parms.GPPlayerState = (struct AGPPlayerState*)GPPlayerState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDropAllBagItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDropAllBagItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDPVSForceVisible(int32_t Mode, float DistParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDPVSForceVisible");
    struct
    {
        int32_t Mode;
        float DistParam;
    } Parms{};
    Parms.Mode = (int32_t)Mode;
    Parms.DistParam = (float)DistParam;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDisposalBombs(int32_t InCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDisposalBombs");
    struct
    {
        int32_t InCount;
    } Parms{};
    Parms.InCount = (int32_t)InCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDisableAllDoorBySpecies(uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDisableAllDoorBySpecies");
    struct
    {
        uint8_t bDisable;
    } Parms{};
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDetectRangeInfo(int32_t State, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDetectRangeInfo");
    struct
    {
        int32_t State;
        float radius;
    } Parms{};
    Parms.State = (int32_t)State;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDestroyCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDestroyCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDesSingleItemBreak(struct FString ObjectPath, int32_t AttackerValueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDesSingleItemBreak");
    struct
    {
        struct FString ObjectPath;
        int32_t AttackerValueId;
    } Parms{};
    Parms.ObjectPath = (struct FString)ObjectPath;
    Parms.AttackerValueId = (int32_t)AttackerValueId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDesRemoveCraterMeshes(struct FName SectorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDesRemoveCraterMeshes");
    struct
    {
        struct FName SectorID;
    } Parms{};
    Parms.SectorID = (struct FName)SectorID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerDesAddBreakableItem(struct FString ObjectPath, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerDesAddBreakableItem");
    struct
    {
        struct FString ObjectPath;
        struct FVector Location;
    } Parms{};
    Parms.ObjectPath = (struct FString)ObjectPath;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerCommand(struct FString Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerCommand");
    struct
    {
        struct FString Cmd;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerCloseVehicleCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerCloseVehicleCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerChangeTODType(int64_t WeatherID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerChangeTODType");
    struct
    {
        int64_t WeatherID;
    } Parms{};
    Parms.WeatherID = (int64_t)WeatherID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerChangeLaserEmitterConfig(uint8_t bEnableLaserAtStart, uint8_t bDisablePermanentLaserWhenNoPlayer, uint8_t bEnableServerActiveLaserPSC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerChangeLaserEmitterConfig");
    struct
    {
        uint8_t bEnableLaserAtStart;
        uint8_t bDisablePermanentLaserWhenNoPlayer;
        uint8_t bEnableServerActiveLaserPSC;
    } Parms{};
    Parms.bEnableLaserAtStart = (uint8_t)bEnableLaserAtStart;
    Parms.bDisablePermanentLaserWhenNoPlayer = (uint8_t)bDisablePermanentLaserWhenNoPlayer;
    Parms.bEnableServerActiveLaserPSC = (uint8_t)bEnableServerActiveLaserPSC;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerCancelNewContractQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerCancelNewContractQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBreakableRecoveryAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBreakableRecoveryAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBreakableItemSetHugeDamage(uint8_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBreakableItemSetHugeDamage");
    struct
    {
        uint8_t IsOpen;
    } Parms{};
    Parms.IsOpen = (uint8_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBreakableBreakAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBreakableBreakAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBPDisableDelay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBPDisableDelay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBattleFieldEndMatchCamp(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBattleFieldEndMatchCamp");
    struct
    {
        int32_t Camp;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBattleFieldEndMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBattleFieldEndMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBattleFieldCampScoreTrigger(int32_t Camp, int32_t Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBattleFieldCampScoreTrigger");
    struct
    {
        int32_t Camp;
        int32_t Score;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    Parms.Score = (int32_t)Score;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerBanNearestPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerBanNearestPlayer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAiTestFunc(struct FString Name, struct FString Param, float Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAiTestFunc");
    struct
    {
        struct FString Name;
        struct FString Param;
        float Val;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Param = (struct FString)Param;
    Parms.Val = (float)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAirDrop(int32_t GroupID, int32_t AirDropIndex, int32_t TimeStart, int32_t TimeEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAirDrop");
    struct
    {
        int32_t GroupID;
        int32_t AirDropIndex;
        int32_t TimeStart;
        int32_t TimeEnd;
    } Parms{};
    Parms.GroupID = (int32_t)GroupID;
    Parms.AirDropIndex = (int32_t)AirDropIndex;
    Parms.TimeStart = (int32_t)TimeStart;
    Parms.TimeEnd = (int32_t)TimeEnd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAiClosestSpeak(int32_t SpeakId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAiClosestSpeak");
    struct
    {
        int32_t SpeakId;
    } Parms{};
    Parms.SpeakId = (int32_t)SpeakId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAIClosestPlayMusic(struct FName Music)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAIClosestPlayMusic");
    struct
    {
        struct FName Music;
    } Parms{};
    Parms.Music = (struct FName)Music;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAiClosestGroupVoice(struct FName Voice)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAiClosestGroupVoice");
    struct
    {
        struct FName Voice;
    } Parms{};
    Parms.Voice = (struct FName)Voice;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAddPlayerObjectionForTestMPQuestShow(int64_t TaskID, int64_t ID, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAddPlayerObjectionForTestMPQuestShow");
    struct
    {
        int64_t TaskID;
        int64_t ID;
        int32_t Value;
    } Parms{};
    Parms.TaskID = (int64_t)TaskID;
    Parms.ID = (int64_t)ID;
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAddHelicopterRange(int32_t IconIndex, float Range, uint8_t Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAddHelicopterRange");
    struct
    {
        int32_t IconIndex;
        float Range;
        uint8_t Active;
    } Parms{};
    Parms.IconIndex = (int32_t)IconIndex;
    Parms.Range = (float)Range;
    Parms.Active = (uint8_t)Active;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAddDynamicLevelGroup(struct FName GroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAddDynamicLevelGroup");
    struct
    {
        struct FName GroupID;
    } Parms{};
    Parms.GroupID = (struct FName)GroupID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAddAI2LocalTeam(int32_t LocalCampID, int32_t LocalTeamID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAddAI2LocalTeam");
    struct
    {
        int32_t LocalCampID;
        int32_t LocalTeamID;
    } Parms{};
    Parms.LocalCampID = (int32_t)LocalCampID;
    Parms.LocalTeamID = (int32_t)LocalTeamID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerActiveFireCrackerEmitterGroup(struct FString EmitterGroupIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerActiveFireCrackerEmitterGroup");
    struct
    {
        struct FString EmitterGroupIds;
    } Parms{};
    Parms.EmitterGroupIds = (struct FString)EmitterGroupIds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAcceptNewQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAcceptNewQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMServerAcceptNewContractQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMServerAcceptNewContractQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSendHongBao(uint64_t ReceiverPlayerId, uint64_t ItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSendHongBao");
    struct
    {
        uint64_t ReceiverPlayerId;
        uint64_t ItemGid;
    } Parms{};
    Parms.ReceiverPlayerId = (uint64_t)ReceiverPlayerId;
    Parms.ItemGid = (uint64_t)ItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSendEvent_Server(int32_t ModeId, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSendEvent_Server");
    struct
    {
        int32_t ModeId;
        struct FString Tag;
    } Parms{};
    Parms.ModeId = (int32_t)ModeId;
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMSendEvent(int32_t ModeId, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMSendEvent");
    struct
    {
        int32_t ModeId;
        struct FString Tag;
    } Parms{};
    Parms.ModeId = (int32_t)ModeId;
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRunPilotVoxelizationClientShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRunPilotVoxelizationClientShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRotateCurrentDriveVehicle(float Roll, float Pitch, float Yaw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRotateCurrentDriveVehicle");
    struct
    {
        float Roll;
        float Pitch;
        float Yaw;
    } Parms{};
    Parms.Roll = (float)Roll;
    Parms.Pitch = (float)Pitch;
    Parms.Yaw = (float)Yaw;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRestartAISpawners()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRestartAISpawners");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetTriggerExitByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetTriggerExitByIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetRemoterCharacterAKFootSoundAttenuationScalar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetRemoterCharacterAKFootSoundAttenuationScalar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetPlayerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetPlayerState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetHUD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetHUD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetExitTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetExitTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetAllRemoterCharacterAKAttenuationScalar(EGPAudioBlueprintType AudioBlueprintType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetAllRemoterCharacterAKAttenuationScalar");
    struct
    {
        enum EGPAudioBlueprintType AudioBlueprintType;
    } Parms{};
    Parms.AudioBlueprintType = (enum EGPAudioBlueprintType)AudioBlueprintType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetAllAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetAllAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMResetAISpawnTemplate(struct FString TemplateName, int32_t ActivityId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMResetAISpawnTemplate");
    struct
    {
        struct FString TemplateName;
        int32_t ActivityId;
    } Parms{};
    Parms.TemplateName = (struct FString)TemplateName;
    Parms.ActivityId = (int32_t)ActivityId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmRequestWeaponContexts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmRequestWeaponContexts");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRequestSubtitleSequence(const struct FName& SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRequestSubtitleSequence");
    struct
    {
        struct FName SubtitleSeqId;
        enum ESubtitleSequenceType SubtitleSeqType;
    } Parms{};
    Parms.SubtitleSeqId = (struct FName)SubtitleSeqId;
    Parms.SubtitleSeqType = (enum ESubtitleSequenceType)SubtitleSeqType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRequestPrintWeaponInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRequestPrintWeaponInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRequestNewWorldOrigin(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRequestNewWorldOrigin");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRequestLootingBoxUnlock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRequestLootingBoxUnlock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMReplayForceExit2Login()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMReplayForceExit2Login");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRemoveQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRemoveQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRemoveHudState(uint8_t InHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRemoveHudState");
    struct
    {
        uint8_t InHudState;
    } Parms{};
    Parms.InHudState = (uint8_t)InHudState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRemoveDropLogicBuff(uint32_t InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRemoveDropLogicBuff");
    struct
    {
        uint32_t InKey;
    } Parms{};
    Parms.InKey = (uint32_t)InKey;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRemoveBagAmmo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRemoveBagAmmo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRefreshGenerator(int32_t SpawnID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRefreshGenerator");
    struct
    {
        int32_t SpawnID;
    } Parms{};
    Parms.SpawnID = (int32_t)SpawnID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMReducePlayerExitEscapeCount(int32_t ReduceEscapeCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMReducePlayerExitEscapeCount");
    struct
    {
        int32_t ReduceEscapeCount;
    } Parms{};
    Parms.ReduceEscapeCount = (int32_t)ReduceEscapeCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMReducePlayerExitCountDownTime(float ReduceCountDownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMReducePlayerExitCountDownTime");
    struct
    {
        float ReduceCountDownTime;
    } Parms{};
    Parms.ReduceCountDownTime = (float)ReduceCountDownTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMRedBagAnimJumpToEndByItemGid(uint64_t InItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMRedBagAnimJumpToEndByItemGid");
    struct
    {
        uint64_t InItemGid;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMQuestJumpObjective(int32_t objectiveId, int32_t InstIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMQuestJumpObjective");
    struct
    {
        int32_t objectiveId;
        int32_t InstIndex;
    } Parms{};
    Parms.objectiveId = (int32_t)objectiveId;
    Parms.InstIndex = (int32_t)InstIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPseudoSeamlessEntryStart(struct FString MapName, int32_t TeamStartId, int32_t extra)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPseudoSeamlessEntryStart");
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

void UDFMPlayerGMComponent::GMPrintWeaponStateHistory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPrintWeaponStateHistory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPrintInteractOutlineLaziedInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPrintInteractOutlineLaziedInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPrintEnums(struct FString EnumName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPrintEnums");
    struct
    {
        struct FString EnumName;
    } Parms{};
    Parms.EnumName = (struct FString)EnumName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPlayMontage(struct FString AnimPath, struct FString AnimationPlayTypes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPlayMontage");
    struct
    {
        struct FString AnimPath;
        struct FString AnimationPlayTypes;
    } Parms{};
    Parms.AnimPath = (struct FString)AnimPath;
    Parms.AnimationPlayTypes = (struct FString)AnimationPlayTypes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPlayHitEffect(int32_t EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPlayHitEffect");
    struct
    {
        int32_t EventType;
    } Parms{};
    Parms.EventType = (int32_t)EventType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPlayFootstepOnEscapedChar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPlayFootstepOnEscapedChar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPlayCutScene(struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPlayCutScene");
    struct
    {
        struct FName Tag;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPlayCurrentExitCutScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPlayCurrentExitCutScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPlayCameraHitEffect(int64_t FinalBeHitCameraMoveId, float DamageVale, float animTime, float CameraMoveScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPlayCameraHitEffect");
    struct
    {
        int64_t FinalBeHitCameraMoveId;
        float DamageVale;
        float animTime;
        float CameraMoveScale;
    } Parms{};
    Parms.FinalBeHitCameraMoveId = (int64_t)FinalBeHitCameraMoveId;
    Parms.DamageVale = (float)DamageVale;
    Parms.animTime = (float)animTime;
    Parms.CameraMoveScale = (float)CameraMoveScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPerspective(uint8_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPerspective");
    struct
    {
        uint8_t IsOpen;
    } Parms{};
    Parms.IsOpen = (uint8_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPCTestClientBreakableRecoveryAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPCTestClientBreakableRecoveryAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMPause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenOptOnFirstRenderedDetailLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenOptOnFirstRenderedDetailLog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenLoadAniOnCommandDetailLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenLoadAniOnCommandDetailLog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenInteractSystemDetailLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenInteractSystemDetailLog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenInteractComponentTick(uint8_t InbOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenInteractComponentTick");
    struct
    {
        uint8_t InbOpen;
    } Parms{};
    Parms.InbOpen = (uint8_t)InbOpen;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenDSInteractSystemDetailLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenDSInteractSystemDetailLog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenAssaKillShowEffectInEnd(uint8_t InEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenAssaKillShowEffectInEnd");
    struct
    {
        uint8_t InEnd;
    } Parms{};
    Parms.InEnd = (uint8_t)InEnd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenAllDoor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenAllDoor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOpenAILabDebugPanel(int32_t Mode, int64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOpenAILabDebugPanel");
    struct
    {
        int32_t Mode;
        int64_t Uin;
    } Parms{};
    Parms.Mode = (int32_t)Mode;
    Parms.Uin = (int64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMOnServerTeamInfoSetPlayerGamePlayState(struct ADFMPlayerState* InPlayerState, int32_t InPlayerGamePlayState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMOnServerTeamInfoSetPlayerGamePlayState");
    struct
    {
        struct ADFMPlayerState* InPlayerState;
        int32_t InPlayerGamePlayState;
    } Parms{};
    Parms.InPlayerState = (struct ADFMPlayerState*)InPlayerState;
    Parms.InPlayerGamePlayState = (int32_t)InPlayerGamePlayState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMNotAllowFourFingersConsole()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMNotAllowFourFingersConsole");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMPResetDifficultPool(struct FString StrDifficulty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMPResetDifficultPool");
    struct
    {
        struct FString StrDifficulty;
    } Parms{};
    Parms.StrDifficulty = (struct FString)StrDifficulty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMPResetDifficultName(struct FString StrDifficulty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMPResetDifficultName");
    struct
    {
        struct FString StrDifficulty;
    } Parms{};
    Parms.StrDifficulty = (struct FString)StrDifficulty;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMPRemoveAllAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMPRemoveAllAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMPInGameUpgradeTest(int32_t InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMPInGameUpgradeTest");
    struct
    {
        int32_t InType;
    } Parms{};
    Parms.InType = (int32_t)InType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMPFulfillAI(int32_t MaxCountPerSide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMPFulfillAI");
    struct
    {
        int32_t MaxCountPerSide;
    } Parms{};
    Parms.MaxCountPerSide = (int32_t)MaxCountPerSide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMPAiFunc(struct FString Name, float Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMPAiFunc");
    struct
    {
        struct FString Name;
        float Val;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Val = (float)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMoveStuckTestInfo(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMoveStuckTestInfo");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMModifySkillCD(int32_t Index, float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMModifySkillCD");
    struct
    {
        int32_t Index;
        float Speed;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Speed = (float)Speed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMModifyAmmoToCurrent(int32_t Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMModifyAmmoToCurrent");
    struct
    {
        int32_t Val;
    } Parms{};
    Parms.Val = (int32_t)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMModifyAmmoToAll(int32_t Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMModifyAmmoToAll");
    struct
    {
        int32_t Val;
    } Parms{};
    Parms.Val = (int32_t)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMissionRewards(int64_t InventoryId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMissionRewards");
    struct
    {
        int64_t InventoryId;
    } Parms{};
    Parms.InventoryId = (int64_t)InventoryId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMissionInitServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMissionInitServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMissionInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMissionInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMiniMapIndicate(int32_t NewType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMiniMapIndicate");
    struct
    {
        int32_t NewType;
    } Parms{};
    Parms.NewType = (int32_t)NewType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMemReportWeapon(struct FString Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMemReportWeapon");
    struct
    {
        struct FString Cmd;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMarkerDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMarkerDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMallocMemory(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMallocMemory");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMMakeAllIntoAILabAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMMakeAllIntoAILabAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLockCamToWeapon2(int32_t bEnable, float Pitch, float Yaw, float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLockCamToWeapon2");
    struct
    {
        int32_t bEnable;
        float Pitch;
        float Yaw;
        float Scale;
    } Parms{};
    Parms.bEnable = (int32_t)bEnable;
    Parms.Pitch = (float)Pitch;
    Parms.Yaw = (float)Yaw;
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLockCamToWeapon(int32_t bEnable, uint8_t bLeft)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLockCamToWeapon");
    struct
    {
        int32_t bEnable;
        uint8_t bLeft;
    } Parms{};
    Parms.bEnable = (int32_t)bEnable;
    Parms.bLeft = (uint8_t)bLeft;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLocalCloseGlitch(uint8_t bClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLocalCloseGlitch");
    struct
    {
        uint8_t bClose;
    } Parms{};
    Parms.bClose = (uint8_t)bClose;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLocalAcceptMission(int32_t missionid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLocalAcceptMission");
    struct
    {
        int32_t missionid;
    } Parms{};
    Parms.missionid = (int32_t)missionid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLoadQuest(int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLoadQuest");
    struct
    {
        int32_t QuestID;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLineTraceWater(float Distance, uint8_t bOnDS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLineTraceWater");
    struct
    {
        float Distance;
        uint8_t bOnDS;
    } Parms{};
    Parms.Distance = (float)Distance;
    Parms.bOnDS = (uint8_t)bOnDS;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLeftWeaponStartFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLeftWeaponStartFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLeftWeaponEndFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLeftWeaponEndFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMLandingTest(struct FVector2D LeftUp, struct FVector2D RightUp, struct FVector2D LeftDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMLandingTest");
    struct
    {
        struct FVector2D LeftUp;
        struct FVector2D RightUp;
        struct FVector2D LeftDown;
    } Parms{};
    Parms.LeftUp = (struct FVector2D)LeftUp;
    Parms.RightUp = (struct FVector2D)RightUp;
    Parms.LeftDown = (struct FVector2D)LeftDown;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKnowBack(struct FVector LocalPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKnowBack");
    struct
    {
        struct FVector LocalPos;
    } Parms{};
    Parms.LocalPos = (struct FVector)LocalPos;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKillMeNoImPendingDeath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKillMeNoImPendingDeath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKillMe()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKillMe");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKillAllJetForTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKillAllJetForTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKillAINotRomytheus(float diatance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKillAINotRomytheus");
    struct
    {
        float diatance;
    } Parms{};
    Parms.diatance = (float)diatance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKillAI(float diatance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKillAI");
    struct
    {
        float diatance;
    } Parms{};
    Parms.diatance = (float)diatance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKeepAllRemoterCharacterAKFootSoundAttenuationScalar(EGPAudioFootSoundType FootSoundType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKeepAllRemoterCharacterAKFootSoundAttenuationScalar");
    struct
    {
        enum EGPAudioFootSoundType FootSoundType;
    } Parms{};
    Parms.FootSoundType = (enum EGPAudioFootSoundType)FootSoundType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMKeepAllRemoterCharacterAKAttenuationScalarAliving(EGPAudioBlueprintType AudioBlueprintType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMKeepAllRemoterCharacterAKAttenuationScalarAliving");
    struct
    {
        enum EGPAudioBlueprintType AudioBlueprintType;
    } Parms{};
    Parms.AudioBlueprintType = (enum EGPAudioBlueprintType)AudioBlueprintType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMJPSTrace(float Sx, float Sy, float Sz, float Ex, float Ey, float Ez)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMJPSTrace");
    struct
    {
        float Sx;
        float Sy;
        float Sz;
        float Ex;
        float Ey;
        float Ez;
    } Parms{};
    Parms.Sx = (float)Sx;
    Parms.Sy = (float)Sy;
    Parms.Sz = (float)Sz;
    Parms.Ex = (float)Ex;
    Parms.Ey = (float)Ey;
    Parms.Ez = (float)Ez;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHurtMeBodyPart(int32_t bodyPart, int32_t HurtHealthNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHurtMeBodyPart");
    struct
    {
        int32_t bodyPart;
        int32_t HurtHealthNum;
    } Parms{};
    Parms.bodyPart = (int32_t)bodyPart;
    Parms.HurtHealthNum = (int32_t)HurtHealthNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHUDForceShowRescueWhiteDot(uint8_t InbShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHUDForceShowRescueWhiteDot");
    struct
    {
        uint8_t InbShow;
    } Parms{};
    Parms.InbShow = (uint8_t)InbShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHideSocket(struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHideSocket");
    struct
    {
        struct FName SocketName;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHideMySelfFromOthers(uint8_t bHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHideMySelfFromOthers");
    struct
    {
        uint8_t bHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHideMyself(uint8_t bHide, uint8_t bMuteWhenHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHideMyself");
    struct
    {
        uint8_t bHide;
        uint8_t bMuteWhenHide;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    Parms.bMuteWhenHide = (uint8_t)bMuteWhenHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHideMission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHideMission");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHasEnoughSpaceToAddAmmo(uint8_t bServer, uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHasEnoughSpaceToAddAmmo");
    struct
    {
        uint8_t bServer;
        uint64_t ItemID;
    } Parms{};
    Parms.bServer = (uint8_t)bServer;
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMHackSOLTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMHackSOLTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmGunSwayHit(float CameraSwayHitScale, float GunSwayHitScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmGunSwayHit");
    struct
    {
        float CameraSwayHitScale;
        float GunSwayHitScale;
    } Parms{};
    Parms.CameraSwayHitScale = (float)CameraSwayHitScale;
    Parms.GunSwayHitScale = (float)GunSwayHitScale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmGunSway(int32_t GSOperation, float DirX, float DirY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmGunSway");
    struct
    {
        int32_t GSOperation;
        float DirX;
        float DirY;
    } Parms{};
    Parms.GSOperation = (int32_t)GSOperation;
    Parms.DirX = (float)DirX;
    Parms.DirY = (float)DirY;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGuideUseFrontEndUI(int32_t UIType, int32_t Param1, int32_t Param2, int32_t param3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGuideUseFrontEndUI");
    struct
    {
        int32_t UIType;
        int32_t Param1;
        int32_t Param2;
        int32_t param3;
    } Parms{};
    Parms.UIType = (int32_t)UIType;
    Parms.Param1 = (int32_t)Param1;
    Parms.Param2 = (int32_t)Param2;
    Parms.param3 = (int32_t)param3;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGuideUseFrontEndClickUI(int32_t ClickId, int32_t ClickType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGuideUseFrontEndClickUI");
    struct
    {
        int32_t ClickId;
        int32_t ClickType;
    } Parms{};
    Parms.ClickId = (int32_t)ClickId;
    Parms.ClickType = (int32_t)ClickType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGuideStartOneStep(int32_t GuideStepId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGuideStartOneStep");
    struct
    {
        int32_t GuideStepId;
    } Parms{};
    Parms.GuideStepId = (int32_t)GuideStepId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGuideInGameTrigger(int32_t EventId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGuideInGameTrigger");
    struct
    {
        int32_t EventId;
    } Parms{};
    Parms.EventId = (int32_t)EventId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGuideCloseFrontEndUI(int32_t UIType, int32_t Param1, int32_t Param2, int32_t param3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGuideCloseFrontEndUI");
    struct
    {
        int32_t UIType;
        int32_t Param1;
        int32_t Param2;
        int32_t param3;
    } Parms{};
    Parms.UIType = (int32_t)UIType;
    Parms.Param1 = (int32_t)Param1;
    Parms.Param2 = (int32_t)Param2;
    Parms.param3 = (int32_t)param3;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGuideCloseFrontEndClickUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGuideCloseFrontEndClickUI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGoTrackingPickUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGoTrackingPickUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGotoObjective(int32_t obojectiveid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGotoObjective");
    struct
    {
        int32_t obojectiveid;
    } Parms{};
    Parms.obojectiveid = (int32_t)obojectiveid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGotoMissionObjective(int32_t missionid, int32_t obojectiveid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGotoMissionObjective");
    struct
    {
        int32_t missionid;
        int32_t obojectiveid;
    } Parms{};
    Parms.missionid = (int32_t)missionid;
    Parms.obojectiveid = (int32_t)obojectiveid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGotoMarkWithNavAdjust()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGotoMarkWithNavAdjust");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGotoMark()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGotoMark");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGoto2D(struct FVector2D Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGoto2D");
    struct
    {
        struct FVector2D Location;
    } Parms{};
    Parms.Location = (struct FVector2D)Location;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGoto(struct FVector Location, float Delay, uint8_t navAdjustPos, struct FRotator Dir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGoto");
    struct
    {
        struct FVector Location;
        float Delay;
        uint8_t navAdjustPos;
        struct FRotator Dir;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Delay = (float)Delay;
    Parms.navAdjustPos = (uint8_t)navAdjustPos;
    Parms.Dir = (struct FRotator)Dir;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGodDamage(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGodDamage");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmGiveWeaponFromStr(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmGiveWeaponFromStr");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGiveWeaponByDesc(struct UModularWeaponDesc* WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGiveWeaponByDesc");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGiveWeapon(uint64_t PresetId, struct TArray<uint64_t> Items)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGiveWeapon");
    struct
    {
        uint64_t PresetId;
        struct TArray<uint64_t> Items;
    } Parms{};
    Parms.PresetId = (uint64_t)PresetId;
    Parms.Items = (struct TArray<uint64_t>)Items;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGiveInfinityCarriedAmmoToCurrent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGiveInfinityCarriedAmmoToCurrent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGiveCurrency(float InValue, int64_t FakeQuestId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGiveCurrency");
    struct
    {
        float InValue;
        int64_t FakeQuestId;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.FakeQuestId = (int64_t)FakeQuestId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGetTrackingItemPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetTrackingItemPosition");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMPlayerGMComponent::GMGetSOLTimelineEventID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetSOLTimelineEventID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPlayerGMComponent::GMGetRedBagOnlyFromTeammate(uint8_t bOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetRedBagOnlyFromTeammate");
    struct
    {
        uint8_t bOnly;
    } Parms{};
    Parms.bOnly = (uint8_t)bOnly;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGetOverLoadEquipment(int32_t OverLoadType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetOverLoadEquipment");
    struct
    {
        int32_t OverLoadType;
    } Parms{};
    Parms.OverLoadType = (int32_t)OverLoadType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGetMoveStuckTestLocation(float X, float Y, float Z, int32_t Type, int32_t DataType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetMoveStuckTestLocation");
    struct
    {
        float X;
        float Y;
        float Z;
        int32_t Type;
        int32_t DataType;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    Parms.Type = (int32_t)Type;
    Parms.DataType = (int32_t)DataType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGetCurrentFirstWeaponItemID(uint8_t bServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetCurrentFirstWeaponItemID");
    struct
    {
        uint8_t bServer;
    } Parms{};
    Parms.bServer = (uint8_t)bServer;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGetCurAllCharacterAppearanceInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetCurAllCharacterAppearanceInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMGetAiDifficultyInfo(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMGetAiDifficultyInfo");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFxCleanupAcquiredPoolUnused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFxCleanupAcquiredPoolUnused");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceUseActorLocForDFMCharacter(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceUseActorLocForDFMCharacter");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceTriggerExitBanner(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceTriggerExitBanner");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceTeamDamage(uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceTeamDamage");
    struct
    {
        uint8_t bForce;
    } Parms{};
    Parms.bForce = (uint8_t)bForce;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceSOLMajorEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceSOLMajorEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceSOLEvacuationEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceSOLEvacuationEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceMoveVehicle(uint8_t bOnlyDrivenVehicle, float XOffset, float YOffset, float ZOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceMoveVehicle");
    struct
    {
        uint8_t bOnlyDrivenVehicle;
        float XOffset;
        float YOffset;
        float ZOffset;
    } Parms{};
    Parms.bOnlyDrivenVehicle = (uint8_t)bOnlyDrivenVehicle;
    Parms.XOffset = (float)XOffset;
    Parms.YOffset = (float)YOffset;
    Parms.ZOffset = (float)ZOffset;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceHideInteractorOutline(uint8_t InbHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceHideInteractorOutline");
    struct
    {
        uint8_t InbHide;
    } Parms{};
    Parms.InbHide = (uint8_t)InbHide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceFireCrackerRankId(int32_t RankId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceFireCrackerRankId");
    struct
    {
        int32_t RankId;
    } Parms{};
    Parms.RankId = (int32_t)RankId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceFinishMission(int32_t missionid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceFinishMission");
    struct
    {
        int32_t missionid;
    } Parms{};
    Parms.missionid = (int32_t)missionid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceCountDownTriggerRealTime(int32_t TriggerId, struct FString RealTriggerTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceCountDownTriggerRealTime");
    struct
    {
        int32_t TriggerId;
        struct FString RealTriggerTime;
    } Parms{};
    Parms.TriggerId = (int32_t)TriggerId;
    Parms.RealTriggerTime = (struct FString)RealTriggerTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceCheckGuideItem(uint8_t bForceCheckGuideItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceCheckGuideItem");
    struct
    {
        uint8_t bForceCheckGuideItem;
    } Parms{};
    Parms.bForceCheckGuideItem = (uint8_t)bForceCheckGuideItem;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceAllowRescue(uint8_t InbAllow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceAllowRescue");
    struct
    {
        uint8_t InbAllow;
    } Parms{};
    Parms.InbAllow = (uint8_t)InbAllow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceAllowDeadBody(uint8_t InbAllow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceAllowDeadBody");
    struct
    {
        uint8_t InbAllow;
    } Parms{};
    Parms.InbAllow = (uint8_t)InbAllow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMForceAllowCarryBody(uint8_t InbAllow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMForceAllowCarryBody");
    struct
    {
        uint8_t InbAllow;
    } Parms{};
    Parms.InbAllow = (uint8_t)InbAllow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFootballSignAnimJumpToEndByItemGid(uint64_t InItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFootballSignAnimJumpToEndByItemGid");
    struct
    {
        uint64_t InItemGid;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFootballSign(int64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFootballSign");
    struct
    {
        int64_t ItemID;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFootballGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFootballGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFocusParticleSystem(struct FName ParticleSystemName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFocusParticleSystem");
    struct
    {
        struct FName ParticleSystemName;
    } Parms{};
    Parms.ParticleSystemName = (struct FName)ParticleSystemName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFirePriorityNum(int32_t P0Num, int32_t P1Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFirePriorityNum");
    struct
    {
        int32_t P0Num;
        int32_t P1Num;
    } Parms{};
    Parms.P0Num = (int32_t)P0Num;
    Parms.P1Num = (int32_t)P1Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFireForAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFireForAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFinishQuest(int64_t QuestID, int64_t QuestObjectId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFinishQuest");
    struct
    {
        int64_t QuestID;
        int64_t QuestObjectId;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    Parms.QuestObjectId = (int64_t)QuestObjectId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMFinishCurrentStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMFinishCurrentStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMExportAllCharacterAppearanceInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMExportAllCharacterAppearanceInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMExplosionBeHitCamera(int32_t ExplosionID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMExplosionBeHitCamera");
    struct
    {
        int32_t ExplosionID;
    } Parms{};
    Parms.ExplosionID = (int32_t)ExplosionID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMExitJailBreak()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMExitJailBreak");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMExecuteConsoleCommandOnDS(struct FString Command)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMExecuteConsoleCommandOnDS");
    struct
    {
        struct FString Command;
    } Parms{};
    Parms.Command = (struct FString)Command;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEquipPerk(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEquipPerk");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEquipLeftWeapon(uint64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEquipLeftWeapon");
    struct
    {
        uint64_t WeaponID;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEquipHelmetNightVision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEquipHelmetNightVision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnterRaidWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnterRaidWorld");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnterOpenWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnterOpenWorld");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEndAssaShark()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEndAssaShark");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableXRayCheats(int32_t xMask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableXRayCheats");
    struct
    {
        int32_t xMask;
    } Parms{};
    Parms.xMask = (int32_t)xMask;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableWaterRouteVis(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableWaterRouteVis");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableTearOffAICharacterAfterDeath(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableTearOffAICharacterAfterDeath");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableSelfVehicleOverrideThrottle(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableSelfVehicleOverrideThrottle");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableMpSolMode(uint8_t RespawnSamePos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableMpSolMode");
    struct
    {
        uint8_t RespawnSamePos;
    } Parms{};
    Parms.RespawnSamePos = (uint8_t)RespawnSamePos;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableMissionReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableMissionReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableMission(uint8_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableMission");
    struct
    {
        uint8_t B;
    } Parms{};
    Parms.B = (uint8_t)B;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableInterceptItemByRemainNum(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableInterceptItemByRemainNum");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableFriendDamage(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableFriendDamage");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableDebugVehicleHealth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableDebugVehicleHealth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMEnableDebugAudioAttenuation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMEnableDebugAudioAttenuation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDumpHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDumpHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDumpAllWidgetInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDumpAllWidgetInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDSUseClientPosToCheckBlock(uint8_t InbUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDSUseClientPosToCheckBlock");
    struct
    {
        uint8_t InbUse;
    } Parms{};
    Parms.InbUse = (uint8_t)InbUse;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDSBanPlayer(uint64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDSBanPlayer");
    struct
    {
        uint64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDropAllBagItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDropAllBagItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDrawSphere(float X, float Y, float Z, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDrawSphere");
    struct
    {
        float X;
        float Y;
        float Z;
        float radius;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDrawCharacterMeshBounds(float Range, float Duration, int32_t MeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDrawCharacterMeshBounds");
    struct
    {
        float Range;
        float Duration;
        int32_t MeshType;
    } Parms{};
    Parms.Range = (float)Range;
    Parms.Duration = (float)Duration;
    Parms.MeshType = (int32_t)MeshType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDPVSForceVisible(int32_t Mode, float DistParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDPVSForceVisible");
    struct
    {
        int32_t Mode;
        float DistParam;
    } Parms{};
    Parms.Mode = (int32_t)Mode;
    Parms.DistParam = (float)DistParam;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDoScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDoScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDontDestroyFootballGateNoRep(uint8_t InDont)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDontDestroyFootballGateNoRep");
    struct
    {
        uint8_t InDont;
    } Parms{};
    Parms.InDont = (uint8_t)InDont;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDisposalBombs(int32_t InCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDisposalBombs");
    struct
    {
        int32_t InCount;
    } Parms{};
    Parms.InCount = (int32_t)InCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDisableInteractorCheckCollision(uint8_t InbDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDisableInteractorCheckCollision");
    struct
    {
        uint8_t InbDisable;
    } Parms{};
    Parms.InbDisable = (uint8_t)InbDisable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDisableDebugAudioAttenuation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDisableDebugAudioAttenuation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDisableAllDoorBySpecies(uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDisableAllDoorBySpecies");
    struct
    {
        uint8_t bDisable;
    } Parms{};
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDetoruTestFindCharacter(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDetoruTestFindCharacter");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDetoruTest(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDetoruTest");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDetoruFindPath(float ForwardDistance, int32_t Unit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDetoruFindPath");
    struct
    {
        float ForwardDistance;
        int32_t Unit;
    } Parms{};
    Parms.ForwardDistance = (float)ForwardDistance;
    Parms.Unit = (int32_t)Unit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDetectRangeInfo(int32_t State, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDetectRangeInfo");
    struct
    {
        int32_t State;
        float radius;
    } Parms{};
    Parms.State = (int32_t)State;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDestroyCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDestroyCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDesSingleItemBreak(struct FString ObjectPath, int32_t AttackerValueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDesSingleItemBreak");
    struct
    {
        struct FString ObjectPath;
        int32_t AttackerValueId;
    } Parms{};
    Parms.ObjectPath = (struct FString)ObjectPath;
    Parms.AttackerValueId = (int32_t)AttackerValueId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDesRemoveCraterMeshes(struct FName SectorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDesRemoveCraterMeshes");
    struct
    {
        struct FName SectorID;
    } Parms{};
    Parms.SectorID = (struct FName)SectorID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDesAddBreakableItem(struct FString ObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDesAddBreakableItem");
    struct
    {
        struct FString ObjectPath;
    } Parms{};
    Parms.ObjectPath = (struct FString)ObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDebugInfo(int32_t ShowType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDebugInfo");
    struct
    {
        int32_t ShowType;
    } Parms{};
    Parms.ShowType = (int32_t)ShowType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDebugAILabRot(int32_t Open)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDebugAILabRot");
    struct
    {
        int32_t Open;
    } Parms{};
    Parms.Open = (int32_t)Open;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMDamageView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMDamageView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCopyWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCopyWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMControlAILab(uint8_t Open, int64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMControlAILab");
    struct
    {
        uint8_t Open;
        int64_t Uin;
    } Parms{};
    Parms.Open = (uint8_t)Open;
    Parms.Uin = (int64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMConsumeCurrency(float ConsumeValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMConsumeCurrency");
    struct
    {
        float ConsumeValue;
    } Parms{};
    Parms.ConsumeValue = (float)ConsumeValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCompelteContract(int32_t ContractID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCompelteContract");
    struct
    {
        int32_t ContractID;
    } Parms{};
    Parms.ContractID = (int32_t)ContractID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCloseVehicleCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCloseVehicleCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientTryInteract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientTryInteract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientReceiveLocation(struct FVector Loc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientReceiveLocation");
    struct
    {
        struct FVector Loc;
    } Parms{};
    Parms.Loc = (struct FVector)Loc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientRangeScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientRangeScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientPickMandelBrick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientPickMandelBrick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientHoldJet(uint8_t bHold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientHoldJet");
    struct
    {
        uint8_t bHold;
    } Parms{};
    Parms.bHold = (uint8_t)bHold;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDrawNavEnd(int32_t timems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDrawNavEnd");
    struct
    {
        int32_t timems;
    } Parms{};
    Parms.timems = (int32_t)timems;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDrawNavBegin(int32_t timems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDrawNavBegin");
    struct
    {
        int32_t timems;
    } Parms{};
    Parms.timems = (int32_t)timems;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDrawNav(struct TArray<struct FVector> Verts, struct TArray<int32_t> nverts, struct TArray<struct FVector> centers, struct TArray<int32_t> Regions, struct TArray<struct FVector> Links)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDrawNav");
    struct
    {
        struct TArray<struct FVector> Verts;
        struct TArray<int32_t> nverts;
        struct TArray<struct FVector> centers;
        struct TArray<int32_t> Regions;
        struct TArray<struct FVector> Links;
    } Parms{};
    Parms.Verts = (struct TArray<struct FVector>)Verts;
    Parms.nverts = (struct TArray<int32_t>)nverts;
    Parms.centers = (struct TArray<struct FVector>)centers;
    Parms.Regions = (struct TArray<int32_t>)Regions;
    Parms.Links = (struct TArray<struct FVector>)Links;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDrawFoliageEnd(int32_t timems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDrawFoliageEnd");
    struct
    {
        int32_t timems;
    } Parms{};
    Parms.timems = (int32_t)timems;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDrawFoliageBegin(int32_t timems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDrawFoliageBegin");
    struct
    {
        int32_t timems;
    } Parms{};
    Parms.timems = (int32_t)timems;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDrawFoliage(struct TArray<struct FIntVector> Voxels, struct FVector SVOOrigin, float SVOSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDrawFoliage");
    struct
    {
        struct TArray<struct FIntVector> Voxels;
        struct FVector SVOOrigin;
        float SVOSize;
    } Parms{};
    Parms.Voxels = (struct TArray<struct FIntVector>)Voxels;
    Parms.SVOOrigin = (struct FVector)SVOOrigin;
    Parms.SVOSize = (float)SVOSize;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientDecipherMandelBrick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientDecipherMandelBrick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClientBreakableRecoveryAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClientBreakableRecoveryAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClearWeaponHiddenTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClearWeaponHiddenTag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMClearAllAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMClearAllAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCleanWaterDataCheckCacheData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCleanWaterDataCheckCacheData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCleanupAcquiredPickupPoolUnused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCleanupAcquiredPickupPoolUnused");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCheckNotInterceptPickup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCheckNotInterceptPickup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCheckInterceptAndAdd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCheckInterceptAndAdd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChanneInfo(int32_t ChannelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChanneInfo");
    struct
    {
        int32_t ChannelIndex;
    } Parms{};
    Parms.ChannelIndex = (int32_t)ChannelIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeVehicleSkinByID(uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeVehicleSkinByID");
    struct
    {
        uint64_t SkinId;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeVehicleSkin(uint64_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeVehicleSkin");
    struct
    {
        uint64_t SkinId;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeTODType(int64_t WeatherID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeTODType");
    struct
    {
        int64_t WeatherID;
    } Parms{};
    Parms.WeatherID = (int64_t)WeatherID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeSol2Mp(uint8_t ChangeOrRevert, uint8_t RespawnSamePos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeSol2Mp");
    struct
    {
        uint8_t ChangeOrRevert;
        uint8_t RespawnSamePos;
    } Parms{};
    Parms.ChangeOrRevert = (uint8_t)ChangeOrRevert;
    Parms.RespawnSamePos = (uint8_t)RespawnSamePos;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeSkillCD(int32_t Index, float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeSkillCD");
    struct
    {
        int32_t Index;
        float Speed;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Speed = (float)Speed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeRain(int64_t RainId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeRain");
    struct
    {
        int64_t RainId;
    } Parms{};
    Parms.RainId = (int64_t)RainId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeMPItem(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeMPItem");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeLaserEmitterConfig(uint8_t bEnableLaserAtStart, uint8_t bDisablePermanentLaserWhenNoPlayer, uint8_t bEnableServerActiveLaserPSC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeLaserEmitterConfig");
    struct
    {
        uint8_t bEnableLaserAtStart;
        uint8_t bDisablePermanentLaserWhenNoPlayer;
        uint8_t bEnableServerActiveLaserPSC;
    } Parms{};
    Parms.bEnableLaserAtStart = (uint8_t)bEnableLaserAtStart;
    Parms.bDisablePermanentLaserWhenNoPlayer = (uint8_t)bDisablePermanentLaserWhenNoPlayer;
    Parms.bEnableServerActiveLaserPSC = (uint8_t)bEnableServerActiveLaserPSC;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeCampIdToRebornMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeCampIdToRebornMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeBreakableItemMatrial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeBreakableItemMatrial");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMChangeAvatar(struct FName AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMChangeAvatar");
    struct
    {
        struct FName AvatarID;
    } Parms{};
    Parms.AvatarID = (struct FName)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCD(int32_t operate, int32_t Slot, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCD");
    struct
    {
        int32_t operate;
        int32_t Slot;
        float Time;
    } Parms{};
    Parms.operate = (int32_t)operate;
    Parms.Slot = (int32_t)Slot;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCancelRequestLootingBoxUnlock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCancelRequestLootingBoxUnlock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCancelFocusParticleSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCancelFocusParticleSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMCancelContract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMCancelContract");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBreakthrougShowLodDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBreakthrougShowLodDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBreakableRecoveryAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBreakableRecoveryAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBreakableItemSetHugeDamage(int32_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBreakableItemSetHugeDamage");
    struct
    {
        int32_t IsOpen;
    } Parms{};
    Parms.IsOpen = (int32_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBreakableBreakAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBreakableBreakAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBraveGameEvent(struct FString EventName, int32_t Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBraveGameEvent");
    struct
    {
        struct FString EventName;
        int32_t Param;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Param = (int32_t)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBraveGameConveyFixRandomPC(int32_t Index1, int32_t Index2, int32_t Index3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBraveGameConveyFixRandomPC");
    struct
    {
        int32_t Index1;
        int32_t Index2;
        int32_t Index3;
    } Parms{};
    Parms.Index1 = (int32_t)Index1;
    Parms.Index2 = (int32_t)Index2;
    Parms.Index3 = (int32_t)Index3;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBPDisableDelay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBPDisableDelay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBattleFieldEndMatchCamp(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBattleFieldEndMatchCamp");
    struct
    {
        int32_t Camp;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBattleFieldEndMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBattleFieldEndMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMBattleFieldCampScoreTrigger(int32_t Camp, int32_t Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMBattleFieldCampScoreTrigger");
    struct
    {
        int32_t Camp;
        int32_t Score;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    Parms.Score = (int32_t)Score;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GmAutoFire(uint8_t bEnable, int32_t FireTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GmAutoFire");
    struct
    {
        uint8_t bEnable;
        int32_t FireTimes;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    Parms.FireTimes = (int32_t)FireTimes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAttemptUpdateWeaponItem(uint64_t GunGID, struct UGPModularWeaponDesc* NewDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAttemptUpdateWeaponItem");
    struct
    {
        uint64_t GunGID;
        struct UGPModularWeaponDesc* NewDesc;
    } Parms{};
    Parms.GunGID = (uint64_t)GunGID;
    Parms.NewDesc = (struct UGPModularWeaponDesc*)NewDesc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAttachPendant(uint64_t PendantItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAttachPendant");
    struct
    {
        uint64_t PendantItemId;
    } Parms{};
    Parms.PendantItemId = (uint64_t)PendantItemId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAssaID(uint64_t AssaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAssaID");
    struct
    {
        uint64_t AssaID;
    } Parms{};
    Parms.AssaID = (uint64_t)AssaID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMArenaTriggerEvent(struct FString Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMArenaTriggerEvent");
    struct
    {
        struct FString Event;
    } Parms{};
    Parms.Event = (struct FString)Event;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAllowFourFingersConsole()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAllowFourFingersConsole");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAiTestFunc(struct FString Name, struct FString Param, float Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAiTestFunc");
    struct
    {
        struct FString Name;
        struct FString Param;
        float Val;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Param = (struct FString)Param;
    Parms.Val = (float)Val;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAirDrop(int32_t GroupID, int32_t AirDropIndex, int32_t TimeStart, int32_t TimeEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAirDrop");
    struct
    {
        int32_t GroupID;
        int32_t AirDropIndex;
        int32_t TimeStart;
        int32_t TimeEnd;
    } Parms{};
    Parms.GroupID = (int32_t)GroupID;
    Parms.AirDropIndex = (int32_t)AirDropIndex;
    Parms.TimeStart = (int32_t)TimeStart;
    Parms.TimeEnd = (int32_t)TimeEnd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAillyuTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAillyuTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAILabDumpPBItemInfo(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAILabDumpPBItemInfo");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAIInfoView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAIInfoView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAIGiveWeapon(uint64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAIGiveWeapon");
    struct
    {
        uint64_t WeaponID;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAiClosestSpeak(int32_t SpeakId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAiClosestSpeak");
    struct
    {
        int32_t SpeakId;
    } Parms{};
    Parms.SpeakId = (int32_t)SpeakId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAIClosestPlayMusic(struct FName Music)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAIClosestPlayMusic");
    struct
    {
        struct FName Music;
    } Parms{};
    Parms.Music = (struct FName)Music;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAiClosestGroupVoice(struct FName Voice)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAiClosestGroupVoice");
    struct
    {
        struct FName Voice;
    } Parms{};
    Parms.Voice = (struct FName)Voice;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddWishItem(struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddWishItem");
    struct
    {
        struct FName ItemID;
    } Parms{};
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddVehiclePartInfo(uint64_t PartId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddVehiclePartInfo");
    struct
    {
        uint64_t PartId;
    } Parms{};
    Parms.PartId = (uint64_t)PartId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddTestDeadBox(float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddTestDeadBox");
    struct
    {
        float X;
        float Y;
        float Z;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddTA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddTA");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddSlotWeapon(uint64_t PresetId, int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddSlotWeapon");
    struct
    {
        uint64_t PresetId;
        int32_t Slot;
    } Parms{};
    Parms.PresetId = (uint64_t)PresetId;
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddPlayerObjectionForTestMPQuestShow(int64_t TaskID, int64_t ID, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddPlayerObjectionForTestMPQuestShow");
    struct
    {
        int64_t TaskID;
        int64_t ID;
        int32_t Value;
    } Parms{};
    Parms.TaskID = (int64_t)TaskID;
    Parms.ID = (int64_t)ID;
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddMerit(float Merit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddMerit");
    struct
    {
        float Merit;
    } Parms{};
    Parms.Merit = (float)Merit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddHudState(uint8_t InHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddHudState");
    struct
    {
        uint8_t InHudState;
    } Parms{};
    Parms.InHudState = (uint8_t)InHudState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddHolidayID(uint32_t Key, uint8_t bAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddHolidayID");
    struct
    {
        uint32_t Key;
        uint8_t bAdd;
    } Parms{};
    Parms.Key = (uint32_t)Key;
    Parms.bAdd = (uint8_t)bAdd;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddHelicopterRange(int32_t IconIndex, float Range, uint8_t Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddHelicopterRange");
    struct
    {
        int32_t IconIndex;
        float Range;
        uint8_t Active;
    } Parms{};
    Parms.IconIndex = (int32_t)IconIndex;
    Parms.Range = (float)Range;
    Parms.Active = (uint8_t)Active;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddDynamicLevelGroup(struct FName GroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddDynamicLevelGroup");
    struct
    {
        struct FName GroupID;
    } Parms{};
    Parms.GroupID = (struct FName)GroupID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddDropLogicBuff(uint32_t Key, uint32_t InDropLogicID, uint32_t InCounter, int32_t TodayActiveTimes, int32_t CareerTriggerCnt, int32_t TodayActiveUpBound, int32_t CareerTriggerUpBound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddDropLogicBuff");
    struct
    {
        uint32_t Key;
        uint32_t InDropLogicID;
        uint32_t InCounter;
        int32_t TodayActiveTimes;
        int32_t CareerTriggerCnt;
        int32_t TodayActiveUpBound;
        int32_t CareerTriggerUpBound;
    } Parms{};
    Parms.Key = (uint32_t)Key;
    Parms.InDropLogicID = (uint32_t)InDropLogicID;
    Parms.InCounter = (uint32_t)InCounter;
    Parms.TodayActiveTimes = (int32_t)TodayActiveTimes;
    Parms.CareerTriggerCnt = (int32_t)CareerTriggerCnt;
    Parms.TodayActiveUpBound = (int32_t)TodayActiveUpBound;
    Parms.CareerTriggerUpBound = (int32_t)CareerTriggerUpBound;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddArenaScore(int32_t InAddScore, uint8_t InAddIncreaseScoreCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddArenaScore");
    struct
    {
        int32_t InAddScore;
        uint8_t InAddIncreaseScoreCount;
    } Parms{};
    Parms.InAddScore = (int32_t)InAddScore;
    Parms.InAddIncreaseScoreCount = (uint8_t)InAddIncreaseScoreCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddAndUseAbilityItem(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddAndUseAbilityItem");
    struct
    {
        uint64_t ItemID;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddAmmoToInventoryManager(uint64_t ItemID, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddAmmoToInventoryManager");
    struct
    {
        uint64_t ItemID;
        int32_t Num;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAddAI2LocalTeam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAddAI2LocalTeam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMActiveFireCrackerEmitterGroup(struct FString EmitterGroupIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMActiveFireCrackerEmitterGroup");
    struct
    {
        struct FString EmitterGroupIds;
    } Parms{};
    Parms.EmitterGroupIds = (struct FString)EmitterGroupIds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMActivateVaultGasVolume(uint8_t bActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMActivateVaultGasVolume");
    struct
    {
        uint8_t bActivate;
    } Parms{};
    Parms.bActivate = (uint8_t)bActivate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAcceptNewQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAcceptNewQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAcceptNewContractQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAcceptNewContractQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAcceptMission(int32_t missionid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAcceptMission");
    struct
    {
        int32_t missionid;
    } Parms{};
    Parms.missionid = (int32_t)missionid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GMAcceptActivity(int64_t GoalID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GMAcceptActivity");
    struct
    {
        int64_t GoalID;
    } Parms{};
    Parms.GoalID = (int64_t)GoalID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GM_HurtMe(float InHurtValue, float InImpendingDeathHurtValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GM_HurtMe");
    struct
    {
        float InHurtValue;
        float InImpendingDeathHurtValue;
    } Parms{};
    Parms.InHurtValue = (float)InHurtValue;
    Parms.InImpendingDeathHurtValue = (float)InImpendingDeathHurtValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GM_AddSpeed(float AddedValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GM_AddSpeed");
    struct
    {
        float AddedValue;
    } Parms{};
    Parms.AddedValue = (float)AddedValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GM_AddHP(float AddedValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GM_AddHP");
    struct
    {
        float AddedValue;
    } Parms{};
    Parms.AddedValue = (float)AddedValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GM3PCarryInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GM3PCarryInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveSelfAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveSelfAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveResetSlot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveResetSlot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveItem(uint64_t ItemID, int32_t Num, EAttachPosition AttachPos, int32_t BindType, float Durability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveItem");
    struct
    {
        uint64_t ItemID;
        int32_t Num;
        enum EAttachPosition AttachPos;
        int32_t BindType;
        float Durability;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.Num = (int32_t)Num;
    Parms.AttachPos = (enum EAttachPosition)AttachPos;
    Parms.BindType = (int32_t)BindType;
    Parms.Durability = (float)Durability;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveExpertSkill(int64_t ExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveExpertSkill");
    struct
    {
        int64_t ExpertId;
    } Parms{};
    Parms.ExpertId = (int64_t)ExpertId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveB");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveAbilityByType(ESkillLogicType ESkillLogicType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveAbilityByType");
    struct
    {
        enum ESkillLogicType ESkillLogicType;
    } Parms{};
    Parms.ESkillLogicType = (enum ESkillLogicType)ESkillLogicType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveAbilityById(int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveAbilityById");
    struct
    {
        int32_t SkillId;
    } Parms{};
    Parms.SkillId = (int32_t)SkillId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveAbilityByExpertID(int64_t ExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveAbilityByExpertID");
    struct
    {
        int64_t ExpertId;
    } Parms{};
    Parms.ExpertId = (int64_t)ExpertId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GiveA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GiveA");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::GetPlayerDropBuffInfoStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "GetPlayerDropBuffInfoStr");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ForceEnableImpendingDeath(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ForceEnableImpendingDeath");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::FlushMovePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "FlushMovePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::EnableVehicleDebug(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "EnableVehicleDebug");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::EnableSelfSoundVisualization(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "EnableSelfSoundVisualization");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::EnablePvpAIDebug(int32_t Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "EnablePvpAIDebug");
    struct
    {
        int32_t Param;
    } Parms{};
    Parms.Param = (int32_t)Param;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::EnableAISpeakDebug(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "EnableAISpeakDebug");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DumpBuffInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DumpBuffInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DSBanPlayer(uint64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DSBanPlayer");
    struct
    {
        uint64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DrawMovePath(const struct TArray<struct FVector>& MovePoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DrawMovePath");
    struct
    {
        struct TArray<struct FVector> MovePoints;
    } Parms{};
    Parms.MovePoints = (struct TArray<struct FVector>)MovePoints;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DrawMesh(struct APawn* AICharacter, uint8_t bIsDraw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DrawMesh");
    struct
    {
        struct APawn* AICharacter;
        uint8_t bIsDraw;
    } Parms{};
    Parms.AICharacter = (struct APawn*)AICharacter;
    Parms.bIsDraw = (uint8_t)bIsDraw;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DrawLocation(uint8_t bIsDraw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DrawLocation");
    struct
    {
        uint8_t bIsDraw;
    } Parms{};
    Parms.bIsDraw = (uint8_t)bIsDraw;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DisablePvpAIDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DisablePvpAIDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::DisableMoveClientIsBoss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "DisableMoveClientIsBoss");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::CollectDynamicObjectsPSO(int32_t InParticleBatchNum, float InParticleTimeoutSeconds, int32_t InDestructionBatchNum, float InDestructionBreakInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "CollectDynamicObjectsPSO");
    struct
    {
        int32_t InParticleBatchNum;
        float InParticleTimeoutSeconds;
        int32_t InDestructionBatchNum;
        float InDestructionBreakInterval;
    } Parms{};
    Parms.InParticleBatchNum = (int32_t)InParticleBatchNum;
    Parms.InParticleTimeoutSeconds = (float)InParticleTimeoutSeconds;
    Parms.InDestructionBatchNum = (int32_t)InDestructionBatchNum;
    Parms.InDestructionBreakInterval = (float)InDestructionBreakInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::CloseMonitorAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "CloseMonitorAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::CloseGMPanel(struct FName PaenlName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "CloseGMPanel");
    struct
    {
        struct FName PaenlName;
    } Parms{};
    Parms.PaenlName = (struct FName)PaenlName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Clinet2ServerShowMoveInfo(int32_t MoveType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Clinet2ServerShowMoveInfo");
    struct
    {
        int32_t MoveType;
    } Parms{};
    Parms.MoveType = (int32_t)MoveType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Clinet2ServerShowCharacterWaterInfo(int32_t ShowType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Clinet2ServerShowCharacterWaterInfo");
    struct
    {
        int32_t ShowType;
    } Parms{};
    Parms.ShowType = (int32_t)ShowType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::Clinet2ServerShowCameraLocDiff(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "Clinet2ServerShowCameraLocDiff");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientVCCheck(struct TArray<struct FVector> InCheckResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientVCCheck");
    struct
    {
        struct TArray<struct FVector> InCheckResult;
    } Parms{};
    Parms.InCheckResult = (struct TArray<struct FVector>)InCheckResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientUpdateAIView(struct FString Bag, struct FString DeadBodyBag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientUpdateAIView");
    struct
    {
        struct FString Bag;
        struct FString DeadBodyBag;
    } Parms{};
    Parms.Bag = (struct FString)Bag;
    Parms.DeadBodyBag = (struct FString)DeadBodyBag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientShowWaterSparseOctree(struct TArray<struct FVector> VoxelArr, float size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientShowWaterSparseOctree");
    struct
    {
        struct TArray<struct FVector> VoxelArr;
        float size;
    } Parms{};
    Parms.VoxelArr = (struct TArray<struct FVector>)VoxelArr;
    Parms.size = (float)size;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientShowTips(struct FString Tips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientShowTips");
    struct
    {
        struct FString Tips;
    } Parms{};
    Parms.Tips = (struct FString)Tips;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientShowSparseOctree(struct TArray<struct FVector> VoxelArr, float size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientShowSparseOctree");
    struct
    {
        struct TArray<struct FVector> VoxelArr;
        float size;
    } Parms{};
    Parms.VoxelArr = (struct TArray<struct FVector>)VoxelArr;
    Parms.size = (float)size;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientShowRelinkTrackItemPosition(struct TArray<struct FVector> Positions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientShowRelinkTrackItemPosition");
    struct
    {
        struct TArray<struct FVector> Positions;
    } Parms{};
    Parms.Positions = (struct TArray<struct FVector>)Positions;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientShowNavExtInfo(float Duration, struct FString Info, struct FBox TileBox, struct TArray<uint32_t> LinkDirs, struct TArray<struct FVector> LinkTargets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientShowNavExtInfo");
    struct
    {
        float Duration;
        struct FString Info;
        struct FBox TileBox;
        struct TArray<uint32_t> LinkDirs;
        struct TArray<struct FVector> LinkTargets;
    } Parms{};
    Parms.Duration = (float)Duration;
    Parms.Info = (struct FString)Info;
    Parms.TileBox = (struct FBox)TileBox;
    Parms.LinkDirs = (struct TArray<uint32_t>)LinkDirs;
    Parms.LinkTargets = (struct TArray<struct FVector>)LinkTargets;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientShowCommonTips(struct FString Tip, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientShowCommonTips");
    struct
    {
        struct FString Tip;
        float Duration;
    } Parms{};
    Parms.Tip = (struct FString)Tip;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientReportMapEconomy(struct FMapEconomyReportData Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientReportMapEconomy");
    struct
    {
        struct FMapEconomyReportData Data;
    } Parms{};
    Parms.Data = (struct FMapEconomyReportData)Data;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientPrintWeaponInfo(struct TArray<uint64_t> WeaponIds, struct TArray<struct FString> WeaponNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientPrintWeaponInfo");
    struct
    {
        struct TArray<uint64_t> WeaponIds;
        struct TArray<struct FString> WeaponNames;
    } Parms{};
    Parms.WeaponIds = (struct TArray<uint64_t>)WeaponIds;
    Parms.WeaponNames = (struct TArray<struct FString>)WeaponNames;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientPrintToScreen(struct FString Text, struct FColor Color, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientPrintToScreen");
    struct
    {
        struct FString Text;
        struct FColor Color;
        float Duration;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.Color = (struct FColor)Color;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientMoveAlongPath(struct TArray<struct FVector> PathPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientMoveAlongPath");
    struct
    {
        struct TArray<struct FVector> PathPoints;
    } Parms{};
    Parms.PathPoints = (struct TArray<struct FVector>)PathPoints;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientGoTrackingPickUp(struct FVector Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientGoTrackingPickUp");
    struct
    {
        struct FVector Position;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientGMLineTraceWaterResult(uint8_t bHit, struct FVector Start, struct FVector End, struct FVector HitPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientGMLineTraceWaterResult");
    struct
    {
        uint8_t bHit;
        struct FVector Start;
        struct FVector End;
        struct FVector HitPoint;
    } Parms{};
    Parms.bHit = (uint8_t)bHit;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.HitPoint = (struct FVector)HitPoint;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientGMJPSTracePathDraw(struct TArray<struct FVector> Lines)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientGMJPSTracePathDraw");
    struct
    {
        struct TArray<struct FVector> Lines;
    } Parms{};
    Parms.Lines = (struct TArray<struct FVector>)Lines;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientGMGoto(struct FVector Location, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientGMGoto");
    struct
    {
        struct FVector Location;
        float Delay;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawPoint(struct TArray<struct FVector> InCheckResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawPoint");
    struct
    {
        struct TArray<struct FVector> InCheckResult;
    } Parms{};
    Parms.InCheckResult = (struct TArray<struct FVector>)InCheckResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawMovePath(struct TArray<struct FVector> MovePoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawMovePath");
    struct
    {
        struct TArray<struct FVector> MovePoints;
    } Parms{};
    Parms.MovePoints = (struct TArray<struct FVector>)MovePoints;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawDebugString(struct FVector Location, struct FString Text, struct FColor Color, float Lifetime, float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawDebugString");
    struct
    {
        struct FVector Location;
        struct FString Text;
        struct FColor Color;
        float Lifetime;
        float Scale;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Text = (struct FString)Text;
    Parms.Color = (struct FColor)Color;
    Parms.Lifetime = (float)Lifetime;
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawDebugSphere(struct FVector Center, float radius, struct FColor Color, float Lifetime, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawDebugSphere");
    struct
    {
        struct FVector Center;
        float radius;
        struct FColor Color;
        float Lifetime;
        float Thickness;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.radius = (float)radius;
    Parms.Color = (struct FColor)Color;
    Parms.Lifetime = (float)Lifetime;
    Parms.Thickness = (float)Thickness;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawDebugLine(struct FVector LineStart, struct FVector LineEnd, struct FColor Color, float Lifetime, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawDebugLine");
    struct
    {
        struct FVector LineStart;
        struct FVector LineEnd;
        struct FColor Color;
        float Lifetime;
        float Thickness;
    } Parms{};
    Parms.LineStart = (struct FVector)LineStart;
    Parms.LineEnd = (struct FVector)LineEnd;
    Parms.Color = (struct FColor)Color;
    Parms.Lifetime = (float)Lifetime;
    Parms.Thickness = (float)Thickness;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawDebugBox(struct FVector Center, struct FVector Extent, struct FQuat Rotation, struct FColor Color, uint8_t bPersistentLines, float Lifetime, uint8_t DepthPriority, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawDebugBox");
    struct
    {
        struct FVector Center;
        struct FVector Extent;
        struct FQuat Rotation;
        struct FColor Color;
        uint8_t bPersistentLines;
        float Lifetime;
        uint8_t DepthPriority;
        float Thickness;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.Extent = (struct FVector)Extent;
    Parms.Rotation = (struct FQuat)Rotation;
    Parms.Color = (struct FColor)Color;
    Parms.bPersistentLines = (uint8_t)bPersistentLines;
    Parms.Lifetime = (float)Lifetime;
    Parms.DepthPriority = (uint8_t)DepthPriority;
    Parms.Thickness = (float)Thickness;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClientDrawCover(struct TArray<struct FGMCoverDrawInfo> Covers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClientDrawCover");
    struct
    {
        struct TArray<struct FGMCoverDrawInfo> Covers;
    } Parms{};
    Parms.Covers = (struct TArray<struct FGMCoverDrawInfo>)Covers;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ClearAllSkill()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ClearAllSkill");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ChangeArmedForceData(int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ChangeArmedForceData");
    struct
    {
        int32_t ID;
    } Parms{};
    Parms.ID = (int32_t)ID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::CatalyticReplenish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "CatalyticReplenish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::CancelUpdateBTDebugString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "CancelUpdateBTDebugString");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::BreakAllDestructionResources(int32_t InBatchNum, float InBreakInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "BreakAllDestructionResources");
    struct
    {
        int32_t InBatchNum;
        float InBreakInterval;
    } Parms{};
    Parms.InBatchNum = (int32_t)InBatchNum;
    Parms.InBreakInterval = (float)InBreakInterval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AzSpawnCapacitorKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AzSpawnCapacitorKey");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AzRandomCapacitor(uint64_t RandSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AzRandomCapacitor");
    struct
    {
        uint64_t RandSeed;
    } Parms{};
    Parms.RandSeed = (uint64_t)RandSeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AutoStraight(uint8_t Enable, int32_t Step)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AutoStraight");
    struct
    {
        uint8_t Enable;
        int32_t Step;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.Step = (int32_t)Step;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AILabShowDoorLocAndRot(int32_t Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AILabShowDoorLocAndRot");
    struct
    {
        int32_t Mode;
    } Parms{};
    Parms.Mode = (int32_t)Mode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AILabProjDebug(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AILabProjDebug");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AILabDebugSys(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AILabDebugSys");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddScreenEffect(struct FString EffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddScreenEffect");
    struct
    {
        struct FString EffectName;
    } Parms{};
    Parms.EffectName = (struct FString)EffectName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddPerkSPEffect(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddPerkSPEffect");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddPerk(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddPerk");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddMultiDynamicEffect(float Distance, float MaxDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddMultiDynamicEffect");
    struct
    {
        float Distance;
        float MaxDuration;
    } Parms{};
    Parms.Distance = (float)Distance;
    Parms.MaxDuration = (float)MaxDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddHudOrState(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddHudOrState");
    struct
    {
        struct FName Name;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddDynamicEffectWithRotator(struct FString EffectResourceId, float Distance, float MaxDuration, float Pitch, float Yaw, float Roll)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddDynamicEffectWithRotator");
    struct
    {
        struct FString EffectResourceId;
        float Distance;
        float MaxDuration;
        float Pitch;
        float Yaw;
        float Roll;
    } Parms{};
    Parms.EffectResourceId = (struct FString)EffectResourceId;
    Parms.Distance = (float)Distance;
    Parms.MaxDuration = (float)MaxDuration;
    Parms.Pitch = (float)Pitch;
    Parms.Yaw = (float)Yaw;
    Parms.Roll = (float)Roll;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddDynamicEffect(struct FString EffectResourceId, float Distance, float MaxDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddDynamicEffect");
    struct
    {
        struct FString EffectResourceId;
        float Distance;
        float MaxDuration;
    } Parms{};
    Parms.EffectResourceId = (struct FString)EffectResourceId;
    Parms.Distance = (float)Distance;
    Parms.MaxDuration = (float)MaxDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddBuff(uint64_t BuffId, uint8_t CharaterPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddBuff");
    struct
    {
        uint64_t BuffId;
        uint8_t CharaterPart;
    } Parms{};
    Parms.BuffId = (uint64_t)BuffId;
    Parms.CharaterPart = (uint8_t)CharaterPart;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddAllScreenEffect(int32_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddAllScreenEffect");
    struct
    {
        int32_t Enable;
    } Parms{};
    Parms.Enable = (int32_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::AddAllDynamicEffect(int32_t Enable, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "AddAllDynamicEffect");
    struct
    {
        int32_t Enable;
        float Duration;
    } Parms{};
    Parms.Enable = (int32_t)Enable;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPlayerGMComponent::ActivateSkillByUISlot(int32_t Slot, int32_t BtnCall)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerGMComponent", "ActivateSkillByUISlot");
    struct
    {
        int32_t Slot;
        int32_t BtnCall;
    } Parms{};
    Parms.Slot = (int32_t)Slot;
    Parms.BtnCall = (int32_t)BtnCall;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMapDropBoxDataHUDView::* ----
void UMapDropBoxDataHUDView::OnClick_Button_SetCurrent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapDropBoxDataHUDView", "OnClick_Button_SetCurrent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMapDropBoxDataHUDView::OnClick_Button_SetCounter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapDropBoxDataHUDView", "OnClick_Button_SetCounter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMapDropBoxDataHUDView::OnClick_Button_RemoveBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapDropBoxDataHUDView", "OnClick_Button_RemoveBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMapDropBoxDataHUDView::OnClick_Button_AddBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MapDropBoxDataHUDView", "OnClick_Button_AddBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPlayerGMComponentRaid::* ----
void UPlayerGMComponentRaid::ServerSetBreakableActorHP(int32_t DesHP, struct AActor* Target, struct FName ActorsTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "ServerSetBreakableActorHP");
    struct
    {
        int32_t DesHP;
        struct AActor* Target;
        struct FName ActorsTag;
    } Parms{};
    Parms.DesHP = (int32_t)DesHP;
    Parms.Target = (struct AActor*)Target;
    Parms.ActorsTag = (struct FName)ActorsTag;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::ServerRailRideSpeedUp(float Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "ServerRailRideSpeedUp");
    struct
    {
        float Percentage;
    } Parms{};
    Parms.Percentage = (float)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::ServerPlayerVehicleAddHP(int32_t HP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "ServerPlayerVehicleAddHP");
    struct
    {
        int32_t HP;
    } Parms{};
    Parms.HP = (int32_t)HP;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::ServerGoToQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "ServerGoToQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::GMRailRideSpeedUp(float Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "GMRailRideSpeedUp");
    struct
    {
        float Percentage;
    } Parms{};
    Parms.Percentage = (float)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::GMPlayerVehicleAddHP(int32_t HP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "GMPlayerVehicleAddHP");
    struct
    {
        int32_t HP;
    } Parms{};
    Parms.HP = (int32_t)HP;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::GMGoToQuest(int64_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "GMGoToQuest");
    struct
    {
        int64_t QuestID;
    } Parms{};
    Parms.QuestID = (int64_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::GMBreakTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "GMBreakTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPlayerGMComponentRaid::GMBreakMonitorRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayerGMComponentRaid", "GMBreakMonitorRoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UTestButton::* ----
void UTestButton::OnClickedFunc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestButton", "OnClickedFunc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
