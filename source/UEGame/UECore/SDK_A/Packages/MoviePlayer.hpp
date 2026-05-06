#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MoviePlayer
// Enums: 1
// Structs: 0
// Classes: 1

struct UMoviePlayerSettings;

// Object: Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3
};

// Object: Class MoviePlayer.MoviePlayerSettings
// Size: 0x40 (Inherited: 0x28)
struct UMoviePlayerSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMoviePlayerSettings, "MoviePlayerSettings")

	bool bWaitForMoviesToComplete; // 0x28(0x1)
	bool bMoviesAreSkippable; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct TArray<struct FString> StartupMovies; // 0x30(0x10)
};

} // namespace SDK
