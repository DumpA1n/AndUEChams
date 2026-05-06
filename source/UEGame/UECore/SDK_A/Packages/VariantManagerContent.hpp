#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: VariantManagerContent
// Enums: 1
// Structs: 3
// Classes: 14

struct AActor;
struct USceneComponent;
struct UTexture2D;
struct FFunctionCaller;
struct FCapturedPropSegment;
struct FVariantDependency;
struct ULevelVariantSets;
struct ALevelVariantSetsActor;
struct ULevelVariantSetsFunctionDirector;
struct UPropertyValue;
struct UPropertyValueTransform;
struct UPropertyValueVisibility;
struct UPropertyValueColor;
struct UPropertyValueMaterial;
struct UPropertyValueOption;
struct UPropertyValueSoftObject;
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

// Object: ScriptStruct VariantManagerContent.VariantDependency
// Size: 0x58 (Inherited: 0x0)
struct FVariantDependency
{
	struct TSoftObjectPtr<UVariantSet> VariantSet; // 0x0(0x28)
	struct TSoftObjectPtr<UVariant> Variant; // 0x28(0x28)
	bool bEnabled; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
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
	// Offset: 0x4054188
	// Params: [ Num(2) Size(0x18) ]
	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName);

	// Object: Function VariantManagerContent.LevelVariantSets.GetVariantSet
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4054298
	// Params: [ Num(2) Size(0x10) ]
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex);

	// Object: Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4054348
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumVariantSets();
};

// Object: Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x318 (Inherited: 0x300)
struct ALevelVariantSetsActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALevelVariantSetsActor, "LevelVariantSetsActor")

	struct FSoftObjectPath LevelVariantSets; // 0x300(0x18)

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4054480
	// Params: [ Num(3) Size(0x21) ]
	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4054390
	// Params: [ Num(3) Size(0x9) ]
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4054628
	// Params: [ Num(1) Size(0x8) ]
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets);

	// Object: Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40546d0
	// Params: [ Num(2) Size(0x10) ]
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// Object: Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelVariantSetsFunctionDirector, "LevelVariantSetsFunctionDirector")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class VariantManagerContent.PropertyValue
// Size: 0x1B8 (Inherited: 0x28)
struct UPropertyValue : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValue, "PropertyValue")

	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xA8(0x10)
	struct FString FullDisplayString; // 0xB8(0x10)
	struct FName PropertySetterName; // 0xC8(0x8)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xD0(0x50)
	bool bHasRecordedData; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct UObject* LeafPropertyClass; // 0x128(0x8)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)
	struct TArray<uint8_t> ValueBytes; // 0x138(0x10)
	EPropertyValueCategory PropCategory; // 0x148(0x1)
	uint8_t Pad_0x149[0x6F]; // 0x149(0x6F)

	// Object: Function VariantManagerContent.PropertyValue.HasRecordedData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4054824
	// Params: [ Num(1) Size(0x1) ]
	bool HasRecordedData();

	// Object: Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40548e0
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetPropertyTooltip();

	// Object: Function VariantManagerContent.PropertyValue.GetFullDisplayString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x405485c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFullDisplayString();
};

// Object: Class VariantManagerContent.PropertyValueTransform
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueTransform : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueTransform, "PropertyValueTransform")
};

// Object: Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueVisibility : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueVisibility, "PropertyValueVisibility")
};

// Object: Class VariantManagerContent.PropertyValueColor
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueColor : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueColor, "PropertyValueColor")
};

// Object: Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueMaterial : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueMaterial, "PropertyValueMaterial")
};

// Object: Class VariantManagerContent.PropertyValueOption
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueOption : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueOption, "PropertyValueOption")
};

// Object: Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1B8 (Inherited: 0x1B8)
struct UPropertyValueSoftObject : UPropertyValue
{
	DEFINE_UE_CLASS_HELPERS(UPropertyValueSoftObject, "PropertyValueSoftObject")
};

// Object: Class VariantManagerContent.SwitchActor
// Size: 0x328 (Inherited: 0x300)
struct ASwitchActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASwitchActor, "SwitchActor")

	uint8_t Pad_0x300[0x18]; // 0x300(0x18)
	struct USceneComponent* SceneComponent; // 0x318(0x8)
	int32_t LastSelectedOption; // 0x320(0x4)
	uint8_t Pad_0x324[0x4]; // 0x324(0x4)

	// Object: Function VariantManagerContent.SwitchActor.SelectOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4054a38
	// Params: [ Num(1) Size(0x4) ]
	void SelectOption(int32_t OptionIndex);

	// Object: Function VariantManagerContent.SwitchActor.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4054ae0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedOption();

	// Object: Function VariantManagerContent.SwitchActor.GetOptions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4054b14
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetOptions();
};

// Object: Class VariantManagerContent.Variant
// Size: 0x80 (Inherited: 0x28)
struct UVariant : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVariant, "Variant")

	struct TArray<struct FVariantDependency> Dependencies; // 0x28(0x10)
	struct FText DisplayText; // 0x38(0x18)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x68(0x10)
	struct UTexture2D* Thumbnail; // 0x78(0x8)

	// Object: Function VariantManagerContent.Variant.SwitchOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40554cc
	// Params: [ Num(0) Size(0x0) ]
	void SwitchOn();

	// Object: Function VariantManagerContent.Variant.SetThumbnailFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40553ec
	// Params: [ Num(1) Size(0x8) ]
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail);

	// Object: Function VariantManagerContent.Variant.SetThumbnailFromFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40552e8
	// Params: [ Num(1) Size(0x10) ]
	void SetThumbnailFromFile(struct FString FilePath);

	// Object: Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40550fc
	// Params: [ Num(0) Size(0x0) ]
	void SetThumbnailFromEditorViewport();

	// Object: Function VariantManagerContent.Variant.SetThumbnailFromCamera
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x4055110
	// Params: [ Num(5) Size(0x4C) ]
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);

	// Object: Function VariantManagerContent.Variant.SetDisplayText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4055690
	// Params: [ Num(1) Size(0x18) ]
	void SetDisplayText(const struct FText& NewDisplayText);

	// Object: Function VariantManagerContent.Variant.SetDependency
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4054c74
	// Params: [ Num(2) Size(0x60) ]
	void SetDependency(int32_t Index, struct FVariantDependency& Dependency);

	// Object: Function VariantManagerContent.Variant.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4055494
	// Params: [ Num(1) Size(0x1) ]
	bool IsActive();

	// Object: Function VariantManagerContent.Variant.GetThumbnail
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40550c8
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetThumbnail();

	// Object: Function VariantManagerContent.Variant.GetParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x405579c
	// Params: [ Num(1) Size(0x8) ]
	struct UVariantSet* GetParent();

	// Object: Function VariantManagerContent.Variant.GetNumDependencies
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4054b98
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumDependencies();

	// Object: Function VariantManagerContent.Variant.GetNumActors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4055590
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumActors();

	// Object: Function VariantManagerContent.Variant.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40555c4
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();

	// Object: Function VariantManagerContent.Variant.GetDependents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4054f98
	// Params: [ Num(3) Size(0x20) ]
	struct TArray<struct UVariant*> GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);

	// Object: Function VariantManagerContent.Variant.GetDependency
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4054da8
	// Params: [ Num(2) Size(0x60) ]
	struct FVariantDependency GetDependency(int32_t Index);

	// Object: Function VariantManagerContent.Variant.GetActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40554e0
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetActor(int32_t ActorIndex);

	// Object: Function VariantManagerContent.Variant.DeleteDependency
	// Flags: [Final|Native|Public]
	// Offset: 0x4054bcc
	// Params: [ Num(1) Size(0x4) ]
	void DeleteDependency(int32_t Index);

	// Object: Function VariantManagerContent.Variant.AddDependency
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4054e98
	// Params: [ Num(2) Size(0x5C) ]
	int32_t AddDependency(struct FVariantDependency& Dependency);
};

// Object: Class VariantManagerContent.VariantObjectBinding
// Size: 0x90 (Inherited: 0x28)
struct UVariantObjectBinding : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVariantObjectBinding, "VariantObjectBinding")

	struct FString CachedActorLabel; // 0x28(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38(0x18)
	struct TLazyObjectPtr<struct UObject> LazyObjectPtr; // 0x50(0x1C)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x70(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Object: Class VariantManagerContent.VariantSet
// Size: 0x78 (Inherited: 0x28)
struct UVariantSet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVariantSet, "VariantSet")

	struct FText DisplayText; // 0x28(0x18)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	bool bExpanded; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)
	struct UTexture2D* Thumbnail; // 0x70(0x8)

	// Object: Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4055b38
	// Params: [ Num(1) Size(0x8) ]
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail);

	// Object: Function VariantManagerContent.VariantSet.SetThumbnailFromFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4055a34
	// Params: [ Num(1) Size(0x10) ]
	void SetThumbnailFromFile(struct FString FilePath);

	// Object: Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4055848
	// Params: [ Num(0) Size(0x0) ]
	void SetThumbnailFromEditorViewport();

	// Object: Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x405585c
	// Params: [ Num(5) Size(0x4C) ]
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);

	// Object: Function VariantManagerContent.VariantSet.SetDisplayText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4055ea0
	// Params: [ Num(1) Size(0x18) ]
	void SetDisplayText(const struct FText& NewDisplayText);

	// Object: Function VariantManagerContent.VariantSet.GetVariantByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4055be0
	// Params: [ Num(2) Size(0x18) ]
	struct UVariant* GetVariantByName(struct FString VariantName);

	// Object: Function VariantManagerContent.VariantSet.GetVariant
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4055cf0
	// Params: [ Num(2) Size(0x10) ]
	struct UVariant* GetVariant(int32_t VariantIndex);

	// Object: Function VariantManagerContent.VariantSet.GetThumbnail
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4055814
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetThumbnail();

	// Object: Function VariantManagerContent.VariantSet.GetParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4055fac
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelVariantSets* GetParent();

	// Object: Function VariantManagerContent.VariantSet.GetNumVariants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4055da0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumVariants();

	// Object: Function VariantManagerContent.VariantSet.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4055dd4
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();
};

} // namespace SDK
