#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "AnimationCore.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "LevelSequence.hpp"
#include "MovieScene.hpp"
#include "MovieSceneTracks.hpp"
#include "PropertyPath.hpp"
#include "RigVM.hpp"

namespace SDK
{

// Package: ControlRig
// Enums: 37
// Structs: 544
// Classes: 20

struct AActor;
enum class EAnimAlphaInputType : uint8_t;
struct FCCDIKChainLink;
struct FConstraintData;
struct FFABRIKChainLink;
struct FTransformConstraint;
struct UAnimSequence;
struct UAnimationDataSourceRegistry;
struct UAssetUserData;
struct UMaterial;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMovieSceneSection;
struct UNodeMappingContainer;
struct URigVM;
struct USceneComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct FAnimationHierarchy;
struct FConstraintNodeData;
struct FControlRigIOSettings;
struct FAnimNode_ControlRigBase;
struct FAnimNode_ControlRig;
struct FAnimNode_ControlRig_ExternalSource;
struct FControlRigAnimInstanceProxy;
struct FControlRigComponentMappedCurve;
struct FControlRigComponentMappedBone;
struct FControlRigComponentMappedComponent;
struct FControlRigComponentMappedElement;
struct FControlRigExecuteContext;
struct FControlRigDrawContainer;
struct FControlRigDrawInstruction;
struct FControlRigDrawInterface;
struct FGizmoActorCreationParam;
struct FControlRigGizmoDefinition;
struct FControlRigLayerInstanceProxy;
struct FAnimNode_ControlRigInputPose;
struct FCRFourPointBezier;
struct FControlRigSequenceObjectReferenceMap;
struct FControlRigSequenceObjectReferences;
struct FControlRigSequenceObjectReference;
struct FControlRigSequencerAnimInstanceProxy;
struct FControlRigSettingsPerPinBool;
struct FControlRigValidationContext;
struct FCRSimContainer;
struct FCRSimLinearSpring;
struct FCRSimPoint;
struct FCRSimPointConstraint;
struct FCRSimPointContainer;
struct FCRSimSoftCollision;
struct FCRSimPointForce;
struct FMovieSceneControlRigInstanceData;
struct FChannelMapInfo;
struct FIntegerParameterNameAndCurve;
struct FEnumParameterNameAndCurve;
struct FMovieSceneControlRigParameterTemplate;
struct FRigBoneHierarchy;
struct FRigElement;
struct FRigBone;
struct FRigControlHierarchy;
struct FRigControlValueStorage;
struct FRigControlValue;
struct FRigControl;
struct FRigCurveContainer;
struct FRigCurve;
struct FRigElementKey;
struct FCachedRigElement;
struct FRigHierarchyRef;
struct FRigSpaceHierarchy;
struct FRigHierarchyContainer;
struct FRigSpace;
struct FRigMirrorSettings;
struct FRigHierarchyCopyPasteContent;
struct FRigEventContext;
struct FRigElementKeyCollection;
struct FRigControlModifiedContext;
struct FRigPose;
struct FRigPoseElement;
struct FRigInfluenceMapPerEvent;
struct FRigInfluenceMap;
struct FRigInfluenceEntry;
struct FRigInfluenceEntryModifier;
struct FRigUnit;
struct FRigUnitMutable;
struct FRigUnit_SimBase;
struct FRigUnit_AccumulateVectorRange;
struct FRigUnit_AccumulateFloatRange;
struct FRigUnit_AccumulateTransformLerp;
struct FRigUnit_AccumulateQuatLerp;
struct FRigUnit_AccumulateVectorLerp;
struct FRigUnit_AccumulateFloatLerp;
struct FRigUnit_AccumulateTransformMul;
struct FRigUnit_AccumulateQuatMul;
struct FRigUnit_AccumulateVectorMul;
struct FRigUnit_AccumulateFloatMul;
struct FRigUnit_AccumulateVectorAdd;
struct FRigUnit_AccumulateFloatAdd;
struct FRigUnit_AddBoneTransform;
struct FRigUnit_HighlevelBaseMutable;
struct FRigUnit_AimBone_DebugSettings;
struct FRigUnit_AimItem_Target;
struct FRigUnit_AimItem;
struct FRigUnit_AimBone_Target;
struct FRigUnit_AimBone;
struct FRigUnit_HighlevelBase;
struct FRigUnit_AimBoneMath;
struct FRigUnit_AimConstraint_WorkData;
struct FRigUnit_AimConstraint;
struct FAimTarget;
struct FRigUnit_AlphaInterpVector;
struct FRigUnit_AlphaInterp;
struct FRigUnit_AnimBase;
struct FRigUnit_AnimEasing;
struct FRigUnit_AnimEasingType;
struct FRigUnit_AnimEvalRichCurve;
struct FRigUnit_AnimRichCurve;
struct FRigUnit_ApplyFK;
struct FRigUnit_BeginExecution;
struct FRigUnit_BlendTransform;
struct FBlendTarget;
struct FRigUnit_BoneHarmonics_WorkData;
struct FRigUnit_ItemHarmonics;
struct FRigUnit_Harmonics_TargetItem;
struct FRigUnit_BoneHarmonics;
struct FRigUnit_BoneHarmonics_BoneTarget;
struct FRigUnit_ControlName;
struct FRigUnit_SpaceName;
struct FRigUnit_BoneName;
struct FRigUnit_Item;
struct FRigUnit_CCDIK_WorkData;
struct FRigUnit_CCDIKPerItem;
struct FRigUnit_CCDIK_RotationLimitPerItem;
struct FRigUnit_CCDIK;
struct FRigUnit_CCDIK_RotationLimit;
struct FRigUnit_ChainHarmonics_Pendulum;
struct FRigUnit_ChainHarmonics_Reach;
struct FRigUnit_ChainHarmonics_Wave;
struct FRigUnit_ChainHarmonics_WorkData;
struct FRigUnit_ChainHarmonicsPerItem;
struct FRigUnit_ChainHarmonics;
struct FRigUnit_CollectionBaseMutable;
struct FRigUnit_CollectionLoop;
struct FRigUnit_CollectionBase;
struct FRigUnit_CollectionItemAtIndex;
struct FRigUnit_CollectionCount;
struct FRigUnit_CollectionReverse;
struct FRigUnit_CollectionDifference;
struct FRigUnit_CollectionIntersection;
struct FRigUnit_CollectionUnion;
struct FRigUnit_CollectionItems;
struct FRigUnit_CollectionReplaceItems;
struct FRigUnit_CollectionChildren;
struct FRigUnit_CollectionNameSearch;
struct FRigUnit_CollectionChain;
struct FRigUnit_Control;
struct FRigUnit_Control_StaticMesh;
struct FRigUnit_ToSwingAndTwist;
struct FRigUnit_ConvertQuaternionToVector;
struct FRigUnit_ConvertRotationToVector;
struct FRigUnit_ConvertVectorToQuaternion;
struct FRigUnit_ConvertVectorToRotation;
struct FRigUnit_ConvertQuaternion;
struct FRigUnit_ConvertRotation;
struct FRigUnit_ConvertVectorRotation;
struct FRigUnit_ConvertEulerTransform;
struct FRigUnit_ConvertTransform;
struct FRigUnit_DebugBaseMutable;
struct FRigUnit_DebugBase;
struct FRigUnit_DebugBezierItemSpace;
struct FRigUnit_DebugBezier;
struct FRigUnit_DebugHierarchy;
struct FRigUnit_DebugLineItemSpace;
struct FRigUnit_DebugLine;
struct FRigUnit_DebugLineStripItemSpace;
struct FRigUnit_DebugLineStrip;
struct FRigUnit_DebugPointMutable;
struct FRigUnit_DebugPoint;
struct FRigUnit_DebugArcItemSpace;
struct FRigUnit_DebugArc;
struct FRigUnit_DebugRectangleItemSpace;
struct FRigUnit_DebugRectangle;
struct FRigUnit_DebugTransformArrayMutable_WorkData;
struct FRigUnit_DebugTransformArrayMutable;
struct FRigUnit_DebugTransformMutableItemSpace;
struct FRigUnit_DebugTransformMutable;
struct FRigUnit_DebugTransform;
struct FRigUnit_DeltaFromPreviousTransform;
struct FRigUnit_DeltaFromPreviousQuat;
struct FRigUnit_DeltaFromPreviousVector;
struct FRigUnit_DeltaFromPreviousFloat;
struct FRigUnit_DistributeRotation_WorkData;
struct FRigUnit_DistributeRotationForCollection;
struct FRigUnit_DistributeRotation_Rotation;
struct FRigUnit_DistributeRotation;
struct FRigUnit_DrawContainerSetTransform;
struct FRigUnit_DrawContainerSetThickness;
struct FRigUnit_DrawContainerSetColor;
struct FRigUnit_DrawContainerGetInstruction;
struct FRigUnit_FABRIK_WorkData;
struct FRigUnit_FABRIKPerItem;
struct FRigUnit_FABRIK;
struct FRigUnit_FitChainToCurve_DebugSettings;
struct FRigUnit_FitChainToCurve_WorkData;
struct FRigUnit_FitChainToCurvePerItem;
struct FRigUnit_FitChainToCurve_Rotation;
struct FRigUnit_FitChainToCurve;
struct FRigUnit_MapRange_Float;
struct FRigUnit_Clamp_Float;
struct FRigUnit_BinaryFloatOp;
struct FRigUnit_Divide_FloatFloat;
struct FRigUnit_Subtract_FloatFloat;
struct FRigUnit_Add_FloatFloat;
struct FRigUnit_Multiply_FloatFloat;
struct FRigUnit_ForLoopCount;
struct FRigUnit_GetBoneTransform;
struct FRigUnit_GetControlInitialTransform;
struct FRigUnit_GetControlTransform;
struct FRigUnit_GetControlRotator;
struct FRigUnit_GetControlVector;
struct FRigUnit_GetControlVector2D;
struct FRigUnit_GetControlInteger;
struct FRigUnit_GetControlFloat;
struct FRigUnit_GetControlBool;
struct FRigUnit_GetCurveValue;
struct FRigUnit_GetDeltaTime;
struct FRigUnit_GetInitialBoneTransform;
struct FRigUnit_GetJointTransform;
struct FRigUnit_GetRelativeBoneTransform;
struct FRigUnit_GetRelativeTransformForItem;
struct FRigUnit_GetSpaceTransform;
struct FRigUnit_GetTransform;
struct FRigUnit_GetWorldTime;
struct FRigUnit_HierarchyBase;
struct FRigUnit_HierarchyGetSiblings;
struct FRigUnit_HierarchyGetChildren;
struct FRigUnit_HierarchyGetParents;
struct FRigUnit_HierarchyGetParent;
struct FRigUnit_InverseExecution;
struct FRigUnit_IsInteracting;
struct FRigUnit_ItemBase;
struct FRigUnit_ItemReplace;
struct FRigUnit_ItemExists;
struct FRigUnit_ItemBaseMutable;
struct FRigUnit_KalmanTransform;
struct FRigUnit_KalmanVector;
struct FRigUnit_KalmanFloat;
struct FRigUnit_MathBase;
struct FRigUnit_MathBoolBase;
struct FRigUnit_MathBoolNotEquals;
struct FRigUnit_MathBoolEquals;
struct FRigUnit_MathBoolBinaryOp;
struct FRigUnit_MathBoolOr;
struct FRigUnit_MathBoolNand;
struct FRigUnit_MathBoolAnd;
struct FRigUnit_MathBoolUnaryOp;
struct FRigUnit_MathBoolNot;
struct FRigUnit_MathBoolConstant;
struct FRigUnit_MathBoolConstFalse;
struct FRigUnit_MathBoolConstTrue;
struct FRigUnit_MathColorBase;
struct FRigUnit_MathColorLerp;
struct FRigUnit_MathColorBinaryOp;
struct FRigUnit_MathColorMul;
struct FRigUnit_MathColorSub;
struct FRigUnit_MathColorAdd;
struct FRigUnit_MathColorFromFloat;
struct FRigUnit_MathFloatBase;
struct FRigUnit_MathFloatLawOfCosine;
struct FRigUnit_MathFloatUnaryOp;
struct FRigUnit_MathFloatAtan;
struct FRigUnit_MathFloatAcos;
struct FRigUnit_MathFloatAsin;
struct FRigUnit_MathFloatTan;
struct FRigUnit_MathFloatCos;
struct FRigUnit_MathFloatSin;
struct FRigUnit_MathFloatRad;
struct FRigUnit_MathFloatDeg;
struct FRigUnit_MathFloatSelectBool;
struct FRigUnit_MathFloatIsNearlyEqual;
struct FRigUnit_MathFloatIsNearlyZero;
struct FRigUnit_MathFloatLessEqual;
struct FRigUnit_MathFloatGreaterEqual;
struct FRigUnit_MathFloatLess;
struct FRigUnit_MathFloatGreater;
struct FRigUnit_MathFloatNotEquals;
struct FRigUnit_MathFloatEquals;
struct FRigUnit_MathFloatRemap;
struct FRigUnit_MathFloatLerp;
struct FRigUnit_MathFloatClamp;
struct FRigUnit_MathFloatSign;
struct FRigUnit_MathFloatToInt;
struct FRigUnit_MathFloatRound;
struct FRigUnit_MathFloatCeil;
struct FRigUnit_MathFloatFloor;
struct FRigUnit_MathFloatAbs;
struct FRigUnit_MathFloatNegate;
struct FRigUnit_MathFloatSqrt;
struct FRigUnit_MathFloatBinaryOp;
struct FRigUnit_MathFloatPow;
struct FRigUnit_MathFloatMax;
struct FRigUnit_MathFloatMin;
struct FRigUnit_MathFloatMod;
struct FRigUnit_MathFloatDiv;
struct FRigUnit_MathFloatMul;
struct FRigUnit_MathFloatSub;
struct FRigUnit_MathFloatAdd;
struct FRigUnit_MathFloatConstant;
struct FRigUnit_MathFloatConstTwoPi;
struct FRigUnit_MathFloatConstHalfPi;
struct FRigUnit_MathFloatConstPi;
struct FRigUnit_MathIntBase;
struct FRigUnit_MathIntLessEqual;
struct FRigUnit_MathIntGreaterEqual;
struct FRigUnit_MathIntLess;
struct FRigUnit_MathIntGreater;
struct FRigUnit_MathIntNotEquals;
struct FRigUnit_MathIntEquals;
struct FRigUnit_MathIntClamp;
struct FRigUnit_MathIntUnaryOp;
struct FRigUnit_MathIntSign;
struct FRigUnit_MathIntToFloat;
struct FRigUnit_MathIntAbs;
struct FRigUnit_MathIntNegate;
struct FRigUnit_MathIntBinaryOp;
struct FRigUnit_MathIntPow;
struct FRigUnit_MathIntMax;
struct FRigUnit_MathIntMin;
struct FRigUnit_MathIntMod;
struct FRigUnit_MathIntDiv;
struct FRigUnit_MathIntMul;
struct FRigUnit_MathIntSub;
struct FRigUnit_MathIntAdd;
struct FRigUnit_MathQuaternionRotationOrder;
struct FRigUnit_MathQuaternionBase;
struct FRigUnit_MathQuaternionSwingTwist;
struct FRigUnit_MathQuaternionGetAxis;
struct FRigUnit_MathQuaternionRotateVector;
struct FRigUnit_MathQuaternionUnaryOp;
struct FRigUnit_MathQuaternionUnit;
struct FRigUnit_MathQuaternionDot;
struct FRigUnit_MathQuaternionSelectBool;
struct FRigUnit_MathQuaternionNotEquals;
struct FRigUnit_MathQuaternionEquals;
struct FRigUnit_MathQuaternionSlerp;
struct FRigUnit_MathQuaternionInverse;
struct FRigUnit_MathQuaternionBinaryOp;
struct FRigUnit_MathQuaternionMul;
struct FRigUnit_MathQuaternionToRotator;
struct FRigUnit_MathQuaternionToEuler;
struct FRigUnit_MathQuaternionScale;
struct FRigUnit_MathQuaternionToAxisAndAngle;
struct FRigUnit_MathQuaternionFromTwoVectors;
struct FRigUnit_MathQuaternionFromRotator;
struct FRigUnit_MathQuaternionFromEuler;
struct FRigUnit_MathQuaternionFromAxisAndAngle;
struct FRigUnit_MathRBFInterpolateBase;
struct FRigUnit_MathRBFInterpolateVectorWorkData;
struct FRigUnit_MathRBFInterpolateVectorBase;
struct FRigUnit_MathRBFInterpolateVectorXform;
struct FMathRBFInterpolateVectorXform_Target;
struct FRigUnit_MathRBFInterpolateVectorQuat;
struct FMathRBFInterpolateVectorQuat_Target;
struct FRigUnit_MathRBFInterpolateVectorColor;
struct FMathRBFInterpolateVectorColor_Target;
struct FRigUnit_MathRBFInterpolateVectorVector;
struct FMathRBFInterpolateVectorVector_Target;
struct FRigUnit_MathRBFInterpolateVectorFloat;
struct FMathRBFInterpolateVectorFloat_Target;
struct FRigUnit_MathRBFInterpolateQuatWorkData;
struct FRigUnit_MathRBFInterpolateQuatBase;
struct FRigUnit_MathRBFInterpolateQuatXform;
struct FMathRBFInterpolateQuatXform_Target;
struct FRigUnit_MathRBFInterpolateQuatQuat;
struct FMathRBFInterpolateQuatQuat_Target;
struct FRigUnit_MathRBFInterpolateQuatColor;
struct FMathRBFInterpolateQuatColor_Target;
struct FRigUnit_MathRBFInterpolateQuatVector;
struct FMathRBFInterpolateQuatVector_Target;
struct FRigUnit_MathRBFInterpolateQuatFloat;
struct FMathRBFInterpolateQuatFloat_Target;
struct FRigUnit_MathTransformBase;
struct FRigUnit_MathTransformClampSpatially;
struct FRigUnit_MathTransformFromSRT;
struct FRigUnit_MathTransformTransformVector;
struct FRigUnit_MathTransformRotateVector;
struct FRigUnit_MathTransformSelectBool;
struct FRigUnit_MathTransformLerp;
struct FRigUnit_MathTransformUnaryOp;
struct FRigUnit_MathTransformInverse;
struct FRigUnit_MathTransformMakeAbsolute;
struct FRigUnit_MathTransformMakeRelative;
struct FRigUnit_MathTransformBinaryOp;
struct FRigUnit_MathTransformMul;
struct FRigUnit_MathTransformToEulerTransform;
struct FRigUnit_MathTransformFromEulerTransform;
struct FRigUnit_MathVectorBase;
struct FRigUnit_MathIntersectPlane;
struct FRigUnit_MathVectorClampSpatially;
struct FRigUnit_MathVectorMakeBezierFourPoint;
struct FRigUnit_MathVectorBezierFourPoint;
struct FRigUnit_MathVectorOrthogonal;
struct FRigUnit_MathVectorParallel;
struct FRigUnit_MathVectorAngle;
struct FRigUnit_MathVectorMirror;
struct FRigUnit_MathVectorClampLength;
struct FRigUnit_MathVectorSetLength;
struct FRigUnit_MathVectorUnaryOp;
struct FRigUnit_MathVectorUnit;
struct FRigUnit_MathVectorDot;
struct FRigUnit_MathVectorBinaryOp;
struct FRigUnit_MathVectorCross;
struct FRigUnit_MathVectorDistance;
struct FRigUnit_MathVectorLength;
struct FRigUnit_MathVectorLengthSquared;
struct FRigUnit_MathVectorRad;
struct FRigUnit_MathVectorDeg;
struct FRigUnit_MathVectorSelectBool;
struct FRigUnit_MathVectorIsNearlyEqual;
struct FRigUnit_MathVectorIsNearlyZero;
struct FRigUnit_MathVectorNotEquals;
struct FRigUnit_MathVectorEquals;
struct FRigUnit_MathVectorRemap;
struct FRigUnit_MathVectorLerp;
struct FRigUnit_MathVectorClamp;
struct FRigUnit_MathVectorSign;
struct FRigUnit_MathVectorRound;
struct FRigUnit_MathVectorCeil;
struct FRigUnit_MathVectorFloor;
struct FRigUnit_MathVectorAbs;
struct FRigUnit_MathVectorNegate;
struct FRigUnit_MathVectorMax;
struct FRigUnit_MathVectorMin;
struct FRigUnit_MathVectorMod;
struct FRigUnit_MathVectorDiv;
struct FRigUnit_MathVectorScale;
struct FRigUnit_MathVectorMul;
struct FRigUnit_MathVectorSub;
struct FRigUnit_MathVectorAdd;
struct FRigUnit_MathVectorFromFloat;
struct FRigUnit_ModifyTransforms_WorkData;
struct FRigUnit_ModifyBoneTransforms_WorkData;
struct FRigUnit_ModifyBoneTransforms;
struct FRigUnit_ModifyBoneTransforms_PerBone;
struct FRigUnit_ModifyTransforms;
struct FRigUnit_ModifyTransforms_PerItem;
struct FRigUnit_MultiFABRIK_WorkData;
struct FRigUnit_MultiFABRIK;
struct FRigUnit_MultiFABRIK_EndEffector;
struct FRigUnit_NameBase;
struct FRigUnit_Contains;
struct FRigUnit_StartsWith;
struct FRigUnit_EndsWith;
struct FRigUnit_NameReplace;
struct FRigUnit_NameTruncate;
struct FRigUnit_NameConcat;
struct FRigUnit_NoiseVector;
struct FRigUnit_NoiseFloat;
struct FRigUnit_OffsetTransformForItem;
struct FRigUnit_ParentSwitchConstraint;
struct FRigUnit_SimBaseMutable;
struct FRigUnit_PointSimulation_DebugSettings;
struct FRigUnit_PointSimulation_WorkData;
struct FRigUnit_PointSimulation;
struct FRigUnit_PointSimulation_BoneTarget;
struct FRigUnit_PrepareForExecution;
struct FRigUnit_EndProfilingTimer;
struct FRigUnit_StartProfilingTimer;
struct FRigUnit_ProjectTransformToNewParent;
struct FRigUnit_PropagateTransform;
struct FRigUnit_QuaternionToAngle;
struct FRigUnit_QuaternionFromAxisAndAngle;
struct FRigUnit_QuaternionToAxisAndAngle;
struct FRigUnit_UnaryQuaternionOp;
struct FRigUnit_InverseQuaterion;
struct FRigUnit_BinaryQuaternionOp;
struct FRigUnit_MultiplyQuaternion;
struct FRigUnit_RandomVector;
struct FRigUnit_RandomFloat;
struct FRigUnit_SendEvent;
struct FRigUnit_SequenceExecution;
struct FRigUnit_SetBoneInitialTransform;
struct FRigUnit_SetBoneRotation;
struct FRigUnit_SetBoneTransform;
struct FRigUnit_SetBoneTranslation;
struct FRigUnit_SetControlColor;
struct FRigUnit_SetControlOffset;
struct FRigUnit_SetControlTransform;
struct FRigUnit_SetMultiControlRotator;
struct FRigUnit_SetMultiControlRotator_Entry;
struct FRigUnit_SetControlRotator;
struct FRigUnit_SetControlVector;
struct FRigUnit_SetMultiControlVector2D;
struct FRigUnit_SetMultiControlVector2D_Entry;
struct FRigUnit_SetControlVector2D;
struct FRigUnit_SetMultiControlInteger;
struct FRigUnit_SetMultiControlInteger_Entry;
struct FRigUnit_SetControlInteger;
struct FRigUnit_SetMultiControlFloat;
struct FRigUnit_SetMultiControlFloat_Entry;
struct FRigUnit_SetControlFloat;
struct FRigUnit_SetMultiControlBool;
struct FRigUnit_SetMultiControlBool_Entry;
struct FRigUnit_SetControlBool;
struct FRigUnit_SetControlVisibility;
struct FRigUnit_SetCurveValue;
struct FRigUnit_SetRelativeBoneTransform;
struct FRigUnit_SetRelativeTransformForItem;
struct FRigUnit_SetSpaceInitialTransform;
struct FRigUnit_SetSpaceTransform;
struct FRigUnit_SetScale;
struct FRigUnit_SetRotation;
struct FRigUnit_SetTranslation;
struct FRigUnit_SetTransform;
struct FRigUnit_SlideChain_WorkData;
struct FRigUnit_SlideChainPerItem;
struct FRigUnit_SlideChain;
struct FRigUnit_SpringIK_DebugSettings;
struct FRigUnit_SpringIK_WorkData;
struct FRigUnit_SpringIK;
struct FRigUnit_SecondsToFrames;
struct FRigUnit_FramesToSeconds;
struct FRigUnit_Timeline;
struct FRigUnit_TimeOffsetTransform;
struct FRigUnit_TimeOffsetVector;
struct FRigUnit_TimeOffsetFloat;
struct FRigUnit_BinaryTransformOp;
struct FRigUnit_GetRelativeTransform;
struct FRigUnit_MultiplyTransform;
struct FRigUnit_TransformConstraint_WorkData;
struct FRigUnit_TransformConstraintPerItem;
struct FConstraintTarget;
struct FRigUnit_TransformConstraint;
struct FRigUnit_TwistBones_WorkData;
struct FRigUnit_TwistBonesPerItem;
struct FRigUnit_TwistBones;
struct FRigUnit_TwoBoneIKFK;
struct FRigUnit_TwoBoneIKSimpleTransforms;
struct FRigUnit_TwoBoneIKSimpleVectors;
struct FRigUnit_TwoBoneIKSimple_DebugSettings;
struct FRigUnit_TwoBoneIKSimplePerItem;
struct FRigUnit_TwoBoneIKSimple;
struct FRigUnit_Distance_VectorVector;
struct FRigUnit_BinaryVectorOp;
struct FRigUnit_Divide_VectorVector;
struct FRigUnit_Subtract_VectorVector;
struct FRigUnit_Add_VectorVector;
struct FRigUnit_Multiply_VectorVector;
struct FRigUnit_VerletIntegrateVector;
struct FRigUnit_VisualDebugTransformItemSpace;
struct FRigUnit_VisualDebugTransform;
struct FRigUnit_VisualDebugQuatItemSpace;
struct FRigUnit_VisualDebugQuat;
struct FRigUnit_VisualDebugVectorItemSpace;
struct FRigUnit_VisualDebugVector;
struct FRigUnit_SphereTraceWorld;
struct FRigUnit_ToRigSpace_Rotation;
struct FRigUnit_ToWorldSpace_Rotation;
struct FRigUnit_ToRigSpace_Location;
struct FRigUnit_ToWorldSpace_Location;
struct FRigUnit_ToRigSpace_Transform;
struct FRigUnit_ToWorldSpace_Transform;
struct FStructReference;
struct UControlRig;
struct UAdditiveControlRig;
struct UControlRigAnimInstance;
struct UControlRigBlueprintGeneratedClass;
struct UControlRigComponent;
struct AControlRigControlActor;
struct AControlRigGizmoActor;
struct UControlRigGizmoLibrary;
struct UControlRigLayerInstance;
struct UControlRigValidationPass;
struct UControlRigNumericalValidationPass;
struct UControlRigObjectHolder;
struct UControlRigSequence;
struct UControlRigSequencerAnimInstance;
struct UControlRigSettings;
struct UControlRigValidator;
struct UFKControlRig;
struct UMovieSceneControlRigParameterSection;
struct UMovieSceneControlRigParameterTrack;
struct Default__ControlRigBlueprintGeneratedClass;

// Object: Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
	Input = 0,
	Output = 1,
	EControlRigComponentMapDirection_MAX = 2
};

// Object: Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
	WorldSpace = 0,
	ActorSpace = 1,
	ComponentSpace = 2,
	RigSpace = 3,
	LocalSpace = 4,
	Max = 5
};

// Object: Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
	Runtime = 0,
	Editing = 1,
	Max = 2
};

// Object: Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2
};

// Object: Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
	Initial = 0,
	Current = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	EControlRigClampSpatialMode_MAX = 3
};

// Object: Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4
};

// Object: Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	DynamicMesh = 3,
	EControlRigDrawSettings_MAX = 4
};

// Object: Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
	Axes = 0,
	Max = 1
};

// Object: Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	EControlRigAnimEasingType_MAX = 31
};

// Object: Enum ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8_t
{
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	EControlRigRotationOrder_MAX = 6
};

// Object: Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
	Verlet = 0,
	SemiExplicitEuler = 1,
	ECRSimPointIntegrateType_MAX = 2
};

// Object: Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Object: Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Object: Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Object: Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
	Replace = 0,
	Additive = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Object: Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Object: Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Object: Enum ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
	Bool = 0,
	Float = 1,
	Integer = 2,
	Vector2D = 3,
	Position = 4,
	Scale = 5,
	Rotator = 6,
	Transform = 7,
	TransformNoScale = 8,
	EulerTransform = 9,
	ERigControlType_MAX = 10
};

// Object: Enum ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8_t
{
	Append = 0,
	Replace = 1,
	ReplaceLocalTransform = 2,
	ReplaceGlobalTransform = 3,
	Max = 4
};

// Object: Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
	DoNotCare = 0,
	Always = 1,
	Never = 2,
	EControlRigSetKey_MAX = 3
};

// Object: Enum ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
	None = 0,
	RequestAutoKey = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
	None = 0,
	Bone = 1,
	Space = 2,
	Control = 4,
	Curve = 8,
	All = 15,
	ERigElementType_MAX = 16
};

// Object: Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Object: Enum ControlRig.EAimMode
enum class EAimMode : uint8_t
{
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Object: Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
	Override = 0,
	Additive = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
	Point = 0,
	Vector = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3
};

// Object: Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Object: Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Object: Enum ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
	Euclidean = 0,
	Manhattan = 1,
	ArcLength = 2,
	ERBFVectorDistanceType_MAX = 3
};

// Object: Enum ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
	Euclidean = 0,
	ArcLength = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	ERBFQuatDistanceType_MAX = 4
};

// Object: Enum ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	ERBFKernelType_MAX = 5
};

// Object: Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4
};

// Object: Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	Point = 0,
	Vector = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
	Init = 0,
	Update = 1,
	Invalid = 2,
	EControlRigState_MAX = 3
};

// Object: ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88 (Inherited: 0x78)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{
	struct TArray<struct FConstraintNodeData> userdata; // 0x78(0x10)
};

// Object: ScriptStruct ControlRig.ConstraintNodeData
// Size: 0xB0 (Inherited: 0x0)
struct FConstraintNodeData
{
	struct FTransform RelativeParent; // 0x0(0x30)
	struct FConstraintOffset ConstraintOffset; // 0x30(0x60)
	struct FName LinkedNode; // 0x90(0x8)
	struct TArray<struct FTransformConstraint> Constraints; // 0x98(0x10)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigIOSettings
// Size: 0x2 (Inherited: 0x0)
struct FControlRigIOSettings
{
	bool bUpdatePose; // 0x0(0x1)
	bool bUpdateCurves; // 0x1(0x1)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x170 (Inherited: 0x58)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{
	struct FPoseLink Source; // 0x58(0x10)
	struct TMap<struct FName, uint16_t> ControlRigBoneMapping; // 0x68(0x50)
	struct TMap<struct FName, uint16_t> ControlRigCurveMapping; // 0xB8(0x50)
	struct TMap<struct FName, uint16_t> InputToCurveMappingUIDs; // 0x108(0x50)
	struct TWeakObjectPtr<struct UNodeMappingContainer> NodeMappingContainer; // 0x158(0x8)
	struct FControlRigIOSettings InputSettings; // 0x160(0x2)
	struct FControlRigIOSettings OutputSettings; // 0x162(0x2)
	bool bExecute; // 0x164(0x1)
	uint8_t Pad_0x165[0xB]; // 0x165(0xB)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x368 (Inherited: 0x170)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{
	struct UControlRig* ControlRigClass; // 0x170(0x8)
	struct UControlRig* ControlRig; // 0x178(0x8)
	float Alpha; // 0x180(0x4)
	EAnimAlphaInputType AlphaInputType; // 0x184(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x185(0x1), Mask(0x1)
	uint8_t bSetRefPoseFromSkeleton : 1; // 0x185(0x1), Mask(0x2)
	uint8_t BitPad_0x185_2 : 6; // 0x185(0x1)
	uint8_t Pad_0x186[0x2]; // 0x186(0x2)
	struct FInputScaleBias AlphaScaleBias; // 0x188(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x190(0x48)
	struct FName AlphaCurveName; // 0x1D8(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1E0(0x30)
	struct TMap<struct FName, struct FName> InputMapping; // 0x210(0x50)
	struct TMap<struct FName, struct FName> OutputMapping; // 0x260(0x50)
	uint8_t Pad_0x2B0[0xB0]; // 0x2B0(0xB0)
	int32_t LODThreshold; // 0x360(0x4)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x178 (Inherited: 0x170)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x16C(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// Size: 0x970 (Inherited: 0x8D0)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x8D0[0xA0]; // 0x8D0(0xA0)
};

// Object: ScriptStruct ControlRig.ControlRigComponentMappedCurve
// Size: 0x10 (Inherited: 0x0)
struct FControlRigComponentMappedCurve
{
	struct FName Source; // 0x0(0x8)
	struct FName Target; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigComponentMappedBone
// Size: 0x10 (Inherited: 0x0)
struct FControlRigComponentMappedBone
{
	struct FName Source; // 0x0(0x8)
	struct FName Target; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigComponentMappedComponent
// Size: 0x18 (Inherited: 0x0)
struct FControlRigComponentMappedComponent
{
	struct USceneComponent* Component; // 0x0(0x8)
	struct FName ElementName; // 0x8(0x8)
	ERigElementType ElementType; // 0x10(0x1)
	EControlRigComponentMapDirection Direction; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct ControlRig.ControlRigComponentMappedElement
// Size: 0xA0 (Inherited: 0x0)
struct FControlRigComponentMappedElement
{
	struct FComponentReference ComponentReference; // 0x0(0x28)
	int32_t TransformIndex; // 0x28(0x4)
	struct FName TransformName; // 0x2C(0x8)
	ERigElementType ElementType; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FName ElementName; // 0x38(0x8)
	EControlRigComponentMapDirection Direction; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
	struct FTransform Offset; // 0x50(0x30)
	float Weight; // 0x80(0x4)
	EControlRigComponentSpace Space; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct USceneComponent* SceneComponent; // 0x88(0x8)
	int32_t ElementIndex; // 0x90(0x4)
	int32_t SubIndex; // 0x94(0x4)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x60 (Inherited: 0x58)
struct FControlRigExecuteContext : FRigVMExecuteContext
{
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigDrawContainer
// Size: 0x18 (Inherited: 0x0)
struct FControlRigDrawContainer
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FControlRigDrawInstruction> Instructions; // 0x8(0x10)
};

// Object: ScriptStruct ControlRig.ControlRigDrawInstruction
// Size: 0xA0 (Inherited: 0x0)
struct FControlRigDrawInstruction
{
	struct FName Name; // 0x0(0x8)
	uint8_t PrimitiveType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FVector> Positions; // 0x10(0x10)
	struct FLinearColor Color; // 0x20(0x10)
	float Thickness; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FTransform Transform; // 0x40(0x30)
	uint8_t Pad_0x70[0x30]; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.ControlRigDrawInterface
// Size: 0x18 (Inherited: 0x18)
struct FControlRigDrawInterface : FControlRigDrawContainer
{
};

// Object: ScriptStruct ControlRig.GizmoActorCreationParam
// Size: 0x120 (Inherited: 0x0)
struct FGizmoActorCreationParam
{
	uint8_t Pad_0x0[0x120]; // 0x0(0x120)
};

// Object: ScriptStruct ControlRig.ControlRigGizmoDefinition
// Size: 0x60 (Inherited: 0x0)
struct FControlRigGizmoDefinition
{
	struct FName GizmoName; // 0x0(0x8)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x8(0x28)
	struct FTransform Transform; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x970 (Inherited: 0x8D0)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x8D0[0xA0]; // 0x8D0(0xA0)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.CRFourPointBezier
// Size: 0x30 (Inherited: 0x0)
struct FCRFourPointBezier
{
	struct FVector A; // 0x0(0xC)
	struct FVector B; // 0xC(0xC)
	struct FVector C; // 0x18(0xC)
	struct FVector D; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x0)
struct FControlRigSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds; // 0x0(0x10)
	struct TArray<struct FControlRigSequenceObjectReferences> References; // 0x10(0x10)
};

// Object: ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// Size: 0x10 (Inherited: 0x0)
struct FControlRigSequenceObjectReferences
{
	struct TArray<struct FControlRigSequenceObjectReference> Array; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.ControlRigSequenceObjectReference
// Size: 0x8 (Inherited: 0x0)
struct FControlRigSequenceObjectReference
{
	struct UControlRig* ControlRigClass; // 0x0(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// Size: 0xF00 (Inherited: 0xB60)
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{
	uint8_t Pad_0xB60[0x3A0]; // 0xB60(0x3A0)
};

// Object: ScriptStruct ControlRig.ControlRigSettingsPerPinBool
// Size: 0x50 (Inherited: 0x0)
struct FControlRigSettingsPerPinBool
{
	struct TMap<struct FString, bool> Values; // 0x0(0x50)
};

// Object: ScriptStruct ControlRig.ControlRigValidationContext
// Size: 0x28 (Inherited: 0x0)
struct FControlRigValidationContext
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct ControlRig.CRSimContainer
// Size: 0x18 (Inherited: 0x0)
struct FCRSimContainer
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float TimeStep; // 0x8(0x4)
	float AccumulatedTime; // 0xC(0x4)
	float TimeLeftForStep; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.CRSimLinearSpring
// Size: 0x10 (Inherited: 0x0)
struct FCRSimLinearSpring
{
	int32_t SubjectA; // 0x0(0x4)
	int32_t SubjectB; // 0x4(0x4)
	float Coefficient; // 0x8(0x4)
	float Equilibrium; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.CRSimPoint
// Size: 0x28 (Inherited: 0x0)
struct FCRSimPoint
{
	float Mass; // 0x0(0x4)
	float Size; // 0x4(0x4)
	float LinearDamping; // 0x8(0x4)
	float InheritMotion; // 0xC(0x4)
	struct FVector position; // 0x10(0xC)
	struct FVector LinearVelocity; // 0x1C(0xC)
};

// Object: ScriptStruct ControlRig.CRSimPointConstraint
// Size: 0x24 (Inherited: 0x0)
struct FCRSimPointConstraint
{
	ECRSimConstraintType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t SubjectA; // 0x4(0x4)
	int32_t SubjectB; // 0x8(0x4)
	struct FVector DataA; // 0xC(0xC)
	struct FVector DataB; // 0x18(0xC)
};

// Object: ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78 (Inherited: 0x18)
struct FCRSimPointContainer : FCRSimContainer
{
	struct TArray<struct FCRSimPoint> Points; // 0x18(0x10)
	struct TArray<struct FCRSimLinearSpring> Springs; // 0x28(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x38(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x48(0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints; // 0x58(0x10)
	struct TArray<struct FCRSimPoint> PreviousStep; // 0x68(0x10)
};

// Object: ScriptStruct ControlRig.CRSimSoftCollision
// Size: 0x50 (Inherited: 0x0)
struct FCRSimSoftCollision
{
	struct FTransform Transform; // 0x0(0x30)
	ECRSimSoftCollisionType ShapeType; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float MinimumDistance; // 0x34(0x4)
	float MaximumDistance; // 0x38(0x4)
	EControlRigAnimEasingType FalloffType; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float Coefficient; // 0x40(0x4)
	bool bInverted; // 0x44(0x1)
	uint8_t Pad_0x45[0xB]; // 0x45(0xB)
};

// Object: ScriptStruct ControlRig.CRSimPointForce
// Size: 0x18 (Inherited: 0x0)
struct FCRSimPointForce
{
	ECRSimPointForceType ForceType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector Vector; // 0x4(0xC)
	float Coefficient; // 0x10(0x4)
	bool bNormalize; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0xD8 (Inherited: 0x8)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{
	bool bAdditive; // 0x8(0x1)
	bool bApplyBoneFilter; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FInputBlendPose BoneFilter; // 0x10(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x20(0xA0)
	struct FMovieSceneEvaluationOperand Operand; // 0xC0(0x14)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct ControlRig.ChannelMapInfo
// Size: 0x18 (Inherited: 0x0)
struct FChannelMapInfo
{
	int32_t ControlIndex; // 0x0(0x4)
	int32_t TotalChannelIndex; // 0x4(0x4)
	int32_t ChannelIndex; // 0x8(0x4)
	int32_t ParentControlIndex; // 0xC(0x4)
	struct FName ChannelTypeName; // 0x10(0x8)
};

// Object: ScriptStruct ControlRig.IntegerParameterNameAndCurve
// Size: 0x98 (Inherited: 0x0)
struct FIntegerParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneIntegerChannel ParameterCurve; // 0x8(0x90)
};

// Object: ScriptStruct ControlRig.EnumParameterNameAndCurve
// Size: 0xA0 (Inherited: 0x0)
struct FEnumParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneByteChannel ParameterCurve; // 0x8(0x98)
};

// Object: ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0x98 (Inherited: 0x78)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FEnumParameterNameAndCurve> Enums; // 0x78(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers; // 0x88(0x10)
};

// Object: ScriptStruct ControlRig.RigBoneHierarchy
// Size: 0x98 (Inherited: 0x0)
struct FRigBoneHierarchy
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct TArray<struct FRigBone> Bones; // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x30(0x50)
	struct TArray<struct FName> Selection; // 0x80(0x10)
	uint8_t Pad_0x90[0x8]; // 0x90(0x8)
};

// Object: ScriptStruct ControlRig.RigElement
// Size: 0x18 (Inherited: 0x0)
struct FRigElement
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName Name; // 0x8(0x8)
	int32_t Index; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigBone
// Size: 0xD0 (Inherited: 0x18)
struct FRigBone : FRigElement
{
	struct FName ParentName; // 0x14(0x8)
	int32_t ParentIndex; // 0x1C(0x4)
	struct FTransform InitialTransform; // 0x20(0x30)
	struct FTransform GlobalTransform; // 0x50(0x30)
	struct FTransform LocalTransform; // 0x80(0x30)
	struct TArray<int32_t> Dependents; // 0xB0(0x10)
	ERigBoneType Type; // 0xC0(0x1)
	uint8_t Pad_0xC5[0xB]; // 0xC5(0xB)
};

// Object: ScriptStruct ControlRig.RigControlHierarchy
// Size: 0x108 (Inherited: 0x0)
struct FRigControlHierarchy
{
	uint8_t Pad_0x0[0x98]; // 0x0(0x98)
	struct TArray<struct FRigControl> Controls; // 0x98(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0xA8(0x50)
	struct TArray<struct FName> Selection; // 0xF8(0x10)
};

// Object: ScriptStruct ControlRig.RigControlValueStorage
// Size: 0x44 (Inherited: 0x0)
struct FRigControlValueStorage
{
	float Float00; // 0x0(0x4)
	float Float01; // 0x4(0x4)
	float Float02; // 0x8(0x4)
	float Float03; // 0xC(0x4)
	float Float10; // 0x10(0x4)
	float Float11; // 0x14(0x4)
	float Float12; // 0x18(0x4)
	float Float13; // 0x1C(0x4)
	float Float20; // 0x20(0x4)
	float Float21; // 0x24(0x4)
	float Float22; // 0x28(0x4)
	float Float23; // 0x2C(0x4)
	float Float30; // 0x30(0x4)
	float Float31; // 0x34(0x4)
	float Float32; // 0x38(0x4)
	float Float33; // 0x3C(0x4)
	bool bValid; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
};

// Object: ScriptStruct ControlRig.RigControlValue
// Size: 0x80 (Inherited: 0x0)
struct FRigControlValue
{
	struct FRigControlValueStorage FloatStorage; // 0x0(0x44)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FTransform Storage; // 0x50(0x30)
};

// Object: ScriptStruct ControlRig.RigControl
// Size: 0x2F0 (Inherited: 0x18)
struct FRigControl : FRigElement
{
	ERigControlType ControlType; // 0x14(0x1)
	struct FName DisplayName; // 0x18(0x8)
	struct FName ParentName; // 0x20(0x8)
	int32_t ParentIndex; // 0x28(0x4)
	struct FName SpaceName; // 0x2C(0x8)
	int32_t SpaceIndex; // 0x34(0x4)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FTransform OffsetTransform; // 0x40(0x30)
	struct FRigControlValue InitialValue; // 0x70(0x80)
	struct FRigControlValue Value; // 0xF0(0x80)
	ERigControlAxis PrimaryAxis; // 0x170(0x1)
	bool bIsCurve; // 0x171(0x1)
	bool bAnimatable; // 0x172(0x1)
	bool bLimitTranslation; // 0x173(0x1)
	bool bLimitRotation; // 0x174(0x1)
	bool bLimitScale; // 0x175(0x1)
	bool bDrawLimits; // 0x176(0x1)
	uint8_t Pad_0x177[0x9]; // 0x177(0x9)
	struct FRigControlValue MinimumValue; // 0x180(0x80)
	struct FRigControlValue MaximumValue; // 0x200(0x80)
	bool bGizmoEnabled; // 0x280(0x1)
	bool bGizmoVisible; // 0x281(0x1)
	uint8_t Pad_0x282[0x2]; // 0x282(0x2)
	struct FName GizmoName; // 0x284(0x8)
	uint8_t Pad_0x28C[0x4]; // 0x28C(0x4)
	struct FTransform GizmoTransform; // 0x290(0x30)
	struct FLinearColor GizmoColor; // 0x2C0(0x10)
	struct TArray<int32_t> Dependents; // 0x2D0(0x10)
	bool bIsTransientControl; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0x7]; // 0x2E1(0x7)
	struct UEnum* ControlEnum; // 0x2E8(0x8)
};

// Object: ScriptStruct ControlRig.RigCurveContainer
// Size: 0x98 (Inherited: 0x0)
struct FRigCurveContainer
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct TArray<struct FRigCurve> Curves; // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x30(0x50)
	struct TArray<struct FName> Selection; // 0x80(0x10)
	uint8_t Pad_0x90[0x8]; // 0x90(0x8)
};

// Object: ScriptStruct ControlRig.RigCurve
// Size: 0x18 (Inherited: 0x18)
struct FRigCurve : FRigElement
{
	float Value; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigElementKey
// Size: 0xC (Inherited: 0x0)
struct FRigElementKey
{
	ERigElementType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct ControlRig.CachedRigElement
// Size: 0x14 (Inherited: 0x0)
struct FCachedRigElement
{
	struct FRigElementKey Key; // 0x0(0xC)
	uint16_t Index; // 0xC(0x2)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	int32_t ContainerVersion; // 0x10(0x4)
};

// Object: ScriptStruct ControlRig.RigHierarchyRef
// Size: 0x1 (Inherited: 0x0)
struct FRigHierarchyRef
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct ControlRig.RigSpaceHierarchy
// Size: 0x90 (Inherited: 0x0)
struct FRigSpaceHierarchy
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct TArray<struct FRigSpace> Spaces; // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x30(0x50)
	struct TArray<struct FName> Selection; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigHierarchyContainer
// Size: 0x368 (Inherited: 0x0)
struct FRigHierarchyContainer
{
	struct FRigBoneHierarchy BoneHierarchy; // 0x0(0x98)
	struct FRigSpaceHierarchy SpaceHierarchy; // 0x98(0x90)
	struct FRigControlHierarchy ControlHierarchy; // 0x128(0x108)
	struct FRigCurveContainer CurveContainer; // 0x230(0x98)
	int32_t Version; // 0x2C8(0x4)
	uint8_t Pad_0x2CC[0x9C]; // 0x2CC(0x9C)
};

// Object: ScriptStruct ControlRig.RigSpace
// Size: 0x90 (Inherited: 0x18)
struct FRigSpace : FRigElement
{
	ERigSpaceType SpaceType; // 0x14(0x1)
	struct FName ParentName; // 0x18(0x8)
	int32_t ParentIndex; // 0x20(0x4)
	uint8_t Pad_0x25[0xB]; // 0x25(0xB)
	struct FTransform InitialTransform; // 0x30(0x30)
	struct FTransform LocalTransform; // 0x60(0x30)
};

// Object: ScriptStruct ControlRig.RigMirrorSettings
// Size: 0x28 (Inherited: 0x0)
struct FRigMirrorSettings
{
	uint8_t MirrorAxis; // 0x0(0x1)
	uint8_t AxisToFlip; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FString OldName; // 0x8(0x10)
	struct FString NewName; // 0x18(0x10)
};

// Object: ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// Size: 0x40 (Inherited: 0x0)
struct FRigHierarchyCopyPasteContent
{
	struct TArray<ERigElementType> Types; // 0x0(0x10)
	struct TArray<struct FString> Contents; // 0x10(0x10)
	struct TArray<struct FTransform> LocalTransforms; // 0x20(0x10)
	struct TArray<struct FTransform> GlobalTransforms; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigEventContext
// Size: 0x28 (Inherited: 0x0)
struct FRigEventContext
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct ControlRig.RigElementKeyCollection
// Size: 0x10 (Inherited: 0x0)
struct FRigElementKeyCollection
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigControlModifiedContext
// Size: 0x10 (Inherited: 0x0)
struct FRigControlModifiedContext
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigPose
// Size: 0x10 (Inherited: 0x0)
struct FRigPose
{
	struct TArray<struct FRigPoseElement> Elements; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigPoseElement
// Size: 0x90 (Inherited: 0x0)
struct FRigPoseElement
{
	struct FCachedRigElement Index; // 0x0(0x14)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FTransform GlobalTransform; // 0x20(0x30)
	struct FTransform LocalTransform; // 0x50(0x30)
	float CurveValue; // 0x80(0x4)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct ControlRig.RigInfluenceMapPerEvent
// Size: 0x60 (Inherited: 0x0)
struct FRigInfluenceMapPerEvent
{
	struct TArray<struct FRigInfluenceMap> Maps; // 0x0(0x10)
	struct TMap<struct FName, int32_t> EventToIndex; // 0x10(0x50)
};

// Object: ScriptStruct ControlRig.RigInfluenceMap
// Size: 0x68 (Inherited: 0x0)
struct FRigInfluenceMap
{
	struct FName EventName; // 0x0(0x8)
	struct TArray<struct FRigInfluenceEntry> Entries; // 0x8(0x10)
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex; // 0x18(0x50)
};

// Object: ScriptStruct ControlRig.RigInfluenceEntry
// Size: 0x20 (Inherited: 0x0)
struct FRigInfluenceEntry
{
	struct FRigElementKey Source; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FRigElementKey> AffectedList; // 0x10(0x10)
};

// Object: ScriptStruct ControlRig.RigInfluenceEntryModifier
// Size: 0x10 (Inherited: 0x0)
struct FRigInfluenceEntryModifier
{
	struct TArray<struct FRigElementKey> AffectedList; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit : FRigVMStruct
{
};

// Object: ScriptStruct ControlRig.RigUnitMutable
// Size: 0x68 (Inherited: 0x8)
struct FRigUnitMutable : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_SimBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_SimBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Minimum; // 0x14(0xC)
	struct FVector Maximum; // 0x20(0xC)
	struct FVector AccumulatedMinimum; // 0x2C(0xC)
	struct FVector AccumulatedMaximum; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float AccumulatedMinimum; // 0x14(0x4)
	float AccumulatedMaximum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0xE0 (Inherited: 0x8)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform TargetValue; // 0x10(0x30)
	struct FTransform InitialValue; // 0x40(0x30)
	float Blend; // 0x70(0x4)
	bool bIntegrateDeltaTime; // 0x74(0x1)
	uint8_t Pad_0x75[0xB]; // 0x75(0xB)
	struct FTransform Result; // 0x80(0x30)
	struct FTransform AccumulatedValue; // 0xB0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat TargetValue; // 0x10(0x10)
	struct FQuat InitialValue; // 0x20(0x10)
	float Blend; // 0x30(0x4)
	bool bIntegrateDeltaTime; // 0x34(0x1)
	uint8_t Pad_0x35[0xB]; // 0x35(0xB)
	struct FQuat Result; // 0x40(0x10)
	struct FQuat AccumulatedValue; // 0x50(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{
	struct FVector TargetValue; // 0x8(0xC)
	struct FVector InitialValue; // 0x14(0xC)
	float Blend; // 0x20(0x4)
	bool bIntegrateDeltaTime; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector Result; // 0x28(0xC)
	struct FVector AccumulatedValue; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{
	float TargetValue; // 0x8(0x4)
	float InitialValue; // 0xC(0x4)
	float Blend; // 0x10(0x4)
	bool bIntegrateDeltaTime; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float Result; // 0x18(0x4)
	float AccumulatedValue; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// Size: 0xE0 (Inherited: 0x8)
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Multiplier; // 0x10(0x30)
	struct FTransform InitialValue; // 0x40(0x30)
	bool bFlipOrder; // 0x70(0x1)
	bool bIntegrateDeltaTime; // 0x71(0x1)
	uint8_t Pad_0x72[0xE]; // 0x72(0xE)
	struct FTransform Result; // 0x80(0x30)
	struct FTransform AccumulatedValue; // 0xB0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Multiplier; // 0x10(0x10)
	struct FQuat InitialValue; // 0x20(0x10)
	bool bFlipOrder; // 0x30(0x1)
	bool bIntegrateDeltaTime; // 0x31(0x1)
	uint8_t Pad_0x32[0xE]; // 0x32(0xE)
	struct FQuat Result; // 0x40(0x10)
	struct FQuat AccumulatedValue; // 0x50(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{
	struct FVector Multiplier; // 0x8(0xC)
	struct FVector InitialValue; // 0x14(0xC)
	bool bIntegrateDeltaTime; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
	struct FVector AccumulatedValue; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{
	float Multiplier; // 0x8(0x4)
	float InitialValue; // 0xC(0x4)
	bool bIntegrateDeltaTime; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Result; // 0x14(0x4)
	float AccumulatedValue; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{
	struct FVector Increment; // 0x8(0xC)
	struct FVector InitialValue; // 0x14(0xC)
	bool bIntegrateDeltaTime; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
	struct FVector AccumulatedValue; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{
	float Increment; // 0x8(0x4)
	float InitialValue; // 0xC(0x4)
	bool bIntegrateDeltaTime; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Result; // 0x14(0x4)
	float AccumulatedValue; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0xC0 (Inherited: 0x68)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	float Weight; // 0xA0(0x4)
	bool bPostMultiply; // 0xA4(0x1)
	bool bPropagateToChildren; // 0xA5(0x1)
	uint8_t Pad_0xA6[0x2]; // 0xA6(0x2)
	struct FCachedRigElement CachedBone; // 0xA8(0x14)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_AimBone_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_AimItem_Target
// Size: 0x2C (Inherited: 0x0)
struct FRigUnit_AimItem_Target
{
	float Weight; // 0x0(0x4)
	struct FVector Axis; // 0x4(0xC)
	struct FVector Target; // 0x10(0xC)
	EControlRigVectorKind Kind; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FRigElementKey Space; // 0x20(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_AimItem
// Size: 0x150 (Inherited: 0x68)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	struct FRigUnit_AimItem_Target Primary; // 0x74(0x2C)
	struct FRigUnit_AimItem_Target Secondary; // 0xA0(0x2C)
	float Weight; // 0xCC(0x4)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xD0(0x40)
	struct FCachedRigElement CachedItem; // 0x110(0x14)
	struct FCachedRigElement PrimaryCachedSpace; // 0x124(0x14)
	struct FCachedRigElement SecondaryCachedSpace; // 0x138(0x14)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AimBone_Target
// Size: 0x28 (Inherited: 0x0)
struct FRigUnit_AimBone_Target
{
	float Weight; // 0x0(0x4)
	struct FVector Axis; // 0x4(0xC)
	struct FVector Target; // 0x10(0xC)
	EControlRigVectorKind Kind; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FName Space; // 0x20(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0x150 (Inherited: 0x68)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FRigUnit_AimBone_Target Primary; // 0x70(0x28)
	struct FRigUnit_AimBone_Target Secondary; // 0x98(0x28)
	float Weight; // 0xC0(0x4)
	bool bPropagateToChildren; // 0xC4(0x1)
	uint8_t Pad_0xC5[0xB]; // 0xC5(0xB)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xD0(0x40)
	struct FCachedRigElement CachedBoneIndex; // 0x110(0x14)
	struct FCachedRigElement PrimaryCachedSpace; // 0x124(0x14)
	struct FCachedRigElement SecondaryCachedSpace; // 0x138(0x14)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_HighlevelBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_AimBoneMath
// Size: 0x140 (Inherited: 0x8)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform InputTransform; // 0x10(0x30)
	struct FRigUnit_AimItem_Target Primary; // 0x40(0x2C)
	struct FRigUnit_AimItem_Target Secondary; // 0x6C(0x2C)
	float Weight; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FTransform Result; // 0xA0(0x30)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xD0(0x40)
	struct FCachedRigElement PrimaryCachedSpace; // 0x110(0x14)
	struct FCachedRigElement SecondaryCachedSpace; // 0x124(0x14)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_AimConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0xC0 (Inherited: 0x68)
struct FRigUnit_AimConstraint : FRigUnitMutable
{
	struct FName Joint; // 0x68(0x8)
	EAimMode AimMode; // 0x70(0x1)
	EAimMode UpMode; // 0x71(0x1)
	uint8_t Pad_0x72[0x2]; // 0x72(0x2)
	struct FVector AimVector; // 0x74(0xC)
	struct FVector UpVector; // 0x80(0xC)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct TArray<struct FAimTarget> AimTargets; // 0x90(0x10)
	struct TArray<struct FAimTarget> UpTargets; // 0xA0(0x10)
	struct FRigUnit_AimConstraint_WorkData WorkData; // 0xB0(0x10)
};

// Object: ScriptStruct ControlRig.AimTarget
// Size: 0x50 (Inherited: 0x0)
struct FAimTarget
{
	float Weight; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector AlignVector; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// Size: 0x88 (Inherited: 0x8)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	float Scale; // 0x14(0x4)
	float Bias; // 0x18(0x4)
	bool bMapRange; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FInputRange InRange; // 0x20(0x8)
	struct FInputRange OutRange; // 0x28(0x8)
	bool bClampResult; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float ClampMin; // 0x34(0x4)
	float ClampMax; // 0x38(0x4)
	bool bInterpResult; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float InterpSpeedIncreasing; // 0x40(0x4)
	float InterpSpeedDecreasing; // 0x44(0x4)
	struct FVector Result; // 0x48(0xC)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x54(0x30)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AlphaInterp
// Size: 0x78 (Inherited: 0x8)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float Scale; // 0xC(0x4)
	float Bias; // 0x10(0x4)
	bool bMapRange; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FInputRange InRange; // 0x18(0x8)
	struct FInputRange OutRange; // 0x20(0x8)
	bool bClampResult; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float ClampMin; // 0x2C(0x4)
	float ClampMax; // 0x30(0x4)
	bool bInterpResult; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	float InterpSpeedIncreasing; // 0x38(0x4)
	float InterpSpeedDecreasing; // 0x3C(0x4)
	float Result; // 0x40(0x4)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x44(0x30)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_AnimBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_AnimEasing
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{
	float Value; // 0x8(0x4)
	EControlRigAnimEasingType Type; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float SourceMinimum; // 0x10(0x4)
	float SourceMaximum; // 0x14(0x4)
	float TargetMinimum; // 0x18(0x4)
	float TargetMaximum; // 0x1C(0x4)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimEasingType
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{
	EControlRigAnimEasingType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{
	float Value; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	float SourceMinimum; // 0x98(0x4)
	float SourceMaximum; // 0x9C(0x4)
	float TargetMinimum; // 0xA0(0x4)
	float TargetMaximum; // 0xA4(0x4)
	float Result; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimRichCurve
// Size: 0x90 (Inherited: 0x8)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve Curve; // 0x8(0x88)
};

// Object: ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_ApplyFK : FRigUnitMutable
{
	struct FName Joint; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransformFilter Filter; // 0xA0(0x9)
	EApplyTransformMode ApplyTransformMode; // 0xA9(0x1)
	ETransformSpaceMode ApplyTransformSpace; // 0xAA(0x1)
	uint8_t Pad_0xAB[0x5]; // 0xAB(0x5)
	struct FTransform BaseTransform; // 0xB0(0x30)
	struct FName BaseJoint; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x68 (Inherited: 0x8)
struct FRigUnit_BeginExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_BlendTransform : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Source; // 0x10(0x30)
	struct TArray<struct FBlendTarget> Targets; // 0x40(0x10)
	struct FTransform Result; // 0x50(0x30)
};

// Object: ScriptStruct ControlRig.BlendTarget
// Size: 0x40 (Inherited: 0x0)
struct FBlendTarget
{
	struct FTransform Transform; // 0x0(0x30)
	float Weight; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// Size: 0x20 (Inherited: 0x0)
struct FRigUnit_BoneHarmonics_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems; // 0x0(0x10)
	struct FVector WaveTime; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ItemHarmonics
// Size: 0xE8 (Inherited: 0x68)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets; // 0x68(0x10)
	struct FVector WaveSpeed; // 0x78(0xC)
	struct FVector WaveFrequency; // 0x84(0xC)
	struct FVector WaveAmplitude; // 0x90(0xC)
	struct FVector WaveOffset; // 0x9C(0xC)
	struct FVector WaveNoise; // 0xA8(0xC)
	EControlRigAnimEasingType WaveEase; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	float WaveMinimum; // 0xB8(0x4)
	float WaveMaximum; // 0xBC(0x4)
	EControlRigRotationOrder RotationOrder; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xC8(0x20)
};

// Object: ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_Harmonics_TargetItem
{
	struct FRigElementKey item; // 0x0(0xC)
	float Ratio; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0xE8 (Inherited: 0x68)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x68(0x10)
	struct FVector WaveSpeed; // 0x78(0xC)
	struct FVector WaveFrequency; // 0x84(0xC)
	struct FVector WaveAmplitude; // 0x90(0xC)
	struct FVector WaveOffset; // 0x9C(0xC)
	struct FVector WaveNoise; // 0xA8(0xC)
	EControlRigAnimEasingType WaveEase; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	float WaveMinimum; // 0xB8(0x4)
	float WaveMaximum; // 0xBC(0x4)
	EControlRigRotationOrder RotationOrder; // 0xC0(0x1)
	bool bPropagateToChildren; // 0xC1(0x1)
	uint8_t Pad_0xC2[0x6]; // 0xC2(0x6)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xC8(0x20)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName Bone; // 0x0(0x8)
	float Ratio; // 0x8(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_ControlName : FRigUnit
{
	struct FName Control; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_SpaceName : FRigUnit
{
	struct FName Space; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_BoneName : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_Item
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_Item : FRigUnit
{
	struct FRigElementKey item; // 0x8(0xC)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x58 (Inherited: 0x0)
struct FRigUnit_CCDIK_WorkData
{
	struct TArray<struct FCCDIKChainLink> Chain; // 0x0(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct TArray<int32_t> RotationLimitIndex; // 0x20(0x10)
	struct TArray<float> RotationLimitsPerItem; // 0x30(0x10)
	struct FCachedRigElement CachedEffector; // 0x40(0x14)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// Size: 0x140 (Inherited: 0x68)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xB0(0x4)
	float Weight; // 0xB4(0x4)
	int32_t MaxIterations; // 0xB8(0x4)
	bool bStartFromTail; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	float BaseRotationLimit; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xC8(0x10)
	bool bPropagateToChildren; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xE0(0x58)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_CCDIK_RotationLimitPerItem
{
	struct FRigElementKey item; // 0x0(0xC)
	float Limit; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0x140 (Inherited: 0x68)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EffectorBone; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xB0(0x4)
	float Weight; // 0xB4(0x4)
	int32_t MaxIterations; // 0xB8(0x4)
	bool bStartFromTail; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	float BaseRotationLimit; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0xC8(0x10)
	bool bPropagateToChildren; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xE0(0x58)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_CCDIK_RotationLimit
{
	struct FName Bone; // 0x0(0x8)
	float Limit; // 0x8(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x3C (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_Pendulum
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float PendulumStiffness; // 0x4(0x4)
	struct FVector PendulumGravity; // 0x8(0xC)
	float PendulumBlend; // 0x14(0x4)
	float PendulumDrag; // 0x18(0x4)
	float PendulumMinimum; // 0x1C(0x4)
	float PendulumMaximum; // 0x20(0x4)
	EControlRigAnimEasingType PendulumEase; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector UnwindAxis; // 0x28(0xC)
	float UnwindMinimum; // 0x34(0x4)
	float UnwindMaximum; // 0x38(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x28 (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_Reach
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector ReachTarget; // 0x4(0xC)
	struct FVector ReachAxis; // 0x10(0xC)
	float ReachMinimum; // 0x1C(0x4)
	float ReachMaximum; // 0x20(0x4)
	EControlRigAnimEasingType ReachEase; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_Wave
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector WaveFrequency; // 0x4(0xC)
	struct FVector WaveAmplitude; // 0x10(0xC)
	struct FVector WaveOffset; // 0x1C(0xC)
	struct FVector WaveNoise; // 0x28(0xC)
	float WaveMinimum; // 0x34(0x4)
	float WaveMaximum; // 0x38(0x4)
	EControlRigAnimEasingType WaveEase; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x90 (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector Time; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FCachedRigElement> Items; // 0x10(0x10)
	struct TArray<float> Ratio; // 0x20(0x10)
	struct TArray<struct FVector> LocalTip; // 0x30(0x10)
	struct TArray<struct FVector> PendulumTip; // 0x40(0x10)
	struct TArray<struct FVector> PendulumPosition; // 0x50(0x10)
	struct TArray<struct FVector> PendulumVelocity; // 0x60(0x10)
	struct TArray<struct FVector> HierarchyLine; // 0x70(0x10)
	struct TArray<struct FVector> VelocityLines; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x270 (Inherited: 0x68)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey ChainRoot; // 0x68(0xC)
	struct FVector Speed; // 0x74(0xC)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x80(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xA8(0x40)
	struct FRuntimeFloatCurve WaveCurve; // 0xE8(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170(0x3C)
	bool bDrawDebug; // 0x1AC(0x1)
	uint8_t Pad_0x1AD[0x3]; // 0x1AD(0x3)
	struct FTransform DrawWorldOffset; // 0x1B0(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1E0(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x270 (Inherited: 0x68)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct FName ChainRoot; // 0x68(0x8)
	struct FVector Speed; // 0x70(0xC)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x7C(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xA4(0x40)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct FRuntimeFloatCurve WaveCurve; // 0xE8(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170(0x3C)
	bool bDrawDebug; // 0x1AC(0x1)
	uint8_t Pad_0x1AD[0x3]; // 0x1AD(0x3)
	struct FTransform DrawWorldOffset; // 0x1B0(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1E0(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionLoop
// Size: 0xF8 (Inherited: 0x68)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{
	struct FRigElementKeyCollection Collection; // 0x68(0x10)
	struct FRigElementKey item; // 0x78(0xC)
	int32_t Index; // 0x84(0x4)
	int32_t Count; // 0x88(0x4)
	float Ratio; // 0x8C(0x4)
	bool Continue; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct FControlRigExecuteContext Completed; // 0x98(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_CollectionBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection; // 0x8(0x10)
	int32_t Index; // 0x18(0x4)
	struct FRigElementKey item; // 0x1C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionCount
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection; // 0x8(0x10)
	int32_t Count; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionReverse
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection; // 0x8(0x10)
	struct FRigElementKeyCollection Reversed; // 0x18(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionDifference
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A; // 0x8(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionIntersection
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A; // 0x8(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionUnion
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A; // 0x8(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionItems
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey> Items; // 0x8(0x10)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Items; // 0x8(0x10)
	struct FName Old; // 0x18(0x8)
	struct FName New; // 0x20(0x8)
	bool RemoveInvalidItems; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FRigElementKeyCollection Collection; // 0x30(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x40(0x10)
	int32_t CachedHierarchyHash; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionChildren
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{
	struct FRigElementKey Parent; // 0x8(0xC)
	bool bIncludeParent; // 0x14(0x1)
	bool bRecursive; // 0x15(0x1)
	ERigElementType TypeToSearch; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x28(0x10)
	int32_t CachedHierarchyHash; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{
	struct FName PartialName; // 0x8(0x8)
	ERigElementType TypeToSearch; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x28(0x10)
	int32_t CachedHierarchyHash; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CollectionChain
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{
	struct FRigElementKey FirstItem; // 0x8(0xC)
	struct FRigElementKey LastItem; // 0x14(0xC)
	bool Reverse; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
	struct FRigElementKeyCollection CachedCollection; // 0x38(0x10)
	int32_t CachedHierarchyHash; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Control
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_Control : FRigUnit
{
	struct FEulerTransform Transform; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Base; // 0x30(0x30)
	struct FTransform InitTransform; // 0x60(0x30)
	struct FTransform Result; // 0x90(0x30)
	struct FTransformFilter Filter; // 0xC0(0x9)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x100 (Inherited: 0xD0)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{
	struct FTransform MeshTransform; // 0xD0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FVector TwistAxis; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Swing; // 0x30(0x10)
	struct FQuat Twist; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{
	struct FRotator Input; // 0x8(0xC)
	struct FVector Result; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{
	struct FVector Input; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{
	struct FVector Input; // 0x8(0xC)
	struct FRotator Result; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertQuaternion : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FRotator Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertRotation : FRigUnit
{
	struct FRotator Input; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{
	struct FEulerTransform Input; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Result; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_ConvertTransform : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Input; // 0x10(0x30)
	struct FEulerTransform Result; // 0x40(0x24)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_DebugBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier; // 0x68(0x30)
	float MinimumU; // 0x98(0x4)
	float MaximumU; // 0x9C(0x4)
	struct FLinearColor Color; // 0xA0(0x10)
	float Thickness; // 0xB0(0x4)
	int32_t Detail; // 0xB4(0x4)
	struct FRigElementKey Space; // 0xB8(0xC)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
	struct FTransform WorldOffset; // 0xD0(0x30)
	bool bEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0xF]; // 0x101(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier; // 0x68(0x30)
	float MinimumU; // 0x98(0x4)
	float MaximumU; // 0x9C(0x4)
	struct FLinearColor Color; // 0xA0(0x10)
	float Thickness; // 0xB0(0x4)
	int32_t Detail; // 0xB4(0x4)
	struct FName Space; // 0xB8(0x8)
	struct FTransform WorldOffset; // 0xC0(0x30)
	bool bEnabled; // 0xF0(0x1)
	uint8_t Pad_0xF1[0xF]; // 0xF1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0xC0 (Inherited: 0x68)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{
	float Scale; // 0x68(0x4)
	struct FLinearColor Color; // 0x6C(0x10)
	float Thickness; // 0x7C(0x4)
	struct FTransform WorldOffset; // 0x80(0x30)
	bool bEnabled; // 0xB0(0x1)
	uint8_t Pad_0xB1[0xF]; // 0xB1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{
	struct FVector A; // 0x68(0xC)
	struct FVector B; // 0x74(0xC)
	struct FLinearColor Color; // 0x80(0x10)
	float Thickness; // 0x90(0x4)
	struct FRigElementKey Space; // 0x94(0xC)
	struct FTransform WorldOffset; // 0xA0(0x30)
	bool bEnabled; // 0xD0(0x1)
	uint8_t Pad_0xD1[0xF]; // 0xD1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{
	struct FVector A; // 0x68(0xC)
	struct FVector B; // 0x74(0xC)
	struct FLinearColor Color; // 0x80(0x10)
	float Thickness; // 0x90(0x4)
	struct FName Space; // 0x94(0x8)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FTransform WorldOffset; // 0xA0(0x30)
	bool bEnabled; // 0xD0(0x1)
	uint8_t Pad_0xD1[0xF]; // 0xD1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points; // 0x68(0x10)
	struct FLinearColor Color; // 0x78(0x10)
	float Thickness; // 0x88(0x4)
	struct FRigElementKey Space; // 0x8C(0xC)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct FTransform WorldOffset; // 0xA0(0x30)
	bool bEnabled; // 0xD0(0x1)
	uint8_t Pad_0xD1[0xF]; // 0xD1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points; // 0x68(0x10)
	struct FLinearColor Color; // 0x78(0x10)
	float Thickness; // 0x88(0x4)
	struct FName Space; // 0x8C(0x8)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
	struct FTransform WorldOffset; // 0xA0(0x30)
	bool bEnabled; // 0xD0(0x1)
	uint8_t Pad_0xD1[0xF]; // 0xD1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugPointMutable
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{
	struct FVector Vector; // 0x68(0xC)
	ERigUnitDebugPointMode Mode; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	struct FLinearColor Color; // 0x78(0x10)
	float Scale; // 0x88(0x4)
	float Thickness; // 0x8C(0x4)
	struct FName Space; // 0x90(0x8)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct FTransform WorldOffset; // 0xA0(0x30)
	bool bEnabled; // 0xD0(0x1)
	uint8_t Pad_0xD1[0xF]; // 0xD1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugPoint
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{
	struct FVector Vector; // 0x8(0xC)
	ERigUnitDebugPointMode Mode; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FLinearColor Color; // 0x18(0x10)
	float Scale; // 0x28(0x4)
	float Thickness; // 0x2C(0x4)
	struct FName Space; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform WorldOffset; // 0x40(0x30)
	bool bEnabled; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xA0(0x10)
	float Radius; // 0xB0(0x4)
	float MinimumDegrees; // 0xB4(0x4)
	float MaximumDegrees; // 0xB8(0x4)
	float Thickness; // 0xBC(0x4)
	int32_t Detail; // 0xC0(0x4)
	struct FRigElementKey Space; // 0xC4(0xC)
	struct FTransform WorldOffset; // 0xD0(0x30)
	bool bEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0xF]; // 0x101(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xA0(0x10)
	float Radius; // 0xB0(0x4)
	float MinimumDegrees; // 0xB4(0x4)
	float MaximumDegrees; // 0xB8(0x4)
	float Thickness; // 0xBC(0x4)
	int32_t Detail; // 0xC0(0x4)
	struct FName Space; // 0xC4(0x8)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FTransform WorldOffset; // 0xD0(0x30)
	bool bEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0xF]; // 0x101(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xA0(0x10)
	float Scale; // 0xB0(0x4)
	float Thickness; // 0xB4(0x4)
	struct FRigElementKey Space; // 0xB8(0xC)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
	struct FTransform WorldOffset; // 0xD0(0x30)
	bool bEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0xF]; // 0x101(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FLinearColor Color; // 0xA0(0x10)
	float Scale; // 0xB0(0x4)
	float Thickness; // 0xB4(0x4)
	struct FName Space; // 0xB8(0x8)
	struct FTransform WorldOffset; // 0xC0(0x30)
	bool bEnabled; // 0xF0(0x1)
	uint8_t Pad_0xF1[0xF]; // 0xF1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
	struct TArray<struct FTransform> DrawTransforms; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms; // 0x68(0x10)
	ERigUnitDebugTransformMode Mode; // 0x78(0x1)
	uint8_t Pad_0x79[0x3]; // 0x79(0x3)
	struct FLinearColor Color; // 0x7C(0x10)
	float Thickness; // 0x8C(0x4)
	float Scale; // 0x90(0x4)
	struct FName Space; // 0x94(0x8)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FTransform WorldOffset; // 0xA0(0x30)
	bool bEnabled; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	ERigUnitDebugTransformMode Mode; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FLinearColor Color; // 0xA4(0x10)
	float Thickness; // 0xB4(0x4)
	float Scale; // 0xB8(0x4)
	struct FRigElementKey Space; // 0xBC(0xC)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
	struct FTransform WorldOffset; // 0xD0(0x30)
	bool bEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0xF]; // 0x101(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0x110 (Inherited: 0x68)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	ERigUnitDebugTransformMode Mode; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FLinearColor Color; // 0xA4(0x10)
	float Thickness; // 0xB4(0x4)
	float Scale; // 0xB8(0x4)
	struct FName Space; // 0xBC(0x8)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
	struct FTransform WorldOffset; // 0xD0(0x30)
	bool bEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0xF]; // 0x101(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	ERigUnitDebugTransformMode Mode; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FLinearColor Color; // 0x44(0x10)
	float Thickness; // 0x54(0x4)
	float Scale; // 0x58(0x4)
	struct FName Space; // 0x5C(0x8)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
	struct FTransform WorldOffset; // 0x70(0x30)
	bool bEnabled; // 0xA0(0x1)
	uint8_t Pad_0xA1[0xF]; // 0xA1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	struct FTransform Delta; // 0x40(0x30)
	struct FTransform PreviousValue; // 0x70(0x30)
	struct FTransform Cache; // 0xA0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FQuat Delta; // 0x20(0x10)
	struct FQuat PreviousValue; // 0x30(0x10)
	struct FQuat Cache; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Delta; // 0x14(0xC)
	struct FVector PreviousValue; // 0x20(0xC)
	struct FVector Cache; // 0x2C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float Delta; // 0xC(0x4)
	float PreviousValue; // 0x10(0x4)
	float Cache; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50 (Inherited: 0x0)
struct FRigUnit_DistributeRotation_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems; // 0x0(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x10(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x20(0x10)
	struct TArray<float> ItemRotationT; // 0x30(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78(0x10)
	EControlRigAnimEasingType RotationEaseType; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	float Weight; // 0x8C(0x4)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x90(0x50)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// Size: 0x20 (Inherited: 0x0)
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat Rotation; // 0x0(0x10)
	float Ratio; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0xE8 (Inherited: 0x68)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EndBone; // 0x70(0x8)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78(0x10)
	EControlRigAnimEasingType RotationEaseType; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	float Weight; // 0x8C(0x4)
	bool bPropagateToChildren; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x98(0x50)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0xA0 (Inherited: 0x68)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{
	struct FName InstructionName; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x78 (Inherited: 0x68)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{
	struct FName InstructionName; // 0x68(0x8)
	float Thickness; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x80 (Inherited: 0x68)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{
	struct FName InstructionName; // 0x68(0x8)
	struct FLinearColor Color; // 0x70(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{
	struct FName InstructionName; // 0x8(0x8)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform Transform; // 0x20(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// Size: 0x38 (Inherited: 0x0)
struct FRigUnit_FABRIK_WorkData
{
	struct TArray<struct FFABRIKChainLink> Chain; // 0x0(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct FCachedRigElement CachedEffector; // 0x20(0x14)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xB0(0x4)
	float Weight; // 0xB4(0x4)
	bool bPropagateToChildren; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x3]; // 0xB9(0x3)
	int32_t MaxIterations; // 0xBC(0x4)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xC0(0x38)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0x100 (Inherited: 0x68)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EffectorBone; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform EffectorTransform; // 0x80(0x30)
	float Precision; // 0xB0(0x4)
	float Weight; // 0xB4(0x4)
	bool bPropagateToChildren; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x3]; // 0xB9(0x3)
	int32_t MaxIterations; // 0xBC(0x4)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xC0(0x38)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Size: 0x60 (Inherited: 0x0)
struct FRigUnit_FitChainToCurve_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	struct FLinearColor CurveColor; // 0x8(0x10)
	struct FLinearColor SegmentsColor; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform WorldOffset; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98 (Inherited: 0x0)
struct FRigUnit_FitChainToCurve_WorkData
{
	float ChainLength; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVector> ItemPositions; // 0x8(0x10)
	struct TArray<float> ItemSegments; // 0x18(0x10)
	struct TArray<struct FVector> CurvePositions; // 0x28(0x10)
	struct TArray<float> CurveSegments; // 0x38(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x48(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x58(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x68(0x10)
	struct TArray<float> ItemRotationT; // 0x78(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x88(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// Size: 0x200 (Inherited: 0x68)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	struct FCRFourPointBezier Bezier; // 0x78(0x30)
	EControlRigCurveAlignment Alignment; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	float Minimum; // 0xAC(0x4)
	float Maximum; // 0xB0(0x4)
	int32_t SamplingPrecision; // 0xB4(0x4)
	struct FVector PrimaryAxis; // 0xB8(0xC)
	struct FVector SecondaryAxis; // 0xC4(0xC)
	struct FVector PoleVectorPosition; // 0xD0(0xC)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xE0(0x10)
	EControlRigAnimEasingType RotationEaseType; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	float Weight; // 0xF4(0x4)
	bool bPropagateToChildren; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160(0x98)
	uint8_t Pad_0x1F8[0x8]; // 0x1F8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// Size: 0x20 (Inherited: 0x0)
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat Rotation; // 0x0(0x10)
	float Ratio; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x200 (Inherited: 0x68)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EndBone; // 0x70(0x8)
	struct FCRFourPointBezier Bezier; // 0x78(0x30)
	EControlRigCurveAlignment Alignment; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	float Minimum; // 0xAC(0x4)
	float Maximum; // 0xB0(0x4)
	int32_t SamplingPrecision; // 0xB4(0x4)
	struct FVector PrimaryAxis; // 0xB8(0xC)
	struct FVector SecondaryAxis; // 0xC4(0xC)
	struct FVector PoleVectorPosition; // 0xD0(0xC)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xE0(0x10)
	EControlRigAnimEasingType RotationEaseType; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	float Weight; // 0xF4(0x4)
	bool bPropagateToChildren; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160(0x98)
	uint8_t Pad_0x1F8[0x8]; // 0x1F8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MapRange_Float : FRigUnit
{
	float Value; // 0x8(0x4)
	float MinIn; // 0xC(0x4)
	float MaxIn; // 0x10(0x4)
	float MinOut; // 0x14(0x4)
	float MaxOut; // 0x18(0x4)
	float Result; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_Clamp_Float : FRigUnit
{
	float Value; // 0x8(0x4)
	float Min; // 0xC(0x4)
	float Max; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_BinaryFloatOp : FRigUnit
{
	float Argument0; // 0x8(0x4)
	float Argument1; // 0xC(0x4)
	float Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_ForLoopCount
// Size: 0xD8 (Inherited: 0x68)
struct FRigUnit_ForLoopCount : FRigUnitMutable
{
	int32_t Count; // 0x68(0x4)
	int32_t Index; // 0x6C(0x4)
	float Ratio; // 0x70(0x4)
	bool Continue; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	struct FControlRigExecuteContext Completed; // 0x78(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_GetBoneTransform : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
	EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedBone; // 0x50(0x14)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedControlIndex; // 0x50(0x14)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_GetControlTransform : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	struct FTransform Minimum; // 0x50(0x30)
	struct FTransform Maximum; // 0x80(0x30)
	struct FCachedRigElement CachedControlIndex; // 0xB0(0x14)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_GetControlRotator : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FRotator Rotator; // 0x14(0xC)
	struct FRotator Minimum; // 0x20(0xC)
	struct FRotator Maximum; // 0x2C(0xC)
	struct FCachedRigElement CachedControlIndex; // 0x38(0x14)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_GetControlVector : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector Vector; // 0x14(0xC)
	struct FVector Minimum; // 0x20(0xC)
	struct FVector Maximum; // 0x2C(0xC)
	struct FCachedRigElement CachedControlIndex; // 0x38(0x14)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_GetControlVector2D : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	struct FVector2D Vector; // 0x10(0x8)
	struct FVector2D Minimum; // 0x18(0x8)
	struct FVector2D Maximum; // 0x20(0x8)
	struct FCachedRigElement CachedControlIndex; // 0x28(0x14)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlInteger
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_GetControlInteger : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	int32_t IntegerValue; // 0x10(0x4)
	int32_t Minimum; // 0x14(0x4)
	int32_t Maximum; // 0x18(0x4)
	struct FCachedRigElement CachedControlIndex; // 0x1C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_GetControlFloat : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	float FloatValue; // 0x10(0x4)
	float Minimum; // 0x14(0x4)
	float Maximum; // 0x18(0x4)
	struct FCachedRigElement CachedControlIndex; // 0x1C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_GetControlBool : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	bool BoolValue; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FCachedRigElement CachedControlIndex; // 0x14(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_GetCurveValue : FRigUnit
{
	struct FName Curve; // 0x8(0x8)
	float Value; // 0x10(0x4)
	struct FCachedRigElement CachedCurveIndex; // 0x14(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_GetDeltaTime
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{
	float Result; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
	EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedBone; // 0x50(0x14)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{
	struct FName Joint; // 0x68(0x8)
	ETransformGetterType Type; // 0x70(0x1)
	ETransformSpaceMode TransformSpace; // 0x71(0x1)
	uint8_t Pad_0x72[0xE]; // 0x72(0xE)
	struct FTransform BaseTransform; // 0x80(0x30)
	struct FName BaseJoint; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	struct FTransform Output; // 0xC0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
	struct FName Space; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedBone; // 0x50(0x14)
	struct FCachedRigElement CachedSpace; // 0x64(0x14)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0x90 (Inherited: 0x8)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{
	struct FRigElementKey Child; // 0x8(0xC)
	bool bChildInitial; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRigElementKey Parent; // 0x18(0xC)
	bool bParentInitial; // 0x24(0x1)
	uint8_t Pad_0x25[0xB]; // 0x25(0xB)
	struct FTransform RelativeTransform; // 0x30(0x30)
	struct FCachedRigElement CachedChild; // 0x60(0x14)
	struct FCachedRigElement CachedParent; // 0x74(0x14)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_GetSpaceTransform : FRigUnit
{
	struct FName Space; // 0x8(0x8)
	EBoneGetterSetterMode SpaceType; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedSpaceIndex; // 0x50(0x14)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_GetTransform : FRigUnit
{
	struct FRigElementKey item; // 0x8(0xC)
	EBoneGetterSetterMode Space; // 0x14(0x1)
	bool bInitial; // 0x15(0x1)
	uint8_t Pad_0x16[0xA]; // 0x16(0xA)
	struct FTransform Transform; // 0x20(0x30)
	struct FCachedRigElement CachedIndex; // 0x50(0x14)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetWorldTime
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{
	float Year; // 0x8(0x4)
	float Month; // 0xC(0x4)
	float Day; // 0x10(0x4)
	float WeekDay; // 0x14(0x4)
	float Hours; // 0x18(0x4)
	float Minutes; // 0x1C(0x4)
	float Seconds; // 0x20(0x4)
	float OverallSeconds; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_HierarchyBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_HierarchyBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{
	struct FRigElementKey item; // 0x8(0xC)
	bool bIncludeItem; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRigElementKeyCollection Siblings; // 0x18(0x10)
	struct FCachedRigElement CachedItem; // 0x28(0x14)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FRigElementKeyCollection CachedSiblings; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{
	struct FRigElementKey Parent; // 0x8(0xC)
	bool bIncludeParent; // 0x14(0x1)
	bool bRecursive; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FRigElementKeyCollection Children; // 0x18(0x10)
	struct FCachedRigElement CachedParent; // 0x28(0x14)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FRigElementKeyCollection CachedChildren; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{
	struct FRigElementKey Child; // 0x8(0xC)
	bool bIncludeChild; // 0x14(0x1)
	bool bReverse; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FRigElementKeyCollection Parents; // 0x18(0x10)
	struct FCachedRigElement CachedChild; // 0x28(0x14)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FRigElementKeyCollection CachedParents; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{
	struct FRigElementKey Child; // 0x8(0xC)
	struct FRigElementKey Parent; // 0x14(0xC)
	struct FCachedRigElement CachedChild; // 0x20(0x14)
	struct FCachedRigElement CachedParent; // 0x34(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_InverseExecution
// Size: 0x68 (Inherited: 0x8)
struct FRigUnit_InverseExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_IsInteracting
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_IsInteracting : FRigUnit
{
	bool bIsInteracting; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_ItemBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_ItemBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_ItemReplace
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{
	struct FRigElementKey item; // 0x8(0xC)
	struct FName Old; // 0x14(0x8)
	struct FName New; // 0x1C(0x8)
	struct FRigElementKey Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ItemExists
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{
	struct FRigElementKey item; // 0x8(0xC)
	bool Exists; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FCachedRigElement CachedIndex; // 0x18(0x14)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_KalmanTransform
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	int32_t BufferSize; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FTransform Result; // 0x50(0x30)
	struct TArray<struct FTransform> Buffer; // 0x80(0x10)
	int32_t LastInsertIndex; // 0x90(0x4)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_KalmanVector
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	int32_t BufferSize; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FVector> Buffer; // 0x28(0x10)
	int32_t LastInsertIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_KalmanFloat
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	int32_t BufferSize; // 0xC(0x4)
	float Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<float> Buffer; // 0x18(0x10)
	int32_t LastInsertIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{
	bool A; // 0x8(0x1)
	bool B; // 0x9(0x1)
	bool Result; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolEquals
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{
	bool A; // 0x8(0x1)
	bool B; // 0x9(0x1)
	bool Result; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{
	bool A; // 0x8(0x1)
	bool B; // 0x9(0x1)
	bool Result; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolOr
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolNand
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolAnd
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{
	bool Value; // 0x8(0x1)
	bool Result; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolNot
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolConstant
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{
	bool Value; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorLerp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{
	struct FLinearColor A; // 0x8(0x10)
	struct FLinearColor B; // 0x18(0x10)
	float T; // 0x28(0x4)
	struct FLinearColor Result; // 0x2C(0x10)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{
	struct FLinearColor A; // 0x8(0x10)
	struct FLinearColor B; // 0x18(0x10)
	struct FLinearColor Result; // 0x28(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorMul
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorSub
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorAdd
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{
	float Value; // 0x8(0x4)
	struct FLinearColor Result; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float C; // 0x10(0x4)
	float AlphaAngle; // 0x14(0x4)
	float BetaAngle; // 0x18(0x4)
	float GammaAngle; // 0x1C(0x4)
	bool bValid; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Result; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAtan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAcos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAsin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatTan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatCos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatRad
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatDeg
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float IfTrue; // 0xC(0x4)
	float IfFalse; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float Tolerance; // 0x10(0x4)
	bool Result; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Tolerance; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLess
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatGreater
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatEquals
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatRemap
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float SourceMinimum; // 0xC(0x4)
	float SourceMaximum; // 0x10(0x4)
	float TargetMinimum; // 0x14(0x4)
	float TargetMaximum; // 0x18(0x4)
	bool bClamp; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLerp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float T; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatClamp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatToInt
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	int32_t Result; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatRound
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Result; // 0xC(0x4)
	int32_t Int; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatCeil
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Result; // 0xC(0x4)
	int32_t Int; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatFloor
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Result; // 0xC(0x4)
	int32_t Int; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstant
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntLessEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntLess
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntGreater
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntNotEquals
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntEquals
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntClamp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{
	int32_t Value; // 0x8(0x4)
	int32_t Minimum; // 0xC(0x4)
	int32_t Maximum; // 0x10(0x4)
	int32_t Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{
	int32_t Value; // 0x8(0x4)
	int32_t Result; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntToFloat
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{
	int32_t Value; // 0x8(0x4)
	float Result; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{
	int32_t A; // 0x8(0x4)
	int32_t B; // 0xC(0x4)
	int32_t Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{
	EControlRigRotationOrder RotationOrder; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FVector TwistAxis; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Swing; // 0x30(0x10)
	struct FQuat Twist; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Quaternion; // 0x10(0x10)
	uint8_t Axis; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector Vector; // 0x20(0xC)
	struct FVector Result; // 0x2C(0xC)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	float Result; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FQuat IfTrue; // 0x10(0x10)
	struct FQuat IfFalse; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	bool Result; // 0x30(0x1)
	uint8_t Pad_0x31[0xF]; // 0x31(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	bool Result; // 0x30(0x1)
	uint8_t Pad_0x31[0xF]; // 0x31(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	float T; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FQuat Result; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FRotator Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	EControlRigRotationOrder RotationOrder; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionScale
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	float Scale; // 0x20(0x4)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FVector Axis; // 0x20(0xC)
	float Angle; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{
	struct FRotator Rotator; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{
	struct FVector Euler; // 0x8(0xC)
	EControlRigRotationOrder RotationOrder; // 0x14(0x1)
	uint8_t Pad_0x15[0xB]; // 0x15(0xB)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{
	struct FVector Axis; // 0x8(0xC)
	float Angle; // 0x14(0x4)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// Size: 0x90 (Inherited: 0x0)
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
	uint8_t Pad_0x0[0x90]; // 0x0(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{
	struct FVector Input; // 0x8(0xC)
	ERBFVectorDistanceType DistanceFunction; // 0x14(0x1)
	ERBFKernelType SmoothingFunction; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float SmoothingRadius; // 0x18(0x4)
	bool bNormalizeOutput; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x20(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
// Size: 0xF0 (Inherited: 0xB0)
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets; // 0xB0(0x10)
	struct FTransform Output; // 0xC0(0x30)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
// Size: 0x40 (Inherited: 0x0)
struct FMathRBFInterpolateVectorXform_Target
{
	struct FVector Target; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FTransform Value; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
// Size: 0xD0 (Inherited: 0xB0)
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets; // 0xB0(0x10)
	struct FQuat Output; // 0xC0(0x10)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
// Size: 0x20 (Inherited: 0x0)
struct FMathRBFInterpolateVectorQuat_Target
{
	struct FVector Target; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Value; // 0x10(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
// Size: 0xD0 (Inherited: 0xB0)
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets; // 0xB0(0x10)
	struct FLinearColor Output; // 0xC0(0x10)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
// Size: 0x1C (Inherited: 0x0)
struct FMathRBFInterpolateVectorColor_Target
{
	struct FVector Target; // 0x0(0xC)
	struct FLinearColor Value; // 0xC(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
// Size: 0xD0 (Inherited: 0xB0)
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets; // 0xB0(0x10)
	struct FVector Output; // 0xC0(0xC)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
// Size: 0x18 (Inherited: 0x0)
struct FMathRBFInterpolateVectorVector_Target
{
	struct FVector Target; // 0x0(0xC)
	struct FVector Value; // 0xC(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// Size: 0xD0 (Inherited: 0xB0)
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets; // 0xB0(0x10)
	float Output; // 0xC0(0x4)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
// Size: 0x10 (Inherited: 0x0)
struct FMathRBFInterpolateVectorFloat_Target
{
	struct FVector Target; // 0x0(0xC)
	float Value; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
// Size: 0x90 (Inherited: 0x0)
struct FRigUnit_MathRBFInterpolateQuatWorkData
{
	uint8_t Pad_0x0[0x90]; // 0x0(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	ERBFQuatDistanceType DistanceFunction; // 0x20(0x1)
	ERBFKernelType SmoothingFunction; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	float SmoothingAngle; // 0x24(0x4)
	bool bNormalizeOutput; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FVector TwistAxis; // 0x2C(0xC)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x40(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
// Size: 0x110 (Inherited: 0xD0)
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets; // 0xD0(0x10)
	struct FTransform Output; // 0xE0(0x30)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
// Size: 0x40 (Inherited: 0x0)
struct FMathRBFInterpolateQuatXform_Target
{
	struct FQuat Target; // 0x0(0x10)
	struct FTransform Value; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// Size: 0xF0 (Inherited: 0xD0)
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets; // 0xD0(0x10)
	struct FQuat Output; // 0xE0(0x10)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
// Size: 0x20 (Inherited: 0x0)
struct FMathRBFInterpolateQuatQuat_Target
{
	struct FQuat Target; // 0x0(0x10)
	struct FQuat Value; // 0x10(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
// Size: 0xF0 (Inherited: 0xD0)
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets; // 0xD0(0x10)
	struct FLinearColor Output; // 0xE0(0x10)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
// Size: 0x20 (Inherited: 0x0)
struct FMathRBFInterpolateQuatColor_Target
{
	struct FQuat Target; // 0x0(0x10)
	struct FLinearColor Value; // 0x10(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
// Size: 0xF0 (Inherited: 0xD0)
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets; // 0xD0(0x10)
	struct FVector Output; // 0xE0(0xC)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
// Size: 0x20 (Inherited: 0x0)
struct FMathRBFInterpolateQuatVector_Target
{
	struct FQuat Target; // 0x0(0x10)
	struct FVector Value; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// Size: 0xF0 (Inherited: 0xD0)
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets; // 0xD0(0x10)
	float Output; // 0xE0(0x4)
	uint8_t Pad_0xE4[0xC]; // 0xE4(0xC)
};

// Object: ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
// Size: 0x20 (Inherited: 0x0)
struct FMathRBFInterpolateQuatFloat_Target
{
	struct FQuat Target; // 0x0(0x10)
	float Value; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	uint8_t Axis; // 0x40(0x1)
	uint8_t Type; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	float Minimum; // 0x44(0x4)
	float Maximum; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform Space; // 0x50(0x30)
	bool bDrawDebug; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FLinearColor DebugColor; // 0x84(0x10)
	float DebugThickness; // 0x94(0x4)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct FTransform Result; // 0xA0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x90 (Inherited: 0x8)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{
	struct FVector Location; // 0x8(0xC)
	struct FVector Rotation; // 0x14(0xC)
	EControlRigRotationOrder RotationOrder; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Scale; // 0x24(0xC)
	struct FTransform Transform; // 0x30(0x30)
	struct FEulerTransform EulerTransform; // 0x60(0x24)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Location; // 0x40(0xC)
	struct FVector Result; // 0x4C(0xC)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Direction; // 0x40(0xC)
	struct FVector Result; // 0x4C(0xC)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FTransform IfTrue; // 0x10(0x30)
	struct FTransform IfFalse; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformLerp
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform A; // 0x10(0x30)
	struct FTransform B; // 0x40(0x30)
	float T; // 0x70(0x4)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform Result; // 0x80(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	struct FTransform Result; // 0x40(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformInverse
// Size: 0x70 (Inherited: 0x70)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Local; // 0x10(0x30)
	struct FTransform Parent; // 0x40(0x30)
	struct FTransform Global; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Global; // 0x10(0x30)
	struct FTransform Parent; // 0x40(0x30)
	struct FTransform Local; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform A; // 0x10(0x30)
	struct FTransform B; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformMul
// Size: 0xA0 (Inherited: 0xA0)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	struct FEulerTransform Result; // 0x40(0x24)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{
	struct FEulerTransform EulerTransform; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Result; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathIntersectPlane
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{
	struct FVector Start; // 0x8(0xC)
	struct FVector Direction; // 0x14(0xC)
	struct FVector PlanePoint; // 0x20(0xC)
	struct FVector PlaneNormal; // 0x2C(0xC)
	struct FVector Result; // 0x38(0xC)
	float Distance; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	uint8_t Axis; // 0x14(0x1)
	uint8_t Type; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float Minimum; // 0x18(0x4)
	float Maximum; // 0x1C(0x4)
	struct FTransform Space; // 0x20(0x30)
	bool bDrawDebug; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FLinearColor DebugColor; // 0x54(0x10)
	float DebugThickness; // 0x64(0x4)
	struct FVector Result; // 0x68(0xC)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier; // 0x8(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier; // 0x8(0x30)
	float T; // 0x38(0x4)
	struct FVector Result; // 0x3C(0xC)
	struct FVector Tangent; // 0x48(0xC)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorParallel
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorAngle
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMirror
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Normal; // 0x14(0xC)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float MinimumLength; // 0x14(0x4)
	float MaximumLength; // 0x18(0x4)
	struct FVector Result; // 0x1C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Length; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Result; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorUnit
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDot
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorCross
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDistance
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorLength
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorRad
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDeg
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector IfTrue; // 0xC(0xC)
	struct FVector IfFalse; // 0x18(0xC)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Tolerance; // 0x20(0x4)
	bool Result; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Tolerance; // 0x14(0x4)
	bool Result; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorEquals
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorRemap
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector SourceMinimum; // 0x14(0xC)
	struct FVector SourceMaximum; // 0x20(0xC)
	struct FVector TargetMinimum; // 0x2C(0xC)
	struct FVector TargetMaximum; // 0x38(0xC)
	bool bClamp; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct FVector Result; // 0x48(0xC)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorLerp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float T; // 0x20(0x4)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorClamp
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Minimum; // 0x14(0xC)
	struct FVector Maximum; // 0x20(0xC)
	struct FVector Result; // 0x2C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSign
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorRound
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorCeil
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorFloor
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorAbs
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorNegate
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMax
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMin
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMod
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDiv
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorScale
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Factor; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMul
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSub
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorAdd
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{
	float Value; // 0x8(0x4)
	struct FVector Result; // 0xC(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_ModifyTransforms_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x68(0x10)
	float Weight; // 0x78(0x4)
	float WeightMinimum; // 0x7C(0x4)
	float WeightMaximum; // 0x80(0x4)
	EControlRigModifyBoneMode Mode; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x88(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_ModifyBoneTransforms_PerBone
{
	struct FName Bone; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyTransforms
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x68(0x10)
	float Weight; // 0x78(0x4)
	float WeightMinimum; // 0x7C(0x4)
	float WeightMaximum; // 0x80(0x4)
	EControlRigModifyBoneMode Mode; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct FRigUnit_ModifyTransforms_WorkData WorkData; // 0x88(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_ModifyTransforms_PerItem
{
	struct FRigElementKey item; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FTransform Transform; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// Size: 0x60 (Inherited: 0x0)
struct FRigUnit_MultiFABRIK_WorkData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName RootBone; // 0x68(0x8)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x70(0x10)
	float Precision; // 0x80(0x4)
	bool bPropagateToChildren; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	int32_t MaxIterations; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FRigUnit_MultiFABRIK_WorkData WorkData; // 0x90(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// Size: 0x14 (Inherited: 0x0)
struct FRigUnit_MultiFABRIK_EndEffector
{
	struct FName Bone; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_NameBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_NameBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_Contains
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_Contains : FRigUnit_NameBase
{
	struct FName Name; // 0x8(0x8)
	struct FName Search; // 0x10(0x8)
	bool Result; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_StartsWith
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_StartsWith : FRigUnit_NameBase
{
	struct FName Name; // 0x8(0x8)
	struct FName Start; // 0x10(0x8)
	bool Result; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_EndsWith
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_EndsWith : FRigUnit_NameBase
{
	struct FName Name; // 0x8(0x8)
	struct FName Ending; // 0x10(0x8)
	bool Result; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_NameReplace
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_NameReplace : FRigUnit_NameBase
{
	struct FName Name; // 0x8(0x8)
	struct FName Old; // 0x10(0x8)
	struct FName New; // 0x18(0x8)
	struct FName Result; // 0x20(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_NameTruncate
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{
	struct FName Name; // 0x8(0x8)
	int32_t Count; // 0x10(0x4)
	bool FromEnd; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FName Remainder; // 0x18(0x8)
	struct FName Chopped; // 0x20(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_NameConcat
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_NameConcat : FRigUnit_NameBase
{
	struct FName A; // 0x8(0x8)
	struct FName B; // 0x10(0x8)
	struct FName Result; // 0x18(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_NoiseVector
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{
	struct FVector position; // 0x8(0xC)
	struct FVector Speed; // 0x14(0xC)
	struct FVector Frequency; // 0x20(0xC)
	float Minimum; // 0x2C(0x4)
	float Maximum; // 0x30(0x4)
	struct FVector Result; // 0x34(0xC)
	struct FVector Time; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_NoiseFloat
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{
	float Value; // 0x8(0x4)
	float Speed; // 0xC(0x4)
	float Frequency; // 0x10(0x4)
	float Minimum; // 0x14(0x4)
	float Maximum; // 0x18(0x4)
	float Result; // 0x1C(0x4)
	float Time; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// Size: 0xD0 (Inherited: 0x68)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform OffsetTransform; // 0x80(0x30)
	float Weight; // 0xB0(0x4)
	bool bPropagateToChildren; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	struct FCachedRigElement CachedIndex; // 0xB8(0x14)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// Size: 0x160 (Inherited: 0x68)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{
	struct FRigElementKey Subject; // 0x68(0xC)
	int32_t ParentIndex; // 0x74(0x4)
	struct FRigElementKeyCollection Parents; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct FTransform InitialGlobalTransform; // 0x90(0x30)
	float Weight; // 0xC0(0x4)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
	struct FTransform Transform; // 0xD0(0x30)
	bool Switched; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	struct FCachedRigElement CachedSubject; // 0x104(0x14)
	struct FCachedRigElement CachedParent; // 0x118(0x14)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct FTransform RelativeOffset; // 0x130(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_SimBaseMutable
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x50 (Inherited: 0x0)
struct FRigUnit_PointSimulation_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	float CollisionScale; // 0x8(0x4)
	bool bDrawPointsAsSpheres; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// Size: 0x88 (Inherited: 0x0)
struct FRigUnit_PointSimulation_WorkData
{
	struct FCRSimPointContainer Simulation; // 0x0(0x78)
	struct TArray<struct FCachedRigElement> BoneIndices; // 0x78(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x200 (Inherited: 0x68)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{
	struct TArray<struct FCRSimPoint> Points; // 0x68(0x10)
	struct TArray<struct FCRSimLinearSpring> Links; // 0x78(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x88(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x98(0x10)
	float SimulatedStepsPerSecond; // 0xA8(0x4)
	ECRSimPointIntegrateType IntegratorType; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	float VerletBlend; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0xB8(0x10)
	bool bLimitLocalPosition; // 0xC8(0x1)
	bool bPropagateToChildren; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x2]; // 0xCA(0x2)
	struct FVector PrimaryAimAxis; // 0xCC(0xC)
	struct FVector SecondaryAimAxis; // 0xD8(0xC)
	uint8_t Pad_0xE4[0xC]; // 0xE4(0xC)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xF0(0x50)
	struct FCRFourPointBezier Bezier; // 0x140(0x30)
	struct FRigUnit_PointSimulation_WorkData WorkData; // 0x170(0x88)
	uint8_t Pad_0x1F8[0x8]; // 0x1F8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// Size: 0x14 (Inherited: 0x0)
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName Bone; // 0x0(0x8)
	int32_t TranslationPoint; // 0x8(0x4)
	int32_t PrimaryAimPoint; // 0xC(0x4)
	int32_t SecondaryAimPoint; // 0x10(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_PrepareForExecution
// Size: 0x68 (Inherited: 0x8)
struct FRigUnit_PrepareForExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{
	int32_t NumberOfMeasurements; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString Prefix; // 0x70(0x10)
	float AccumulatedTime; // 0x80(0x4)
	int32_t MeasurementsLeft; // 0x84(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x68 (Inherited: 0x68)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{
	struct FRigElementKey Child; // 0x8(0xC)
	bool bChildInitial; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRigElementKey OldParent; // 0x18(0xC)
	bool bOldParentInitial; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FRigElementKey NewParent; // 0x28(0xC)
	bool bNewParentInitial; // 0x34(0x1)
	uint8_t Pad_0x35[0xB]; // 0x35(0xB)
	struct FTransform Transform; // 0x40(0x30)
	struct FCachedRigElement CachedChild; // 0x70(0x14)
	struct FCachedRigElement CachedOldParent; // 0x84(0x14)
	struct FCachedRigElement CachedNewParent; // 0x98(0x14)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_PropagateTransform
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_PropagateTransform : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	bool bRecomputeGlobal; // 0x74(0x1)
	bool bApplyToChildren; // 0x75(0x1)
	bool bRecursive; // 0x76(0x1)
	uint8_t Pad_0x77[0x1]; // 0x77(0x1)
	struct FCachedRigElement CachedIndex; // 0x78(0x14)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_QuaternionToAngle : FRigUnit
{
	struct FVector Axis; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Argument; // 0x20(0x10)
	float Angle; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{
	struct FVector Axis; // 0x8(0xC)
	float Angle; // 0x14(0x4)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Argument; // 0x10(0x10)
	struct FVector Axis; // 0x20(0xC)
	float Angle; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Argument; // 0x10(0x10)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Argument0; // 0x10(0x10)
	struct FQuat Argument1; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_RandomVector
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_RandomVector : FRigUnit_MathBase
{
	int32_t Seed; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float Duration; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	struct FVector LastResult; // 0x24(0xC)
	int32_t LastSeed; // 0x30(0x4)
	float TimeLeft; // 0x34(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_RandomFloat
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{
	int32_t Seed; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float Duration; // 0x14(0x4)
	float Result; // 0x18(0x4)
	float LastResult; // 0x1C(0x4)
	int32_t LastSeed; // 0x20(0x4)
	float TimeLeft; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SendEvent
// Size: 0x80 (Inherited: 0x68)
struct FRigUnit_SendEvent : FRigUnitMutable
{
	ERigEvent Event; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	struct FRigElementKey item; // 0x6C(0xC)
	float OffsetInSeconds; // 0x78(0x4)
	bool bEnable; // 0x7C(0x1)
	bool bOnlyDuringInteraction; // 0x7D(0x1)
	uint8_t Pad_0x7E[0x2]; // 0x7E(0x2)
};

// Object: ScriptStruct ControlRig.RigUnit_SequenceExecution
// Size: 0x1E8 (Inherited: 0x8)
struct FRigUnit_SequenceExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x60)
	struct FControlRigExecuteContext A; // 0x68(0x60)
	struct FControlRigExecuteContext B; // 0xC8(0x60)
	struct FControlRigExecuteContext C; // 0x128(0x60)
	struct FControlRigExecuteContext D; // 0x188(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransform Result; // 0xA0(0x30)
	EBoneGetterSetterMode Space; // 0xD0(0x1)
	bool bPropagateToChildren; // 0xD1(0x1)
	uint8_t Pad_0xD2[0x2]; // 0xD2(0x2)
	struct FCachedRigElement CachedBone; // 0xD4(0x14)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0xA0 (Inherited: 0x68)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FQuat Rotation; // 0x70(0x10)
	EBoneGetterSetterMode Space; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float Weight; // 0x84(0x4)
	bool bPropagateToChildren; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	struct FCachedRigElement CachedBone; // 0x8C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransform Result; // 0xA0(0x30)
	EBoneGetterSetterMode Space; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x3]; // 0xD1(0x3)
	float Weight; // 0xD4(0x4)
	bool bPropagateToChildren; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	struct FCachedRigElement CachedBone; // 0xDC(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0xA0 (Inherited: 0x68)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FVector Translation; // 0x70(0xC)
	EBoneGetterSetterMode Space; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	float Weight; // 0x80(0x4)
	bool bPropagateToChildren; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct FCachedRigElement CachedBone; // 0x88(0x14)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_SetControlColor : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	struct FLinearColor Color; // 0x70(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x80(0x14)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlOffset
// Size: 0xC0 (Inherited: 0x68)
struct FRigUnit_SetControlOffset : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	struct FTransform Offset; // 0x70(0x30)
	EBoneGetterSetterMode Space; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FCachedRigElement CachedControlIndex; // 0xA4(0x14)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0xD0 (Inherited: 0x68)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	float Weight; // 0x70(0x4)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform Transform; // 0x80(0x30)
	EBoneGetterSetterMode Space; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	struct FCachedRigElement CachedControlIndex; // 0xB4(0x14)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x68(0x10)
	float Weight; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
// Size: 0x18 (Inherited: 0x0)
struct FRigUnit_SetMultiControlRotator_Entry
{
	struct FName Control; // 0x0(0x8)
	struct FRotator Rotator; // 0x8(0xC)
	EBoneGetterSetterMode Space; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	float Weight; // 0x70(0x4)
	struct FRotator Rotator; // 0x74(0xC)
	EBoneGetterSetterMode Space; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FCachedRigElement CachedControlIndex; // 0x84(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x98 (Inherited: 0x68)
struct FRigUnit_SetControlVector : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	float Weight; // 0x70(0x4)
	struct FVector Vector; // 0x74(0xC)
	EBoneGetterSetterMode Space; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FCachedRigElement CachedControlIndex; // 0x84(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries; // 0x68(0x10)
	float Weight; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_SetMultiControlVector2D_Entry
{
	struct FName Control; // 0x0(0x8)
	struct FVector2D Vector; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	float Weight; // 0x70(0x4)
	struct FVector2D Vector; // 0x74(0x8)
	struct FCachedRigElement CachedControlIndex; // 0x7C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x68(0x10)
	float Weight; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_SetMultiControlInteger_Entry
{
	struct FName Control; // 0x0(0x8)
	int32_t IntegerValue; // 0x8(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlInteger
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetControlInteger : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	int32_t Weight; // 0x70(0x4)
	int32_t IntegerValue; // 0x74(0x4)
	struct FCachedRigElement CachedControlIndex; // 0x78(0x14)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries; // 0x68(0x10)
	float Weight; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_SetMultiControlFloat_Entry
{
	struct FName Control; // 0x0(0x8)
	float FloatValue; // 0x8(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x90 (Inherited: 0x68)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	float Weight; // 0x70(0x4)
	float FloatValue; // 0x74(0x4)
	struct FCachedRigElement CachedControlIndex; // 0x78(0x14)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries; // 0x68(0x10)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x78(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_SetMultiControlBool_Entry
{
	struct FName Control; // 0x0(0x8)
	bool BoolValue; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_SetControlBool : FRigUnitMutable
{
	struct FName Control; // 0x68(0x8)
	bool BoolValue; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	struct FCachedRigElement CachedControlIndex; // 0x74(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlVisibility
// Size: 0xA0 (Inherited: 0x68)
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FString Pattern; // 0x78(0x10)
	bool bVisible; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x90(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x88 (Inherited: 0x68)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{
	struct FName Curve; // 0x68(0x8)
	float Value; // 0x70(0x4)
	struct FCachedRigElement CachedCurveIndex; // 0x74(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0xE0 (Inherited: 0x68)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{
	struct FName Bone; // 0x68(0x8)
	struct FName Space; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform Transform; // 0x80(0x30)
	float Weight; // 0xB0(0x4)
	bool bPropagateToChildren; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	struct FCachedRigElement CachedBone; // 0xB8(0x14)
	struct FCachedRigElement CachedSpaceIndex; // 0xCC(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{
	struct FRigElementKey Child; // 0x68(0xC)
	struct FRigElementKey Parent; // 0x74(0xC)
	bool bParentInitial; // 0x80(0x1)
	uint8_t Pad_0x81[0xF]; // 0x81(0xF)
	struct FTransform RelativeTransform; // 0x90(0x30)
	float Weight; // 0xC0(0x4)
	bool bPropagateToChildren; // 0xC4(0x1)
	uint8_t Pad_0xC5[0x3]; // 0xC5(0x3)
	struct FCachedRigElement CachedChild; // 0xC8(0x14)
	struct FCachedRigElement CachedParent; // 0xDC(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0xF0 (Inherited: 0x68)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{
	struct FName SpaceName; // 0x68(0x8)
	struct FTransform Transform; // 0x70(0x30)
	struct FTransform Result; // 0xA0(0x30)
	EBoneGetterSetterMode Space; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x3]; // 0xD1(0x3)
	struct FCachedRigElement CachedSpaceIndex; // 0xD4(0x14)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0xD0 (Inherited: 0x68)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{
	struct FName Space; // 0x68(0x8)
	float Weight; // 0x70(0x4)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform Transform; // 0x80(0x30)
	EBoneGetterSetterMode SpaceType; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	struct FCachedRigElement CachedSpaceIndex; // 0xB4(0x14)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetScale
// Size: 0xA0 (Inherited: 0x68)
struct FRigUnit_SetScale : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	EBoneGetterSetterMode Space; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	struct FVector Scale; // 0x78(0xC)
	float Weight; // 0x84(0x4)
	bool bPropagateToChildren; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	struct FCachedRigElement CachedIndex; // 0x8C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetRotation
// Size: 0xB0 (Inherited: 0x68)
struct FRigUnit_SetRotation : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	EBoneGetterSetterMode Space; // 0x74(0x1)
	uint8_t Pad_0x75[0xB]; // 0x75(0xB)
	struct FQuat Rotation; // 0x80(0x10)
	float Weight; // 0x90(0x4)
	bool bPropagateToChildren; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct FCachedRigElement CachedIndex; // 0x98(0x14)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetTranslation
// Size: 0xA0 (Inherited: 0x68)
struct FRigUnit_SetTranslation : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	EBoneGetterSetterMode Space; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	struct FVector Translation; // 0x78(0xC)
	float Weight; // 0x84(0x4)
	bool bPropagateToChildren; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	struct FCachedRigElement CachedIndex; // 0x8C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_SetTransform
// Size: 0xD0 (Inherited: 0x68)
struct FRigUnit_SetTransform : FRigUnitMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	EBoneGetterSetterMode Space; // 0x74(0x1)
	bool bInitial; // 0x75(0x1)
	uint8_t Pad_0x76[0xA]; // 0x76(0xA)
	struct FTransform Transform; // 0x80(0x30)
	float Weight; // 0xB0(0x4)
	bool bPropagateToChildren; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	struct FCachedRigElement CachedIndex; // 0xB8(0x14)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48 (Inherited: 0x0)
struct FRigUnit_SlideChain_WorkData
{
	float ChainLength; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<float> ItemSegments; // 0x8(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x18(0x10)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct TArray<struct FTransform> BlendedTransforms; // 0x38(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// Size: 0xC8 (Inherited: 0x68)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	float SlideAmount; // 0x78(0x4)
	bool bPropagateToChildren; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x80(0x48)
};

// Object: ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0xC8 (Inherited: 0x68)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EndBone; // 0x70(0x8)
	float SlideAmount; // 0x78(0x4)
	bool bPropagateToChildren; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x80(0x48)
};

// Object: ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// Size: 0x50 (Inherited: 0x0)
struct FRigUnit_SpringIK_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	struct FLinearColor Color; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xB0 (Inherited: 0x0)
struct FRigUnit_SpringIK_WorkData
{
	struct TArray<struct FCachedRigElement> BoneIndices; // 0x0(0x10)
	struct FCachedRigElement CachedPoleVector; // 0x10(0x14)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct FCRSimPointContainer Simulation; // 0x38(0x78)
};

// Object: ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x1D0 (Inherited: 0x68)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EndBone; // 0x70(0x8)
	float HierarchyStrength; // 0x78(0x4)
	float EffectorStrength; // 0x7C(0x4)
	float EffectorRatio; // 0x80(0x4)
	float RootStrength; // 0x84(0x4)
	float RootRatio; // 0x88(0x4)
	float Damping; // 0x8C(0x4)
	struct FVector PoleVector; // 0x90(0xC)
	bool bFlipPolePlane; // 0x9C(0x1)
	EControlRigVectorKind PoleVectorKind; // 0x9D(0x1)
	uint8_t Pad_0x9E[0x2]; // 0x9E(0x2)
	struct FName PoleVectorSpace; // 0xA0(0x8)
	struct FVector PrimaryAxis; // 0xA8(0xC)
	struct FVector SecondaryAxis; // 0xB4(0xC)
	bool bLiveSimulation; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x3]; // 0xC1(0x3)
	int32_t Iterations; // 0xC4(0x4)
	bool bLimitLocalPosition; // 0xC8(0x1)
	bool bPropagateToChildren; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x6]; // 0xCA(0x6)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xD0(0x50)
	struct FRigUnit_SpringIK_WorkData WorkData; // 0x120(0xB0)
};

// Object: ScriptStruct ControlRig.RigUnit_SecondsToFrames
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{
	float Seconds; // 0x8(0x4)
	float Frames; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_FramesToSeconds
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{
	float Frames; // 0x8(0x4)
	float Seconds; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Timeline
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_Timeline : FRigUnit_SimBase
{
	float Speed; // 0x8(0x4)
	float Time; // 0xC(0x4)
	float AccumulatedValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	float SecondsAgo; // 0x40(0x4)
	int32_t BufferSize; // 0x44(0x4)
	float TimeRange; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform Result; // 0x50(0x30)
	struct TArray<struct FTransform> Buffer; // 0x80(0x10)
	struct TArray<float> DeltaTimes; // 0x90(0x10)
	int32_t LastInsertIndex; // 0xA0(0x4)
	int32_t UpperBound; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	float SecondsAgo; // 0x14(0x4)
	int32_t BufferSize; // 0x18(0x4)
	float TimeRange; // 0x1C(0x4)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FVector> Buffer; // 0x30(0x10)
	struct TArray<float> DeltaTimes; // 0x40(0x10)
	int32_t LastInsertIndex; // 0x50(0x4)
	int32_t UpperBound; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float SecondsAgo; // 0xC(0x4)
	int32_t BufferSize; // 0x10(0x4)
	float TimeRange; // 0x14(0x4)
	float Result; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<float> Buffer; // 0x20(0x10)
	struct TArray<float> DeltaTimes; // 0x30(0x10)
	int32_t LastInsertIndex; // 0x40(0x4)
	int32_t UpperBound; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_BinaryTransformOp : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Argument0; // 0x10(0x30)
	struct FTransform Argument1; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0xA0 (Inherited: 0xA0)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0xA0 (Inherited: 0xA0)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// Size: 0x60 (Inherited: 0x0)
struct FRigUnit_TransformConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData; // 0x0(0x10)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10(0x50)
};

// Object: ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x140 (Inherited: 0x68)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey item; // 0x68(0xC)
	ETransformSpaceMode BaseTransformSpace; // 0x74(0x1)
	uint8_t Pad_0x75[0xB]; // 0x75(0xB)
	struct FTransform BaseTransform; // 0x80(0x30)
	struct FRigElementKey BaseItem; // 0xB0(0xC)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct TArray<struct FConstraintTarget> Targets; // 0xC0(0x10)
	bool bUseInitialTransforms; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xD8(0x60)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: ScriptStruct ControlRig.ConstraintTarget
// Size: 0x40 (Inherited: 0x0)
struct FConstraintTarget
{
	struct FTransform Transform; // 0x0(0x30)
	float Weight; // 0x30(0x4)
	bool bMaintainOffset; // 0x34(0x1)
	struct FTransformFilter Filter; // 0x35(0x9)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0x130 (Inherited: 0x68)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FName Bone; // 0x68(0x8)
	ETransformSpaceMode BaseTransformSpace; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
	struct FTransform BaseTransform; // 0x80(0x30)
	struct FName BaseBone; // 0xB0(0x8)
	struct TArray<struct FConstraintTarget> Targets; // 0xB8(0x10)
	bool bUseInitialTransforms; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xD0(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
// Size: 0x30 (Inherited: 0x0)
struct FRigUnit_TwistBones_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems; // 0x0(0x10)
	struct TArray<float> ItemRatios; // 0x10(0x10)
	struct TArray<struct FTransform> ItemTransforms; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// Size: 0xD0 (Inherited: 0x68)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x68(0x10)
	struct FVector TwistAxis; // 0x78(0xC)
	struct FVector PoleAxis; // 0x84(0xC)
	EControlRigAnimEasingType TwistEaseType; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	float Weight; // 0x94(0x4)
	bool bPropagateToChildren; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0xA0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_TwistBones
// Size: 0xD0 (Inherited: 0x68)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x68(0x8)
	struct FName EndBone; // 0x70(0x8)
	struct FVector TwistAxis; // 0x78(0xC)
	struct FVector PoleAxis; // 0x84(0xC)
	EControlRigAnimEasingType TwistEaseType; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	float Weight; // 0x94(0x4)
	bool bPropagateToChildren; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0xA0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x220 (Inherited: 0x68)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{
	struct FName StartJoint; // 0x68(0x8)
	struct FName EndJoint; // 0x70(0x8)
	struct FVector PoleTarget; // 0x78(0xC)
	float Spin; // 0x84(0x4)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct FTransform EndEffector; // 0x90(0x30)
	float IKBlend; // 0xC0(0x4)
	uint8_t Pad_0xC4[0xC]; // 0xC4(0xC)
	struct FTransform StartJointFKTransform; // 0xD0(0x30)
	struct FTransform MidJointFKTransform; // 0x100(0x30)
	struct FTransform EndJointFKTransform; // 0x130(0x30)
	float PreviousFKIKBlend; // 0x160(0x4)
	uint8_t Pad_0x164[0xC]; // 0x164(0xC)
	struct FTransform StartJointIKTransform; // 0x170(0x30)
	struct FTransform MidJointIKTransform; // 0x1A0(0x30)
	struct FTransform EndJointIKTransform; // 0x1D0(0x30)
	int32_t StartJointIndex; // 0x200(0x4)
	int32_t MidJointIndex; // 0x204(0x4)
	int32_t EndJointIndex; // 0x208(0x4)
	float UpperLimbLength; // 0x20C(0x4)
	float LowerLimbLength; // 0x210(0x4)
	uint8_t Pad_0x214[0xC]; // 0x214(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0xE0 (Inherited: 0x8)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Root; // 0x10(0x30)
	struct FVector PoleVector; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform Effector; // 0x50(0x30)
	struct FVector PrimaryAxis; // 0x80(0xC)
	struct FVector SecondaryAxis; // 0x8C(0xC)
	float SecondaryAxisWeight; // 0x98(0x4)
	bool bEnableStretch; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	float StretchStartRatio; // 0xA0(0x4)
	float StretchMaximumRatio; // 0xA4(0x4)
	float BoneALength; // 0xA8(0x4)
	float BoneBLength; // 0xAC(0x4)
	struct FTransform Elbow; // 0xB0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{
	struct FVector Root; // 0x8(0xC)
	struct FVector PoleVector; // 0x14(0xC)
	struct FVector Effector; // 0x20(0xC)
	bool bEnableStretch; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float StretchStartRatio; // 0x30(0x4)
	float StretchMaximumRatio; // 0x34(0x4)
	float BoneALength; // 0x38(0x4)
	float BoneBLength; // 0x3C(0x4)
	struct FVector Elbow; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x1B0 (Inherited: 0x68)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey ItemA; // 0x68(0xC)
	struct FRigElementKey ItemB; // 0x74(0xC)
	struct FRigElementKey EffectorItem; // 0x80(0xC)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FTransform Effector; // 0x90(0x30)
	struct FVector PrimaryAxis; // 0xC0(0xC)
	struct FVector SecondaryAxis; // 0xCC(0xC)
	float SecondaryAxisWeight; // 0xD8(0x4)
	struct FVector PoleVector; // 0xDC(0xC)
	EControlRigVectorKind PoleVectorKind; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x3]; // 0xE9(0x3)
	struct FRigElementKey PoleVectorSpace; // 0xEC(0xC)
	bool bEnableStretch; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float StretchStartRatio; // 0xFC(0x4)
	float StretchMaximumRatio; // 0x100(0x4)
	float Weight; // 0x104(0x4)
	float ItemALength; // 0x108(0x4)
	float ItemBLength; // 0x10C(0x4)
	bool bPropagateToChildren; // 0x110(0x1)
	uint8_t Pad_0x111[0xF]; // 0x111(0xF)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x120(0x40)
	struct FCachedRigElement CachedItemAIndex; // 0x160(0x14)
	struct FCachedRigElement CachedItemBIndex; // 0x174(0x14)
	struct FCachedRigElement CachedEffectorItemIndex; // 0x188(0x14)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x19C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x190 (Inherited: 0x68)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{
	struct FName BoneA; // 0x68(0x8)
	struct FName BoneB; // 0x70(0x8)
	struct FName EffectorBone; // 0x78(0x8)
	struct FTransform Effector; // 0x80(0x30)
	struct FVector PrimaryAxis; // 0xB0(0xC)
	struct FVector SecondaryAxis; // 0xBC(0xC)
	float SecondaryAxisWeight; // 0xC8(0x4)
	struct FVector PoleVector; // 0xCC(0xC)
	EControlRigVectorKind PoleVectorKind; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	struct FName PoleVectorSpace; // 0xDC(0x8)
	bool bEnableStretch; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	float StretchStartRatio; // 0xE8(0x4)
	float StretchMaximumRatio; // 0xEC(0x4)
	float Weight; // 0xF0(0x4)
	float BoneALength; // 0xF4(0x4)
	float BoneBLength; // 0xF8(0x4)
	bool bPropagateToChildren; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x100(0x40)
	struct FCachedRigElement CachedBoneAIndex; // 0x140(0x14)
	struct FCachedRigElement CachedBoneBIndex; // 0x154(0x14)
	struct FCachedRigElement CachedEffectorBoneIndex; // 0x168(0x14)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x17C(0x14)
};

// Object: ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_Distance_VectorVector : FRigUnit
{
	struct FVector Argument0; // 0x8(0xC)
	struct FVector Argument1; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_BinaryVectorOp : FRigUnit
{
	struct FVector Argument0; // 0x8(0xC)
	struct FVector Argument1; // 0x14(0xC)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{
	struct FVector Target; // 0x8(0xC)
	float Strength; // 0x14(0x4)
	float Damp; // 0x18(0x4)
	float Blend; // 0x1C(0x4)
	struct FVector position; // 0x20(0xC)
	struct FVector Velocity; // 0x2C(0xC)
	struct FVector Acceleration; // 0x38(0xC)
	struct FCRSimPoint Point; // 0x44(0x28)
	bool bInitialized; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	bool bEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float Thickness; // 0x44(0x4)
	float Scale; // 0x48(0x4)
	struct FRigElementKey Space; // 0x4C(0xC)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	bool bEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float Thickness; // 0x44(0x4)
	float Scale; // 0x48(0x4)
	struct FName BoneSpace; // 0x4C(0x8)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	bool bEnabled; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Thickness; // 0x24(0x4)
	float Scale; // 0x28(0x4)
	struct FRigElementKey Space; // 0x2C(0xC)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	bool bEnabled; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Thickness; // 0x24(0x4)
	float Scale; // 0x28(0x4)
	struct FName BoneSpace; // 0x2C(0x8)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{
	struct FVector Value; // 0x8(0xC)
	bool bEnabled; // 0x14(0x1)
	ERigUnitVisualDebugPointMode Mode; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x4)
	float Scale; // 0x2C(0x4)
	struct FRigElementKey Space; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{
	struct FVector Value; // 0x8(0xC)
	bool bEnabled; // 0x14(0x1)
	ERigUnitVisualDebugPointMode Mode; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x4)
	float Scale; // 0x2C(0x4)
	struct FName BoneSpace; // 0x30(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_SphereTraceWorld : FRigUnit
{
	struct FVector Start; // 0x8(0xC)
	struct FVector End; // 0x14(0xC)
	uint8_t Channel; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Radius; // 0x24(0x4)
	bool bHit; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FVector HitLocation; // 0x2C(0xC)
	struct FVector HitNormal; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Rotation; // 0x10(0x10)
	struct FQuat Global; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Rotation; // 0x10(0x10)
	struct FQuat World; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_ToRigSpace_Location : FRigUnit
{
	struct FVector Location; // 0x8(0xC)
	struct FVector Global; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{
	struct FVector Location; // 0x8(0xC)
	struct FVector World; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FTransform Global; // 0x40(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FTransform World; // 0x40(0x30)
};

// Object: ScriptStruct ControlRig.StructReference
// Size: 0x8 (Inherited: 0x0)
struct FStructReference
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: Class ControlRig.ControlRig
// Size: 0x650 (Inherited: 0x28)
struct UControlRig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UControlRig, "ControlRig")

	uint8_t Pad_0x28[0x1D]; // 0x28(0x1D)
	ERigExecutionType ExecutionType; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	struct URigVM* VM; // 0x48(0x8)
	struct FRigHierarchyContainer Hierarchy; // 0x50(0x368)
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; // 0x3B8(0x28)
	uint8_t Pad_0x3E0[0x10]; // 0x3E0(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x3F0(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x440(0x50)
	struct FControlRigDrawContainer DrawContainer; // 0x490(0x18)
	uint8_t Pad_0x4A8[0x18]; // 0x4A8(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x4C0(0x8)
	struct TArray<struct FName> EventQueue; // 0x4C8(0x10)
	uint8_t Pad_0x4D8[0x78]; // 0x4D8(0x78)
	struct FRigInfluenceMapPerEvent Influences; // 0x550(0x60)
	struct UControlRig* InteractionRig; // 0x5B0(0x8)
	struct UControlRig* InteractionRigClass; // 0x5B8(0x8)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5C0(0x10)
	uint8_t Pad_0x5D0[0x80]; // 0x5D0(0x80)

	// Object: Function ControlRig.ControlRig.SetInteractionRigClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a0110
	// Params: [ Num(1) Size(0x8) ]
	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass);

	// Object: Function ControlRig.ControlRig.SetInteractionRig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a01d4
	// Params: [ Num(1) Size(0x8) ]
	void SetInteractionRig(struct UControlRig* InInteractionRig);

	// Object: Function ControlRig.ControlRig.GetInteractionRigClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a01b8
	// Params: [ Num(1) Size(0x8) ]
	struct UControlRig* GetInteractionRigClass();

	// Object: Function ControlRig.ControlRig.GetInteractionRig
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a027c
	// Params: [ Num(1) Size(0x8) ]
	struct UControlRig* GetInteractionRig();
};

// Object: Class ControlRig.AdditiveControlRig
// Size: 0x660 (Inherited: 0x650)
struct UAdditiveControlRig : UControlRig
{
	DEFINE_UE_CLASS_HELPERS(UAdditiveControlRig, "AdditiveControlRig")

	uint8_t Pad_0x650[0x10]; // 0x650(0x10)
};

// Object: Class ControlRig.ControlRigAnimInstance
// Size: 0x2D0 (Inherited: 0x2D0)
struct UControlRigAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UControlRigAnimInstance, "ControlRigAnimInstance")
};

// Object: Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x358 (Inherited: 0x358)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(UControlRigBlueprintGeneratedClass, "ControlRigBlueprintGeneratedClass")
};

// Object: Class ControlRig.ControlRigComponent
// Size: 0x770 (Inherited: 0x680)
struct UControlRigComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UControlRigComponent, "ControlRigComponent")

	struct UControlRig* ControlRigClass; // 0x678(0x8)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x680(0x10)
	struct FMulticastInlineDelegate OnPreSetupDelegate; // 0x690(0x10)
	struct FMulticastInlineDelegate OnPostSetupDelegate; // 0x6A0(0x10)
	struct FMulticastInlineDelegate OnPreUpdateDelegate; // 0x6B0(0x10)
	struct FMulticastInlineDelegate OnPostUpdateDelegate; // 0x6C0(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x6D0(0x10)
	bool bResetTransformBeforeTick; // 0x6E0(0x1)
	bool bResetInitialsBeforeSetup; // 0x6E1(0x1)
	bool bUpdateRigOnTick; // 0x6E2(0x1)
	bool bUpdateInEditor; // 0x6E3(0x1)
	bool bDrawBones; // 0x6E4(0x1)
	struct UControlRig* ControlRig; // 0x6E8(0x8)
	uint8_t Pad_0x6F5[0x7B]; // 0x6F5(0x7B)

	// Object: Function ControlRig.ControlRigComponent.Update
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a25d4
	// Params: [ Num(1) Size(0x4) ]
	void Update(float DeltaTime);

	// Object: Function ControlRig.ControlRigComponent.SetMappedElements
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a24ec
	// Params: [ Num(1) Size(0x10) ]
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements);

	// Object: Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0398
	// Params: [ Num(3) Size(0x41) ]
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.SetInitialBoneTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a1878
	// Params: [ Num(4) Size(0x42) ]
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);

	// Object: Function ControlRig.ControlRigComponent.SetControlVector2D
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0e30
	// Params: [ Num(2) Size(0x10) ]
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value);

	// Object: Function ControlRig.ControlRigComponent.SetControlTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0958
	// Params: [ Num(3) Size(0x41) ]
	void SetControlTransform(struct FName ControlName, struct FTransform Value, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.SetControlScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0ab8
	// Params: [ Num(3) Size(0x15) ]
	void SetControlScale(struct FName ControlName, struct FVector Value, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.SetControlRotator
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0be0
	// Params: [ Num(3) Size(0x15) ]
	void SetControlRotator(struct FName ControlName, struct FRotator Value, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.SetControlPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0d08
	// Params: [ Num(3) Size(0x15) ]
	void SetControlPosition(struct FName ControlName, struct FVector Value, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.SetControlOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a06f8
	// Params: [ Num(3) Size(0x41) ]
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.SetControlInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a0f14
	// Params: [ Num(2) Size(0xC) ]
	void SetControlInt(struct FName ControlName, int32_t Value);

	// Object: Function ControlRig.ControlRigComponent.SetControlFloat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a0ffc
	// Params: [ Num(2) Size(0xC) ]
	void SetControlFloat(struct FName ControlName, float Value);

	// Object: Function ControlRig.ControlRigComponent.SetControlBool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a10e4
	// Params: [ Num(2) Size(0x9) ]
	void SetControlBool(struct FName ControlName, bool Value);

	// Object: Function ControlRig.ControlRigComponent.SetBoneTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a1a20
	// Params: [ Num(5) Size(0x49) ]
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);

	// Object: Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a1fe4
	// Params: [ Num(1) Size(0x8) ]
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh);

	// Object: Function ControlRig.ControlRigComponent.OnPreUpdate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x35a2740
	// Params: [ Num(1) Size(0x8) ]
	void OnPreUpdate(struct UControlRigComponent* Component);

	// Object: Function ControlRig.ControlRigComponent.OnPreSetup
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x35a28a0
	// Params: [ Num(1) Size(0x8) ]
	void OnPreSetup(struct UControlRigComponent* Component);

	// Object: Function ControlRig.ControlRigComponent.OnPostUpdate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x35a2690
	// Params: [ Num(1) Size(0x8) ]
	void OnPostUpdate(struct UControlRigComponent* Component);

	// Object: Function ControlRig.ControlRigComponent.OnPostSetup
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x35a27f0
	// Params: [ Num(1) Size(0x8) ]
	void OnPostSetup(struct UControlRigComponent* Component);

	// Object: Function ControlRig.ControlRigComponent.OnPostInitialize
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x35a2950
	// Params: [ Num(1) Size(0x8) ]
	void OnPostInitialize(struct UControlRigComponent* Component);

	// Object: Function ControlRig.ControlRigComponent.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a267c
	// Params: [ Num(0) Size(0x0) ]
	void Initialize();

	// Object: Function ControlRig.ControlRigComponent.GetSpaceTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a05f8
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetSpaceTransform(struct FName SpaceName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a04f8
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetInitialBoneTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a1c08
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetInitialBoneTransform(struct FName BoneName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetElementNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a1efc
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> GetElementNames(ERigElementType ElementType);

	// Object: Function ControlRig.ControlRigComponent.GetControlVector2D
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a15b0
	// Params: [ Num(2) Size(0x10) ]
	struct FVector2D GetControlVector2D(struct FName ControlName);

	// Object: Function ControlRig.ControlRigComponent.GetControlTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a11d4
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetControlTransform(struct FName ControlName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetControlScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a12d4
	// Params: [ Num(3) Size(0x18) ]
	struct FVector GetControlScale(struct FName ControlName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetControlRotator
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a13c8
	// Params: [ Num(3) Size(0x18) ]
	struct FRotator GetControlRotator(struct FName ControlName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetControlRig
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a2a34
	// Params: [ Num(1) Size(0x8) ]
	struct UControlRig* GetControlRig();

	// Object: Function ControlRig.ControlRigComponent.GetControlPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a14bc
	// Params: [ Num(3) Size(0x18) ]
	struct FVector GetControlPosition(struct FName ControlName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetControlOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35a0858
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetControlOffset(struct FName ControlName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetControlInt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a1664
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetControlInt(struct FName ControlName);

	// Object: Function ControlRig.ControlRigComponent.GetControlFloat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a1714
	// Params: [ Num(2) Size(0xC) ]
	float GetControlFloat(struct FName ControlName);

	// Object: Function ControlRig.ControlRigComponent.GetControlBool
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a17c4
	// Params: [ Num(2) Size(0x9) ]
	bool GetControlBool(struct FName ControlName);

	// Object: Function ControlRig.ControlRigComponent.GetBoneTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a1d08
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetBoneTransform(struct FName BoneName, EControlRigComponentSpace Space);

	// Object: Function ControlRig.ControlRigComponent.GetAbsoluteTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a2a00
	// Params: [ Num(1) Size(0x4) ]
	float GetAbsoluteTime();

	// Object: Function ControlRig.ControlRigComponent.DoesElementExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a1e08
	// Params: [ Num(3) Size(0xA) ]
	bool DoesElementExist(struct FName Name, ERigElementType ElementType);

	// Object: Function ControlRig.ControlRigComponent.ClearMappedElements
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a25c0
	// Params: [ Num(0) Size(0x0) ]
	void ClearMappedElements();

	// Object: Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a2134
	// Params: [ Num(3) Size(0x28) ]
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves);

	// Object: Function ControlRig.ControlRigComponent.AddMappedElements
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a2418
	// Params: [ Num(1) Size(0x10) ]
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements);

	// Object: Function ControlRig.ControlRigComponent.AddMappedComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a2310
	// Params: [ Num(1) Size(0x10) ]
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components);

	// Object: Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a208c
	// Params: [ Num(1) Size(0x8) ]
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent);
};

// Object: Class ControlRig.ControlRigControlActor
// Size: 0x390 (Inherited: 0x300)
struct AControlRigControlActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AControlRigControlActor, "ControlRigControlActor")

	struct AActor* ActorToTrack; // 0x300(0x8)
	struct UControlRig* ControlRigClass; // 0x308(0x8)
	bool bRefreshOnTick; // 0x310(0x1)
	bool bIsSelectable; // 0x311(0x1)
	uint8_t Pad_0x312[0x6]; // 0x312(0x6)
	struct UMaterialInterface* MaterialOverride; // 0x318(0x8)
	struct FString ColorParameter; // 0x320(0x10)
	bool bCastShadows; // 0x330(0x1)
	uint8_t Pad_0x331[0x7]; // 0x331(0x7)
	struct USceneComponent* ActorRootComponent; // 0x338(0x8)
	struct UControlRig* ControlRig; // 0x340(0x8)
	struct TArray<struct FName> ControlNames; // 0x348(0x10)
	struct TArray<struct FTransform> GizmoTransforms; // 0x358(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x368(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x378(0x10)
	struct FName ColorParameterName; // 0x388(0x8)

	// Object: Function ControlRig.ControlRigControlActor.Refresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a8e34
	// Params: [ Num(0) Size(0x0) ]
	void Refresh();

	// Object: Function ControlRig.ControlRigControlActor.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a8e48
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

// Object: Class ControlRig.ControlRigGizmoActor
// Size: 0x328 (Inherited: 0x300)
struct AControlRigGizmoActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AControlRigGizmoActor, "ControlRigGizmoActor")

	struct USceneComponent* ActorRootComponent; // 0x300(0x8)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x308(0x8)
	uint32_t ControlRigIndex; // 0x310(0x4)
	struct FName ControlName; // 0x314(0x8)
	struct FName ColorParameterName; // 0x31C(0x8)
	uint8_t bEnabled : 1; // 0x324(0x1), Mask(0x1)
	uint8_t bSelected : 1; // 0x324(0x1), Mask(0x2)
	uint8_t bSelectable : 1; // 0x324(0x1), Mask(0x4)
	uint8_t bHovered : 1; // 0x324(0x1), Mask(0x8)
	uint8_t BitPad_0x324_4 : 4; // 0x324(0x1)
	uint8_t Pad_0x325[0x3]; // 0x325(0x3)

	// Object: Function ControlRig.ControlRigGizmoActor.SetSelected
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x35a939c
	// Params: [ Num(1) Size(0x1) ]
	void SetSelected(bool bInSelected);

	// Object: Function ControlRig.ControlRigGizmoActor.SetSelectable
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x35a92a4
	// Params: [ Num(1) Size(0x1) ]
	void SetSelectable(bool bInSelectable);

	// Object: Function ControlRig.ControlRigGizmoActor.SetHovered
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x35a91ec
	// Params: [ Num(1) Size(0x1) ]
	void SetHovered(bool bInHovered);

	// Object: Function ControlRig.ControlRigGizmoActor.SetGlobalTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x35a90d0
	// Params: [ Num(1) Size(0x30) ]
	void SetGlobalTransform(const struct FTransform& InTransform);

	// Object: Function ControlRig.ControlRigGizmoActor.SetEnabled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x35a9494
	// Params: [ Num(1) Size(0x1) ]
	void SetEnabled(bool bInEnabled);

	// Object: Function ControlRig.ControlRigGizmoActor.OnTransformChanged
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	void OnTransformChanged(const struct FTransform& NewTransform);

	// Object: Function ControlRig.ControlRigGizmoActor.OnSelectionChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void OnSelectionChanged(bool bIsSelected);

	// Object: Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void OnManipulatingChanged(bool bIsManipulating);

	// Object: Function ControlRig.ControlRigGizmoActor.OnHoveredChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void OnHoveredChanged(bool bIsSelected);

	// Object: Function ControlRig.ControlRigGizmoActor.OnEnabledChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void OnEnabledChanged(bool bIsEnabled);

	// Object: Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a935c
	// Params: [ Num(1) Size(0x1) ]
	bool IsSelectedInEditor();

	// Object: Function ControlRig.ControlRigGizmoActor.IsHovered
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a91ac
	// Params: [ Num(1) Size(0x1) ]
	bool IsHovered();

	// Object: Function ControlRig.ControlRigGizmoActor.IsEnabled
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a9454
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabled();

	// Object: Function ControlRig.ControlRigGizmoActor.GetGlobalTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a9064
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetGlobalTransform();
};

// Object: Class ControlRig.ControlRigGizmoLibrary
// Size: 0xE0 (Inherited: 0x28)
struct UControlRigGizmoLibrary : UObject
{
	DEFINE_UE_CLASS_HELPERS(UControlRigGizmoLibrary, "ControlRigGizmoLibrary")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FControlRigGizmoDefinition DefaultGizmo; // 0x30(0x60)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x90(0x28)
	struct FName MaterialColorParameter; // 0xB8(0x8)
	struct TArray<struct FControlRigGizmoDefinition> Gizmos; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
};

// Object: Class ControlRig.ControlRigLayerInstance
// Size: 0x2D0 (Inherited: 0x2D0)
struct UControlRigLayerInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UControlRigLayerInstance, "ControlRigLayerInstance")
};

// Object: Class ControlRig.ControlRigValidationPass
// Size: 0x28 (Inherited: 0x28)
struct UControlRigValidationPass : UObject
{
	DEFINE_UE_CLASS_HELPERS(UControlRigValidationPass, "ControlRigValidationPass")
};

// Object: Class ControlRig.ControlRigNumericalValidationPass
// Size: 0x60 (Inherited: 0x28)
struct UControlRigNumericalValidationPass : UControlRigValidationPass
{
	DEFINE_UE_CLASS_HELPERS(UControlRigNumericalValidationPass, "ControlRigNumericalValidationPass")

	bool bCheckControls; // 0x28(0x1)
	bool bCheckBones; // 0x29(0x1)
	bool bCheckCurves; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x1]; // 0x2B(0x1)
	float TranslationPrecision; // 0x2C(0x4)
	float RotationPrecision; // 0x30(0x4)
	float ScalePrecision; // 0x34(0x4)
	float CurvePrecision; // 0x38(0x4)
	struct FName EventNameA; // 0x3C(0x8)
	struct FName EventNameB; // 0x44(0x8)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FRigPose Pose; // 0x50(0x10)
};

// Object: Class ControlRig.ControlRigObjectHolder
// Size: 0x38 (Inherited: 0x28)
struct UControlRigObjectHolder : UObject
{
	DEFINE_UE_CLASS_HELPERS(UControlRigObjectHolder, "ControlRigObjectHolder")

	struct TArray<struct UObject*> Objects; // 0x28(0x10)
};

// Object: Class ControlRig.ControlRigSequence
// Size: 0x220 (Inherited: 0x1C8)
struct UControlRigSequence : ULevelSequence
{
	DEFINE_UE_CLASS_HELPERS(UControlRigSequence, "ControlRigSequence")

	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x1C8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x1F0(0x28)
	float LastExportedFrameRate; // 0x218(0x4)
	uint8_t Pad_0x21C[0x4]; // 0x21C(0x4)
};

// Object: Class ControlRig.ControlRigSequencerAnimInstance
// Size: 0x2E0 (Inherited: 0x2D0)
struct UControlRigSequencerAnimInstance : UAnimSequencerInstance
{
	DEFINE_UE_CLASS_HELPERS(UControlRigSequencerAnimInstance, "ControlRigSequencerAnimInstance")

	uint8_t Pad_0x2D0[0x10]; // 0x2D0(0x10)
};

// Object: Class ControlRig.ControlRigSettings
// Size: 0x38 (Inherited: 0x38)
struct UControlRigSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UControlRigSettings, "ControlRigSettings")
};

// Object: Class ControlRig.ControlRigValidator
// Size: 0x68 (Inherited: 0x28)
struct UControlRigValidator : UObject
{
	DEFINE_UE_CLASS_HELPERS(UControlRigValidator, "ControlRigValidator")

	struct TArray<struct UControlRigValidationPass*> Passes; // 0x28(0x10)
	uint8_t Pad_0x38[0x30]; // 0x38(0x30)
};

// Object: Class ControlRig.FKControlRig
// Size: 0x668 (Inherited: 0x650)
struct UFKControlRig : UControlRig
{
	DEFINE_UE_CLASS_HELPERS(UFKControlRig, "FKControlRig")

	struct TArray<bool> IsControlActive; // 0x650(0x10)
	EControlRigFKRigExecuteMode ApplyMode; // 0x660(0x1)
	uint8_t Pad_0x661[0x7]; // 0x661(0x7)
};

// Object: Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x2E8 (Inherited: 0x140)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneControlRigParameterSection, "MovieSceneControlRigParameterSection")

	struct UControlRig* ControlRig; // 0x140(0x8)
	struct TArray<bool> ControlsMask; // 0x148(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x158(0x4)
	bool bAdditive; // 0x15C(0x1)
	bool bApplyBoneFilter; // 0x15D(0x1)
	uint8_t Pad_0x15E[0x2]; // 0x15E(0x2)
	struct FInputBlendPose BoneFilter; // 0x160(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x170(0xA0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x210(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x260(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x270(0x10)
	uint8_t Pad_0x280[0x68]; // 0x280(0x68)
};

// Object: Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0xB0 (Inherited: 0x78)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneControlRigParameterTrack, "MovieSceneControlRigParameterTrack")

	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
	struct UControlRig* ControlRig; // 0x88(0x8)
	struct UMovieSceneSection* SectionToKey; // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
	struct FName TrackName; // 0xA8(0x8)
};

// Object: ControlRigBlueprintGeneratedClass ControlRig.Default__ControlRigBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__ControlRigBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(Default__ControlRigBlueprintGeneratedClass, "Default__ControlRigBlueprintGeneratedClass")
};

} // namespace SDK
