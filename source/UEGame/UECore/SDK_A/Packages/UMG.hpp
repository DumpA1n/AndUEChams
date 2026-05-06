#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include "MovieSceneTracks.hpp"
#include "PropertyPath.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: UMG
// Enums: 20
// Structs: 23
// Classes: 116

struct AActor;
struct APawn;
struct APlayerCameraManager;
struct APlayerController;
enum class ECheckBoxState : uint8_t;
enum class EColorVisionDeficiency : uint8_t;
enum class EConsumeMouseWheel : uint8_t;
enum class EDescendantScrollDestination : uint8_t;
enum class EFlowDirectionPreference : uint8_t;
enum class EListItemAlignment : uint8_t;
enum class EMaskGeometryType : uint8_t;
enum class EMouseLockMode : uint8_t;
enum class EMovieSceneBlendType : uint8_t;
enum class EScrollWhenFocusChanges : uint8_t;
enum class ETextFlowDirection : uint8_t;
enum class ETextShapingMethod : uint8_t;
enum class ETextTransformPolicy : uint8_t;
enum class ETextWrappingPolicy : uint8_t;
enum class EUINavigation : uint8_t;
enum class EUINavigationRule : uint8_t;
enum class EVirtualKeyboardDismissAction : uint8_t;
enum class EVirtualKeyboardTrigger : uint8_t;
enum class EWidgetClipping : uint8_t;
enum class EWindowTitleBarMode : uint8_t;
struct FAnalogInputEvent;
struct FAnchors;
struct FButtonStyle;
struct FCharacterEvent;
struct FFocusEvent;
struct FGeometry;
struct FHitResult;
struct FInputChord;
struct FInputEvent;
struct FKey;
struct FKeyEvent;
struct FMargin;
struct FMotionEvent;
struct FNavigationEvent;
struct FPointerEvent;
struct FSlateBrush;
struct FSlateColor;
struct FSlateFontInfo;
struct FTextBlockStyle;
struct ISlateTextureAtlasInterface;
struct UBodySetup;
struct UDataTable;
struct UFont;
struct UGameInstance;
struct UInputComponent;
struct ULocalPlayer;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMovieScene;
struct UMovieSceneEntitySystemLinker;
struct USlateBrushAsset;
struct USlateWidgetStyleAsset;
struct USoundBase;
struct UTexture2D;
struct UTexture2DDynamic;
struct UTextureRenderTarget2D;
struct UWorld;
struct FEventReply;
struct FWidgetTransform;
struct FPaintContext;
struct FShapedTextOptions;
struct FAnchorData;
struct FDynamicPropertyPath;
struct FMovieScene2DTransformMask;
struct FMovieSceneMarginSectionTemplate;
struct FMovieSceneWidgetMaterialSectionTemplate;
struct FRadialBoxSettings;
struct FRichTextStyleRow;
struct FRichImageRow;
struct FSlateMeshVertex;
struct FSlateChildSize;
struct FNamedSlotBinding;
struct FAnimationEventBinding;
struct FUserWidgetPool;
struct FWidgetAnimationBinding;
struct FBlueprintWidgetAnimationDelegateBinding;
struct FDelegateRuntimeBinding;
struct FWidgetComponentInstanceData;
struct FWidgetNavigationData;
struct FLazyLoadBinding;
struct UVisual;
struct UWidget;
struct UPanelWidget;
struct UContentWidget;
struct UUserWidget;
struct UTextLayoutWidget;
struct UButton;
struct UCanvasPanel;
struct UListViewBase;
struct UListView;
struct UTreeView;
struct UWidgetComponent;
struct UWidgetToRenderTargetComponent;
struct UBorder;
struct USlider;
struct UImage;
struct URichTextBlock;
struct URichTextBlockDecorator;
struct UScrollBox;
struct UOverlay;
struct UPanelSlot;
struct UOverlaySlot;
struct UTileView;
struct UAsyncTaskDownloadImage;
struct UBackgroundBlur;
struct UBackgroundBlurSlot;
struct UPropertyBinding;
struct UBoolBinding;
struct UBorderSlot;
struct UBrushBinding;
struct UButtonSlot;
struct UCanvasPanelSlot;
struct UCheckBox;
struct UCheckedStateBinding;
struct UCircularThrobber;
struct UColorBinding;
struct UComboBox;
struct UComboBoxString;
struct UDragDropOperation;
struct UDynamicEntryBoxBase;
struct UDynamicEntryBox;
struct UEditableText;
struct UEditableTextBox;
struct UExpandableArea;
struct UFloatBinding;
struct UGridPanel;
struct UGridSlot;
struct UHorizontalBox;
struct UHorizontalBoxSlot;
struct UInputKeySelector;
struct UInt32Binding;
struct UInvalidationBox;
struct IUserListEntry;
struct UUserListEntryLibrary;
struct IUserObjectListEntry;
struct UUserObjectListEntryLibrary;
struct UListItemData;
struct UListViewDesignerPreviewItem;
struct UMenuAnchor;
struct UMouseCursorBinding;
struct UMovieScene2DTransformPropertySystem;
struct UMovieScene2DTransformSection;
struct UMovieScene2DTransformTrack;
struct UMovieSceneMarginSection;
struct UMovieSceneMarginTrack;
struct UMovieSceneWidgetMaterialTrack;
struct UMultiLineEditableText;
struct UMultiLineEditableTextBox;
struct UNamedSlot;
struct INamedSlotInterface;
struct UNativeWidgetHost;
struct UProgressBar;
struct URetainerBox;
struct URichTextBlockImageDecorator;
struct USafeZone;
struct USafeZoneSlot;
struct UScaleBox;
struct UScaleBoxSlot;
struct UScrollBar;
struct UScrollBoxSlot;
struct USizeBox;
struct USizeBoxSlot;
struct USlateBlueprintLibrary;
struct USlateVectorArtData;
struct USlateAccessibleWidgetData;
struct USpacer;
struct USpinBox;
struct UTextBinding;
struct UTextBlock;
struct UThrobber;
struct UUMGSequencePlayer;
struct UUMGSequenceTickManager;
struct UUniformGridPanel;
struct UUniformGridSlot;
struct UVerticalBox;
struct UVerticalBoxSlot;
struct UViewport;
struct UVisibilityBinding;
struct UVisibilityWidgetSwitcher;
struct UWidgetAnimation;
struct UWidgetAnimationDelegateBinding;
struct UWidgetAnimationPlayCallbackProxy;
struct UWidgetBinding;
struct UWidgetBlueprintGeneratedClass;
struct UWidgetBlueprintLibrary;
struct UWidgetInteractionComponent;
struct UWidgetLayoutLibrary;
struct UWidgetNavigation;
struct UWidgetSwitcher;
struct UWidgetSwitcherSlot;
struct UWidgetTree;
struct UWindowTitleBarArea;
struct UWindowTitleBarAreaSlot;
struct UWrapBox;
struct UWrapBoxSlot;
struct Default__WidgetBlueprintGeneratedClass;

// Object: Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Object: Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Object: Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Object: Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Object: Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6
};

// Object: Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Object: Enum UMG.EVisiblityScope
enum class EVisiblityScope : uint8_t
{
	OnlyOversea = 0,
	OnlyCN = 1,
	OverseaAndCN = 2,
	EVisiblityScope_MAX = 3
};

// Object: Enum UMG.ELocalizationFeature
enum class ELocalizationFeature : uint8_t
{
	None = 0,
	AllOversea = 1,
	English = 2,
	ELocalizationFeature_MAX = 3
};

// Object: Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Object: Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Object: Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Object: Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Object: Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Object: Enum UMG.ETickMode
enum class ETickMode : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3
};

// Object: Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Object: Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Object: Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Object: Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Object: Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Object: Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// Object: ScriptStruct UMG.EventReply
// Size: 0xB8 (Inherited: 0x0)
struct FEventReply
{
	uint8_t Pad_0x0[0xB8]; // 0x0(0xB8)
};

// Object: ScriptStruct UMG.WidgetTransform
// Size: 0x24 (Inherited: 0x0)
struct FWidgetTransform
{
	struct FVector2D Translation; // 0x0(0x8)
	struct FVector2D Scale; // 0x8(0x8)
	struct FVector2D Scale_Oversea; // 0x10(0x8)
	struct FVector2D Shear; // 0x18(0x8)
	float Angle; // 0x20(0x4)
};

// Object: ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x0)
struct FPaintContext
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct UMG.ShapedTextOptions
// Size: 0x3 (Inherited: 0x0)
struct FShapedTextOptions
{
	uint8_t bOverride_TextShapingMethod : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_TextFlowDirection : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	ETextShapingMethod TextShapingMethod; // 0x1(0x1)
	ETextFlowDirection TextFlowDirection; // 0x2(0x1)
};

// Object: ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x0)
struct FAnchorData
{
	struct FMargin Offsets; // 0x0(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x8)
};

// Object: ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath
{
};

// Object: ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieScene2DTransformMask
{
	uint32_t mask; // 0x0(0x4)
};

// Object: ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2B8 (Inherited: 0x30)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel TopCurve; // 0x30(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xD0(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x170(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x210(0xA0)
	EMovieSceneBlendType BlendType; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x7]; // 0x2B1(0x7)
};

// Object: ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x88 (Inherited: 0x78)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FName> BrushPropertyNamePath; // 0x78(0x10)
};

// Object: ScriptStruct UMG.RadialBoxSettings
// Size: 0xC (Inherited: 0x0)
struct FRadialBoxSettings
{
	bool bDistributeItemsEvenly; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AngleBetweenItems; // 0x4(0x4)
	float StartingAngle; // 0x8(0x4)
};

// Object: ScriptStruct UMG.RichTextStyleRow
// Size: 0x298 (Inherited: 0x8)
struct FRichTextStyleRow : FTableRowBase
{
	struct FTextBlockStyle TextStyle; // 0x8(0x290)
};

// Object: ScriptStruct UMG.RichImageRow
// Size: 0x98 (Inherited: 0x8)
struct FRichImageRow : FTableRowBase
{
	struct FSlateBrush Brush; // 0x8(0x90)
};

// Object: ScriptStruct UMG.SlateMeshVertex
// Size: 0x3C (Inherited: 0x0)
struct FSlateMeshVertex
{
	struct FVector2D position; // 0x0(0x8)
	struct FColor Color; // 0x8(0x4)
	struct FVector2D UV0; // 0xC(0x8)
	struct FVector2D UV1; // 0x14(0x8)
	struct FVector2D UV2; // 0x1C(0x8)
	struct FVector2D UV3; // 0x24(0x8)
	struct FVector2D UV4; // 0x2C(0x8)
	struct FVector2D UV5; // 0x34(0x8)
};

// Object: ScriptStruct UMG.SlateChildSize
// Size: 0x8 (Inherited: 0x0)
struct FSlateChildSize
{
	float Value; // 0x0(0x4)
	uint8_t SizeRule; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x0)
struct FNamedSlotBinding
{
	struct FName Name; // 0x0(0x8)
	struct UWidget* Content; // 0x8(0x8)
};

// Object: ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x0)
struct FAnimationEventBinding
{
	struct UWidgetAnimation* Animation; // 0x0(0x8)
	struct FDelegate Delegate; // 0x8(0x10)
	EWidgetAnimationEvent AnimationEvent; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName UserTag; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct UMG.UserWidgetPool
// Size: 0x90 (Inherited: 0x0)
struct FUserWidgetPool
{
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x0(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgetsPreserveOrder; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x0)
struct FWidgetAnimationBinding
{
	struct FName WidgetName; // 0x0(0x8)
	struct FName SlotWidgetName; // 0x8(0x8)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1C (Inherited: 0x0)
struct FBlueprintWidgetAnimationDelegateBinding
{
	EWidgetAnimationEvent Action; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName AnimationToBind; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
	struct FName UserTag; // 0x14(0x8)
};

// Object: ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x0)
struct FDelegateRuntimeBinding
{
	struct FString ObjectName; // 0x0(0x10)
	struct FName PropertyName; // 0x10(0x8)
	struct FName FunctionName; // 0x18(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	EBindingKind Kind; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xC8 (Inherited: 0xB8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xB8[0x10]; // 0xB8(0x10)
};

// Object: ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x0)
struct FWidgetNavigationData
{
	EUINavigationRule Rule; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName WidgetToFocus; // 0x4(0x8)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0xC(0x8)
	struct FDelegate CustomDelegate; // 0x14(0x10)
};

// Object: ScriptStruct UMG.LazyLoadBinding
// Size: 0x20 (Inherited: 0x0)
struct FLazyLoadBinding
{
	struct FString Name; // 0x0(0x10)
	struct TWeakObjectPtr<struct UPanelSlot> PanelSlot; // 0x10(0x8)
	ESlateVisibility Visibility; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVisual, "Visual")
};

// Object: Class UMG.Widget
// Size: 0x130 (Inherited: 0x28)
struct UWidget : UVisual
{
	DEFINE_UE_CLASS_HELPERS(UWidget, "Widget")

	struct UPanelSlot* Slot; // 0x28(0x8)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x8)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	EMaskGeometryType MaskGeometryType; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FVector2D MaskGeometryMargin; // 0x84(0x8)
	struct FDelegate VisibilityDelegate; // 0x8C(0x10)
	struct FWidgetTransform RenderTransform; // 0x9C(0x24)
	struct FVector2D RenderTransformPivot; // 0xC0(0x8)
	uint8_t bIsVariable : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t bCreatedByConstructionScript : 1; // 0xC8(0x1), Mask(0x2)
	uint8_t bIsEnabled : 1; // 0xC8(0x1), Mask(0x4)
	uint8_t bOverride_Cursor : 1; // 0xC8(0x1), Mask(0x8)
	uint8_t BitPad_0xC8_4 : 4; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xD0(0x8)
	uint8_t bIsVolatile : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x1]; // 0xD9(0x1)
	uint8_t Cursor; // 0xDA(0x1)
	EWidgetClipping Clipping; // 0xDB(0x1)
	ESlateVisibility Visibility; // 0xDC(0x1)
	uint8_t Pad_0xDD[0x3]; // 0xDD(0x3)
	float RenderOpacity; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct UWidgetNavigation* Navigation; // 0xE8(0x8)
	EFlowDirectionPreference FlowDirectionPreference; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x27]; // 0xF1(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x118(0x10)
	int32_t PaintOffsetFlag; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)

	// Object: Function UMG.Widget.SetVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x625e278
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(ESlateVisibility InVisibility);

	// Object: Function UMG.Widget.SetUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08aca0
	// Params: [ Num(1) Size(0x8) ]
	void SetUserFocus(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.SetToolTipText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08b2b8
	// Params: [ Num(1) Size(0x18) ]
	void SetToolTipText(const struct FText& InToolTipText);

	// Object: Function UMG.Widget.SetToolTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08b210
	// Params: [ Num(1) Size(0x8) ]
	void SetToolTip(struct UWidget* Widget);

	// Object: Function UMG.Widget.SetRenderTranslationXY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84a1300
	// Params: [ Num(2) Size(0x8) ]
	void SetRenderTranslationXY(float X, float Y);

	// Object: Function UMG.Widget.SetRenderTranslation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9dc4aa4
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTranslation(struct FVector2D Translation);

	// Object: Function UMG.Widget.SetRenderTransformPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x87eeea0
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTransformPivot(struct FVector2D Pivot);

	// Object: Function UMG.Widget.SetRenderTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dc4b48
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderTransformAngle(float Angle);

	// Object: Function UMG.Widget.SetRenderTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x678de44
	// Params: [ Num(1) Size(0x24) ]
	void SetRenderTransform(struct FWidgetTransform InTransform);

	// Object: Function UMG.Widget.SetRenderShear
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb08b3f8
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderShear(struct FVector2D Shear);

	// Object: Function UMG.Widget.SetRenderScaleXY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dc4bf0
	// Params: [ Num(2) Size(0x8) ]
	void SetRenderScaleXY(float X, float Y);

	// Object: Function UMG.Widget.SetRenderScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x85de194
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderScale(struct FVector2D Scale);

	// Object: Function UMG.Widget.SetRenderOpacity
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9dc48d4
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderOpacity(float InOpacity);

	// Object: Function UMG.Widget.SetPaintOffsetFlag
	// Flags: [Native|Public]
	// Offset: 0xb08a394
	// Params: [ Num(1) Size(0x4) ]
	void SetPaintOffsetFlag(int32_t InPaintOffset);

	// Object: Function UMG.Widget.SetNavigationRuleExplicit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08a898
	// Params: [ Num(2) Size(0x10) ]
	void SetNavigationRuleExplicit(EUINavigation Direction, struct UWidget* InWidget);

	// Object: Function UMG.Widget.SetNavigationRuleCustomBoundary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08a6a8
	// Params: [ Num(2) Size(0x14) ]
	void SetNavigationRuleCustomBoundary(EUINavigation Direction, struct FDelegate InCustomDelegate);

	// Object: Function UMG.Widget.SetNavigationRuleCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08a7a0
	// Params: [ Num(2) Size(0x14) ]
	void SetNavigationRuleCustom(EUINavigation Direction, struct FDelegate InCustomDelegate);

	// Object: Function UMG.Widget.SetNavigationRuleBase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08a980
	// Params: [ Num(2) Size(0x2) ]
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);

	// Object: Function UMG.Widget.SetNavigationRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08aa68
	// Params: [ Num(3) Size(0xC) ]
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, struct FName WidgetToFocus);

	// Object: Function UMG.Widget.SetKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08af34
	// Params: [ Num(0) Size(0x0) ]
	void SetKeyboardFocus();

	// Object: Function UMG.Widget.SetIsEnabled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9dc49ec
	// Params: [ Num(1) Size(0x1) ]
	void SetIsEnabled(bool bInIsEnabled);

	// Object: Function UMG.Widget.SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08ad48
	// Params: [ Num(0) Size(0x0) ]
	void SetFocus();

	// Object: Function UMG.Widget.SetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08b168
	// Params: [ Num(1) Size(0x1) ]
	void SetCursor(uint8_t InCursor);

	// Object: Function UMG.Widget.SetClipping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97dc844
	// Params: [ Num(1) Size(0x1) ]
	void SetClipping(EWidgetClipping InClipping);

	// Object: Function UMG.Widget.SetAllNavigationRules
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08ab90
	// Params: [ Num(2) Size(0xC) ]
	void SetAllNavigationRules(EUINavigationRule Rule, struct FName WidgetToFocus);

	// Object: Function UMG.Widget.ResetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08b154
	// Params: [ Num(0) Size(0x0) ]
	void ResetCursor();

	// Object: Function UMG.Widget.RemoveFromParent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb08a68c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromParent();

	// Object: Function UMG.Widget.RecursiveIsVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x6a1a324
	// Params: [ Num(1) Size(0x1) ]
	bool RecursiveIsVisible();

	// Object: DelegateFunction UMG.Widget.OnReply__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0xB8) ]
	struct FEventReply OnReply__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	// Flags: [Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.Widget.IsVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08b11c
	// Params: [ Num(1) Size(0x1) ]
	bool IsVisible();

	// Object: Function UMG.Widget.IsHovered
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08b0a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsHovered();

	// Object: Function UMG.Widget.InvalidateLayoutAndVolatility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08ac78
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateLayoutAndVolatility();

	// Object: Function UMG.Widget.HasUserFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08ad5c
	// Params: [ Num(2) Size(0x9) ]
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.HasUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08ae80
	// Params: [ Num(2) Size(0x9) ]
	bool HasUserFocus(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.HasMouseCaptureByUser
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08af48
	// Params: [ Num(3) Size(0x9) ]
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);

	// Object: Function UMG.Widget.HasMouseCapture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08b038
	// Params: [ Num(1) Size(0x1) ]
	bool HasMouseCapture();

	// Object: Function UMG.Widget.HasKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08b070
	// Params: [ Num(1) Size(0x1) ]
	bool HasKeyboardFocus();

	// Object: Function UMG.Widget.HasFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08ae10
	// Params: [ Num(1) Size(0x1) ]
	bool HasFocusedDescendants();

	// Object: Function UMG.Widget.HasAnyUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08ae48
	// Params: [ Num(1) Size(0x1) ]
	bool HasAnyUserFocus();

	// Object: DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetWidget__DelegateSignature();

	// Object: Function UMG.Widget.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dc49b8
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetVisibility();

	// Object: Function UMG.Widget.GetTickSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a654
	// Params: [ Num(1) Size(0x38) ]
	struct FGeometry GetTickSpaceGeometry();

	// Object: DelegateFunction UMG.Widget.GetText__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetSlateVisibility__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x28) ]
	struct FSlateColor GetSlateColor__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x90) ]
	struct FSlateBrush GetSlateBrush__DelegateSignature();

	// Object: Function UMG.Widget.GetRenderTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08b3c4
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderTransformAngle();

	// Object: Function UMG.Widget.GetRenderOpacity
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dc4984
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderOpacity();

	// Object: Function UMG.Widget.GetParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83982ac
	// Params: [ Num(1) Size(0x8) ]
	struct UPanelWidget* GetParent();

	// Object: Function UMG.Widget.GetPaintSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x873c3e8
	// Params: [ Num(1) Size(0x38) ]
	struct FGeometry GetPaintSpaceGeometry();

	// Object: Function UMG.Widget.GetOwningPlayer
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a618
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerController* GetOwningPlayer();

	// Object: Function UMG.Widget.GetOwningLocalPlayer
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a5dc
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwningLocalPlayer();

	// Object: DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetMouseCursor__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLinearColor__DelegateSignature();

	// Object: Function UMG.Widget.GetIsEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x6e647ac
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsEnabled();

	// Object: DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInt32__DelegateSignature();

	// Object: Function UMG.Widget.GetGameInstance
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x90586dc
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();

	// Object: DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	float GetFloat__DelegateSignature();

	// Object: Function UMG.Widget.GetDesiredSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8d46478
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDesiredSize();

	// Object: Function UMG.Widget.GetClipping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08b0e8
	// Params: [ Num(1) Size(0x1) ]
	EWidgetClipping GetClipping();

	// Object: DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetCheckBoxState__DelegateSignature();

	// Object: Function UMG.Widget.GetCachedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dc489c
	// Params: [ Num(1) Size(0x38) ]
	struct FGeometry GetCachedGeometry();

	// Object: DelegateFunction UMG.Widget.GetBool__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	bool GetBool__DelegateSignature();

	// Object: Function UMG.Widget.GetAccessibleText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a510
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetAccessibleText();

	// Object: Function UMG.Widget.GetAccessibleSummaryText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a444
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetAccessibleSummaryText();

	// Object: DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString item);

	// Object: DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* item);

	// Object: Function UMG.Widget.ForceVolatile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x943d4dc
	// Params: [ Num(1) Size(0x1) ]
	void ForceVolatile(bool bForce);

	// Object: Function UMG.Widget.ForceLayoutPrepass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08ac8c
	// Params: [ Num(0) Size(0x0) ]
	void ForceLayoutPrepass();
};

// Object: Class UMG.PanelWidget
// Size: 0x148 (Inherited: 0x130)
struct UPanelWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UPanelWidget, "PanelWidget")

	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)

	// Object: Function UMG.PanelWidget.RemoveChildAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9848340
	// Params: [ Num(2) Size(0x5) ]
	bool RemoveChildAt(int32_t Index);

	// Object: Function UMG.PanelWidget.RemoveChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbc63c
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveChild(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.OnLazyChildCreated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0767f4
	// Params: [ Num(2) Size(0x10) ]
	void OnLazyChildCreated(struct UPanelSlot* PanelSlot, struct UWidget* Widget);

	// Object: Function UMG.PanelWidget.HasChild
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8b423d0
	// Params: [ Num(2) Size(0x9) ]
	bool HasChild(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.HasAnyChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0767bc
	// Params: [ Num(1) Size(0x1) ]
	bool HasAnyChildren();

	// Object: Function UMG.PanelWidget.GetChildrenCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dbc7a0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetChildrenCount();

	// Object: Function UMG.PanelWidget.GetChildIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x85bae90
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetChildIndex(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.GetChildAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dbc6f0
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetChildAt(int32_t Index);

	// Object: Function UMG.PanelWidget.GetAllChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8480d18
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UWidget*> GetAllChildren();

	// Object: Function UMG.PanelWidget.ClearChildren
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb0767a0
	// Params: [ Num(0) Size(0x0) ]
	void ClearChildren();

	// Object: Function UMG.PanelWidget.AddChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8466d28
	// Params: [ Num(2) Size(0x10) ]
	struct UPanelSlot* AddChild(struct UWidget* Content);
};

// Object: Class UMG.ContentWidget
// Size: 0x148 (Inherited: 0x148)
struct UContentWidget : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UContentWidget, "ContentWidget")

	// Object: Function UMG.ContentWidget.SetContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x942c54c
	// Params: [ Num(2) Size(0x10) ]
	struct UPanelSlot* SetContent(struct UWidget* Content);

	// Object: Function UMG.ContentWidget.GetContentSlot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06c0dc
	// Params: [ Num(1) Size(0x8) ]
	struct UPanelSlot* GetContentSlot();

	// Object: Function UMG.ContentWidget.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8815ad4
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetContent();
};

// Object: Class UMG.UserWidget
// Size: 0x290 (Inherited: 0x130)
struct UUserWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UUserWidget, "UserWidget")

	uint8_t Pad_0x130[0x8]; // 0x130(0x8)
	bool disableAnimForceLast; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	struct FLinearColor ColorAndOpacity; // 0x13C(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x14C(0x10)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct FSlateColor ForegroundColor; // 0x160(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x188(0x10)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x198(0x10)
	uint8_t Pad_0x1A8[0x18]; // 0x1A8(0x18)
	struct FMargin Padding; // 0x1C0(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1D0(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x1E0(0x8)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1E8(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1F8(0x10)
	struct UWidgetTree* WidgetTree; // 0x208(0x8)
	int32_t Priority; // 0x210(0x4)
	uint8_t bSupportsKeyboardFocus : 1; // 0x214(0x1), Mask(0x1)
	uint8_t bIsFocusable : 1; // 0x214(0x1), Mask(0x2)
	uint8_t bStopAction : 1; // 0x214(0x1), Mask(0x4)
	uint8_t bHasScriptImplementedTick : 1; // 0x214(0x1), Mask(0x8)
	uint8_t bHasScriptImplementedPaint : 1; // 0x214(0x1), Mask(0x10)
	uint8_t bLazyLoad : 1; // 0x214(0x1), Mask(0x20)
	uint8_t BitPad_0x214_6 : 2; // 0x214(0x1)
	uint8_t Pad_0x215[0xB]; // 0x215(0xB)
	EWidgetTickFrequency TickFrequency; // 0x220(0x1)
	bool BlueprintTickEnable; // 0x221(0x1)
	uint8_t Pad_0x222[0x6]; // 0x222(0x6)
	struct UInputComponent* InputComponent; // 0x228(0x8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x230(0x10)
	uint8_t Pad_0x240[0x50]; // 0x240(0x50)

	// Object: Function UMG.UserWidget.UnregisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb084684
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterInputComponent();

	// Object: Function UMG.UserWidget.UnbindFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08521c
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.UnbindFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e23e90
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.UnbindAllFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x98130a0
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.UnbindAllFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8719b1c
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x3C) ]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	// Object: Function UMG.UserWidget.StopListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb0846c0
	// Params: [ Num(2) Size(0x9) ]
	void StopListeningForInputAction(struct FName ActionName, uint8_t EventType);

	// Object: Function UMG.UserWidget.StopListeningForAllInputActions
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb0846ac
	// Params: [ Num(0) Size(0x0) ]
	void StopListeningForAllInputActions();

	// Object: Function UMG.UserWidget.StopAnimationsAndLatentActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97c5618
	// Params: [ Num(0) Size(0x0) ]
	void StopAnimationsAndLatentActions();

	// Object: Function UMG.UserWidget.StopAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7c08dac
	// Params: [ Num(1) Size(0x8) ]
	void StopAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.StopAllAnimations
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dc20f8
	// Params: [ Num(0) Size(0x0) ]
	void StopAllAnimations();

	// Object: Function UMG.UserWidget.SetPositionInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb085628
	// Params: [ Num(2) Size(0x9) ]
	void SetPositionInViewport(struct FVector2D position, bool bRemoveDPIScale);

	// Object: Function UMG.UserWidget.SetPlaybackSpeed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x845dabc
	// Params: [ Num(2) Size(0xC) ]
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed);

	// Object: Function UMG.UserWidget.SetPadding
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9dc210c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.UserWidget.SetOwningPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x97d7ccc
	// Params: [ Num(1) Size(0x8) ]
	void SetOwningPlayer(struct APlayerController* LocalPlayerController);

	// Object: Function UMG.UserWidget.SetNumLoopsToPlay
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb084b64
	// Params: [ Num(2) Size(0xC) ]
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);

	// Object: Function UMG.UserWidget.SetInputActionPriority
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb084528
	// Params: [ Num(1) Size(0x4) ]
	void SetInputActionPriority(int32_t NewPriority);

	// Object: Function UMG.UserWidget.SetInputActionBlocking
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb084478
	// Params: [ Num(1) Size(0x1) ]
	void SetInputActionBlocking(bool bShouldBlock);

	// Object: Function UMG.UserWidget.SetForegroundColor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb084e6c
	// Params: [ Num(1) Size(0x28) ]
	void SetForegroundColor(struct FSlateColor InForegroundColor);

	// Object: Function UMG.UserWidget.SetDesiredSizeInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb085584
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredSizeInViewport(struct FVector2D Size);

	// Object: Function UMG.UserWidget.SetColorAndOpacity
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9dc21b8
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.UserWidget.SetBlueprintTickEnable
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x940efac
	// Params: [ Num(1) Size(0x1) ]
	void SetBlueprintTickEnable(bool bTickEnable);

	// Object: Function UMG.UserWidget.SetAnimationForceLastEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb084ff4
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimationForceLastEnable(bool Enable);

	// Object: Function UMG.UserWidget.SetAnimationCurrentTime
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8b91ca4
	// Params: [ Num(2) Size(0xC) ]
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime);

	// Object: Function UMG.UserWidget.SetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb0854d8
	// Params: [ Num(1) Size(0x10) ]
	void SetAnchorsInViewport(struct FAnchors Anchors);

	// Object: Function UMG.UserWidget.SetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb085434
	// Params: [ Num(1) Size(0x8) ]
	void SetAlignmentInViewport(struct FVector2D Alignment);

	// Object: Function UMG.UserWidget.ReverseAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb084abc
	// Params: [ Num(1) Size(0x8) ]
	void ReverseAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.RemoveFromViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9dc2260
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromViewport();

	// Object: Function UMG.UserWidget.RegisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb084698
	// Params: [ Num(0) Size(0x0) ]
	void RegisterInputComponent();

	// Object: Function UMG.UserWidget.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UMG.UserWidget.PlaySound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb08494c
	// Params: [ Num(1) Size(0x8) ]
	void PlaySound(struct USoundBase* SoundToPlay);

	// Object: Function UMG.UserWidget.PlayAnimationTimeRange
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x929da54
	// Params: [ Num(8) Size(0x28) ]
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationReverse
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb084d34
	// Params: [ Num(4) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationForward
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8ed51a8
	// Params: [ Num(4) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x7942658
	// Params: [ Num(7) Size(0x28) ]
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PauseAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x90b681c
	// Params: [ Num(2) Size(0xC) ]
	float PauseAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchGesture
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, const struct FPointerEvent& GestureEvent);

	// Object: Function UMG.UserWidget.OnTouchForceChanged
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnRemovedFromFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnPreviewMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnPreviewKeyDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x128) ]
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	void OnPaint(struct FPaintContext& Context);

	// Object: Function UMG.UserWidget.OnMouseWheel
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseMove
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xA8) ]
	void OnMouseEnter(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseCaptureLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnMouseCaptureLost();

	// Object: Function UMG.UserWidget.OnMouseButtonUp
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseButtonDoubleClick
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, const struct FPointerEvent& InMouseEvent);

	// Object: Function UMG.UserWidget.OnMotionDetected
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x138) ]
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent);

	// Object: Function UMG.UserWidget.OnKeyUp
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x128) ]
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnKeyDown
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x128) ]
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnKeyChar
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x110) ]
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent);

	// Object: Function UMG.UserWidget.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UMG.UserWidget.OnFocusReceived
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0xF8) ]
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnFocusLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnFocusLost(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnDrop
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0xB1) ]
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragOver
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0xB1) ]
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragLeave
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x78) ]
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragEnter
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0xB0) ]
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0xB0) ]
	void OnDragDetected(struct FGeometry MyGeometry, const struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation);

	// Object: Function UMG.UserWidget.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x78) ]
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnAnimationStarted
	// Flags: [BlueprintCosmetic|Native|Event|Protected|BlueprintEvent]
	// Offset: 0x7216720
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationStarted(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.OnAnimationFinished
	// Flags: [BlueprintCosmetic|Native|Event|Protected|BlueprintEvent]
	// Offset: 0x76d12b0
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationFinished(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.OnAnalogValueChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x130) ]
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent);

	// Object: Function UMG.UserWidget.OnAddedToFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.ListenForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb0847a8
	// Params: [ Num(4) Size(0x1C) ]
	void ListenForInputAction(struct FName ActionName, uint8_t EventType, bool bConsume, struct FDelegate Callback);

	// Object: Function UMG.UserWidget.IsPlayingAnimation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb084928
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlayingAnimation();

	// Object: Function UMG.UserWidget.IsListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0845d0
	// Params: [ Num(2) Size(0x9) ]
	bool IsListeningForInputAction(struct FName ActionName);

	// Object: Function UMG.UserWidget.IsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8bc41d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsInViewport();

	// Object: Function UMG.UserWidget.IsInteractable
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	bool IsInteractable();

	// Object: Function UMG.UserWidget.IsBlueprintTickEnable
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08445c
	// Params: [ Num(1) Size(0x1) ]
	bool IsBlueprintTickEnable();

	// Object: Function UMG.UserWidget.IsAnyAnimationPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb084c4c
	// Params: [ Num(1) Size(0x1) ]
	bool IsAnyAnimationPlaying();

	// Object: Function UMG.UserWidget.IsAnimationPlayingForward
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb084a08
	// Params: [ Num(2) Size(0x9) ]
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.IsAnimationPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dc2044
	// Params: [ Num(2) Size(0x9) ]
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.InvalidateParent
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x918fec4
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateParent();

	// Object: Function UMG.UserWidget.GetOwningPlayerPawn
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08535c
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetOwningPlayerPawn();

	// Object: Function UMG.UserWidget.GetOwningPlayerCameraManager
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb085328
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerCameraManager* GetOwningPlayerCameraManager();

	// Object: Function UMG.UserWidget.GetOrCreateLazyChild
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb0857c8
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* GetOrCreateLazyChild(struct FString Name);

	// Object: Function UMG.UserWidget.GetIsVisible
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb085390
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsVisible();

	// Object: Function UMG.UserWidget.GetAnimationCurrentTime
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb084c84
	// Params: [ Num(2) Size(0xC) ]
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.GetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0853fc
	// Params: [ Num(1) Size(0x10) ]
	struct FAnchors GetAnchorsInViewport();

	// Object: Function UMG.UserWidget.GetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0853c8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetAlignmentInViewport();

	// Object: Function UMG.UserWidget.FlushAnimations
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb0849f4
	// Params: [ Num(0) Size(0x0) ]
	void FlushAnimations();

	// Object: Function UMG.UserWidget.FinishAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8baed50
	// Params: [ Num(2) Size(0x9) ]
	void FinishAnimation(struct UWidgetAnimation* InAnimation, bool isForceLastFrame);

	// Object: Function UMG.UserWidget.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void Destruct();

	// Object: Function UMG.UserWidget.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function UMG.UserWidget.CancelLatentActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb085314
	// Params: [ Num(0) Size(0x0) ]
	void CancelLatentActions();

	// Object: Function UMG.UserWidget.BindToAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93613d0
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.BindToAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8721968
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.BindToAnimationEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0850a4
	// Params: [ Num(4) Size(0x24) ]
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, EWidgetAnimationEvent AnimationEvent, struct FName UserTag);

	// Object: Function UMG.UserWidget.AddToViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8e5b240
	// Params: [ Num(1) Size(0x4) ]
	void AddToViewport(int32_t ZOrder);

	// Object: Function UMG.UserWidget.AddToPlayerScreen
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xb085714
	// Params: [ Num(2) Size(0x5) ]
	bool AddToPlayerScreen(int32_t ZOrder);
};

// Object: Class UMG.TextLayoutWidget
// Size: 0x150 (Inherited: 0x130)
struct UTextLayoutWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UTextLayoutWidget, "TextLayoutWidget")

	struct FShapedTextOptions ShapedTextOptions; // 0x12C(0x3)
	uint8_t Justification; // 0x12F(0x1)
	ETextWrappingPolicy WrappingPolicy; // 0x130(0x1)
	uint8_t AutoWrapText : 1; // 0x131(0x1), Mask(0x1)
	float WrapTextAt; // 0x134(0x4)
	struct FMargin Margin; // 0x138(0x10)
	float LineHeightPercentage; // 0x148(0x4)
	uint8_t BitPad_0x14D_1 : 7; // 0x14D(0x1)
	uint8_t Pad_0x14E[0x2]; // 0x14E(0x2)

	// Object: Function UMG.TextLayoutWidget.SetJustification
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9dc0f8c
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);
};

// Object: Class UMG.Button
// Size: 0x498 (Inherited: 0x148)
struct UButton : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UButton, "Button")

	struct USlateWidgetStyleAsset* Style; // 0x148(0x8)
	struct FButtonStyle WidgetStyle; // 0x150(0x298)
	struct FLinearColor ColorAndOpacity; // 0x3E8(0x10)
	struct FLinearColor BackgroundColor; // 0x3F8(0x10)
	uint8_t ClickMethod; // 0x408(0x1)
	uint8_t TouchMethod; // 0x409(0x1)
	uint8_t PressMethod; // 0x40A(0x1)
	bool IsFocusable; // 0x40B(0x1)
	bool isGray; // 0x40C(0x1)
	uint8_t Pad_0x40D[0x3]; // 0x40D(0x3)
	float ClickCdTime; // 0x410(0x4)
	uint8_t Pad_0x414[0xC]; // 0x414(0xC)
	struct FMulticastInlineDelegate OnClicked; // 0x420(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x430(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x440(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x450(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x460(0x10)
	uint8_t Pad_0x470[0x28]; // 0x470(0x28)

	// Object: Function UMG.Button.TransSizeToOutlineMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068894
	// Params: [ Num(0) Size(0x0) ]
	void TransSizeToOutlineMaterial();

	// Object: Function UMG.Button.ShowButtonOutlineMaterial
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb068a04
	// Params: [ Num(3) Size(0x9C) ]
	void ShowButtonOutlineMaterial(struct UMaterialInstanceDynamic* matDynamic, struct FSlateBrush& OriginalBrush, float& OriginalAlpha);

	// Object: Function UMG.Button.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8243c08
	// Params: [ Num(1) Size(0x1) ]
	void SetTouchMethod(uint8_t InTouchMethod);

	// Object: Function UMG.Button.SetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9374254
	// Params: [ Num(1) Size(0x298) ]
	void SetStyle(const struct FButtonStyle& InStyle);

	// Object: Function UMG.Button.SetPressMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8243de4
	// Params: [ Num(1) Size(0x1) ]
	void SetPressMethod(uint8_t InPressMethod);

	// Object: Function UMG.Button.SetGray
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068c24
	// Params: [ Num(1) Size(0x1) ]
	void SetGray(bool gray);

	// Object: Function UMG.Button.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb068cd4
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.Button.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8243cd4
	// Params: [ Num(1) Size(0x1) ]
	void SetClickMethod(uint8_t InClickMethod);

	// Object: Function UMG.Button.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9378b80
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundColor(struct FLinearColor InBackgroundColor);

	// Object: Function UMG.Button.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb068bec
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function UMG.Button.HideButtonOutlineMaterial
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb0688a8
	// Params: [ Num(2) Size(0x94) ]
	void HideButtonOutlineMaterial(struct FSlateBrush& OriginalBrush, float OriginalAlpha);

	// Object: Function UMG.Button.GetPressedScreenSpacePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb068bb8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPressedScreenSpacePosition();
};

// Object: Class UMG.CanvasPanel
// Size: 0x158 (Inherited: 0x148)
struct UCanvasPanel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UCanvasPanel, "CanvasPanel")

	uint8_t Pad_0x148[0x10]; // 0x148(0x10)

	// Object: Function UMG.CanvasPanel.AddChildToCanvas
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86a60c8
	// Params: [ Num(2) Size(0x10) ]
	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content);
};

// Object: Class UMG.ListViewBase
// Size: 0x250 (Inherited: 0x130)
struct UListViewBase : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UListViewBase, "ListViewBase")

	struct UUserWidget* EntryWidgetClass; // 0x130(0x8)
	float WheelScrollMultiplier; // 0x138(0x4)
	bool bEnableScrollAnimation; // 0x13C(0x1)
	bool bEnableFixedLineOffset; // 0x13D(0x1)
	bool bEnableOverscroll; // 0x13E(0x1)
	uint8_t Pad_0x13F[0x1]; // 0x13F(0x1)
	float FixedLineScrollOffset; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x148(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x158(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x168(0x90)
	uint8_t Pad_0x1F8[0x58]; // 0x1F8(0x58)

	// Object: Function UMG.ListViewBase.SetWheelScrollMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb074f60
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

	// Object: Function UMG.ListViewBase.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97d7c14
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float InScrollOffset);

	// Object: Function UMG.ListViewBase.SetScrollbarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e39920
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollbarVisibility(ESlateVisibility InVisibility);

	// Object: Function UMG.ListViewBase.SetAllowOverscroll
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb074e68
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowOverscroll(bool NewAllowOverscroll);

	// Object: Function UMG.ListViewBase.ScrollToTop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075054
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToTop();

	// Object: Function UMG.ListViewBase.ScrollToBottom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075040
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToBottom();

	// Object: Function UMG.ListViewBase.RequestRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb074f18
	// Params: [ Num(0) Size(0x0) ]
	void RequestRefresh();

	// Object: Function UMG.ListViewBase.RegenerateAllEntries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075068
	// Params: [ Num(1) Size(0x1) ]
	void RegenerateAllEntries(bool bPreserveOrder);

	// Object: Function UMG.ListViewBase.IsUserScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075008
	// Params: [ Num(1) Size(0x1) ]
	bool IsUserScrolling();

	// Object: Function UMG.ListViewBase.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb074f2c
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function UMG.ListViewBase.GetDisplayedEntryWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb075118
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets();
};

// Object: Class UMG.ListView
// Size: 0x3C8 (Inherited: 0x250)
struct UListView : UListViewBase
{
	DEFINE_UE_CLASS_HELPERS(UListView, "ListView")

	uint8_t Pad_0x250[0xC0]; // 0x250(0xC0)
	struct TArray<struct UObject*> ListItemDataPool; // 0x310(0x10)
	uint8_t Orientation; // 0x320(0x1)
	uint8_t SelectionMode; // 0x321(0x1)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x322(0x1)
	bool bClearSelectionOnClick; // 0x323(0x1)
	bool bIsFocusable; // 0x324(0x1)
	uint8_t Pad_0x325[0x3]; // 0x325(0x3)
	float EntrySpacing; // 0x328(0x4)
	bool bReturnFocusToSelection; // 0x32C(0x1)
	bool bEnableScrolledDelegate; // 0x32D(0x1)
	uint8_t Pad_0x32E[0x2]; // 0x32E(0x2)
	float ScrollOffsetScalar; // 0x330(0x4)
	uint8_t Pad_0x334[0x4]; // 0x334(0x4)
	struct TArray<struct UObject*> ListItems; // 0x338(0x10)
	uint8_t Pad_0x348[0x10]; // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x358(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x368(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x388(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x398(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x3A8(0x10)
	struct FMulticastInlineDelegate BP_OnTabelViewScrolled; // 0x3B8(0x10)

	// Object: Function UMG.ListView.SetSelectionMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb071edc
	// Params: [ Num(1) Size(0x1) ]
	void SetSelectionMode(uint8_t SelectionMode);

	// Object: Function UMG.ListView.SetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb071d54
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedIndex(int32_t Index);

	// Object: Function UMG.ListView.SetLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b70d50
	// Params: [ Num(2) Size(0x5) ]
	void SetLength(int32_t Len, bool bPreserveOrder);

	// Object: Function UMG.ListView.ScrollIndexIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb071dfc
	// Params: [ Num(1) Size(0x4) ]
	void ScrollIndexIntoView(int32_t Index);

	// Object: Function UMG.ListView.RemoveItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07207c
	// Params: [ Num(1) Size(0x8) ]
	void RemoveItem(struct UObject* item);

	// Object: Function UMG.ListView.NavigateToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb071cac
	// Params: [ Num(1) Size(0x4) ]
	void NavigateToIndex(int32_t Index);

	// Object: Function UMG.ListView.IsRefreshPending
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb071ea4
	// Params: [ Num(1) Size(0x1) ]
	bool IsRefreshPending();

	// Object: Function UMG.ListView.GetNumItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb072048
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumItems();

	// Object: Function UMG.ListView.GetListItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0721cc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UObject*> GetListItems();

	// Object: Function UMG.ListView.GetItemAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x95c8fbc
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetItemAt(int32_t Index);

	// Object: Function UMG.ListView.GetIndexForItem
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb071f98
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexForItem(struct UObject* item);

	// Object: Function UMG.ListView.GetEntryWidgetByIndex
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x9192a60
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* GetEntryWidgetByIndex(int32_t item);

	// Object: Function UMG.ListView.GetEntryWidget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb0716fc
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* GetEntryWidget(struct UObject* item);

	// Object: Function UMG.ListView.ClearListItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb071f84
	// Params: [ Num(0) Size(0x0) ]
	void ClearListItems();

	// Object: Function UMG.ListView.BP_SetSelectedItem
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x8f69cdc
	// Params: [ Num(1) Size(0x8) ]
	void BP_SetSelectedItem(struct UObject* item);

	// Object: Function UMG.ListView.BP_SetListItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0xb0717e0
	// Params: [ Num(1) Size(0x10) ]
	void BP_SetListItems(const struct TArray<struct UObject*>& InListItems);

	// Object: Function UMG.ListView.BP_SetItemSelection
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xb071bbc
	// Params: [ Num(2) Size(0x9) ]
	void BP_SetItemSelection(struct UObject* item, bool bSelected);

	// Object: Function UMG.ListView.BP_ScrollItemIntoView
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xb0718b4
	// Params: [ Num(1) Size(0x8) ]
	void BP_ScrollItemIntoView(struct UObject* item);

	// Object: Function UMG.ListView.BP_NavigateToItem
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xb07195c
	// Params: [ Num(1) Size(0x8) ]
	void BP_NavigateToItem(struct UObject* item);

	// Object: Function UMG.ListView.BP_IsItemVisible
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb071a04
	// Params: [ Num(2) Size(0x9) ]
	bool BP_IsItemVisible(struct UObject* item);

	// Object: Function UMG.ListView.BP_GetSelectedItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb071ab8
	// Params: [ Num(2) Size(0x11) ]
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items);

	// Object: Function UMG.ListView.BP_GetSelectedItem
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0717ac
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* BP_GetSelectedItem();

	// Object: Function UMG.ListView.BP_GetNumItemsSelected
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb071b88
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetNumItemsSelected();

	// Object: Function UMG.ListView.BP_ClearSelection
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x928cfc4
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClearSelection();

	// Object: Function UMG.ListView.BP_CancelScrollIntoView
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xb0718a0
	// Params: [ Num(0) Size(0x0) ]
	void BP_CancelScrollIntoView();

	// Object: Function UMG.ListView.AddItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb072124
	// Params: [ Num(1) Size(0x8) ]
	void AddItem(struct UObject* item);
};

// Object: Class UMG.TreeView
// Size: 0x420 (Inherited: 0x3C8)
struct UTreeView : UListView
{
	DEFINE_UE_CLASS_HELPERS(UTreeView, "TreeView")

	uint8_t Pad_0x3C8[0x10]; // 0x3C8(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x3D8(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3E8(0x10)
	uint8_t Pad_0x3F8[0x28]; // 0x3F8(0x28)

	// Object: Function UMG.TreeView.SetItemExpansion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083be4
	// Params: [ Num(2) Size(0x9) ]
	void SetItemExpansion(struct UObject* item, bool bExpandItem);

	// Object: Function UMG.TreeView.IsItemExpanded
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083b08
	// Params: [ Num(2) Size(0x9) ]
	bool IsItemExpanded(struct UObject* item);

	// Object: Function UMG.TreeView.ExpandAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083bd0
	// Params: [ Num(0) Size(0x0) ]
	void ExpandAll();

	// Object: Function UMG.TreeView.CollapseAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083bbc
	// Params: [ Num(0) Size(0x0) ]
	void CollapseAll();
};

// Object: Class UMG.WidgetComponent
// Size: 0x7F0 (Inherited: 0x6D0)
struct UWidgetComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UWidgetComponent, "WidgetComponent")

	EWidgetSpace Space; // 0x6C1(0x1)
	EWidgetTimingPolicy TimingPolicy; // 0x6C2(0x1)
	struct UUserWidget* WidgetClass; // 0x6C8(0x8)
	struct FIntPoint DrawSize; // 0x6D0(0x8)
	bool bAutoFittingRTSize; // 0x6D8(0x1)
	bool bManuallyRedraw; // 0x6D9(0x1)
	bool bRedrawRequested; // 0x6DA(0x1)
	float RedrawTime; // 0x6DC(0x4)
	struct FIntPoint CurrentDrawSize; // 0x6E8(0x8)
	bool bDrawAtDesiredSize; // 0x6F0(0x1)
	uint8_t Pad_0x6F2[0x2]; // 0x6F2(0x2)
	struct FVector2D Pivot; // 0x6F4(0x8)
	bool bReceiveHardwareInput; // 0x6FC(0x1)
	bool bWindowFocusable; // 0x6FD(0x1)
	EWindowVisibility WindowVisibility; // 0x6FE(0x1)
	bool bApplyGammaCorrection; // 0x6FF(0x1)
	struct ULocalPlayer* OwnerPlayer; // 0x700(0x8)
	struct FLinearColor BackgroundColor; // 0x708(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x718(0x10)
	float OpacityFromTexture; // 0x728(0x4)
	EWidgetBlendMode BlendMode; // 0x72C(0x1)
	bool bIsTwoSided; // 0x72D(0x1)
	bool TickWhenOffscreen; // 0x72E(0x1)
	uint8_t Pad_0x72F[0x1]; // 0x72F(0x1)
	struct UBodySetup* BodySetup; // 0x730(0x8)
	struct UMaterialInterface* TranslucentMaterial; // 0x738(0x8)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x740(0x8)
	struct UMaterialInterface* OpaqueMaterial; // 0x748(0x8)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x750(0x8)
	struct UMaterialInterface* MaskedMaterial; // 0x758(0x8)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x760(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x768(0x8)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x770(0x8)
	bool bAddedToScreen; // 0x778(0x1)
	bool bEditTimeUsable; // 0x779(0x1)
	uint8_t Pad_0x77A[0x2]; // 0x77A(0x2)
	struct FName SharedLayerName; // 0x77C(0x8)
	int32_t LayerZOrder; // 0x784(0x4)
	EWidgetGeometryMode GeometryMode; // 0x788(0x1)
	uint8_t Pad_0x789[0x3]; // 0x789(0x3)
	float CylinderArcAngle; // 0x78C(0x4)
	ETickMode TickMode; // 0x790(0x1)
	uint8_t Pad_0x791[0x27]; // 0x791(0x27)
	struct UUserWidget* Widget; // 0x7B8(0x8)
	uint8_t Pad_0x7C0[0x30]; // 0x7C0(0x30)

	// Object: Function UMG.WidgetComponent.SetWindowVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09492c
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowVisibility(EWindowVisibility InVisibility);

	// Object: Function UMG.WidgetComponent.SetWindowFocusable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0949f0
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowFocusable(bool bInWindowFocusable);

	// Object: Function UMG.WidgetComponent.SetWidgetSpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb094c3c
	// Params: [ Num(1) Size(0x1) ]
	void SetWidgetSpace(EWidgetSpace NewSpace);

	// Object: Function UMG.WidgetComponent.SetWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb09550c
	// Params: [ Num(1) Size(0x8) ]
	void SetWidget(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetComponent.SetTwoSided
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb095170
	// Params: [ Num(1) Size(0x1) ]
	void SetTwoSided(bool bWantTwoSided);

	// Object: Function UMG.WidgetComponent.SetTintColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb094f58
	// Params: [ Num(1) Size(0x10) ]
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity);

	// Object: Function UMG.WidgetComponent.SetTickWhenOffscreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0950a8
	// Params: [ Num(1) Size(0x1) ]
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);

	// Object: Function UMG.WidgetComponent.SetTickMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb094884
	// Params: [ Num(1) Size(0x1) ]
	void SetTickMode(ETickMode InTickMode);

	// Object: Function UMG.WidgetComponent.SetRedrawTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb094cfc
	// Params: [ Num(1) Size(0x4) ]
	void SetRedrawTime(float InRedrawTime);

	// Object: Function UMG.WidgetComponent.SetPivot
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb094e84
	// Params: [ Num(1) Size(0x8) ]
	void SetPivot(const struct FVector2D& InPivot);

	// Object: Function UMG.WidgetComponent.SetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb095464
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer);

	// Object: Function UMG.WidgetComponent.SetManuallyRedraw
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb095398
	// Params: [ Num(1) Size(0x1) ]
	void SetManuallyRedraw(bool bUseManualRedraw);

	// Object: Function UMG.WidgetComponent.SetGeometryMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb094b7c
	// Params: [ Num(1) Size(0x1) ]
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);

	// Object: Function UMG.WidgetComponent.SetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb095258
	// Params: [ Num(1) Size(0x8) ]
	void SetDrawSize(struct FVector2D Size);

	// Object: Function UMG.WidgetComponent.SetDrawAtDesiredSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb094dbc
	// Params: [ Num(1) Size(0x1) ]
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);

	// Object: Function UMG.WidgetComponent.SetCylinderArcAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb094abc
	// Params: [ Num(1) Size(0x4) ]
	void SetCylinderArcAngle(float InCylinderArcAngle);

	// Object: Function UMG.WidgetComponent.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb095000
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor);

	// Object: Function UMG.WidgetComponent.RequestRedraw
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb09523c
	// Params: [ Num(0) Size(0x0) ]
	void RequestRedraw();

	// Object: Function UMG.WidgetComponent.IsWidgetVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09484c
	// Params: [ Num(1) Size(0x1) ]
	bool IsWidgetVisible();

	// Object: Function UMG.WidgetComponent.GetWindowVisiblility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0949d4
	// Params: [ Num(1) Size(0x1) ]
	EWindowVisibility GetWindowVisiblility();

	// Object: Function UMG.WidgetComponent.GetWindowFocusable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094aa0
	// Params: [ Num(1) Size(0x1) ]
	bool GetWindowFocusable();

	// Object: Function UMG.WidgetComponent.GetWidgetSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094ce0
	// Params: [ Num(1) Size(0x1) ]
	EWidgetSpace GetWidgetSpace();

	// Object: Function UMG.WidgetComponent.GetWidget
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0955bc
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetWidget();

	// Object: Function UMG.WidgetComponent.GetUserWidgetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095660
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetUserWidgetObject();

	// Object: Function UMG.WidgetComponent.GetTwoSided
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095220
	// Params: [ Num(1) Size(0x1) ]
	bool GetTwoSided();

	// Object: Function UMG.WidgetComponent.GetTickWhenOffscreen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095154
	// Params: [ Num(1) Size(0x1) ]
	bool GetTickWhenOffscreen();

	// Object: Function UMG.WidgetComponent.GetRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09562c
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetRenderTarget();

	// Object: Function UMG.WidgetComponent.GetRedrawTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094da0
	// Params: [ Num(1) Size(0x4) ]
	float GetRedrawTime();

	// Object: Function UMG.WidgetComponent.GetPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094f38
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPivot();

	// Object: Function UMG.WidgetComponent.GetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095364
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwnerPlayer();

	// Object: Function UMG.WidgetComponent.GetMaterialInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0955f8
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetMaterialInstance();

	// Object: Function UMG.WidgetComponent.GetManuallyRedraw
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095448
	// Params: [ Num(1) Size(0x1) ]
	bool GetManuallyRedraw();

	// Object: Function UMG.WidgetComponent.GetGeometryMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094c20
	// Params: [ Num(1) Size(0x1) ]
	EWidgetGeometryMode GetGeometryMode();

	// Object: Function UMG.WidgetComponent.GetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095330
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDrawSize();

	// Object: Function UMG.WidgetComponent.GetDrawAtDesiredSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094e68
	// Params: [ Num(1) Size(0x1) ]
	bool GetDrawAtDesiredSize();

	// Object: Function UMG.WidgetComponent.GetCylinderArcAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb094b60
	// Params: [ Num(1) Size(0x4) ]
	float GetCylinderArcAngle();

	// Object: Function UMG.WidgetComponent.GetCurrentDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0952fc
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetCurrentDrawSize();
};

// Object: Class UMG.WidgetToRenderTargetComponent
// Size: 0x138 (Inherited: 0xE0)
struct UWidgetToRenderTargetComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UWidgetToRenderTargetComponent, "WidgetToRenderTargetComponent")

	struct UUserWidget* WidgetClass; // 0xE0(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0xE8(0x8)
	bool bApplyGammaCorrection; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	float DrawScale; // 0xF4(0x4)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct UUserWidget* Widget; // 0x100(0x8)
	uint8_t Pad_0x108[0x30]; // 0x108(0x30)

	// Object: Function UMG.WidgetToRenderTargetComponent.Update
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb099908
	// Params: [ Num(0) Size(0x0) ]
	void Update();

	// Object: Function UMG.WidgetToRenderTargetComponent.SetWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099958
	// Params: [ Num(1) Size(0x8) ]
	void SetWidget(struct UUserWidget* InWidgetClass);

	// Object: Function UMG.WidgetToRenderTargetComponent.SetRenderTarget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb099858
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTarget(struct UTextureRenderTarget2D* InRenderTarget);

	// Object: Function UMG.WidgetToRenderTargetComponent.GetWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099924
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetWidget();
};

// Object: Class UMG.Border
// Size: 0x298 (Inherited: 0x148)
struct UBorder : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UBorder, "Border")

	uint8_t HorizontalAlignment; // 0x141(0x1)
	uint8_t VerticalAlignment; // 0x142(0x1)
	uint8_t bShowEffectWhenDisabled : 1; // 0x143(0x1), Mask(0x1)
	struct FLinearColor ContentColorAndOpacity; // 0x144(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x154(0x10)
	struct FMargin Padding; // 0x164(0x10)
	struct FSlateBrush Background; // 0x178(0x90)
	struct FDelegate BackgroundDelegate; // 0x208(0x10)
	struct FLinearColor BrushColor; // 0x218(0x10)
	struct FDelegate BrushColorDelegate; // 0x228(0x10)
	struct FVector2D DesiredSizeScale; // 0x238(0x8)
	bool bFlipForRightToLeftFlowDirection; // 0x240(0x1)
	uint8_t BitPad_0x243_1 : 7; // 0x243(0x1)
	struct FDelegate OnMouseButtonDownEvent; // 0x244(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x254(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x264(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x274(0x10)
	uint8_t Pad_0x284[0x14]; // 0x284(0x14)

	// Object: Function UMG.Border.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068238
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.Border.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068388
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.Border.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0682e0
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.Border.SetDesiredSizeScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb067dac
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredSizeScale(struct FVector2D InScale);

	// Object: Function UMG.Border.SetContentColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb068434
	// Params: [ Num(1) Size(0x10) ]
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity);

	// Object: Function UMG.Border.SetBrushFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067f2c
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromTexture(struct UTexture2D* Texture);

	// Object: Function UMG.Border.SetBrushFromMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067e84
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.Border.SetBrushFromAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067fd4
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.Border.SetBrushColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb068190
	// Params: [ Num(1) Size(0x10) ]
	void SetBrushColor(struct FLinearColor InBrushColor);

	// Object: Function UMG.Border.SetBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb06807c
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.Border.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067e50
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.Slider
// Size: 0x548 (Inherited: 0x130)
struct USlider : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USlider, "Slider")

	float Value; // 0x12C(0x4)
	struct FDelegate ValueDelegate; // 0x130(0x10)
	float MinValue; // 0x140(0x4)
	float MaxValue; // 0x144(0x4)
	struct FSliderStyle WidgetStyle; // 0x148(0x370)
	uint8_t Orientation; // 0x4B8(0x1)
	struct FLinearColor SliderBarColor; // 0x4BC(0x10)
	struct FLinearColor SliderHandleColor; // 0x4CC(0x10)
	bool IndentHandle; // 0x4DC(0x1)
	bool Locked; // 0x4DD(0x1)
	bool MouseUsesStep; // 0x4DE(0x1)
	bool RequiresControllerLock; // 0x4DF(0x1)
	float StepSize; // 0x4E0(0x4)
	bool IsFocusable; // 0x4E4(0x1)
	uint8_t Pad_0x4E6[0x2]; // 0x4E6(0x2)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4E8(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4F8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x508(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x518(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x528(0x10)
	uint8_t Pad_0x538[0x10]; // 0x538(0x10)

	// Object: Function UMG.Slider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x6b969dc
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function UMG.Slider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f300
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function UMG.Slider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb07f1b0
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function UMG.Slider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb07f258
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderBarColor(struct FLinearColor InValue);

	// Object: Function UMG.Slider.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x953c0a0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinValue(float InValue);

	// Object: Function UMG.Slider.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x68dd294
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxValue(float InValue);

	// Object: Function UMG.Slider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f3a8
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(bool InValue);

	// Object: Function UMG.Slider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f458
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(bool InValue);

	// Object: Function UMG.Slider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07f53c
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function UMG.Slider.GetNormalizedValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07f508
	// Params: [ Num(1) Size(0x4) ]
	float GetNormalizedValue();
};

// Object: Class UMG.Image
// Size: 0x270 (Inherited: 0x130)
struct UImage : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UImage, "Image")

	struct FSlateBrush Brush; // 0x130(0x90)
	struct FDelegate BrushDelegate; // 0x1C0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1D0(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1E0(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x1F0(0x1)
	uint8_t bHideOversea : 1; // 0x1F1(0x1), Mask(0x1)
	uint8_t bShowOversea : 1; // 0x1F1(0x1), Mask(0x2)
	uint8_t bAsyncLoad : 1; // 0x1F1(0x1), Mask(0x4)
	uint8_t BitPad_0x1F1_3 : 5; // 0x1F1(0x1)
	bool bUseTransparentAsDefault; // 0x1F2(0x1)
	uint8_t Pad_0x1F3[0x1]; // 0x1F3(0x1)
	int32_t ForceUiLayerId; // 0x1F4(0x4)
	struct FDelegate OnMouseButtonDownEvent; // 0x1F8(0x10)
	uint8_t Pad_0x208[0x38]; // 0x208(0x38)
	struct TSoftObjectPtr<UObject> DeferredObject; // 0x240(0x28)
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)

	// Object: Function UMG.Image.SetUseTransparentAsDefault
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b4e84c
	// Params: [ Num(1) Size(0x1) ]
	void SetUseTransparentAsDefault(bool bUseTransAsDefault);

	// Object: Function UMG.Image.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ae4f48
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.Image.SetForceUiLayerId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070858
	// Params: [ Num(1) Size(0x4) ]
	void SetForceUiLayerId(int32_t InLayerId);

	// Object: Function UMG.Image.SetColorAndOpacityRBGA
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86d3014
	// Params: [ Num(4) Size(0x10) ]
	void SetColorAndOpacityRBGA(float R, float B, float G, float A);

	// Object: Function UMG.Image.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x6ddbb68
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.Image.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x82417c4
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function UMG.Image.SetBrushSizeXY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070774
	// Params: [ Num(2) Size(0x8) ]
	void SetBrushSizeXY(float X, float Y);

	// Object: Function UMG.Image.SetBrushSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x85cf6a0
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushSize(struct FVector2D DesiredSize);

	// Object: Function UMG.Image.SetBrushResourceObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91b56f4
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushResourceObject(struct UObject* ResourceObject);

	// Object: Function UMG.Image.SetBrushFromTextureDynamic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8be0990
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x979df80
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromSoftTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb070550
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromSoftMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb07042c
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial);

	// Object: Function UMG.Image.SetBrushFromMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x90db0cc
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.Image.SetBrushFromAtlasInterface
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x871952c
	// Params: [ Num(2) Size(0x11) ]
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromAsset
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb0706c4
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.Image.SetBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bf35f0
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.Image.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db9410
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.RichTextBlock
// Size: 0x6F0 (Inherited: 0x150)
struct URichTextBlock : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlock, "RichTextBlock")

	bool IsDecoratorAutoWrap; // 0x14C(0x1)
	struct FText Text; // 0x150(0x18)
	struct UDataTable* TextStyleSet; // 0x168(0x8)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x170(0x10)
	bool bOverrideDefaultStyle; // 0x180(0x1)
	uint8_t Pad_0x182[0x6]; // 0x182(0x6)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x188(0x290)
	float MinDesiredWidth; // 0x418(0x4)
	ETextTransformPolicy TextTransformPolicy; // 0x41C(0x1)
	uint8_t Pad_0x41D[0x3]; // 0x41D(0x3)
	struct FTextBlockStyle DefaultTextStyle; // 0x420(0x290)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6B0(0x10)
	uint8_t Pad_0x6C0[0x20]; // 0x6C0(0x20)
	bool bEnableAutoTruncate; // 0x6E0(0x1)
	bool bShowDetail; // 0x6E1(0x1)
	bool bHandleLongText; // 0x6E2(0x1)
	uint8_t Pad_0x6E3[0x1]; // 0x6E3(0x1)
	int32_t MaxTextLength; // 0x6E4(0x4)
	uint8_t Pad_0x6E8[0x8]; // 0x6E8(0x8)

	// Object: Function UMG.RichTextBlock.SetTextTransformPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079e68
	// Params: [ Num(1) Size(0x1) ]
	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);

	// Object: Function UMG.RichTextBlock.SetTextStyleSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079c3c
	// Params: [ Num(1) Size(0x8) ]
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet);

	// Object: Function UMG.RichTextBlock.SetText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9dbd1ec
	// Params: [ Num(1) Size(0x18) ]
	void SetText(const struct FText& InText);

	// Object: Function UMG.RichTextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079fc0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.RichTextBlock.SetEnableAutoTruncate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079ce4
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableAutoTruncate(bool InAutoTextWrap);

	// Object: Function UMG.RichTextBlock.SetDefaultTextStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb079da8
	// Params: [ Num(1) Size(0x290) ]
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);

	// Object: Function UMG.RichTextBlock.SetDefaultStrikeBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb07a068
	// Params: [ Num(1) Size(0x90) ]
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush);

	// Object: Function UMG.RichTextBlock.SetDefaultShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb07a310
	// Params: [ Num(1) Size(0x8) ]
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb07a3b4
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function UMG.RichTextBlock.SetDefaultFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07a17c
	// Params: [ Num(1) Size(0x60) ]
	void SetDefaultFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07a45c
	// Params: [ Num(1) Size(0x28) ]
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function UMG.RichTextBlock.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079f10
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(bool InAutoTextWrap);

	// Object: Function UMG.RichTextBlock.PreprocessText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb079ac0
	// Params: [ Num(2) Size(0x30) ]
	struct FText PreprocessText(const struct FText& InputText);

	// Object: Function UMG.RichTextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x97d4240
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.RichTextBlock.GetDecoratorByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079a10
	// Params: [ Num(2) Size(0x10) ]
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass);

	// Object: Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// Flags: [Final|Native|Public]
	// Offset: 0xb079d94
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllDefaultStyleOverrides();
};

// Object: Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlockDecorator, "RichTextBlockDecorator")
};

// Object: Class UMG.ScrollBox
// Size: 0x910 (Inherited: 0x148)
struct UScrollBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UScrollBox, "ScrollBox")

	struct FScrollBoxStyle WidgetStyle; // 0x148(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x390(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8A8(0x8)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8B0(0x8)
	uint8_t Orientation; // 0x8B8(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x8B9(0x1)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x8BA(0x1)
	uint8_t Pad_0x8BB[0x1]; // 0x8BB(0x1)
	struct FVector2D ScrollbarThickness; // 0x8BC(0x8)
	struct FMargin ScrollbarPadding; // 0x8C4(0x10)
	bool AlwaysShowScrollbar; // 0x8D4(0x1)
	bool AlwaysShowScrollbarTrack; // 0x8D5(0x1)
	bool AllowOverscroll; // 0x8D6(0x1)
	bool bAnimateWheelScrolling; // 0x8D7(0x1)
	bool bEnableScrolling; // 0x8D8(0x1)
	bool bEnableMovingAccumulation; // 0x8D9(0x1)
	EDescendantScrollDestination NavigationDestination; // 0x8DA(0x1)
	uint8_t Pad_0x8DB[0x1]; // 0x8DB(0x1)
	float NavigationScrollPadding; // 0x8DC(0x4)
	EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8E0(0x1)
	bool bAllowRightClickDragScrolling; // 0x8E1(0x1)
	uint8_t Pad_0x8E2[0x2]; // 0x8E2(0x2)
	float WheelScrollMultiplier; // 0x8E4(0x4)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x8E8(0x10)
	uint8_t Pad_0x8F8[0x18]; // 0x8F8(0x18)

	// Object: Function UMG.ScrollBox.SetWheelScrollMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ad5c
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

	// Object: Function UMG.ScrollBox.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8bc4fac
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float NewScrollOffset);

	// Object: Function UMG.ScrollBox.SetScrollbarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8ed4ef0
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);

	// Object: Function UMG.ScrollBox.SetScrollbarThickness
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb07b04c
	// Params: [ Num(1) Size(0x8) ]
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);

	// Object: Function UMG.ScrollBox.SetScrollbarPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb07af98
	// Params: [ Num(1) Size(0x10) ]
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);

	// Object: Function UMG.ScrollBox.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90c24a0
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(uint8_t NewOrientation);

	// Object: Function UMG.ScrollBox.SetEnableScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96a2630
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableScrolling(bool bShouldEnableScrolling);

	// Object: Function UMG.ScrollBox.SetEnableMovingAccumulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f4bd2c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableMovingAccumulation(bool bShouldEnableMovingAccumulation);

	// Object: Function UMG.ScrollBox.SetConsumeMouseWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07b0fc
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);

	// Object: Function UMG.ScrollBox.SetAnimateWheelScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x933d230
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);

	// Object: Function UMG.ScrollBox.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07aee8
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);

	// Object: Function UMG.ScrollBox.SetAllowOverscroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ae38
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowOverscroll(bool NewAllowOverscroll);

	// Object: Function UMG.ScrollBox.ScrollWidgetIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b4d540
	// Params: [ Num(4) Size(0x10) ]
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);

	// Object: Function UMG.ScrollBox.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93084c8
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToStart();

	// Object: Function UMG.ScrollBox.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x919cec4
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToEnd();

	// Object: Function UMG.ScrollBox.GetViewOffsetFraction
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07acf0
	// Params: [ Num(1) Size(0x4) ]
	float GetViewOffsetFraction();

	// Object: Function UMG.ScrollBox.GetScrollOffsetOfEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8060a20
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffsetOfEnd();

	// Object: Function UMG.ScrollBox.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x740091c
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function UMG.ScrollBox.GetScrollBoxDragTriggerDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ae04
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollBoxDragTriggerDistance();

	// Object: Function UMG.ScrollBox.GetFingerTouch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ad24
	// Params: [ Num(1) Size(0x1) ]
	bool GetFingerTouch();

	// Object: Function UMG.ScrollBox.EndInertialScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9784b60
	// Params: [ Num(0) Size(0x0) ]
	void EndInertialScrolling();
};

// Object: Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)
struct UOverlay : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UOverlay, "Overlay")

	uint8_t Pad_0x148[0x10]; // 0x148(0x10)

	// Object: Function UMG.Overlay.AddChildToOverlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0764c0
	// Params: [ Num(2) Size(0x10) ]
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content);
};

// Object: Class UMG.PanelSlot
// Size: 0x60 (Inherited: 0x28)
struct UPanelSlot : UVisual
{
	DEFINE_UE_CLASS_HELPERS(UPanelSlot, "PanelSlot")

	struct TSoftObjectPtr<UObject> ContentClass; // 0x28(0x28)
	struct UPanelWidget* Parent; // 0x50(0x8)
	struct UWidget* Content; // 0x58(0x8)
};

// Object: Class UMG.OverlaySlot
// Size: 0x80 (Inherited: 0x60)
struct UOverlaySlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UOverlaySlot, "OverlaySlot")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
	struct FMargin Padding; // 0x68(0x10)
	uint8_t HorizontalAlignment; // 0x78(0x1)
	uint8_t VerticalAlignment; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)

	// Object: Function UMG.OverlaySlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbc21c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.OverlaySlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbc36c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.OverlaySlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbc2c4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.TileView
// Size: 0x3F8 (Inherited: 0x3C8)
struct UTileView : UListView
{
	DEFINE_UE_CLASS_HELPERS(UTileView, "TileView")

	float EntryHeight; // 0x3C8(0x4)
	float EntryWidth; // 0x3CC(0x4)
	EListItemAlignment TileAlignment; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0x3]; // 0x3D1(0x3)
	struct FMargin Padding; // 0x3D4(0x10)
	bool bWrapHorizontalNavigation; // 0x3E4(0x1)
	uint8_t Pad_0x3E5[0x13]; // 0x3E5(0x13)

	// Object: Function UMG.TileView.SetEntryWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083998
	// Params: [ Num(1) Size(0x4) ]
	void SetEntryWidth(float NewWidth);

	// Object: Function UMG.TileView.SetEntryHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083a40
	// Params: [ Num(1) Size(0x4) ]
	void SetEntryHeight(float NewHeight);

	// Object: Function UMG.TileView.GetEntryWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb083960
	// Params: [ Num(1) Size(0x4) ]
	float GetEntryWidth();

	// Object: Function UMG.TileView.GetEntryHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08397c
	// Params: [ Num(1) Size(0x4) ]
	float GetEntryHeight();
};

// Object: Class UMG.AsyncTaskDownloadImage
// Size: 0x68 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UAsyncTaskDownloadImage, "AsyncTaskDownloadImage")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)

	// Object: Function UMG.AsyncTaskDownloadImage.DownloadImageWithSavePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97e13cc
	// Params: [ Num(3) Size(0x28) ]
	static struct UAsyncTaskDownloadImage* DownloadImageWithSavePath(struct FString URL, struct FString SavePath);

	// Object: Function UMG.AsyncTaskDownloadImage.DownloadImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb0674fc
	// Params: [ Num(2) Size(0x18) ]
	static struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL);
};

// Object: Class UMG.BackgroundBlur
// Size: 0x208 (Inherited: 0x148)
struct UBackgroundBlur : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UBackgroundBlur, "BackgroundBlur")

	struct FMargin Padding; // 0x144(0x10)
	uint8_t HorizontalAlignment; // 0x154(0x1)
	uint8_t VerticalAlignment; // 0x155(0x1)
	bool bApplyAlphaToBlur; // 0x156(0x1)
	float BlurStrength; // 0x158(0x4)
	bool bOverrideAutoRadiusCalculation; // 0x15C(0x1)
	int32_t BlurRadius; // 0x160(0x4)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct FSlateBrush LowQualityFallbackBrush; // 0x168(0x90)
	uint8_t Pad_0x1F8[0x10]; // 0x1F8(0x10)

	// Object: Function UMG.BackgroundBlur.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067928
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.BackgroundBlur.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067a78
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb06760c
	// Params: [ Num(1) Size(0x90) ]
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.BackgroundBlur.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0679d0
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.BackgroundBlur.SetBlurStrength
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb067720
	// Params: [ Num(1) Size(0x4) ]
	void SetBlurStrength(float InStrength);

	// Object: Function UMG.BackgroundBlur.SetBlurRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0677d0
	// Params: [ Num(1) Size(0x4) ]
	void SetBlurRadius(int32_t InBlurRadius);

	// Object: Function UMG.BackgroundBlur.SetApplyAlphaToBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067878
	// Params: [ Num(1) Size(0x1) ]
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Object: Class UMG.BackgroundBlurSlot
// Size: 0x88 (Inherited: 0x60)
struct UBackgroundBlurSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UBackgroundBlurSlot, "BackgroundBlurSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0x16]; // 0x72(0x16)

	// Object: Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067b5c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.BackgroundBlurSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067cac
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb067c04
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPropertyBinding, "PropertyBinding")

	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x8)
};

// Object: Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UBoolBinding, "BoolBinding")

	// Object: Function UMG.BoolBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb067d60
	// Params: [ Num(1) Size(0x1) ]
	bool GetValue();
};

// Object: Class UMG.BorderSlot
// Size: 0x88 (Inherited: 0x60)
struct UBorderSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UBorderSlot, "BorderSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0x16]; // 0x72(0x16)

	// Object: Function UMG.BorderSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068500
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.BorderSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068650
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BorderSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0685a8
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UBrushBinding, "BrushBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.BrushBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb068704
	// Params: [ Num(1) Size(0x90) ]
	struct FSlateBrush GetValue();
};

// Object: Class UMG.ButtonSlot
// Size: 0x88 (Inherited: 0x60)
struct UButtonSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UButtonSlot, "ButtonSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0x16]; // 0x72(0x16)

	// Object: Function UMG.ButtonSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068e64
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.ButtonSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97662a0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ButtonSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb068f0c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.CanvasPanelSlot
// Size: 0x98 (Inherited: 0x60)
struct UCanvasPanelSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UCanvasPanelSlot, "CanvasPanelSlot")

	struct FAnchorData LayoutData; // 0x60(0x28)
	bool bAutoSize; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t ZOrder; // 0x8C(0x4)
	uint8_t Pad_0x90[0x8]; // 0x90(0x8)

	// Object: Function UMG.CanvasPanelSlot.SetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db631c
	// Params: [ Num(1) Size(0x4) ]
	void SetZOrder(int32_t InZOrder);

	// Object: Function UMG.CanvasPanelSlot.SetSizeXY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b45f7c
	// Params: [ Num(2) Size(0x8) ]
	void SetSizeXY(float InLeft, float InBottom);

	// Object: Function UMG.CanvasPanelSlot.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9db6670
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FVector2D InSize);

	// Object: Function UMG.CanvasPanelSlot.SetPositionXY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8709408
	// Params: [ Num(2) Size(0x8) ]
	void SetPositionXY(float X, float Y);

	// Object: Function UMG.CanvasPanelSlot.SetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x689a564
	// Params: [ Num(1) Size(0x8) ]
	void SetPosition(struct FVector2D InPosition);

	// Object: Function UMG.CanvasPanelSlot.SetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db65c4
	// Params: [ Num(1) Size(0x10) ]
	void SetOffsets(struct FMargin InOffset);

	// Object: Function UMG.CanvasPanelSlot.SetMinimum
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8e5f0d4
	// Params: [ Num(1) Size(0x8) ]
	void SetMinimum(struct FVector2D InMinimumAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetMaximum
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x8e5ef60
	// Params: [ Num(1) Size(0x8) ]
	void SetMaximum(struct FVector2D InMaximumAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetLayout
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x90c1d8c
	// Params: [ Num(1) Size(0x28) ]
	void SetLayout(const struct FAnchorData& InLayoutData);

	// Object: Function UMG.CanvasPanelSlot.SetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db63c4
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoSize(bool InbAutoSize);

	// Object: Function UMG.CanvasPanelSlot.SetAnchorsXYZW
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97fe3f4
	// Params: [ Num(4) Size(0x10) ]
	void SetAnchorsXYZW(float X, float Y, float Z, float W);

	// Object: Function UMG.CanvasPanelSlot.SetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db6518
	// Params: [ Num(1) Size(0x10) ]
	void SetAnchors(struct FAnchors InAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetAlignmentXY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x945459c
	// Params: [ Num(2) Size(0x8) ]
	void SetAlignmentXY(float X, float Y);

	// Object: Function UMG.CanvasPanelSlot.SetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9db6474
	// Params: [ Num(1) Size(0x8) ]
	void SetAlignment(struct FVector2D InAlignment);

	// Object: Function UMG.CanvasPanelSlot.GetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb069124
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetZOrder();

	// Object: Function UMG.CanvasPanelSlot.GetSizeY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb069190
	// Params: [ Num(1) Size(0x4) ]
	float GetSizeY();

	// Object: Function UMG.CanvasPanelSlot.GetSizeX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95dc008
	// Params: [ Num(1) Size(0x4) ]
	float GetSizeX();

	// Object: Function UMG.CanvasPanelSlot.GetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9142d78
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetSize();

	// Object: Function UMG.CanvasPanelSlot.GetRefSize
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb0691c4
	// Params: [ Num(1) Size(0x8) ]
	void GetRefSize(struct FVector2D& OutSize);

	// Object: Function UMG.CanvasPanelSlot.GetRefPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb069274
	// Params: [ Num(1) Size(0x8) ]
	void GetRefPosition(struct FVector2D& OutPosition);

	// Object: Function UMG.CanvasPanelSlot.GetPositionY
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x909b954
	// Params: [ Num(1) Size(0x4) ]
	float GetPositionY();

	// Object: Function UMG.CanvasPanelSlot.GetPositionX
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9026ef0
	// Params: [ Num(1) Size(0x4) ]
	float GetPositionX();

	// Object: Function UMG.CanvasPanelSlot.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9db6714
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPosition();

	// Object: Function UMG.CanvasPanelSlot.GetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8be1cb8
	// Params: [ Num(1) Size(0x10) ]
	struct FMargin GetOffsets();

	// Object: Function UMG.CanvasPanelSlot.GetLayout
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb069324
	// Params: [ Num(1) Size(0x28) ]
	struct FAnchorData GetLayout();

	// Object: Function UMG.CanvasPanelSlot.GetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb069158
	// Params: [ Num(1) Size(0x1) ]
	bool GetAutoSize();

	// Object: Function UMG.CanvasPanelSlot.GetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x933d5e0
	// Params: [ Num(1) Size(0x10) ]
	struct FAnchors GetAnchors();

	// Object: Function UMG.CanvasPanelSlot.GetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x94fd3b0
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetAlignment();
};

// Object: Class UMG.CheckBox
// Size: 0x7D8 (Inherited: 0x148)
struct UCheckBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UCheckBox, "CheckBox")

	ECheckBoxState CheckedState; // 0x141(0x1)
	struct FDelegate CheckedStateDelegate; // 0x144(0x10)
	struct FCheckBoxStyle WidgetStyle; // 0x158(0x5C8)
	struct USlateWidgetStyleAsset* Style; // 0x720(0x8)
	struct USlateBrushAsset* UncheckedImage; // 0x728(0x8)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x730(0x8)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x738(0x8)
	struct USlateBrushAsset* CheckedImage; // 0x740(0x8)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x748(0x8)
	struct USlateBrushAsset* CheckedPressedImage; // 0x750(0x8)
	struct USlateBrushAsset* UndeterminedImage; // 0x758(0x8)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x760(0x8)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x768(0x8)
	uint8_t HorizontalAlignment; // 0x770(0x1)
	uint8_t Pad_0x772[0x2]; // 0x772(0x2)
	struct FMargin Padding; // 0x774(0x10)
	uint8_t Pad_0x784[0x4]; // 0x784(0x4)
	struct FSlateColor BorderBackgroundColor; // 0x788(0x28)
	uint8_t ClickMethod; // 0x7B0(0x1)
	uint8_t TouchMethod; // 0x7B1(0x1)
	uint8_t PressMethod; // 0x7B2(0x1)
	bool IsFocusable; // 0x7B3(0x1)
	uint8_t Pad_0x7B4[0x4]; // 0x7B4(0x4)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x7B8(0x10)
	uint8_t Pad_0x7C8[0x10]; // 0x7C8(0x10)

	// Object: Function UMG.CheckBox.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb069470
	// Params: [ Num(1) Size(0x1) ]
	void SetTouchMethod(uint8_t InTouchMethod);

	// Object: Function UMG.CheckBox.SetPressMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0693c8
	// Params: [ Num(1) Size(0x1) ]
	void SetPressMethod(uint8_t InPressMethod);

	// Object: Function UMG.CheckBox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b654c0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(bool InIsChecked);

	// Object: Function UMG.CheckBox.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb069518
	// Params: [ Num(1) Size(0x1) ]
	void SetClickMethod(uint8_t InClickMethod);

	// Object: Function UMG.CheckBox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0695c0
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckedState(ECheckBoxState InCheckedState);

	// Object: Function UMG.CheckBox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0696d4
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function UMG.CheckBox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06969c
	// Params: [ Num(1) Size(0x1) ]
	bool IsChecked();

	// Object: Function UMG.CheckBox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb069668
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetCheckedState();
};

// Object: Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UCheckedStateBinding, "CheckedStateBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.CheckedStateBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb06bba0
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetValue();
};

// Object: Class UMG.CircularThrobber
// Size: 0x1E8 (Inherited: 0x130)
struct UCircularThrobber : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UCircularThrobber, "CircularThrobber")

	int32_t NumberOfPieces; // 0x12C(0x4)
	float Period; // 0x130(0x4)
	float Radius; // 0x134(0x4)
	struct USlateBrushAsset* PieceImage; // 0x138(0x8)
	struct FSlateBrush Image; // 0x140(0x90)
	bool bEnableRadius; // 0x1D0(0x1)
	uint8_t Pad_0x1D5[0x13]; // 0x1D5(0x13)

	// Object: Function UMG.CircularThrobber.SetRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06bbdc
	// Params: [ Num(1) Size(0x4) ]
	void SetRadius(float InRadius);

	// Object: Function UMG.CircularThrobber.SetPeriod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06bc84
	// Params: [ Num(1) Size(0x4) ]
	void SetPeriod(float InPeriod);

	// Object: Function UMG.CircularThrobber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06bd2c
	// Params: [ Num(1) Size(0x4) ]
	void SetNumberOfPieces(int32_t InNumberOfPieces);
};

// Object: Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UColorBinding, "ColorBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.ColorBinding.GetSlateValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb06be20
	// Params: [ Num(1) Size(0x28) ]
	struct FSlateColor GetSlateValue();

	// Object: Function UMG.ColorBinding.GetLinearValue
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xb06bde8
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLinearValue();
};

// Object: Class UMG.ComboBox
// Size: 0x168 (Inherited: 0x130)
struct UComboBox : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UComboBox, "ComboBox")

	struct TArray<struct UObject*> Items; // 0x130(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x140(0x10)
	bool bIsFocusable; // 0x150(0x1)
	uint8_t Pad_0x151[0x17]; // 0x151(0x17)
};

// Object: Class UMG.ComboBoxString
// Size: 0xED0 (Inherited: 0x130)
struct UComboBoxString : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UComboBoxString, "ComboBoxString")

	struct TArray<struct FString> DefaultOptions; // 0x130(0x10)
	struct FString SelectedOption; // 0x140(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x150(0x420)
	struct FTableRowStyle ItemStyle; // 0x570(0x838)
	struct FMargin ContentPadding; // 0xDA8(0x10)
	float MaxListHeight; // 0xDB8(0x4)
	bool HasDownArrow; // 0xDBC(0x1)
	bool EnableGamepadNavigationMode; // 0xDBD(0x1)
	uint8_t Pad_0xDBE[0x2]; // 0xDBE(0x2)
	struct FSlateFontInfo Font; // 0xDC0(0x60)
	struct FSlateColor ForegroundColor; // 0xE20(0x28)
	bool bIsFocusable; // 0xE48(0x1)
	uint8_t Pad_0xE49[0x3]; // 0xE49(0x3)
	struct FDelegate OnGenerateWidgetEvent; // 0xE4C(0x10)
	uint8_t Pad_0xE5C[0x4]; // 0xE5C(0x4)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xE60(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xE70(0x10)
	uint8_t Pad_0xE80[0x50]; // 0xE80(0x50)

	// Object: Function UMG.ComboBoxString.SetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x979595c
	// Params: [ Num(1) Size(0x10) ]
	void SetSelectedOption(struct FString Option);

	// Object: Function UMG.ComboBoxString.SetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93dfdf0
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedIndex(int32_t Index);

	// Object: Function UMG.ComboBoxString.RemoveOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b6c70c
	// Params: [ Num(2) Size(0x11) ]
	bool RemoveOption(struct FString Option);

	// Object: Function UMG.ComboBoxString.RefreshOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06bfb4
	// Params: [ Num(0) Size(0x0) ]
	void RefreshOptions();

	// Object: DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x11) ]
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, uint8_t SelectionType);

	// Object: DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnOpeningEvent__DelegateSignature();

	// Object: Function UMG.ComboBoxString.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06bf7c
	// Params: [ Num(1) Size(0x1) ]
	bool IsOpen();

	// Object: Function UMG.ComboBoxString.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x95a3ccc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedOption();

	// Object: Function UMG.ComboBoxString.GetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x95aa444
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedIndex();

	// Object: Function UMG.ComboBoxString.GetOptionCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8af0558
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOptionCount();

	// Object: Function UMG.ComboBoxString.GetOptionAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x89ef900
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetOptionAtIndex(int32_t Index);

	// Object: Function UMG.ComboBoxString.FindOptionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x956174c
	// Params: [ Num(2) Size(0x14) ]
	int32_t FindOptionIndex(struct FString Option);

	// Object: Function UMG.ComboBoxString.ClearSelection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06bfc8
	// Params: [ Num(0) Size(0x0) ]
	void ClearSelection();

	// Object: Function UMG.ComboBoxString.ClearOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8813af0
	// Params: [ Num(0) Size(0x0) ]
	void ClearOptions();

	// Object: Function UMG.ComboBoxString.AddOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x847dffc
	// Params: [ Num(1) Size(0x10) ]
	void AddOption(struct FString Option);
};

// Object: Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDragDropOperation, "DragDropOperation")

	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x8)
	struct UWidget* DefaultDragVisual; // 0x40(0x8)
	EDragPivot Pivot; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	struct FVector2D Offset; // 0x4C(0x8)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	// Object: Function UMG.DragDropOperation.Drop
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0xb06c15c
	// Params: [ Num(1) Size(0x70) ]
	void Drop(const struct FPointerEvent& PointerEvent);

	// Object: Function UMG.DragDropOperation.Dragged
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x9db7be8
	// Params: [ Num(1) Size(0x70) ]
	void Dragged(const struct FPointerEvent& PointerEvent);

	// Object: Function UMG.DragDropOperation.DragCancelled
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x9db7d4c
	// Params: [ Num(1) Size(0x70) ]
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Object: Class UMG.DynamicEntryBoxBase
// Size: 0x208 (Inherited: 0x130)
struct UDynamicEntryBoxBase : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDynamicEntryBoxBase, "DynamicEntryBoxBase")

	EDynamicBoxType EntryBoxType; // 0x12C(0x1)
	struct FVector2D EntrySpacing; // 0x130(0x8)
	struct TArray<struct FVector2D> SpacingPattern; // 0x138(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x148(0x8)
	uint8_t EntryHorizontalAlignment; // 0x150(0x1)
	uint8_t EntryVerticalAlignment; // 0x151(0x1)
	uint8_t Pad_0x153[0x1]; // 0x153(0x1)
	int32_t MaxElementSize; // 0x154(0x4)
	struct FRadialBoxSettings RadialBoxSettings; // 0x158(0xC)
	uint8_t Pad_0x164[0x14]; // 0x164(0x14)
	struct FUserWidgetPool EntryWidgetPool; // 0x178(0x90)

	// Object: Function UMG.DynamicEntryBoxBase.SetRadialSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb06c678
	// Params: [ Num(1) Size(0xC) ]
	void SetRadialSettings(const struct FRadialBoxSettings& InSettings);

	// Object: Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb06c734
	// Params: [ Num(1) Size(0x8) ]
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);

	// Object: Function UMG.DynamicEntryBoxBase.GetNumEntries
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06c7e4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumEntries();

	// Object: Function UMG.DynamicEntryBoxBase.GetAllEntries
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06c818
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UUserWidget*> GetAllEntries();
};

// Object: Class UMG.DynamicEntryBox
// Size: 0x210 (Inherited: 0x208)
struct UDynamicEntryBox : UDynamicEntryBoxBase
{
	DEFINE_UE_CLASS_HELPERS(UDynamicEntryBox, "DynamicEntryBox")

	struct UUserWidget* EntryWidgetClass; // 0x208(0x8)

	// Object: Function UMG.DynamicEntryBox.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06c570
	// Params: [ Num(1) Size(0x1) ]
	void Reset(bool bDeleteWidgets);

	// Object: Function UMG.DynamicEntryBox.RemoveEntry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06c4c8
	// Params: [ Num(1) Size(0x8) ]
	void RemoveEntry(struct UUserWidget* EntryWidget);

	// Object: Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xb06c3e4
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass);

	// Object: Function UMG.DynamicEntryBox.BP_CreateEntry
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xb06c494
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* BP_CreateEntry();
};

// Object: Class UMG.EditableText
// Size: 0x4B0 (Inherited: 0x130)
struct UEditableText : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UEditableText, "EditableText")

	struct FText Text; // 0x130(0x18)
	struct FDelegate TextDelegate; // 0x148(0x10)
	struct FText HintText; // 0x158(0x18)
	struct FDelegate HintTextDelegate; // 0x170(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x180(0x240)
	struct USlateWidgetStyleAsset* Style; // 0x3C0(0x8)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3C8(0x8)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3D0(0x8)
	struct USlateBrushAsset* CaretImage; // 0x3D8(0x8)
	struct FSlateFontInfo Font; // 0x3E0(0x60)
	struct FSlateColor ColorAndOpacity; // 0x440(0x28)
	bool IsReadOnly; // 0x468(0x1)
	bool IsPassword; // 0x469(0x1)
	uint8_t Pad_0x46A[0x2]; // 0x46A(0x2)
	float MinimumDesiredWidth; // 0x46C(0x4)
	bool IsCaretMovedWhenGainFocus; // 0x470(0x1)
	bool SelectAllTextWhenFocused; // 0x471(0x1)
	bool RevertTextOnEscape; // 0x472(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x473(0x1)
	bool SelectAllTextOnCommit; // 0x474(0x1)
	bool AllowContextMenu; // 0x475(0x1)
	uint8_t KeyboardType; // 0x476(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x477(0x2)
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x479(0x1)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x47A(0x1)
	uint8_t Justification; // 0x47B(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x47C(0x3)
	uint8_t Pad_0x47F[0x1]; // 0x47F(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x480(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x490(0x10)
	uint8_t Pad_0x4A0[0x10]; // 0x4A0(0x10)

	// Object: Function UMG.EditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9825658
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.EditableText.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06c8a4
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);

	// Object: Function UMG.EditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06c94c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool InbIsReadyOnly);

	// Object: Function UMG.EditableText.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06cb70
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPassword(bool InbIsPassword);

	// Object: Function UMG.EditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06c9fc
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x19) ]
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.EditableText.JudgInFontLibrary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06cc20
	// Params: [ Num(1) Size(0x1) ]
	bool JudgInFontLibrary();

	// Object: Function UMG.EditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06cc58
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();
};

// Object: Class UMG.EditableTextBox
// Size: 0xAD8 (Inherited: 0x130)
struct UEditableTextBox : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UEditableTextBox, "EditableTextBox")

	struct FText Text; // 0x130(0x18)
	struct FDelegate TextDelegate; // 0x148(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x158(0x868)
	struct USlateWidgetStyleAsset* Style; // 0x9C0(0x8)
	struct FText HintText; // 0x9C8(0x18)
	struct FDelegate HintTextDelegate; // 0x9E0(0x10)
	struct FSlateFontInfo Font; // 0x9F0(0x60)
	struct FLinearColor ForegroundColor; // 0xA50(0x10)
	struct FLinearColor BackgroundColor; // 0xA60(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xA70(0x10)
	bool IsReadOnly; // 0xA80(0x1)
	bool IsPassword; // 0xA81(0x1)
	uint8_t Pad_0xA82[0x2]; // 0xA82(0x2)
	float MinimumDesiredWidth; // 0xA84(0x4)
	struct FMargin Padding; // 0xA88(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xA98(0x1)
	bool SelectAllTextWhenFocused; // 0xA99(0x1)
	bool RevertTextOnEscape; // 0xA9A(0x1)
	bool ClearKeyboardFocusOnCommit; // 0xA9B(0x1)
	bool SelectAllTextOnCommit; // 0xA9C(0x1)
	bool AllowContextMenu; // 0xA9D(0x1)
	uint8_t KeyboardType; // 0xA9E(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xA9F(0x2)
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xAA1(0x1)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xAA2(0x1)
	uint8_t Justification; // 0xAA3(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0xAA4(0x3)
	uint8_t Pad_0xAA7[0x1]; // 0xAA7(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0xAA8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xAB8(0x10)
	uint8_t Pad_0xAC8[0x10]; // 0xAC8(0x10)

	// Object: Function UMG.EditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94e6028
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.EditableTextBox.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06cdb0
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);

	// Object: Function UMG.EditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06cf54
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool bReadOnly);

	// Object: Function UMG.EditableTextBox.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06cea4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPassword(bool bIsPassword);

	// Object: Function UMG.EditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06d178
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InText);

	// Object: Function UMG.EditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06d004
	// Params: [ Num(1) Size(0x18) ]
	void SetError(struct FText InError);

	// Object: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x19) ]
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.EditableTextBox.JudgInFontLibrary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06d2ec
	// Params: [ Num(1) Size(0x1) ]
	bool JudgInFontLibrary();

	// Object: Function UMG.EditableTextBox.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06ce58
	// Params: [ Num(1) Size(0x1) ]
	bool HasError();

	// Object: Function UMG.EditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9199064
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.EditableTextBox.ClearError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06ce90
	// Params: [ Num(0) Size(0x0) ]
	void ClearError();
};

// Object: Class UMG.ExpandableArea
// Size: 0x378 (Inherited: 0x130)
struct UExpandableArea : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UExpandableArea, "ExpandableArea")

	uint8_t Pad_0x130[0x8]; // 0x130(0x8)
	struct FExpandableAreaStyle Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2F8(0x28)
	bool bIsExpanded; // 0x320(0x1)
	uint8_t Pad_0x321[0x3]; // 0x321(0x3)
	float MaxHeight; // 0x324(0x4)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* HeaderContent; // 0x358(0x8)
	struct UWidget* BodyContent; // 0x360(0x8)
	uint8_t Pad_0x368[0x10]; // 0x368(0x10)

	// Object: Function UMG.ExpandableArea.SetIsExpanded_Animated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06d3c8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsExpanded_Animated(bool IsExpanded);

	// Object: Function UMG.ExpandableArea.SetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06d478
	// Params: [ Num(1) Size(0x1) ]
	void SetIsExpanded(bool IsExpanded);

	// Object: Function UMG.ExpandableArea.GetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb06d528
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsExpanded();
};

// Object: Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UFloatBinding, "FloatBinding")

	// Object: Function UMG.FloatBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb06fb64
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();
};

// Object: Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)
struct UGridPanel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UGridPanel, "GridPanel")

	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	uint8_t Pad_0x168[0x10]; // 0x168(0x10)

	// Object: Function UMG.GridPanel.SetRowFill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06fba0
	// Params: [ Num(2) Size(0x8) ]
	void SetRowFill(int32_t ColumnIndex, float Coefficient);

	// Object: Function UMG.GridPanel.SetColumnFill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06fc88
	// Params: [ Num(2) Size(0x8) ]
	void SetColumnFill(int32_t ColumnIndex, float Coefficient);

	// Object: Function UMG.GridPanel.AddChildToGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90b1c6c
	// Params: [ Num(4) Size(0x18) ]
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Object: Class UMG.GridSlot
// Size: 0x98 (Inherited: 0x60)
struct UGridSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UGridSlot, "GridSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0x2]; // 0x72(0x2)
	int32_t Row; // 0x74(0x4)
	int32_t RowSpan; // 0x78(0x4)
	int32_t Column; // 0x7C(0x4)
	int32_t ColumnSpan; // 0x80(0x4)
	int32_t Layer; // 0x84(0x4)
	struct FVector2D Nudge; // 0x88(0x8)
	uint8_t Pad_0x90[0x8]; // 0x90(0x8)

	// Object: Function UMG.GridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06fd78
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.GridSlot.SetRowSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0700bc
	// Params: [ Num(1) Size(0x4) ]
	void SetRowSpan(int32_t InRowSpan);

	// Object: Function UMG.GridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db8ed0
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMG.GridSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070164
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.GridSlot.SetNudge
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb06fec8
	// Params: [ Num(1) Size(0x8) ]
	void SetNudge(struct FVector2D InNudge);

	// Object: Function UMG.GridSlot.SetLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06ff6c
	// Params: [ Num(1) Size(0x4) ]
	void SetLayer(int32_t InLayer);

	// Object: Function UMG.GridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb06fe20
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.GridSlot.SetColumnSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070014
	// Params: [ Num(1) Size(0x4) ]
	void SetColumnSpan(int32_t InColumnSpan);

	// Object: Function UMG.GridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9db8e28
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);
};

// Object: Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)
struct UHorizontalBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UHorizontalBox, "HorizontalBox")

	uint8_t Pad_0x148[0x10]; // 0x148(0x10)

	// Object: Function UMG.HorizontalBox.AddChildToHorizontalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x979e2d8
	// Params: [ Num(2) Size(0x10) ]
	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content);
};

// Object: Class UMG.HorizontalBoxSlot
// Size: 0x88 (Inherited: 0x60)
struct UHorizontalBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UHorizontalBoxSlot, "HorizontalBoxSlot")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
	struct FMargin Padding; // 0x68(0x10)
	struct FSlateChildSize Size; // 0x78(0x8)
	uint8_t HorizontalAlignment; // 0x80(0x1)
	uint8_t VerticalAlignment; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)

	// Object: Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0702d0
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.HorizontalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b75548
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FSlateChildSize InSize);

	// Object: Function UMG.HorizontalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070378
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8703b58
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.InputKeySelector
// Size: 0x770 (Inherited: 0x130)
struct UInputKeySelector : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UInputKeySelector, "InputKeySelector")

	struct FButtonStyle WidgetStyle; // 0x130(0x298)
	struct FTextBlockStyle TextStyle; // 0x3C8(0x290)
	struct FInputChord SelectedKey; // 0x658(0x20)
	struct FSlateFontInfo Font; // 0x678(0x60)
	struct FMargin Margin; // 0x6D8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x6E8(0x10)
	struct FText KeySelectionText; // 0x6F8(0x18)
	struct FText NoKeySpecifiedText; // 0x710(0x18)
	bool bAllowModifierKeys; // 0x728(0x1)
	bool bAllowGamepadKeys; // 0x729(0x1)
	uint8_t Pad_0x72A[0x6]; // 0x72A(0x6)
	struct TArray<struct FKey> EscapeKeys; // 0x730(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x740(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x750(0x10)
	uint8_t Pad_0x760[0x10]; // 0x760(0x10)

	// Object: Function UMG.InputKeySelector.SetTextBlockVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070b04
	// Params: [ Num(1) Size(0x1) ]
	void SetTextBlockVisibility(ESlateVisibility InVisibility);

	// Object: Function UMG.InputKeySelector.SetSelectedKey
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb07102c
	// Params: [ Num(1) Size(0x20) ]
	void SetSelectedKey(const struct FInputChord& InSelectedKey);

	// Object: Function UMG.InputKeySelector.SetNoKeySpecifiedText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070d44
	// Params: [ Num(1) Size(0x18) ]
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText);

	// Object: Function UMG.InputKeySelector.SetKeySelectionText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070eb8
	// Params: [ Num(1) Size(0x18) ]
	void SetKeySelectionText(struct FText InKeySelectionText);

	// Object: Function UMG.InputKeySelector.SetEscapeKeys
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb070a48
	// Params: [ Num(1) Size(0x10) ]
	void SetEscapeKeys(const struct TArray<struct FKey>& InKeys);

	// Object: Function UMG.InputKeySelector.SetAllowModifierKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070c94
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowModifierKeys(bool bInAllowModifierKeys);

	// Object: Function UMG.InputKeySelector.SetAllowGamepadKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb070be4
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);

	// Object: DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x20) ]
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey);

	// Object: DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnIsSelectingKeyChanged__DelegateSignature();

	// Object: Function UMG.InputKeySelector.GetIsSelectingKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb070bac
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsSelectingKey();
};

// Object: Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UInt32Binding, "Int32Binding")

	// Object: Function UMG.Int32Binding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb0711b4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetValue();
};

// Object: Class UMG.InvalidationBox
// Size: 0x158 (Inherited: 0x148)
struct UInvalidationBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UInvalidationBox, "InvalidationBox")

	bool bCanCache; // 0x141(0x1)
	bool CacheRelativeTransforms; // 0x142(0x1)
	uint8_t Pad_0x14A[0xE]; // 0x14A(0xE)

	// Object: Function UMG.InvalidationBox.SetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0711f0
	// Params: [ Num(1) Size(0x1) ]
	void SetCanCache(bool CanCache);

	// Object: Function UMG.InvalidationBox.InvalidateCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0712d8
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateCache();

	// Object: Function UMG.InvalidationBox.GetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0712a0
	// Params: [ Num(1) Size(0x1) ]
	bool GetCanCache();
};

// Object: Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct IUserListEntry : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IUserListEntry, "UserListEntry")

	// Object: Function UMG.UserListEntry.BP_OnItemSelectionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemSelectionChanged(bool bIsSelected);

	// Object: Function UMG.UserListEntry.BP_OnItemExpansionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemExpansionChanged(bool bIsExpanded);

	// Object: Function UMG.UserListEntry.BP_OnEntryReleased
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnEntryReleased();
};

// Object: Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUserListEntryLibrary, "UserListEntryLibrary")

	// Object: Function UMG.UserListEntryLibrary.IsListItemSelected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07153c
	// Params: [ Num(2) Size(0x11) ]
	static bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry);

	// Object: Function UMG.UserListEntryLibrary.IsListItemExpanded
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb071480
	// Params: [ Num(2) Size(0x11) ]
	static bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry);

	// Object: Function UMG.UserListEntryLibrary.GetOwningListView
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0713c8
	// Params: [ Num(2) Size(0x18) ]
	static struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry);
};

// Object: Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct IUserObjectListEntry : IUserListEntry
{
	DEFINE_UE_CLASS_HELPERS(IUserObjectListEntry, "UserObjectListEntry")

	// Object: Function UMG.UserObjectListEntry.OnListItemObjectSet
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnListItemObjectSet(struct UObject* ListItemObject);
};

// Object: Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUserObjectListEntryLibrary, "UserObjectListEntryLibrary")

	// Object: Function UMG.UserObjectListEntryLibrary.GetListItemObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb071624
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
};

// Object: Class UMG.ListItemData
// Size: 0x48 (Inherited: 0x28)
struct UListItemData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UListItemData, "ListItemData")

	int32_t Index; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText Content; // 0x30(0x18)

	// Object: Function UMG.ListItemData.SetIndex
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb0723d0
	// Params: [ Num(1) Size(0x4) ]
	void SetIndex(const int32_t& idx);

	// Object: Function UMG.ListItemData.SetContent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb0722c4
	// Params: [ Num(1) Size(0x18) ]
	void SetContent(const struct FText& Msg);
};

// Object: Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject
{
	DEFINE_UE_CLASS_HELPERS(UListViewDesignerPreviewItem, "ListViewDesignerPreviewItem")
};

// Object: Class UMG.MenuAnchor
// Size: 0x198 (Inherited: 0x148)
struct UMenuAnchor : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UMenuAnchor, "MenuAnchor")

	struct UUserWidget* MenuClass; // 0x148(0x8)
	struct FDelegate OnGetMenuContentEvent; // 0x150(0x10)
	struct FDelegate OnGetUserMenuContentEvent; // 0x160(0x10)
	uint8_t Placement; // 0x170(0x1)
	bool bFitInWindow; // 0x171(0x1)
	bool ShouldDeferPaintingAfterWindowContent; // 0x172(0x1)
	bool UseApplicationMenuStack; // 0x173(0x1)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x178(0x10)
	uint8_t Pad_0x188[0x10]; // 0x188(0x10)

	// Object: Function UMG.MenuAnchor.ToggleOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0753a4
	// Params: [ Num(1) Size(0x1) ]
	void ToggleOpen(bool bFocusOnOpen);

	// Object: Function UMG.MenuAnchor.ShouldOpenDueToClick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb075270
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldOpenDueToClick();

	// Object: Function UMG.MenuAnchor.SetPlacement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075504
	// Params: [ Num(1) Size(0x1) ]
	void SetPlacement(uint8_t InPlacement);

	// Object: Function UMG.MenuAnchor.Open
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0752f4
	// Params: [ Num(1) Size(0x1) ]
	void Open(bool bFocusMenu);

	// Object: Function UMG.MenuAnchor.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0752a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsOpen();

	// Object: Function UMG.MenuAnchor.HasOpenSubMenus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb075204
	// Params: [ Num(1) Size(0x1) ]
	bool HasOpenSubMenus();

	// Object: DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetUserWidget__DelegateSignature();

	// Object: Function UMG.MenuAnchor.GetMenuPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07523c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMenuPosition();

	// Object: Function UMG.MenuAnchor.FitInWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075454
	// Params: [ Num(1) Size(0x1) ]
	void FitInWindow(bool bFit);

	// Object: Function UMG.MenuAnchor.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0752e0
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UMouseCursorBinding, "MouseCursorBinding")

	// Object: Function UMG.MouseCursorBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb075620
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetValue();
};

// Object: Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene2DTransformPropertySystem, "MovieScene2DTransformPropertySystem")
};

// Object: Class UMG.MovieScene2DTransformSection
// Size: 0x550 (Inherited: 0xE0)
struct UMovieScene2DTransformSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene2DTransformSection, "MovieScene2DTransformSection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct FMovieScene2DTransformMask TransformMask; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xF0(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x230(0xA0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2D0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x410(0x140)
};

// Object: Class UMG.MovieScene2DTransformTrack
// Size: 0xA8 (Inherited: 0xA8)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene2DTransformTrack, "MovieScene2DTransformTrack")
};

// Object: Class UMG.MovieSceneMarginSection
// Size: 0x360 (Inherited: 0xE0)
struct UMovieSceneMarginSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMarginSection, "MovieSceneMarginSection")

	struct FMovieSceneFloatChannel TopCurve; // 0xE0(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x220(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2C0(0xA0)
};

// Object: Class UMG.MovieSceneMarginTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMarginTrack, "MovieSceneMarginTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xA8 (Inherited: 0x88)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneWidgetMaterialTrack, "MovieSceneWidgetMaterialTrack")

	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct TArray<struct FName> BrushPropertyNamePath; // 0x90(0x10)
	struct FName TrackName; // 0xA0(0x8)
};

// Object: Class UMG.MultiLineEditableText
// Size: 0x4C0 (Inherited: 0x150)
struct UMultiLineEditableText : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(UMultiLineEditableText, "MultiLineEditableText")

	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	struct FDelegate HintTextDelegate; // 0x180(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x190(0x290)
	bool bIsReadOnly; // 0x420(0x1)
	uint8_t Pad_0x421[0x7]; // 0x421(0x7)
	struct FSlateFontInfo Font; // 0x428(0x60)
	bool SelectAllTextWhenFocused; // 0x488(0x1)
	bool ClearTextSelectionOnFocusLoss; // 0x489(0x1)
	bool RevertTextOnEscape; // 0x48A(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x48B(0x1)
	bool AllowContextMenu; // 0x48C(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x48D(0x2)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x48F(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4A0(0x10)
	uint8_t Pad_0x4B0[0x10]; // 0x4B0(0x10)

	// Object: Function UMG.MultiLineEditableText.SetWidgetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb0756a4
	// Params: [ Num(1) Size(0x290) ]
	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);

	// Object: Function UMG.MultiLineEditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x983d024
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.MultiLineEditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075764
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool bReadOnly);

	// Object: Function UMG.MultiLineEditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075814
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x19) ]
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.MultiLineEditableText.JudgInFontLibraryBaseInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075a54
	// Params: [ Num(2) Size(0x11) ]
	bool JudgInFontLibraryBaseInput(struct FString InputText);

	// Object: Function UMG.MultiLineEditableText.JudgInFontLibrary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075b68
	// Params: [ Num(1) Size(0x1) ]
	bool JudgInFontLibrary();

	// Object: Function UMG.MultiLineEditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x96aff54
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.MultiLineEditableText.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb075988
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();
};

// Object: Class UMG.MultiLineEditableTextBox
// Size: 0xD58 (Inherited: 0x150)
struct UMultiLineEditableTextBox : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(UMultiLineEditableTextBox, "MultiLineEditableTextBox")

	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	struct FDelegate HintTextDelegate; // 0x180(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x190(0x868)
	struct FTextBlockStyle TextStyle; // 0x9F8(0x290)
	bool bIsReadOnly; // 0xC88(0x1)
	bool AllowContextMenu; // 0xC89(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xC8A(0x2)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xC8C(0x1)
	uint8_t Pad_0xC8D[0x3]; // 0xC8D(0x3)
	struct USlateWidgetStyleAsset* Style; // 0xC90(0x8)
	struct FSlateFontInfo Font; // 0xC98(0x60)
	struct FLinearColor ForegroundColor; // 0xCF8(0x10)
	struct FLinearColor BackgroundColor; // 0xD08(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xD18(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xD28(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xD38(0x10)
	uint8_t Pad_0xD48[0x10]; // 0xD48(0x10)

	// Object: Function UMG.MultiLineEditableTextBox.SetTextStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb075c14
	// Params: [ Num(1) Size(0x290) ]
	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);

	// Object: Function UMG.MultiLineEditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb076138
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075cd4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool bReadOnly);

	// Object: Function UMG.MultiLineEditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075ef8
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: Function UMG.MultiLineEditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb075d84
	// Params: [ Num(1) Size(0x18) ]
	void SetError(struct FText InError);

	// Object: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x19) ]
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.MultiLineEditableTextBox.JudgInFontLibrary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0762ac
	// Params: [ Num(1) Size(0x1) ]
	bool JudgInFontLibrary();

	// Object: Function UMG.MultiLineEditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0762e4
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.MultiLineEditableTextBox.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07606c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();
};

// Object: Class UMG.NamedSlot
// Size: 0x158 (Inherited: 0x148)
struct UNamedSlot : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UNamedSlot, "NamedSlot")

	uint8_t Pad_0x148[0x10]; // 0x148(0x10)
};

// Object: Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct INamedSlotInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INamedSlotInterface, "NamedSlotInterface")
};

// Object: Class UMG.NativeWidgetHost
// Size: 0x140 (Inherited: 0x130)
struct UNativeWidgetHost : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UNativeWidgetHost, "NativeWidgetHost")

	uint8_t Pad_0x130[0x10]; // 0x130(0x10)
};

// Object: Class UMG.ProgressBar
// Size: 0x358 (Inherited: 0x130)
struct UProgressBar : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UProgressBar, "ProgressBar")

	struct FProgressBarStyle WidgetStyle; // 0x130(0x1B8)
	struct USlateWidgetStyleAsset* Style; // 0x2E8(0x8)
	struct USlateBrushAsset* BackgroundImage; // 0x2F0(0x8)
	struct USlateBrushAsset* FillImage; // 0x2F8(0x8)
	struct USlateBrushAsset* MarqueeImage; // 0x300(0x8)
	float Percent; // 0x308(0x4)
	uint8_t BarFillType; // 0x30C(0x1)
	bool bIsMarquee; // 0x30D(0x1)
	uint8_t Pad_0x30E[0x2]; // 0x30E(0x2)
	struct FVector2D BorderPadding; // 0x310(0x8)
	struct FDelegate PercentDelegate; // 0x318(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x328(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x338(0x10)
	uint8_t Pad_0x348[0x10]; // 0x348(0x10)

	// Object: Function UMG.ProgressBar.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7555118
	// Params: [ Num(1) Size(0x4) ]
	void SetPercent(float InPercent);

	// Object: Function UMG.ProgressBar.SetIsMarquee
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb079694
	// Params: [ Num(1) Size(0x1) ]
	void SetIsMarquee(bool InbIsMarquee);

	// Object: Function UMG.ProgressBar.SetFillColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x822802c
	// Params: [ Num(1) Size(0x10) ]
	void SetFillColorAndOpacity(struct FLinearColor InColor);
};

// Object: Class UMG.RetainerBox
// Size: 0x170 (Inherited: 0x148)
struct URetainerBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(URetainerBox, "RetainerBox")

	bool bRetainRender; // 0x141(0x1)
	bool bRetainRenderInDesignTime; // 0x142(0x1)
	bool RenderOnInvalidation; // 0x143(0x1)
	bool RenderOnPhase; // 0x144(0x1)
	int32_t Phase; // 0x148(0x4)
	int32_t PhaseCount; // 0x14C(0x4)
	struct UMaterialInterface* EffectMaterial; // 0x150(0x8)
	struct FName TextureParameter; // 0x158(0x8)
	uint8_t Pad_0x164[0xC]; // 0x164(0xC)

	// Object: Function UMG.RetainerBox.SetTextureParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07982c
	// Params: [ Num(1) Size(0x8) ]
	void SetTextureParameter(struct FName TextureParameter);

	// Object: Function UMG.RetainerBox.SetRetainRendering
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07977c
	// Params: [ Num(1) Size(0x1) ]
	void SetRetainRendering(bool bInRetainRendering);

	// Object: Function UMG.RetainerBox.SetRenderingPhase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0798e8
	// Params: [ Num(2) Size(0x8) ]
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);

	// Object: Function UMG.RetainerBox.SetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbce54
	// Params: [ Num(1) Size(0x8) ]
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial);

	// Object: Function UMG.RetainerBox.RequestRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0798d4
	// Params: [ Num(0) Size(0x0) ]
	void RequestRender();

	// Object: Function UMG.RetainerBox.GetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9dbcefc
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetEffectMaterial();
};

// Object: Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlockImageDecorator, "RichTextBlockImageDecorator")

	struct UDataTable* ImageSet; // 0x28(0x8)
};

// Object: Class UMG.SafeZone
// Size: 0x158 (Inherited: 0x148)
struct USafeZone : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(USafeZone, "SafeZone")

	bool PadLeft; // 0x141(0x1)
	bool PadRight; // 0x142(0x1)
	bool PadTop; // 0x143(0x1)
	bool PadBottom; // 0x144(0x1)
	uint8_t Pad_0x14C[0xC]; // 0x14C(0xC)

	// Object: Function UMG.SafeZone.SetSidesToPad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07a658
	// Params: [ Num(4) Size(0x4) ]
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Object: Class UMG.SafeZoneSlot
// Size: 0x88 (Inherited: 0x60)
struct USafeZoneSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(USafeZoneSlot, "SafeZoneSlot")

	bool bIsTitleSafe; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	struct FMargin SafeAreaScale; // 0x64(0x10)
	uint8_t HAlign; // 0x74(0x1)
	uint8_t VAlign; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
	struct FMargin Padding; // 0x78(0x10)
};

// Object: Class UMG.ScaleBox
// Size: 0x168 (Inherited: 0x148)
struct UScaleBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UScaleBox, "ScaleBox")

	uint8_t Stretch; // 0x141(0x1)
	uint8_t StretchDirection; // 0x142(0x1)
	float UserSpecifiedScale; // 0x144(0x4)
	bool IgnoreInheritedScale; // 0x148(0x1)
	uint8_t AssumePaintSizeUseType; // 0x149(0x1)
	struct FVector2D AssumePaintSize; // 0x14C(0x8)
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)

	// Object: Function UMG.ScaleBox.SetUserSpecifiedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x858a320
	// Params: [ Num(1) Size(0x4) ]
	void SetUserSpecifiedScale(float InUserSpecifiedScale);

	// Object: Function UMG.ScaleBox.SetStretchDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8732bb4
	// Params: [ Num(1) Size(0x1) ]
	void SetStretchDirection(uint8_t InStretchDirection);

	// Object: Function UMG.ScaleBox.SetStretch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8696e04
	// Params: [ Num(1) Size(0x1) ]
	void SetStretch(uint8_t InStretch);

	// Object: Function UMG.ScaleBox.SetIgnoreInheritedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07a9b4
	// Params: [ Num(1) Size(0x1) ]
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);

	// Object: Function UMG.ScaleBox.SetAssumePaintSizeUse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07a868
	// Params: [ Num(1) Size(0x1) ]
	void SetAssumePaintSizeUse(uint8_t InType);

	// Object: Function UMG.ScaleBox.SetAssumePaintSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb07a910
	// Params: [ Num(1) Size(0x8) ]
	void SetAssumePaintSize(struct FVector2D Size);
};

// Object: Class UMG.ScaleBoxSlot
// Size: 0x88 (Inherited: 0x60)
struct UScaleBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UScaleBoxSlot, "ScaleBoxSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0x16]; // 0x72(0x16)

	// Object: Function UMG.ScaleBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07aa90
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.ScaleBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ab38
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9848de0
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.ScrollBar
// Size: 0x680 (Inherited: 0x130)
struct UScrollBar : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UScrollBar, "ScrollBar")

	struct FScrollBarStyle WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x8)
	bool bAlwaysShowScrollbar; // 0x650(0x1)
	bool bAlwaysShowScrollbarTrack; // 0x651(0x1)
	uint8_t Orientation; // 0x652(0x1)
	uint8_t Pad_0x653[0x1]; // 0x653(0x1)
	struct FVector2D Thickness; // 0x654(0x8)
	struct FMargin Padding; // 0x65C(0x10)
	uint8_t Pad_0x66C[0x14]; // 0x66C(0x14)

	// Object: Function UMG.ScrollBar.SetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07abec
	// Params: [ Num(2) Size(0x8) ]
	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Object: Class UMG.ScrollBoxSlot
// Size: 0x80 (Inherited: 0x60)
struct UScrollBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UScrollBoxSlot, "ScrollBoxSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0xE]; // 0x72(0xE)

	// Object: Function UMG.ScrollBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07b254
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.ScrollBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92aaa40
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07b2fc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.SizeBox
// Size: 0x180 (Inherited: 0x148)
struct USizeBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(USizeBox, "SizeBox")

	uint8_t Pad_0x148[0x10]; // 0x148(0x10)
	float WidthOverride; // 0x158(0x4)
	float HeightOverride; // 0x15C(0x4)
	float MinDesiredWidth; // 0x160(0x4)
	float MinDesiredHeight; // 0x164(0x4)
	float MaxDesiredWidth; // 0x168(0x4)
	float MaxDesiredHeight; // 0x16C(0x4)
	float MinAspectRatio; // 0x170(0x4)
	float MaxAspectRatio; // 0x174(0x4)
	uint8_t bOverride_WidthOverride : 1; // 0x178(0x1), Mask(0x1)
	uint8_t bOverride_HeightOverride : 1; // 0x178(0x1), Mask(0x2)
	uint8_t bOverride_MinDesiredWidth : 1; // 0x178(0x1), Mask(0x4)
	uint8_t bOverride_MinDesiredHeight : 1; // 0x178(0x1), Mask(0x8)
	uint8_t bOverride_MaxDesiredWidth : 1; // 0x178(0x1), Mask(0x10)
	uint8_t bOverride_MaxDesiredHeight : 1; // 0x178(0x1), Mask(0x20)
	uint8_t bOverride_MinAspectRatio : 1; // 0x178(0x1), Mask(0x40)
	uint8_t bOverride_MaxAspectRatio : 1; // 0x178(0x1), Mask(0x80)
	uint8_t Pad_0x179[0x7]; // 0x179(0x7)

	// Object: Function UMG.SizeBox.SetWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbe810
	// Params: [ Num(1) Size(0x4) ]
	void SetWidthOverride(float InWidthOverride);

	// Object: Function UMG.SizeBox.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07decc
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.SizeBox.SetMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbe6c0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredHeight(float InMinDesiredHeight);

	// Object: Function UMG.SizeBox.SetMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dc84
	// Params: [ Num(1) Size(0x4) ]
	void SetMinAspectRatio(float InMinAspectRatio);

	// Object: Function UMG.SizeBox.SetMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ddfc
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredWidth(float InMaxDesiredWidth);

	// Object: Function UMG.SizeBox.SetMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dd40
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredHeight(float InMaxDesiredHeight);

	// Object: Function UMG.SizeBox.SetMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dbdc
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxAspectRatio(float InMaxAspectRatio);

	// Object: Function UMG.SizeBox.SetHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9dbe768
	// Params: [ Num(1) Size(0x4) ]
	void SetHeightOverride(float InHeightOverride);

	// Object: Function UMG.SizeBox.ClearWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07df88
	// Params: [ Num(0) Size(0x0) ]
	void ClearWidthOverride();

	// Object: Function UMG.SizeBox.ClearMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07deb8
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredWidth();

	// Object: Function UMG.SizeBox.ClearMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dea4
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredHeight();

	// Object: Function UMG.SizeBox.ClearMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dbc8
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinAspectRatio();

	// Object: Function UMG.SizeBox.ClearMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dde8
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredWidth();

	// Object: Function UMG.SizeBox.ClearMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dd2c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredHeight();

	// Object: Function UMG.SizeBox.ClearMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07dbb4
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxAspectRatio();

	// Object: Function UMG.SizeBox.ClearHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07df74
	// Params: [ Num(0) Size(0x0) ]
	void ClearHeightOverride();
};

// Object: Class UMG.SizeBoxSlot
// Size: 0x88 (Inherited: 0x60)
struct USizeBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(USizeBoxSlot, "SizeBoxSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	uint8_t HorizontalAlignment; // 0x80(0x1)
	uint8_t VerticalAlignment; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)

	// Object: Function UMG.SizeBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07e024
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.SizeBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07e174
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.SizeBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07e0cc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USlateBlueprintLibrary, "SlateBlueprintLibrary")

	// Object: Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07e9ac
	// Params: [ Num(3) Size(0x48) ]
	static struct FVector2D TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalVector);

	// Object: Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07eaa4
	// Params: [ Num(3) Size(0x48) ]
	static struct FVector2D TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteVector);

	// Object: Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07eb9c
	// Params: [ Num(3) Size(0x40) ]
	static float TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);

	// Object: Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07ec94
	// Params: [ Num(3) Size(0x40) ]
	static float TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xb07e4b0
	// Params: [ Num(5) Size(0x51) ]
	static void ScreenToWidgetLocal(struct UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xb07e344
	// Params: [ Num(4) Size(0x19) ]
	static void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xb07e228
	// Params: [ Num(3) Size(0x18) ]
	static void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.LocalToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9dbee30
	// Params: [ Num(5) Size(0x58) ]
	static void LocalToViewport(struct UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07ee48
	// Params: [ Num(3) Size(0x48) ]
	static struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.IsUnderLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07ef40
	// Params: [ Num(3) Size(0x41) ]
	static bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07ed8c
	// Params: [ Num(2) Size(0x40) ]
	static struct FVector2D GetLocalTopLeft(const struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.GetLocalSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x85cc104
	// Params: [ Num(2) Size(0x40) ]
	static struct FVector2D GetLocalSize(const struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7753d38
	// Params: [ Num(2) Size(0x40) ]
	static struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07e7d8
	// Params: [ Num(3) Size(0x121) ]
	static bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);

	// Object: Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb07e66c
	// Params: [ Num(4) Size(0x20) ]
	static void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x76ab014
	// Params: [ Num(3) Size(0x48) ]
	static struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate);
};

// Object: Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject
{
	DEFINE_UE_CLASS_HELPERS(USlateVectorArtData, "SlateVectorArtData")

	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x8)
	struct FVector2D ExtentMin; // 0x50(0x8)
	struct FVector2D ExtentMax; // 0x58(0x8)
};

// Object: Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject
{
	DEFINE_UE_CLASS_HELPERS(USlateAccessibleWidgetData, "SlateAccessibleWidgetData")

	bool bCanChildrenBeAccessible; // 0x28(0x1)
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x1)
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Object: Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)
struct USpacer : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USpacer, "Spacer")

	struct FVector2D Size; // 0x12C(0x8)
	uint8_t Pad_0x138[0x10]; // 0x138(0x10)

	// Object: Function UMG.Spacer.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb07f5cc
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FVector2D InSize);
};

// Object: Class UMG.SpinBox
// Size: 0x570 (Inherited: 0x130)
struct USpinBox : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USpinBox, "SpinBox")

	float Value; // 0x12C(0x4)
	struct FDelegate ValueDelegate; // 0x130(0x10)
	struct FSpinBoxStyle WidgetStyle; // 0x140(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x450(0x8)
	int32_t MinFractionalDigits; // 0x458(0x4)
	int32_t MaxFractionalDigits; // 0x45C(0x4)
	bool bAlwaysUsesDeltaSnap; // 0x460(0x1)
	float Delta; // 0x464(0x4)
	float SliderExponent; // 0x468(0x4)
	uint8_t Pad_0x46D[0x3]; // 0x46D(0x3)
	struct FSlateFontInfo Font; // 0x470(0x60)
	uint8_t Justification; // 0x4D0(0x1)
	uint8_t Pad_0x4D1[0x3]; // 0x4D1(0x3)
	float MinDesiredWidth; // 0x4D4(0x4)
	bool ClearKeyboardFocusOnCommit; // 0x4D8(0x1)
	bool SelectAllTextOnCommit; // 0x4D9(0x1)
	uint8_t Pad_0x4DA[0x6]; // 0x4DA(0x6)
	struct FSlateColor ForegroundColor; // 0x4E0(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x508(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x518(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x528(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x538(0x10)
	uint8_t bOverride_MinValue : 1; // 0x548(0x1), Mask(0x1)
	uint8_t bOverride_MaxValue : 1; // 0x548(0x1), Mask(0x2)
	uint8_t bOverride_MinSliderValue : 1; // 0x548(0x1), Mask(0x4)
	uint8_t bOverride_MaxSliderValue : 1; // 0x548(0x1), Mask(0x8)
	uint8_t BitPad_0x548_4 : 4; // 0x548(0x1)
	uint8_t Pad_0x549[0x3]; // 0x549(0x3)
	float MinValue; // 0x54C(0x4)
	float MaxValue; // 0x550(0x4)
	float MinSliderValue; // 0x554(0x4)
	float MaxSliderValue; // 0x558(0x4)
	uint8_t Pad_0x55C[0x14]; // 0x55C(0x14)

	// Object: Function UMG.SpinBox.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07ff3c
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07fae4
	// Params: [ Num(1) Size(0x4) ]
	void SetMinValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f904
	// Params: [ Num(1) Size(0x4) ]
	void SetMinSliderValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07fe60
	// Params: [ Num(1) Size(0x4) ]
	void SetMinFractionalDigits(int32_t NewValue);

	// Object: Function UMG.SpinBox.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f9f4
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f814
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxSliderValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMaxFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07fd84
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxFractionalDigits(int32_t NewValue);

	// Object: Function UMG.SpinBox.SetForegroundColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f678
	// Params: [ Num(1) Size(0x28) ]
	void SetForegroundColor(struct FSlateColor InForegroundColor);

	// Object: Function UMG.SpinBox.SetDelta
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07fbc0
	// Params: [ Num(1) Size(0x4) ]
	void SetDelta(float NewValue);

	// Object: Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07fc9c
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysUsesDeltaSnap(bool bNewValue);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x5) ]
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnSpinBoxBeginSliderMovement__DelegateSignature();

	// Object: Function UMG.SpinBox.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07ffe4
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function UMG.SpinBox.GetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07fb8c
	// Params: [ Num(1) Size(0x4) ]
	float GetMinValue();

	// Object: Function UMG.SpinBox.GetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07f9ac
	// Params: [ Num(1) Size(0x4) ]
	float GetMinSliderValue();

	// Object: Function UMG.SpinBox.GetMinFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07ff08
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMinFractionalDigits();

	// Object: Function UMG.SpinBox.GetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07fa9c
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxValue();

	// Object: Function UMG.SpinBox.GetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07f8bc
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxSliderValue();

	// Object: Function UMG.SpinBox.GetMaxFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07fe2c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxFractionalDigits();

	// Object: Function UMG.SpinBox.GetDelta
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07fc68
	// Params: [ Num(1) Size(0x4) ]
	float GetDelta();

	// Object: Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb07fd4c
	// Params: [ Num(1) Size(0x1) ]
	bool GetAlwaysUsesDeltaSnap();

	// Object: Function UMG.SpinBox.ClearMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07fad0
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinValue();

	// Object: Function UMG.SpinBox.ClearMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f8f0
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinSliderValue();

	// Object: Function UMG.SpinBox.ClearMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f9e0
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxValue();

	// Object: Function UMG.SpinBox.ClearMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb07f800
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxSliderValue();
};

// Object: Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UTextBinding, "TextBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.TextBinding.GetTextValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x87fad20
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetTextValue();

	// Object: Function UMG.TextBinding.GetStringValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb082c04
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetStringValue();
};

// Object: Class UMG.TextBlock
// Size: 0x300 (Inherited: 0x150)
struct UTextBlock : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(UTextBlock, "TextBlock")

	struct FText Text; // 0x150(0x18)
	struct FDelegate TextDelegate; // 0x168(0x10)
	struct FSlateColor ColorAndOpacity; // 0x178(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1A0(0x10)
	struct FSlateFontInfo Font; // 0x1B0(0x60)
	struct FSlateBrush StrikeBrush; // 0x210(0x90)
	struct FVector2D ShadowOffset; // 0x2A0(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x2A8(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2B8(0x10)
	float MinDesiredWidth; // 0x2C8(0x4)
	bool bWrapWithInvalidationPanel; // 0x2CC(0x1)
	bool bAutoWrapText; // 0x2CD(0x1)
	ETextTransformPolicy TextTransformPolicy; // 0x2CE(0x1)
	ELocalizationFeature LocalizationFeature; // 0x2CF(0x1)
	bool LocalizationUpper; // 0x2D0(0x1)
	bool bShowDetail; // 0x2D1(0x1)
	bool bHandleLongText; // 0x2D2(0x1)
	uint8_t Pad_0x2D3[0x1]; // 0x2D3(0x1)
	float Thailine_height_percentage; // 0x2D4(0x4)
	bool bEnable_Thailine_height_percentage; // 0x2D8(0x1)
	uint8_t Pad_0x2D9[0x3]; // 0x2D9(0x3)
	int32_t MaxTextLength; // 0x2DC(0x4)
	uint8_t Pad_0x2E0[0x1]; // 0x2E0(0x1)
	bool bEnableAutoTruncate; // 0x2E1(0x1)
	EVisiblityScope VisiblityScope; // 0x2E2(0x1)
	uint8_t Pad_0x2E3[0x1]; // 0x2E3(0x1)
	int32_t ForceUiLayerId; // 0x2E4(0x4)
	bool bSimpleTextMode; // 0x2E8(0x1)
	uint8_t Pad_0x2E9[0x17]; // 0x2E9(0x17)

	// Object: Function UMG.TextBlock.SetTextTransformPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0830ac
	// Params: [ Num(1) Size(0x1) ]
	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);

	// Object: Function UMG.TextBlock.SetText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x6335cfc
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.TextBlock.SetStrikeBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0831fc
	// Params: [ Num(1) Size(0x90) ]
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush);

	// Object: Function UMG.TextBlock.SetSimpleTextMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb082ee4
	// Params: [ Num(1) Size(0x1) ]
	void SetSimpleTextMode(bool SimpleTextMode);

	// Object: Function UMG.TextBlock.SetShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb083398
	// Params: [ Num(1) Size(0x8) ]
	void SetShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function UMG.TextBlock.SetShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9dc084c
	// Params: [ Num(1) Size(0x10) ]
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function UMG.TextBlock.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08343c
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.TextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083154
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.TextBlock.SetForceUiLayerId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb082d70
	// Params: [ Num(1) Size(0x4) ]
	void SetForceUiLayerId(int32_t InLayerId);

	// Object: Function UMG.TextBlock.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8569020
	// Params: [ Num(1) Size(0x60) ]
	void SetFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.TextBlock.SetEnableAutoTruncate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb082f94
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableAutoTruncate(bool bEnable);

	// Object: Function UMG.TextBlock.SetColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x67ae4dc
	// Params: [ Num(1) Size(0x28) ]
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function UMG.TextBlock.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9594950
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(bool InAutoTextWrap);

	// Object: Function UMG.TextBlock.RefreshL10NTextBaseInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9578c04
	// Params: [ Num(2) Size(0x20) ]
	struct FText RefreshL10NTextBaseInt(int64_t InputNumber);

	// Object: Function UMG.TextBlock.RefreshL10NTextBaseFloat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86c44d0
	// Params: [ Num(2) Size(0x20) ]
	struct FText RefreshL10NTextBaseFloat(float InputNumber);

	// Object: Function UMG.TextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb082e18
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.TextBlock.GetDynamicOutlineMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083044
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial();

	// Object: Function UMG.TextBlock.GetDynamicFontMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083078
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// Object: Class UMG.Throbber
// Size: 0x1E0 (Inherited: 0x130)
struct UThrobber : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UThrobber, "Throbber")

	int32_t NumberOfPieces; // 0x12C(0x4)
	bool bAnimateHorizontally; // 0x130(0x1)
	bool bAnimateVertically; // 0x131(0x1)
	bool bAnimateOpacity; // 0x132(0x1)
	uint8_t Pad_0x137[0x1]; // 0x137(0x1)
	struct USlateBrushAsset* PieceImage; // 0x138(0x8)
	struct FSlateBrush Image; // 0x140(0x90)
	uint8_t Pad_0x1D0[0x10]; // 0x1D0(0x10)

	// Object: Function UMG.Throbber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083868
	// Params: [ Num(1) Size(0x4) ]
	void SetNumberOfPieces(int32_t InNumberOfPieces);

	// Object: Function UMG.Throbber.SetAnimateVertically
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083708
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateVertically(bool bInAnimateVertically);

	// Object: Function UMG.Throbber.SetAnimateOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083658
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateOpacity(bool bInAnimateOpacity);

	// Object: Function UMG.Throbber.SetAnimateHorizontally
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0837b8
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Object: Class UMG.UMGSequencePlayer
// Size: 0x578 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUMGSequencePlayer, "UMGSequencePlayer")

	uint8_t Pad_0x28[0x3E8]; // 0x28(0x3E8)
	struct UWidgetAnimation* Animation; // 0x410(0x8)
	uint8_t Pad_0x418[0x8]; // 0x418(0x8)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420(0xE8)
	uint8_t Pad_0x508[0x70]; // 0x508(0x70)

	// Object: Function UMG.UMGSequencePlayer.SetUserTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083cf4
	// Params: [ Num(1) Size(0x8) ]
	void SetUserTag(struct FName InUserTag);

	// Object: Function UMG.UMGSequencePlayer.GetUserTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb083d9c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetUserTag();
};

// Object: Class UMG.UMGSequenceTickManager
// Size: 0x120 (Inherited: 0x28)
struct UUMGSequenceTickManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUMGSequenceTickManager, "UMGSequenceTickManager")

	struct TSet<struct TWeakObjectPtr<struct UUserWidget>> WeakUserWidgets; // 0x28(0x50)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x78(0x8)
	uint8_t Pad_0x80[0xA0]; // 0x80(0xA0)
};

// Object: Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)
struct UUniformGridPanel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UUniformGridPanel, "UniformGridPanel")

	struct FMargin SlotPadding; // 0x144(0x10)
	float MinDesiredSlotWidth; // 0x154(0x4)
	float MinDesiredSlotHeight; // 0x158(0x4)
	uint8_t Pad_0x160[0x10]; // 0x160(0x10)

	// Object: Function UMG.UniformGridPanel.SetSlotPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083fd4
	// Params: [ Num(1) Size(0x10) ]
	void SetSlotPadding(struct FMargin InSlotPadding);

	// Object: Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083f2c
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);

	// Object: Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb083e84
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);

	// Object: Function UMG.UniformGridPanel.AddChildToUniformGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x98224c4
	// Params: [ Num(4) Size(0x18) ]
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Object: Class UMG.UniformGridSlot
// Size: 0x78 (Inherited: 0x60)
struct UUniformGridSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UUniformGridSlot, "UniformGridSlot")

	uint8_t HorizontalAlignment; // 0x60(0x1)
	uint8_t VerticalAlignment; // 0x61(0x1)
	uint8_t Pad_0x62[0x2]; // 0x62(0x2)
	int32_t Row; // 0x64(0x4)
	int32_t Column; // 0x68(0x4)
	uint8_t Pad_0x6C[0xC]; // 0x6C(0xC)

	// Object: Function UMG.UniformGridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb084088
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.UniformGridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb084280
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMG.UniformGridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb084130
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.UniformGridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0841d8
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);
};

// Object: Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)
struct UVerticalBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UVerticalBox, "VerticalBox")

	uint8_t Pad_0x148[0x10]; // 0x148(0x10)

	// Object: Function UMG.VerticalBox.AddChildToVerticalBoxAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x958e960
	// Params: [ Num(3) Size(0x18) ]
	struct UVerticalBoxSlot* AddChildToVerticalBoxAt(struct UWidget* Content, int32_t Index);

	// Object: Function UMG.VerticalBox.AddChildToVerticalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95407a8
	// Params: [ Num(2) Size(0x10) ]
	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content);
};

// Object: Class UMG.VerticalBoxSlot
// Size: 0x88 (Inherited: 0x60)
struct UVerticalBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UVerticalBoxSlot, "VerticalBoxSlot")

	struct FSlateChildSize Size; // 0x60(0x8)
	struct FMargin Padding; // 0x68(0x10)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	uint8_t HorizontalAlignment; // 0x80(0x1)
	uint8_t VerticalAlignment; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)

	// Object: Function UMG.VerticalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb089e2c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.VerticalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb089ed4
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FSlateChildSize InSize);

	// Object: Function UMG.VerticalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x979ae38
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95cb6d4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.Viewport
// Size: 0x1A0 (Inherited: 0x148)
struct UViewport : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UViewport, "Viewport")

	struct FLinearColor BackgroundColor; // 0x144(0x10)
	uint8_t Pad_0x158[0x48]; // 0x158(0x48)

	// Object: Function UMG.Viewport.Spawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb089f90
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* Spawn(struct AActor* ActorClass);

	// Object: Function UMG.Viewport.SetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb08a040
	// Params: [ Num(1) Size(0xC) ]
	void SetViewRotation(struct FRotator Rotation);

	// Object: Function UMG.Viewport.SetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb08a124
	// Params: [ Num(1) Size(0xC) ]
	void SetViewLocation(struct FVector Location);

	// Object: Function UMG.Viewport.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a0e8
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetViewRotation();

	// Object: Function UMG.Viewport.GetViewportWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a208
	// Params: [ Num(1) Size(0x8) ]
	struct UWorld* GetViewportWorld();

	// Object: Function UMG.Viewport.GetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a1cc
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetViewLocation();
};

// Object: Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UVisibilityBinding, "VisibilityBinding")

	// Object: Function UMG.VisibilityBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x69ce704
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetValue();
};

// Object: Class UMG.VisibilityWidgetSwitcher
// Size: 0x170 (Inherited: 0x158)
struct UVisibilityWidgetSwitcher : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(UVisibilityWidgetSwitcher, "VisibilityWidgetSwitcher")

	int32_t ActiveWidgetIndex; // 0x158(0x4)
	uint8_t Pad_0x15C[0x14]; // 0x15C(0x14)

	// Object: Function UMG.VisibilityWidgetSwitcher.SetActiveWidgetIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x9dc410c
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function UMG.VisibilityWidgetSwitcher.SetActiveWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x8f0e8a8
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function UMG.VisibilityWidgetSwitcher.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a280
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetAtIndex(int32_t Index);

	// Object: Function UMG.VisibilityWidgetSwitcher.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8b54dc4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function UMG.VisibilityWidgetSwitcher.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb08a24c
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetActiveWidget();
};

// Object: Class UMG.WidgetAnimation
// Size: 0x90 (Inherited: 0x60)
struct UWidgetAnimation : UMovieSceneSequence
{
	DEFINE_UE_CLASS_HELPERS(UWidgetAnimation, "WidgetAnimation")

	struct UMovieScene* MovieScene; // 0x60(0x8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x68(0x10)
	bool bLegacyFinishOnStop; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct FString DisplayLabel; // 0x80(0x10)

	// Object: Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08dc68
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08dac8
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08dbc0
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08da20
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetAnimation.GetStartTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x90b1bfc
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTime();

	// Object: Function UMG.WidgetAnimation.GetEndTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x85cadcc
	// Params: [ Num(1) Size(0x4) ]
	float GetEndTime();

	// Object: Function UMG.WidgetAnimation.BindToAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb08dd60
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.BindToAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9777e1c
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate);
};

// Object: Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding
{
	DEFINE_UE_CLASS_HELPERS(UWidgetAnimationDelegateBinding, "WidgetAnimationDelegateBinding")

	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Object: Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWidgetAnimationPlayCallbackProxy, "WidgetAnimationPlayCallbackProxy")

	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)

	// Object: Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08de84
	// Params: [ Num(9) Size(0x38) ]
	static struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed);

	// Object: Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08e0f4
	// Params: [ Num(8) Size(0x30) ]
	static struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed);
};

// Object: Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UWidgetBinding, "WidgetBinding")

	// Object: Function UMG.WidgetBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb08e32c
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetValue();
};

// Object: Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x398 (Inherited: 0x358)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(UWidgetBlueprintGeneratedClass, "WidgetBlueprintGeneratedClass")

	struct UWidgetTree* WidgetTree; // 0x358(0x8)
	uint8_t bClassRequiresNativeTick : 1; // 0x360(0x1), Mask(0x1)
	uint8_t BitPad_0x360_1 : 7; // 0x360(0x1)
	uint8_t Pad_0x361[0x7]; // 0x361(0x7)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x368(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x378(0x10)
	struct TArray<struct FName> NamedSlots; // 0x388(0x10)
};

// Object: Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UWidgetBlueprintLibrary, "WidgetBlueprintLibrary")

	// Object: Function UMG.WidgetBlueprintLibrary.UnlockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090d50
	// Params: [ Num(2) Size(0x170) ]
	static struct FEventReply UnlockMouse(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.Unhandled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x90ab530
	// Params: [ Num(1) Size(0xB8) ]
	static struct FEventReply Unhandled();

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb08e530
	// Params: [ Num(5) Size(0xC) ]
	static void SetWindowTitleBarState(struct UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb08e474
	// Params: [ Num(1) Size(0x10) ]
	static void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate);

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb08e3d4
	// Params: [ Num(1) Size(0x1) ]
	static void SetWindowTitleBarCloseButtonActive(bool bActive);

	// Object: Function UMG.WidgetBlueprintLibrary.SetUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090bc4
	// Params: [ Num(4) Size(0x180) ]
	static struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers);

	// Object: Function UMG.WidgetBlueprintLibrary.SetMousePosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090660
	// Params: [ Num(3) Size(0x178) ]
	static struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb091ed4
	// Params: [ Num(3) Size(0x11) ]
	static void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb091fe8
	// Params: [ Num(3) Size(0x11) ]
	static void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb091b74
	// Params: [ Num(1) Size(0x8) ]
	static void SetInputMode_GameOnly(struct APlayerController* PlayerController);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb091c0c
	// Params: [ Num(4) Size(0x12) ]
	static void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb091d68
	// Params: [ Num(4) Size(0x12) ]
	static void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb08e6e8
	// Params: [ Num(5) Size(0x1D) ]
	static bool SetHardwareCursor(struct UObject* WorldContextObject, uint8_t CursorShape, struct FName CursorName, struct FVector2D HotSpot);

	// Object: Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb091b60
	// Params: [ Num(0) Size(0x0) ]
	static void SetFocusToGameViewport();

	// Object: Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb08e850
	// Params: [ Num(4) Size(0xA) ]
	static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);

	// Object: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08f8d4
	// Params: [ Num(2) Size(0x98) ]
	static void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08f788
	// Params: [ Num(2) Size(0x98) ]
	static void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material);

	// Object: Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb08e51c
	// Params: [ Num(0) Size(0x0) ]
	static void RestorePreviousWindowTitleBarState();

	// Object: Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090f90
	// Params: [ Num(2) Size(0x170) ]
	static struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0907a0
	// Params: [ Num(3) Size(0x178) ]
	static struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks);

	// Object: DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();

	// Object: Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08f600
	// Params: [ Num(1) Size(0x90) ]
	static struct FSlateBrush NoResourceBrush();

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08fe90
	// Params: [ Num(4) Size(0xA0) ]
	static struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height);

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08fc48
	// Params: [ Num(4) Size(0xA0) ]
	static struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height);

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0900d8
	// Params: [ Num(2) Size(0x98) ]
	static struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset);

	// Object: Function UMG.WidgetBlueprintLibrary.LockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090e4c
	// Params: [ Num(3) Size(0x178) ]
	static struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget);

	// Object: Function UMG.WidgetBlueprintLibrary.IsDragDropping
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0902d8
	// Params: [ Num(1) Size(0x1) ]
	static bool IsDragDropping();

	// Object: Function UMG.WidgetBlueprintLibrary.Handled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x95c5984
	// Params: [ Num(1) Size(0xB8) ]
	static struct FEventReply Handled();

	// Object: Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb08e9c0
	// Params: [ Num(4) Size(0x40) ]
	static void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding);

	// Object: Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08ee68
	// Params: [ Num(2) Size(0x78) ]
	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08ec2c
	// Params: [ Num(2) Size(0x88) ]
	static struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08eb50
	// Params: [ Num(2) Size(0x38) ]
	static struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08f090
	// Params: [ Num(2) Size(0x50) ]
	static struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08ed8c
	// Params: [ Num(2) Size(0x38) ]
	static struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08f4ec
	// Params: [ Num(2) Size(0x98) ]
	static struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0902a4
	// Params: [ Num(1) Size(0x8) ]
	static struct UDragDropOperation* GetDragDroppingContent();

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08fb34
	// Params: [ Num(2) Size(0x98) ]
	static struct UTexture2D* GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb08fa20
	// Params: [ Num(2) Size(0x98) ]
	static struct UMaterialInterface* GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResource
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x97fd0ec
	// Params: [ Num(2) Size(0x98) ]
	static struct UObject* GetBrushResource(const struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08f1d0
	// Params: [ Num(4) Size(0x21) ]
	static void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct IInterface* Interface, bool TopLevelOnly);

	// Object: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb08f354
	// Params: [ Num(4) Size(0x21) ]
	static void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly);

	// Object: Function UMG.WidgetBlueprintLibrary.EndDragDrop
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090310
	// Params: [ Num(2) Size(0x170) ]
	static struct FEventReply EndDragDrop(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb0911d0
	// Params: [ Num(7) Size(0x74) ]
	static void DrawTextFormatted(struct FPaintContext& Context, const struct FText& Text, struct FVector2D position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawText
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb091468
	// Params: [ Num(4) Size(0x58) ]
	static void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D position, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawLines
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb0915e4
	// Params: [ Num(5) Size(0x58) ]
	static void DrawLines(struct FPaintContext& Context, const struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb0917c4
	// Params: [ Num(6) Size(0x58) ]
	static void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb0919b8
	// Params: [ Num(5) Size(0x58) ]
	static void DrawBox(struct FPaintContext& Context, struct FVector2D position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb08f4d8
	// Params: [ Num(0) Size(0x0) ]
	static void DismissAllMenus();

	// Object: Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9826e24
	// Params: [ Num(4) Size(0x148) ]
	static struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey);

	// Object: Function UMG.WidgetBlueprintLibrary.DetectDrag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb09040c
	// Params: [ Num(4) Size(0x190) ]
	static struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey);

	// Object: Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x979d6c4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass);

	// Object: Function UMG.WidgetBlueprintLibrary.Create
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x85c682c
	// Params: [ Num(4) Size(0x20) ]
	static struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer);

	// Object: Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0908ec
	// Params: [ Num(3) Size(0x178) ]
	static struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers);

	// Object: Function UMG.WidgetBlueprintLibrary.CaptureMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb09108c
	// Params: [ Num(3) Size(0x178) ]
	static struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget);

	// Object: Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb090a38
	// Params: [ Num(4) Size(0x180) ]
	static struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks);

	// Object: Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97dad78
	// Params: [ Num(0) Size(0x0) ]
	static void CancelDragDrop();
};

// Object: Class UMG.WidgetInteractionComponent
// Size: 0x440 (Inherited: 0x230)
struct UWidgetInteractionComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UWidgetInteractionComponent, "WidgetInteractionComponent")

	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x228(0x10)
	uint8_t Pad_0x240[0x8]; // 0x240(0x8)
	int32_t VirtualUserIndex; // 0x248(0x4)
	int32_t PointerIndex; // 0x24C(0x4)
	uint8_t TraceChannel; // 0x250(0x1)
	uint8_t Pad_0x251[0x3]; // 0x251(0x3)
	float InteractionDistance; // 0x254(0x4)
	EWidgetInteractionSource InteractionSource; // 0x258(0x1)
	bool bEnableHitTesting; // 0x259(0x1)
	bool bShowDebug; // 0x25A(0x1)
	uint8_t Pad_0x25B[0x1]; // 0x25B(0x1)
	float DebugSphereLineThickness; // 0x25C(0x4)
	float DebugLineThickness; // 0x260(0x4)
	struct FLinearColor DebugColor; // 0x264(0x10)
	uint8_t Pad_0x274[0x7C]; // 0x274(0x7C)
	struct FHitResult CustomHitResult; // 0x2F0(0x98)
	struct FVector2D LocalHitLocation; // 0x388(0x8)
	struct FVector2D LastLocalHitLocation; // 0x390(0x8)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x398(0x8)
	struct FHitResult LastHitResult; // 0x3A0(0x98)
	bool bIsHoveredWidgetInteractable; // 0x438(0x1)
	bool bIsHoveredWidgetFocusable; // 0x439(0x1)
	bool bIsHoveredWidgetHitTestVisible; // 0x43A(0x1)
	uint8_t Pad_0x43B[0x5]; // 0x43B(0x5)

	// Object: Function UMG.WidgetInteractionComponent.SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0958a8
	// Params: [ Num(1) Size(0x8) ]
	void SetFocus(struct UWidget* FocusWidget);

	// Object: Function UMG.WidgetInteractionComponent.SetCustomHitResult
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb095950
	// Params: [ Num(1) Size(0x98) ]
	void SetCustomHitResult(const struct FHitResult& HitResult);

	// Object: Function UMG.WidgetInteractionComponent.SendKeyChar
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb095c14
	// Params: [ Num(3) Size(0x12) ]
	bool SendKeyChar(struct FString Characters, bool bRepeat);

	// Object: Function UMG.WidgetInteractionComponent.ScrollWheel
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb095b64
	// Params: [ Num(1) Size(0x4) ]
	void ScrollWheel(float ScrollDelta);

	// Object: Function UMG.WidgetInteractionComponent.ReleasePointerKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb096268
	// Params: [ Num(1) Size(0x18) ]
	void ReleasePointerKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.ReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb095f08
	// Params: [ Num(2) Size(0x19) ]
	bool ReleaseKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.PressPointerKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb0963e4
	// Params: [ Num(1) Size(0x18) ]
	void PressPointerKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.PressKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb096090
	// Params: [ Num(3) Size(0x1A) ]
	bool PressKey(struct FKey Key, bool bRepeat);

	// Object: Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb095d80
	// Params: [ Num(2) Size(0x19) ]
	bool PressAndReleaseKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095af8
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverInteractableWidget();

	// Object: Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095a88
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverHitTestVisibleWidget();

	// Object: Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095ac0
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverFocusableWidget();

	// Object: Function UMG.WidgetInteractionComponent.GetLastHitResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095a4c
	// Params: [ Num(1) Size(0x98) ]
	struct FHitResult GetLastHitResult();

	// Object: Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095b30
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetComponent* GetHoveredWidgetComponent();

	// Object: Function UMG.WidgetInteractionComponent.Get2DHitLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb095a18
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D Get2DHitLocation();
};

// Object: Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UWidgetLayoutLibrary, "WidgetLayoutLibrary")

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb096750
	// Params: [ Num(2) Size(0x10) ]
	static struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0966a8
	// Params: [ Num(2) Size(0x10) ]
	static struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x956bfbc
	// Params: [ Num(2) Size(0x10) ]
	static struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb096948
	// Params: [ Num(2) Size(0x10) ]
	static struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0967f8
	// Params: [ Num(2) Size(0x10) ]
	static struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9083e7c
	// Params: [ Num(2) Size(0x10) ]
	static struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9841850
	// Params: [ Num(2) Size(0x10) ]
	static struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0968a0
	// Params: [ Num(2) Size(0x10) ]
	static struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9dc8540
	// Params: [ Num(2) Size(0x10) ]
	static struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x87f5208
	// Params: [ Num(2) Size(0x10) ]
	static struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9828904
	// Params: [ Num(2) Size(0x10) ]
	static struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x818a3d8
	// Params: [ Num(2) Size(0x10) ]
	static struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb0969f0
	// Params: [ Num(2) Size(0x10) ]
	static struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb096610
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveAllWidgets(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x62e6ae8
	// Params: [ Num(5) Size(0x1E) ]
	static bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9dc85e8
	// Params: [ Num(2) Size(0x40) ]
	static struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportSize
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9dc869c
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetViewportSize(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportScale
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9dc8748
	// Params: [ Num(2) Size(0xC) ]
	static float GetViewportScale(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb096cbc
	// Params: [ Num(2) Size(0x40) ]
	static struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xb096a98
	// Params: [ Num(4) Size(0x11) ]
	static bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb096bdc
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb096c88
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetMousePositionOnPlatform();
};

// Object: Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWidgetNavigation, "WidgetNavigation")

	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4C(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xB8(0x24)
	struct FWidgetNavigationData Previous; // 0xDC(0x24)
};

// Object: Class UMG.WidgetSwitcher
// Size: 0x158 (Inherited: 0x148)
struct UWidgetSwitcher : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWidgetSwitcher, "WidgetSwitcher")

	int32_t ActiveWidgetIndex; // 0x144(0x4)
	uint8_t Pad_0x14C[0xC]; // 0x14C(0xC)

	// Object: Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9dc9040
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function UMG.WidgetSwitcher.SetActiveWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9dc8f90
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function UMG.WidgetSwitcher.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb0994b8
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetAtIndex(int32_t Index);

	// Object: Function UMG.WidgetSwitcher.GetNumWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb099568
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumWidgets();

	// Object: Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9465208
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function UMG.WidgetSwitcher.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb099484
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetActiveWidget();
};

// Object: Class UMG.WidgetSwitcherSlot
// Size: 0x80 (Inherited: 0x60)
struct UWidgetSwitcherSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UWidgetSwitcherSlot, "WidgetSwitcherSlot")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
	struct FMargin Padding; // 0x68(0x10)
	uint8_t HorizontalAlignment; // 0x78(0x1)
	uint8_t VerticalAlignment; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)

	// Object: Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099654
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WidgetSwitcherSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0997a4
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0996fc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.WidgetTree
// Size: 0x40 (Inherited: 0x28)
struct UWidgetTree : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWidgetTree, "WidgetTree")

	struct UWidget* RootWidget; // 0x28(0x8)
	struct TArray<struct FLazyLoadBinding> LazyLoadBindings; // 0x30(0x10)
};

// Object: Class UMG.WindowTitleBarArea
// Size: 0x160 (Inherited: 0x148)
struct UWindowTitleBarArea : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UWindowTitleBarArea, "WindowTitleBarArea")

	bool bWindowButtonsEnabled; // 0x141(0x1)
	bool bDoubleClickTogglesFullscreen; // 0x142(0x1)
	uint8_t Pad_0x14A[0x16]; // 0x14A(0x16)

	// Object: Function UMG.WindowTitleBarArea.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099ac8
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WindowTitleBarArea.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099c18
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WindowTitleBarArea.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099b70
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.WindowTitleBarAreaSlot
// Size: 0x88 (Inherited: 0x60)
struct UWindowTitleBarAreaSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UWindowTitleBarAreaSlot, "WindowTitleBarAreaSlot")

	struct FMargin Padding; // 0x60(0x10)
	uint8_t HorizontalAlignment; // 0x70(0x1)
	uint8_t VerticalAlignment; // 0x71(0x1)
	uint8_t Pad_0x72[0x16]; // 0x72(0x16)

	// Object: Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099ce4
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WindowTitleBarAreaSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099e34
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099d8c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)
struct UWrapBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWrapBox, "WrapBox")

	struct FVector2D InnerSlotPadding; // 0x144(0x8)
	float WrapWidth; // 0x14C(0x4)
	float WrapSize; // 0x150(0x4)
	bool bExplicitWrapWidth; // 0x154(0x1)
	bool bExplicitWrapSize; // 0x155(0x1)
	uint8_t Orientation; // 0x156(0x1)
	uint8_t Pad_0x15B[0xD]; // 0x15B(0xD)

	// Object: Function UMG.WrapBox.SetInnerSlotPadding
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb099f98
	// Params: [ Num(1) Size(0x8) ]
	void SetInnerSlotPadding(struct FVector2D InPadding);

	// Object: Function UMG.WrapBox.AddChildToWrapBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb099ee8
	// Params: [ Num(2) Size(0x10) ]
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content);
};

// Object: Class UMG.WrapBoxSlot
// Size: 0x88 (Inherited: 0x60)
struct UWrapBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UWrapBoxSlot, "WrapBoxSlot")

	struct FMargin Padding; // 0x60(0x10)
	bool bFillEmptySpace; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	float FillSpanWhenLessThan; // 0x74(0x4)
	uint8_t HorizontalAlignment; // 0x78(0x1)
	uint8_t VerticalAlignment; // 0x79(0x1)
	uint8_t Pad_0x7A[0xE]; // 0x7A(0xE)

	// Object: Function UMG.WrapBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09a05c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WrapBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09a304
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WrapBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09a104
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09a1ac
	// Params: [ Num(1) Size(0x4) ]
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);

	// Object: Function UMG.WrapBoxSlot.SetFillEmptySpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09a254
	// Params: [ Num(1) Size(0x1) ]
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Object: WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__WidgetBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(Default__WidgetBlueprintGeneratedClass, "Default__WidgetBlueprintGeneratedClass")
};

} // namespace SDK
