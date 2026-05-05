#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UIParticular
// Enums: 2
// Structs: 0
// Classes: 5

struct FSlateBrush;
struct FSlateColor;
struct ISlateTextureAtlasInterface;
struct UFXSystemAsset;
struct UFXSystemComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UStaticMesh;
struct UTexture2D;
struct UTexture2DDynamic;
struct UUserWidget;
struct UWidgetAnimation;
struct UInstanceTemplateWidget;
struct UParticleWidget;
struct UUICascadedComponent;
struct UUIMeshWidget;
struct UUMGStaticsLibrary;

// Object: Enum UIParticular.EParticleAxisFlags
enum class EParticleAxisFlags : uint8_t
{
	XY = 0,
	XZ = 1,
	EParticleAxisFlags_MAX = 2
};

// Object: Enum UIParticular.EUMGPlayAnimMode
enum class EUMGPlayAnimMode : uint8_t
{
	Page_In = 0,
	Page_Out = 1,
	Anim_Loop = 2,
	Btn_Click = 3,
	EUMGPlayAnimMode_MAX = 4
};

// Object: Class UIParticular.InstanceTemplateWidget
// Size: 0x298 (Inherited: 0x158)
struct UInstanceTemplateWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UInstanceTemplateWidget, "InstanceTemplateWidget")

	struct TSoftObjectPtr<UUserWidget> WidgetTemplate; // 0x158(0x28)
	uint8_t bAutoActivate : 1; // 0x180(0x1), Mask(0x1)
	uint8_t BitPad_0x180_1 : 7; // 0x180(0x1)
	uint8_t TickWhenPaused : 1; // 0x181(0x1), Mask(0x1)
	uint8_t BitPad_0x181_1 : 7; // 0x181(0x1)
	uint8_t bReactivate : 1; // 0x182(0x1), Mask(0x1)
	uint8_t BitPad_0x182_1 : 7; // 0x182(0x1)
	uint8_t bCullWhenLeaveViewport : 1; // 0x183(0x1), Mask(0x1)
	uint8_t BitPad_0x183_1 : 7; // 0x183(0x1)
	struct FRotator MeshRotate; // 0x184(0xC)
	float fRotate; // 0x190(0x4)
	struct FName RotateName; // 0x194(0x8)
	uint8_t FakeDepthScale : 1; // 0x19C(0x1), Mask(0x1)
	uint8_t BitPad_0x19C_1 : 7; // 0x19C(0x1)
	uint8_t Pad_0x19D[0x3]; // 0x19D(0x3)
	float FakeDepthScaleDistance; // 0x1A0(0x4)
	uint8_t DisableWarnings : 1; // 0x1A4(0x1), Mask(0x1)
	uint8_t BitPad_0x1A4_1 : 7; // 0x1A4(0x1)
	uint8_t Pad_0x1A5[0x3]; // 0x1A5(0x3)
	struct FSlateBrush Brush; // 0x1A8(0x90)
	struct TArray<struct FVector2D> MeshUVArray; // 0x238(0x10)
	struct TArray<struct FVector> MeshPositionArray; // 0x248(0x10)
	struct TArray<struct FVector> MeshOrginPosArray; // 0x258(0x10)
	struct TArray<uint32_t> MeshIndexArray; // 0x268(0x10)
	struct TArray<struct FColor> MeshColorArray; // 0x278(0x10)
	uint8_t Pad_0x288[0x10]; // 0x288(0x10)

	// Object: Function UIParticular.InstanceTemplateWidget.SetTickWhenPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x794fc5c
	// Params: [ Num(1) Size(0x1) ]
	void SetTickWhenPaused(uint8_t NewTickWhenPaused);

	// Object: Function UIParticular.InstanceTemplateWidget.SetReactivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x794fbb0
	// Params: [ Num(1) Size(0x1) ]
	void SetReactivate(uint8_t bActivateAndReset);

	// Object: Function UIParticular.InstanceTemplateWidget.SetMeshRotate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x794fb0c
	// Params: [ Num(1) Size(0xC) ]
	void SetMeshRotate(struct FRotator inRotator);

	// Object: Function UIParticular.InstanceTemplateWidget.ActivateMeshs
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x794fa1c
	// Params: [ Num(2) Size(0x2) ]
	void ActivateMeshs(uint8_t bActive, uint8_t bReset);
};

// Object: Class UIParticular.ParticleWidget
// Size: 0x1B8 (Inherited: 0x158)
struct UParticleWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UParticleWidget, "ParticleWidget")

	struct UFXSystemAsset* ParticleSystemTemplate; // 0x158(0x8)
	uint8_t bAutoActivate : 1; // 0x160(0x1), Mask(0x1)
	uint8_t BitPad_0x160_1 : 7; // 0x160(0x1)
	EParticleAxisFlags ParticleAxis; // 0x161(0x1)
	uint8_t TickWhenPaused : 1; // 0x162(0x1), Mask(0x1)
	uint8_t BitPad_0x162_1 : 7; // 0x162(0x1)
	uint8_t bReactivate : 1; // 0x163(0x1), Mask(0x1)
	uint8_t BitPad_0x163_1 : 7; // 0x163(0x1)
	uint8_t bCullWhenLeaveViewport : 1; // 0x164(0x1), Mask(0x1)
	uint8_t BitPad_0x164_1 : 7; // 0x164(0x1)
	uint8_t Pad_0x165[0x3]; // 0x165(0x3)
	struct FRotator ParticleRotate; // 0x168(0xC)
	float fRotate; // 0x174(0x4)
	struct FName RotateName; // 0x178(0x8)
	float SizeScale; // 0x180(0x4)
	uint8_t FakeDepthScale : 1; // 0x184(0x1), Mask(0x1)
	uint8_t BitPad_0x184_1 : 7; // 0x184(0x1)
	uint8_t Pad_0x185[0x3]; // 0x185(0x3)
	float FakeDepthScaleDistance; // 0x188(0x4)
	uint8_t DisableWarnings : 1; // 0x18C(0x1), Mask(0x1)
	uint8_t BitPad_0x18C_1 : 7; // 0x18C(0x1)
	uint8_t Pad_0x18D[0x3]; // 0x18D(0x3)
	struct TArray<struct UMaterialInterface*> MaterialRemapArray; // 0x190(0x10)
	struct UFXSystemComponent* WorldParticleComponent; // 0x1A0(0x8)
	uint8_t Pad_0x1A8[0x10]; // 0x1A8(0x10)

	// Object: Function UIParticular.ParticleWidget.SetTickWhenPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79501b8
	// Params: [ Num(1) Size(0x1) ]
	void SetTickWhenPaused(uint8_t NewTickWhenPaused);

	// Object: Function UIParticular.ParticleWidget.SetSizeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7950114
	// Params: [ Num(1) Size(0x4) ]
	void SetSizeScale(float InScale);

	// Object: Function UIParticular.ParticleWidget.SetReactivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7950068
	// Params: [ Num(1) Size(0x1) ]
	void SetReactivate(uint8_t bActivateAndReset);

	// Object: Function UIParticular.ParticleWidget.SetParticleRotate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x794ffc4
	// Params: [ Num(1) Size(0xC) ]
	void SetParticleRotate(struct FRotator inRotator);

	// Object: Function UIParticular.ParticleWidget.SetParticleAxis
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x794ff20
	// Params: [ Num(1) Size(0x1) ]
	void SetParticleAxis(EParticleAxisFlags inAxis);

	// Object: Function UIParticular.ParticleWidget.ActivateParticles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x794fe30
	// Params: [ Num(2) Size(0x2) ]
	void ActivateParticles(uint8_t bActive, uint8_t bReset);
};

// Object: Class UIParticular.UICascadedComponent
// Size: 0x830 (Inherited: 0x800)
struct UUICascadedComponent : UParticleSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UUICascadedComponent, "UICascadedComponent")

	uint8_t Pad_0x800[0x30]; // 0x800(0x30)
};

// Object: Class UIParticular.UIMeshWidget
// Size: 0xC80 (Inherited: 0x158)
struct UUIMeshWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UUIMeshWidget, "UIMeshWidget")

	struct TSoftObjectPtr<UStaticMesh> MeshRes; // 0x158(0x28)
	struct FTransform Transform; // 0x180(0x30)
	struct FSlateBrush Brush; // 0x1B0(0x90)
	struct FLinearColor ColorAndOpacity; // 0x240(0x10)
	uint8_t bFill : 1; // 0x250(0x1), Mask(0x1)
	uint8_t BitPad_0x250_1 : 7; // 0x250(0x1)
	uint8_t bEnableVertexColor : 1; // 0x251(0x1), Mask(0x1)
	uint8_t BitPad_0x251_1 : 7; // 0x251(0x1)
	uint8_t bUseOriginVertex : 1; // 0x252(0x1), Mask(0x1)
	uint8_t BitPad_0x252_1 : 7; // 0x252(0x1)
	uint8_t bAutoActivate : 1; // 0x253(0x1), Mask(0x1)
	uint8_t BitPad_0x253_1 : 7; // 0x253(0x1)
	uint8_t TickWhenPaused : 1; // 0x254(0x1), Mask(0x1)
	uint8_t BitPad_0x254_1 : 7; // 0x254(0x1)
	uint8_t bAdjustViewInfo : 1; // 0x255(0x1), Mask(0x1)
	uint8_t BitPad_0x255_1 : 7; // 0x255(0x1)
	uint8_t FakeDepthScale : 1; // 0x256(0x1), Mask(0x1)
	uint8_t BitPad_0x256_1 : 7; // 0x256(0x1)
	uint8_t Pad_0x257[0x1]; // 0x257(0x1)
	float FakeDepthScaleDistance; // 0x258(0x4)
	uint8_t DisableWarnings : 1; // 0x25C(0x1), Mask(0x1)
	uint8_t BitPad_0x25C_1 : 7; // 0x25C(0x1)
	uint8_t Pad_0x25D[0x3]; // 0x25D(0x3)
	struct TArray<struct FVector2D> MeshUVArray; // 0x260(0x10)
	struct TArray<struct FVector> MeshPositionArray; // 0x270(0x10)
	struct TArray<struct FVector> MeshOriginPosArray; // 0x280(0x10)
	struct TArray<uint32_t> MeshIndexArray; // 0x290(0x10)
	struct TArray<struct FColor> MeshColorArray; // 0x2A0(0x10)
	uint8_t Pad_0x2B0[0x9D0]; // 0x2B0(0x9D0)

	// Object: Function UIParticular.UIMeshWidget.SetTickWhenPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7950b68
	// Params: [ Num(1) Size(0x1) ]
	void SetTickWhenPaused(uint8_t NewTickWhenPaused);

	// Object: Function UIParticular.UIMeshWidget.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7950ac4
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UIParticular.UIMeshWidget.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7950a20
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UIParticular.UIMeshWidget.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x795088c
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function UIParticular.UIMeshWidget.SetBrushResourceObject
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x79507e0
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushResourceObject(struct UObject* ResourceObject);

	// Object: Function UIParticular.UIMeshWidget.SetBrushFromTextureDynamic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x79506f0
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, uint8_t bMatchSize);

	// Object: Function UIParticular.UIMeshWidget.SetBrushFromTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7950600
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTexture(struct UTexture2D* Texture, uint8_t bMatchSize);

	// Object: Function UIParticular.UIMeshWidget.SetBrushFromMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x109d4598
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UIParticular.UIMeshWidget.SetBrushFromAtlasInterface
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7950500
	// Params: [ Num(2) Size(0x11) ]
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function UIParticular.UIMeshWidget.SetBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x79503e4
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UIParticular.UIMeshWidget.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79503b0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UIParticular.UMGStaticsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUMGStaticsLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUMGStaticsLibrary, "UMGStaticsLibrary")

	// Object: Function UIParticular.UMGStaticsLibrary.PlayAnimationByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7951014
	// Params: [ Num(5) Size(0x30) ]
	static float PlayAnimationByName(struct UUserWidget* UserWidget, struct FString AnimName, struct FString WidgetName, EUMGPlayAnimMode PlayMode);

	// Object: Function UIParticular.UMGStaticsLibrary.GetWidgetAnimation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7950f2c
	// Params: [ Num(3) Size(0x20) ]
	static struct UWidgetAnimation* GetWidgetAnimation(struct UUserWidget* UserWidget, struct FString AnimName);

	// Object: Function UIParticular.UMGStaticsLibrary.GetAllWidgetAnimations
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7950e48
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UWidgetAnimation*> GetAllWidgetAnimations(struct UUserWidget* UserWidget);

	// Object: Function UIParticular.UMGStaticsLibrary.BP_FindWidgetbyName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7950d10
	// Params: [ Num(3) Size(0x20) ]
	static struct UUserWidget* BP_FindWidgetbyName(struct UUserWidget* UserWidget, struct FString WidgetName);
};

} // namespace SDK
