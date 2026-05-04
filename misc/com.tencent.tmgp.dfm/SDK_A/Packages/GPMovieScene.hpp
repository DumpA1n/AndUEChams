#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "MovieScene.hpp"
#include "MovieSceneTracks.hpp"

namespace SDK
{

// Package: GPMovieScene
// Enums: 0
// Structs: 4
// Classes: 5

struct UMovieSceneSection;
struct FConsoleCommandTrackTabRow;
struct FGPMovieSceneConsoleCommandTemplate;
struct FGPMovieSceneSubtitlesParams;
struct FGPMovieSceneSubtitlesTemplate;
struct UGPMovieSceneConsoleCommandSection;
struct UGPMovieSceneConsoleCommandTrack;
struct UGPMovieSceneDelegates;
struct UGPMovieSceneSubtitlesSection;
struct UGPMovieSceneSubtitlesTrack;

// Object: ScriptStruct GPMovieScene.ConsoleCommandTrackTabRow
// Size: 0x90 (Inherited: 0x10)
struct FConsoleCommandTrackTabRow : FDescRowBase
{
	struct FText MenuName; // 0x10(0x18)
	struct FText MenuTips; // 0x28(0x18)
	struct FText SectionDisplayName; // 0x40(0x18)
	struct FString ConsoleVariable; // 0x58(0x10)
	struct FString Value; // 0x68(0x10)
	uint8_t bShouldExecuteResetCommand : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct FString ResetCommand; // 0x80(0x10)
};

// Object: ScriptStruct GPMovieScene.GPMovieSceneConsoleCommandTemplate
// Size: 0x60 (Inherited: 0x18)
struct FGPMovieSceneConsoleCommandTemplate : FMovieSceneEvalTemplate
{
	struct FString ConsoleVariableName; // 0x18(0x10)
	struct FString Value; // 0x28(0x10)
	struct FString LastValue; // 0x38(0x10)
	uint8_t bShouldExecuteResetCommand : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString ResetCommand; // 0x50(0x10)
};

// Object: ScriptStruct GPMovieScene.GPMovieSceneSubtitlesParams
// Size: 0x8 (Inherited: 0x0)
struct FGPMovieSceneSubtitlesParams
{
	struct FName SubtitlesID; // 0x0(0x8)
};

// Object: ScriptStruct GPMovieScene.GPMovieSceneSubtitlesTemplate
// Size: 0x20 (Inherited: 0x18)
struct FGPMovieSceneSubtitlesTemplate : FMovieSceneEvalTemplate
{
	struct FGPMovieSceneSubtitlesParams Params; // 0x18(0x8)
};

// Object: Class GPMovieScene.GPMovieSceneConsoleCommandSection
// Size: 0x130 (Inherited: 0xE8)
struct UGPMovieSceneConsoleCommandSection : UMovieSceneSection
{
	struct FString ConsoleVariableName; // 0xE8(0x10)
	struct FString Value; // 0xF8(0x10)
	uint8_t bShouldExecuteResetCommand : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct FString ResetCommand; // 0x110(0x10)
	struct FString DisplayName; // 0x120(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPMovieSceneConsoleCommandSection, "GPMovieSceneConsoleCommandSection")

};

// Object: Class GPMovieScene.GPMovieSceneConsoleCommandTrack
// Size: 0x68 (Inherited: 0x58)
struct UGPMovieSceneConsoleCommandTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPMovieSceneConsoleCommandTrack, "GPMovieSceneConsoleCommandTrack")

};

// Object: Class GPMovieScene.GPMovieSceneDelegates
// Size: 0x50 (Inherited: 0x30)
struct UGPMovieSceneDelegates : UWorldSubsystem
{
	uint8_t Pad_0x30[0x20]; // 0x30(0x20)


	// Object: Function GPMovieScene.GPMovieSceneDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8389b7c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPMovieSceneDelegates* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UGPMovieSceneDelegates, "GPMovieSceneDelegates")

};

// Object: Class GPMovieScene.GPMovieSceneSubtitlesSection
// Size: 0xF0 (Inherited: 0xE8)
struct UGPMovieSceneSubtitlesSection : UMovieSceneSection
{
	struct FName SubtitlesID; // 0xE8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPMovieSceneSubtitlesSection, "GPMovieSceneSubtitlesSection")

};

// Object: Class GPMovieScene.GPMovieSceneSubtitlesTrack
// Size: 0x78 (Inherited: 0x78)
struct UGPMovieSceneSubtitlesTrack : UMovieSceneEventTrack
{	DEFINE_UE_CLASS_HELPERS(UGPMovieSceneSubtitlesTrack, "GPMovieSceneSubtitlesTrack")

};

} // namespace SDK
