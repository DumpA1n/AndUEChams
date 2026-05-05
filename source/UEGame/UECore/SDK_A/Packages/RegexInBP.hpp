#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: RegexInBP
// Enums: 0
// Structs: 1
// Classes: 1

struct FRegexExtendedResult;
struct URegexBPLibrary;

// Object: ScriptStruct RegexInBP.RegexExtendedResult
// Size: 0x50 (Inherited: 0x0)
struct FRegexExtendedResult
{
	struct TMap<int32_t, struct FString> Results; // 0x0(0x50)
};

// Object: Class RegexInBP.RegexBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct URegexBPLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(URegexBPLibrary, "RegexBPLibrary")

	// Object: Function RegexInBP.RegexBPLibrary.MatchExtended
	// Flags: [Final|Native|Static|Private|BlueprintCallable|BlueprintPure]
	// Offset: 0xf26b9f4
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FRegexExtendedResult> MatchExtended(struct FString Pattern, struct FString Input);

	// Object: Function RegexInBP.RegexBPLibrary.Match
	// Flags: [Final|Native|Static|Private|BlueprintCallable|BlueprintPure]
	// Offset: 0x7948738
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> Match(struct FString Pattern, struct FString Input);

	// Object: Function RegexInBP.RegexBPLibrary.CanMatch
	// Flags: [Final|Native|Static|Private|BlueprintCallable|BlueprintPure]
	// Offset: 0x7948644
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t CanMatch(struct FString Pattern, struct FString Input);
};

} // namespace SDK
