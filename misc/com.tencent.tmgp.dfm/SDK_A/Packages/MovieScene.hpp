#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MovieScene
// Enums: 13
// Structs: 75
// Classes: 21

struct AActor;
enum class ERichCurveExtrapolation : uint8_t;
enum class ERichCurveInterpMode : uint8_t;
enum class ERichCurveTangentMode : uint8_t;
enum class ERichCurveTangentWeightMode : uint8_t;
struct UCurveFloat;
struct UMaterialInterface;
struct UWorld;
struct FMovieSceneSequenceLoopCount;
struct FMovieSceneSequencePlaybackSettings;
struct FMovieSceneObjectBindingID;
struct FMovieSceneChannel;
struct FMovieSceneEvalTemplateBase;
struct FMovieSceneEvalTemplate;
struct FMovieSceneSectionGroup;
struct FMovieSceneObjectBindingIDs;
struct FMovieSceneTrackLabels;
struct FMovieSceneExpansionState;
struct FMovieSceneEditorData;
struct FMovieSceneMarkedFrame;
struct FMovieSceneTimecodeSource;
struct FMovieSceneBinding;
struct FMovieSceneBindingOverrideData;
struct FOptionalMovieSceneBlendType;
struct FMovieSceneBoolChannel;
struct FMovieSceneByteChannel;
struct FMovieSceneKeyHandleMap;
struct FMovieSceneEvalTemplatePtr;
struct FMovieSceneEmptyStruct;
struct FMovieSceneEvaluationField;
struct FMovieSceneSequenceID;
struct FMovieSceneEvaluationMetaData;
struct FMovieSceneTrackIdentifier;
struct FMovieSceneEvaluationKey;
struct FMovieSceneOrderedEvaluationKey;
struct FMovieSceneEvaluationGroup;
struct FMovieSceneEvaluationFieldTrackPtr;
struct FMovieSceneSegmentIdentifier;
struct FMovieSceneEvaluationFieldSegmentPtr;
struct FMovieSceneEvaluationGroupLUTIndex;
struct FMovieSceneFrameRange;
struct FMovieSceneEvaluationOperand;
struct FMovieSceneEvaluationTemplateSerialNumber;
struct FMovieSceneEvaluationTrackSegments;
struct FMovieSceneTrackImplementationPtr;
struct FSectionEvaluationDataTree;
struct FMovieSceneEvaluationTrack;
struct FMovieSceneSequenceHierarchyNode;
struct FMovieSceneSequenceInstanceDataPtr;
struct FMovieSceneSequenceTransform;
struct FMovieSceneSubSequenceData;
struct FMovieSceneSequenceHierarchy;
struct FMovieSceneSubSectionFieldData;
struct FMovieSceneTemplateGenerationLedger;
struct FMovieSceneTrackFieldData;
struct FMovieSceneEvaluationTemplate;
struct FMovieSceneSegment;
struct FMovieSceneSubSectionData;
struct FMovieSceneRootEvaluationTemplateInstance;
struct FMovieSceneFloatChannel;
struct FMovieSceneTangentData;
struct FMovieSceneFloatValue;
struct FMovieSceneIntegerChannel;
struct FMovieSceneKeyStruct;
struct FMovieSceneKeyTimeStruct;
struct FGeneratedMovieSceneKeyStruct;
struct FMovieSceneMaterialChannel;
struct FMovieSceneObjectPathChannelKeyValue;
struct FMovieSceneObjectPathChannel;
struct FMovieScenePossessable;
struct FMovieScenePropertySectionData;
struct FMovieScenePropertySectionTemplate;
struct FMovieSceneEasingSettings;
struct FMovieSceneSectionEvalOptions;
struct FMovieSceneSectionParameters;
struct FSectionEvaluationData;
struct FMovieSceneSequenceInstanceData;
struct FMovieSceneSequenceReplProperties;
struct FMovieSceneSpawnable;
struct FTestMovieSceneEvalTemplate;
struct FMovieSceneTrackDisplayOptions;
struct FMovieSceneTrackEvalOptions;
struct FMovieSceneTrackImplementation;
struct UMovieSceneSignedObject;
struct UMovieSceneSection;
struct UMovieSceneTrack;
struct UMovieSceneNameableTrack;
struct UMovieSceneSubTrack;
struct UMovieSceneSequence;
struct UMovieSceneSequencePlayer;
struct UMovieScenePrespawnObjectState;
struct IMovieScenePlaybackClient;
struct UMovieScene;
struct UMovieSceneBindingOverrides;
struct IMovieSceneBindingOwnerInterface;
struct UMovieSceneBuiltInEasingFunction;
struct UMovieSceneEasingExternalCurve;
struct IMovieSceneEasingFunction;
struct UMovieSceneFolder;
struct IMovieSceneKeyProxy;
struct UMovieSceneSubSection;
struct UTestMovieSceneTrack;
struct UTestMovieSceneSection;
struct UTestMovieSceneSequence;

// Object: Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Object: Enum MovieScene.ESubSequenceTimeType
enum class ESubSequenceTimeType : uint8_t
{
	Nearest = 0,
	Floor = 1,
	Ceil = 2,
	ESubSequenceTimeType_MAX = 3
};

// Object: Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	EMovieSceneBlendType_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Object: Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Object: Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick = 0,
	Platform = 1,
	Audio = 2,
	Timecode = 3,
	EUpdateClockSource_MAX = 4
};

// Object: Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Object: Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Object: Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Object: Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Object: Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Object: Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceLoopCount
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneSequencePlaybackSettings
{
	uint8_t bAutoPlay : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float StartTime; // 0xC(0x4)
	uint8_t bRandomStartTime : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bRestoreState : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bDisableMovementInput : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bDisableLookAtInput : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bHidePlayer : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bHideHud : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bDisableCameraCuts : 1; // 0x10(0x1), Mask(0x40)
	uint8_t bPauseAtEnd : 1; // 0x10(0x1), Mask(0x80)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneObjectBindingID
{
	int32_t SequenceID; // 0x0(0x4)
	EMovieSceneObjectBindingSpace Space; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FGuid Guid; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneChannel
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t bActive : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvalTemplateBase
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
	EMovieSceneCompletionMode CompletionMode; // 0x9(0x1)
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0xC(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSectionGroup
{
	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneObjectBindingIDs
{
	struct TArray<struct FMovieSceneObjectBindingID> ids; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackLabels
{
	struct TArray<struct FString> Strings; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneExpansionState
{
	uint8_t bExpanded : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xF0 (Inherited: 0x0)
struct FMovieSceneEditorData
{
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0(0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x8)
	double ViewEnd; // 0x68(0x8)
	double WorkStart; // 0x70(0x8)
	double WorkEnd; // 0x78(0x8)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80(0x50)
	struct FFloatRange WorkingRange; // 0xD0(0x10)
	struct FFloatRange ViewRange; // 0xE0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Label; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneTimecodeSource
{
	struct FTimecode Timecode; // 0x0(0x14)
	struct FFrameNumber DeltaFrame; // 0x14(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneBinding
{
	struct FGuid ObjectGuid; // 0x0(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID ObjectBindingId; // 0x0(0x18)
	struct TWeakObjectPtr<struct UObject> Object; // 0x18(0x8)
	uint8_t bOverridesDefault : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x2 (Inherited: 0x0)
struct FOptionalMovieSceneBlendType
{
	EMovieSceneBlendType BlendType; // 0x0(0x1)
	uint8_t bIsValid : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x98 (Inherited: 0x10)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	uint8_t DefaultValue : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bHasDefaultValue : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct TArray<uint8_t> Values; // 0x28(0x10)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0xA0 (Inherited: 0x10)
struct FMovieSceneByteChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	uint8_t DefaultValue; // 0x20(0x1)
	uint8_t bHasDefaultValue : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct TArray<uint8_t> Values; // 0x28(0x10)
	struct UEnum* Enum; // 0x38(0x8)
	uint8_t Pad_0x40[0x60]; // 0x40(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88 (Inherited: 0x0)
struct FMovieSceneEvalTemplatePtr
{
	uint8_t Pad_0x0[0x88]; // 0x0(0x88)
};

// Object: ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneEmptyStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneEvaluationField
{
	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceID
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x70 (Inherited: 0x0)
struct FMovieSceneEvaluationMetaData
{
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
	struct TMap<struct FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackIdentifier
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
	uint32_t SectionIndex; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey Key; // 0x0(0xC)
	uint16_t SetupIndex; // 0xC(0x2)
	uint16_t TearDownIndex; // 0xE(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSegmentIdentifier
{
	int32_t IdentifierIndex; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0xC (Inherited: 0x8)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier SegmentID; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationGroupLUTIndex
{
	int32_t LUTOffset; // 0x0(0x4)
	int32_t NumInitPtrs; // 0x4(0x4)
	int32_t NumEvalPtrs; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneFrameRange
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneEvaluationOperand
{
	struct FGuid ObjectBindingId; // 0x0(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneEvaluationTrackSegments
{
	struct TArray<int32_t> SegmentIdentifierToIndex; // 0x0(0x10)
	struct TArray<struct FMovieSceneSegment> SortedSegments; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneTrackImplementationPtr
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MovieScene.SectionEvaluationDataTree
// Size: 0x60 (Inherited: 0x0)
struct FSectionEvaluationDataTree
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0xF8 (Inherited: 0x0)
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingId; // 0x0(0x10)
	uint16_t EvaluationPriority; // 0x10(0x2)
	EEvaluationMethod EvaluationMethod; // 0x12(0x1)
	uint8_t Pad_0x13[0x5]; // 0x13(0x5)
	struct FMovieSceneEvaluationTrackSegments Segments; // 0x18(0x20)
	struct UMovieSceneTrack* SourceTrack; // 0x38(0x8)
	struct FSectionEvaluationDataTree EvaluationTree; // 0x40(0x60)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xA0(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0xB0(0x38)
	struct FName EvaluationGroup; // 0xE8(0x8)
	uint8_t bEvaluateInPreroll : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t bEvaluateInPostroll : 1; // 0xF0(0x1), Mask(0x2)
	uint8_t bTearDownPriority : 1; // 0xF0(0x1), Mask(0x4)
	uint8_t BitPad_0xF0_3 : 5; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID ParentId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceDataPtr
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneSequenceTransform
{
	float TimeScale; // 0x0(0x4)
	struct FFrameTime offset; // 0x4(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xA8 (Inherited: 0x0)
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0xC)
	struct FFrameRate TickResolution; // 0x24(0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x2C(0x4)
	struct FMovieSceneFrameRange PlayRange; // 0x30(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x40(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x50(0x10)
	int32_t HierarchicalBias; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x68(0x18)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
	struct FGuid SubSectionSignature; // 0x88(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0xA0 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchy
{
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x0(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneSubSectionFieldData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xA8 (Inherited: 0x0)
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackFieldData
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneTrackFieldData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x2F0 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0(0x50)
	uint8_t Pad_0x50[0x50]; // 0x50(0x50)
	struct FMovieSceneEvaluationField EvaluationField; // 0xA0(0x30)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0xD0(0xA0)
	struct FGuid SequenceSignature; // 0x170(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188(0xA8)
	struct FMovieSceneTrackFieldData TrackFieldData; // 0x230(0x60)
	struct FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x0)
struct FMovieSceneSegment
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0(0x8)
	struct FGuid ObjectBindingId; // 0x8(0x10)
	ESectionEvaluationFlags Flags; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0x3F8 (Inherited: 0x0)
struct FMovieSceneRootEvaluationTemplateInstance
{
	uint8_t Pad_0x0[0x68]; // 0x0(0x68)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x68(0x50)
	uint8_t Pad_0xB8[0x340]; // 0xB8(0x340)
};

// Object: ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xA0 (Inherited: 0x10)
struct FMovieSceneFloatChannel : FMovieSceneChannel
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

// Object: ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentData
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ArriveTangentWeight; // 0xC(0x4)
	float LeaveTangentWeight; // 0x10(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneFloatValue
{
	float Value; // 0x0(0x4)
	ERichCurveInterpMode InterpMode; // 0x4(0x1)
	ERichCurveTangentMode TangentMode; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FMovieSceneTangentData Tangent; // 0x8(0x14)
	struct FName Tag; // 0x1C(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x98 (Inherited: 0x10)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	int32_t DefaultValue; // 0x20(0x4)
	uint8_t bHasDefaultValue : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TArray<int32_t> Values; // 0x28(0x10)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneKeyStruct
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28 (Inherited: 0x8)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{
	struct FFrameNumber Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50 (Inherited: 0x0)
struct FGeneratedMovieSceneKeyStruct
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneMaterialChannel
// Size: 0x98 (Inherited: 0x10)
struct FMovieSceneMaterialChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	uint8_t DefaultValue : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bHasDefaultValue : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct TArray<struct UMaterialInterface*> Values; // 0x28(0x10)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneObjectPathChannelKeyValue
{
	struct TSoftObjectPtr<UObject> SoftPtr; // 0x0(0x28)
	struct UObject* HardPtr; // 0x28(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xD0 (Inherited: 0x10)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	struct UObject* PropertyClass; // 0x10(0x8)
	struct TArray<struct FFrameNumber> Times; // 0x18(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x28(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x38(0x30)
	uint8_t Pad_0x68[0x60]; // 0x68(0x60)
	uint8_t bForceSoftPtr : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48 (Inherited: 0x0)
struct FMovieScenePossessable
{
	struct TArray<struct FName> Tags; // 0x0(0x10)
	struct FGuid Guid; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct UObject* PossessedObjectClass; // 0x30(0x8)
	struct FGuid ParentGuid; // 0x38(0x10)
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x28 (Inherited: 0x0)
struct FMovieScenePropertySectionData
{
	struct FName PropertyName; // 0x0(0x8)
	struct FString PropertyPath; // 0x8(0x10)
	struct FName FunctionName; // 0x18(0x8)
	struct FName NotifyFunctionName; // 0x20(0x8)
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x28)
};

// Object: ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x48 (Inherited: 0x0)
struct FMovieSceneEasingSettings
{
	int32_t AutoEaseInDuration; // 0x0(0x4)
	int32_t AutoEaseOutDuration; // 0x4(0x4)
	uint8_t MovieSceneBuiltInEaseInTypeProxy; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x10(0x10)
	uint8_t bManualEaseIn : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t ManualEaseInDuration; // 0x24(0x4)
	uint8_t MovieSceneBuiltInEaseOutTypeProxy; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x30(0x10)
	uint8_t bManualEaseOut : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	int32_t ManualEaseOutDuration; // 0x44(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x2 (Inherited: 0x0)
struct FMovieSceneSectionEvalOptions
{
	uint8_t bCanEditCompletionMode : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EMovieSceneCompletionMode CompletionMode; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset; // 0x0(0x4)
	float TimeScale; // 0x4(0x4)
	int32_t HierarchicalBias; // 0x8(0x4)
	float StartOffset; // 0xC(0x4)
	float PrerollTime; // 0x10(0x4)
	float PostrollTime; // 0x14(0x4)
};

// Object: ScriptStruct MovieScene.SectionEvaluationData
// Size: 0xC (Inherited: 0x0)
struct FSectionEvaluationData
{
	int32_t ImplIndex; // 0x0(0x4)
	struct FFrameNumber ForcedTime; // 0x4(0x4)
	ESectionEvaluationFlags Flags; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime LastKnownPosition; // 0x0(0x8)
	EMovieScenePlayerStatus LastKnownStatus; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t LastKnownNumLoops; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x0)
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform; // 0x0(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	uint8_t bContinuouslyRespawn : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FGuid Guid; // 0x44(0x10)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString Name; // 0x58(0x10)
	struct UObject* ObjectTemplate; // 0x68(0x8)
	struct TArray<struct FGuid> ChildPossessables; // 0x70(0x10)
	ESpawnOwnership Ownership; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FName LevelName; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x18)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackDisplayOptions
{
	uint8_t bShowVerticalFrames : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackEvalOptions
{
	uint8_t bCanEvaluateNearestSection : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEvalNearestSection : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bEvaluateInPreroll : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bEvaluateInPostroll : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bEvaluateNearestSection : 1; // 0x0(0x1), Mask(0x10)
	uint8_t BitPad_0x0_5 : 3; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{
};

// Object: Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject
{
	struct FGuid Signature; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSignedObject, "MovieSceneSignedObject")

};

// Object: Class MovieScene.MovieSceneSection
// Size: 0xE8 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject
{
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x2)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x48)
	struct FMovieSceneFrameRange SectionRange; // 0xA0(0x10)
	struct FFrameNumber PreRollFrames; // 0xB0(0x4)
	struct FFrameNumber PostRollFrames; // 0xB4(0x4)
	int32_t RowIndex; // 0xB8(0x4)
	int32_t OverlapPriority; // 0xBC(0x4)
	uint8_t bIsActive : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t bIsLocked : 1; // 0xC0(0x1), Mask(0x2)
	uint8_t BitPad_0xC0_2 : 6; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x3]; // 0xC1(0x3)
	float StartTime; // 0xC4(0x4)
	float EndTime; // 0xC8(0x4)
	float PrerollTime; // 0xCC(0x4)
	float PostrollTime; // 0xD0(0x4)
	uint8_t bIsInfinite : 1; // 0xD4(0x1), Mask(0x1)
	uint8_t BitPad_0xD4_1 : 7; // 0xD4(0x1)
	uint8_t bSupportsInfiniteRange : 1; // 0xD5(0x1), Mask(0x1)
	uint8_t BitPad_0xD5_1 : 7; // 0xD5(0x1)
	struct FOptionalMovieSceneBlendType BlendType; // 0xD6(0x2)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)


	// Object: Function MovieScene.MovieSceneSection.SetRowIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16471890
	// Params: [ Num(1) Size(0x4) ]
	void SetRowIndex(int32_t NewRowIndex);

	// Object: Function MovieScene.MovieSceneSection.SetPreRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164717e0
	// Params: [ Num(1) Size(0x4) ]
	void SetPreRollFrames(int32_t InPreRollFrames);

	// Object: Function MovieScene.MovieSceneSection.SetPostRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16471730
	// Params: [ Num(1) Size(0x4) ]
	void SetPostRollFrames(int32_t InPostRollFrames);

	// Object: Function MovieScene.MovieSceneSection.SetOverlapPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16471690
	// Params: [ Num(1) Size(0x4) ]
	void SetOverlapPriority(int32_t NewPriority);

	// Object: Function MovieScene.MovieSceneSection.SetIsLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164715dc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsLocked(uint8_t bInIsLocked);

	// Object: Function MovieScene.MovieSceneSection.SetIsActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16471528
	// Params: [ Num(1) Size(0x1) ]
	void SetIsActive(uint8_t bInIsActive);

	// Object: Function MovieScene.MovieSceneSection.SetCompletionMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16471488
	// Params: [ Num(1) Size(0x1) ]
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);

	// Object: Function MovieScene.MovieSceneSection.SetBlendType
	// Flags: [RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x164713dc
	// Params: [ Num(1) Size(0x1) ]
	void SetBlendType(EMovieSceneBlendType InBlendType);

	// Object: Function MovieScene.MovieSceneSection.IsLocked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x164713bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocked();

	// Object: Function MovieScene.MovieSceneSection.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1647139c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsActive();

	// Object: Function MovieScene.MovieSceneSection.GetRowIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16471380
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRowIndex();

	// Object: Function MovieScene.MovieSceneSection.GetPreRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16471364
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPreRollFrames();

	// Object: Function MovieScene.MovieSceneSection.GetPostRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16471348
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPostRollFrames();

	// Object: Function MovieScene.MovieSceneSection.GetOverlapPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1647132c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOverlapPriority();

	// Object: Function MovieScene.MovieSceneSection.GetCompletionMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16471310
	// Params: [ Num(1) Size(0x1) ]
	EMovieSceneCompletionMode GetCompletionMode();

	// Object: Function MovieScene.MovieSceneSection.GetBlendType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x164712f4
	// Params: [ Num(1) Size(0x2) ]
	struct FOptionalMovieSceneBlendType GetBlendType();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSection, "MovieSceneSection")

};

// Object: Class MovieScene.MovieSceneTrack
// Size: 0x58 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject
{
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x4)
	uint8_t Pad_0x54[0x1]; // 0x54(0x1)
	uint8_t bIsEvalDisabled : 1; // 0x55(0x1), Mask(0x1)
	uint8_t BitPad_0x55_1 : 7; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTrack, "MovieSceneTrack")

};

// Object: Class MovieScene.MovieSceneNameableTrack
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneNameableTrack : UMovieSceneTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneNameableTrack, "MovieSceneNameableTrack")

};

// Object: Class MovieScene.MovieSceneSubTrack
// Size: 0x80 (Inherited: 0x58)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	uint8_t bActiveInEditorOnly : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString CustomGroupName; // 0x70(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSubTrack, "MovieSceneSubTrack")

};

// Object: Class MovieScene.MovieSceneSequence
// Size: 0x3C0 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject
{
	uint8_t Pad_0x50[0x20]; // 0x50(0x20)
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x70(0x2F0)
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x360(0x1)
	uint8_t bParentContextsAreSignificant : 1; // 0x361(0x1), Mask(0x1)
	uint8_t BitPad_0x361_1 : 7; // 0x361(0x1)
	uint8_t bPlayableDirectly : 1; // 0x362(0x1), Mask(0x1)
	uint8_t BitPad_0x362_1 : 7; // 0x362(0x1)
	uint8_t Pad_0x363[0x5D]; // 0x363(0x5D)


	// Object: Function MovieScene.MovieSceneSequence.UnbindPossessableObjects
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x164722c8
	// Params: [ Num(1) Size(0x10) ]
	void UnbindPossessableObjects(const struct FGuid& ObjectId);

	// Object: Function MovieScene.MovieSceneSequence.UnbindObjects
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x16472174
	// Params: [ Num(3) Size(0x28) ]
	void UnbindObjects(const struct FGuid& ObjectId, const struct TArray<struct UObject*>& InObjects, struct UObject* Context);

	// Object: Function MovieScene.MovieSceneSequence.UnbindInvalidObjects
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x1647207c
	// Params: [ Num(2) Size(0x18) ]
	void UnbindInvalidObjects(const struct FGuid& ObjectId, struct UObject* Context);

	// Object: Function MovieScene.MovieSceneSequence.GetParentObject
	// Flags: [Native|Public|Const]
	// Offset: 0x16471fc8
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetParentObject(struct UObject* Object);

	// Object: Function MovieScene.MovieSceneSequence.GetMovieScene
	// Flags: [Native|Public|Const]
	// Offset: 0x16471f8c
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieScene* GetMovieScene();

	// Object: Function MovieScene.MovieSceneSequence.FindBindingsByTag
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16471e9c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName);

	// Object: Function MovieScene.MovieSceneSequence.FindBindingByTag
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16471dd8
	// Params: [ Num(2) Size(0x20) ]
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName);

	// Object: Function MovieScene.MovieSceneSequence.CreateSpawnable
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x16471d24
	// Params: [ Num(2) Size(0x18) ]
	struct FGuid CreateSpawnable(struct UObject* ObjectToSpawn);

	// Object: Function MovieScene.MovieSceneSequence.CreatePossessable
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x16471c70
	// Params: [ Num(2) Size(0x18) ]
	struct FGuid CreatePossessable(struct UObject* ObjectToPossess);

	// Object: Function MovieScene.MovieSceneSequence.CanRebindPossessable
	// Flags: [Native|Public|HasOutParms|Const]
	// Offset: 0x16471b84
	// Params: [ Num(2) Size(0x49) ]
	uint8_t CanRebindPossessable(const struct FMovieScenePossessable& InPossessable);

	// Object: Function MovieScene.MovieSceneSequence.AllowsSpawnableObjects
	// Flags: [Native|Public|Const]
	// Offset: 0x16471b44
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AllowsSpawnableObjects();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSequence, "MovieSceneSequence")

};

// Object: Class MovieScene.MovieSceneSequencePlayer
// Size: 0xA38 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject
{
	uint8_t Pad_0x28[0x4B8]; // 0x28(0x4B8)
	struct FMulticastInlineDelegate OnPlay; // 0x4E0(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x4F0(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x500(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x510(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x520(0x10)
	EMovieScenePlayerStatus Status; // 0x530(0x1)
	uint8_t bReversePlayback : 1; // 0x531(0x1), Mask(0x1)
	uint8_t BitPad_0x531_1 : 7; // 0x531(0x1)
	uint8_t Pad_0x532[0x6]; // 0x532(0x6)
	struct UMovieSceneSequence* Sequence; // 0x538(0x8)
	struct FFrameNumber StartTime; // 0x540(0x4)
	int32_t DurationFrames; // 0x544(0x4)
	int32_t CurrentNumLoops; // 0x548(0x4)
	uint8_t Pad_0x54C[0x14]; // 0x54C(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x560(0x14)
	uint8_t Pad_0x574[0x4]; // 0x574(0x4)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x578(0x3F8)
	uint8_t Pad_0x970[0x68]; // 0x970(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x9D8(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x9E8(0x10)
	uint8_t Pad_0x9F8[0x40]; // 0x9F8(0x40)


	// Object: Function MovieScene.MovieSceneSequencePlayer.UpdateTimeCursorPosition
	// Flags: [Final|Native|Protected]
	// Offset: 0x1647849c
	// Params: [ Num(2) Size(0x9) ]
	void UpdateTimeCursorPosition(struct FFrameTime NewPosition, EUpdatePositionMethod Method);

	// Object: Function MovieScene.MovieSceneSequencePlayer.UpdateMovieSceneInstanceOuter
	// Flags: [Native|Public]
	// Offset: 0x16478480
	// Params: [ Num(0) Size(0x0) ]
	void UpdateMovieSceneInstanceOuter();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Update
	// Flags: [Final|Native|Public]
	// Offset: 0x164783dc
	// Params: [ Num(1) Size(0x4) ]
	void Update(float DeltaSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.StopInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0x16478338
	// Params: [ Num(1) Size(0x8) ]
	void StopInternal(struct FFrameTime TimeToResetTo);

	// Object: Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16478324
	// Params: [ Num(0) Size(0x0) ]
	void StopAtCurrentTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16478310
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function MovieScene.MovieSceneSequencePlayer.ShouldStopOrLoop
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x16478260
	// Params: [ Num(2) Size(0x9) ]
	uint8_t ShouldStopOrLoop(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16478184
	// Params: [ Num(2) Size(0x8) ]
	void SetTimeRange(float StartTime, float Duration);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164780e0
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayRate(float PlayRate);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlayPosition
	// Flags: [Native|Public]
	// Offset: 0x16478034
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayPosition(uint32_t InFrameTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477f58
	// Params: [ Num(2) Size(0x8) ]
	void SetPlaybackRange(float NewStartTime, float NewEndTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477eb4
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackPosition(float NewPlaybackPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackClient
	// Flags: [Final|Native|Public]
	// Offset: 0x16477e00
	// Params: [ Num(1) Size(0x10) ]
	void SetPlaybackClient(struct TScriptInterface<IMovieScenePlaybackClient> InPlaybackClient);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477d54
	// Params: [ Num(1) Size(0x8) ]
	void SetFrameRate(struct FFrameRate FrameRate);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477c78
	// Params: [ Num(2) Size(0x8) ]
	void SetFrameRange(int32_t StartFrame, int32_t Duration);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477bc4
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableCameraCuts(uint8_t bInDisableCameraCuts);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477b20
	// Params: [ Num(1) Size(0x4) ]
	void ScrubToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477a68
	// Params: [ Num(2) Size(0x11) ]
	uint8_t ScrubToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164779c4
	// Params: [ Num(1) Size(0x8) ]
	void ScrubToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.Scrub
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164779b0
	// Params: [ Num(0) Size(0x0) ]
	void Scrub();

	// Object: Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xfb9632c
	// Params: [ Num(1) Size(0x8) ]
	void RPC_OnStopEvent(struct FFrameTime StoppedTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xfe1bb34
	// Params: [ Num(2) Size(0xC) ]
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, struct FFrameTime RelevantTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1647790c
	// Params: [ Num(1) Size(0x4) ]
	void PlayToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477854
	// Params: [ Num(2) Size(0x11) ]
	uint8_t PlayToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164777b0
	// Params: [ Num(1) Size(0x8) ]
	void PlayToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1647779c
	// Params: [ Num(0) Size(0x0) ]
	void PlayReverse();

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164776f8
	// Params: [ Num(1) Size(0x4) ]
	void PlayLooping(int32_t NumLoops);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0x164776e4
	// Params: [ Num(0) Size(0x0) ]
	void PlayInternal();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164776d0
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164776bc
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477618
	// Params: [ Num(1) Size(0x4) ]
	void JumpToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477574
	// Params: [ Num(1) Size(0x4) ]
	void JumpToPosition(float NewPlaybackPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164774bc
	// Params: [ Num(2) Size(0x11) ]
	uint8_t JumpToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477418
	// Params: [ Num(1) Size(0x8) ]
	void JumpToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x164773e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReversed();

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x164773a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16477370
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Initialize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1647726c
	// Params: [ Num(2) Size(0x1C) ]
	void Initialize(struct UMovieSceneSequence* InSequence, const struct FMovieSceneSequencePlaybackSettings& InSettings);

	// Object: Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16477258
	// Params: [ Num(0) Size(0x0) ]
	void GoToEndAndStop();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16477238
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetStartTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetSequence
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1647721c
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneSequence* GetSequence();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x164771e8
	// Params: [ Num(1) Size(0x4) ]
	float GetPlayRate();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackWorld
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x164771b4
	// Params: [ Num(1) Size(0x8) ]
	struct UWorld* GetPlaybackWorld();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16477164
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackStart();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16477130
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackPosition();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x164770d8
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackEnd();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16476ff8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject);

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetMovieScene
	// Flags: [Native|Public]
	// Offset: 0x16476fbc
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieScene* GetMovieScene();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16476f88
	// Params: [ Num(1) Size(0x4) ]
	float GetLength();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetLastValidTime
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x16476f54
	// Params: [ Num(1) Size(0x8) ]
	struct FFrameTime GetLastValidTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16476f38
	// Params: [ Num(1) Size(0x8) ]
	struct FFrameRate GetFrameRate();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16476f04
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFrameDuration();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16476edc
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetEndTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16476ea8
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetDuration();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16476e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetDisableCameraCuts();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16476e54
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetCurrentTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16476d50
	// Params: [ Num(2) Size(0x28) ]
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding);

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetAllBoundObjects
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x16476c94
	// Params: [ Num(1) Size(0x10) ]
	void GetAllBoundObjects(struct TArray<struct UObject*>& OutObjects);

	// Object: Function MovieScene.MovieSceneSequencePlayer.FindMarkedFrameByLabel
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x16476be0
	// Params: [ Num(2) Size(0x14) ]
	int32_t FindMarkedFrameByLabel(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16476bcc
	// Params: [ Num(0) Size(0x0) ]
	void ChangePlaybackDirection();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSequencePlayer, "MovieSceneSequencePlayer")

};

// Object: Class MovieScene.MovieScenePrespawnObjectState
// Size: 0x30 (Inherited: 0x28)
struct UMovieScenePrespawnObjectState : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	DEFINE_UE_CLASS_HELPERS(UMovieScenePrespawnObjectState, "MovieScenePrespawnObjectState")

};

// Object: Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct IMovieScenePlaybackClient : IInterface
{	DEFINE_UE_CLASS_HELPERS(IMovieScenePlaybackClient, "MovieScenePlaybackClient")

};

// Object: Class MovieScene.MovieScene
// Size: 0x138 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject
{
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xD0(0x10)
	struct UMovieSceneSubTrack* RuntimeSubTrack; // 0xE0(0x8)
	struct UMovieSceneTrack* CameraCutTrack; // 0xE8(0x8)
	struct FMovieSceneFrameRange SelectionRange; // 0xF0(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x100(0x10)
	struct FFrameRate TickResolution; // 0x110(0x8)
	struct FFrameRate DisplayRate; // 0x118(0x8)
	EMovieSceneEvaluationType EvaluationType; // 0x120(0x1)
	EUpdateClockSource ClockSource; // 0x121(0x1)
	uint8_t Pad_0x122[0x6]; // 0x122(0x6)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x128(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieScene, "MovieScene")

};

// Object: Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject
{
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	uint8_t Pad_0x38[0x58]; // 0x38(0x58)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBindingOverrides, "MovieSceneBindingOverrides")

};

// Object: Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneBindingOwnerInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IMovieSceneBindingOwnerInterface, "MovieSceneBindingOwnerInterface")

};

// Object: Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	EMovieSceneBuiltInEasing Type; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBuiltInEasingFunction, "MovieSceneBuiltInEasingFunction")

};

// Object: Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UCurveFloat* Curve; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEasingExternalCurve, "MovieSceneEasingExternalCurve")

};

// Object: Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneEasingFunction : IInterface
{

	// Object: Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	float OnEvaluate(float Interp);
	DEFINE_UE_CLASS_HELPERS(IMovieSceneEasingFunction, "MovieSceneEasingFunction")

};

// Object: Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject
{
	struct FName FolderName; // 0x28(0x8)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFolder, "MovieSceneFolder")

};

// Object: Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneKeyProxy : IInterface
{	DEFINE_UE_CLASS_HELPERS(IMovieSceneKeyProxy, "MovieSceneKeyProxy")

};

// Object: Class MovieScene.MovieSceneSubSection
// Size: 0x158 (Inherited: 0xE8)
struct UMovieSceneSubSection : UMovieSceneSection
{
	struct FMovieSceneSectionParameters Parameters; // 0xE8(0x18)
	float StartOffset; // 0x100(0x4)
	float TimeScale; // 0x104(0x4)
	float PrerollTime; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct UMovieSceneSequence* SubSequence; // 0x110(0x8)
	struct TLazyObjectPtr<struct AActor> ActorToRecord; // 0x118(0x1C)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct FString TargetSequenceName; // 0x138(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x148(0x10)


	// Object: Function MovieScene.MovieSceneSubSection.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16478764
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct UMovieSceneSequence* Sequence);

	// Object: Function MovieScene.MovieSceneSubSection.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16478730
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneSequence* GetSequence();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSubSection, "MovieSceneSubSection")

};

// Object: Class MovieScene.TestMovieSceneTrack
// Size: 0x68 (Inherited: 0x58)
struct UTestMovieSceneTrack : UMovieSceneTrack
{
	uint8_t bHighPassFilter : 1; // 0x56(0x1), Mask(0x1)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneTrack, "TestMovieSceneTrack")

};

// Object: Class MovieScene.TestMovieSceneSection
// Size: 0xE8 (Inherited: 0xE8)
struct UTestMovieSceneSection : UMovieSceneSection
{	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneSection, "TestMovieSceneSection")

};

// Object: Class MovieScene.TestMovieSceneSequence
// Size: 0x3C8 (Inherited: 0x3C0)
struct UTestMovieSceneSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x3C0(0x8)
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneSequence, "TestMovieSceneSequence")

};

} // namespace SDK
