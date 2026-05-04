#pragma once

#include "../CoreUObject_classes.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: MysticalSkinDT
// Enums: 4
// Structs: 12
// Classes: 0

enum class EMysticalSkinParamMaterialValueType : uint8_t;
struct FMysticalDefaultTemplateColorConfig;
struct FMysticalColorClassifyThreshold;
struct FMysticalTemplateTypeConfig;
struct FMysticalTemplateSpecialTypeRule;
struct FMysticalTemplateSkinConfig;
struct FMysticalTemplateColorOverrideRule;
struct FMysticalTemplateSpecialColorConfigEntry;
struct FMysticalTemplateSpecialTypeCategory;
struct FMysticalTemplateRuleCondition;
struct FMysticalTemplateMaterialMutexGroup;
struct FMysticalTemplateConditionCombination;
struct FMysticalTemplateType;

// Object: Enum MysticalSkinDT.EMysticalTemplateSpecialTypeLogic
enum class EMysticalTemplateSpecialTypeLogic : uint8_t
{
	All = 0,
	Any = 1,
	EMysticalTemplateSpecialTypeLogic_MAX = 2
};

// Object: Enum MysticalSkinDT.EMysticalTemplateParamSource
enum class EMysticalTemplateParamSource : uint8_t
{
	Params = 0,
	BasicSkinAppId = 1,
	EMysticalTemplateParamSource_MAX = 2
};

// Object: Enum MysticalSkinDT.EMysticalTemplateRuleCompareType
enum class EMysticalTemplateRuleCompareType : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Greater = 2,
	Less = 3,
	GreaterEqual = 4,
	LessEqual = 5,
	ColorAllZero = 6,
	ColorAnyNonZero = 7,
	ColorRGBAllZero = 8,
	ColorRGBAnyNonZero = 9,
	EMysticalTemplateRuleCompareType_MAX = 10
};

// Object: Enum MysticalSkinDT.EMysticalTemplateColorCategory
enum class EMysticalTemplateColorCategory : uint8_t
{
	None = 0,
	Black = 1,
	White = 2,
	Gray = 3,
	Red = 4,
	Orange = 5,
	Yellow = 6,
	Green = 7,
	Cyan = 8,
	Blue = 9,
	Purple = 10,
	Pink = 11,
	Brown = 12,
	EMysticalTemplateColorCategory_MAX = 13
};

// Object: ScriptStruct MysticalSkinDT.MysticalDefaultTemplateColorConfig
// Size: 0x30 (Inherited: 0x10)
struct FMysticalDefaultTemplateColorConfig : FDescRowBase
{
	uint64_t SkinId; // 0x10(0x8)
	uint64_t MysticalId; // 0x18(0x8)
	uint64_t ColorId1; // 0x20(0x8)
	uint64_t ColorId2; // 0x28(0x8)
};

// Object: ScriptStruct MysticalSkinDT.MysticalColorClassifyThreshold
// Size: 0x40 (Inherited: 0x10)
struct FMysticalColorClassifyThreshold : FDescRowBase
{
	EMysticalTemplateColorCategory ColorCategory; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t Priority; // 0x14(0x4)
	float HMin; // 0x18(0x4)
	float HMax; // 0x1C(0x4)
	uint8_t bEnableHRange2 : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float HMin2; // 0x24(0x4)
	float HMax2; // 0x28(0x4)
	float SMin; // 0x2C(0x4)
	float SMax; // 0x30(0x4)
	float VMin; // 0x34(0x4)
	float VMax; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateTypeConfig
// Size: 0x30 (Inherited: 0x10)
struct FMysticalTemplateTypeConfig : FDescRowBase
{
	uint64_t SkinId; // 0x10(0x8)
	struct FName TableName; // 0x18(0x8)
	struct TArray<struct FMysticalTemplateSkinConfig> SkinConfigs; // 0x20(0x10)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateSpecialTypeRule
// Size: 0x18 (Inherited: 0x0)
struct FMysticalTemplateSpecialTypeRule
{
	struct TArray<struct FMysticalTemplateSpecialTypeCategory> Categories; // 0x0(0x10)
	uint64_t DefaultValue; // 0x10(0x8)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateSkinConfig
// Size: 0x58 (Inherited: 0x0)
struct FMysticalTemplateSkinConfig
{
	struct TArray<uint64_t> BasicSkinAppIds; // 0x0(0x10)
	struct FName ColorId1ParamName; // 0x10(0x8)
	struct FName ColorId2ParamName; // 0x18(0x8)
	struct TArray<struct FMysticalTemplateMaterialMutexGroup> MaterialMutexGroups; // 0x20(0x10)
	struct FMysticalTemplateSpecialTypeRule SpecialTypeRule; // 0x30(0x18)
	struct TArray<struct FMysticalTemplateSpecialColorConfigEntry> SpecialColorConfigs; // 0x48(0x10)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateColorOverrideRule
// Size: 0x18 (Inherited: 0x0)
struct FMysticalTemplateColorOverrideRule
{
	uint8_t bUseFixedValue : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t FixedValue; // 0x8(0x8)
	struct FName OverrideParamName; // 0x10(0x8)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateSpecialColorConfigEntry
// Size: 0x40 (Inherited: 0x0)
struct FMysticalTemplateSpecialColorConfigEntry
{
	struct TArray<uint64_t> MaterialIds; // 0x0(0x10)
	struct FMysticalTemplateColorOverrideRule ColorId1Override; // 0x10(0x18)
	struct FMysticalTemplateColorOverrideRule ColorId2Override; // 0x28(0x18)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateSpecialTypeCategory
// Size: 0x20 (Inherited: 0x0)
struct FMysticalTemplateSpecialTypeCategory
{
	uint64_t CategoryId; // 0x0(0x8)
	EMysticalTemplateSpecialTypeLogic LogicMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FMysticalTemplateRuleCondition> Conditions; // 0x10(0x10)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateRuleCondition
// Size: 0x14 (Inherited: 0x0)
struct FMysticalTemplateRuleCondition
{
	EMysticalTemplateParamSource ParamSource; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ParamName; // 0x4(0x8)
	EMysticalSkinParamMaterialValueType ParamType; // 0xC(0x1)
	EMysticalTemplateRuleCompareType CompareType; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	float CompareValue; // 0x10(0x4)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateMaterialMutexGroup
// Size: 0x20 (Inherited: 0x0)
struct FMysticalTemplateMaterialMutexGroup
{
	uint8_t GroupID; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FMysticalTemplateConditionCombination> ConditionCombinations; // 0x8(0x10)
	uint64_t DefaultValue; // 0x18(0x8)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateConditionCombination
// Size: 0x10 (Inherited: 0x0)
struct FMysticalTemplateConditionCombination
{
	struct TArray<struct FMysticalTemplateRuleCondition> Conditions; // 0x0(0x10)
};

// Object: ScriptStruct MysticalSkinDT.MysticalTemplateType
// Size: 0x50 (Inherited: 0x10)
struct FMysticalTemplateType : FDescRowBase
{
	uint64_t SN; // 0x10(0x8)
	uint64_t SkinId; // 0x18(0x8)
	uint64_t MysticalId; // 0x20(0x8)
	uint64_t MaterialId1; // 0x28(0x8)
	uint64_t MaterialId2; // 0x30(0x8)
	uint64_t ColorId1; // 0x38(0x8)
	uint64_t ColorId2; // 0x40(0x8)
	uint64_t SpecialTypeId; // 0x48(0x8)
};

} // namespace SDK
