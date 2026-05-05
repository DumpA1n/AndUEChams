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
// Enums: 22
// Structs: 33
// Classes: 120

struct AActor;
struct APawn;
struct APlayerController;
enum class EButtonClickMethod : uint8_t;
enum class EButtonPressMethod : uint8_t;
enum class EButtonTouchMethod : uint8_t;
enum class ECheckBoxState : uint8_t;
enum class ECollisionChannel : uint8_t;
enum class EColorVisionDeficiency : uint8_t;
enum class EConsumeMouseWheel : uint8_t;
enum class ECustomTextFlowPolicy : uint8_t;
enum class EDescendantScrollDestination : uint8_t;
enum class EDynamicAdaptType : uint8_t;
enum class EFake3DBlurType : uint8_t;
enum class EFlowDirectionPreference : uint8_t;
enum class EHorizontalAlignment : uint8_t;
enum class EInputEvent : uint8_t;
enum class ELineWidgetOrientation : uint8_t;
enum class EListItemAlignment : uint8_t;
enum class EMaterialStrategy : uint8_t;
enum class EMenuPlacement : uint8_t;
enum class EMouseLockMode : uint8_t;
enum class EMovieSceneBlendType : uint8_t;
enum class EOrientation : uint8_t;
enum class EProgressBarFillType : uint8_t;
enum class ERadialImageFillType : uint8_t;
enum class ERichCurveExtrapolation : uint8_t;
enum class ESelectInfo : uint8_t;
enum class ESelectionMode : uint8_t;
enum class ESlateBrushMirrorType : uint8_t;
enum class ESlateGeometryMaskType : uint8_t;
enum class EStretch : uint8_t;
enum class EStretchDirection : uint8_t;
enum class ETextCommit : uint8_t;
enum class ETextFlowDirection : uint8_t;
enum class ETextJustify : uint8_t;
enum class ETextOverflowPolicy : uint8_t;
enum class ETextShapingMethod : uint8_t;
enum class ETextUpperPolicy : uint8_t;
enum class ETextVerticalJustify : uint8_t;
enum class ETextWrappingPolicy : uint8_t;
enum class EUINavigation : uint8_t;
enum class EUINavigationRule : uint8_t;
enum class EVerticalAlignment : uint8_t;
enum class EVirtualKeyboardDismissAction : uint8_t;
enum class EVirtualKeyboardTrigger : uint8_t;
enum class EWidgetClipping : uint8_t;
enum class EWidgetPixelSnapping : uint8_t;
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
struct FInvalidateWidgetReason;
struct FKey;
struct FKeyEvent;
struct FMargin;
struct FMotionEvent;
struct FMovieSceneFloatValue;
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
struct FAnimationEventBinding;
struct FNamedSlotBinding;
struct FLiteAnimationController;
struct FAnchorData;
struct FDynamicPropertyPath;
struct FLiteAnimationCurve;
struct FLiteAnimation;
struct FLiteAnimationTrack;
struct FLiteSubAnimationData;
struct FLiteAnimationEventTrigger;
struct FMovieSceneChannelPair;
struct FMovieScene2DTransformMask;
struct FMovieScene2DTransformSectionTemplate;
struct FMovieSceneMarginSectionTemplate;
struct FMovieSceneWidgetAnimationInstanceData;
struct FMovieSceneWidgetMaterialSectionTemplate;
struct FMovieSceneWidgetOverrideMaterialSectionWithInsTemplate;
struct FMovieSceneWidgetOverrideMaterialSectionTemplate;
struct FRichTextStyleRow;
struct FRichImageRow;
struct FSlateMeshVertex;
struct FSlateChildSize;
struct FUserWidgetPool;
struct FWidgetAnimationBinding;
struct FBlueprintWidgetAnimationDelegateBinding;
struct FDelegateRuntimeBinding;
struct FWidgetComponentInstanceData;
struct FRTScaleDistanceFactorPair;
struct FWidgetNavigationData;
struct UVisual;
struct UWidget;
struct UUserWidget;
struct UPanelWidget;
struct UWidgetSwitcher;
struct UContentWidget;
struct UBorder;
struct UTextLayoutWidget;
struct UTextBlock;
struct UScrollBox;
struct UImage;
struct UPanelSlot;
struct URichTextBlock;
struct USizeBox;
struct UWidgetBlueprintGeneratedClass;
struct UCanvasPanel;
struct URichTextBlockDecorator;
struct UButton;
struct UBackgroundBlur;
struct UNamedSlot;
struct UCheckbox;
struct UComboBoxString;
struct UListViewBase;
struct UListView;
struct UEditableText;
struct UEditableTextBox;
struct UExpandableArea;
struct UGridPanel;
struct UHorizontalBox;
struct UInvalidationBox;
struct UMultiLineEditableText;
struct UMultiLineEditableTextBox;
struct UOverlay;
struct UProgressBar;
struct URadialImage;
struct URetainerBox;
struct USafeZone;
struct UScaleBox;
struct USlider;
struct USpacer;
struct USpinBox;
struct UTileView;
struct UTreeView;
struct UUniformGridPanel;
struct UVerticalBox;
struct UWrapBox;
struct UDragDropOperation;
struct UWidgetComponent;
struct UAsyncTaskDownloadImage;
struct UBackgroundBlurSlot;
struct UBlueprintWhiteListConfig;
struct UPropertyBinding;
struct UBoolBinding;
struct UBorderSlot;
struct UBrushBinding;
struct UButtonSlot;
struct UCanvasPanelSlot;
struct UCheckedStateBinding;
struct UCircularThrobber;
struct UColorBinding;
struct UComboBox;
struct UDynamicEntryBoxBase;
struct UDynamicEntryBox;
struct UFloatBinding;
struct UGridSlot;
struct UHorizontalBoxSlot;
struct UInputKeySelector;
struct UInt32Binding;
struct IUserListEntry;
struct UUserListEntryLibrary;
struct IUserObjectListEntry;
struct UUserObjectListEntryLibrary;
struct ULine;
struct UListViewDesignerPreviewItem;
struct UMenuAnchor;
struct UMirrorImage;
struct UMouseCursorBinding;
struct UMovieScene2DTransformSection;
struct UMovieScene2DTransformTrack;
struct UMovieSceneMarginSection;
struct UMovieSceneMarginTrack;
struct UMovieSceneWidgetAnimationSection;
struct UMovieSceneWidgetAnimationTrack;
struct UMovieSceneWidgetMaterialTrack;
struct UMovieSceneWidgetOverrideMaterialTrack;
struct INamedSlotInterface;
struct UNativeWidgetHost;
struct UOverlaySlot;
struct URichTextBlockImageDecorator;
struct USafeZoneSlot;
struct UScaleBoxSlot;
struct UScrollBar;
struct UScrollBoxSlot;
struct USizeBoxSlot;
struct USlateBlueprintLibrary;
struct USlateVectorArtData;
struct USlateAccessibleWidgetData;
struct UTextBinding;
struct UThrobber;
struct UUMGSequencePlayer;
struct UUMGSequenceTickManager;
struct UUniformGridSlot;
struct UVerticalBoxSlot;
struct UViewport;
struct UVisibilityBinding;
struct UWidgetAnimation;
struct UWidgetAnimationDelegateBinding;
struct UWidgetAnimationPlayCallbackProxy;
struct UWidgetBinding;
struct UWidgetBlueprintLibrary;
struct UWidgetComponent3DUI;
struct UWidgetInteractionComponent;
struct UWidgetLayoutLibrary;
struct UWidgetNavigation;
struct UWidgetSwitcherSlot;
struct UWidgetTree;
struct UWindowTitleBarArea;
struct UWindowTitleBarAreaSlot;
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
	HitTestSelfOnly = 4,
	SelfHitTestInvisible = 5,
	ESlateVisibility_MAX = 6
};

// Object: Enum UMG.EWidgetEnablePlatformFlags
enum class EWidgetEnablePlatformFlags : uint8_t
{
	None = 0,
	Mobile = 1,
	Window = 2,
	XBox = 3,
	PS = 4,
	Consoles = 5,
	ConsolesAndPC = 6,
	All = 7,
	EWidgetEnablePlatformFlags_MAX = 8
};

// Object: Enum UMG.EWidgetEnableQualityFlags
enum class EWidgetEnableQualityFlags : uint8_t
{
	None = 0,
	High = 8,
	Mid = 12,
	Low = 14,
	VeryLow = 15,
	EWidgetEnableQualityFlags_MAX = 16
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

// Object: Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Object: Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Object: Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
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
	Overlay = 3,
	EDynamicBoxType_MAX = 4
};

// Object: Enum UMG.ELitePlayerType
enum class ELitePlayerType : uint8_t
{
	RenderTransform = 0,
	RenderOpacity = 1,
	BrushMaterial = 2,
	ColorAndOpacity = 3,
	OverrideMaterial = 4,
	EventTrigger = 5,
	SubAnimation = 6,
	RenderTransformPivot = 7,
	CanvasSlotProperty = 8,
	Visibility = 9,
	Progress = 10,
	Count = 11,
	ELitePlayerType_MAX = 12
};

// Object: Enum UMG.ELiteAnimationPlayerStatus
enum class ELiteAnimationPlayerStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Paused = 2,
	MAX = 3
};

// Object: Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
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

// Object: Enum UMG.EWidgetType3DUI
enum class EWidgetType3DUI : uint8_t
{
	TypeBRHud = 0,
	TypeBRNonHud = 1,
	TypeFrontend = 2,
	EWidgetType3DUI_MAX = 3
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
// Size: 0xD0 (Inherited: 0x0)
struct FEventReply
{
	uint8_t Pad_0x0[0xD0]; // 0x0(0xD0)
};

// Object: ScriptStruct UMG.WidgetTransform
// Size: 0x1C (Inherited: 0x0)
struct FWidgetTransform
{
	struct FVector2D translation; // 0x0(0x8)
	struct FVector2D Scale; // 0x8(0x8)
	struct FVector2D Shear; // 0x10(0x8)
	float Angle; // 0x18(0x4)
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

// Object: ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x0)
struct FNamedSlotBinding
{
	struct FName Name; // 0x0(0x8)
	struct UWidget* Content; // 0x8(0x8)
};

// Object: ScriptStruct UMG.LiteAnimationController
// Size: 0x70 (Inherited: 0x0)
struct FLiteAnimationController
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
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

// Object: ScriptStruct UMG.LiteAnimationCurve
// Size: 0xA0 (Inherited: 0x10)
struct FLiteAnimationCurve : FMovieSceneChannel
{
	ERichCurveExtrapolation PreInfinityExtrap; // 0x9(0x1)
	ERichCurveExtrapolation PostInfinityExtrap; // 0xA(0x1)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x4)
	uint8_t bHasDefaultValue : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x36_1 : 7; // 0x36(0x1)
	uint8_t Pad_0x37[0x1]; // 0x37(0x1)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	struct FFrameRate TickResolution; // 0x98(0x8)
};

// Object: ScriptStruct UMG.LiteAnimation
// Size: 0x38 (Inherited: 0x0)
struct FLiteAnimation
{
	struct FMovieSceneFrameRange PlaybackRange; // 0x0(0x10)
	struct TArray<struct FLiteAnimationTrack> AnimationTracks; // 0x10(0x10)
	struct FName AnimationName; // 0x20(0x8)
	float StartTime; // 0x28(0x4)
	float EndTime; // 0x2C(0x4)
	uint8_t bLimitFrameRate : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct UMG.LiteAnimationTrack
// Size: 0x58 (Inherited: 0x0)
struct FLiteAnimationTrack
{
	struct FName WidgetName; // 0x0(0x8)
	struct FName ParamName; // 0x8(0x8)
	ELitePlayerType TrackType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FName> BrushPropertyNamePath; // 0x18(0x10)
	struct TArray<struct FMovieSceneChannelPair> Curves; // 0x28(0x10)
	struct TArray<struct FLiteAnimationEventTrigger> Events; // 0x38(0x10)
	struct TArray<struct FLiteSubAnimationData> SubAnimationDatas; // 0x48(0x10)
};

// Object: ScriptStruct UMG.LiteSubAnimationData
// Size: 0x18 (Inherited: 0x0)
struct FLiteSubAnimationData
{
	struct FName AnimationName; // 0x0(0x8)
	struct FMovieSceneFrameRange FrameRange; // 0x8(0x10)
};

// Object: ScriptStruct UMG.LiteAnimationEventTrigger
// Size: 0x30 (Inherited: 0x0)
struct FLiteAnimationEventTrigger
{
	struct FFrameNumber EventTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMovieSceneEventPtrs Event; // 0x8(0x28)
};

// Object: ScriptStruct UMG.MovieSceneChannelPair
// Size: 0xB8 (Inherited: 0x0)
struct FMovieSceneChannelPair
{
	struct FName ParameterName; // 0x0(0x8)
	struct FLiteAnimationCurve Curve; // 0x8(0xA0)
	struct TArray<struct FLiteAnimationCurve> VectorParaCurves; // 0xA8(0x10)
};

// Object: ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieScene2DTransformMask
{
	uint32_t Mask; // 0x0(0x4)
};

// Object: ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x4A8 (Inherited: 0x40)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel translation[0x2]; // 0x40(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x180(0xA0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x220(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x360(0x140)
	EMovieSceneBlendType BlendType; // 0x4A0(0x1)
	uint8_t Pad_0x4A1[0x3]; // 0x4A1(0x3)
	struct FMovieScene2DTransformMask Mask; // 0x4A4(0x4)
};

// Object: ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2C8 (Inherited: 0x40)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel TopCurve; // 0x40(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xE0(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x180(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x220(0xA0)
	EMovieSceneBlendType BlendType; // 0x2C0(0x1)
	uint8_t Pad_0x2C1[0x7]; // 0x2C1(0x7)
};

// Object: ScriptStruct UMG.MovieSceneWidgetAnimationInstanceData
// Size: 0x38 (Inherited: 0x8)
struct FMovieSceneWidgetAnimationInstanceData : FMovieSceneSequenceInstanceData
{
	struct TSoftObjectPtr<UWidget> WidgetTemplate; // 0x8(0x28)
	struct FMovieSceneSequenceID ParentSequenceID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x68 (Inherited: 0x58)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FName> BrushPropertyNamePath; // 0x58(0x10)
};

// Object: ScriptStruct UMG.MovieSceneWidgetOverrideMaterialSectionWithInsTemplate
// Size: 0xF8 (Inherited: 0x58)
struct FMovieSceneWidgetOverrideMaterialSectionWithInsTemplate : FMovieSceneParameterSectionTemplate
{
	struct FMaterialParameterNameAndIns MaterialNameAndIns; // 0x58(0xA0)
};

// Object: ScriptStruct UMG.MovieSceneWidgetOverrideMaterialSectionTemplate
// Size: 0xF8 (Inherited: 0x58)
struct FMovieSceneWidgetOverrideMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct FMaterialParameterNameAndIns MaterialNameAndIns; // 0x58(0xA0)
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
	struct FVector2D Position; // 0x0(0x8)
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
	ESlateSizeRule SizeRule; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct UMG.UserWidgetPool
// Size: 0x80 (Inherited: 0x0)
struct FUserWidgetPool
{
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x0(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	uint8_t Pad_0x20[0x60]; // 0x20(0x60)
};

// Object: ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x0)
struct FWidgetAnimationBinding
{
	struct FName WidgetName; // 0x0(0x8)
	struct FName SlotWidgetName; // 0x8(0x8)
	struct FGuid AnimationGuid; // 0x10(0x10)
	uint8_t bIsRootWidget : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
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
// Size: 0xB8 (Inherited: 0xA8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
};

// Object: ScriptStruct UMG.RTScaleDistanceFactorPair
// Size: 0x8 (Inherited: 0x0)
struct FRTScaleDistanceFactorPair
{
	float Distance; // 0x0(0x4)
	float ScaleFactor; // 0x4(0x4)
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

// Object: Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVisual, "Visual")
};

// Object: Class UMG.Widget
// Size: 0x158 (Inherited: 0x28)
struct UWidget : UVisual
{
	DEFINE_UE_CLASS_HELPERS(UWidget, "Widget")

	struct FDelegate bIsEnabledDelegate; // 0x28(0x10)
	struct FText ToolTipText; // 0x38(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x50(0x10)
	struct FDelegate ToolTipWidgetDelegate; // 0x60(0x10)
	struct FDelegate VisibilityDelegate; // 0x70(0x10)
	struct FMulticastInlineDelegate OnWidgetInvalidated; // 0x80(0x10)
	struct UWidget* ToolTipWidget; // 0x90(0x8)
	struct UPanelSlot* Slot; // 0x98(0x8)
	struct FInvalidateWidgetReason InvalidatedReason; // 0xA0(0x1)
	EWidgetEnableQualityFlags EnableQualityConfig; // 0xA1(0x1)
	EWidgetEnableQualityFlags EnableQualityConfigHD; // 0xA2(0x1)
	EWidgetEnablePlatformFlags EnablePlatformConfig; // 0xA3(0x1)
	struct FWidgetTransform RenderTransform; // 0xA4(0x1C)
	struct FMargin ExtendHitMargin; // 0xC0(0x10)
	struct FVector2D RenderTransformPivot; // 0xD0(0x8)
	struct UMaterialInterface* OverrideMaterial; // 0xD8(0x8)
	float PositionZ; // 0xE0(0x4)
	int32_t WidgetLayerId; // 0xE4(0x4)
	EMaterialStrategy MaterialInheritStrategy; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	uint8_t bIsVariable : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t bCreatedByConstructionScript : 1; // 0xF0(0x1), Mask(0x2)
	uint8_t bIsEnabled : 1; // 0xF0(0x1), Mask(0x4)
	uint8_t bOverride_Cursor : 1; // 0xF0(0x1), Mask(0x8)
	uint8_t BitPad_0xF0_4 : 4; // 0xF0(0x1)
	EFlowDirectionPreference FlowDirectionPreference; // 0xF1(0x1)
	uint8_t bBreakUpTransfer : 1; // 0xF2(0x1), Mask(0x1)
	uint8_t bDirtyTransferSkipSize : 1; // 0xF2(0x1), Mask(0x2)
	uint8_t bDisableTick : 1; // 0xF2(0x1), Mask(0x4)
	uint8_t UsedLayerPolicy : 1; // 0xF2(0x1), Mask(0x8)
	uint8_t bCacheRelativeTransform : 1; // 0xF2(0x1), Mask(0x10)
	uint8_t bCacheRenderOpacity : 1; // 0xF2(0x1), Mask(0x20)
	uint8_t bOnlyCacheRenderTranslation : 1; // 0xF2(0x1), Mask(0x40)
	uint8_t bBlockable : 1; // 0xF2(0x1), Mask(0x80)
	uint8_t bOptimalPerf : 1; // 0xF3(0x1), Mask(0x1)
	uint8_t bStrictLayer : 1; // 0xF3(0x1), Mask(0x2)
	uint8_t bCacheChildLayout : 1; // 0xF3(0x1), Mask(0x4)
	uint8_t BitPad_0xF3_3 : 5; // 0xF3(0x1)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xF8(0x8)
	uint8_t bIsVolatile : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
	struct UWidgetNavigation* Navigation; // 0x108(0x8)
	struct FVector2D MaskGeometryMargin; // 0x110(0x8)
	float RenderOpacity; // 0x118(0x4)
	EMouseCursor Cursor; // 0x11C(0x1)
	EWidgetClipping Clipping; // 0x11D(0x1)
	ESlateVisibility Visibility; // 0x11E(0x1)
	EWidgetPixelSnapping PixelSnapping; // 0x11F(0x1)
	ESlateGeometryMaskType MaskGeometryType; // 0x120(0x1)
	uint8_t bDebugShowMaskRegion : 1; // 0x121(0x1), Mask(0x1)
	uint8_t BitPad_0x121_1 : 7; // 0x121(0x1)
	uint8_t Pad_0x122[0x26]; // 0x122(0x26)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x148(0x10)

	// Object: Function UMG.Widget.SetVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xe660cec
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(ESlateVisibility InVisibility);

	// Object: Function UMG.Widget.SetUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667a0a8
	// Params: [ Num(1) Size(0x8) ]
	void SetUserFocus(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.SetToolTipText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16679f98
	// Params: [ Num(1) Size(0x18) ]
	void SetToolTipText(const struct FText& InToolTipText);

	// Object: Function UMG.Widget.SetToolTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679ef4
	// Params: [ Num(1) Size(0x8) ]
	void SetToolTip(struct UWidget* Widget);

	// Object: Function UMG.Widget.SetRenderTranslation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe65d474
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTranslation(struct FVector2D translation);

	// Object: Function UMG.Widget.SetRenderTransformPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe7ab87c
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTransformPivot(struct FVector2D Pivot);

	// Object: Function UMG.Widget.SetRenderTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe65d3bc
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderTransformAngle(float Angle);

	// Object: Function UMG.Widget.SetRenderTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe7a8868
	// Params: [ Num(1) Size(0x1C) ]
	void SetRenderTransform(struct FWidgetTransform InTransform);

	// Object: Function UMG.Widget.SetRenderShear
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16679e54
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderShear(struct FVector2D Shear);

	// Object: Function UMG.Widget.SetRenderScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf060930
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderScale(struct FVector2D Scale);

	// Object: Function UMG.Widget.SetRenderOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe7a8640
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderOpacity(float InOpacity);

	// Object: Function UMG.Widget.SetPositionZ
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679db0
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionZ(float InPositionZ);

	// Object: Function UMG.Widget.SetPixelSnapping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679d0c
	// Params: [ Num(1) Size(0x1) ]
	void SetPixelSnapping(EWidgetPixelSnapping InPixelSnapping);

	// Object: Function UMG.Widget.SetOverrideMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf174ab0
	// Params: [ Num(1) Size(0x8) ]
	void SetOverrideMaterial(struct UMaterialInterface* InMaterial);

	// Object: Function UMG.Widget.SetNavigationRuleExplicit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679c2c
	// Params: [ Num(2) Size(0x10) ]
	void SetNavigationRuleExplicit(EUINavigation Direction, struct UWidget* InWidget);

	// Object: Function UMG.Widget.SetNavigationRuleCustomBoundary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679b44
	// Params: [ Num(2) Size(0x14) ]
	void SetNavigationRuleCustomBoundary(EUINavigation Direction, struct FDelegate InCustomDelegate);

	// Object: Function UMG.Widget.SetNavigationRuleCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679a5c
	// Params: [ Num(2) Size(0x14) ]
	void SetNavigationRuleCustom(EUINavigation Direction, struct FDelegate InCustomDelegate);

	// Object: Function UMG.Widget.SetNavigationRuleBase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667997c
	// Params: [ Num(2) Size(0x2) ]
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);

	// Object: Function UMG.Widget.SetNavigationRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679860
	// Params: [ Num(3) Size(0xC) ]
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, struct FName WidgetToFocus);

	// Object: Function UMG.Widget.SetMaterialStrategy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166797bc
	// Params: [ Num(1) Size(0x1) ]
	void SetMaterialStrategy(EMaterialStrategy InStrategy);

	// Object: Function UMG.Widget.SetKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166797a8
	// Params: [ Num(0) Size(0x0) ]
	void SetKeyboardFocus();

	// Object: Function UMG.Widget.SetIsEnabled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf368204
	// Params: [ Num(1) Size(0x1) ]
	void SetIsEnabled(uint8_t bInIsEnabled);

	// Object: Function UMG.Widget.SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1011fb88
	// Params: [ Num(0) Size(0x0) ]
	void SetFocus();

	// Object: Function UMG.Widget.SetExtendHitMargin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf120b24
	// Params: [ Num(4) Size(0x10) ]
	void SetExtendHitMargin(float Left, float Top, float Right, float Bottom);

	// Object: Function UMG.Widget.SetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf94ab58
	// Params: [ Num(1) Size(0x1) ]
	void SetCursor(EMouseCursor InCursor);

	// Object: Function UMG.Widget.SetClipping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xee19dac
	// Params: [ Num(1) Size(0x1) ]
	void SetClipping(EWidgetClipping InClipping);

	// Object: Function UMG.Widget.SetAllNavigationRules
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166796c8
	// Params: [ Num(2) Size(0xC) ]
	void SetAllNavigationRules(EUINavigationRule Rule, struct FName WidgetToFocus);

	// Object: Function UMG.Widget.ResetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166796b4
	// Params: [ Num(0) Size(0x0) ]
	void ResetCursor();

	// Object: Function UMG.Widget.RemoveFromParent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16679698
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromParent();

	// Object: DelegateFunction UMG.Widget.OnWidgetInvalidated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnWidgetInvalidated__DelegateSignature(struct FInvalidateWidgetReason InvalidatedReason);

	// Object: DelegateFunction UMG.Widget.OnReply__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xD0) ]
	struct FEventReply OnReply__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	// Flags: [Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.Widget.IsVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679660
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVisible();

	// Object: Function UMG.Widget.IsHovered
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679620
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsHovered();

	// Object: Function UMG.Widget.InvalidateLayoutAndVolatility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667960c
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateLayoutAndVolatility();

	// Object: Function UMG.Widget.HasUserFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667955c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasUserFocusedDescendants(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.HasUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166794ac
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasUserFocus(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.HasMouseCaptureByUser
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166793c4
	// Params: [ Num(3) Size(0x9) ]
	uint8_t HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);

	// Object: Function UMG.Widget.HasMouseCapture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667938c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasMouseCapture();

	// Object: Function UMG.Widget.HasKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679354
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasKeyboardFocus();

	// Object: Function UMG.Widget.HasFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667931c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasFocusedDescendants();

	// Object: Function UMG.Widget.HasAnyUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166792e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasAnyUserFocus();

	// Object: DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetWidget__DelegateSignature();

	// Object: Function UMG.Widget.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xfa7e704
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetVisibility();

	// Object: Function UMG.Widget.GetTickSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679294
	// Params: [ Num(1) Size(0x48) ]
	struct FGeometry GetTickSpaceGeometry();

	// Object: DelegateFunction UMG.Widget.GetText__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetSlateVisibility__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x28) ]
	struct FSlateColor GetSlateColor__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x90) ]
	struct FSlateBrush GetSlateBrush__DelegateSignature();

	// Object: Function UMG.Widget.GetRenderTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679278
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderTransformAngle();

	// Object: Function UMG.Widget.GetRenderOpacity
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xefb2a40
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderOpacity();

	// Object: Function UMG.Widget.GetPositionZ
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16679244
	// Params: [ Num(1) Size(0x4) ]
	float GetPositionZ();

	// Object: Function UMG.Widget.GetPixelSnapping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679210
	// Params: [ Num(1) Size(0x1) ]
	EWidgetPixelSnapping GetPixelSnapping();

	// Object: Function UMG.Widget.GetParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166791dc
	// Params: [ Num(1) Size(0x8) ]
	struct UPanelWidget* GetParent();

	// Object: Function UMG.Widget.GetPaintSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667918c
	// Params: [ Num(1) Size(0x48) ]
	struct FGeometry GetPaintSpaceGeometry();

	// Object: Function UMG.Widget.GetOwningPlayer
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679150
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerController* GetOwningPlayer();

	// Object: Function UMG.Widget.GetOwningLocalPlayer
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679114
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwningLocalPlayer();

	// Object: Function UMG.Widget.GetOverrideMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166790e0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInterface* GetOverrideMaterial();

	// Object: DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	EMouseCursor GetMouseCursor__DelegateSignature();

	// Object: Function UMG.Widget.GetMaterialStrategy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166790ac
	// Params: [ Num(1) Size(0x1) ]
	EMaterialStrategy GetMaterialStrategy();

	// Object: DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLinearColor__DelegateSignature();

	// Object: Function UMG.Widget.GetIsEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679074
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsEnabled();

	// Object: DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInt32__DelegateSignature();

	// Object: Function UMG.Widget.GetGameInstance
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16679040
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();

	// Object: DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetFloat__DelegateSignature();

	// Object: Function UMG.Widget.GetDesiredSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xeff3e04
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDesiredSize();

	// Object: Function UMG.Widget.GetClipping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667900c
	// Params: [ Num(1) Size(0x1) ]
	EWidgetClipping GetClipping();

	// Object: DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetCheckBoxState__DelegateSignature();

	// Object: Function UMG.Widget.GetCachedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16678e20
	// Params: [ Num(1) Size(0x48) ]
	struct FGeometry GetCachedGeometry();

	// Object: DelegateFunction UMG.Widget.GetBool__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetBool__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item);

	// Object: DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item);

	// Object: Function UMG.Widget.ForceVolatile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16678d74
	// Params: [ Num(1) Size(0x1) ]
	void ForceVolatile(uint8_t bForce);

	// Object: Function UMG.Widget.ForceLayoutPrepass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeff2bcc
	// Params: [ Num(0) Size(0x0) ]
	void ForceLayoutPrepass();
};

// Object: Class UMG.UserWidget
// Size: 0x2F8 (Inherited: 0x158)
struct UUserWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UUserWidget, "UserWidget")

	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct FLinearColor ColorAndOpacity; // 0x160(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x170(0x10)
	struct FSlateColor ForegroundColor; // 0x180(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x1A8(0x10)
	struct FMargin Padding; // 0x1B8(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1C8(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1D8(0x10)
	struct FLiteAnimationController LiteAnimationController; // 0x1E8(0x70)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x258(0x10)
	struct UWidgetTree* WidgetTree; // 0x268(0x8)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x270(0x8)
	int32_t Priority; // 0x278(0x4)
	uint8_t bSupportsKeyboardFocus : 1; // 0x27C(0x1), Mask(0x1)
	uint8_t bIsFocusable : 1; // 0x27C(0x1), Mask(0x2)
	uint8_t bStopAction : 1; // 0x27C(0x1), Mask(0x4)
	uint8_t bHasScriptImplementedTick : 1; // 0x27C(0x1), Mask(0x8)
	uint8_t bHasScriptImplementedPaint : 1; // 0x27C(0x1), Mask(0x10)
	uint8_t bNeedPrepassWhenAnim : 1; // 0x27C(0x1), Mask(0x20)
	uint8_t bNeedCheckLatentAction : 1; // 0x27C(0x1), Mask(0x40)
	uint8_t BitPad_0x27C_7 : 1; // 0x27C(0x1)
	uint8_t Pad_0x27D[0xB]; // 0x27D(0xB)
	EWidgetTickFrequency TickFrequency; // 0x288(0x1)
	uint8_t Pad_0x289[0x7]; // 0x289(0x7)
	struct UInputComponent* InputComponent; // 0x290(0x8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x298(0x10)
	uint8_t Pad_0x2A8[0x50]; // 0x2A8(0x50)

	// Object: Function UMG.UserWidget.UnregisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x166770f8
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterInputComponent();

	// Object: Function UMG.UserWidget.UnbindFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16677010
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.UnbindFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16676f28
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.UnbindAllFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16676e84
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.UnbindAllFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf76b494
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x4C) ]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	// Object: Function UMG.UserWidget.StopListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x16676da4
	// Params: [ Num(2) Size(0x9) ]
	void StopListeningForInputAction(struct FName ActionName, EInputEvent EventType);

	// Object: Function UMG.UserWidget.StopListeningForAllInputActions
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x16676d90
	// Params: [ Num(0) Size(0x0) ]
	void StopListeningForAllInputActions();

	// Object: Function UMG.UserWidget.StopAnimationsAndLatentActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16676d7c
	// Params: [ Num(0) Size(0x0) ]
	void StopAnimationsAndLatentActions();

	// Object: Function UMG.UserWidget.StopAnimationByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1010ac60
	// Params: [ Num(1) Size(0x8) ]
	void StopAnimationByName(struct FName InAnimationName);

	// Object: Function UMG.UserWidget.StopAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe88ae58
	// Params: [ Num(1) Size(0x8) ]
	void StopAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.StopAllAnimations
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe88c644
	// Params: [ Num(0) Size(0x0) ]
	void StopAllAnimations();

	// Object: Function UMG.UserWidget.SetPositionInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16676c98
	// Params: [ Num(2) Size(0x9) ]
	void SetPositionInViewport(struct FVector2D Position, uint8_t bRemoveDPIScale);

	// Object: Function UMG.UserWidget.SetPlaybackSpeed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xf5b3278
	// Params: [ Num(2) Size(0xC) ]
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed);

	// Object: Function UMG.UserWidget.SetPadding
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676bf0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.UserWidget.SetOwningPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676b4c
	// Params: [ Num(1) Size(0x8) ]
	void SetOwningPlayer(struct APlayerController* LocalPlayerController);

	// Object: Function UMG.UserWidget.SetNumLoopsToPlay
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676a6c
	// Params: [ Num(2) Size(0xC) ]
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);

	// Object: Function UMG.UserWidget.SetInputActionPriority
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x166769c8
	// Params: [ Num(1) Size(0x4) ]
	void SetInputActionPriority(int32_t NewPriority);

	// Object: Function UMG.UserWidget.SetInputActionBlocking
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1667691c
	// Params: [ Num(1) Size(0x1) ]
	void SetInputActionBlocking(uint8_t bShouldBlock);

	// Object: Function UMG.UserWidget.SetForegroundColor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676788
	// Params: [ Num(1) Size(0x28) ]
	void SetForegroundColor(struct FSlateColor InForegroundColor);

	// Object: Function UMG.UserWidget.SetDesiredSizeInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166766e8
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredSizeInViewport(struct FVector2D size);

	// Object: Function UMG.UserWidget.SetColorAndOpacity
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe63455c
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.UserWidget.SetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676640
	// Params: [ Num(1) Size(0x10) ]
	void SetAnchorsInViewport(struct FAnchors Anchors);

	// Object: Function UMG.UserWidget.SetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166765a0
	// Params: [ Num(1) Size(0x8) ]
	void SetAlignmentInViewport(struct FVector2D Alignment);

	// Object: Function UMG.UserWidget.ReverseAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x166764fc
	// Params: [ Num(1) Size(0x8) ]
	void ReverseAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.RemoveFromViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x166764e8
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromViewport();

	// Object: Function UMG.UserWidget.RegisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x166764d4
	// Params: [ Num(0) Size(0x0) ]
	void RegisterInputComponent();

	// Object: Function UMG.UserWidget.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(uint8_t IsDesignTime);

	// Object: Function UMG.UserWidget.PlaySound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676430
	// Params: [ Num(1) Size(0x8) ]
	void PlaySound(struct USoundBase* SoundToPlay);

	// Object: Function UMG.UserWidget.PlayAnimationTimeRange
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x1076763c
	// Params: [ Num(8) Size(0x28) ]
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationReverse
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xfda483c
	// Params: [ Num(4) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, uint8_t bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationForward
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xef625a0
	// Params: [ Num(4) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, uint8_t bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationByName
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xf70a384
	// Params: [ Num(6) Size(0x19) ]
	void PlayAnimationByName(struct FName InAnimationName, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xe660e40
	// Params: [ Num(7) Size(0x28) ]
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState);

	// Object: Function UMG.UserWidget.PauseAnimationByName
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16676384
	// Params: [ Num(2) Size(0xC) ]
	float PauseAnimationByName(struct FName InAnimationName);

	// Object: Function UMG.UserWidget.PauseAnimation
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x166762d8
	// Params: [ Num(2) Size(0xC) ]
	float PauseAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchGesture
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, const struct FPointerEvent& GestureEvent);

	// Object: Function UMG.UserWidget.OnTouchForceChanged
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnRemovedFromFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnPreviewMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnPreviewKeyDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x150) ]
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x30) ]
	void OnPaint(struct FPaintContext& Context);

	// Object: Function UMG.UserWidget.OnMouseWheel
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseMove
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xB8) ]
	void OnMouseEnter(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseCaptureLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnMouseCaptureLost();

	// Object: Function UMG.UserWidget.OnMouseButtonUp
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseButtonDoubleClick
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x188) ]
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, const struct FPointerEvent& InMouseEvent);

	// Object: Function UMG.UserWidget.OnMotionDetected
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent);

	// Object: Function UMG.UserWidget.OnKeyUp
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x150) ]
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnKeyDown
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x150) ]
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnKeyChar
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x138) ]
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent);

	// Object: Function UMG.UserWidget.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UMG.UserWidget.OnFocusReceived
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x120) ]
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnFocusLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnFocusLost(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnDrop
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0xC1) ]
	uint8_t OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragOver
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0xC1) ]
	uint8_t OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragLeave
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x78) ]
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragEnter
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC0) ]
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC0) ]
	void OnDragDetected(struct FGeometry MyGeometry, const struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation);

	// Object: Function UMG.UserWidget.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x78) ]
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnAnimationStarted
	// Flags: [BlueprintCosmetic|Native|Event|Protected|BlueprintEvent]
	// Offset: 0xe7a9210
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationStarted(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.OnAnimationFinished
	// Flags: [BlueprintCosmetic|Native|Event|Protected|BlueprintEvent]
	// Offset: 0xe7a9d38
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationFinished(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.OnAnalogValueChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x158) ]
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent);

	// Object: Function UMG.UserWidget.OnAddedToFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.ListenForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x16676170
	// Params: [ Num(4) Size(0x1C) ]
	void ListenForInputAction(struct FName ActionName, EInputEvent EventType, uint8_t bConsume, struct FDelegate callback);

	// Object: Function UMG.UserWidget.IsPlayingAnimation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667614c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlayingAnimation();

	// Object: Function UMG.UserWidget.IsListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667609c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsListeningForInputAction(struct FName ActionName);

	// Object: Function UMG.UserWidget.IsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16676064
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInViewport();

	// Object: Function UMG.UserWidget.IsInteractable
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInteractable();

	// Object: Function UMG.UserWidget.IsAnyAnimationPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667602c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAnyAnimationPlaying();

	// Object: Function UMG.UserWidget.IsAnimationPlayingForward
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16675f7c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.IsAnimationPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0xf4a6890
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsAnimationPlaying(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.GetOwningPlayerPawn
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16675f48
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetOwningPlayerPawn();

	// Object: Function UMG.UserWidget.GetIsVisible
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16675f10
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsVisible();

	// Object: Function UMG.UserWidget.GetAnimationCurrentTime
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16675e64
	// Params: [ Num(2) Size(0xC) ]
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.GetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16675e2c
	// Params: [ Num(1) Size(0x10) ]
	struct FAnchors GetAnchorsInViewport();

	// Object: Function UMG.UserWidget.GetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16675df8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetAlignmentInViewport();

	// Object: Function UMG.UserWidget.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Destruct();

	// Object: Function UMG.UserWidget.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function UMG.UserWidget.CancelLatentActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16675de4
	// Params: [ Num(0) Size(0x0) ]
	void CancelLatentActions();

	// Object: Function UMG.UserWidget.BindToAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16675cfc
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.BindToAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfad1cf0
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.BindToAnimationEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16675b9c
	// Params: [ Num(4) Size(0x24) ]
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, EWidgetAnimationEvent AnimationEvent, struct FName UserTag);

	// Object: Function UMG.UserWidget.AddToViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16675af8
	// Params: [ Num(1) Size(0x4) ]
	void AddToViewport(int32_t ZOrder);

	// Object: Function UMG.UserWidget.AddToPlayerScreen
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x16675a48
	// Params: [ Num(2) Size(0x5) ]
	uint8_t AddToPlayerScreen(int32_t ZOrder);
};

// Object: Class UMG.PanelWidget
// Size: 0x170 (Inherited: 0x158)
struct UPanelWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UPanelWidget, "PanelWidget")

	struct TArray<struct UPanelSlot*> Slots; // 0x158(0x10)
	uint8_t bIsCacheSlot : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)

	// Object: Function UMG.PanelWidget.ReplaceChildAt
	// Flags: [Final|Native|Public]
	// Offset: 0x1666a204
	// Params: [ Num(3) Size(0x11) ]
	uint8_t ReplaceChildAt(int32_t Index, struct UWidget* Content);

	// Object: Function UMG.PanelWidget.RemoveChildAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a154
	// Params: [ Num(2) Size(0x5) ]
	uint8_t RemoveChildAt(int32_t Index);

	// Object: Function UMG.PanelWidget.RemoveChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe88efa8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveChild(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.ReleaseSlateResources
	// Flags: [Native|Public]
	// Offset: 0x1666a0a0
	// Params: [ Num(1) Size(0x1) ]
	void ReleaseSlateResources(uint8_t bReleaseChildren);

	// Object: Function UMG.PanelWidget.OnSlotRemoved
	// Flags: [Native|Protected]
	// Offset: 0x16669ff4
	// Params: [ Num(1) Size(0x8) ]
	void OnSlotRemoved(struct UPanelSlot* InSlot);

	// Object: Function UMG.PanelWidget.OnSlotInserted
	// Flags: [Native|Protected]
	// Offset: 0x16669f0c
	// Params: [ Num(2) Size(0xC) ]
	void OnSlotInserted(struct UPanelSlot* InSlot, int32_t Index);

	// Object: Function UMG.PanelWidget.OnSlotAdded
	// Flags: [Native|Protected]
	// Offset: 0x16669e60
	// Params: [ Num(1) Size(0x8) ]
	void OnSlotAdded(struct UPanelSlot* InSlot);

	// Object: Function UMG.PanelWidget.InternalInsertChildAt
	// Flags: [Final|Native|Protected]
	// Offset: 0x16669d78
	// Params: [ Num(3) Size(0x18) ]
	struct UPanelSlot* InternalInsertChildAt(int32_t Index, struct UWidget* Content);

	// Object: Function UMG.PanelWidget.InsertChildAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16669c90
	// Params: [ Num(3) Size(0x18) ]
	struct UPanelSlot* InsertChildAt(int32_t Index, struct UWidget* Content);

	// Object: Function UMG.PanelWidget.HasChild
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16669be0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasChild(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.HasAnyChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16669ba8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasAnyChildren();

	// Object: Function UMG.PanelWidget.GetSlots
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x16669b24
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UPanelSlot*> GetSlots();

	// Object: Function UMG.PanelWidget.GetSlotClass
	// Flags: [Native|Protected|Const]
	// Offset: 0x16669ae8
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetSlotClass();

	// Object: Function UMG.PanelWidget.GetChildrenCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16669acc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetChildrenCount();

	// Object: Function UMG.PanelWidget.GetChildIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16669a20
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetChildIndex(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.GetChildAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xf7555f8
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetChildAt(int32_t Index);

	// Object: Function UMG.PanelWidget.GetAllChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xef1eb6c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UWidget*> GetAllChildren();

	// Object: Function UMG.PanelWidget.ClearChildren
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16669a04
	// Params: [ Num(0) Size(0x0) ]
	void ClearChildren();

	// Object: Function UMG.PanelWidget.CanHaveMultipleChildren
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x166699e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanHaveMultipleChildren();

	// Object: Function UMG.PanelWidget.CanAddMoreChildren
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x166699b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanAddMoreChildren();

	// Object: Function UMG.PanelWidget.AddChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xec77b5c
	// Params: [ Num(2) Size(0x10) ]
	struct UPanelSlot* AddChild(struct UWidget* Content);
};

// Object: Class UMG.WidgetSwitcher
// Size: 0x180 (Inherited: 0x170)
struct UWidgetSwitcher : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWidgetSwitcher, "WidgetSwitcher")

	int32_t ActiveWidgetIndex; // 0x16C(0x4)
	uint8_t Pad_0x174[0xC]; // 0x174(0xC)

	// Object: Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16683d24
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function UMG.WidgetSwitcher.SetActiveWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16683c78
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function UMG.WidgetSwitcher.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16683bcc
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetAtIndex(int32_t Index);

	// Object: Function UMG.WidgetSwitcher.GetNumWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16683b98
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumWidgets();

	// Object: Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16683b64
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function UMG.WidgetSwitcher.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16683b30
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetActiveWidget();
};

// Object: Class UMG.ContentWidget
// Size: 0x170 (Inherited: 0x170)
struct UContentWidget : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UContentWidget, "ContentWidget")

	// Object: Function UMG.ContentWidget.SetContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d7d0
	// Params: [ Num(2) Size(0x10) ]
	struct UPanelSlot* SetContent(struct UWidget* Content);

	// Object: Function UMG.ContentWidget.GetContentSlot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d79c
	// Params: [ Num(1) Size(0x8) ]
	struct UPanelSlot* GetContentSlot();

	// Object: Function UMG.ContentWidget.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d768
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetContent();
};

// Object: Class UMG.Border
// Size: 0x2C0 (Inherited: 0x170)
struct UBorder : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UBorder, "Border")

	EHorizontalAlignment HorizontalAlignment; // 0x16A(0x1)
	EVerticalAlignment VerticalAlignment; // 0x16B(0x1)
	uint8_t bShowEffectWhenDisabled : 1; // 0x16C(0x1), Mask(0x1)
	struct FLinearColor ContentColorAndOpacity; // 0x170(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x180(0x10)
	struct FMargin Padding; // 0x190(0x10)
	struct FSlateBrush Background; // 0x1A0(0x90)
	struct FDelegate BackgroundDelegate; // 0x230(0x10)
	struct FLinearColor BrushColor; // 0x240(0x10)
	struct FDelegate BrushColorDelegate; // 0x250(0x10)
	struct FVector2D DesiredSizeScale; // 0x260(0x8)
	uint8_t bFlipForRightToLeftFlowDirection : 1; // 0x268(0x1), Mask(0x1)
	uint8_t bIncreaseLayer; // 0x269(0x1)
	uint8_t BitPad_0x26B_2 : 6; // 0x26B(0x1)
	struct FDelegate OnMouseButtonDownEvent; // 0x26C(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x27C(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x28C(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x29C(0x10)
	uint8_t Pad_0x2AC[0x14]; // 0x2AC(0x14)

	// Object: Function UMG.Border.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ae60
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.Border.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf0de3cc
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.Border.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665adbc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	// Object: Function UMG.Border.SetDesiredSizeScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1665ad1c
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredSizeScale(struct FVector2D InScale);

	// Object: Function UMG.Border.SetContentColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1665ac78
	// Params: [ Num(1) Size(0x10) ]
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity);

	// Object: Function UMG.Border.SetBrushFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665abd4
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromTexture(struct UTexture2D* Texture);

	// Object: Function UMG.Border.SetBrushFromMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ab30
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.Border.SetBrushFromAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665aa8c
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.Border.SetBrushColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xfa40c9c
	// Params: [ Num(1) Size(0x10) ]
	void SetBrushColor(struct FLinearColor InBrushColor);

	// Object: Function UMG.Border.SetBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1665a978
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.Border.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a944
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.TextLayoutWidget
// Size: 0x1D8 (Inherited: 0x158)
struct UTextLayoutWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UTextLayoutWidget, "TextLayoutWidget")

	struct FShapedTextOptions ShapedTextOptions; // 0x158(0x3)
	ETextJustify Justification; // 0x15B(0x1)
	ETextVerticalJustify VerticalJustification; // 0x15C(0x1)
	ETextWrappingPolicy WrappingPolicy; // 0x15D(0x1)
	uint8_t AutoWrapText : 1; // 0x15E(0x1), Mask(0x1)
	uint8_t BitPad_0x15E_1 : 7; // 0x15E(0x1)
	uint8_t Pad_0x15F[0x1]; // 0x15F(0x1)
	float WrapTextAt; // 0x160(0x4)
	struct FMargin Margin; // 0x164(0x10)
	float LineHeightPercentage; // 0x174(0x4)
	uint8_t Pad_0x178[0x10]; // 0x178(0x10)
	struct TMap<struct FName, struct FTextBlockStyle> TextStyleIdx2StylesMaps; // 0x188(0x50)

	// Object: Function UMG.TextLayoutWidget.SetVerticalJustification
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16671374
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalJustification(ETextVerticalJustify VJustification);

	// Object: Function UMG.TextLayoutWidget.SetJustification
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf5d1008
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(ETextJustify InJustification);
};

// Object: Class UMG.TextBlock
// Size: 0x398 (Inherited: 0x1D8)
struct UTextBlock : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(UTextBlock, "TextBlock")

	struct FText Text; // 0x1D8(0x18)
	struct FDelegate TextDelegate; // 0x1F0(0x10)
	uint8_t bCustomizeStyle : 1; // 0x200(0x1), Mask(0x1)
	uint8_t BitPad_0x200_1 : 7; // 0x200(0x1)
	uint8_t Pad_0x201[0x3]; // 0x201(0x3)
	struct FName TableRowID; // 0x204(0x8)
	struct FName FontStyleID; // 0x20C(0x8)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	struct FSlateColor ColorAndOpacity; // 0x218(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x240(0x10)
	struct FSlateFontInfo Font; // 0x250(0x58)
	int32_t LetterSpacing; // 0x2A8(0x4)
	uint8_t Pad_0x2AC[0x4]; // 0x2AC(0x4)
	struct FSlateBrush StrikeBrush; // 0x2B0(0x90)
	struct FVector2D ShadowOffset; // 0x340(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x348(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x358(0x10)
	float MinDesiredWidth; // 0x368(0x4)
	EDynamicAdaptType DynamicAdaptTextType; // 0x36C(0x1)
	uint8_t bPreviewInDesign : 1; // 0x36D(0x1), Mask(0x1)
	uint8_t BitPad_0x36D_1 : 7; // 0x36D(0x1)
	uint8_t Pad_0x36E[0x2]; // 0x36E(0x2)
	struct FVector2D MaxSize; // 0x370(0x8)
	uint8_t bWrapWithInvalidationPanel : 1; // 0x378(0x1), Mask(0x1)
	uint8_t BitPad_0x378_1 : 7; // 0x378(0x1)
	uint8_t bAutoWrapText : 1; // 0x379(0x1), Mask(0x1)
	uint8_t BitPad_0x379_1 : 7; // 0x379(0x1)
	uint8_t bSimpleTextMode : 1; // 0x37A(0x1), Mask(0x1)
	uint8_t BitPad_0x37A_1 : 7; // 0x37A(0x1)
	ETextOverflowPolicy TextOverflowAutoEllipsisType; // 0x37B(0x1)
	ETextUpperPolicy TextUpperPolicy; // 0x37C(0x1)
	ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x37D(0x1)
	uint8_t IsOpenAdaptBoxSize : 1; // 0x37E(0x1), Mask(0x1)
	uint8_t BitPad_0x37E_1 : 7; // 0x37E(0x1)
	uint8_t Pad_0x37F[0x19]; // 0x37F(0x19)

	// Object: Function UMG.TextBlock.SetTextUpperPolicy
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1667119c
	// Params: [ Num(1) Size(0x1) ]
	void SetTextUpperPolicy(ETextUpperPolicy InTextUpperPolicy);

	// Object: Function UMG.TextBlock.SetTextOverflowAutoEllipse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166710f8
	// Params: [ Num(1) Size(0x1) ]
	void SetTextOverflowAutoEllipse(ETextOverflowPolicy InOverflowAutoEllipse);

	// Object: Function UMG.TextBlock.SetText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xe6649b0
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.TextBlock.SetStrikeBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670f5c
	// Params: [ Num(1) Size(0x90) ]
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush);

	// Object: Function UMG.TextBlock.SetShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16670ebc
	// Params: [ Num(1) Size(0x8) ]
	void SetShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function UMG.TextBlock.SetShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe630f28
	// Params: [ Num(1) Size(0x10) ]
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function UMG.TextBlock.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xefe26b4
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.TextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670e18
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.TextBlock.SetMaxSize
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16670d70
	// Params: [ Num(1) Size(0x8) ]
	void SetMaxSize(struct FVector2D InSize);

	// Object: Function UMG.TextBlock.SetFontStyleID
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xe65dac4
	// Params: [ Num(1) Size(0x8) ]
	void SetFontStyleID(const struct FName& InNewFontStyleID);

	// Object: Function UMG.TextBlock.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef51960
	// Params: [ Num(1) Size(0x58) ]
	void SetFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.TextBlock.SetDynamicAdaptType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16670cc4
	// Params: [ Num(1) Size(0x1) ]
	void SetDynamicAdaptType(EDynamicAdaptType InType);

	// Object: Function UMG.TextBlock.SetCustomTextFlowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670c20
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy);

	// Object: Function UMG.TextBlock.SetColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xefe2784
	// Params: [ Num(1) Size(0x28) ]
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function UMG.TextBlock.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa7c5f8
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(uint8_t InAutoTextWrap);

	// Object: Function UMG.TextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xf7c93fc
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.TextBlock.GetRealTextBlockWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfad4e3c
	// Params: [ Num(1) Size(0x4) ]
	float GetRealTextBlockWidth();

	// Object: Function UMG.TextBlock.GetMaxSize
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16670be4
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMaxSize();

	// Object: Function UMG.TextBlock.GetFontStyleID
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16670ba8
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetFontStyleID();

	// Object: Function UMG.TextBlock.GetDynamicOutlineMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670b74
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial();

	// Object: Function UMG.TextBlock.GetDynamicFontMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbf0ec0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial();

	// Object: Function UMG.TextBlock.GetDynamicAdaptType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16670b38
	// Params: [ Num(1) Size(0x1) ]
	EDynamicAdaptType GetDynamicAdaptType();

	// Object: Function UMG.TextBlock.BP_SetWrapTextAt
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf499354
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetWrapTextAt(float TextAt);
};

// Object: Class UMG.ScrollBox
// Size: 0x9A0 (Inherited: 0x170)
struct UScrollBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UScrollBox, "ScrollBox")

	struct FScrollBoxStyle WidgetStyle; // 0x170(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3B8(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8D0(0x8)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8D8(0x8)
	EOrientation Orientation; // 0x8E0(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x8E1(0x1)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x8E2(0x1)
	uint8_t Pad_0x8E3[0x1]; // 0x8E3(0x1)
	struct FVector2D ScrollbarThickness; // 0x8E4(0x8)
	struct FMargin ScrollbarPadding; // 0x8EC(0x10)
	uint8_t AlwaysShowScrollbar : 1; // 0x8FC(0x1), Mask(0x1)
	uint8_t BitPad_0x8FC_1 : 7; // 0x8FC(0x1)
	uint8_t AlwaysShowScrollbarTrack : 1; // 0x8FD(0x1), Mask(0x1)
	uint8_t BitPad_0x8FD_1 : 7; // 0x8FD(0x1)
	uint8_t AllowOverscroll : 1; // 0x8FE(0x1), Mask(0x1)
	uint8_t BitPad_0x8FE_1 : 7; // 0x8FE(0x1)
	uint8_t bAnimateWheelScrolling : 1; // 0x8FF(0x1), Mask(0x1)
	uint8_t BitPad_0x8FF_1 : 7; // 0x8FF(0x1)
	EDescendantScrollDestination NavigationDestination; // 0x900(0x1)
	uint8_t Pad_0x901[0x3]; // 0x901(0x3)
	float NavigationScrollPadding; // 0x904(0x4)
	uint8_t bAllowRightClickDragScrolling : 1; // 0x908(0x1), Mask(0x1)
	uint8_t BitPad_0x908_1 : 7; // 0x908(0x1)
	uint8_t Pad_0x909[0x3]; // 0x909(0x3)
	float WheelScrollMultiplier; // 0x90C(0x4)
	float OverrideDragTriggerDistance; // 0x910(0x4)
	uint8_t AllowScrollBoxSlot : 1; // 0x914(0x1), Mask(0x1)
	uint8_t BitPad_0x914_1 : 7; // 0x914(0x1)
	uint8_t Pad_0x915[0x3]; // 0x915(0x3)
	struct FMargin ContentPadding; // 0x918(0x10)
	EHorizontalAlignment ContentHorizontalAlignment; // 0x928(0x1)
	EVerticalAlignment ContentVerticalAlignment; // 0x929(0x1)
	ESlateVisibility ItemVisibility; // 0x92A(0x1)
	uint8_t Pad_0x92B[0x1]; // 0x92B(0x1)
	int32_t ItemCount; // 0x92C(0x4)
	uint8_t AllowDynamicCreateItem : 1; // 0x930(0x1), Mask(0x1)
	uint8_t BitPad_0x930_1 : 7; // 0x930(0x1)
	uint8_t bHighPerformanceMode : 1; // 0x931(0x1), Mask(0x1)
	uint8_t BitPad_0x931_1 : 7; // 0x931(0x1)
	uint8_t Pad_0x932[0x6]; // 0x932(0x6)
	struct UUserWidget* ItemWidgetTemplateClass; // 0x938(0x8)
	int32_t EditorPreviewItemCount; // 0x940(0x4)
	struct FDelegate OnGetItemCount; // 0x944(0x10)
	struct FDelegate OnProcessItemWidget; // 0x954(0x10)
	uint8_t Pad_0x964[0x4]; // 0x964(0x4)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x968(0x10)
	struct FMulticastInlineDelegate OnScrollEnd; // 0x978(0x10)
	uint8_t Pad_0x988[0x18]; // 0x988(0x18)

	// Object: Function UMG.ScrollBox.SetWheelScrollMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d5fc
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

	// Object: Function UMG.ScrollBox.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10734248
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float NewScrollOffset);

	// Object: Function UMG.ScrollBox.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d558
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);

	// Object: Function UMG.ScrollBox.SetScrollbarThickness
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1666d4a8
	// Params: [ Num(1) Size(0x8) ]
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);

	// Object: Function UMG.ScrollBox.SetScrollbarPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1666d3f4
	// Params: [ Num(1) Size(0x10) ]
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);

	// Object: Function UMG.ScrollBox.SetOverrideDragTriggerDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d350
	// Params: [ Num(1) Size(0x4) ]
	void SetOverrideDragTriggerDistance(float InOverrideDragTriggerDistance);

	// Object: Function UMG.ScrollBox.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d2ac
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(EOrientation NewOrientation);

	// Object: Function UMG.ScrollBox.SetItemVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d208
	// Params: [ Num(1) Size(0x1) ]
	void SetItemVisibility(ESlateVisibility InItemVisibility);

	// Object: Function UMG.ScrollBox.SetConsumeMouseWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d164
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);

	// Object: Function UMG.ScrollBox.SetAnimateWheelScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1078c090
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateWheelScrolling(uint8_t bShouldAnimateWheelScrolling);

	// Object: Function UMG.ScrollBox.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d0b8
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(uint8_t NewAlwaysShowScrollbar);

	// Object: Function UMG.ScrollBox.SetAllowOverscroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d00c
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowOverscroll(uint8_t NewAllowOverscroll);

	// Object: Function UMG.ScrollBox.ScrollWidgetIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666cee8
	// Params: [ Num(3) Size(0xA) ]
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, uint8_t AnimateScroll, EDescendantScrollDestination ScrollDestination);

	// Object: Function UMG.ScrollBox.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa9a61c
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToStart();

	// Object: Function UMG.ScrollBox.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfb7117c
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToEnd();

	// Object: Function UMG.ScrollBox.RefreshItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ce44
	// Params: [ Num(1) Size(0x4) ]
	void RefreshItem(int32_t ItemIndex);

	// Object: Function UMG.ScrollBox.RefreshAllItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf5dab60
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllItems();

	// Object: Function UMG.ScrollBox.GetViewOffsetFraction
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666ce10
	// Params: [ Num(1) Size(0x4) ]
	float GetViewOffsetFraction();

	// Object: Function UMG.ScrollBox.GetScrollOffsetOfEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xed7fcc8
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffsetOfEnd();

	// Object: Function UMG.ScrollBox.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666cde4
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function UMG.ScrollBox.GetItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666cdb0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetItemCount();

	// Object: Function UMG.ScrollBox.GetItemByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666cd04
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetItemByIndex(int32_t ItemIndex);

	// Object: Function UMG.ScrollBox.EndInertialScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ccf0
	// Params: [ Num(0) Size(0x0) ]
	void EndInertialScrolling();

	// Object: Function UMG.ScrollBox.CheckAllowDynamicCreateItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ccdc
	// Params: [ Num(0) Size(0x0) ]
	void CheckAllowDynamicCreateItem();
};

// Object: Class UMG.Image
// Size: 0x2D0 (Inherited: 0x158)
struct UImage : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UImage, "Image")

	uint8_t bCustomize : 1; // 0x158(0x1), Mask(0x1)
	uint8_t BitPad_0x158_1 : 7; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	struct FName StyleId; // 0x15C(0x8)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct FSlateBrush Brush; // 0x168(0x90)
	struct FDelegate BrushDelegate; // 0x1F8(0x10)
	ESlateBrushMirrorType MirrorType; // 0x208(0x1)
	uint8_t Pad_0x209[0x3]; // 0x209(0x3)
	struct FLinearColor ColorAndOpacity; // 0x20C(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x21C(0x10)
	uint8_t bFlipForRightToLeftFlowDirection : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)
	struct TMap<struct FName, struct FLinearColor> ImageStyleMap; // 0x230(0x50)
	uint8_t bPixelFill : 1; // 0x280(0x1), Mask(0x1)
	uint8_t BitPad_0x280_1 : 7; // 0x280(0x1)
	uint8_t Pad_0x281[0x3]; // 0x281(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x284(0x10)
	uint8_t Pad_0x294[0x3C]; // 0x294(0x3C)

	// Object: Function UMG.Image.SetRotateUV
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16660b7c
	// Params: [ Num(1) Size(0x1) ]
	void SetRotateUV(uint8_t bInRotateUV);

	// Object: Function UMG.Image.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeefa864
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.Image.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe663478
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.Image.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf1ea190
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function UMG.Image.SetBrushSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xef31984
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushSize(struct FVector2D DesiredSize);

	// Object: Function UMG.Image.SetBrushResourceObject
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16660ad0
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushResourceObject(struct UObject* ResourceObject);

	// Object: Function UMG.Image.SetBrushFromTextureDynamic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x166609e0
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, uint8_t bMatchSize);

	// Object: Function UMG.Image.SetBrushFromTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf56e0d4
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTexture(struct UTexture2D* Texture, uint8_t bMatchSize);

	// Object: Function UMG.Image.SetBrushFromSoftTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16660848
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, uint8_t bMatchSize);

	// Object: Function UMG.Image.SetBrushFromSoftMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16660700
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial);

	// Object: Function UMG.Image.SetBrushFromSoftAtlasInterfaceWithAmplifiedRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xedff66c
	// Params: [ Num(3) Size(0x2A) ]
	void SetBrushFromSoftAtlasInterfaceWithAmplifiedRate(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate);

	// Object: Function UMG.Image.SetBrushFromSoftAtlasInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe667448
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function UMG.Image.SetBrushFromMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf155fcc
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.Image.SetBrushFromAtlasInterfaceWithAmplifiedRate
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xe65bb38
	// Params: [ Num(3) Size(0x12) ]
	void SetBrushFromAtlasInterfaceWithAmplifiedRate(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate);

	// Object: Function UMG.Image.SetBrushFromAtlasInterface
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xefb5f68
	// Params: [ Num(2) Size(0x11) ]
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function UMG.Image.SetBrushFromAsset
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16660654
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.Image.SetBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf7e95e4
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.Image.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf0bf5b0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual
{
	DEFINE_UE_CLASS_HELPERS(UPanelSlot, "PanelSlot")

	struct UPanelWidget* Parent; // 0x28(0x8)
	struct UWidget* Content; // 0x30(0x8)
};

// Object: Class UMG.RichTextBlock
// Size: 0x788 (Inherited: 0x1D8)
struct URichTextBlock : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlock, "RichTextBlock")

	struct FText Text; // 0x1D8(0x18)
	struct UDataTable* TextStyleSet; // 0x1F0(0x8)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x1F8(0x10)
	uint8_t bOverrideDefaultStyle : 1; // 0x208(0x1), Mask(0x1)
	uint8_t BitPad_0x208_1 : 7; // 0x208(0x1)
	uint8_t Pad_0x209[0x3]; // 0x209(0x3)
	float RichTextScale; // 0x20C(0x4)
	uint8_t bCustomizeStyle : 1; // 0x210(0x1), Mask(0x1)
	uint8_t BitPad_0x210_1 : 7; // 0x210(0x1)
	uint8_t Pad_0x211[0x3]; // 0x211(0x3)
	struct FName TableRowID; // 0x214(0x8)
	struct FName FontStyleID; // 0x21C(0x8)
	int32_t LetterSpacing; // 0x224(0x4)
	ETextUpperPolicy TextUpperPolicy; // 0x228(0x1)
	ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x229(0x1)
	EDynamicAdaptType DynamicAdaptTextType; // 0x22A(0x1)
	uint8_t IsOpenAdaptBoxSize : 1; // 0x22B(0x1), Mask(0x1)
	uint8_t BitPad_0x22B_1 : 7; // 0x22B(0x1)
	ETextOverflowPolicy TextOverflowAutoEllipsisType; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x230(0x290)
	float MinDesiredWidth; // 0x4C0(0x4)
	uint8_t Pad_0x4C4[0x4]; // 0x4C4(0x4)
	struct FTextBlockStyle DefaultTextStyle; // 0x4C8(0x290)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x758(0x10)
	uint8_t Pad_0x768[0x20]; // 0x768(0x20)

	// Object: Function UMG.RichTextBlock.SetTextUpperPolicy
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1666b79c
	// Params: [ Num(1) Size(0x1) ]
	void SetTextUpperPolicy(ETextUpperPolicy InTextUpperPolicy);

	// Object: Function UMG.RichTextBlock.SetTextStyleSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666b6f8
	// Params: [ Num(1) Size(0x8) ]
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet);

	// Object: Function UMG.RichTextBlock.SetTextOverflowAutoEllipse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666b654
	// Params: [ Num(1) Size(0x1) ]
	void SetTextOverflowAutoEllipse(ETextOverflowPolicy InAutoOverflowEllipse);

	// Object: Function UMG.RichTextBlock.SetText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf2bbf88
	// Params: [ Num(1) Size(0x18) ]
	void SetText(const struct FText& InText);

	// Object: Function UMG.RichTextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666b5b0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.RichTextBlock.SetFontStyleID
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf053614
	// Params: [ Num(1) Size(0x8) ]
	void SetFontStyleID(const struct FName& InNewFontStyleID);

	// Object: Function UMG.RichTextBlock.SetDefaultTextStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1666b4f0
	// Params: [ Num(1) Size(0x290) ]
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);

	// Object: Function UMG.RichTextBlock.SetDefaultStrikeBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1666b3dc
	// Params: [ Num(1) Size(0x90) ]
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush);

	// Object: Function UMG.RichTextBlock.SetDefaultShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1666b33c
	// Params: [ Num(1) Size(0x8) ]
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1666b298
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function UMG.RichTextBlock.SetDefaultFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666b100
	// Params: [ Num(1) Size(0x58) ]
	void SetDefaultFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xee2a644
	// Params: [ Num(1) Size(0x28) ]
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function UMG.RichTextBlock.SetCustomTextFlowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666b05c
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy);

	// Object: Function UMG.RichTextBlock.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666afb0
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(uint8_t InAutoTextWrap);

	// Object: Function UMG.RichTextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666aee0
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.RichTextBlock.GetIsOverrideDefaultStyle
	// Flags: [Final|Native|Public]
	// Offset: 0x1666aec4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsOverrideDefaultStyle();

	// Object: Function UMG.RichTextBlock.GetFontStyleID
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1666ae88
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetFontStyleID();

	// Object: Function UMG.RichTextBlock.GetDecoratorByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1072b2c8
	// Params: [ Num(2) Size(0x10) ]
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass);

	// Object: Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// Flags: [Final|Native|Public]
	// Offset: 0x1666ae74
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllDefaultStyleOverrides();

	// Object: Function UMG.RichTextBlock.BP_SetWrapTextAt
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf6ed344
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetWrapTextAt(float TextAt);
};

// Object: Class UMG.SizeBox
// Size: 0x1A8 (Inherited: 0x170)
struct USizeBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(USizeBox, "SizeBox")

	uint8_t Pad_0x170[0x10]; // 0x170(0x10)
	float WidthOverride; // 0x180(0x4)
	float HeightOverride; // 0x184(0x4)
	float MinDesiredWidth; // 0x188(0x4)
	float MinDesiredHeight; // 0x18C(0x4)
	float MaxDesiredWidth; // 0x190(0x4)
	float MaxDesiredHeight; // 0x194(0x4)
	float MinAspectRatio; // 0x198(0x4)
	float MaxAspectRatio; // 0x19C(0x4)
	uint8_t bOverride_WidthOverride : 1; // 0x1A0(0x1), Mask(0x1)
	uint8_t bOverride_HeightOverride : 1; // 0x1A0(0x1), Mask(0x2)
	uint8_t bOverride_MinDesiredWidth : 1; // 0x1A0(0x1), Mask(0x4)
	uint8_t bOverride_MinDesiredHeight : 1; // 0x1A0(0x1), Mask(0x8)
	uint8_t bOverride_MaxDesiredWidth : 1; // 0x1A0(0x1), Mask(0x10)
	uint8_t bOverride_MaxDesiredHeight : 1; // 0x1A0(0x1), Mask(0x20)
	uint8_t bOverride_MinAspectRatio : 1; // 0x1A0(0x1), Mask(0x40)
	uint8_t bOverride_MaxAspectRatio : 1; // 0x1A0(0x1), Mask(0x80)
	uint8_t Pad_0x1A1[0x7]; // 0x1A1(0x7)

	// Object: Function UMG.SizeBox.SetWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed4a424
	// Params: [ Num(1) Size(0x4) ]
	void SetWidthOverride(float InWidthOverride);

	// Object: Function UMG.SizeBox.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666dba0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.SizeBox.SetMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed4aeec
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredHeight(float InMinDesiredHeight);

	// Object: Function UMG.SizeBox.SetMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666dafc
	// Params: [ Num(1) Size(0x4) ]
	void SetMinAspectRatio(float InMinAspectRatio);

	// Object: Function UMG.SizeBox.SetMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed4a598
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredWidth(float InMaxDesiredWidth);

	// Object: Function UMG.SizeBox.SetMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed4ae48
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredHeight(float InMaxDesiredHeight);

	// Object: Function UMG.SizeBox.SetMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666da58
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxAspectRatio(float InMaxAspectRatio);

	// Object: Function UMG.SizeBox.SetHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed4a380
	// Params: [ Num(1) Size(0x4) ]
	void SetHeightOverride(float InHeightOverride);

	// Object: Function UMG.SizeBox.ClearWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666da44
	// Params: [ Num(0) Size(0x0) ]
	void ClearWidthOverride();

	// Object: Function UMG.SizeBox.ClearMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666da30
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredWidth();

	// Object: Function UMG.SizeBox.ClearMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666da1c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredHeight();

	// Object: Function UMG.SizeBox.ClearMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666da08
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinAspectRatio();

	// Object: Function UMG.SizeBox.ClearMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d9f4
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredWidth();

	// Object: Function UMG.SizeBox.ClearMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed49484
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredHeight();

	// Object: Function UMG.SizeBox.ClearMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d9e0
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxAspectRatio();

	// Object: Function UMG.SizeBox.ClearHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xed49498
	// Params: [ Num(0) Size(0x0) ]
	void ClearHeightOverride();
};

// Object: Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x3D8 (Inherited: 0x380)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(UWidgetBlueprintGeneratedClass, "WidgetBlueprintGeneratedClass")

	struct UWidgetTree* WidgetTree; // 0x380(0x8)
	uint8_t bClassRequiresNativeTick : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x7]; // 0x389(0x7)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x390(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x3A0(0x10)
	struct TArray<struct FLiteAnimation> LiteAnimations; // 0x3B0(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3C0(0x10)
	uint8_t bCanBeAddToCluster : 1; // 0x3D0(0x1), Mask(0x1)
	uint8_t BitPad_0x3D0_1 : 7; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0x7]; // 0x3D1(0x7)

	// Object: Function UMG.WidgetBlueprintGeneratedClass.UnloadWidgetTree
	// Flags: [Final|Native|Public]
	// Offset: 0x1667b768
	// Params: [ Num(1) Size(0x1) ]
	void UnloadWidgetTree(uint8_t bSetPackageReload);
};

// Object: Class UMG.CanvasPanel
// Size: 0x1D0 (Inherited: 0x170)
struct UCanvasPanel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UCanvasPanel, "CanvasPanel")

	uint8_t bNeedComputeLayout : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t bCacheChildWidget : 1; // 0x16A(0x1), Mask(0x2)
	uint8_t BitPad_0x170_2 : 6; // 0x170(0x1)
	uint8_t Pad_0x171[0x5F]; // 0x171(0x5F)

	// Object: Function UMG.CanvasPanel.ReleaseCacheSlateWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b7bc
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseCacheSlateWidget();

	// Object: Function UMG.CanvasPanel.AddChildToCanvas
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xec77034
	// Params: [ Num(2) Size(0x10) ]
	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content);
};

// Object: Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlockDecorator, "RichTextBlockDecorator")
};

// Object: Class UMG.Button
// Size: 0x4A0 (Inherited: 0x170)
struct UButton : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UButton, "Button")

	struct USlateWidgetStyleAsset* Style; // 0x170(0x8)
	struct FButtonStyle WidgetStyle; // 0x178(0x298)
	struct FLinearColor ColorAndOpacity; // 0x410(0x10)
	struct FLinearColor BackgroundColor; // 0x420(0x10)
	struct FVector2D PressedScale; // 0x430(0x8)
	EButtonClickMethod ClickMethod; // 0x438(0x1)
	EButtonTouchMethod TouchMethod; // 0x439(0x1)
	EButtonPressMethod PressMethod; // 0x43A(0x1)
	uint8_t IsFocusable : 1; // 0x43B(0x1), Mask(0x1)
	uint8_t BitPad_0x43B_1 : 7; // 0x43B(0x1)
	uint8_t bIsPlayDefaultSound : 1; // 0x43C(0x1), Mask(0x1)
	uint8_t BitPad_0x43C_1 : 7; // 0x43C(0x1)
	uint8_t Pad_0x43D[0x3]; // 0x43D(0x3)
	struct FMulticastInlineDelegate OnClicked; // 0x440(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x450(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x460(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x470(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x480(0x10)
	uint8_t Pad_0x490[0x10]; // 0x490(0x10)

	// Object: Function UMG.Button.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b444
	// Params: [ Num(1) Size(0x1) ]
	void SetTouchMethod(EButtonTouchMethod InTouchMethod);

	// Object: Function UMG.Button.SetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xec8f3c0
	// Params: [ Num(1) Size(0x298) ]
	void SetStyle(const struct FButtonStyle& InStyle);

	// Object: Function UMG.Button.SetPressMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b3a0
	// Params: [ Num(1) Size(0x1) ]
	void SetPressMethod(EButtonPressMethod InPressMethod);

	// Object: Function UMG.Button.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1665b2fc
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.Button.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b258
	// Params: [ Num(1) Size(0x1) ]
	void SetClickMethod(EButtonClickMethod InClickMethod);

	// Object: Function UMG.Button.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf6badec
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundColor(struct FLinearColor InBackgroundColor);

	// Object: Function UMG.Button.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665b220
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPressed();
};

// Object: Class UMG.BackgroundBlur
// Size: 0x2E0 (Inherited: 0x170)
struct UBackgroundBlur : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UBackgroundBlur, "BackgroundBlur")

	struct FMargin Padding; // 0x16C(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x17C(0x1)
	EVerticalAlignment VerticalAlignment; // 0x17D(0x1)
	uint8_t bApplyAlphaToBlur : 1; // 0x17E(0x1), Mask(0x1)
	uint8_t bApplyBlurShapeMask : 1; // 0x17F(0x1), Mask(0x1)
	struct FSlateBrush BlurShapeMaskBrush; // 0x180(0x90)
	struct FVector2D BlurShapeMaskScale; // 0x210(0x8)
	struct FVector2D BlurShapeMaskOffset; // 0x218(0x8)
	uint8_t bFake3DBlur : 1; // 0x220(0x1), Mask(0x1)
	EFake3DBlurType Fake3DBlurType; // 0x221(0x1)
	uint8_t BitPad_0x223_3 : 5; // 0x223(0x1)
	float BlurStrength; // 0x224(0x4)
	uint8_t bOverrideAutoRadiusCalculation : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	int32_t BlurRadius; // 0x22C(0x4)
	struct FSlateBrush LowQualityFallbackBrush; // 0x230(0x90)
	uint8_t bForceBlurEveryFrame : 1; // 0x2C0(0x1), Mask(0x1)
	uint8_t BitPad_0x2C0_1 : 7; // 0x2C0(0x1)
	uint8_t Pad_0x2C1[0x17]; // 0x2C1(0x17)
	struct UTextureRenderTarget2D* RenderTarget; // 0x2D8(0x8)

	// Object: Function UMG.BackgroundBlur.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a534
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.BackgroundBlur.SetSimulate3DUIParams
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1665a484
	// Params: [ Num(1) Size(0x10) ]
	void SetSimulate3DUIParams(struct FVector4 InSimulate3DUIParams);

	// Object: Function UMG.BackgroundBlur.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a3dc
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1665a2c8
	// Params: [ Num(1) Size(0x90) ]
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.BackgroundBlur.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a224
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	// Object: Function UMG.BackgroundBlur.SetFake3DBlurType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a180
	// Params: [ Num(1) Size(0x1) ]
	void SetFake3DBlurType(EFake3DBlurType InFake3DBlurType);

	// Object: Function UMG.BackgroundBlur.SetFake3DBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a0d4
	// Params: [ Num(1) Size(0x1) ]
	void SetFake3DBlur(uint8_t bEnable);

	// Object: Function UMG.BackgroundBlur.SetBlurStrength
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf487b58
	// Params: [ Num(1) Size(0x4) ]
	void SetBlurStrength(float InStrength);

	// Object: Function UMG.BackgroundBlur.SetBlurShapeMaskBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16659fc0
	// Params: [ Num(1) Size(0x90) ]
	void SetBlurShapeMaskBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.BackgroundBlur.SetBlurRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16659f1c
	// Params: [ Num(1) Size(0x4) ]
	void SetBlurRadius(int32_t InBlurRadius);

	// Object: Function UMG.BackgroundBlur.SetApplyBlurShapeMask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16659e70
	// Params: [ Num(1) Size(0x1) ]
	void SetApplyBlurShapeMask(uint8_t bInApplyBlurShapeMask);

	// Object: Function UMG.BackgroundBlur.SetApplyAlphaToBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16659dc4
	// Params: [ Num(1) Size(0x1) ]
	void SetApplyAlphaToBlur(uint8_t bInApplyAlphaToBlur);
};

// Object: Class UMG.NamedSlot
// Size: 0x180 (Inherited: 0x170)
struct UNamedSlot : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UNamedSlot, "NamedSlot")

	uint8_t Pad_0x170[0x10]; // 0x170(0x10)
};

// Object: Class UMG.Checkbox
// Size: 0x800 (Inherited: 0x170)
struct UCheckbox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UCheckbox, "Checkbox")

	ECheckBoxState CheckedState; // 0x16A(0x1)
	struct FDelegate CheckedStateDelegate; // 0x16C(0x10)
	struct FCheckBoxStyle WidgetStyle; // 0x180(0x5C8)
	struct USlateWidgetStyleAsset* Style; // 0x748(0x8)
	struct USlateBrushAsset* UncheckedImage; // 0x750(0x8)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x758(0x8)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x760(0x8)
	struct USlateBrushAsset* CheckedImage; // 0x768(0x8)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x770(0x8)
	struct USlateBrushAsset* CheckedPressedImage; // 0x778(0x8)
	struct USlateBrushAsset* UndeterminedImage; // 0x780(0x8)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x788(0x8)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x790(0x8)
	EHorizontalAlignment HorizontalAlignment; // 0x798(0x1)
	uint8_t Pad_0x79A[0x2]; // 0x79A(0x2)
	struct FMargin Padding; // 0x79C(0x10)
	uint8_t Pad_0x7AC[0x4]; // 0x7AC(0x4)
	struct FSlateColor BorderBackgroundColor; // 0x7B0(0x28)
	uint8_t IsFocusable : 1; // 0x7D8(0x1), Mask(0x1)
	uint8_t BitPad_0x7D8_1 : 7; // 0x7D8(0x1)
	uint8_t Pad_0x7D9[0x7]; // 0x7D9(0x7)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x7E0(0x10)
	uint8_t Pad_0x7F0[0x10]; // 0x7F0(0x10)

	// Object: Function UMG.Checkbox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef14c88
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(uint8_t InIsChecked);

	// Object: Function UMG.Checkbox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfb14a24
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckedState(ECheckBoxState InCheckedState);

	// Object: Function UMG.Checkbox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665c080
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPressed();

	// Object: Function UMG.Checkbox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665c048
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChecked();

	// Object: Function UMG.Checkbox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665c014
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetCheckedState();
};

// Object: Class UMG.ComboBoxString
// Size: 0xED8 (Inherited: 0x158)
struct UComboBoxString : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UComboBoxString, "ComboBoxString")

	struct TArray<struct FString> DefaultOptions; // 0x158(0x10)
	struct FString SelectedOption; // 0x168(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x178(0x408)
	struct FTableRowStyle ItemStyle; // 0x580(0x838)
	struct FMargin ContentPadding; // 0xDB8(0x10)
	float MaxListHeight; // 0xDC8(0x4)
	uint8_t HasDownArrow : 1; // 0xDCC(0x1), Mask(0x1)
	uint8_t BitPad_0xDCC_1 : 7; // 0xDCC(0x1)
	uint8_t EnableGamepadNavigationMode : 1; // 0xDCD(0x1), Mask(0x1)
	uint8_t BitPad_0xDCD_1 : 7; // 0xDCD(0x1)
	uint8_t Pad_0xDCE[0x2]; // 0xDCE(0x2)
	struct FSlateFontInfo Font; // 0xDD0(0x58)
	struct FSlateColor ForegroundColor; // 0xE28(0x28)
	uint8_t bIsFocusable : 1; // 0xE50(0x1), Mask(0x1)
	uint8_t BitPad_0xE50_1 : 7; // 0xE50(0x1)
	uint8_t Pad_0xE51[0x3]; // 0xE51(0x3)
	struct FDelegate OnGenerateWidgetEvent; // 0xE54(0x10)
	uint8_t Pad_0xE64[0x4]; // 0xE64(0x4)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xE68(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xE78(0x10)
	uint8_t Pad_0xE88[0x50]; // 0xE88(0x50)

	// Object: Function UMG.ComboBoxString.SetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d620
	// Params: [ Num(1) Size(0x10) ]
	void SetSelectedOption(struct FString Option);

	// Object: Function UMG.ComboBoxString.SetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10ad6694
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedIndex(int32_t Index);

	// Object: Function UMG.ComboBoxString.RemoveOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d568
	// Params: [ Num(2) Size(0x11) ]
	uint8_t RemoveOption(struct FString Option);

	// Object: Function UMG.ComboBoxString.RefreshOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d554
	// Params: [ Num(0) Size(0x0) ]
	void RefreshOptions();

	// Object: DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x11) ]
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, ESelectInfo SelectionType);

	// Object: DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnOpeningEvent__DelegateSignature();

	// Object: Function UMG.ComboBoxString.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d51c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOpen();

	// Object: Function UMG.ComboBoxString.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d484
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedOption();

	// Object: Function UMG.ComboBoxString.GetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d450
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedIndex();

	// Object: Function UMG.ComboBoxString.GetOptionCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d41c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOptionCount();

	// Object: Function UMG.ComboBoxString.GetOptionAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d33c
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetOptionAtIndex(int32_t Index);

	// Object: Function UMG.ComboBoxString.FindOptionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665d288
	// Params: [ Num(2) Size(0x14) ]
	int32_t FindOptionIndex(struct FString Option);

	// Object: Function UMG.ComboBoxString.ClearSelection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d274
	// Params: [ Num(0) Size(0x0) ]
	void ClearSelection();

	// Object: Function UMG.ComboBoxString.ClearOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d260
	// Params: [ Num(0) Size(0x0) ]
	void ClearOptions();

	// Object: Function UMG.ComboBoxString.AddOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665d1b4
	// Params: [ Num(1) Size(0x10) ]
	void AddOption(struct FString Option);
};

// Object: Class UMG.ListViewBase
// Size: 0x268 (Inherited: 0x158)
struct UListViewBase : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UListViewBase, "ListViewBase")

	struct UUserWidget* EntryWidgetClass; // 0x158(0x8)
	float WheelScrollMultiplier; // 0x160(0x4)
	uint8_t bEnableScrollAnimation : 1; // 0x164(0x1), Mask(0x1)
	uint8_t BitPad_0x164_1 : 7; // 0x164(0x1)
	uint8_t bEnableFixedLineOffset : 1; // 0x165(0x1), Mask(0x1)
	uint8_t BitPad_0x165_1 : 7; // 0x165(0x1)
	uint8_t Pad_0x166[0x2]; // 0x166(0x2)
	float FixedLineScrollOffset; // 0x168(0x4)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x170(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x180(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x190(0x80)
	uint8_t Pad_0x210[0x58]; // 0x210(0x58)

	// Object: Function UMG.ListViewBase.SetWheelScrollMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16664018
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

	// Object: Function UMG.ListViewBase.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16663f74
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float InScrollOffset);

	// Object: Function UMG.ListViewBase.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16663ed0
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(ESlateVisibility InVisibility);

	// Object: Function UMG.ListViewBase.ScrollToTop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16663ebc
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToTop();

	// Object: Function UMG.ListViewBase.ScrollToBottom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16663ea8
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToBottom();

	// Object: Function UMG.ListViewBase.RequestRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16663e94
	// Params: [ Num(0) Size(0x0) ]
	void RequestRefresh();

	// Object: Function UMG.ListViewBase.RegenerateAllEntries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16663e80
	// Params: [ Num(0) Size(0x0) ]
	void RegenerateAllEntries();

	// Object: Function UMG.ListViewBase.GetDisplayedEntryWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16663dfc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets();
};

// Object: Class UMG.ListView
// Size: 0x3B8 (Inherited: 0x268)
struct UListView : UListViewBase
{
	DEFINE_UE_CLASS_HELPERS(UListView, "ListView")

	uint8_t Pad_0x268[0xC0]; // 0x268(0xC0)
	EOrientation Orientation; // 0x328(0x1)
	ESelectionMode SelectionMode; // 0x329(0x1)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x32A(0x1)
	uint8_t bClearSelectionOnClick : 1; // 0x32B(0x1), Mask(0x1)
	uint8_t BitPad_0x32B_1 : 7; // 0x32B(0x1)
	uint8_t bIsFocusable : 1; // 0x32C(0x1), Mask(0x1)
	uint8_t BitPad_0x32C_1 : 7; // 0x32C(0x1)
	uint8_t Pad_0x32D[0x3]; // 0x32D(0x3)
	float EntrySpacing; // 0x330(0x4)
	uint8_t bReturnFocusToSelection : 1; // 0x334(0x1), Mask(0x1)
	uint8_t BitPad_0x334_1 : 7; // 0x334(0x1)
	uint8_t Pad_0x335[0x3]; // 0x335(0x3)
	struct TArray<struct UObject*> ListItems; // 0x338(0x10)
	uint8_t Pad_0x348[0x10]; // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x358(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x368(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x388(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x398(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x3A8(0x10)

	// Object: Function UMG.ListView.SetSelectionMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166629dc
	// Params: [ Num(1) Size(0x1) ]
	void SetSelectionMode(ESelectionMode SelectionMode);

	// Object: Function UMG.ListView.SetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16662938
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedIndex(int32_t Index);

	// Object: Function UMG.ListView.ScrollIndexIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16662894
	// Params: [ Num(1) Size(0x4) ]
	void ScrollIndexIntoView(int32_t Index);

	// Object: Function UMG.ListView.RemoveItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166627f0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveItem(struct UObject* Item);

	// Object: Function UMG.ListView.NavigateToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666274c
	// Params: [ Num(1) Size(0x4) ]
	void NavigateToIndex(int32_t Index);

	// Object: Function UMG.ListView.IsRefreshPending
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16662714
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRefreshPending();

	// Object: Function UMG.ListView.GetNumItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166626e0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumItems();

	// Object: Function UMG.ListView.GetListItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16662658
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UObject*> GetListItems();

	// Object: Function UMG.ListView.GetItemAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166625ac
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetItemAt(int32_t Index);

	// Object: Function UMG.ListView.GetIndexForItem
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16662500
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexForItem(struct UObject* Item);

	// Object: Function UMG.ListView.ClearListItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166624ec
	// Params: [ Num(0) Size(0x0) ]
	void ClearListItems();

	// Object: Function UMG.ListView.BP_SetSelectedItem
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x16662448
	// Params: [ Num(1) Size(0x8) ]
	void BP_SetSelectedItem(struct UObject* Item);

	// Object: Function UMG.ListView.BP_SetListItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x1666238c
	// Params: [ Num(1) Size(0x10) ]
	void BP_SetListItems(const struct TArray<struct UObject*>& InListItems);

	// Object: Function UMG.ListView.BP_SetItemSelection
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x166622a4
	// Params: [ Num(2) Size(0x9) ]
	void BP_SetItemSelection(struct UObject* Item, uint8_t bSelected);

	// Object: Function UMG.ListView.BP_ScrollItemIntoView
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x16662200
	// Params: [ Num(1) Size(0x8) ]
	void BP_ScrollItemIntoView(struct UObject* Item);

	// Object: Function UMG.ListView.BP_NavigateToItem
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x1666215c
	// Params: [ Num(1) Size(0x8) ]
	void BP_NavigateToItem(struct UObject* Item);

	// Object: Function UMG.ListView.BP_IsItemVisible
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166620ac
	// Params: [ Num(2) Size(0x9) ]
	uint8_t BP_IsItemVisible(struct UObject* Item);

	// Object: Function UMG.ListView.BP_GetSelectedItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16661fe4
	// Params: [ Num(2) Size(0x11) ]
	uint8_t BP_GetSelectedItems(struct TArray<struct UObject*>& Items);

	// Object: Function UMG.ListView.BP_GetSelectedItem
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16661fb0
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* BP_GetSelectedItem();

	// Object: Function UMG.ListView.BP_GetNumItemsSelected
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16661f7c
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetNumItemsSelected();

	// Object: Function UMG.ListView.BP_ClearSelection
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x16661f68
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClearSelection();

	// Object: Function UMG.ListView.BP_CancelScrollIntoView
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x16661f54
	// Params: [ Num(0) Size(0x0) ]
	void BP_CancelScrollIntoView();

	// Object: Function UMG.ListView.AddItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16661eb0
	// Params: [ Num(1) Size(0x8) ]
	void AddItem(struct UObject* Item);
};

// Object: Class UMG.EditableText
// Size: 0x4C8 (Inherited: 0x158)
struct UEditableText : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UEditableText, "EditableText")

	struct FText Text; // 0x158(0x18)
	struct FDelegate TextDelegate; // 0x170(0x10)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x1A8(0x238)
	struct USlateWidgetStyleAsset* Style; // 0x3E0(0x8)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3E8(0x8)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3F0(0x8)
	struct USlateBrushAsset* CaretImage; // 0x3F8(0x8)
	struct FSlateFontInfo Font; // 0x400(0x58)
	struct FSlateColor ColorAndOpacity; // 0x458(0x28)
	uint8_t IsReadOnly : 1; // 0x480(0x1), Mask(0x1)
	uint8_t BitPad_0x480_1 : 7; // 0x480(0x1)
	uint8_t IsPassword : 1; // 0x481(0x1), Mask(0x1)
	uint8_t BitPad_0x481_1 : 7; // 0x481(0x1)
	uint8_t Pad_0x482[0x2]; // 0x482(0x2)
	float MinimumDesiredWidth; // 0x484(0x4)
	uint8_t IsCaretMovedWhenGainFocus : 1; // 0x488(0x1), Mask(0x1)
	uint8_t BitPad_0x488_1 : 7; // 0x488(0x1)
	uint8_t SelectAllTextWhenFocused : 1; // 0x489(0x1), Mask(0x1)
	uint8_t BitPad_0x489_1 : 7; // 0x489(0x1)
	uint8_t RevertTextOnEscape : 1; // 0x48A(0x1), Mask(0x1)
	uint8_t BitPad_0x48A_1 : 7; // 0x48A(0x1)
	uint8_t ClearKeyboardFocusOnCommit : 1; // 0x48B(0x1), Mask(0x1)
	uint8_t BitPad_0x48B_1 : 7; // 0x48B(0x1)
	uint8_t SelectAllTextOnCommit : 1; // 0x48C(0x1), Mask(0x1)
	uint8_t BitPad_0x48C_1 : 7; // 0x48C(0x1)
	uint8_t AllowContextMenu : 1; // 0x48D(0x1), Mask(0x1)
	uint8_t BitPad_0x48D_1 : 7; // 0x48D(0x1)
	EVirtualKeyboardType KeyboardType; // 0x48E(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x48F(0x2)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x491(0x1)
	ETextJustify Justification; // 0x492(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x493(0x3)
	ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x496(0x1)
	uint8_t Pad_0x497[0x1]; // 0x497(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x498(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4A8(0x10)
	uint8_t Pad_0x4B8[0x10]; // 0x4B8(0x10)

	// Object: Function UMG.EditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc55de8
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.EditableText.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e8d0
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(ETextJustify InJustification);

	// Object: Function UMG.EditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e824
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(uint8_t InbIsReadyOnly);

	// Object: Function UMG.EditableText.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e778
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPassword(uint8_t InbIsPassword);

	// Object: Function UMG.EditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e5f8
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: Function UMG.EditableText.SetCustomTextFlowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e554
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy);

	// Object: DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x19) ]
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod);

	// Object: DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.EditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665e484
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();
};

// Object: Class UMG.EditableTextBox
// Size: 0xAF0 (Inherited: 0x158)
struct UEditableTextBox : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UEditableTextBox, "EditableTextBox")

	struct FText Text; // 0x158(0x18)
	struct FDelegate TextDelegate; // 0x170(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x180(0x860)
	struct USlateWidgetStyleAsset* Style; // 0x9E0(0x8)
	struct FText HintText; // 0x9E8(0x18)
	struct FDelegate HintTextDelegate; // 0xA00(0x10)
	struct FSlateFontInfo Font; // 0xA10(0x58)
	struct FLinearColor ForegroundColor; // 0xA68(0x10)
	struct FLinearColor BackgroundColor; // 0xA78(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xA88(0x10)
	uint8_t IsReadOnly : 1; // 0xA98(0x1), Mask(0x1)
	uint8_t BitPad_0xA98_1 : 7; // 0xA98(0x1)
	uint8_t IsPassword : 1; // 0xA99(0x1), Mask(0x1)
	uint8_t BitPad_0xA99_1 : 7; // 0xA99(0x1)
	uint8_t Pad_0xA9A[0x2]; // 0xA9A(0x2)
	float MinimumDesiredWidth; // 0xA9C(0x4)
	struct FMargin Padding; // 0xAA0(0x10)
	uint8_t IsCaretMovedWhenGainFocus : 1; // 0xAB0(0x1), Mask(0x1)
	uint8_t BitPad_0xAB0_1 : 7; // 0xAB0(0x1)
	uint8_t SelectAllTextWhenFocused : 1; // 0xAB1(0x1), Mask(0x1)
	uint8_t BitPad_0xAB1_1 : 7; // 0xAB1(0x1)
	uint8_t RevertTextOnEscape : 1; // 0xAB2(0x1), Mask(0x1)
	uint8_t BitPad_0xAB2_1 : 7; // 0xAB2(0x1)
	uint8_t ClearKeyboardFocusOnCommit : 1; // 0xAB3(0x1), Mask(0x1)
	uint8_t BitPad_0xAB3_1 : 7; // 0xAB3(0x1)
	uint8_t SelectAllTextOnCommit : 1; // 0xAB4(0x1), Mask(0x1)
	uint8_t BitPad_0xAB4_1 : 7; // 0xAB4(0x1)
	uint8_t AllowContextMenu : 1; // 0xAB5(0x1), Mask(0x1)
	uint8_t BitPad_0xAB5_1 : 7; // 0xAB5(0x1)
	EVirtualKeyboardType KeyboardType; // 0xAB6(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xAB7(0x2)
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xAB9(0x1)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xABA(0x1)
	ETextJustify Justification; // 0xABB(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0xABC(0x3)
	ECustomTextFlowPolicy CustomTextFlowPolicy; // 0xABF(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0xAC0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xAD0(0x10)
	uint8_t Pad_0xAE0[0x10]; // 0xAE0(0x10)

	// Object: Function UMG.EditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc561d0
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.EditableTextBox.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665edbc
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(ETextJustify InJustification);

	// Object: Function UMG.EditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ed10
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(uint8_t bReadOnly);

	// Object: Function UMG.EditableTextBox.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ec64
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPassword(uint8_t bIsPassword);

	// Object: Function UMG.EditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xee2b754
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InText);

	// Object: Function UMG.EditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665eae4
	// Params: [ Num(1) Size(0x18) ]
	void SetError(struct FText InError);

	// Object: Function UMG.EditableTextBox.SetCustomTextFlowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ea40
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy);

	// Object: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x19) ]
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod);

	// Object: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.EditableTextBox.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665ea08
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasError();

	// Object: Function UMG.EditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xff9ba38
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.EditableTextBox.ClearError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e9f4
	// Params: [ Num(0) Size(0x0) ]
	void ClearError();
};

// Object: Class UMG.ExpandableArea
// Size: 0x3A0 (Inherited: 0x158)
struct UExpandableArea : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UExpandableArea, "ExpandableArea")

	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct FExpandableAreaStyle Style; // 0x160(0x130)
	struct FSlateBrush BorderBrush; // 0x290(0x90)
	struct FSlateColor BorderColor; // 0x320(0x28)
	uint8_t bIsExpanded : 1; // 0x348(0x1), Mask(0x1)
	uint8_t BitPad_0x348_1 : 7; // 0x348(0x1)
	uint8_t Pad_0x349[0x3]; // 0x349(0x3)
	float MaxHeight; // 0x34C(0x4)
	struct FMargin HeaderPadding; // 0x350(0x10)
	struct FMargin AreaPadding; // 0x360(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x370(0x10)
	struct UWidget* HeaderContent; // 0x380(0x8)
	struct UWidget* BodyContent; // 0x388(0x8)
	uint8_t Pad_0x390[0x10]; // 0x390(0x10)

	// Object: Function UMG.ExpandableArea.SetIsExpanded_Animated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665efdc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsExpanded_Animated(uint8_t IsExpanded);

	// Object: Function UMG.ExpandableArea.SetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ef30
	// Params: [ Num(1) Size(0x1) ]
	void SetIsExpanded(uint8_t IsExpanded);

	// Object: Function UMG.ExpandableArea.GetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665eef8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsExpanded();
};

// Object: Class UMG.GridPanel
// Size: 0x1A0 (Inherited: 0x170)
struct UGridPanel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UGridPanel, "GridPanel")

	struct TArray<float> ColumnFill; // 0x170(0x10)
	struct TArray<float> RowFill; // 0x180(0x10)
	uint8_t Pad_0x190[0x10]; // 0x190(0x10)

	// Object: Function UMG.GridPanel.SetRowFill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ff54
	// Params: [ Num(2) Size(0x8) ]
	void SetRowFill(int32_t ColumnIndex, float Coefficient);

	// Object: Function UMG.GridPanel.SetColumnFill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665fe74
	// Params: [ Num(2) Size(0x8) ]
	void SetColumnFill(int32_t ColumnIndex, float Coefficient);

	// Object: Function UMG.GridPanel.AddChildToGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665fd54
	// Params: [ Num(4) Size(0x18) ]
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Object: Class UMG.HorizontalBox
// Size: 0x190 (Inherited: 0x170)
struct UHorizontalBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UHorizontalBox, "HorizontalBox")

	uint8_t AllowScrollBoxSlot : 1; // 0x16A(0x1), Mask(0x1)
	struct FMargin ContentPadding; // 0x16C(0x10)
	EHorizontalAlignment ContentHorizontalAlignment; // 0x17C(0x1)
	EVerticalAlignment ContentVerticalAlignment; // 0x17D(0x1)
	uint8_t BitPad_0x182_1 : 7; // 0x182(0x1)
	uint8_t Pad_0x183[0xD]; // 0x183(0xD)

	// Object: Function UMG.HorizontalBox.AddChildToHorizontalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1072b21c
	// Params: [ Num(2) Size(0x10) ]
	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content);
};

// Object: Class UMG.InvalidationBox
// Size: 0x180 (Inherited: 0x170)
struct UInvalidationBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UInvalidationBox, "InvalidationBox")

	uint8_t bCanCache : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t CacheRelativeTransforms : 1; // 0x16B(0x1), Mask(0x1)
	uint8_t BitPad_0x170_2 : 6; // 0x170(0x1)
	uint8_t Pad_0x171[0xF]; // 0x171(0xF)

	// Object: Function UMG.InvalidationBox.SetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16661554
	// Params: [ Num(1) Size(0x1) ]
	void SetCanCache(uint8_t CanCache);

	// Object: Function UMG.InvalidationBox.InvalidateCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16661540
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateCache();

	// Object: Function UMG.InvalidationBox.GetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16661508
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetCanCache();
};

// Object: Class UMG.MultiLineEditableText
// Size: 0x548 (Inherited: 0x1D8)
struct UMultiLineEditableText : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(UMultiLineEditableText, "MultiLineEditableText")

	struct FText Text; // 0x1D8(0x18)
	struct FText HintText; // 0x1F0(0x18)
	struct FDelegate HintTextDelegate; // 0x208(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x218(0x290)
	uint8_t bIsReadOnly : 1; // 0x4A8(0x1), Mask(0x1)
	uint8_t BitPad_0x4A8_1 : 7; // 0x4A8(0x1)
	uint8_t Pad_0x4A9[0x7]; // 0x4A9(0x7)
	struct FSlateFontInfo Font; // 0x4B0(0x58)
	uint8_t SelectAllTextWhenFocused : 1; // 0x508(0x1), Mask(0x1)
	uint8_t BitPad_0x508_1 : 7; // 0x508(0x1)
	uint8_t ClearTextSelectionOnFocusLoss : 1; // 0x509(0x1), Mask(0x1)
	uint8_t BitPad_0x509_1 : 7; // 0x509(0x1)
	uint8_t RevertTextOnEscape : 1; // 0x50A(0x1), Mask(0x1)
	uint8_t BitPad_0x50A_1 : 7; // 0x50A(0x1)
	uint8_t ClearKeyboardFocusOnCommit : 1; // 0x50B(0x1), Mask(0x1)
	uint8_t BitPad_0x50B_1 : 7; // 0x50B(0x1)
	uint8_t AllowContextMenu : 1; // 0x50C(0x1), Mask(0x1)
	uint8_t BitPad_0x50C_1 : 7; // 0x50C(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x50D(0x2)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x50F(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x510(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x520(0x10)
	ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x530(0x1)
	uint8_t Pad_0x531[0x17]; // 0x531(0x17)

	// Object: Function UMG.MultiLineEditableText.SetWidgetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16665e74
	// Params: [ Num(1) Size(0x290) ]
	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);

	// Object: Function UMG.MultiLineEditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16665cf4
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.MultiLineEditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16665c48
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(uint8_t bReadOnly);

	// Object: Function UMG.MultiLineEditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16665ac8
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: Function UMG.MultiLineEditableText.SetCustomTextFlowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16665a24
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy);

	// Object: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x19) ]
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod);

	// Object: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.MultiLineEditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16665954
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.MultiLineEditableText.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16665884
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();
};

// Object: Class UMG.MultiLineEditableTextBox
// Size: 0xDD8 (Inherited: 0x1D8)
struct UMultiLineEditableTextBox : UTextLayoutWidget
{
	DEFINE_UE_CLASS_HELPERS(UMultiLineEditableTextBox, "MultiLineEditableTextBox")

	struct FText Text; // 0x1D8(0x18)
	struct FText HintText; // 0x1F0(0x18)
	struct FDelegate HintTextDelegate; // 0x208(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x218(0x860)
	struct FTextBlockStyle TextStyle; // 0xA78(0x290)
	uint8_t bIsReadOnly : 1; // 0xD08(0x1), Mask(0x1)
	uint8_t BitPad_0xD08_1 : 7; // 0xD08(0x1)
	uint8_t AllowContextMenu : 1; // 0xD09(0x1), Mask(0x1)
	uint8_t BitPad_0xD09_1 : 7; // 0xD09(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xD0A(0x2)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xD0C(0x1)
	uint8_t Pad_0xD0D[0x3]; // 0xD0D(0x3)
	struct USlateWidgetStyleAsset* Style; // 0xD10(0x8)
	struct FSlateFontInfo Font; // 0xD18(0x58)
	struct FLinearColor ForegroundColor; // 0xD70(0x10)
	struct FLinearColor BackgroundColor; // 0xD80(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xD90(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xDA0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xDB0(0x10)
	ECustomTextFlowPolicy CustomTextFlowPolicy; // 0xDC0(0x1)
	uint8_t Pad_0xDC1[0x17]; // 0xDC1(0x17)

	// Object: Function UMG.MultiLineEditableTextBox.SetTextStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16669124
	// Params: [ Num(1) Size(0x290) ]
	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);

	// Object: Function UMG.MultiLineEditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16668fa4
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16668ef8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(uint8_t bReadOnly);

	// Object: Function UMG.MultiLineEditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16668d78
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: Function UMG.MultiLineEditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16668bf8
	// Params: [ Num(1) Size(0x18) ]
	void SetError(struct FText InError);

	// Object: Function UMG.MultiLineEditableTextBox.SetCustomTextFlowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16668b54
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy);

	// Object: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x19) ]
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod);

	// Object: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);

	// Object: Function UMG.MultiLineEditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16668a84
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.MultiLineEditableTextBox.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166689b4
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();
};

// Object: Class UMG.Overlay
// Size: 0x180 (Inherited: 0x170)
struct UOverlay : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UOverlay, "Overlay")

	uint8_t Pad_0x170[0x10]; // 0x170(0x10)

	// Object: Function UMG.Overlay.AddChildToOverlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16669398
	// Params: [ Num(2) Size(0x10) ]
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content);
};

// Object: Class UMG.ProgressBar
// Size: 0x390 (Inherited: 0x158)
struct UProgressBar : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UProgressBar, "ProgressBar")

	struct FProgressBarStyle WidgetStyle; // 0x158(0x1B8)
	struct USlateWidgetStyleAsset* Style; // 0x310(0x8)
	struct USlateBrushAsset* BackgroundImage; // 0x318(0x8)
	struct USlateBrushAsset* FillImage; // 0x320(0x8)
	struct USlateBrushAsset* MarqueeImage; // 0x328(0x8)
	float Percent; // 0x330(0x4)
	float LeftValue; // 0x334(0x4)
	float RightValue; // 0x338(0x4)
	EProgressBarFillType BarFillType; // 0x33C(0x1)
	uint8_t bIsMarquee : 1; // 0x33D(0x1), Mask(0x1)
	uint8_t BitPad_0x33D_1 : 7; // 0x33D(0x1)
	uint8_t Pad_0x33E[0x2]; // 0x33E(0x2)
	struct FVector2D BorderPadding; // 0x340(0x8)
	struct FDelegate PercentDelegate; // 0x348(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x358(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x368(0x10)
	uint8_t Pad_0x378[0x18]; // 0x378(0x18)

	// Object: Function UMG.ProgressBar.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xefe512c
	// Params: [ Num(1) Size(0x4) ]
	void SetPercent(float InPercent);

	// Object: Function UMG.ProgressBar.SetIsMarquee
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a58c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsMarquee(uint8_t InbIsMarquee);

	// Object: Function UMG.ProgressBar.SetFillColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xefe30e0
	// Params: [ Num(1) Size(0x10) ]
	void SetFillColorAndOpacity(struct FLinearColor InColor);

	// Object: Function UMG.ProgressBar.SetBidirectionalValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a4b0
	// Params: [ Num(2) Size(0x8) ]
	void SetBidirectionalValue(float InLeftValue, float InRightValue);

	// Object: Function UMG.ProgressBar.SetBidirectionalRightValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a40c
	// Params: [ Num(1) Size(0x4) ]
	void SetBidirectionalRightValue(float InRightValue);

	// Object: Function UMG.ProgressBar.SetBidirectionalLeftValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a368
	// Params: [ Num(1) Size(0x4) ]
	void SetBidirectionalLeftValue(float InLeftValue);
};

// Object: Class UMG.RadialImage
// Size: 0x268 (Inherited: 0x158)
struct URadialImage : UWidget
{
	DEFINE_UE_CLASS_HELPERS(URadialImage, "RadialImage")

	struct FSlateBrush Brush; // 0x158(0x90)
	struct FDelegate BrushDelegate; // 0x1E8(0x10)
	float Percent; // 0x1F8(0x4)
	ERadialImageFillType FillType; // 0x1FC(0x1)
	uint8_t Pad_0x1FD[0x3]; // 0x1FD(0x3)
	struct FDelegate PercentDelegate; // 0x200(0x10)
	uint8_t bClockWise : 1; // 0x210(0x1), Mask(0x1)
	uint8_t BitPad_0x210_1 : 7; // 0x210(0x1)
	uint8_t Pad_0x211[0x3]; // 0x211(0x3)
	struct FDelegate bClockWiseDelegate; // 0x214(0x10)
	struct FLinearColor ColorAndOpacity; // 0x224(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x234(0x10)
	uint8_t bFlipForRightToLeftFlowDirection : 1; // 0x244(0x1), Mask(0x1)
	uint8_t BitPad_0x244_1 : 7; // 0x244(0x1)
	uint8_t Pad_0x245[0x3]; // 0x245(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x248(0x10)
	uint8_t Pad_0x258[0x10]; // 0x258(0x10)

	// Object: Function UMG.RadialImage.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe65d248
	// Params: [ Num(1) Size(0x4) ]
	void SetPercent(float InPercent);

	// Object: Function UMG.RadialImage.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a978
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.RadialImage.SetIsClockWise
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a8cc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsClockWise(uint8_t InClockWise);

	// Object: Function UMG.RadialImage.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xed50fb8
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.RadialImage.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a738
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function UMG.RadialImage.SetBrushSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1666a698
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushSize(struct FVector2D DesiredSize);

	// Object: Function UMG.RadialImage.SetBrushResourceObject
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf9b0040
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushResourceObject(struct UObject* ResourceObject);

	// Object: Function UMG.RadialImage.SetBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xe9d6890
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.RadialImage.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666a664
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.RetainerBox
// Size: 0x1A0 (Inherited: 0x170)
struct URetainerBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(URetainerBox, "RetainerBox")

	uint8_t bRetainRender : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t bPreviewInDesign : 1; // 0x16B(0x1), Mask(0x1)
	uint8_t RenderOnInvalidation : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t RenderOnPhase : 1; // 0x16D(0x1), Mask(0x1)
	int32_t Phase; // 0x170(0x4)
	int32_t PhaseCount; // 0x174(0x4)
	uint8_t bDisableLocalTransform : 1; // 0x178(0x1), Mask(0x1)
	uint8_t bDisableSlate3DRender : 1; // 0x178(0x1), Mask(0x2)
	uint8_t BitPad_0x178_6 : 2; // 0x178(0x1)
	uint8_t Pad_0x179[0x7]; // 0x179(0x7)
	struct UMaterialInterface* EffectMaterial; // 0x180(0x8)
	struct FName TextureParameter; // 0x188(0x8)
	uint8_t Pad_0x190[0x10]; // 0x190(0x10)

	// Object: Function UMG.RetainerBox.SetTextureParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666acbc
	// Params: [ Num(1) Size(0x8) ]
	void SetTextureParameter(struct FName TextureParameter);

	// Object: Function UMG.RetainerBox.SetRetainRendering
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ac10
	// Params: [ Num(1) Size(0x1) ]
	void SetRetainRendering(uint8_t bInRetainRendering);

	// Object: Function UMG.RetainerBox.SetRenderingPhase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ab34
	// Params: [ Num(2) Size(0x8) ]
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);

	// Object: Function UMG.RetainerBox.SetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666aa90
	// Params: [ Num(1) Size(0x8) ]
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial);

	// Object: Function UMG.RetainerBox.RequestRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666aa7c
	// Params: [ Num(0) Size(0x0) ]
	void RequestRender();

	// Object: Function UMG.RetainerBox.GetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666aa48
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetEffectMaterial();
};

// Object: Class UMG.SafeZone
// Size: 0x180 (Inherited: 0x170)
struct USafeZone : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(USafeZone, "SafeZone")

	uint8_t PadLeft : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t PadRight : 1; // 0x16B(0x1), Mask(0x1)
	uint8_t PadTop : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t PadBottom : 1; // 0x16D(0x1), Mask(0x1)
	uint8_t BitPad_0x170_4 : 4; // 0x170(0x1)
	uint8_t Pad_0x171[0xF]; // 0x171(0xF)

	// Object: Function UMG.SafeZone.SetSidesToPad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666c648
	// Params: [ Num(4) Size(0x4) ]
	void SetSidesToPad(uint8_t InPadLeft, uint8_t InPadRight, uint8_t InPadTop, uint8_t InPadBottom);
};

// Object: Class UMG.ScaleBox
// Size: 0x188 (Inherited: 0x170)
struct UScaleBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UScaleBox, "ScaleBox")

	EStretch Stretch; // 0x16A(0x1)
	EStretchDirection StretchDirection; // 0x16B(0x1)
	float UserSpecifiedScale; // 0x16C(0x4)
	uint8_t IgnoreInheritedScale : 1; // 0x170(0x1), Mask(0x1)
	uint8_t CheckExceedBounds : 1; // 0x171(0x1), Mask(0x1)
	uint8_t BitPad_0x176_2 : 6; // 0x176(0x1)
	uint8_t Pad_0x177[0x11]; // 0x177(0x11)

	// Object: Function UMG.ScaleBox.SetUserSpecifiedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666c998
	// Params: [ Num(1) Size(0x4) ]
	void SetUserSpecifiedScale(float InUserSpecifiedScale);

	// Object: Function UMG.ScaleBox.SetStretchDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666c8f4
	// Params: [ Num(1) Size(0x1) ]
	void SetStretchDirection(EStretchDirection InStretchDirection);

	// Object: Function UMG.ScaleBox.SetStretch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf0d8dc0
	// Params: [ Num(1) Size(0x1) ]
	void SetStretch(EStretch InStretch);

	// Object: Function UMG.ScaleBox.SetIgnoreInheritedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666c848
	// Params: [ Num(1) Size(0x1) ]
	void SetIgnoreInheritedScale(uint8_t bInIgnoreInheritedScale);

	// Object: Function UMG.ScaleBox.SetCheckExceedBounds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106fd254
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckExceedBounds(uint8_t bInCheckExceedBounds);
};

// Object: Class UMG.Slider
// Size: 0x578 (Inherited: 0x158)
struct USlider : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USlider, "Slider")

	float Value; // 0x158(0x4)
	struct FDelegate ValueDelegate; // 0x15C(0x10)
	float MinValue; // 0x16C(0x4)
	float MaxValue; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct FSliderStyle WidgetStyle; // 0x178(0x370)
	EOrientation Orientation; // 0x4E8(0x1)
	uint8_t Pad_0x4E9[0x3]; // 0x4E9(0x3)
	struct FLinearColor SliderBarColor; // 0x4EC(0x10)
	struct FLinearColor SliderHandleColor; // 0x4FC(0x10)
	uint8_t IndentHandle : 1; // 0x50C(0x1), Mask(0x1)
	uint8_t BitPad_0x50C_1 : 7; // 0x50C(0x1)
	uint8_t Locked : 1; // 0x50D(0x1), Mask(0x1)
	uint8_t BitPad_0x50D_1 : 7; // 0x50D(0x1)
	uint8_t MouseUsesStep : 1; // 0x50E(0x1), Mask(0x1)
	uint8_t BitPad_0x50E_1 : 7; // 0x50E(0x1)
	uint8_t RequiresControllerLock : 1; // 0x50F(0x1), Mask(0x1)
	uint8_t BitPad_0x50F_1 : 7; // 0x50F(0x1)
	float StepSize; // 0x510(0x4)
	uint8_t IsFocusable : 1; // 0x514(0x1), Mask(0x1)
	uint8_t BitPad_0x514_1 : 7; // 0x514(0x1)
	uint8_t Pad_0x515[0x3]; // 0x515(0x3)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x518(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x528(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x538(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x548(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x558(0x10)
	uint8_t Pad_0x568[0x10]; // 0x568(0x10)

	// Object: Function UMG.Slider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf0dfd48
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function UMG.Slider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166701a4
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function UMG.Slider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16670100
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function UMG.Slider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1667005c
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderBarColor(struct FLinearColor InValue);

	// Object: Function UMG.Slider.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ffb8
	// Params: [ Num(1) Size(0x4) ]
	void SetMinValue(float InValue);

	// Object: Function UMG.Slider.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666ff14
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxValue(float InValue);

	// Object: Function UMG.Slider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666fe68
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(uint8_t InValue);

	// Object: Function UMG.Slider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666fdbc
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(uint8_t InValue);

	// Object: Function UMG.Slider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666fd88
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function UMG.Slider.GetNormalizedValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1666fd54
	// Params: [ Num(1) Size(0x4) ]
	float GetNormalizedValue();
};

// Object: Class UMG.Spacer
// Size: 0x170 (Inherited: 0x158)
struct USpacer : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USpacer, "Spacer")

	struct FVector2D size; // 0x158(0x8)
	uint8_t Pad_0x160[0x10]; // 0x160(0x10)

	// Object: Function UMG.Spacer.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166702a4
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FVector2D InSize);
};

// Object: Class UMG.SpinBox
// Size: 0x588 (Inherited: 0x158)
struct USpinBox : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USpinBox, "SpinBox")

	float Value; // 0x158(0x4)
	struct FDelegate ValueDelegate; // 0x15C(0x10)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct FSpinBoxStyle WidgetStyle; // 0x170(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x480(0x8)
	float Delta; // 0x488(0x4)
	float SliderExponent; // 0x48C(0x4)
	struct FSlateFontInfo Font; // 0x490(0x58)
	ETextJustify Justification; // 0x4E8(0x1)
	uint8_t Pad_0x4E9[0x3]; // 0x4E9(0x3)
	float MinDesiredWidth; // 0x4EC(0x4)
	uint8_t ClearKeyboardFocusOnCommit : 1; // 0x4F0(0x1), Mask(0x1)
	uint8_t BitPad_0x4F0_1 : 7; // 0x4F0(0x1)
	uint8_t SelectAllTextOnCommit : 1; // 0x4F1(0x1), Mask(0x1)
	uint8_t BitPad_0x4F1_1 : 7; // 0x4F1(0x1)
	uint8_t Pad_0x4F2[0x6]; // 0x4F2(0x6)
	struct FSlateColor ForegroundColor; // 0x4F8(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x520(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x530(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x540(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x550(0x10)
	uint8_t bOverride_MinValue : 1; // 0x560(0x1), Mask(0x1)
	uint8_t bOverride_MaxValue : 1; // 0x560(0x1), Mask(0x2)
	uint8_t bOverride_MinSliderValue : 1; // 0x560(0x1), Mask(0x4)
	uint8_t bOverride_MaxSliderValue : 1; // 0x560(0x1), Mask(0x8)
	uint8_t BitPad_0x560_4 : 4; // 0x560(0x1)
	uint8_t Pad_0x561[0x3]; // 0x561(0x3)
	float MinValue; // 0x564(0x4)
	float MaxValue; // 0x568(0x4)
	float MinSliderValue; // 0x56C(0x4)
	float MaxSliderValue; // 0x570(0x4)
	uint8_t Pad_0x574[0x14]; // 0x574(0x14)

	// Object: Function UMG.SpinBox.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166708c4
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670820
	// Params: [ Num(1) Size(0x4) ]
	void SetMinValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667077c
	// Params: [ Num(1) Size(0x4) ]
	void SetMinSliderValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166706d8
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670634
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxSliderValue(float NewValue);

	// Object: Function UMG.SpinBox.SetForegroundColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166704a0
	// Params: [ Num(1) Size(0x28) ]
	void SetForegroundColor(struct FSlateColor InForegroundColor);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x5) ]
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSpinBoxBeginSliderMovement__DelegateSignature();

	// Object: Function UMG.SpinBox.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667046c
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function UMG.SpinBox.GetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16670438
	// Params: [ Num(1) Size(0x4) ]
	float GetMinValue();

	// Object: Function UMG.SpinBox.GetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16670404
	// Params: [ Num(1) Size(0x4) ]
	float GetMinSliderValue();

	// Object: Function UMG.SpinBox.GetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166703d0
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxValue();

	// Object: Function UMG.SpinBox.GetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667039c
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxSliderValue();

	// Object: Function UMG.SpinBox.ClearMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670388
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinValue();

	// Object: Function UMG.SpinBox.ClearMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670374
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinSliderValue();

	// Object: Function UMG.SpinBox.ClearMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16670360
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxValue();

	// Object: Function UMG.SpinBox.ClearMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667034c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxSliderValue();
};

// Object: Class UMG.TileView
// Size: 0x3D8 (Inherited: 0x3B8)
struct UTileView : UListView
{
	DEFINE_UE_CLASS_HELPERS(UTileView, "TileView")

	float EntryHeight; // 0x3B8(0x4)
	float EntryWidth; // 0x3BC(0x4)
	EListItemAlignment TileAlignment; // 0x3C0(0x1)
	uint8_t bWrapHorizontalNavigation : 1; // 0x3C1(0x1), Mask(0x1)
	uint8_t BitPad_0x3C1_1 : 7; // 0x3C1(0x1)
	uint8_t Pad_0x3C2[0x16]; // 0x3C2(0x16)

	// Object: Function UMG.TileView.SetEntryWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166728b4
	// Params: [ Num(1) Size(0x4) ]
	void SetEntryWidth(float NewWidth);

	// Object: Function UMG.TileView.SetEntryHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672810
	// Params: [ Num(1) Size(0x4) ]
	void SetEntryHeight(float NewHeight);
};

// Object: Class UMG.TreeView
// Size: 0x410 (Inherited: 0x3B8)
struct UTreeView : UListView
{
	DEFINE_UE_CLASS_HELPERS(UTreeView, "TreeView")

	uint8_t Pad_0x3B8[0x10]; // 0x3B8(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x3C8(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3D8(0x10)
	uint8_t Pad_0x3E8[0x28]; // 0x3E8(0x28)

	// Object: Function UMG.TreeView.SetItemExpansion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166729a0
	// Params: [ Num(2) Size(0x9) ]
	void SetItemExpansion(struct UObject* Item, uint8_t bExpandItem);

	// Object: Function UMG.TreeView.ExpandAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667298c
	// Params: [ Num(0) Size(0x0) ]
	void ExpandAll();

	// Object: Function UMG.TreeView.CollapseAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672978
	// Params: [ Num(0) Size(0x0) ]
	void CollapseAll();
};

// Object: Class UMG.UniformGridPanel
// Size: 0x198 (Inherited: 0x170)
struct UUniformGridPanel : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UUniformGridPanel, "UniformGridPanel")

	struct FMargin SlotPadding; // 0x16C(0x10)
	float MinDesiredSlotWidth; // 0x17C(0x4)
	float MinDesiredSlotHeight; // 0x180(0x4)
	uint8_t Pad_0x188[0x10]; // 0x188(0x10)

	// Object: Function UMG.UniformGridPanel.SetSlotPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672eec
	// Params: [ Num(1) Size(0x10) ]
	void SetSlotPadding(struct FMargin InSlotPadding);

	// Object: Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672e48
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);

	// Object: Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672da4
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);

	// Object: Function UMG.UniformGridPanel.AddChildToUniformGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672c84
	// Params: [ Num(4) Size(0x18) ]
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Object: Class UMG.VerticalBox
// Size: 0x190 (Inherited: 0x170)
struct UVerticalBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UVerticalBox, "VerticalBox")

	uint8_t AllowScrollBoxSlot : 1; // 0x16A(0x1), Mask(0x1)
	struct FMargin ContentPadding; // 0x16C(0x10)
	EHorizontalAlignment ContentHorizontalAlignment; // 0x17C(0x1)
	EVerticalAlignment ContentVerticalAlignment; // 0x17D(0x1)
	uint8_t BitPad_0x182_1 : 7; // 0x182(0x1)
	uint8_t Pad_0x183[0xD]; // 0x183(0xD)

	// Object: Function UMG.VerticalBox.SwitchWidgetsByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16678598
	// Params: [ Num(2) Size(0x8) ]
	void SwitchWidgetsByIndex(int32_t Index1, int32_t Index2);

	// Object: Function UMG.VerticalBox.SwitchWidgets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166784bc
	// Params: [ Num(2) Size(0x10) ]
	void SwitchWidgets(struct UWidget* Content1, struct UWidget* Content2);

	// Object: Function UMG.VerticalBox.AddChildToVerticalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16678410
	// Params: [ Num(2) Size(0x10) ]
	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content);
};

// Object: Class UMG.WrapBox
// Size: 0x190 (Inherited: 0x170)
struct UWrapBox : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWrapBox, "WrapBox")

	struct FVector2D InnerSlotPadding; // 0x16C(0x8)
	float WrapWidth; // 0x174(0x4)
	uint8_t bExplicitWrapWidth : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x17C_1 : 7; // 0x17C(0x1)
	uint8_t Pad_0x17D[0x13]; // 0x17D(0x13)

	// Object: Function UMG.WrapBox.SetInnerSlotPadding
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x101a438c
	// Params: [ Num(1) Size(0x8) ]
	void SetInnerSlotPadding(struct FVector2D InPadding);

	// Object: Function UMG.WrapBox.AddChildToWrapBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1668448c
	// Params: [ Num(2) Size(0x10) ]
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content);
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
	struct FVector2D offset; // 0x4C(0x8)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	// Object: Function UMG.DragDropOperation.Drop
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x1665df04
	// Params: [ Num(1) Size(0x70) ]
	void Drop(const struct FPointerEvent& PointerEvent);

	// Object: Function UMG.DragDropOperation.Dragged
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x1665dda8
	// Params: [ Num(1) Size(0x70) ]
	void Dragged(const struct FPointerEvent& PointerEvent);

	// Object: Function UMG.DragDropOperation.DragCancelled
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x1665dc4c
	// Params: [ Num(1) Size(0x70) ]
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Object: Class UMG.WidgetComponent
// Size: 0x820 (Inherited: 0x6F0)
struct UWidgetComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UWidgetComponent, "WidgetComponent")

	EWidgetSpace Space; // 0x6E1(0x1)
	EWidgetTimingPolicy TimingPolicy; // 0x6E2(0x1)
	struct UUserWidget* WidgetClass; // 0x6E8(0x8)
	struct FIntPoint DrawSize; // 0x6F0(0x8)
	uint8_t bManuallyRedraw : 1; // 0x6F8(0x1), Mask(0x1)
	uint8_t bRedrawRequested : 1; // 0x6F9(0x1), Mask(0x1)
	float RedrawTime; // 0x6FC(0x4)
	uint8_t BitPad_0x706_2 : 6; // 0x706(0x1)
	uint8_t Pad_0x707[0x1]; // 0x707(0x1)
	struct FIntPoint CurrentDrawSize; // 0x708(0x8)
	uint8_t bDrawAtDesiredSize : 1; // 0x710(0x1), Mask(0x1)
	uint8_t BitPad_0x710_1 : 7; // 0x710(0x1)
	uint8_t bUseRTScale : 1; // 0x711(0x1), Mask(0x1)
	uint8_t BitPad_0x711_1 : 7; // 0x711(0x1)
	uint8_t Pad_0x712[0x6]; // 0x712(0x6)
	struct TArray<struct FRTScaleDistanceFactorPair> ScaleDistanceFactorPairs; // 0x718(0x10)
	struct FVector2D Pivot; // 0x728(0x8)
	uint8_t bReceiveHardwareInput : 1; // 0x730(0x1), Mask(0x1)
	uint8_t BitPad_0x730_1 : 7; // 0x730(0x1)
	uint8_t bWindowFocusable : 1; // 0x731(0x1), Mask(0x1)
	uint8_t BitPad_0x731_1 : 7; // 0x731(0x1)
	EWindowVisibility WindowVisibility; // 0x732(0x1)
	uint8_t bShowWidgetInEditor : 1; // 0x733(0x1), Mask(0x1)
	uint8_t BitPad_0x733_1 : 7; // 0x733(0x1)
	uint8_t bApplyGammaCorrection : 1; // 0x734(0x1), Mask(0x1)
	uint8_t BitPad_0x734_1 : 7; // 0x734(0x1)
	uint8_t Pad_0x735[0x3]; // 0x735(0x3)
	struct ULocalPlayer* OwnerPlayer; // 0x738(0x8)
	struct FLinearColor BackgroundColor; // 0x740(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x750(0x10)
	float OpacityFromTexture; // 0x760(0x4)
	EWidgetBlendMode BlendMode; // 0x764(0x1)
	uint8_t bIsTwoSided : 1; // 0x765(0x1), Mask(0x1)
	uint8_t BitPad_0x765_1 : 7; // 0x765(0x1)
	uint8_t TickWhenOffscreen : 1; // 0x766(0x1), Mask(0x1)
	uint8_t BitPad_0x766_1 : 7; // 0x766(0x1)
	uint8_t Pad_0x767[0x1]; // 0x767(0x1)
	struct UUserWidget* Widget; // 0x768(0x8)
	uint8_t Pad_0x770[0x20]; // 0x770(0x20)
	struct UBodySetup* BodySetup; // 0x790(0x8)
	struct UMaterialInterface* TranslucentMaterial; // 0x798(0x8)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x7A0(0x8)
	struct UMaterialInterface* OpaqueMaterial; // 0x7A8(0x8)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x7B0(0x8)
	struct UMaterialInterface* MaskedMaterial; // 0x7B8(0x8)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x7C0(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x7C8(0x8)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x7D0(0x8)
	uint8_t bAddedToScreen : 1; // 0x7D8(0x1), Mask(0x1)
	uint8_t BitPad_0x7D8_1 : 7; // 0x7D8(0x1)
	uint8_t bEditTimeUsable : 1; // 0x7D9(0x1), Mask(0x1)
	uint8_t BitPad_0x7D9_1 : 7; // 0x7D9(0x1)
	uint8_t Pad_0x7DA[0x2]; // 0x7DA(0x2)
	struct FName SharedLayerName; // 0x7DC(0x8)
	int32_t LayerZorder; // 0x7E4(0x4)
	EWidgetGeometryMode GeometryMode; // 0x7E8(0x1)
	uint8_t Pad_0x7E9[0x3]; // 0x7E9(0x3)
	float CylinderArcAngle; // 0x7EC(0x4)
	uint8_t Pad_0x7F0[0x30]; // 0x7F0(0x30)

	// Object: Function UMG.WidgetComponent.SetWindowVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681434
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowVisibility(EWindowVisibility InVisibility);

	// Object: Function UMG.WidgetComponent.SetWindowFocusable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681388
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowFocusable(uint8_t bInWindowFocusable);

	// Object: Function UMG.WidgetComponent.SetWidgetSpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166812e8
	// Params: [ Num(1) Size(0x1) ]
	void SetWidgetSpace(EWidgetSpace NewSpace);

	// Object: Function UMG.WidgetComponent.SetWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1668123c
	// Params: [ Num(1) Size(0x8) ]
	void SetWidget(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetComponent.SetTwoSided
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681190
	// Params: [ Num(1) Size(0x1) ]
	void SetTwoSided(uint8_t bWantTwoSided);

	// Object: Function UMG.WidgetComponent.SetTintColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166810ec
	// Params: [ Num(1) Size(0x10) ]
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity);

	// Object: Function UMG.WidgetComponent.SetTickWhenOffscreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681044
	// Params: [ Num(1) Size(0x1) ]
	void SetTickWhenOffscreen(uint8_t bWantTickWhenOffscreen);

	// Object: Function UMG.WidgetComponent.SetRedrawTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16680fa4
	// Params: [ Num(1) Size(0x4) ]
	void SetRedrawTime(float InRedrawTime);

	// Object: Function UMG.WidgetComponent.SetPivot
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x16680ef4
	// Params: [ Num(1) Size(0x8) ]
	void SetPivot(const struct FVector2D& InPivot);

	// Object: Function UMG.WidgetComponent.SetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16680e50
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer);

	// Object: Function UMG.WidgetComponent.SetManuallyRedraw
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16680da4
	// Params: [ Num(1) Size(0x1) ]
	void SetManuallyRedraw(uint8_t bUseManualRedraw);

	// Object: Function UMG.WidgetComponent.SetGeometryMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16680d04
	// Params: [ Num(1) Size(0x1) ]
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);

	// Object: Function UMG.WidgetComponent.SetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16680c64
	// Params: [ Num(1) Size(0x8) ]
	void SetDrawSize(struct FVector2D size);

	// Object: Function UMG.WidgetComponent.SetDrawAtDesiredSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16680bbc
	// Params: [ Num(1) Size(0x1) ]
	void SetDrawAtDesiredSize(uint8_t bInDrawAtDesiredSize);

	// Object: Function UMG.WidgetComponent.SetCylinderArcAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16680b1c
	// Params: [ Num(1) Size(0x4) ]
	void SetCylinderArcAngle(float InCylinderArcAngle);

	// Object: Function UMG.WidgetComponent.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16680a78
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor);

	// Object: Function UMG.WidgetComponent.RequestRedraw
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16680a5c
	// Params: [ Num(0) Size(0x0) ]
	void RequestRedraw();

	// Object: Function UMG.WidgetComponent.GetWindowVisiblility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680a40
	// Params: [ Num(1) Size(0x1) ]
	EWindowVisibility GetWindowVisiblility();

	// Object: Function UMG.WidgetComponent.GetWindowFocusable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680a24
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWindowFocusable();

	// Object: Function UMG.WidgetComponent.GetWidgetSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680a08
	// Params: [ Num(1) Size(0x1) ]
	EWidgetSpace GetWidgetSpace();

	// Object: Function UMG.WidgetComponent.GetUserWidgetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166809d4
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetUserWidgetObject();

	// Object: Function UMG.WidgetComponent.GetTwoSided
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166809b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetTwoSided();

	// Object: Function UMG.WidgetComponent.GetTickWhenOffscreen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1668099c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetTickWhenOffscreen();

	// Object: Function UMG.WidgetComponent.GetRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680968
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetRenderTarget();

	// Object: Function UMG.WidgetComponent.GetRedrawTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1668094c
	// Params: [ Num(1) Size(0x4) ]
	float GetRedrawTime();

	// Object: Function UMG.WidgetComponent.GetPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680930
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPivot();

	// Object: Function UMG.WidgetComponent.GetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166808fc
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwnerPlayer();

	// Object: Function UMG.WidgetComponent.GetMaterialInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166808c8
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetMaterialInstance();

	// Object: Function UMG.WidgetComponent.GetManuallyRedraw
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166808ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetManuallyRedraw();

	// Object: Function UMG.WidgetComponent.GetGeometryMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680890
	// Params: [ Num(1) Size(0x1) ]
	EWidgetGeometryMode GetGeometryMode();

	// Object: Function UMG.WidgetComponent.GetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1668085c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDrawSize();

	// Object: Function UMG.WidgetComponent.GetDrawAtDesiredSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680840
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetDrawAtDesiredSize();

	// Object: Function UMG.WidgetComponent.GetCylinderArcAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16680824
	// Params: [ Num(1) Size(0x4) ]
	float GetCylinderArcAngle();

	// Object: Function UMG.WidgetComponent.GetCurrentDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166807f0
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetCurrentDrawSize();
};

// Object: Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UAsyncTaskDownloadImage, "AsyncTaskDownloadImage")

	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	// Object: Function UMG.AsyncTaskDownloadImage.DownloadImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x16659cc4
	// Params: [ Num(2) Size(0x18) ]
	static struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL);
};

// Object: Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UBackgroundBlurSlot, "BackgroundBlurSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)

	// Object: Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a798
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.BackgroundBlurSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a6f0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665a64c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.BlueprintWhiteListConfig
// Size: 0x48 (Inherited: 0x38)
struct UBlueprintWhiteListConfig : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UBlueprintWhiteListConfig, "BlueprintWhiteListConfig")

	struct TArray<struct FString> TickBlueprintWhiteList; // 0x38(0x10)
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
	// Offset: 0x1665a850
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetValue();
};

// Object: Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UBorderSlot, "BorderSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)

	// Object: Function UMG.BorderSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665afcc
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.BorderSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf0dfdec
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BorderSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665af28
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UBrushBinding, "BrushBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.BrushBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1665b078
	// Params: [ Num(1) Size(0x90) ]
	struct FSlateBrush GetValue();
};

// Object: Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UButtonSlot, "ButtonSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)

	// Object: Function UMG.ButtonSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b710
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.ButtonSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b668
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ButtonSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665b5c4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.CanvasPanelSlot
// Size: 0x70 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UCanvasPanelSlot, "CanvasPanelSlot")

	struct FAnchorData LayoutData; // 0x38(0x28)
	uint8_t bAutoSize : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t ZOrder; // 0x64(0x4)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)

	// Object: Function UMG.CanvasPanelSlot.SetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665bdc4
	// Params: [ Num(1) Size(0x4) ]
	void SetZOrder(int32_t InZOrder);

	// Object: Function UMG.CanvasPanelSlot.SetSublingIndex
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x1665bd20
	// Params: [ Num(1) Size(0x4) ]
	void SetSublingIndex(int32_t InSublingIndex);

	// Object: Function UMG.CanvasPanelSlot.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe63d030
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FVector2D InSize);

	// Object: Function UMG.CanvasPanelSlot.SetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe63da48
	// Params: [ Num(1) Size(0x8) ]
	void SetPosition(struct FVector2D InPosition);

	// Object: Function UMG.CanvasPanelSlot.SetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe63f534
	// Params: [ Num(1) Size(0x10) ]
	void SetOffsets(struct FMargin InOffset);

	// Object: Function UMG.CanvasPanelSlot.SetMinimum
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xefaebb4
	// Params: [ Num(1) Size(0x8) ]
	void SetMinimum(struct FVector2D InMinimumAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetMaximum
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xef9c960
	// Params: [ Num(1) Size(0x8) ]
	void SetMaximum(struct FVector2D InMaximumAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetLayout
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xefb09b4
	// Params: [ Num(1) Size(0x28) ]
	void SetLayout(const struct FAnchorData& InLayoutData);

	// Object: Function UMG.CanvasPanelSlot.SetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf63605c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoSize(uint8_t InbAutoSize);

	// Object: Function UMG.CanvasPanelSlot.SetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef27270
	// Params: [ Num(1) Size(0x10) ]
	void SetAnchors(struct FAnchors InAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xe6430a4
	// Params: [ Num(1) Size(0x8) ]
	void SetAlignment(struct FVector2D InAlignment);

	// Object: Function UMG.CanvasPanelSlot.GetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665bcec
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetZOrder();

	// Object: Function UMG.CanvasPanelSlot.GetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665bc54
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetSize();

	// Object: Function UMG.CanvasPanelSlot.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665bbb0
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPosition();

	// Object: Function UMG.CanvasPanelSlot.GetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665baf0
	// Params: [ Num(1) Size(0x10) ]
	struct FMargin GetOffsets();

	// Object: Function UMG.CanvasPanelSlot.GetLayout
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665ba84
	// Params: [ Num(1) Size(0x28) ]
	struct FAnchorData GetLayout();

	// Object: Function UMG.CanvasPanelSlot.GetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665ba4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetAutoSize();

	// Object: Function UMG.CanvasPanelSlot.GetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665b98c
	// Params: [ Num(1) Size(0x10) ]
	struct FAnchors GetAnchors();

	// Object: Function UMG.CanvasPanelSlot.GetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665b958
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetAlignment();
};

// Object: Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UCheckedStateBinding, "CheckedStateBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.CheckedStateBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1665c0f0
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetValue();
};

// Object: Class UMG.CircularThrobber
// Size: 0x218 (Inherited: 0x158)
struct UCircularThrobber : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UCircularThrobber, "CircularThrobber")

	int32_t NumberOfPieces; // 0x158(0x4)
	float Period; // 0x15C(0x4)
	float radius; // 0x160(0x4)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct USlateBrushAsset* PieceImage; // 0x168(0x8)
	struct FSlateBrush Image; // 0x170(0x90)
	uint8_t bEnableRadius : 1; // 0x200(0x1), Mask(0x1)
	uint8_t BitPad_0x200_1 : 7; // 0x200(0x1)
	uint8_t Pad_0x201[0x17]; // 0x201(0x17)

	// Object: Function UMG.CircularThrobber.SetRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665cf98
	// Params: [ Num(1) Size(0x4) ]
	void SetRadius(float InRadius);

	// Object: Function UMG.CircularThrobber.SetPeriod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665cef4
	// Params: [ Num(1) Size(0x4) ]
	void SetPeriod(float InPeriod);

	// Object: Function UMG.CircularThrobber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665ce50
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
	// Offset: 0x1665d050
	// Params: [ Num(1) Size(0x28) ]
	struct FSlateColor GetSlateValue();

	// Object: Function UMG.ColorBinding.GetLinearValue
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xf6840a8
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLinearValue();
};

// Object: Class UMG.ComboBox
// Size: 0x190 (Inherited: 0x158)
struct UComboBox : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UComboBox, "ComboBox")

	struct TArray<struct UObject*> Items; // 0x158(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x168(0x10)
	uint8_t bIsFocusable : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t Pad_0x179[0x17]; // 0x179(0x17)
};

// Object: Class UMG.DynamicEntryBoxBase
// Size: 0x218 (Inherited: 0x158)
struct UDynamicEntryBoxBase : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDynamicEntryBoxBase, "DynamicEntryBoxBase")

	EDynamicBoxType EntryBoxType; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	struct FVector2D EntrySpacing; // 0x15C(0x8)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct TArray<struct FVector2D> SpacingPattern; // 0x168(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x178(0x8)
	EHorizontalAlignment EntryHorizontalAlignment; // 0x180(0x1)
	EVerticalAlignment EntryVerticalAlignment; // 0x181(0x1)
	uint8_t Pad_0x182[0x2]; // 0x182(0x2)
	int32_t MaxElementSize; // 0x184(0x4)
	uint8_t Pad_0x188[0x10]; // 0x188(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x198(0x80)

	// Object: Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1665e3cc
	// Params: [ Num(1) Size(0x8) ]
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);

	// Object: Function UMG.DynamicEntryBoxBase.GetNumEntries
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665e398
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumEntries();

	// Object: Function UMG.DynamicEntryBoxBase.GetAllEntries
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1665e314
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UUserWidget*> GetAllEntries();
};

// Object: Class UMG.DynamicEntryBox
// Size: 0x220 (Inherited: 0x218)
struct UDynamicEntryBox : UDynamicEntryBoxBase
{
	DEFINE_UE_CLASS_HELPERS(UDynamicEntryBox, "DynamicEntryBox")

	struct UUserWidget* EntryWidgetClass; // 0x218(0x8)

	// Object: Function UMG.DynamicEntryBox.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e1ec
	// Params: [ Num(1) Size(0x1) ]
	void Reset(uint8_t bDeleteWidgets);

	// Object: Function UMG.DynamicEntryBox.RemoveEntry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1665e148
	// Params: [ Num(1) Size(0x8) ]
	void RemoveEntry(struct UUserWidget* EntryWidget);

	// Object: Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x1665e09c
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass);

	// Object: Function UMG.DynamicEntryBox.BP_CreateEntry
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x1665e068
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* BP_CreateEntry();
};

// Object: Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UFloatBinding, "FloatBinding")

	// Object: Function UMG.FloatBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1665fd18
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();
};

// Object: Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UGridSlot, "GridSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	int32_t Row; // 0x4C(0x4)
	int32_t RowSpan; // 0x50(0x4)
	int32_t Column; // 0x54(0x4)
	int32_t ColumnSpan; // 0x58(0x4)
	int32_t Layer; // 0x5C(0x4)
	struct FVector2D Nudge; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)

	// Object: Function UMG.GridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666042c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.GridSlot.SetRowSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16660388
	// Params: [ Num(1) Size(0x4) ]
	void SetRowSpan(int32_t InRowSpan);

	// Object: Function UMG.GridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf8636c8
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMG.GridSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf5a25f0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.GridSlot.SetNudge
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xfaf053c
	// Params: [ Num(1) Size(0x8) ]
	void SetNudge(struct FVector2D InNudge);

	// Object: Function UMG.GridSlot.SetLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166602e4
	// Params: [ Num(1) Size(0x4) ]
	void SetLayer(int32_t InLayer);

	// Object: Function UMG.GridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16660240
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	// Object: Function UMG.GridSlot.SetColumnSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666019c
	// Params: [ Num(1) Size(0x4) ]
	void SetColumnSpan(int32_t InColumnSpan);

	// Object: Function UMG.GridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf863518
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);
};

// Object: Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UHorizontalBoxSlot, "HorizontalBoxSlot")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize size; // 0x50(0x8)
	EHorizontalAlignment HorizontalAlignment; // 0x58(0x1)
	EVerticalAlignment VerticalAlignment; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)

	// Object: Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe65c87c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.HorizontalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1078bf70
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FSlateChildSize InSize);

	// Object: Function UMG.HorizontalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe65bebc
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1073f69c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.InputKeySelector
// Size: 0x790 (Inherited: 0x158)
struct UInputKeySelector : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UInputKeySelector, "InputKeySelector")

	struct FButtonStyle WidgetStyle; // 0x158(0x298)
	struct FTextBlockStyle TextStyle; // 0x3F0(0x290)
	struct FInputChord SelectedKey; // 0x680(0x20)
	struct FSlateFontInfo Font; // 0x6A0(0x58)
	struct FMargin Margin; // 0x6F8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x708(0x10)
	struct FText KeySelectionText; // 0x718(0x18)
	struct FText NoKeySpecifiedText; // 0x730(0x18)
	uint8_t bAllowModifierKeys : 1; // 0x748(0x1), Mask(0x1)
	uint8_t BitPad_0x748_1 : 7; // 0x748(0x1)
	uint8_t bAllowGamepadKeys : 1; // 0x749(0x1), Mask(0x1)
	uint8_t BitPad_0x749_1 : 7; // 0x749(0x1)
	uint8_t Pad_0x74A[0x6]; // 0x74A(0x6)
	struct TArray<struct FKey> EscapeKeys; // 0x750(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x760(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x770(0x10)
	uint8_t Pad_0x780[0x10]; // 0x780(0x10)

	// Object: Function UMG.InputKeySelector.SetTextBlockVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666140c
	// Params: [ Num(1) Size(0x1) ]
	void SetTextBlockVisibility(ESlateVisibility InVisibility);

	// Object: Function UMG.InputKeySelector.SetSelectedKey
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166612c8
	// Params: [ Num(1) Size(0x20) ]
	void SetSelectedKey(const struct FInputChord& InSelectedKey);

	// Object: Function UMG.InputKeySelector.SetNoKeySpecifiedText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16661148
	// Params: [ Num(1) Size(0x18) ]
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText);

	// Object: Function UMG.InputKeySelector.SetKeySelectionText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16660fc8
	// Params: [ Num(1) Size(0x18) ]
	void SetKeySelectionText(struct FText InKeySelectionText);

	// Object: Function UMG.InputKeySelector.SetEscapeKeys
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16660f0c
	// Params: [ Num(1) Size(0x10) ]
	void SetEscapeKeys(const struct TArray<struct FKey>& InKeys);

	// Object: Function UMG.InputKeySelector.SetAllowModifierKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16660e60
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowModifierKeys(uint8_t bInAllowModifierKeys);

	// Object: Function UMG.InputKeySelector.SetAllowGamepadKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16660db4
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowGamepadKeys(uint8_t bInAllowGamepadKeys);

	// Object: DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x20) ]
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey);

	// Object: DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnIsSelectingKeyChanged__DelegateSignature();

	// Object: Function UMG.InputKeySelector.GetIsSelectingKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16660d7c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsSelectingKey();
};

// Object: Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UInt32Binding, "Int32Binding")

	// Object: Function UMG.Int32Binding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1019bb20
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetValue();
};

// Object: Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct IUserListEntry : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IUserListEntry, "UserListEntry")

	// Object: Function UMG.UserListEntry.BP_OnItemSelectionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemSelectionChanged(uint8_t bIsSelected);

	// Object: Function UMG.UserListEntry.BP_OnItemExpansionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemExpansionChanged(uint8_t bIsExpanded);

	// Object: Function UMG.UserListEntry.BP_OnEntryReleased
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
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
	// Offset: 0x16661a7c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry);

	// Object: Function UMG.UserListEntryLibrary.IsListItemExpanded
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x166619c4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry);

	// Object: Function UMG.UserListEntryLibrary.GetOwningListView
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16661910
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
	// Offset: 0x101d2e88
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
	// Offset: 0x16661bdc
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
};

// Object: Class UMG.Line
// Size: 0x1B0 (Inherited: 0x158)
struct ULine : UWidget
{
	DEFINE_UE_CLASS_HELPERS(ULine, "Line")

	struct FLinearColor ColorAndOpacity; // 0x158(0x10)
	ELineWidgetOrientation Orientation; // 0x168(0x1)
	uint8_t Pad_0x169[0x3]; // 0x169(0x3)
	float Thickness; // 0x16C(0x4)
	struct FDelegate ColorAndOpacityDelegate; // 0x170(0x10)
	struct FDelegate ThicknessDelegate; // 0x180(0x10)
	struct FDelegate OnMouseButtonDownEvent; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x10]; // 0x1A0(0x10)

	// Object: Function UMG.Line.SetThickness
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16661d3c
	// Params: [ Num(1) Size(0x4) ]
	void SetThickness(float InThickness);

	// Object: Function UMG.Line.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16661c98
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.Line.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xfabc714
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);
};

// Object: Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject
{
	DEFINE_UE_CLASS_HELPERS(UListViewDesignerPreviewItem, "ListViewDesignerPreviewItem")
};

// Object: Class UMG.MenuAnchor
// Size: 0x1B0 (Inherited: 0x170)
struct UMenuAnchor : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UMenuAnchor, "MenuAnchor")

	struct UUserWidget* MenuClass; // 0x170(0x8)
	struct FDelegate OnGetMenuContentEvent; // 0x178(0x10)
	EMenuPlacement Placement; // 0x188(0x1)
	uint8_t bFitInWindow : 1; // 0x189(0x1), Mask(0x1)
	uint8_t BitPad_0x189_1 : 7; // 0x189(0x1)
	uint8_t ShouldDeferPaintingAfterWindowContent : 1; // 0x18A(0x1), Mask(0x1)
	uint8_t BitPad_0x18A_1 : 7; // 0x18A(0x1)
	uint8_t UseApplicationMenuStack : 1; // 0x18B(0x1), Mask(0x1)
	uint8_t BitPad_0x18B_1 : 7; // 0x18B(0x1)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x10]; // 0x1A0(0x10)

	// Object: Function UMG.MenuAnchor.ToggleOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166644bc
	// Params: [ Num(1) Size(0x1) ]
	void ToggleOpen(uint8_t bFocusOnOpen);

	// Object: Function UMG.MenuAnchor.ShouldOpenDueToClick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16664484
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldOpenDueToClick();

	// Object: Function UMG.MenuAnchor.SetPlacement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166643e0
	// Params: [ Num(1) Size(0x1) ]
	void SetPlacement(EMenuPlacement InPlacement);

	// Object: Function UMG.MenuAnchor.Open
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16664334
	// Params: [ Num(1) Size(0x1) ]
	void Open(uint8_t bFocusMenu);

	// Object: Function UMG.MenuAnchor.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166642fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOpen();

	// Object: Function UMG.MenuAnchor.HasOpenSubMenus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166642c4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasOpenSubMenus();

	// Object: Function UMG.MenuAnchor.GetMenuPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16664290
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMenuPosition();

	// Object: Function UMG.MenuAnchor.FitInWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166641e4
	// Params: [ Num(1) Size(0x1) ]
	void FitInWindow(uint8_t bFit);

	// Object: Function UMG.MenuAnchor.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166641d0
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class UMG.MirrorImage
// Size: 0x2D0 (Inherited: 0x158)
struct UMirrorImage : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UMirrorImage, "MirrorImage")

	uint8_t bCustomize : 1; // 0x158(0x1), Mask(0x1)
	uint8_t BitPad_0x158_1 : 7; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	struct FName StyleId; // 0x15C(0x8)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct FSlateBrush Brush; // 0x168(0x90)
	struct FDelegate BrushDelegate; // 0x1F8(0x10)
	ESlateBrushMirrorType MirrorType; // 0x208(0x1)
	uint8_t Pad_0x209[0x3]; // 0x209(0x3)
	struct FLinearColor ColorAndOpacity; // 0x20C(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x21C(0x10)
	uint8_t bFlipForRightToLeftFlowDirection : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)
	struct TMap<struct FName, struct FLinearColor> ImageStyleMap; // 0x230(0x50)
	uint8_t bPixelFill : 1; // 0x280(0x1), Mask(0x1)
	uint8_t BitPad_0x280_1 : 7; // 0x280(0x1)
	uint8_t Pad_0x281[0x3]; // 0x281(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x284(0x10)
	uint8_t Pad_0x294[0x3C]; // 0x294(0x3C)

	// Object: Function UMG.MirrorImage.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16665694
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.MirrorImage.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166655f0
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.MirrorImage.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666545c
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function UMG.MirrorImage.SetBrushSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166653bc
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushSize(struct FVector2D DesiredSize);

	// Object: Function UMG.MirrorImage.SetBrushResourceObject
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16665310
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushResourceObject(struct UObject* ResourceObject);

	// Object: Function UMG.MirrorImage.SetBrushFromTextureDynamic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16665220
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, uint8_t bMatchSize);

	// Object: Function UMG.MirrorImage.SetBrushFromTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16665130
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTexture(struct UTexture2D* Texture, uint8_t bMatchSize);

	// Object: Function UMG.MirrorImage.SetBrushFromSoftTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16664f94
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, uint8_t bMatchSize);

	// Object: Function UMG.MirrorImage.SetBrushFromSoftMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16664e40
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial);

	// Object: Function UMG.MirrorImage.SetBrushFromSoftAtlasInterfaceWithAmplifiedRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16664c5c
	// Params: [ Num(3) Size(0x2A) ]
	void SetBrushFromSoftAtlasInterfaceWithAmplifiedRate(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate);

	// Object: Function UMG.MirrorImage.SetBrushFromSoftAtlasInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16664ac8
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize);

	// Object: Function UMG.MirrorImage.SetBrushFromMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16664a1c
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.MirrorImage.SetBrushFromAtlasInterfaceWithAmplifiedRate
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x166648d8
	// Params: [ Num(3) Size(0x12) ]
	void SetBrushFromAtlasInterfaceWithAmplifiedRate(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate);

	// Object: Function UMG.MirrorImage.SetBrushFromAtlasInterface
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x166647d8
	// Params: [ Num(2) Size(0x11) ]
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize);

	// Object: Function UMG.MirrorImage.SetBrushFromAsset
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1666472c
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.MirrorImage.SetBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16664610
	// Params: [ Num(1) Size(0x90) ]
	void SetBrush(const struct FSlateBrush& InBrush);

	// Object: Function UMG.MirrorImage.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166645dc
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UMouseCursorBinding, "MouseCursorBinding")

	// Object: Function UMG.MouseCursorBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x166657d0
	// Params: [ Num(1) Size(0x1) ]
	EMouseCursor GetValue();
};

// Object: Class UMG.MovieScene2DTransformSection
// Size: 0x558 (Inherited: 0xE8)
struct UMovieScene2DTransformSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene2DTransformSection, "MovieScene2DTransformSection")

	struct FMovieScene2DTransformMask TransformMask; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct FMovieSceneFloatChannel translation[0x2]; // 0xF0(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x230(0xA0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2D0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x410(0x140)
	uint8_t Pad_0x550[0x8]; // 0x550(0x8)
};

// Object: Class UMG.MovieScene2DTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene2DTransformTrack, "MovieScene2DTransformTrack")
};

// Object: Class UMG.MovieSceneMarginSection
// Size: 0x368 (Inherited: 0xE8)
struct UMovieSceneMarginSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMarginSection, "MovieSceneMarginSection")

	struct FMovieSceneFloatChannel TopCurve; // 0xE8(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x188(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x228(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2C8(0xA0)
};

// Object: Class UMG.MovieSceneMarginTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMarginTrack, "MovieSceneMarginTrack")
};

// Object: Class UMG.MovieSceneWidgetAnimationSection
// Size: 0x1B0 (Inherited: 0x158)
struct UMovieSceneWidgetAnimationSection : UMovieSceneSubSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneWidgetAnimationSection, "MovieSceneWidgetAnimationSection")

	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct TSoftObjectPtr<UWidget> WidgetTemplate; // 0x160(0x28)
	struct TSoftObjectPtr<UWidgetAnimation> AnimationTemplate; // 0x188(0x28)
};

// Object: Class UMG.MovieSceneWidgetAnimationTrack
// Size: 0x80 (Inherited: 0x80)
struct UMovieSceneWidgetAnimationTrack : UMovieSceneSubTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneWidgetAnimationTrack, "MovieSceneWidgetAnimationTrack")
};

// Object: Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneWidgetMaterialTrack, "MovieSceneWidgetMaterialTrack")

	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x8)
};

// Object: Class UMG.MovieSceneWidgetOverrideMaterialTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneWidgetOverrideMaterialTrack : UMovieSceneMaterialTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneWidgetOverrideMaterialTrack, "MovieSceneWidgetOverrideMaterialTrack")
};

// Object: Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct INamedSlotInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INamedSlotInterface, "NamedSlotInterface")
};

// Object: Class UMG.NativeWidgetHost
// Size: 0x168 (Inherited: 0x158)
struct UNativeWidgetHost : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UNativeWidgetHost, "NativeWidgetHost")

	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
};

// Object: Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UOverlaySlot, "OverlaySlot")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x50(0x1)
	EVerticalAlignment VerticalAlignment; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)

	// Object: Function UMG.OverlaySlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16669648
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.OverlaySlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166695a0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.OverlaySlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166694fc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlockImageDecorator, "RichTextBlockImageDecorator")

	struct UDataTable* ImageSet; // 0x28(0x8)
};

// Object: Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(USafeZoneSlot, "SafeZoneSlot")

	uint8_t bIsTitleSafe : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FMargin SafeAreaScale; // 0x3C(0x10)
	EHorizontalAlignment HAlign; // 0x4C(0x1)
	EVerticalAlignment VAlign; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
	struct FMargin Padding; // 0x50(0x10)
};

// Object: Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UScaleBoxSlot, "ScaleBoxSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)

	// Object: Function UMG.ScaleBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1011e690
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.ScaleBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666cb30
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1011e4d4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.ScrollBar
// Size: 0x6A8 (Inherited: 0x158)
struct UScrollBar : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UScrollBar, "ScrollBar")

	struct FScrollBarStyle WidgetStyle; // 0x158(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x670(0x8)
	uint8_t bAlwaysShowScrollbar : 1; // 0x678(0x1), Mask(0x1)
	uint8_t BitPad_0x678_1 : 7; // 0x678(0x1)
	uint8_t bAlwaysShowScrollbarTrack : 1; // 0x679(0x1), Mask(0x1)
	uint8_t BitPad_0x679_1 : 7; // 0x679(0x1)
	EOrientation Orientation; // 0x67A(0x1)
	uint8_t Pad_0x67B[0x1]; // 0x67B(0x1)
	struct FVector2D Thickness; // 0x67C(0x8)
	struct FMargin Padding; // 0x684(0x10)
	uint8_t Pad_0x694[0x14]; // 0x694(0x14)

	// Object: Function UMG.ScrollBar.SetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666cbe0
	// Params: [ Num(2) Size(0x8) ]
	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Object: Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UScrollBoxSlot, "ScrollBoxSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0xE]; // 0x4A(0xE)

	// Object: Function UMG.ScrollBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d934
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.ScrollBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d88c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666d7e8
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(USizeBoxSlot, "SizeBoxSlot")

	struct FMargin Padding; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x58(0x1)
	EVerticalAlignment VerticalAlignment; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)

	// Object: Function UMG.SizeBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf905b38
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.SizeBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeef3a10
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.SizeBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1666dd7c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USlateBlueprintLibrary, "SlateBlueprintLibrary")

	// Object: Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666ec78
	// Params: [ Num(3) Size(0x58) ]
	static struct FVector2D TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalVector);

	// Object: Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666eb5c
	// Params: [ Num(3) Size(0x58) ]
	static struct FVector2D TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteVector);

	// Object: Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666ea3c
	// Params: [ Num(3) Size(0x50) ]
	static float TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);

	// Object: Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666e91c
	// Params: [ Num(3) Size(0x50) ]
	static float TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xea77f78
	// Params: [ Num(4) Size(0x60) ]
	static void ScreenToWidgetLocal(struct UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1666e808
	// Params: [ Num(3) Size(0x18) ]
	static void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1666e6f4
	// Params: [ Num(3) Size(0x18) ]
	static void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.LocalToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666e514
	// Params: [ Num(5) Size(0x68) ]
	static void LocalToViewport(struct UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666e3f8
	// Params: [ Num(3) Size(0x58) ]
	static struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.IsUnderLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xfa4b6d8
	// Params: [ Num(3) Size(0x51) ]
	static uint8_t IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666e314
	// Params: [ Num(2) Size(0x50) ]
	static struct FVector2D GetLocalTopLeft(const struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.GetLocalSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666e230
	// Params: [ Num(2) Size(0x50) ]
	static struct FVector2D GetLocalSize(const struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666e14c
	// Params: [ Num(2) Size(0x50) ]
	static struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666df8c
	// Params: [ Num(3) Size(0x121) ]
	static uint8_t EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);

	// Object: Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1666de28
	// Params: [ Num(4) Size(0x20) ]
	static void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xf6f4d3c
	// Params: [ Num(3) Size(0x58) ]
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

	uint8_t bCanChildrenBeAccessible : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x1)
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Object: Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UTextBinding, "TextBinding")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)

	// Object: Function UMG.TextBinding.GetTextValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x16670a60
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetTextValue();

	// Object: Function UMG.TextBinding.GetStringValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x166709c8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetStringValue();
};

// Object: Class UMG.Throbber
// Size: 0x208 (Inherited: 0x158)
struct UThrobber : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UThrobber, "Throbber")

	int32_t NumberOfPieces; // 0x158(0x4)
	uint8_t bAnimateHorizontally : 1; // 0x15C(0x1), Mask(0x1)
	uint8_t BitPad_0x15C_1 : 7; // 0x15C(0x1)
	uint8_t bAnimateVertically : 1; // 0x15D(0x1), Mask(0x1)
	uint8_t BitPad_0x15D_1 : 7; // 0x15D(0x1)
	uint8_t bAnimateOpacity : 1; // 0x15E(0x1), Mask(0x1)
	uint8_t BitPad_0x15E_1 : 7; // 0x15E(0x1)
	uint8_t Pad_0x15F[0x1]; // 0x15F(0x1)
	struct USlateBrushAsset* PieceImage; // 0x160(0x8)
	struct FSlateBrush Image; // 0x168(0x90)
	uint8_t Pad_0x1F8[0x10]; // 0x1F8(0x10)

	// Object: Function UMG.Throbber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667163c
	// Params: [ Num(1) Size(0x4) ]
	void SetNumberOfPieces(int32_t InNumberOfPieces);

	// Object: Function UMG.Throbber.SetAnimateVertically
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16671590
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateVertically(uint8_t bInAnimateVertically);

	// Object: Function UMG.Throbber.SetAnimateOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166714e4
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateOpacity(uint8_t bInAnimateOpacity);

	// Object: Function UMG.Throbber.SetAnimateHorizontally
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16671438
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateHorizontally(uint8_t bInAnimateHorizontally);
};

// Object: Class UMG.UMGSequencePlayer
// Size: 0x960 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUMGSequencePlayer, "UMGSequencePlayer")

	uint8_t Pad_0x28[0x4B8]; // 0x28(0x4B8)
	struct UWidgetAnimation* Animation; // 0x4E0(0x8)
	uint8_t Pad_0x4E8[0x478]; // 0x4E8(0x478)

	// Object: Function UMG.UMGSequencePlayer.SetUserTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16672b20
	// Params: [ Num(1) Size(0x8) ]
	void SetUserTag(struct FName InUserTag);

	// Object: Function UMG.UMGSequencePlayer.GetUserTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16672b00
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetUserTag();
};

// Object: Class UMG.UMGSequenceTickManager
// Size: 0x50 (Inherited: 0x28)
struct UUMGSequenceTickManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUMGSequenceTickManager, "UMGSequenceTickManager")

	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

// Object: Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UUniformGridSlot, "UniformGridSlot")

	EHorizontalAlignment HorizontalAlignment; // 0x38(0x1)
	EVerticalAlignment VerticalAlignment; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	int32_t Row; // 0x3C(0x4)
	int32_t Column; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)

	// Object: Function UMG.UniformGridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16673238
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.UniformGridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16673194
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMG.UniformGridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166730f0
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	// Object: Function UMG.UniformGridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667304c
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);
};

// Object: Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UVerticalBoxSlot, "VerticalBoxSlot")

	struct FSlateChildSize size; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	EHorizontalAlignment HorizontalAlignment; // 0x58(0x1)
	EVerticalAlignment VerticalAlignment; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)

	// Object: Function UMG.VerticalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667889c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.VerticalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf9edfdc
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FSlateChildSize InSize);

	// Object: Function UMG.VerticalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf53fdf8
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc39940
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.Viewport
// Size: 0x1A0 (Inherited: 0x170)
struct UViewport : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UViewport, "Viewport")

	struct FLinearColor BackgroundColor; // 0x16C(0x10)
	uint8_t Pad_0x180[0x20]; // 0x180(0x20)

	// Object: Function UMG.Viewport.Spawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16678b34
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* Spawn(struct AActor* ActorClass);

	// Object: Function UMG.Viewport.SetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16678a90
	// Params: [ Num(1) Size(0xC) ]
	void SetViewRotation(struct FRotator Rotation);

	// Object: Function UMG.Viewport.SetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166789ec
	// Params: [ Num(1) Size(0xC) ]
	void SetViewLocation(struct FVector Location);

	// Object: Function UMG.Viewport.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166789b4
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetViewRotation();

	// Object: Function UMG.Viewport.GetViewportWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16678980
	// Params: [ Num(1) Size(0x8) ]
	struct UWorld* GetViewportWorld();

	// Object: Function UMG.Viewport.GetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16678948
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
	// Offset: 0x16678be8
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetValue();
};

// Object: Class UMG.WidgetAnimation
// Size: 0x3F8 (Inherited: 0x3C0)
struct UWidgetAnimation : UMovieSceneSequence
{
	DEFINE_UE_CLASS_HELPERS(UWidgetAnimation, "WidgetAnimation")

	struct UMovieScene* MovieScene; // 0x3C0(0x8)
	uint8_t bIgnoreReferenceObjectCache : 1; // 0x3C8(0x1), Mask(0x1)
	uint8_t BitPad_0x3C8_1 : 7; // 0x3C8(0x1)
	uint8_t Pad_0x3C9[0x7]; // 0x3C9(0x7)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x3D0(0x10)
	uint8_t AnimationQuality; // 0x3E0(0x1)
	uint8_t bExported : 1; // 0x3E1(0x1), Mask(0x1)
	uint8_t bLimitFrameRate : 1; // 0x3E1(0x1), Mask(0x2)
	uint8_t BitPad_0x3E1_2 : 6; // 0x3E1(0x1)
	uint8_t bLegacyFinishOnStop : 1; // 0x3E2(0x1), Mask(0x1)
	uint8_t BitPad_0x3E2_1 : 7; // 0x3E2(0x1)
	uint8_t Pad_0x3E3[0x5]; // 0x3E3(0x5)
	struct FString DisplayLabel; // 0x3E8(0x10)

	// Object: Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667b1c0
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667b0d8
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667b034
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667af90
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetAnimation.GetStartTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667af3c
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTime();

	// Object: Function UMG.WidgetAnimation.GetEndTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1667aee8
	// Params: [ Num(1) Size(0x4) ]
	float GetEndTime();

	// Object: Function UMG.WidgetAnimation.BindToAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667ae00
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.BindToAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1667ad18
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
// Size: 0x50 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWidgetAnimationPlayCallbackProxy, "WidgetAnimationPlayCallbackProxy")

	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)

	// Object: Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1667b3c0
	// Params: [ Num(9) Size(0x38) ]
	static struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);

	// Object: Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf22ddb0
	// Params: [ Num(8) Size(0x30) ]
	static struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
};

// Object: Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding
{
	DEFINE_UE_CLASS_HELPERS(UWidgetBinding, "WidgetBinding")

	// Object: Function UMG.WidgetBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1667b6c4
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetValue();
};

// Object: Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UWidgetBlueprintLibrary, "WidgetBlueprintLibrary")

	// Object: Function UMG.WidgetBlueprintLibrary.UnlockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667f5f0
	// Params: [ Num(2) Size(0x1A0) ]
	static struct FEventReply UnlockMouse(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.Unhandled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667f580
	// Params: [ Num(1) Size(0xD0) ]
	static struct FEventReply Unhandled();

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667f3dc
	// Params: [ Num(5) Size(0xC) ]
	static void SetWindowTitleBarState(struct UWidget* TitleBarContent, EWindowTitleBarMode Mode, uint8_t bTitleBarDragEnabled, uint8_t bWindowButtonsVisible, uint8_t bTitleBarVisible);

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667f340
	// Params: [ Num(1) Size(0x10) ]
	static void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate);

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667f2a4
	// Params: [ Num(1) Size(0x1) ]
	static void SetWindowTitleBarCloseButtonActive(uint8_t bActive);

	// Object: Function UMG.WidgetBlueprintLibrary.SetUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667f114
	// Params: [ Num(4) Size(0x1B0) ]
	static struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, uint8_t bInAllUsers);

	// Object: Function UMG.WidgetBlueprintLibrary.SetMousePosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667efcc
	// Params: [ Num(3) Size(0x1A8) ]
	static struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667eec4
	// Params: [ Num(3) Size(0x11) ]
	static void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667edb4
	// Params: [ Num(3) Size(0x11) ]
	static void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, uint8_t bLockMouseToViewport);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667ed20
	// Params: [ Num(1) Size(0x8) ]
	static void SetInputMode_GameOnly(struct APlayerController* PlayerController);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667ebd4
	// Params: [ Num(4) Size(0x12) ]
	static void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, uint8_t bHideCursorDuringCapture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667ea78
	// Params: [ Num(4) Size(0x12) ]
	static void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, uint8_t bLockMouseToViewport, uint8_t bHideCursorDuringCapture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1667e920
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t SetHardwareCursor(struct UObject* WorldContextObject, EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot);

	// Object: Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667e90c
	// Params: [ Num(0) Size(0x0) ]
	static void SetFocusToGameViewport();

	// Object: Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667e7ac
	// Params: [ Num(4) Size(0xA) ]
	static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, uint8_t CorrectDeficiency, uint8_t ShowCorrectionWithDeficiency);

	// Object: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1667e664
	// Params: [ Num(2) Size(0x98) ]
	static void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1667e51c
	// Params: [ Num(2) Size(0x98) ]
	static void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material);

	// Object: Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667e508
	// Params: [ Num(0) Size(0x0) ]
	static void RestorePreviousWindowTitleBarState();

	// Object: Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667e400
	// Params: [ Num(2) Size(0x1A0) ]
	static struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667e2ac
	// Params: [ Num(3) Size(0x1A8) ]
	static struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, uint8_t bInAllJoysticks);

	// Object: DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();

	// Object: Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667e10c
	// Params: [ Num(1) Size(0x90) ]
	static struct FSlateBrush NoResourceBrush();

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667deb8
	// Params: [ Num(4) Size(0xA0) ]
	static struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height);

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667dc64
	// Params: [ Num(4) Size(0xA0) ]
	static struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height);

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667da84
	// Params: [ Num(2) Size(0x98) ]
	static struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset);

	// Object: Function UMG.WidgetBlueprintLibrary.LockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d938
	// Params: [ Num(3) Size(0x1A8) ]
	static struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget);

	// Object: Function UMG.WidgetBlueprintLibrary.IsDragDropping
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d900
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsDragDropping();

	// Object: Function UMG.WidgetBlueprintLibrary.Handled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xe9cbaa8
	// Params: [ Num(1) Size(0xD0) ]
	static struct FEventReply Handled();

	// Object: Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xfc25a28
	// Params: [ Num(4) Size(0x40) ]
	static void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding);

	// Object: Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d6d4
	// Params: [ Num(2) Size(0x78) ]
	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d578
	// Params: [ Num(2) Size(0x88) ]
	static struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d49c
	// Params: [ Num(2) Size(0x38) ]
	static struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d360
	// Params: [ Num(2) Size(0x50) ]
	static struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d288
	// Params: [ Num(2) Size(0x38) ]
	static struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d174
	// Params: [ Num(2) Size(0x98) ]
	static struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xfd5ba68
	// Params: [ Num(1) Size(0x8) ]
	static struct UDragDropOperation* GetDragDroppingContent();

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667d060
	// Params: [ Num(2) Size(0x98) ]
	static struct UTexture2D* GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667cf4c
	// Params: [ Num(2) Size(0x98) ]
	static struct UMaterialInterface* GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResource
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667ce38
	// Params: [ Num(2) Size(0x98) ]
	static struct UObject* GetBrushResource(const struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1667ccc8
	// Params: [ Num(4) Size(0x21) ]
	static void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct IInterface* Interface, uint8_t TopLevelOnly);

	// Object: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1667cb58
	// Params: [ Num(4) Size(0x21) ]
	static void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, uint8_t TopLevelOnly);

	// Object: Function UMG.WidgetBlueprintLibrary.EndDragDrop
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667ca50
	// Params: [ Num(2) Size(0x1A0) ]
	static struct FEventReply EndDragDrop(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1667c7c8
	// Params: [ Num(7) Size(0x74) ]
	static void DrawTextFormatted(struct FPaintContext& Context, const struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawText
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1667c660
	// Params: [ Num(4) Size(0x58) ]
	static void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawLines
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1667c498
	// Params: [ Num(5) Size(0x58) ]
	static void DrawLines(struct FPaintContext& Context, const struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, uint8_t bAntiAlias, float Thickness);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1667c2b8
	// Params: [ Num(6) Size(0x58) ]
	static void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, uint8_t bAntiAlias, float Thickness);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1667c120
	// Params: [ Num(5) Size(0x58) ]
	static void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D size, struct USlateBrushAsset* Brush, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667c10c
	// Params: [ Num(0) Size(0x0) ]
	static void DismissAllMenus();

	// Object: Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1667be40
	// Params: [ Num(4) Size(0x160) ]
	static struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey);

	// Object: Function UMG.WidgetBlueprintLibrary.DetectDrag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667bbdc
	// Params: [ Num(4) Size(0x1C0) ]
	static struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey);

	// Object: Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1667bb38
	// Params: [ Num(2) Size(0x10) ]
	static struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass);

	// Object: Function UMG.WidgetBlueprintLibrary.Create
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe884030
	// Params: [ Num(4) Size(0x20) ]
	static struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer);

	// Object: Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667b9e4
	// Params: [ Num(3) Size(0x1A8) ]
	static struct FEventReply ClearUserFocus(struct FEventReply& Reply, uint8_t bInAllUsers);

	// Object: Function UMG.WidgetBlueprintLibrary.CaptureMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xe9d1b30
	// Params: [ Num(3) Size(0x1A8) ]
	static struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget);

	// Object: Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1667b854
	// Params: [ Num(4) Size(0x1B0) ]
	static struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, uint8_t bInAllJoysticks);

	// Object: Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10734450
	// Params: [ Num(0) Size(0x0) ]
	static void CancelDragDrop();
};

// Object: Class UMG.WidgetComponent3DUI
// Size: 0x990 (Inherited: 0x6F0)
struct UWidgetComponent3DUI : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UWidgetComponent3DUI, "WidgetComponent3DUI")

	EWidgetType3DUI TypeOfWidget; // 0x6E3(0x1)
	struct UUserWidget* WidgetClass; // 0x6E8(0x8)
	struct FVector2D DrawSize; // 0x6F0(0x8)
	uint8_t Pad_0x701[0x7]; // 0x701(0x7)
	uint8_t bReceiveHardwareInput : 1; // 0x708(0x1), Mask(0x1)
	uint8_t BitPad_0x708_1 : 7; // 0x708(0x1)
	uint8_t Pad_0x709[0x7]; // 0x709(0x7)
	struct ULocalPlayer* OwnerPlayer; // 0x710(0x8)
	struct UUserWidget* Widget; // 0x718(0x8)
	struct UBodySetup* BodySetup; // 0x720(0x8)
	uint8_t Pad_0x728[0x38]; // 0x728(0x38)
	struct TArray<struct UUserWidget*> WidgetsWaitingToAdd; // 0x760(0x10)
	struct TArray<struct UUserWidget*> WidgetsWaitingToRemove; // 0x770(0x10)
	struct TArray<struct UUserWidget*> HasAddedWidgets; // 0x780(0x10)
	uint8_t Pad_0x790[0x60]; // 0x790(0x60)
	float DpiScale; // 0x7F0(0x4)
	uint8_t Pad_0x7F4[0x4]; // 0x7F4(0x4)
	struct TSoftClassPtr<struct UUserWidget*> SoftWidgetClassRef; // 0x7F8(0x28)
	struct FLinearColor ColorFactor; // 0x820(0x10)
	uint8_t bManuallyCreate : 1; // 0x830(0x1), Mask(0x1)
	uint8_t BitPad_0x830_1 : 7; // 0x830(0x1)
	uint8_t bIsDraw : 1; // 0x831(0x1), Mask(0x1)
	uint8_t BitPad_0x831_1 : 7; // 0x831(0x1)
	uint8_t Pad_0x832[0x2]; // 0x832(0x2)
	float JitterYPercent; // 0x834(0x4)
	float JitterStrength; // 0x838(0x4)
	float ColorJitterStrength; // 0x83C(0x4)
	float JitterPosOffsetFactor; // 0x840(0x4)
	float JitterPosOffset; // 0x844(0x4)
	float SurfaceRadius; // 0x848(0x4)
	float SurfaceTriangleMaxWidth; // 0x84C(0x4)
	uint8_t BumpOut : 1; // 0x850(0x1), Mask(0x1)
	uint8_t BitPad_0x850_1 : 7; // 0x850(0x1)
	uint8_t Pad_0x851[0x13F]; // 0x851(0x13F)

	// Object: Function UMG.WidgetComponent3DUI.Show
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681940
	// Params: [ Num(0) Size(0x0) ]
	void Show();

	// Object: Function UMG.WidgetComponent3DUI.SetWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16681894
	// Params: [ Num(1) Size(0x8) ]
	void SetWidget(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetComponent3DUI.SetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166817f0
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer);

	// Object: Function UMG.WidgetComponent3DUI.SetIsDraw
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681744
	// Params: [ Num(1) Size(0x1) ]
	void SetIsDraw(uint8_t InIsDraw);

	// Object: Function UMG.WidgetComponent3DUI.RemoveFromParent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16681728
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromParent();

	// Object: Function UMG.WidgetComponent3DUI.Hide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16681714
	// Params: [ Num(0) Size(0x0) ]
	void Hide();

	// Object: Function UMG.WidgetComponent3DUI.GetUserWidgetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166816e0
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetUserWidgetObject();

	// Object: Function UMG.WidgetComponent3DUI.GetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166816ac
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwnerPlayer();

	// Object: Function UMG.WidgetComponent3DUI.GetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681678
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDrawSize();

	// Object: Function UMG.WidgetComponent3DUI.AddToViewport
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1668165c
	// Params: [ Num(0) Size(0x0) ]
	void AddToViewport();
};

// Object: Class UMG.WidgetInteractionComponent
// Size: 0x430 (Inherited: 0x240)
struct UWidgetInteractionComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UWidgetInteractionComponent, "WidgetInteractionComponent")

	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x240(0x10)
	uint8_t Pad_0x250[0x10]; // 0x250(0x10)
	int32_t VirtualUserIndex; // 0x260(0x4)
	float PointerIndex; // 0x264(0x4)
	ECollisionChannel TraceChannel; // 0x268(0x1)
	uint8_t Pad_0x269[0x3]; // 0x269(0x3)
	float InteractionDistance; // 0x26C(0x4)
	EWidgetInteractionSource InteractionSource; // 0x270(0x1)
	uint8_t bEnableHitTesting : 1; // 0x271(0x1), Mask(0x1)
	uint8_t BitPad_0x271_1 : 7; // 0x271(0x1)
	uint8_t bShowDebug : 1; // 0x272(0x1), Mask(0x1)
	uint8_t BitPad_0x272_1 : 7; // 0x272(0x1)
	uint8_t Pad_0x273[0x1]; // 0x273(0x1)
	struct FLinearColor DebugColor; // 0x274(0x10)
	uint8_t Pad_0x284[0x7C]; // 0x284(0x7C)
	struct FHitResult CustomHitResult; // 0x300(0x88)
	struct FVector2D LocalHitLocation; // 0x388(0x8)
	struct FVector2D LastLocalHitLocation; // 0x390(0x8)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x398(0x8)
	struct FHitResult LastHitResult; // 0x3A0(0x88)
	uint8_t bIsHoveredWidgetInteractable : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t bIsHoveredWidgetFocusable : 1; // 0x429(0x1), Mask(0x1)
	uint8_t BitPad_0x429_1 : 7; // 0x429(0x1)
	uint8_t bIsHoveredWidgetHitTestVisible : 1; // 0x42A(0x1), Mask(0x1)
	uint8_t BitPad_0x42A_1 : 7; // 0x42A(0x1)
	uint8_t Pad_0x42B[0x5]; // 0x42B(0x5)

	// Object: Function UMG.WidgetInteractionComponent.SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16682628
	// Params: [ Num(1) Size(0x8) ]
	void SetFocus(struct UWidget* FocusWidget);

	// Object: Function UMG.WidgetInteractionComponent.SetCustomHitResult
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16682560
	// Params: [ Num(1) Size(0x88) ]
	void SetCustomHitResult(const struct FHitResult& HitResult);

	// Object: Function UMG.WidgetInteractionComponent.SendKeyChar
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16682408
	// Params: [ Num(3) Size(0x12) ]
	uint8_t SendKeyChar(struct FString Characters, uint8_t bRepeat);

	// Object: Function UMG.WidgetInteractionComponent.ScrollWheel
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1668235c
	// Params: [ Num(1) Size(0x4) ]
	void ScrollWheel(float ScrollDelta);

	// Object: Function UMG.WidgetInteractionComponent.ReleasePointerKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x166821d4
	// Params: [ Num(1) Size(0x18) ]
	void ReleasePointerKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.ReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16682040
	// Params: [ Num(2) Size(0x19) ]
	uint8_t ReleaseKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.PressPointerKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16681eb8
	// Params: [ Num(1) Size(0x18) ]
	void PressPointerKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.PressKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16681ce0
	// Params: [ Num(3) Size(0x1A) ]
	uint8_t PressKey(struct FKey Key, uint8_t bRepeat);

	// Object: Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16681b4c
	// Params: [ Num(2) Size(0x19) ]
	uint8_t PressAndReleaseKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681b14
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOverInteractableWidget();

	// Object: Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681adc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOverHitTestVisibleWidget();

	// Object: Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681aa4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOverFocusableWidget();

	// Object: Function UMG.WidgetInteractionComponent.GetLastHitResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681a68
	// Params: [ Num(1) Size(0x88) ]
	struct FHitResult GetLastHitResult();

	// Object: Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681a34
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetComponent* GetHoveredWidgetComponent();

	// Object: Function UMG.WidgetInteractionComponent.Get2DHitLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16681a00
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
	// Offset: 0x16682f48
	// Params: [ Num(2) Size(0x10) ]
	static struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682ea4
	// Params: [ Num(2) Size(0x10) ]
	static struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf4b71d0
	// Params: [ Num(2) Size(0x10) ]
	static struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682e00
	// Params: [ Num(2) Size(0x10) ]
	static struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xfb13fbc
	// Params: [ Num(2) Size(0x10) ]
	static struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682d5c
	// Params: [ Num(2) Size(0x10) ]
	static struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1014fb28
	// Params: [ Num(2) Size(0x10) ]
	static struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682cb8
	// Params: [ Num(2) Size(0x10) ]
	static struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682c14
	// Params: [ Num(2) Size(0x10) ]
	static struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xe65cf30
	// Params: [ Num(2) Size(0x10) ]
	static struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf516a5c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xe65fac8
	// Params: [ Num(2) Size(0x10) ]
	static struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x10a26254
	// Params: [ Num(2) Size(0x10) ]
	static struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x16682b80
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveAllWidgets(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682a54
	// Params: [ Num(4) Size(0x1D) ]
	static uint8_t ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe9701b4
	// Params: [ Num(2) Size(0x50) ]
	static struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportSize
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xe96ec2c
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetViewportSize(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportScale
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xe970b64
	// Params: [ Num(2) Size(0xC) ]
	static float GetViewportScale(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x16682994
	// Params: [ Num(2) Size(0x50) ]
	static struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16682854
	// Params: [ Num(4) Size(0x11) ]
	static uint8_t GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x166827b0
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1668277c
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

// Object: Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UWidgetSwitcherSlot, "WidgetSwitcherSlot")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x50(0x1)
	EVerticalAlignment VerticalAlignment; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)

	// Object: Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16683f24
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.WidgetSwitcherSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16683e7c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16683dd8
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWidgetTree, "WidgetTree")

	struct UWidget* RootWidget; // 0x28(0x8)
};

// Object: Class UMG.WindowTitleBarArea
// Size: 0x188 (Inherited: 0x170)
struct UWindowTitleBarArea : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UWindowTitleBarArea, "WindowTitleBarArea")

	uint8_t bWindowButtonsEnabled : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t bDoubleClickTogglesFullscreen : 1; // 0x16B(0x1), Mask(0x1)
	uint8_t BitPad_0x170_2 : 6; // 0x170(0x1)
	uint8_t Pad_0x171[0x17]; // 0x171(0x17)

	// Object: Function UMG.WindowTitleBarArea.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166841d0
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.WindowTitleBarArea.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16684128
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WindowTitleBarArea.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16684084
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UWindowTitleBarAreaSlot, "WindowTitleBarAreaSlot")

	struct FMargin Padding; // 0x38(0x10)
	EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)

	// Object: Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166843e0
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.WindowTitleBarAreaSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16684338
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16684294
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
};

// Object: Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot
{
	DEFINE_UE_CLASS_HELPERS(UWrapBoxSlot, "WrapBoxSlot")

	struct FMargin Padding; // 0x38(0x10)
	uint8_t bFillEmptySpace : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float FillSpanWhenLessThan; // 0x4C(0x4)
	EHorizontalAlignment HorizontalAlignment; // 0x50(0x1)
	EVerticalAlignment VerticalAlignment; // 0x51(0x1)
	uint8_t Pad_0x52[0xE]; // 0x52(0xE)

	// Object: Function UMG.WrapBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16684898
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	// Object: Function UMG.WrapBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166847f0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WrapBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1668474c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	// Object: Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166846a8
	// Params: [ Num(1) Size(0x4) ]
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);

	// Object: Function UMG.WrapBoxSlot.SetFillEmptySpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166845fc
	// Params: [ Num(1) Size(0x1) ]
	void SetFillEmptySpace(uint8_t InbFillEmptySpace);
};

// Object: WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__WidgetBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(Default__WidgetBlueprintGeneratedClass, "Default__WidgetBlueprintGeneratedClass")
};

} // namespace SDK
