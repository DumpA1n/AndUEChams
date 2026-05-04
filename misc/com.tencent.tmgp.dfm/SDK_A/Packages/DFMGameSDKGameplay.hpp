#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMGameSDKGameplay
// Enums: 0
// Structs: 0
// Classes: 1

enum class EDFLoadingFlowStepResult : uint8_t;
enum class EFlowResult : uint8_t;
enum class ELowFpsOP : uint8_t;
struct UDFMGameGPMManager;

// Object: Class DFMGameSDKGameplay.DFMGameGPMManager
// Size: 0xD0 (Inherited: 0x30)
struct UDFMGameGPMManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnLevelLoad; // 0x30(0x10)
	uint8_t Pad_0x40[0x90]; // 0x40(0x90)


	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.UploadMetaperfInfoToApm
	// Flags: [Final|Native|Public]
	// Offset: 0x1358ab70
	// Params: [ Num(0) Size(0x0) ]
	void UploadMetaperfInfoToApm();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.UploadMemoryToApm
	// Flags: [Final|Native|Public]
	// Offset: 0x1358ab5c
	// Params: [ Num(0) Size(0x0) ]
	void UploadMemoryToApm();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.UploadGlobalQualityToApm
	// Flags: [Final|Native|Public]
	// Offset: 0x1358ab48
	// Params: [ Num(0) Size(0x0) ]
	void UploadGlobalQualityToApm();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.UploadAudioToApm
	// Flags: [Final|Native|Public]
	// Offset: 0x1358ab34
	// Params: [ Num(0) Size(0x0) ]
	void UploadAudioToApm();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnUploadFullScreenEffectChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1358ab20
	// Params: [ Num(0) Size(0x0) ]
	void OnUploadFullScreenEffectChanged();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnSeamlessEnterStageChanged
	// Flags: [Final|Native|Private]
	// Offset: 0x1358aa40
	// Params: [ Num(2) Size(0x2) ]
	void OnSeamlessEnterStageChanged(uint8_t NewStageType, uint8_t OldStageType);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnQuestStageChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1358a99c
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestStageChanged(struct FName QuestStageName);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnPrecompileAllPSOFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x1358a988
	// Params: [ Num(0) Size(0x0) ]
	void OnPrecompileAllPSOFinish();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnLowFpsModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xf6b7c64
	// Params: [ Num(1) Size(0x1) ]
	void OnLowFpsModeChanged(ELowFpsOP FpsOP);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnGfxStatsUpdate
	// Flags: [Final|Native|Private]
	// Offset: 0x1358a870
	// Params: [ Num(3) Size(0xC) ]
	void OnGfxStatsUpdate(uint32_t Hit, uint32_t Precompiled, uint32_t Total);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnClientGameLoadingFinishedNew
	// Flags: [Final|Native|Private]
	// Offset: 0xfc1191c
	// Params: [ Num(2) Size(0x18) ]
	void OnClientGameLoadingFinishedNew(EDFLoadingFlowStepResult Result, struct FString Reason);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.OnClientGameLoadingFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x1358a7cc
	// Params: [ Num(1) Size(0x1) ]
	void OnClientGameLoadingFinished(EFlowResult Result);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.MarkLevelLoadByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10005038
	// Params: [ Num(1) Size(0x10) ]
	void MarkLevelLoadByName(struct FString Name);

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.MarkLevelLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10710278
	// Params: [ Num(0) Size(0x0) ]
	void MarkLevelLoad();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.MarkLevelFin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1092654c
	// Params: [ Num(0) Size(0x0) ]
	void MarkLevelFin();

	// Object: Function DFMGameSDKGameplay.DFMGameGPMManager.GetDFMGameGPMManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfb7b2b4
	// Params: [ Num(1) Size(0x8) ]
	static struct UDFMGameGPMManager* GetDFMGameGPMManager();
	DEFINE_UE_CLASS_HELPERS(UDFMGameGPMManager, "DFMGameGPMManager")

};

} // namespace SDK
