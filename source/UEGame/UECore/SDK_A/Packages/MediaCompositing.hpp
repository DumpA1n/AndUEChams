#pragma once

#include "../CoreUObject_classes.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: MediaCompositing
// Enums: 0
// Structs: 2
// Classes: 2

struct UMediaPlayer;
struct UMediaSoundComponent;
struct UMediaSource;
struct UMediaTexture;
struct UMovieSceneSection;
struct FMovieSceneMediaSectionParams;
struct FMovieSceneMediaSectionTemplate;
struct UMovieSceneMediaSection;
struct UMovieSceneMediaTrack;

// Object: ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneMediaSectionParams
{
	struct UMediaSoundComponent* MediaSoundComponent; // 0x0(0x8)
	struct UMediaSource* MediaSource; // 0x8(0x8)
	struct UMediaTexture* MediaTexture; // 0x10(0x8)
	struct UMediaPlayer* MediaPlayer; // 0x18(0x8)
	struct FFrameNumber SectionStartFrame; // 0x20(0x4)
	struct FFrameNumber SectionEndFrame; // 0x24(0x4)
	uint8_t bLooping : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FFrameNumber StartFrameOffset; // 0x2C(0x4)
};

// Object: ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x48 (Inherited: 0x18)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams Params; // 0x18(0x30)
};

// Object: Class MediaCompositing.MovieSceneMediaSection
// Size: 0x118 (Inherited: 0xE8)
struct UMovieSceneMediaSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMediaSection, "MovieSceneMediaSection")

	struct UMediaSource* MediaSource; // 0xE8(0x8)
	uint8_t bLooping : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	struct FFrameNumber StartFrameOffset; // 0xF4(0x4)
	struct UMediaTexture* MediaTexture; // 0xF8(0x8)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x100(0x8)
	uint8_t bUseExternalMediaPlayer : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x110(0x8)
};

// Object: Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMediaTrack, "MovieSceneMediaTrack")

	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x58(0x10)
};

} // namespace SDK
