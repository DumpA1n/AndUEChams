#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GeneEvo
// Enums: 0
// Structs: 2
// Classes: 0

struct FGeneEvoStatsIndividualTableRow;
struct FGeneEvoStatsTableRow;

// Object: ScriptStruct GeneEvo.GeneEvoStatsIndividualTableRow
// Size: 0x28 (Inherited: 0x8)
struct FGeneEvoStatsIndividualTableRow : FTableRowBase
{
	int32_t Generation; // 0x8(0x4)
	int32_t Individual; // 0xC(0x4)
	int32_t ObjectiveIndex; // 0x10(0x4)
	struct FName ObjectiveName; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	double ObjectiveValue; // 0x20(0x8)
};

// Object: ScriptStruct GeneEvo.GeneEvoStatsTableRow
// Size: 0x38 (Inherited: 0x8)
struct FGeneEvoStatsTableRow : FTableRowBase
{
	int32_t Generation; // 0x8(0x4)
	int32_t ObjectiveIndex; // 0xC(0x4)
	struct FName ObjectiveName; // 0x10(0x8)
	double Min; // 0x18(0x8)
	double Median; // 0x20(0x8)
	double Average; // 0x28(0x8)
	double Max; // 0x30(0x8)
};

} // namespace SDK
