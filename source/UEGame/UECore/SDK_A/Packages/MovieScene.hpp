#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MovieScene
// Enums: 14
// Structs: 97
// Classes: 51

struct AActor;
struct UCurveFloat;
struct FMovieSceneEvalTemplateBase;
struct FMovieSceneEvalTemplate;
struct FMovieSceneSequenceInstanceData;
struct FMovieSceneSequenceID;
struct FMovieSceneEvaluationOperand;
struct FMovieSceneChannel;
struct FMovieSceneKeyHandleMap;
struct FMovieSceneFloatChannel;
struct FMovieSceneTangentData;
struct FMovieSceneFloatValue;
struct FMovieSceneIntegerChannel;
struct FMovieSceneByteChannel;
struct FMovieSceneBoolChannel;
struct FMovieSceneTrackImplementation;
struct FTrackInstanceInputComponent;
struct FMovieSceneTrackInstanceComponent;
struct FEasingComponentData;
struct FMovieScenePropertyBinding;
struct FMovieSceneSectionGroup;
struct FMovieSceneObjectBindingIDs;
struct FMovieSceneObjectBindingID;
struct FMovieSceneTrackLabels;
struct FMovieSceneExpansionState;
struct FMovieSceneEditorData;
struct FMovieSceneMarkedFrame;
struct FMovieSceneTimecodeSource;
struct FMovieSceneBinding;
struct FMovieSceneBindingOverrideData;
struct FOptionalMovieSceneBlendType;
struct FMovieSceneSequenceCompilerMaskStruct;
struct FMovieSceneEntitySystemGraphNodes;
struct FMovieSceneEntitySystemGraph;
struct FMovieSceneEntitySystemGraphNode;
struct FMovieSceneEvalTemplatePtr;
struct FMovieSceneEmptyStruct;
struct FMovieSceneEvaluationField;
struct FMovieSceneEvaluationMetaData;
struct FMovieSceneTrackIdentifier;
struct FMovieSceneEvaluationKey;
struct FMovieSceneOrderedEvaluationKey;
struct FMovieSceneEvaluationGroup;
struct FMovieSceneFieldEntry_ChildTemplate;
struct FMovieSceneEvaluationFieldTrackPtr;
struct FMovieSceneFieldEntry_EvaluationTrack;
struct FMovieSceneEvaluationGroupLUTIndex;
struct FMovieSceneFrameRange;
struct FMovieSceneSegmentIdentifier;
struct FMovieSceneEvaluationFieldSegmentPtr;
struct FMovieSceneEvaluationFieldEntityTree;
struct FMovieSceneEntityComponentField;
struct FMovieSceneEvaluationFieldSharedEntityMetaData;
struct FMovieSceneEvaluationFieldEntityMetaData;
struct FMovieSceneEvaluationFieldEntityKey;
struct FMovieSceneEvaluationFieldEntity;
struct FMovieSceneEvaluationTemplateSerialNumber;
struct FMovieSceneTrackImplementationPtr;
struct FMovieSceneEvaluationTrack;
struct FMovieSceneTemplateGenerationLedger;
struct FMovieSceneEvaluationTemplate;
struct FMovieSceneSubSectionData;
struct FMovieSceneRootEvaluationTemplateInstance;
struct FMovieSceneKeyStruct;
struct FMovieSceneKeyTimeStruct;
struct FGeneratedMovieSceneKeyStruct;
struct FMovieSceneObjectPathChannelKeyValue;
struct FMovieSceneObjectPathChannel;
struct FMovieScenePossessable;
struct FMovieScenePropertySectionData;
struct FMovieScenePropertySectionTemplate;
struct FMovieSceneEasingSettings;
struct FMovieSceneSectionEvalOptions;
struct FMovieSceneSectionParameters;
struct FMovieSceneSegment;
struct FSectionEvaluationData;
struct FMovieSceneSequenceHierarchyNode;
struct FMovieSceneSequenceInstanceDataPtr;
struct FMovieSceneTimeTransform;
struct FMovieSceneSequenceTransform;
struct FMovieSceneSubSequenceData;
struct FMovieSceneSubSequenceTree;
struct FMovieSceneSequenceHierarchy;
struct FMovieSceneTimeWarping;
struct FMovieSceneNestedSequenceTransform;
struct FMovieSceneSubSequenceTreeEntry;
struct FMovieSceneSequencePlaybackParams;
struct FMovieSceneSequenceLoopCount;
struct FMovieSceneSequencePlaybackSettings;
struct FMovieSceneSequenceReplProperties;
struct FMovieSceneWarpCounter;
struct FMovieSceneSpawnable;
struct FTestMovieSceneEvalTemplate;
struct FMovieSceneTrackDisplayOptions;
struct FMovieSceneTrackEvalOptions;
struct FMovieSceneTrackEvaluationField;
struct FMovieSceneTrackEvaluationFieldEntry;
struct FMovieSceneTrackInstanceInput;
struct FMovieSceneTrackInstanceEntry;
struct UMovieSceneSignedObject;
struct UMovieSceneSection;
struct UMovieSceneTrack;
struct UMovieSceneSequence;
struct UMovieSceneNameableTrack;
struct IMovieSceneCustomClockSource;
struct IMovieSceneEntityProvider;
struct IMovieScenePlaybackClient;
struct IMovieSceneTrackTemplateProducer;
struct INodeAndChannelMappings;
struct UMovieSceneNodeGroup;
struct UMovieSceneNodeGroupCollection;
struct UMovieScene;
struct UMovieSceneBindingOverrides;
struct IMovieSceneBindingOwnerInterface;
struct UMovieSceneEntitySystem;
struct UMovieSceneBlenderSystem;
struct UMovieSceneBoolSection;
struct UMovieSceneEntityInstantiatorSystem;
struct UMovieSceneGenericBoundObjectInstantiator;
struct UMovieSceneBoundSceneComponentInstantiator;
struct IMovieSceneSceneComponentImpersonator;
struct UMovieSceneCompiledData;
struct UMovieSceneCompiledDataManager;
struct IMovieSceneFloatDecomposer;
struct UMovieSceneBuiltInEasingFunction;
struct UMovieSceneEasingExternalCurve;
struct IMovieSceneEasingFunction;
struct UMovieSceneEntitySystemLinker;
struct UMovieSceneEvalTimeSystem;
struct UMovieSceneFolder;
struct IMovieSceneKeyProxy;
struct UMovieSceneMasterInstantiatorSystem;
struct IMovieScenePreAnimatedStateSystemInterface;
struct UMovieSceneCachePreAnimatedStateSystem;
struct UMovieSceneRestorePreAnimatedStateSystem;
struct UMovieSceneSequencePlayer;
struct UMovieSceneSequenceTickManager;
struct UMovieSceneSpawnablesSystem;
struct UMovieSceneSpawnSection;
struct UMovieSceneSpawnTrack;
struct UMovieSceneSubSection;
struct UMovieSceneSubTrack;
struct UTestMovieSceneTrack;
struct UTestMovieSceneSection;
struct UTestMovieSceneSequence;
struct UTestMovieSceneSubTrack;
struct UTestMovieSceneSubSection;
struct UMovieSceneTrackInstance;
struct UMovieSceneTrackInstanceInstantiator;
struct UMovieSceneTrackInstanceSystem;

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
	AdditiveFromBase = 8,
	EMovieSceneBlendType_MAX = 9
};

// Object: Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
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

// Object: Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 3,
	EMovieSceneSequenceFlags_MAX = 4
};

// Object: Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6
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

// Object: Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Object: Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Object: Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3
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

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceID
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneEvaluationOperand
{
	struct FGuid ObjectBindingID; // 0x0(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneChannel
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{
};

// Object: ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xA0 (Inherited: 0x8)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{
	uint8_t PreInfinityExtrap; // 0x8(0x1)
	uint8_t PostInfinityExtrap; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct FFrameNumber> times; // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x4)
	bool bHasDefaultValue; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	struct FFrameRate TickResolution; // 0x98(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentData
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	float ArriveTangentWeight; // 0x8(0x4)
	float LeaveTangentWeight; // 0xC(0x4)
	uint8_t TangentWeightMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneFloatValue
{
	float Value; // 0x0(0x4)
	struct FMovieSceneTangentData Tangent; // 0x4(0x14)
	uint8_t InterpMode; // 0x18(0x1)
	uint8_t TangentMode; // 0x19(0x1)
	uint8_t PaddingByte; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x90 (Inherited: 0x8)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> times; // 0x8(0x10)
	int32_t DefaultValue; // 0x18(0x4)
	bool bHasDefaultValue; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct TArray<int32_t> Values; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x98 (Inherited: 0x8)
struct FMovieSceneByteChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> times; // 0x8(0x10)
	uint8_t DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<uint8_t> Values; // 0x20(0x10)
	struct UEnum* Enum; // 0x30(0x8)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x90 (Inherited: 0x8)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> times; // 0x8(0x10)
	bool DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<bool> Values; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{
};

// Object: ScriptStruct MovieScene.TrackInstanceInputComponent
// Size: 0x10 (Inherited: 0x0)
struct FTrackInstanceInputComponent
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
	int32_t OutputIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackInstanceComponent
{
	struct UMovieSceneSection* Owner; // 0x0(0x8)
	struct UMovieSceneTrackInstance* TrackInstanceClass; // 0x8(0x8)
};

// Object: ScriptStruct MovieScene.EasingComponentData
// Size: 0x8 (Inherited: 0x0)
struct FEasingComponentData
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieScenePropertyBinding
// Size: 0x14 (Inherited: 0x0)
struct FMovieScenePropertyBinding
{
	struct FName PropertyName; // 0x0(0x8)
	struct FName PropertyPath; // 0x8(0x8)
	bool bCanUseClassLookup; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
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

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneObjectBindingID
{
	int32_t SequenceID; // 0x0(0x4)
	EMovieSceneObjectBindingSpace Space; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FGuid Guid; // 0x8(0x10)
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
	bool bExpanded; // 0x0(0x1)
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
	struct FString label; // 0x8(0x10)
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
	struct FMovieSceneObjectBindingID ObjectBindingID; // 0x0(0x18)
	struct TWeakObjectPtr<struct UObject> Object; // 0x18(0x8)
	bool bOverridesDefault; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x2 (Inherited: 0x0)
struct FOptionalMovieSceneBlendType
{
	EMovieSceneBlendType BlendType; // 0x0(0x1)
	bool bIsValid; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneSequenceCompilerMaskStruct
{
	uint8_t bHierarchy : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEvaluationTemplate : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bEvaluationTemplateField : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bEntityComponentField : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneEntitySystemGraphNodes
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MovieScene.MovieSceneEntitySystemGraph
// Size: 0x138 (Inherited: 0x0)
struct FMovieSceneEntitySystemGraph
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
	struct FMovieSceneEntitySystemGraphNodes Nodes; // 0x80(0x38)
	uint8_t Pad_0xB8[0x80]; // 0xB8(0x80)
};

// Object: ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEntitySystemGraphNode
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct UMovieSceneEntitySystem* System; // 0x20(0x8)
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

// Object: ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneEvaluationMetaData
{
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
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
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0(0x10)
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10(0x10)
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneFieldEntry_ChildTemplate
{
	uint16_t ChildIndex; // 0x0(0x2)
	ESectionEvaluationFlags Flags; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FFrameNumber ForcedTime; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneFieldEntry_EvaluationTrack
{
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0(0x8)
	uint16_t NumChildren; // 0x8(0x2)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneEvaluationGroupLUTIndex
{
	int32_t NumInitPtrs; // 0x0(0x4)
	int32_t NumEvalPtrs; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneFrameRange
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
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

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntityTree
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneEntityComponentField
// Size: 0xF0 (Inherited: 0x0)
struct FMovieSceneEntityComponentField
{
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0(0x60)
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60(0x60)
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities; // 0xC0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xD0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xE0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
	struct FGuid ObjectBindingID; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntityMetaData
{
	struct FFrameNumber ForcedTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	ESectionEvaluationFlags Flags; // 0x8(0x1)
	uint8_t bEvaluateInSequencePreRoll : 1; // 0x9(0x1), Mask(0x1)
	uint8_t bEvaluateInSequencePostRoll : 1; // 0x9(0x1), Mask(0x2)
	uint8_t BitPad_0x9_2 : 6; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntityKey
{
	struct TWeakObjectPtr<struct UObject> EntityOwner; // 0x0(0x8)
	uint32_t EntityID; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntity
{
	struct FMovieSceneEvaluationFieldEntityKey Key; // 0x0(0xC)
	int32_t SharedMetaDataIndex; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneTrackImplementationPtr
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0x78 (Inherited: 0x0)
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingID; // 0x0(0x10)
	uint16_t EvaluationPriority; // 0x10(0x2)
	EEvaluationMethod EvaluationMethod; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	struct TWeakObjectPtr<struct UMovieSceneTrack> SourceTrack; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30(0x38)
	struct FName EvaluationGroup; // 0x68(0x8)
	uint8_t bEvaluateInPreroll : 1; // 0x70(0x1), Mask(0x1)
	uint8_t bEvaluateInPostroll : 1; // 0x70(0x1), Mask(0x2)
	uint8_t bTearDownPriority : 1; // 0x70(0x1), Mask(0x4)
	uint8_t BitPad_0x70_3 : 5; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
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

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x160 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0(0x50)
	uint8_t Pad_0x50[0x50]; // 0x50(0x50)
	struct FGuid SequenceSignature; // 0xA0(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xB8(0xA8)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0(0x8)
	struct FGuid ObjectBindingID; // 0x8(0x10)
	ESectionEvaluationFlags Flags; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0xE8 (Inherited: 0x0)
struct FMovieSceneRootEvaluationTemplateInstance
{
	struct TWeakObjectPtr<struct UMovieSceneSequence> WeakRootSequence; // 0x0(0x8)
	struct UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18(0x8)
	uint8_t Pad_0x20[0x70]; // 0x20(0x70)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x90(0x50)
	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
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

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneObjectPathChannelKeyValue
{
	struct TSoftObjectPtr<UObject> SoftPtr; // 0x0(0x28)
	struct UObject* HardPtr; // 0x28(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xC0 (Inherited: 0x8)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	struct UObject* PropertyClass; // 0x8(0x8)
	struct TArray<struct FFrameNumber> times; // 0x10(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30(0x30)
	uint8_t Pad_0x60[0x60]; // 0x60(0x60)
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
// Size: 0x18 (Inherited: 0x0)
struct FMovieScenePropertySectionData
{
	struct FName PropertyName; // 0x0(0x8)
	struct FString PropertyPath; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x30 (Inherited: 0x18)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x18)
};

// Object: ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneEasingSettings
{
	int32_t AutoEaseInDuration; // 0x0(0x4)
	int32_t AutoEaseOutDuration; // 0x4(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8(0x10)
	bool bManualEaseIn; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t ManualEaseInDuration; // 0x1C(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20(0x10)
	bool bManualEaseOut; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t ManualEaseOutDuration; // 0x34(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x2 (Inherited: 0x0)
struct FMovieSceneSectionEvalOptions
{
	bool bCanEditCompletionMode; // 0x0(0x1)
	EMovieSceneCompletionMode CompletionMode; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset; // 0x0(0x4)
	bool bCanLoop; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FFrameNumber EndFrameOffset; // 0x8(0x4)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0xC(0x4)
	float TimeScale; // 0x10(0x4)
	int32_t HierarchicalBias; // 0x14(0x4)
	float StartOffset; // 0x18(0x4)
	float PrerollTime; // 0x1C(0x4)
	float PostrollTime; // 0x20(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x0)
struct FMovieSceneSegment
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
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

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID ParentID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceDataPtr
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct MovieScene.MovieSceneTimeTransform
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneTimeTransform
{
	float TimeScale; // 0x0(0x4)
	struct FFrameTime Offset; // 0x4(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xE8 (Inherited: 0x0)
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0x20)
	struct FFrameRate TickResolution; // 0x38(0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x40(0x4)
	struct FMovieSceneFrameRange PlayRange; // 0x44(0x10)
	struct FMovieSceneFrameRange FullPlayRange; // 0x54(0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x64(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x74(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x84(0x10)
	int16_t HierarchicalBias; // 0x94(0x2)
	bool bHasHierarchicalEasing; // 0x96(0x1)
	uint8_t Pad_0x97[0x1]; // 0x97(0x1)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98(0x18)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)
	struct FGuid SubSectionSignature; // 0xB8(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xC8(0x20)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceTree
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneSubSequenceTree
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0x118 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchy
{
	struct FMovieSceneSequenceHierarchyNode RootNode; // 0x0(0x18)
	struct FMovieSceneSubSequenceTree Tree; // 0x18(0x60)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x78(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xC8(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneTimeWarping
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneTimeWarping
{
	struct FFrameNumber Start; // 0x0(0x4)
	struct FFrameNumber End; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	struct FMovieSceneTimeWarping Warping; // 0xC(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneSubSequenceTreeEntry
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneSequencePlaybackParams
{
	struct FFrameTime Frame; // 0x0(0x8)
	float Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString MarkedFrame; // 0x10(0x10)
	EMovieScenePositionType PositionType; // 0x20(0x1)
	EUpdatePositionMethod UpdateMethod; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
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
	float startTime; // 0xC(0x4)
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

// Object: ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime LastKnownPosition; // 0x0(0x8)
	uint8_t LastKnownStatus; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t LastKnownNumLoops; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneWarpCounter
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneWarpCounter
{
	struct TArray<uint32_t> WarpCounts; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x0)
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform; // 0x0(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x1)
	bool bEvaluateTracksWhenNotSpawned; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
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

// Object: ScriptStruct MovieScene.MovieSceneTrackEvaluationField
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackEvaluationField
{
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneTrackEvaluationFieldEntry
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
	struct FFrameNumberRange Range; // 0x8(0x10)
	struct FFrameNumber ForcedTime; // 0x18(0x4)
	ESectionEvaluationFlags Flags; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x1]; // 0x1D(0x1)
	int16_t LegacySortOrder; // 0x1E(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackInstanceInput
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackInstanceInput
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackInstanceEntry
{
	struct UObject* BoundObject; // 0x0(0x8)
	struct UMovieSceneTrackInstance* TrackInstance; // 0x8(0x8)
};

// Object: Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSignedObject, "MovieSceneSignedObject")

	struct FGuid Signature; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class MovieScene.MovieSceneSection
// Size: 0xE0 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSection, "MovieSceneSection")

	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x2)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	struct FFrameNumber PreRollFrames; // 0xA0(0x4)
	struct FFrameNumber PostRollFrames; // 0xA4(0x4)
	int32_t RowIndex; // 0xA8(0x4)
	int32_t OverlapPriority; // 0xAC(0x4)
	uint8_t bIsActive : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t bIsLocked : 1; // 0xB0(0x1), Mask(0x2)
	uint8_t BitPad_0xB0_2 : 6; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	float startTime; // 0xB4(0x4)
	float endTime; // 0xB8(0x4)
	float PrerollTime; // 0xBC(0x4)
	float PostrollTime; // 0xC0(0x4)
	uint8_t bIsInfinite : 1; // 0xC4(0x1), Mask(0x1)
	uint8_t BitPad_0xC4_1 : 7; // 0xC4(0x1)
	bool bSupportsInfiniteRange; // 0xC5(0x1)
	struct FOptionalMovieSceneBlendType BlendType; // 0xC6(0x2)
	uint8_t Pad_0xC8[0x18]; // 0xC8(0x18)

	// Object: Function MovieScene.MovieSceneSection.SetRowIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb45c
	// Params: [ Num(1) Size(0x4) ]
	void SetRowIndex(int32_t NewRowIndex);

	// Object: Function MovieScene.MovieSceneSection.SetPreRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb11c
	// Params: [ Num(1) Size(0x4) ]
	void SetPreRollFrames(int32_t InPreRollFrames);

	// Object: Function MovieScene.MovieSceneSection.SetPostRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb04c
	// Params: [ Num(1) Size(0x4) ]
	void SetPostRollFrames(int32_t InPostRollFrames);

	// Object: Function MovieScene.MovieSceneSection.SetOverlapPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb39c
	// Params: [ Num(1) Size(0x4) ]
	void SetOverlapPriority(int32_t NewPriority);

	// Object: Function MovieScene.MovieSceneSection.SetIsLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb1f0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsLocked(bool bInIsLocked);

	// Object: Function MovieScene.MovieSceneSection.SetIsActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb2c8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsActive(bool bInIsActive);

	// Object: Function MovieScene.MovieSceneSection.SetCompletionMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedb5cc
	// Params: [ Num(1) Size(0x1) ]
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);

	// Object: Function MovieScene.MovieSceneSection.SetBlendType
	// Flags: [RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0xaedb500
	// Params: [ Num(1) Size(0x1) ]
	void SetBlendType(EMovieSceneBlendType InBlendType);

	// Object: Function MovieScene.MovieSceneSection.IsLocked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb1d0
	// Params: [ Num(1) Size(0x1) ]
	bool IsLocked();

	// Object: Function MovieScene.MovieSceneSection.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb2a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsActive();

	// Object: Function MovieScene.MovieSceneSection.GetRowIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb440
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRowIndex();

	// Object: Function MovieScene.MovieSceneSection.GetPreRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb100
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPreRollFrames();

	// Object: Function MovieScene.MovieSceneSection.GetPostRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb030
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPostRollFrames();

	// Object: Function MovieScene.MovieSceneSection.GetOverlapPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb380
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOverlapPriority();

	// Object: Function MovieScene.MovieSceneSection.GetCompletionMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb670
	// Params: [ Num(1) Size(0x1) ]
	EMovieSceneCompletionMode GetCompletionMode();

	// Object: Function MovieScene.MovieSceneSection.GetBlendType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb5b0
	// Params: [ Num(1) Size(0x2) ]
	struct FOptionalMovieSceneBlendType GetBlendType();
};

// Object: Class MovieScene.MovieSceneTrack
// Size: 0x78 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTrack, "MovieSceneTrack")

	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x4)
	uint8_t Pad_0x54[0x1]; // 0x54(0x1)
	bool bIsEvalDisabled; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	struct FGuid EvaluationFieldGuid; // 0x58(0x10)
	struct FMovieSceneTrackEvaluationField EvaluationField; // 0x68(0x10)
};

// Object: Class MovieScene.MovieSceneSequence
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSequence, "MovieSceneSequence")

	struct UMovieSceneCompiledData* CompiledData; // 0x50(0x8)
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58(0x1)
	bool bParentContextsAreSignificant; // 0x59(0x1)
	bool bPlayableDirectly; // 0x5A(0x1)
	EMovieSceneSequenceFlags SequenceFlags; // 0x5B(0x1)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)

	// Object: Function MovieScene.MovieSceneSequence.FindBindingsByTag
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb810
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName);

	// Object: Function MovieScene.MovieSceneSequence.FindBindingByTag
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedb904
	// Params: [ Num(2) Size(0x20) ]
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName);
};

// Object: Class MovieScene.MovieSceneNameableTrack
// Size: 0x78 (Inherited: 0x78)
struct UMovieSceneNameableTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNameableTrack, "MovieSceneNameableTrack")
};

// Object: Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneCustomClockSource : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneCustomClockSource, "MovieSceneCustomClockSource")

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnTick
	// Flags: [Native|Public]
	// Offset: 0xaecd2d8
	// Params: [ Num(2) Size(0x8) ]
	void OnTick(float DeltaSeconds, float InPlayRate);

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xaecd148
	// Params: [ Num(1) Size(0x10) ]
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xaecd210
	// Params: [ Num(1) Size(0x10) ]
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xaecd030
	// Params: [ Num(3) Size(0x1C) ]
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};

// Object: Class MovieScene.MovieSceneEntityProvider
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneEntityProvider : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneEntityProvider, "MovieSceneEntityProvider")
};

// Object: Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct IMovieScenePlaybackClient : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieScenePlaybackClient, "MovieScenePlaybackClient")
};

// Object: Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneTrackTemplateProducer : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneTrackTemplateProducer, "MovieSceneTrackTemplateProducer")
};

// Object: Class MovieScene.NodeAndChannelMappings
// Size: 0x28 (Inherited: 0x28)
struct INodeAndChannelMappings : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INodeAndChannelMappings, "NodeAndChannelMappings")
};

// Object: Class MovieScene.MovieSceneNodeGroup
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneNodeGroup : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNodeGroup, "MovieSceneNodeGroup")
};

// Object: Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneNodeGroupCollection : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNodeGroupCollection, "MovieSceneNodeGroupCollection")
};

// Object: Class MovieScene.MovieScene
// Size: 0x148 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene, "MovieScene")

	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xD0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xE0(0x8)
	struct FMovieSceneFrameRange SelectionRange; // 0xE8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0xF8(0x10)
	struct FFrameRate TickResolution; // 0x108(0x8)
	struct FFrameRate DisplayRate; // 0x110(0x8)
	EMovieSceneEvaluationType EvaluationType; // 0x118(0x1)
	EUpdateClockSource ClockSource; // 0x119(0x1)
	uint8_t Pad_0x11A[0x6]; // 0x11A(0x6)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Object: Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBindingOverrides, "MovieSceneBindingOverrides")

	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	uint8_t Pad_0x38[0x58]; // 0x38(0x58)
};

// Object: Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneBindingOwnerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneBindingOwnerInterface, "MovieSceneBindingOwnerInterface")
};

// Object: Class MovieScene.MovieSceneEntitySystem
// Size: 0x40 (Inherited: 0x28)
struct UMovieSceneEntitySystem : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEntitySystem, "MovieSceneEntitySystem")

	struct UMovieSceneEntitySystemLinker* Linker; // 0x28(0x8)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class MovieScene.MovieSceneBlenderSystem
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBlenderSystem, "MovieSceneBlenderSystem")

	uint8_t Pad_0x40[0x20]; // 0x40(0x20)
};

// Object: Class MovieScene.MovieSceneBoolSection
// Size: 0x170 (Inherited: 0xE0)
struct UMovieSceneBoolSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBoolSection, "MovieSceneBoolSection")

	bool DefaultValue; // 0xD9(0x1)
	struct FMovieSceneBoolChannel BoolCurve; // 0xE0(0x90)
};

// Object: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEntityInstantiatorSystem, "MovieSceneEntityInstantiatorSystem")
};

// Object: Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneGenericBoundObjectInstantiator, "MovieSceneGenericBoundObjectInstantiator")
};

// Object: Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBoundSceneComponentInstantiator, "MovieSceneBoundSceneComponentInstantiator")
};

// Object: Class MovieScene.MovieSceneSceneComponentImpersonator
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneSceneComponentImpersonator : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneSceneComponentImpersonator, "MovieSceneSceneComponentImpersonator")
};

// Object: Class MovieScene.MovieSceneCompiledData
// Size: 0x3F8 (Inherited: 0x28)
struct UMovieSceneCompiledData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCompiledData, "MovieSceneCompiledData")

	struct FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28(0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0x188(0x118)
	struct FMovieSceneEntityComponentField EntityComponentField; // 0x2A0(0xF0)
	struct FMovieSceneEvaluationField TrackTemplateField; // 0x390(0x30)
	struct TArray<struct FFrameTime> DeterminismFences; // 0x3C0(0x10)
	struct FGuid CompiledSignature; // 0x3D0(0x10)
	struct FGuid CompilerVersion; // 0x3E0(0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3F0(0x1)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3F1(0x1)
	EMovieSceneSequenceFlags AccumulatedFlags; // 0x3F2(0x1)
	uint8_t Pad_0x3F3[0x5]; // 0x3F3(0x5)
};

// Object: Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x230 (Inherited: 0x28)
struct UMovieSceneCompiledDataManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCompiledDataManager, "MovieSceneCompiledDataManager")

	uint8_t Pad_0x28[0xB0]; // 0x28(0xB0)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies; // 0xD8(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields; // 0x178(0x50)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields; // 0x1C8(0x50)
	uint8_t Pad_0x218[0x18]; // 0x218(0x18)
};

// Object: Class MovieScene.MovieSceneFloatDecomposer
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneFloatDecomposer : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneFloatDecomposer, "MovieSceneFloatDecomposer")
};

// Object: Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBuiltInEasingFunction, "MovieSceneBuiltInEasingFunction")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	EMovieSceneBuiltInEasing Type; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEasingExternalCurve, "MovieSceneEasingExternalCurve")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UCurveFloat* Curve; // 0x30(0x8)
};

// Object: Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneEasingFunction : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneEasingFunction, "MovieSceneEasingFunction")

	// Object: Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x8) ]
	float OnEvaluate(float Interp);
};

// Object: Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x458 (Inherited: 0x28)
struct UMovieSceneEntitySystemLinker : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEntitySystemLinker, "MovieSceneEntitySystemLinker")

	uint8_t Pad_0x28[0x210]; // 0x28(0x210)
	struct FMovieSceneEntitySystemGraph SystemGraph; // 0x238(0x138)
	uint8_t Pad_0x370[0xE8]; // 0x370(0xE8)
};

// Object: Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEvalTimeSystem, "MovieSceneEvalTimeSystem")

	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFolder, "MovieSceneFolder")

	struct FName FolderName; // 0x28(0x8)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneKeyProxy : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneKeyProxy, "MovieSceneKeyProxy")
};

// Object: Class MovieScene.MovieSceneMasterInstantiatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMasterInstantiatorSystem, "MovieSceneMasterInstantiatorSystem")
};

// Object: Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct IMovieScenePreAnimatedStateSystemInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieScenePreAnimatedStateSystemInterface, "MovieScenePreAnimatedStateSystemInterface")
};

// Object: Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCachePreAnimatedStateSystem, "MovieSceneCachePreAnimatedStateSystem")
};

// Object: Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneRestorePreAnimatedStateSystem, "MovieSceneRestorePreAnimatedStateSystem")
};

// Object: Class MovieScene.MovieSceneSequencePlayer
// Size: 0x680 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSequencePlayer, "MovieSceneSequencePlayer")

	uint8_t Pad_0x28[0x3E8]; // 0x28(0x3E8)
	struct FMulticastInlineDelegate OnPlay; // 0x410(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x420(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x430(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x440(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x450(0x10)
	uint8_t Status; // 0x460(0x1)
	uint8_t bReversePlayback : 1; // 0x461(0x1), Mask(0x1)
	uint8_t BitPad_0x461_1 : 7; // 0x461(0x1)
	uint8_t Pad_0x462[0x6]; // 0x462(0x6)
	struct UMovieSceneSequence* Sequence; // 0x468(0x8)
	struct FFrameNumber startTime; // 0x470(0x4)
	int32_t DurationFrames; // 0x474(0x4)
	float DurationSubFrames; // 0x478(0x4)
	int32_t CurrentNumLoops; // 0x47C(0x4)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x480(0x14)
	uint8_t Pad_0x494[0x4]; // 0x494(0x4)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x498(0xE8)
	uint8_t Pad_0x580[0x68]; // 0x580(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x5E8(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x5F8(0x10)
	struct UMovieSceneSequenceTickManager* TickManager; // 0x608(0x8)
	uint8_t Pad_0x610[0x70]; // 0x610(0x70)

	// Object: Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedcf6c
	// Params: [ Num(0) Size(0x0) ]
	void StopAtCurrentTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9d8b73c
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedcbb0
	// Params: [ Num(2) Size(0x8) ]
	void SetTimeRange(float startTime, float Duration);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedbde8
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayRate(float PlayRate);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc958
	// Params: [ Num(1) Size(0x28) ]
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedce04
	// Params: [ Num(1) Size(0x8) ]
	void SetFrameRate(struct FFrameRate FrameRate);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedcc94
	// Params: [ Num(3) Size(0xC) ]
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedbd30
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableCameraCuts(bool bInDisableCameraCuts);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc40c
	// Params: [ Num(1) Size(0x4) ]
	void ScrubToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc09c
	// Params: [ Num(2) Size(0x11) ]
	bool ScrubToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc73c
	// Params: [ Num(1) Size(0x8) ]
	void ScrubToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.Scrub
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedcf80
	// Params: [ Num(0) Size(0x0) ]
	void Scrub();

	// Object: Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x9d8b59c
	// Params: [ Num(1) Size(0x8) ]
	void RPC_OnStopEvent(struct FFrameTime StoppedTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x9d8b64c
	// Params: [ Num(2) Size(0xC) ]
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, struct FFrameTime RelevantTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc51c
	// Params: [ Num(1) Size(0x4) ]
	void PlayToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc1cc
	// Params: [ Num(2) Size(0x11) ]
	bool PlayToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc84c
	// Params: [ Num(1) Size(0x8) ]
	void PlayToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedca84
	// Params: [ Num(1) Size(0x28) ]
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedd064
	// Params: [ Num(0) Size(0x0) ]
	void PlayReverse();

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedcfa8
	// Params: [ Num(1) Size(0x4) ]
	void PlayLooping(int32_t NumLoops);

	// Object: Function MovieScene.MovieSceneSequencePlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f2106c
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedcf94
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc2fc
	// Params: [ Num(1) Size(0x4) ]
	void JumpToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedbf6c
	// Params: [ Num(2) Size(0x11) ]
	bool JumpToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedc62c
	// Params: [ Num(1) Size(0x8) ]
	void JumpToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedbec4
	// Params: [ Num(1) Size(0x1) ]
	bool IsReversed();

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedbf34
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedbefc
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8bb9ec8
	// Params: [ Num(0) Size(0x0) ]
	void GoToEndAndStop();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedcde4
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetStartTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedbe90
	// Params: [ Num(1) Size(0x4) ]
	float GetPlayRate();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedbb1c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject);

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedceb4
	// Params: [ Num(1) Size(0x8) ]
	struct FFrameRate GetFrameRate();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedced0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFrameDuration();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedcdbc
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetEndTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedcf04
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetDuration();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedbd10
	// Params: [ Num(1) Size(0x1) ]
	bool GetDisableCameraCuts();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaedcf38
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetCurrentTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedbc04
	// Params: [ Num(2) Size(0x28) ]
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaedd050
	// Params: [ Num(0) Size(0x0) ]
	void ChangePlaybackDirection();
};

// Object: Class MovieScene.MovieSceneSequenceTickManager
// Size: 0xD0 (Inherited: 0x28)
struct UMovieSceneSequenceTickManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSequenceTickManager, "MovieSceneSequenceTickManager")

	struct TArray<struct AActor*> SequenceActors; // 0x28(0x10)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x38(0x8)
	uint8_t Pad_0x40[0x90]; // 0x40(0x90)
};

// Object: Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSpawnablesSystem, "MovieSceneSpawnablesSystem")
};

// Object: Class MovieScene.MovieSceneSpawnSection
// Size: 0x178 (Inherited: 0x170)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSpawnSection, "MovieSceneSpawnSection")

	uint8_t Pad_0x170[0x8]; // 0x170(0x8)
};

// Object: Class MovieScene.MovieSceneSpawnTrack
// Size: 0x98 (Inherited: 0x78)
struct UMovieSceneSpawnTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSpawnTrack, "MovieSceneSpawnTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
	struct FGuid ObjectGuid; // 0x88(0x10)
};

// Object: Class MovieScene.MovieSceneSubSection
// Size: 0x158 (Inherited: 0xE0)
struct UMovieSceneSubSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSubSection, "MovieSceneSubSection")

	struct FMovieSceneSectionParameters Parameters; // 0xDC(0x24)
	float StartOffset; // 0x100(0x4)
	float TimeScale; // 0x104(0x4)
	float PrerollTime; // 0x108(0x4)
	struct UMovieSceneSequence* SubSequence; // 0x110(0x8)
	struct TLazyObjectPtr<struct AActor> ActorToRecord; // 0x118(0x1C)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct FString TargetSequenceName; // 0x138(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x148(0x10)

	// Object: Function MovieScene.MovieSceneSubSection.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaee3228
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct UMovieSceneSequence* Sequence);

	// Object: Function MovieScene.MovieSceneSubSection.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaee32d0
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneSequence* GetSequence();
};

// Object: Class MovieScene.MovieSceneSubTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSubTrack, "MovieSceneSubTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Object: Class MovieScene.TestMovieSceneTrack
// Size: 0x98 (Inherited: 0x78)
struct UTestMovieSceneTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneTrack, "TestMovieSceneTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	bool bHighPassFilter; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x88(0x10)
};

// Object: Class MovieScene.TestMovieSceneSection
// Size: 0xE0 (Inherited: 0xE0)
struct UTestMovieSceneSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneSection, "TestMovieSceneSection")
};

// Object: Class MovieScene.TestMovieSceneSequence
// Size: 0x68 (Inherited: 0x60)
struct UTestMovieSceneSequence : UMovieSceneSequence
{
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneSequence, "TestMovieSceneSequence")

	struct UMovieScene* MovieScene; // 0x60(0x8)
};

// Object: Class MovieScene.TestMovieSceneSubTrack
// Size: 0x98 (Inherited: 0x88)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack
{
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneSubTrack, "TestMovieSceneSubTrack")

	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x88(0x10)
};

// Object: Class MovieScene.TestMovieSceneSubSection
// Size: 0x158 (Inherited: 0x158)
struct UTestMovieSceneSubSection : UMovieSceneSubSection
{
	DEFINE_UE_CLASS_HELPERS(UTestMovieSceneSubSection, "TestMovieSceneSubSection")
};

// Object: Class MovieScene.MovieSceneTrackInstance
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneTrackInstance : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTrackInstance, "MovieSceneTrackInstance")

	struct UObject* AnimatedObject; // 0x28(0x8)
	bool bIsMasterTrackInstance; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x38(0x8)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; // 0x40(0x10)
};

// Object: Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xF0 (Inherited: 0x40)
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTrackInstanceInstantiator, "MovieSceneTrackInstanceInstantiator")

	uint8_t Pad_0x40[0xB0]; // 0x40(0xB0)
};

// Object: Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x48 (Inherited: 0x40)
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTrackInstanceSystem, "MovieSceneTrackInstanceSystem")

	struct UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40(0x8)
};

} // namespace SDK
