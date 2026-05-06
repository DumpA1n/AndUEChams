#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: InteractiveToolsFramework
// Enums: 14
// Structs: 6
// Classes: 88

struct UPrimitiveComponent;
struct USceneComponent;
struct FBrushStampData;
struct FBehaviorInfo;
struct FInputRayHit;
struct FActiveGizmo;
struct FGizmoFloatParameterChange;
struct FGizmoVec2ParameterChange;
struct UInputBehavior;
struct UAnyButtonInputBehavior;
struct UInteractiveGizmoBuilder;
struct UAxisAngleGizmoBuilder;
struct UInteractiveGizmo;
struct UAxisAngleGizmo;
struct UAxisPositionGizmoBuilder;
struct UAxisPositionGizmo;
struct UGizmoConstantAxisSource;
struct UGizmoConstantFrameAxisSource;
struct UGizmoWorldAxisSource;
struct UGizmoComponentAxisSource;
struct UInteractiveToolPropertySet;
struct UBrushBaseProperties;
struct UInteractiveTool;
struct USingleSelectionTool;
struct UMeshSurfacePointTool;
struct UBaseBrushTool;
struct UBrushStampIndicatorBuilder;
struct UBrushStampIndicator;
struct UClickDragInputBehavior;
struct ULocalClickDragInputBehavior;
struct UInteractiveToolBuilder;
struct UClickDragToolBuilder;
struct UClickDragTool;
struct AInternalToolFrameworkActor;
struct AGizmoActor;
struct UGizmoBaseComponent;
struct UGizmoArrowComponent;
struct UGizmoBoxComponent;
struct UGizmoCircleComponent;
struct IGizmoTransformSource;
struct IGizmoAxisSource;
struct IGizmoClickTarget;
struct IGizmoStateTarget;
struct IGizmoFloatParameterSource;
struct IGizmoVec2ParameterSource;
struct UGizmoLineHandleComponent;
struct UGizmoRectangleComponent;
struct UGizmoLambdaHitTarget;
struct UGizmoComponentHitTarget;
struct UInputBehaviorSet;
struct IInputBehaviorSource;
struct UInputRouter;
struct UInteractionMechanic;
struct UInteractiveGizmoManager;
struct IToolContextTransactionProvider;
struct UInteractiveToolManager;
struct IToolFrameworkComponent;
struct UInteractiveToolsContext;
struct AIntervalGizmoActor;
struct UIntervalGizmoBuilder;
struct UIntervalGizmo;
struct UGizmoBaseFloatParameterSource;
struct UGizmoAxisIntervalParameterSource;
struct UKeyAsModifierInputBehavior;
struct UMeshSurfacePointToolBuilder;
struct UMouseHoverBehavior;
struct UMultiClickSequenceInputBehavior;
struct UMultiSelectionTool;
struct UGizmoLocalFloatParameterSource;
struct UGizmoBaseVec2ParameterSource;
struct UGizmoLocalVec2ParameterSource;
struct UGizmoAxisTranslationParameterSource;
struct UGizmoPlaneTranslationParameterSource;
struct UGizmoAxisRotationParameterSource;
struct UGizmoUniformScaleParameterSource;
struct UGizmoAxisScaleParameterSource;
struct UGizmoPlaneScaleParameterSource;
struct UPlanePositionGizmoBuilder;
struct UPlanePositionGizmo;
struct USelectionSet;
struct UMeshSelectionSet;
struct USingleClickInputBehavior;
struct USingleClickToolBuilder;
struct USingleClickTool;
struct UGizmoNilStateTarget;
struct UGizmoLambdaStateTarget;
struct UGizmoObjectModifyStateTarget;
struct UGizmoTransformChangeStateTarget;
struct ATransformGizmoActor;
struct UTransformGizmoBuilder;
struct UTransformGizmo;
struct UTransformProxy;
struct UGizmoBaseTransformSource;
struct UGizmoComponentWorldTransformSource;
struct UGizmoScaledTransformSource;
struct UGizmoTransformProxyTransformSource;

// Object: Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
	Begin = 1,
	Continue = 2,
	End = 3,
	Ignore = 4,
	EInputCaptureState_MAX = 5
};

// Object: Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
	Begin = 1,
	Ignore = 2,
	EInputCaptureRequestType_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 99,
	EInputCaptureSide_MAX = 100
};

// Object: Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint16_t
{
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 4,
	OculusTouch = 8,
	HTCViveWands = 16,
	AnySpatialDevice = 24,
	TabletFingers = 1024,
	EInputDevices_MAX = 1025
};

// Object: Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
	None = 0,
	TranslateAxisX = 1,
	TranslateAxisY = 2,
	TranslateAxisZ = 3,
	TranslateAllAxes = 4,
	TranslatePlaneXY = 5,
	TranslatePlaneXZ = 6,
	TranslatePlaneYZ = 7,
	TranslateAllPlanes = 8,
	RotateAxisX = 9,
	RotateAxisY = 10,
	RotateAxisZ = 11,
	RotateAllAxes = 12,
	ScaleAxisX = 13,
	ScaleAxisY = 14,
	ScaleAxisZ = 15,
	ScaleAllAxes = 16,
	ScalePlaneYZ = 17,
	ScalePlaneXZ = 18,
	ScalePlaneXY = 19,
	ScaleAllPlanes = 20,
	ScaleUniform = 21,
	StandardTranslateRotate = 22,
	TranslateRotateUniformScale = 23,
	FullTranslateRotateScale = 24,
	ETransformGizmoSubElements_MAX = 25
};

// Object: Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
	NoChangeTracking = 1,
	UndoToExit = 2,
	FullUndoRedo = 3,
	EToolChangeTrackingMode_MAX = 4
};

// Object: Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8_t
{
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3
};

// Object: Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4
};

// Object: Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5
};

// Object: Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2
};

// Object: Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
	VertexColorMaterial = 1,
	EStandardToolContextMaterials_MAX = 2
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 4,
	All = 7,
	ESceneSnapQueryTargetType_MAX = 8
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
	Position = 1,
	Rotation = 2,
	ESceneSnapQueryType_MAX = 3
};

// Object: ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0xC0 (Inherited: 0x0)
struct FBrushStampData
{
	uint8_t Pad_0x0[0xC0]; // 0x0(0xC0)
};

// Object: ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20 (Inherited: 0x0)
struct FBehaviorInfo
{
	struct UInputBehavior* Behavior; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x28 (Inherited: 0x0)
struct FInputRayHit
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30 (Inherited: 0x0)
struct FActiveGizmo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x8 (Inherited: 0x0)
struct FGizmoFloatParameterChange
{
	float InitialValue; // 0x0(0x4)
	float CurrentValue; // 0x4(0x4)
};

// Object: ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x10 (Inherited: 0x0)
struct FGizmoVec2ParameterChange
{
	struct FVector2D InitialValue; // 0x0(0x8)
	struct FVector2D CurrentValue; // 0x8(0x8)
};

// Object: Class InteractiveToolsFramework.InputBehavior
// Size: 0x30 (Inherited: 0x28)
struct UInputBehavior : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInputBehavior, "InputBehavior")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x70 (Inherited: 0x30)
struct UAnyButtonInputBehavior : UInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(UAnyButtonInputBehavior, "AnyButtonInputBehavior")

	uint8_t Pad_0x30[0x40]; // 0x30(0x40)
};

// Object: Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveGizmoBuilder : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveGizmoBuilder, "InteractiveGizmoBuilder")
};

// Object: Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder
{
	DEFINE_UE_CLASS_HELPERS(UAxisAngleGizmoBuilder, "AxisAngleGizmoBuilder")
};

// Object: Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x38 (Inherited: 0x28)
struct UInteractiveGizmo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveGizmo, "InteractiveGizmo")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UInputBehaviorSet* InputBehaviors; // 0x30(0x8)
};

// Object: Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0xF0 (Inherited: 0x38)
struct UAxisAngleGizmo : UInteractiveGizmo
{
	DEFINE_UE_CLASS_HELPERS(UAxisAngleGizmo, "AxisAngleGizmo")

	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bInInteraction; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	struct FVector RotationOrigin; // 0x8C(0xC)
	struct FVector RotationAxis; // 0x98(0xC)
	struct FVector RotationPlaneX; // 0xA4(0xC)
	struct FVector RotationPlaneY; // 0xB0(0xC)
	struct FVector InteractionStartPoint; // 0xBC(0xC)
	struct FVector InteractionCurPoint; // 0xC8(0xC)
	float InteractionStartAngle; // 0xD4(0x4)
	float InteractionCurAngle; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x14]; // 0xDC(0x14)
};

// Object: Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder
{
	DEFINE_UE_CLASS_HELPERS(UAxisPositionGizmoBuilder, "AxisPositionGizmoBuilder")
};

// Object: Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0xD8 (Inherited: 0x38)
struct UAxisPositionGizmo : UInteractiveGizmo
{
	DEFINE_UE_CLASS_HELPERS(UAxisPositionGizmo, "AxisPositionGizmo")

	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x1)
	bool bInInteraction; // 0x89(0x1)
	uint8_t Pad_0x8A[0x2]; // 0x8A(0x2)
	struct FVector InteractionOrigin; // 0x8C(0xC)
	struct FVector InteractionAxis; // 0x98(0xC)
	struct FVector InteractionStartPoint; // 0xA4(0xC)
	struct FVector InteractionCurPoint; // 0xB0(0xC)
	float InteractionStartParameter; // 0xBC(0x4)
	float InteractionCurParameter; // 0xC0(0x4)
	float ParameterSign; // 0xC4(0x4)
	uint8_t Pad_0xC8[0x10]; // 0xC8(0x10)
};

// Object: Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoConstantAxisSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoConstantAxisSource, "GizmoConstantAxisSource")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Direction; // 0x3C(0xC)
};

// Object: Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x60 (Inherited: 0x28)
struct UGizmoConstantFrameAxisSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoConstantFrameAxisSource, "GizmoConstantFrameAxisSource")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Direction; // 0x3C(0xC)
	struct FVector TangentX; // 0x48(0xC)
	struct FVector TangentY; // 0x54(0xC)
};

// Object: Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoWorldAxisSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoWorldAxisSource, "GizmoWorldAxisSource")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	int32_t AxisIndex; // 0x3C(0x4)
};

// Object: Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoComponentAxisSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoComponentAxisSource, "GizmoComponentAxisSource")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct USceneComponent* Component; // 0x30(0x8)
	int32_t AxisIndex; // 0x38(0x4)
	bool bLocalAxes; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x60 (Inherited: 0x28)
struct UInteractiveToolPropertySet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveToolPropertySet, "InteractiveToolPropertySet")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UInteractiveToolPropertySet* CachedProperties; // 0x38(0x8)
	bool bIsPropertySetEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x1F]; // 0x41(0x1F)
};

// Object: Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x78 (Inherited: 0x60)
struct UBrushBaseProperties : UInteractiveToolPropertySet
{
	DEFINE_UE_CLASS_HELPERS(UBrushBaseProperties, "BrushBaseProperties")

	float BrushSize; // 0x60(0x4)
	bool bSpecifyRadius; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	float BrushRadius; // 0x68(0x4)
	float BrushStrength; // 0x6C(0x4)
	float BrushFalloffAmount; // 0x70(0x4)
	bool bShowStrength; // 0x74(0x1)
	bool bShowFalloff; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
};

// Object: Class InteractiveToolsFramework.InteractiveTool
// Size: 0x80 (Inherited: 0x28)
struct UInteractiveTool : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveTool, "InteractiveTool")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
	struct UInputBehaviorSet* InputBehaviors; // 0x48(0x8)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x50(0x10)
	uint8_t Pad_0x60[0x20]; // 0x60(0x20)
};

// Object: Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x88 (Inherited: 0x80)
struct USingleSelectionTool : UInteractiveTool
{
	DEFINE_UE_CLASS_HELPERS(USingleSelectionTool, "SingleSelectionTool")

	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xC0 (Inherited: 0x88)
struct UMeshSurfacePointTool : USingleSelectionTool
{
	DEFINE_UE_CLASS_HELPERS(UMeshSurfacePointTool, "MeshSurfacePointTool")

	uint8_t Pad_0x88[0x38]; // 0x88(0x38)
};

// Object: Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x1D0 (Inherited: 0xC0)
struct UBaseBrushTool : UMeshSurfacePointTool
{
	DEFINE_UE_CLASS_HELPERS(UBaseBrushTool, "BaseBrushTool")

	struct UBrushBaseProperties* BrushProperties; // 0xC0(0x8)
	bool bInBrushStroke; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x3]; // 0xC9(0x3)
	float WorldToLocalScale; // 0xCC(0x4)
	struct FBrushStampData LastBrushStamp; // 0xD0(0xC0)
	uint8_t Pad_0x190[0x10]; // 0x190(0x10)
	struct TSoftClassPtr<struct UBrushBaseProperties*> PropertyClass; // 0x1A0(0x28)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x1C8(0x8)
};

// Object: Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder
{
	DEFINE_UE_CLASS_HELPERS(UBrushStampIndicatorBuilder, "BrushStampIndicatorBuilder")
};

// Object: Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xB0 (Inherited: 0x38)
struct UBrushStampIndicator : UInteractiveGizmo
{
	DEFINE_UE_CLASS_HELPERS(UBrushStampIndicator, "BrushStampIndicator")

	float BrushRadius; // 0x38(0x4)
	float BrushFalloff; // 0x3C(0x4)
	struct FVector BrushPosition; // 0x40(0xC)
	struct FVector BrushNormal; // 0x4C(0xC)
	bool bDrawIndicatorLines; // 0x58(0x1)
	bool bDrawRadiusCircle; // 0x59(0x1)
	uint8_t Pad_0x5A[0x2]; // 0x5A(0x2)
	int32_t SampleStepCount; // 0x5C(0x4)
	struct FLinearColor LineColor; // 0x60(0x10)
	float LineThickness; // 0x70(0x4)
	bool bDepthTested; // 0x74(0x1)
	bool bDrawSecondaryLines; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
	float SecondaryLineThickness; // 0x78(0x4)
	struct FLinearColor SecondaryLineColor; // 0x7C(0x10)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct UPrimitiveComponent* AttachedComponent; // 0x90(0x8)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)
};

// Object: Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x130 (Inherited: 0x70)
struct UClickDragInputBehavior : UAnyButtonInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(UClickDragInputBehavior, "ClickDragInputBehavior")

	uint8_t Pad_0x70[0xA0]; // 0x70(0xA0)
	bool bUpdateModifiersDuringDrag; // 0x110(0x1)
	uint8_t Pad_0x111[0x1F]; // 0x111(0x1F)
};

// Object: Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x270 (Inherited: 0x130)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(ULocalClickDragInputBehavior, "LocalClickDragInputBehavior")

	uint8_t Pad_0x130[0x140]; // 0x130(0x140)
};

// Object: Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolBuilder : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveToolBuilder, "InteractiveToolBuilder")
};

// Object: Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UClickDragToolBuilder : UInteractiveToolBuilder
{
	DEFINE_UE_CLASS_HELPERS(UClickDragToolBuilder, "ClickDragToolBuilder")
};

// Object: Class InteractiveToolsFramework.ClickDragTool
// Size: 0x88 (Inherited: 0x80)
struct UClickDragTool : UInteractiveTool
{
	DEFINE_UE_CLASS_HELPERS(UClickDragTool, "ClickDragTool")

	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x300 (Inherited: 0x300)
struct AInternalToolFrameworkActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInternalToolFrameworkActor, "InternalToolFrameworkActor")
};

// Object: Class InteractiveToolsFramework.GizmoActor
// Size: 0x300 (Inherited: 0x300)
struct AGizmoActor : AInternalToolFrameworkActor
{
	DEFINE_UE_CLASS_HELPERS(AGizmoActor, "GizmoActor")
};

// Object: Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x6A0 (Inherited: 0x680)
struct UGizmoBaseComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UGizmoBaseComponent, "GizmoBaseComponent")

	struct FLinearColor Color; // 0x678(0x10)
	float HoverSizeMultiplier; // 0x688(0x4)
	float PixelHitDistanceThreshold; // 0x68C(0x4)
	uint8_t Pad_0x698[0x8]; // 0x698(0x8)

	// Object: Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// Flags: [Final|Native|Public]
	// Offset: 0xbd9a740
	// Params: [ Num(1) Size(0x1) ]
	void UpdateWorldLocalState(bool bWorldIn);

	// Object: Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// Flags: [Final|Native|Public]
	// Offset: 0xbd9a7f8
	// Params: [ Num(1) Size(0x1) ]
	void UpdateHoverState(bool bHoveringIn);
};

// Object: Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x6C0 (Inherited: 0x6A0)
struct UGizmoArrowComponent : UGizmoBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UGizmoArrowComponent, "GizmoArrowComponent")

	struct FVector Direction; // 0x698(0xC)
	float Gap; // 0x6A4(0x4)
	float Length; // 0x6A8(0x4)
	float Thickness; // 0x6AC(0x4)
	uint8_t Pad_0x6B8[0x8]; // 0x6B8(0x8)
};

// Object: Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x6E0 (Inherited: 0x6A0)
struct UGizmoBoxComponent : UGizmoBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UGizmoBoxComponent, "GizmoBoxComponent")

	struct FVector Origin; // 0x698(0xC)
	uint8_t Pad_0x6AC[0x4]; // 0x6AC(0x4)
	struct FQuat Rotation; // 0x6B0(0x10)
	struct FVector Dimensions; // 0x6C0(0xC)
	float LineThickness; // 0x6CC(0x4)
	bool bRemoveHiddenLines; // 0x6D0(0x1)
	bool bEnableAxisFlip; // 0x6D1(0x1)
	uint8_t Pad_0x6D2[0xE]; // 0x6D2(0xE)
};

// Object: Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x6C0 (Inherited: 0x6A0)
struct UGizmoCircleComponent : UGizmoBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UGizmoCircleComponent, "GizmoCircleComponent")

	struct FVector Normal; // 0x698(0xC)
	float Radius; // 0x6A4(0x4)
	float Thickness; // 0x6A8(0x4)
	int32_t NumSides; // 0x6AC(0x4)
	bool bViewAligned; // 0x6B0(0x1)
	bool bOnlyAllowFrontFacingHits; // 0x6B1(0x1)
	uint8_t Pad_0x6BA[0x6]; // 0x6BA(0x6)
};

// Object: Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoTransformSource : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGizmoTransformSource, "GizmoTransformSource")

	// Object: Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xbd9a918
	// Params: [ Num(1) Size(0x30) ]
	void SetTransform(const struct FTransform& NewTransform);

	// Object: Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xbd9a9fc
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetTransform();
};

// Object: Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoAxisSource : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGizmoAxisSource, "GizmoAxisSource")

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	// Flags: [Native|Public|Const]
	// Offset: 0xbd9ab78
	// Params: [ Num(1) Size(0x1) ]
	bool HasTangentVectors();

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	// Flags: [Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xbd9aa78
	// Params: [ Num(2) Size(0x18) ]
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut);

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xbd9abfc
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetOrigin();

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xbd9abb8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetDirection();
};

// Object: Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x28 (Inherited: 0x28)
struct IGizmoClickTarget : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGizmoClickTarget, "GizmoClickTarget")

	// Object: Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	// Flags: [Native|Public|Const]
	// Offset: 0xbd9ac54
	// Params: [ Num(1) Size(0x1) ]
	void UpdateHoverState(bool bHovering);
};

// Object: Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x28 (Inherited: 0x28)
struct IGizmoStateTarget : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGizmoStateTarget, "GizmoStateTarget")

	// Object: Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	// Flags: [Native|Public]
	// Offset: 0xbd9ad20
	// Params: [ Num(0) Size(0x0) ]
	void EndUpdate();

	// Object: Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	// Flags: [Native|Public]
	// Offset: 0xbd9ad3c
	// Params: [ Num(0) Size(0x0) ]
	void BeginUpdate();
};

// Object: Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoFloatParameterSource : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGizmoFloatParameterSource, "GizmoFloatParameterSource")

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	// Flags: [Native|Public]
	// Offset: 0xbd9ad7c
	// Params: [ Num(1) Size(0x4) ]
	void SetParameter(float NewValue);

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	// Flags: [Native|Public|Const]
	// Offset: 0xbd9ae48
	// Params: [ Num(1) Size(0x4) ]
	float GetParameter();

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	// Flags: [Native|Public]
	// Offset: 0xbd9ad60
	// Params: [ Num(0) Size(0x0) ]
	void EndModify();

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	// Flags: [Native|Public]
	// Offset: 0xbd9ae2c
	// Params: [ Num(0) Size(0x0) ]
	void BeginModify();
};

// Object: Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoVec2ParameterSource : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGizmoVec2ParameterSource, "GizmoVec2ParameterSource")

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xbd9aea8
	// Params: [ Num(1) Size(0x8) ]
	void SetParameter(const struct FVector2D& NewValue);

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xbd9af7c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetParameter();

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	// Flags: [Native|Public]
	// Offset: 0xbd9ae8c
	// Params: [ Num(0) Size(0x0) ]
	void EndModify();

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	// Flags: [Native|Public]
	// Offset: 0xbd9af60
	// Params: [ Num(0) Size(0x0) ]
	void BeginModify();
};

// Object: Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x6C0 (Inherited: 0x6A0)
struct UGizmoLineHandleComponent : UGizmoBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UGizmoLineHandleComponent, "GizmoLineHandleComponent")

	struct FVector Normal; // 0x698(0xC)
	float HandleSize; // 0x6A4(0x4)
	float Thickness; // 0x6A8(0x4)
	struct FVector Direction; // 0x6AC(0xC)
	float Length; // 0x6B8(0x4)
	bool bImageScale; // 0x6BC(0x1)
};

// Object: Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x6D0 (Inherited: 0x6A0)
struct UGizmoRectangleComponent : UGizmoBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UGizmoRectangleComponent, "GizmoRectangleComponent")

	struct FVector DirectionX; // 0x698(0xC)
	struct FVector DirectionY; // 0x6A4(0xC)
	float offsetX; // 0x6B0(0x4)
	float offsetY; // 0x6B4(0x4)
	float LengthX; // 0x6B8(0x4)
	float LengthY; // 0x6BC(0x4)
	float Thickness; // 0x6C0(0x4)
	uint8_t SegmentFlags; // 0x6C4(0x1)
	uint8_t Pad_0x6CD[0x3]; // 0x6CD(0x3)
};

// Object: Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xB0 (Inherited: 0x28)
struct UGizmoLambdaHitTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoLambdaHitTarget, "GizmoLambdaHitTarget")

	uint8_t Pad_0x28[0x88]; // 0x28(0x88)
};

// Object: Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x80 (Inherited: 0x28)
struct UGizmoComponentHitTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoComponentHitTarget, "GizmoComponentHitTarget")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UPrimitiveComponent* Component; // 0x30(0x8)
	uint8_t Pad_0x38[0x48]; // 0x38(0x48)
};

// Object: Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x38 (Inherited: 0x28)
struct UInputBehaviorSet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInputBehaviorSet, "InputBehaviorSet")

	struct TArray<struct FBehaviorInfo> Behaviors; // 0x28(0x10)
};

// Object: Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x28 (Inherited: 0x28)
struct IInputBehaviorSource : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IInputBehaviorSource, "InputBehaviorSource")
};

// Object: Class InteractiveToolsFramework.InputRouter
// Size: 0xB0 (Inherited: 0x28)
struct UInputRouter : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInputRouter, "InputRouter")

	bool bAutoInvalidateOnHover; // 0x28(0x1)
	bool bAutoInvalidateOnCapture; // 0x29(0x1)
	uint8_t Pad_0x2A[0xE]; // 0x2A(0xE)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x38(0x8)
	uint8_t Pad_0x40[0x70]; // 0x40(0x70)
};

// Object: Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x30 (Inherited: 0x28)
struct UInteractionMechanic : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractionMechanic, "InteractionMechanic")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xB8 (Inherited: 0x28)
struct UInteractiveGizmoManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveGizmoManager, "InteractiveGizmoManager")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x30(0x10)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58(0x50)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
};

// Object: Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x28 (Inherited: 0x28)
struct IToolContextTransactionProvider : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IToolContextTransactionProvider, "ToolContextTransactionProvider")
};

// Object: Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x138 (Inherited: 0x28)
struct UInteractiveToolManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveToolManager, "InteractiveToolManager")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UInteractiveTool* ActiveLeftTool; // 0x30(0x8)
	struct UInteractiveTool* ActiveRightTool; // 0x38(0x8)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0x90(0x50)
	uint8_t Pad_0xE0[0x58]; // 0xE0(0x58)
};

// Object: Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x28 (Inherited: 0x28)
struct IToolFrameworkComponent : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IToolFrameworkComponent, "ToolFrameworkComponent")
};

// Object: Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x98 (Inherited: 0x28)
struct UInteractiveToolsContext : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveToolsContext, "InteractiveToolsContext")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	struct UInputRouter* InputRouter; // 0x58(0x8)
	struct UInteractiveToolManager* ToolManager; // 0x60(0x8)
	struct UInteractiveGizmoManager* GizmoManager; // 0x68(0x8)
	struct TSoftClassPtr<struct UInteractiveToolManager*> ToolManagerClass; // 0x70(0x28)
};

// Object: Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x318 (Inherited: 0x300)
struct AIntervalGizmoActor : AGizmoActor
{
	DEFINE_UE_CLASS_HELPERS(AIntervalGizmoActor, "IntervalGizmoActor")

	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x300(0x8)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x308(0x8)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x310(0x8)
};

// Object: Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xC0 (Inherited: 0x28)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder
{
	DEFINE_UE_CLASS_HELPERS(UIntervalGizmoBuilder, "IntervalGizmoBuilder")

	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
};

// Object: Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x130 (Inherited: 0x38)
struct UIntervalGizmo : UInteractiveGizmo
{
	DEFINE_UE_CLASS_HELPERS(UIntervalGizmo, "IntervalGizmo")

	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x38(0x8)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct UTransformProxy* TransformProxy; // 0x50(0x8)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x58(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x68(0x10)
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x90(0x8)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x98(0x8)
	uint8_t Pad_0xA0[0x90]; // 0xA0(0x90)
};

// Object: Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseFloatParameterSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoBaseFloatParameterSource, "GizmoBaseFloatParameterSource")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoAxisIntervalParameterSource, "GizmoAxisIntervalParameterSource")

	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48(0x10)
	float MinParameter; // 0x58(0x4)
	float MaxParameter; // 0x5C(0x4)
};

// Object: Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x110 (Inherited: 0x30)
struct UKeyAsModifierInputBehavior : UInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(UKeyAsModifierInputBehavior, "KeyAsModifierInputBehavior")

	uint8_t Pad_0x30[0xE0]; // 0x30(0xE0)
};

// Object: Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder
{
	DEFINE_UE_CLASS_HELPERS(UMeshSurfacePointToolBuilder, "MeshSurfacePointToolBuilder")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x98 (Inherited: 0x30)
struct UMouseHoverBehavior : UInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(UMouseHoverBehavior, "MouseHoverBehavior")

	uint8_t Pad_0x30[0x68]; // 0x30(0x68)
};

// Object: Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x120 (Inherited: 0x70)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(UMultiClickSequenceInputBehavior, "MultiClickSequenceInputBehavior")

	uint8_t Pad_0x70[0xB0]; // 0x70(0xB0)
};

// Object: Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x90 (Inherited: 0x80)
struct UMultiSelectionTool : UInteractiveTool
{
	DEFINE_UE_CLASS_HELPERS(UMultiSelectionTool, "MultiSelectionTool")

	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoLocalFloatParameterSource, "GizmoLocalFloatParameterSource")

	float Value; // 0x48(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x4C(0x8)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseVec2ParameterSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoBaseVec2ParameterSource, "GizmoBaseVec2ParameterSource")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoLocalVec2ParameterSource, "GizmoLocalVec2ParameterSource")

	struct FVector2D Value; // 0x48(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0x50(0x10)
};

// Object: Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x110 (Inherited: 0x48)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoAxisTranslationParameterSource, "GizmoAxisTranslationParameterSource")

	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	float Parameter; // 0xB0(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0xB4(0x8)
	struct FVector CurTranslationAxis; // 0xBC(0xC)
	struct FVector CurTranslationOrigin; // 0xC8(0xC)
	uint8_t Pad_0xD4[0xC]; // 0xD4(0xC)
	struct FTransform InitialTransform; // 0xE0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoPlaneTranslationParameterSource, "GizmoPlaneTranslationParameterSource")

	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	struct FVector2D Parameter; // 0xB0(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0xB8(0x10)
	struct FVector CurTranslationOrigin; // 0xC8(0xC)
	struct FVector CurTranslationNormal; // 0xD4(0xC)
	struct FVector CurTranslationAxisX; // 0xE0(0xC)
	struct FVector CurTranslationAxisY; // 0xEC(0xC)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0x110 (Inherited: 0x48)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoAxisRotationParameterSource, "GizmoAxisRotationParameterSource")

	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	float Angle; // 0xB0(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0xB4(0x8)
	struct FVector CurRotationAxis; // 0xBC(0xC)
	struct FVector CurRotationOrigin; // 0xC8(0xC)
	uint8_t Pad_0xD4[0xC]; // 0xD4(0xC)
	struct FTransform InitialTransform; // 0xE0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0xF0 (Inherited: 0x48)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoUniformScaleParameterSource, "GizmoUniformScaleParameterSource")

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x4)
	struct FVector2D Parameter; // 0x6C(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0x74(0x10)
	struct FVector CurScaleOrigin; // 0x84(0xC)
	struct FVector CurScaleNormal; // 0x90(0xC)
	struct FVector CurScaleAxisX; // 0x9C(0xC)
	struct FVector CurScaleAxisY; // 0xA8(0xC)
	uint8_t Pad_0xB4[0xC]; // 0xB4(0xC)
	struct FTransform InitialTransform; // 0xC0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0xC0 (Inherited: 0x48)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoAxisScaleParameterSource, "GizmoAxisScaleParameterSource")

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x4)
	float Parameter; // 0x6C(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x70(0x8)
	struct FVector CurScaleAxis; // 0x78(0xC)
	struct FVector CurScaleOrigin; // 0x84(0xC)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoPlaneScaleParameterSource, "GizmoPlaneScaleParameterSource")

	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	float ScaleMultiplier; // 0xB0(0x4)
	struct FVector2D Parameter; // 0xB4(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0xBC(0x10)
	struct FVector CurScaleOrigin; // 0xCC(0xC)
	struct FVector CurScaleNormal; // 0xD8(0xC)
	struct FVector CurScaleAxisX; // 0xE4(0xC)
	struct FVector CurScaleAxisY; // 0xF0(0xC)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Object: Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder
{
	DEFINE_UE_CLASS_HELPERS(UPlanePositionGizmoBuilder, "PlanePositionGizmoBuilder")
};

// Object: Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x100 (Inherited: 0x38)
struct UPlanePositionGizmo : UInteractiveGizmo
{
	DEFINE_UE_CLASS_HELPERS(UPlanePositionGizmo, "PlanePositionGizmo")

	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x1)
	bool bFlipX; // 0x89(0x1)
	bool bFlipY; // 0x8A(0x1)
	bool bInInteraction; // 0x8B(0x1)
	struct FVector InteractionOrigin; // 0x8C(0xC)
	struct FVector InteractionNormal; // 0x98(0xC)
	struct FVector InteractionAxisX; // 0xA4(0xC)
	struct FVector InteractionAxisY; // 0xB0(0xC)
	struct FVector InteractionStartPoint; // 0xBC(0xC)
	struct FVector InteractionCurPoint; // 0xC8(0xC)
	struct FVector2D InteractionStartParameter; // 0xD4(0x8)
	struct FVector2D InteractionCurParameter; // 0xDC(0x8)
	struct FVector2D ParameterSigns; // 0xE4(0x8)
	uint8_t Pad_0xEC[0x14]; // 0xEC(0x14)
};

// Object: Class InteractiveToolsFramework.SelectionSet
// Size: 0x40 (Inherited: 0x28)
struct USelectionSet : UObject
{
	DEFINE_UE_CLASS_HELPERS(USelectionSet, "SelectionSet")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x80 (Inherited: 0x40)
struct UMeshSelectionSet : USelectionSet
{
	DEFINE_UE_CLASS_HELPERS(UMeshSelectionSet, "MeshSelectionSet")

	struct TArray<int32_t> Vertices; // 0x40(0x10)
	struct TArray<int32_t> Edges; // 0x50(0x10)
	struct TArray<int32_t> Faces; // 0x60(0x10)
	struct TArray<int32_t> Groups; // 0x70(0x10)
};

// Object: Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x120 (Inherited: 0x70)
struct USingleClickInputBehavior : UAnyButtonInputBehavior
{
	DEFINE_UE_CLASS_HELPERS(USingleClickInputBehavior, "SingleClickInputBehavior")

	uint8_t Pad_0x70[0x40]; // 0x70(0x40)
	bool HitTestOnRelease; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x6F]; // 0xB1(0x6F)
};

// Object: Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USingleClickToolBuilder : UInteractiveToolBuilder
{
	DEFINE_UE_CLASS_HELPERS(USingleClickToolBuilder, "SingleClickToolBuilder")
};

// Object: Class InteractiveToolsFramework.SingleClickTool
// Size: 0x88 (Inherited: 0x80)
struct USingleClickTool : UInteractiveTool
{
	DEFINE_UE_CLASS_HELPERS(USingleClickTool, "SingleClickTool")

	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x30 (Inherited: 0x28)
struct UGizmoNilStateTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoNilStateTarget, "GizmoNilStateTarget")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xB0 (Inherited: 0x28)
struct UGizmoLambdaStateTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoLambdaStateTarget, "GizmoLambdaStateTarget")

	uint8_t Pad_0x28[0x88]; // 0x28(0x88)
};

// Object: Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x58 (Inherited: 0x28)
struct UGizmoObjectModifyStateTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoObjectModifyStateTarget, "GizmoObjectModifyStateTarget")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0xE0 (Inherited: 0x28)
struct UGizmoTransformChangeStateTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoTransformChangeStateTarget, "GizmoTransformChangeStateTarget")

	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50(0x10)
	uint8_t Pad_0x60[0x80]; // 0x60(0x80)
};

// Object: Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x380 (Inherited: 0x300)
struct ATransformGizmoActor : AGizmoActor
{
	DEFINE_UE_CLASS_HELPERS(ATransformGizmoActor, "TransformGizmoActor")

	struct UPrimitiveComponent* TranslateX; // 0x300(0x8)
	struct UPrimitiveComponent* TranslateY; // 0x308(0x8)
	struct UPrimitiveComponent* TranslateZ; // 0x310(0x8)
	struct UPrimitiveComponent* TranslateYZ; // 0x318(0x8)
	struct UPrimitiveComponent* TranslateXZ; // 0x320(0x8)
	struct UPrimitiveComponent* TranslateXY; // 0x328(0x8)
	struct UPrimitiveComponent* RotateX; // 0x330(0x8)
	struct UPrimitiveComponent* RotateY; // 0x338(0x8)
	struct UPrimitiveComponent* RotateZ; // 0x340(0x8)
	struct UPrimitiveComponent* UniformScale; // 0x348(0x8)
	struct UPrimitiveComponent* AxisScaleX; // 0x350(0x8)
	struct UPrimitiveComponent* AxisScaleY; // 0x358(0x8)
	struct UPrimitiveComponent* AxisScaleZ; // 0x360(0x8)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x368(0x8)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x370(0x8)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x378(0x8)
};

// Object: Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0xC0 (Inherited: 0x28)
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder
{
	DEFINE_UE_CLASS_HELPERS(UTransformGizmoBuilder, "TransformGizmoBuilder")

	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
};

// Object: Class InteractiveToolsFramework.TransformGizmo
// Size: 0x1A0 (Inherited: 0x38)
struct UTransformGizmo : UInteractiveGizmo
{
	DEFINE_UE_CLASS_HELPERS(UTransformGizmo, "TransformGizmo")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct UTransformProxy* ActiveTarget; // 0x40(0x8)
	bool bSnapToWorldGrid; // 0x48(0x1)
	bool bGridSizeIsExplicit; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	struct FVector ExplicitGridSize; // 0x4C(0xC)
	bool bRotationGridSizeIsExplicit; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FRotator ExplicitRotationGridSize; // 0x5C(0xC)
	bool bSnapToWorldRotGrid; // 0x68(0x1)
	bool bUseContextCoordinateSystem; // 0x69(0x1)
	uint8_t Pad_0x6A[0x2]; // 0x6A(0x2)
	EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x6C(0x4)
	uint8_t Pad_0x70[0x90]; // 0x70(0x90)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x100(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0x110(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x120(0x10)
	uint8_t Pad_0x130[0x10]; // 0x130(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x140(0x8)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x148(0x8)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x150(0x8)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x158(0x8)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x160(0x8)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x168(0x8)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x170(0x8)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x178(0x8)
	struct UGizmoScaledTransformSource* ScaledTransformSource; // 0x180(0x8)
	uint8_t Pad_0x188[0x18]; // 0x188(0x18)
};

// Object: Class InteractiveToolsFramework.TransformProxy
// Size: 0xF0 (Inherited: 0x28)
struct UTransformProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTransformProxy, "TransformProxy")

	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
	bool bRotatePerObject; // 0x70(0x1)
	bool bSetPivotMode; // 0x71(0x1)
	uint8_t Pad_0x72[0x1E]; // 0x72(0x1E)
	struct FTransform SharedTransform; // 0x90(0x30)
	struct FTransform InitialSharedTransform; // 0xC0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseTransformSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGizmoBaseTransformSource, "GizmoBaseTransformSource")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoComponentWorldTransformSource, "GizmoComponentWorldTransformSource")

	struct USceneComponent* Component; // 0x48(0x8)
	bool bModifyComponentOnTransform; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xE0 (Inherited: 0x48)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoScaledTransformSource, "GizmoScaledTransformSource")

	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48(0x10)
	uint8_t Pad_0x58[0x88]; // 0x58(0x88)
};

// Object: Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x50 (Inherited: 0x48)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource
{
	DEFINE_UE_CLASS_HELPERS(UGizmoTransformProxyTransformSource, "GizmoTransformProxyTransformSource")

	struct UTransformProxy* Proxy; // 0x48(0x8)
};

} // namespace SDK
