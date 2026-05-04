#pragma once

#include "../CoreUObject_classes.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: GeometryCacheTracks
// Enums: 0
// Structs: 3
// Classes: 2

struct UGeometryCache;
struct UMovieSceneSection;
struct FMovieSceneGeometryCacheParams;
struct FMovieSceneGeometryCacheSectionTemplateParameters;
struct FMovieSceneGeometryCacheSectionTemplate;
struct UMovieSceneGeometryCacheSection;
struct UMovieSceneGeometryCacheTrack;

// Object: ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// Size: 0x40 (Inherited: 0x0)
struct FMovieSceneGeometryCacheParams
{
	struct UGeometryCache* GeometryCacheAsset; // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
	struct FFrameNumber StartFrameOffset; // 0xC(0x4)
	struct FFrameNumber EndFrameOffset; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	uint8_t bReverse : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float StartOffset; // 0x1C(0x4)
	float EndOffset; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FSoftObjectPath GeometryCache; // 0x28(0x18)
};

// Object: ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Size: 0x48 (Inherited: 0x40)
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{
	struct FFrameNumber SectionStartTime; // 0x40(0x4)
	struct FFrameNumber SectionEndTime; // 0x44(0x4)
};

// Object: ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Size: 0x60 (Inherited: 0x18)
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x18(0x48)
};

// Object: Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x128 (Inherited: 0xE8)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection
{
	struct FMovieSceneGeometryCacheParams Params; // 0xE8(0x40)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneGeometryCacheSection, "MovieSceneGeometryCacheSection")

};

// Object: Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneGeometryCacheTrack, "MovieSceneGeometryCacheTrack")

};

} // namespace SDK
