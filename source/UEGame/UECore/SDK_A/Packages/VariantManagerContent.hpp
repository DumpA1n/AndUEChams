#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: VariantManagerContent
// Enums: 1
// Structs: 2
// Classes: 13

struct AActor;
struct USceneComponent;
struct FFunctionCaller;
struct FCapturedPropSegment;
struct ULevelVariantSets;
struct ALevelVariantSetsActor;
struct ULevelVariantSetsFunctionDirector;
struct UPropertyValue;
struct UPropertyValueTransform;
struct UPropertyValueVisibility;
struct UPropertyValueColor;
struct UPropertyValueMaterial;
struct UPropertyValueOption;
struct ASwitchActor;
struct UVariant;
struct UVariantObjectBinding;
struct UVariantSet;

// Object: Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	Visibility = 16,
	Material = 32,
	Color = 64,
	Option = 128,
	EPropertyValueCategory_MAX = 129
};

// Object: ScriptStruct VariantManagerContent.FunctionCaller
// Size: 0x8 (Inherited: 0x0)
struct FFunctionCaller
{
	struct FName FunctionName; // 0x0(0x8)
};

// Object: ScriptStruct VariantManagerContent.CapturedPropSegment
// Size: 0x28 (Inherited: 0x0)
struct FCapturedPropSegment
{
	struct FString PropertyName; // 0x0(0x10)
	int32_t PropertyIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString ComponentName; // 0x18(0x10)
};

// Object: Class VariantManagerContent.LevelVariantSets
// Size: 0x90 (Inherited: 0x28)
struct ULevelVariantSets : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelVariantSets, "LevelVariantSets")

	struct UObject* DirectorClass; // 0x28(0x8)
	struct TArray<struct UVariantSet*> VariantSets; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)

	// Object: Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e0f350
	// Params: [ Num(2) Size(0x18) ]
	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName);

	// Object: Function VariantManagerContent.LevelVariantSets.GetVariantSet
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e0f2a4
	// Params: [ Num(2) Size(0x10) ]
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex);

	// Object: Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e0f270
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumVariantSets();
};

// Object: Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x388 (Inherited: 0x370)
struct ALevelVariantSetsActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALevelVariantSetsActor, "LevelVariantSetsActor")

	struct FSoftObjectPath LevelVariantSets; // 0x370(0x18)

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e0f7f4
	// Params: [ Num(3) Size(0x21) ]
	uint8_t SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e0f70c
	// Params: [ Num(3) Size(0x9) ]
	uint8_t SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e0f668
	// Params: [ Num(1) Size(0x8) ]
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e0f5b4
	// Params: [ Num(2) Size(0x10) ]
	struct ULevelVariantSets* GetLevelVariantSets(uint8_t bLoad);
};

// Object: Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelVariantSetsFunctionDirector, "LevelVariantSetsFunctionDirector")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class VariantManagerContent.PropertyValue
// Size: 0x1B0 (Inherited: 0x28)
struct UPropertyValue : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValue, "PropertyValue")

	uint8_t Pad_0x28[0x58]; // 0x28(0x58)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x80(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x90(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xA0(0x10)
	struct FString FullDisplayString; // 0xB0(0x10)
	struct FName PropertySetterName; // 0xC0(0x8)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xC8(0x50)
	uint8_t bHasRecordedData : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)
	struct UObject* LeafPropertyClass; // 0x120(0x8)
	uint8_t Pad_0x128[0x8]; // 0x128(0x8)
	struct TArray<uint8_t> ValueBytes; // 0x130(0x10)
	EPropertyValueCategory PropCategory; // 0x140(0x1)
	uint8_t Pad_0x141[0x6F]; // 0x141(0x6F)

	// Object: Function VariantManagerContent.PropertyValue.HasRecordedData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e0fb70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasRecordedData();

	// Object: Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e0faa0
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetPropertyTooltip();

	// Object: Function VariantManagerContent.PropertyValue.GetFullDisplayString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e0fa1c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFullDisplayString();
};

// Object: Class VariantManagerContent.PropertyValueTransform
// Size: 0x1B0 (Inherited: 0x1B0)
struct UPropertyValueTransform : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueTransform, "PropertyValueTransform")
};

// Object: Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1B0 (Inherited: 0x1B0)
struct UPropertyValueVisibility : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueVisibility, "PropertyValueVisibility")
};

// Object: Class VariantManagerContent.PropertyValueColor
// Size: 0x1B0 (Inherited: 0x1B0)
struct UPropertyValueColor : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueColor, "PropertyValueColor")
};

// Object: Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1B0 (Inherited: 0x1B0)
struct UPropertyValueMaterial : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueMaterial, "PropertyValueMaterial")
};

// Object: Class VariantManagerContent.PropertyValueOption
// Size: 0x1B0 (Inherited: 0x1B0)
struct UPropertyValueOption : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueOption, "PropertyValueOption")
};

// Object: Class VariantManagerContent.SwitchActor
// Size: 0x390 (Inherited: 0x370)
struct ASwitchActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASwitchActor, "SwitchActor")

	uint8_t Pad_0x370[0x18]; // 0x370(0x18)
	struct USceneComponent* SceneComponent; // 0x388(0x8)

	// Object: Function VariantManagerContent.SwitchActor.SelectOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e0fcf4
	// Params: [ Num(1) Size(0x4) ]
	void SelectOption(int32_t OptionIndex);

	// Object: Function VariantManagerContent.SwitchActor.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e0fcc0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedOption();

	// Object: Function VariantManagerContent.SwitchActor.GetOptions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e0fc28
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetOptions();
};

// Object: Class VariantManagerContent.Variant
// Size: 0x68 (Inherited: 0x28)
struct UVariant : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVariant, "Variant")

	struct FText DisplayText; // 0x28(0x18)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)

	// Object: Function VariantManagerContent.Variant.SwitchOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e10060
	// Params: [ Num(0) Size(0x0) ]
	void SwitchOn();

	// Object: Function VariantManagerContent.Variant.SetDisplayText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8e0ff50
	// Params: [ Num(1) Size(0x18) ]
	void SetDisplayText(const struct FText& NewDisplayText);

	// Object: Function VariantManagerContent.Variant.GetNumActors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e0ff1c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumActors();

	// Object: Function VariantManagerContent.Variant.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e0fe4c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();

	// Object: Function VariantManagerContent.Variant.GetActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e0fda0
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetActor(int32_t ActorIndex);
};

// Object: Class VariantManagerContent.VariantObjectBinding
// Size: 0x80 (Inherited: 0x28)
struct UVariantObjectBinding : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVariantObjectBinding, "VariantObjectBinding")

	struct FSoftObjectPath ObjectPtr; // 0x28(0x18)
	struct TLazyObjectPtr<struct UObject> LazyObjectPtr; // 0x40(0x1C)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x60(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x70(0x10)
};

// Object: Class VariantManagerContent.VariantSet
// Size: 0x70 (Inherited: 0x28)
struct UVariantSet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVariantSet, "VariantSet")

	struct FText DisplayText; // 0x28(0x18)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	uint8_t bExpanded : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)

	// Object: Function VariantManagerContent.VariantSet.SetDisplayText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8e103ec
	// Params: [ Num(1) Size(0x18) ]
	void SetDisplayText(const struct FText& NewDisplayText);

	// Object: Function VariantManagerContent.VariantSet.GetVariantByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e102ec
	// Params: [ Num(2) Size(0x18) ]
	struct UVariant* GetVariantByName(struct FString VariantName);

	// Object: Function VariantManagerContent.VariantSet.GetVariant
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e10240
	// Params: [ Num(2) Size(0x10) ]
	struct UVariant* GetVariant(int32_t VariantIndex);

	// Object: Function VariantManagerContent.VariantSet.GetNumVariants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8e1020c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumVariants();

	// Object: Function VariantManagerContent.VariantSet.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e1013c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();
};

} // namespace SDK
