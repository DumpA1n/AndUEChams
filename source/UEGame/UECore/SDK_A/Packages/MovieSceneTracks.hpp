#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: MovieSceneTracks
// Enums: 4
// Structs: 64
// Classes: 93

enum class EAttachmentRule : uint8_t;
enum class ECameraShakePlaySpace : uint8_t;
enum class EDetachmentRule : uint8_t;
enum class EMovieSceneBlendType : uint8_t;
struct FMovieSceneObjectBindingID;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UCameraAnim;
struct UCameraShakeBase;
struct UMaterialParameterCollection;
struct UMatineeCameraShake;
struct UMovieSceneSection;
struct USoundAttenuation;
struct USoundBase;
struct FMovieSceneParameterSectionTemplate;
struct FTransformParameterNameAndCurves;
struct FColorParameterNameAndCurves;
struct FVectorParameterNameAndCurves;
struct FVector2DParameterNameAndCurves;
struct FBoolParameterNameAndCurve;
struct FScalarParameterNameAndCurve;
struct FMovieScene3DPathSectionTemplate;
struct FMovieSceneTransformMask;
struct FMovieScene3DTransformKeyStruct;
struct FMovieScene3DScaleKeyStruct;
struct FMovieScene3DRotationKeyStruct;
struct FMovieScene3DLocationKeyStruct;
struct FMovieScene3DTransformTemplateData;
struct FMovieSceneActorReferenceData;
struct FMovieSceneActorReferenceKey;
struct FMovieSceneActorReferenceSectionTemplate;
struct FMovieSceneAudioSectionTemplate;
struct FMovieSceneCameraAnimSectionData;
struct FMovieSceneAdditiveCameraAnimationTemplate;
struct FMovieSceneCameraShakeSectionData;
struct FMovieSceneCameraShakeSectionTemplate;
struct FMovieSceneCameraAnimSectionTemplate;
struct FMovieSceneCameraShakeSourceShakeSectionTemplate;
struct FMovieSceneCameraShakeSourceTriggerChannel;
struct FMovieSceneCameraShakeSourceTrigger;
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate;
struct FMovieSceneColorKeyStruct;
struct FMovieSceneColorSectionTemplate;
struct FMovieSceneEventPtrs;
struct FMovieSceneEvent;
struct FMovieSceneEventPayloadVariable;
struct FMovieSceneEventChannel;
struct FMovieSceneEventSectionData;
struct FMovieSceneEventParameters;
struct FEventPayload;
struct FMovieSceneEventTriggerData;
struct FMovieSceneEventSectionTemplate;
struct FMovieSceneFadeSectionTemplate;
struct FMovieSceneMaterialParameterCollectionTemplate;
struct FMovieSceneObjectPropertyTemplate;
struct FMovieSceneComponentMaterialSectionTemplate;
struct FMovieSceneParticleParameterSectionTemplate;
struct FMovieSceneParticleChannel;
struct FMovieSceneParticleSectionTemplate;
struct FMovieScenePrimitiveMaterialTemplate;
struct FMovieSceneVectorPropertySectionTemplate;
struct FMovieSceneStringChannel;
struct FMovieSceneStringPropertySectionTemplate;
struct FMovieSceneIntegerPropertySectionTemplate;
struct FMovieSceneEnumPropertySectionTemplate;
struct FMovieSceneBytePropertySectionTemplate;
struct FMovieSceneBoolPropertySectionTemplate;
struct FMovieSceneSkeletalAnimationParams;
struct FMovieSceneSkeletalAnimationSectionTemplateParameters;
struct FMovieSceneSkeletalAnimationSectionTemplate;
struct FMovieSceneSkeletalAnimRootMotionTrackParams;
struct FMovieSceneSlomoSectionTemplate;
struct FLevelVisibilityComponentData;
struct FMovieSceneVectorKeyStructBase;
struct FMovieSceneVector4KeyStruct;
struct FMovieSceneVectorKeyStruct;
struct FMovieSceneVector2DKeyStruct;
struct FMovieSceneVisibilitySectionTemplate;
struct UMovieSceneParameterSection;
struct UFloatChannelEvaluatorSystem;
struct IMovieSceneTransformOrigin;
struct UMovieScene3DConstraintSection;
struct UMovieScene3DAttachSection;
struct UMovieScene3DConstraintTrack;
struct UMovieScene3DAttachTrack;
struct UMovieScene3DPathSection;
struct UMovieScene3DPathTrack;
struct UMovieScenePropertySystem;
struct UMovieScene3DTransformPropertySystem;
struct UMovieScene3DTransformSection;
struct UMovieScenePropertyTrack;
struct UMovieScene3DTransformTrack;
struct UMovieSceneActorReferenceSection;
struct UMovieSceneActorReferenceTrack;
struct UMovieSceneAudioSection;
struct UMovieSceneAudioTrack;
struct UMovieSceneBaseValueEvaluatorSystem;
struct UMovieSceneBoolTrack;
struct UMovieSceneByteSection;
struct UMovieSceneByteTrack;
struct UMovieSceneCameraAnimSection;
struct UMovieSceneCameraAnimTrack;
struct UMovieSceneCameraCutSection;
struct UMovieSceneCameraCutTrack;
struct UMovieSceneCameraCutTrackInstance;
struct UMovieSceneCameraShakeSection;
struct UMovieSceneCameraShakeSourceShakeSection;
struct UMovieSceneCameraShakeSourceShakeTrack;
struct UMovieSceneCameraShakeSourceTriggerSection;
struct UMovieSceneCameraShakeSourceTriggerTrack;
struct UMovieSceneCameraShakeTrack;
struct UMovieSceneCinematicShotSection;
struct UMovieSceneCinematicShotTrack;
struct UMovieSceneColorSection;
struct UMovieSceneColorTrack;
struct UMovieSceneComponentAttachmentInvalidatorSystem;
struct UMovieSceneComponentAttachmentSystem;
struct UMovieSceneComponentMobilitySystem;
struct UMovieScenePreAnimatedComponentTransformSystem;
struct UMovieSceneComponentTransformSystem;
struct UMovieSceneEnumSection;
struct UMovieSceneEnumTrack;
struct UMovieSceneEulerTransformPropertySystem;
struct UMovieSceneEulerTransformTrack;
struct UMovieSceneEventSectionBase;
struct UMovieSceneEventRepeaterSection;
struct UMovieSceneEventSection;
struct UMovieSceneEventSystem;
struct UMovieScenePreSpawnEventSystem;
struct UMovieScenePostSpawnEventSystem;
struct UMovieScenePostEvalEventSystem;
struct UMovieSceneEventTrack;
struct UMovieSceneEventTriggerSection;
struct UMovieSceneFadeSection;
struct UMovieSceneFloatTrack;
struct UMovieSceneFadeTrack;
struct UMovieSceneFloatPropertySystem;
struct UMovieSceneFloatSection;
struct UMovieSceneHierarchicalBiasSystem;
struct UMovieSceneIntegerSection;
struct UMovieSceneIntegerTrack;
struct UMovieSceneInterrogatedPropertyInstantiatorSystem;
struct UMovieSceneLevelVisibilitySection;
struct UMovieSceneLevelVisibilitySystem;
struct UMovieSceneLevelVisibilityTrack;
struct UMovieSceneMaterialTrack;
struct UMovieSceneMaterialParameterCollectionTrack;
struct UMovieSceneComponentMaterialTrack;
struct UMovieSceneObjectPropertySection;
struct UMovieSceneObjectPropertyTrack;
struct UMovieSceneParticleParameterTrack;
struct UMovieSceneParticleSection;
struct UMovieSceneParticleTrack;
struct UMovieScenePiecewiseFloatBlenderSystem;
struct UMovieScenePrimitiveMaterialSection;
struct UMovieScenePrimitiveMaterialTrack;
struct UMovieScenePropertyInstantiatorSystem;
struct UMovieSceneQuaternionInterpolationRotationSystem;
struct UMovieSceneSkeletalAnimationSection;
struct UMovieSceneSkeletalAnimationTrack;
struct UMovieSceneSlomoSection;
struct UMovieSceneSlomoTrack;
struct UMovieSceneStringSection;
struct UMovieSceneStringTrack;
struct UMovieSceneTransformOriginSystem;
struct UMovieSceneTransformTrack;
struct UMovieSceneVectorSection;
struct UMovieSceneVectorTrack;
struct UMovieSceneVisibilityTrack;
struct UMovieSceneHierarchicalEasingInstantiatorSystem;
struct UWeightAndEasingEvaluatorSystem;

// Object: Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Object: Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Object: Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Object: Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x78 (Inherited: 0x18)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x18(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x28(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x38(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x48(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x58(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x68(0x10)
};

// Object: ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5A8 (Inherited: 0x0)
struct FTransformParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1E8(0x1E0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3C8(0x1E0)
};

// Object: ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x288 (Inherited: 0x0)
struct FColorParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel RedCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x148(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1E8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1E8 (Inherited: 0x0)
struct FVectorParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel ZCurve; // 0x148(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x148 (Inherited: 0x0)
struct FVector2DParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x98 (Inherited: 0x0)
struct FBoolParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x8(0x90)
};

// Object: ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xA8 (Inherited: 0x0)
struct FScalarParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID; // 0x14(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x30(0xA0)
	EMovieScene3DPathSection_Axis FrontAxisEnum; // 0xD0(0x1)
	EMovieScene3DPathSection_Axis UpAxisEnum; // 0xD1(0x1)
	uint8_t bFollow : 1; // 0xD2(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0xD2(0x1), Mask(0x2)
	uint8_t bForceUpright : 1; // 0xD2(0x1), Mask(0x4)
	uint8_t BitPad_0xD2_3 : 5; // 0xD2(0x1)
	uint8_t Pad_0xD3[0x5]; // 0xD3(0x5)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTransformMask
{
	uint32_t mask; // 0x0(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x8)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8(0xC)
	struct FRotator Rotation; // 0x14(0xC)
	struct FVector Scale; // 0x20(0xC)
	struct FFrameNumber Time; // 0x2C(0x4)
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Scale; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{
	struct FRotator Rotation; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x650 (Inherited: 0x0)
struct FMovieScene3DTransformTemplateData
{
	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0(0x1E0)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1E0(0x1E0)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3C0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5A0(0xA0)
	EMovieSceneBlendType BlendType; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	struct FMovieSceneTransformMask mask; // 0x644(0x4)
	bool bUseQuaternionInterpolation; // 0x648(0x1)
	uint8_t Pad_0x649[0x7]; // 0x649(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xB0 (Inherited: 0x8)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	uint8_t Pad_0x18[0x28]; // 0x18(0x28)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40(0x10)
	uint8_t Pad_0x50[0x60]; // 0x50(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID Object; // 0x0(0x18)
	struct FName ComponentName; // 0x18(0x8)
	struct FName SocketName; // 0x20(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xE0 (Inherited: 0x18)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x18)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x30(0xB0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAudioSection* AudioSection; // 0x18(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraAnimSectionData
{
	struct UCameraAnim* CameraAnim; // 0x0(0x8)
	float PlayRate; // 0x8(0x4)
	float PlayScale; // 0xC(0x4)
	float BlendInTime; // 0x10(0x4)
	float BlendOutTime; // 0x14(0x4)
	bool bLooping; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraShakeSectionData
{
	struct UMatineeCameraShake* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	ECameraShakePlaySpace PlaySpace; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	struct FFrameNumber SectionEndTime; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraShakeSourceTrigger
{
	struct UCameraShakeBase* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	ECameraShakePlaySpace PlaySpace; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Size: 0x38 (Inherited: 0x18)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FFrameNumber> triggertimes; // 0x18(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x28(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x8)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{
	struct FLinearColor Color; // 0x8(0x10)
	struct FFrameNumber Time; // 0x18(0x4)
	uint8_t Pad_0x1C[0x1C]; // 0x1C(0x1C)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2B8 (Inherited: 0x30)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x30(0x280)
	EMovieSceneBlendType BlendType; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x7]; // 0x2B1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEventPtrs
{
	struct UFunction* Function; // 0x0(0x8)
	struct TFieldPath<FProperty> BoundObjectProperty; // 0x8(0x20)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEvent
{
	struct FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEventPayloadVariable
{
	struct FString Value; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneEventChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> times; // 0x8(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEventParameters
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x0)
struct FEventPayload
{
	struct FName EventName; // 0x0(0x8)
	struct FMovieSceneEventParameters Parameters; // 0x8(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// Size: 0x48 (Inherited: 0x0)
struct FMovieSceneEventTriggerData
{
	struct FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
	struct FGuid ObjectBindingID; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xA8 (Inherited: 0x18)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData eventData; // 0x18(0x88)
	uint8_t bFireEventsWhenForwards : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0xA0(0x1), Mask(0x2)
	uint8_t BitPad_0xA0_2 : 6; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xD0 (Inherited: 0x18)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel FadeCurve; // 0x18(0xA0)
	struct FLinearColor FadeColor; // 0xB8(0x10)
	uint8_t bFadeAudio : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x80 (Inherited: 0x78)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct UMaterialParameterCollection* MPC; // 0x78(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0xF0 (Inherited: 0x30)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x30(0xC0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x80 (Inherited: 0x78)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	int32_t MaterialIndex; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x78 (Inherited: 0x78)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x98 (Inherited: 0x98)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xB0 (Inherited: 0x18)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel ParticleKeys; // 0x18(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{
	int32_t MaterialIndex; // 0x14(0x4)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x18(0xC0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2B8 (Inherited: 0x30)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x30(0x280)
	int32_t NumChannelsUsed; // 0x2B0(0x4)
	EMovieSceneBlendType BlendType; // 0x2B4(0x1)
	uint8_t Pad_0x2B5[0x3]; // 0x2B5(0x3)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xA0 (Inherited: 0x8)
struct FMovieSceneStringChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> times; // 0x8(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x1)
	uint8_t Pad_0x39[0x67]; // 0x39(0x67)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xD0 (Inherited: 0x30)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel StringCurve; // 0x30(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xC8 (Inherited: 0x30)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x30(0x90)
	EMovieSceneBlendType BlendType; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xC8 (Inherited: 0x30)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel EnumCurve; // 0x30(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xC8 (Inherited: 0x30)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel ByteCurve; // 0x30(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xC0 (Inherited: 0x30)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel BoolCurve; // 0x30(0x90)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xD8 (Inherited: 0x0)
struct FMovieSceneSkeletalAnimationParams
{
	struct UAnimSequenceBase* Animation; // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
	struct FFrameNumber StartFrameOffset; // 0xC(0x4)
	struct FFrameNumber EndFrameOffset; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	uint8_t bReverse : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName SlotName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xA0)
	bool bSkipAnimNotifiers; // 0xC8(0x1)
	bool bForceCustomMode; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x2]; // 0xCA(0x2)
	float StartOffset; // 0xCC(0x4)
	float EndOffset; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xE0 (Inherited: 0xD8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber SectionStartTime; // 0xD4(0x4)
	struct FFrameNumber SectionEndTime; // 0xD8(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0xF8 (Inherited: 0x18)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x18(0xE0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xB8 (Inherited: 0x18)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel SlomoCurve; // 0x18(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// Size: 0x8 (Inherited: 0x0)
struct FLevelVisibilityComponentData
{
	struct UMovieSceneLevelVisibilitySection* Section; // 0x0(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x8)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{
	struct FFrameNumber Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector4 Vector; // 0x30(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{
	struct FVector Vector; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{
	struct FVector2D Vector; // 0x28(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xC0 (Inherited: 0xC0)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{
};

// Object: Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x140 (Inherited: 0xE0)
struct UMovieSceneParameterSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParameterSection, "MovieSceneParameterSection")

	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xE0(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xF0(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x100(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x110(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x120(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x130(0x10)

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafd4174
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveVectorParameter(struct FName InParameterName);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafd4228
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveVector2DParameter(struct FName InParameterName);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafd400c
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveTransformParameter(struct FName InParameterName);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafd4390
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveScalarParameter(struct FName InParameterName);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafd40c0
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveColorParameter(struct FName InParameterName);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafd42dc
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveBoolParameter(struct FName InParameterName);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafd3f28
	// Params: [ Num(1) Size(0x50) ]
	void GetParameterNames(struct TSet<struct FName>& ParameterNames);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafd46c8
	// Params: [ Num(3) Size(0x18) ]
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafd47f0
	// Params: [ Num(3) Size(0x14) ]
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xafd4444
	// Params: [ Num(3) Size(0x40) ]
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, const struct FTransform& InValue);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafd4a40
	// Params: [ Num(3) Size(0x10) ]
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafd45a0
	// Params: [ Num(3) Size(0x1C) ]
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue);

	// Object: Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafd4914
	// Params: [ Num(3) Size(0xD) ]
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue);
};

// Object: Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UFloatChannelEvaluatorSystem, "FloatChannelEvaluatorSystem")
};

// Object: Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneTransformOrigin : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMovieSceneTransformOrigin, "MovieSceneTransformOrigin")

	// Object: Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// Flags: [Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform BP_GetTransformOrigin();
};

// Object: Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x108 (Inherited: 0xE0)
struct UMovieScene3DConstraintSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DConstraintSection, "MovieScene3DConstraintSection")

	struct FGuid ConstraintId; // 0xDC(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xEC(0x18)

	// Object: Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xafc7fcc
	// Params: [ Num(1) Size(0x18) ]
	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);

	// Object: Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafc80c0
	// Params: [ Num(1) Size(0x18) ]
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// Object: Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x128 (Inherited: 0x108)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DAttachSection, "MovieScene3DAttachSection")

	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FName AttachSocketName; // 0x110(0x8)
	struct FName AttachComponentName; // 0x118(0x8)
	EAttachmentRule AttachmentLocationRule; // 0x120(0x1)
	EAttachmentRule AttachmentRotationRule; // 0x121(0x1)
	EAttachmentRule AttachmentScaleRule; // 0x122(0x1)
	EDetachmentRule DetachmentLocationRule; // 0x123(0x1)
	EDetachmentRule DetachmentRotationRule; // 0x124(0x1)
	EDetachmentRule DetachmentScaleRule; // 0x125(0x1)
	uint8_t Pad_0x126[0x2]; // 0x126(0x2)
};

// Object: Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DConstraintTrack, "MovieScene3DConstraintTrack")

	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x78(0x10)
};

// Object: Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DAttachTrack, "MovieScene3DAttachTrack")
};

// Object: Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1B0 (Inherited: 0x108)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DPathSection, "MovieScene3DPathSection")

	struct FMovieSceneFloatChannel TimingCurve; // 0x108(0xA0)
	EMovieScene3DPathSection_Axis FrontAxisEnum; // 0x1A8(0x1)
	EMovieScene3DPathSection_Axis UpAxisEnum; // 0x1A9(0x1)
	uint8_t bFollow : 1; // 0x1AA(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0x1AA(0x1), Mask(0x2)
	uint8_t bForceUpright : 1; // 0x1AA(0x1), Mask(0x4)
	uint8_t BitPad_0x1AA_3 : 5; // 0x1AA(0x1)
	uint8_t Pad_0x1AB[0x5]; // 0x1AB(0x5)
};

// Object: Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DPathTrack, "MovieScene3DPathTrack")

	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePropertySystem, "MovieScenePropertySystem")

	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DTransformPropertySystem, "MovieScene3DTransformPropertySystem")
};

// Object: Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x738 (Inherited: 0xE0)
struct UMovieScene3DTransformSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DTransformSection, "MovieScene3DTransformSection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct FMovieSceneTransformMask TransformMask; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0xF0(0x1E0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2D0(0x1E0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4B0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x690(0xA0)
	bool bUseQuaternionInterpolation; // 0x730(0x1)
	uint8_t Pad_0x731[0x7]; // 0x731(0x7)
};

// Object: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xA8 (Inherited: 0x78)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePropertyTrack, "MovieScenePropertyTrack")

	struct UMovieSceneSection* SectionToKey; // 0x78(0x8)
	struct FMovieScenePropertyBinding PropertyBinding; // 0x80(0x14)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Object: Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xA8 (Inherited: 0xA8)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DTransformTrack, "MovieScene3DTransformTrack")
};

// Object: Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x220 (Inherited: 0xE0)
struct UMovieSceneActorReferenceSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneActorReferenceSection, "MovieSceneActorReferenceSection")

	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xE0(0xB0)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x190(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x210(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneActorReferenceTrack, "MovieSceneActorReferenceTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x330 (Inherited: 0xE0)
struct UMovieSceneAudioSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAudioSection, "MovieSceneAudioSection")

	struct USoundBase* Sound; // 0xE0(0x8)
	struct FFrameNumber StartFrameOffset; // 0xE8(0x4)
	float StartOffset; // 0xEC(0x4)
	float AudioStartTime; // 0xF0(0x4)
	float AudioDilationFactor; // 0xF4(0x4)
	float AudioVolume; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	struct FMovieSceneFloatChannel SoundVolume; // 0x100(0xA0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1A0(0xA0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x240(0xB0)
	bool bLooping; // 0x2F0(0x1)
	bool bSuppressSubtitles; // 0x2F1(0x1)
	bool bOverrideAttenuation; // 0x2F2(0x1)
	uint8_t Pad_0x2F3[0x5]; // 0x2F3(0x5)
	struct USoundAttenuation* AttenuationSettings; // 0x2F8(0x8)
	struct FDelegate OnQueueSubtitles; // 0x300(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x310(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x320(0x10)

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xafc822c
	// Params: [ Num(1) Size(0x4) ]
	void SetStartOffset(struct FFrameNumber InStartOffset);

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafc82ec
	// Params: [ Num(1) Size(0x8) ]
	void SetSound(struct USoundBase* InSound);

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafc8210
	// Params: [ Num(1) Size(0x4) ]
	struct FFrameNumber GetStartOffset();

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafc82d0
	// Params: [ Num(1) Size(0x8) ]
	struct USoundBase* GetSound();
};

// Object: Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAudioTrack, "MovieSceneAudioTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBaseValueEvaluatorSystem, "MovieSceneBaseValueEvaluatorSystem")
};

// Object: Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBoolTrack, "MovieSceneBoolTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x178 (Inherited: 0xE0)
struct UMovieSceneByteSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneByteSection, "MovieSceneByteSection")

	struct FMovieSceneByteChannel ByteCurve; // 0xE0(0x98)
};

// Object: Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneByteTrack, "MovieSceneByteTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UEnum* Enum; // 0xB0(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x120 (Inherited: 0xE0)
struct UMovieSceneCameraAnimSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraAnimSection, "MovieSceneCameraAnimSection")

	struct FMovieSceneCameraAnimSectionData AnimData; // 0xE0(0x20)
	struct UCameraAnim* CameraAnim; // 0x100(0x8)
	float PlayRate; // 0x108(0x4)
	float PlayScale; // 0x10C(0x4)
	float BlendInTime; // 0x110(0x4)
	float BlendOutTime; // 0x114(0x4)
	bool bLooping; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraAnimTrack, "MovieSceneCameraAnimTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x160 (Inherited: 0xE0)
struct UMovieSceneCameraCutSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraCutSection, "MovieSceneCameraCutSection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	bool bLockPreviousCamera; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x3]; // 0xE9(0x3)
	struct FGuid CameraGuid; // 0xEC(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xFC(0x18)
	uint8_t Pad_0x114[0xC]; // 0x114(0xC)
	struct FTransform InitialCameraCutTransform; // 0x120(0x30)
	bool bHasInitialCameraCutTransform; // 0x150(0x1)
	uint8_t Pad_0x151[0xF]; // 0x151(0xF)

	// Object: Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafc8428
	// Params: [ Num(1) Size(0x18) ]
	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);

	// Object: Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafc8520
	// Params: [ Num(1) Size(0x18) ]
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// Object: Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraCutTrack, "MovieSceneCameraCutTrack")

	bool bCanBlend; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xB8 (Inherited: 0x50)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraCutTrackInstance, "MovieSceneCameraCutTrackInstance")

	uint8_t Pad_0x50[0x68]; // 0x50(0x68)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x120 (Inherited: 0xE0)
struct UMovieSceneCameraShakeSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeSection, "MovieSceneCameraShakeSection")

	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xE0(0x20)
	struct UMatineeCameraShake* ShakeClass; // 0x100(0x8)
	float PlayScale; // 0x108(0x4)
	ECameraShakePlaySpace PlaySpace; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x110(0xC)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x100 (Inherited: 0xE0)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeSourceShakeSection, "MovieSceneCameraShakeSourceShakeSection")

	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xE0(0x20)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeSourceShakeTrack, "MovieSceneCameraShakeSourceShakeTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x168 (Inherited: 0xE0)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeSourceTriggerSection, "MovieSceneCameraShakeSourceTriggerSection")

	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xE0(0x88)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeSourceTriggerTrack, "MovieSceneCameraShakeSourceTriggerTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeTrack, "MovieSceneCameraShakeTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x180 (Inherited: 0x158)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCinematicShotSection, "MovieSceneCinematicShotSection")

	struct FString ShotDisplayName; // 0x158(0x10)
	struct FText DisplayName; // 0x168(0x18)

	// Object: Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafce2dc
	// Params: [ Num(1) Size(0x10) ]
	void SetShotDisplayName(struct FString InShotDisplayName);

	// Object: Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafce414
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetShotDisplayName();
};

// Object: Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCinematicShotTrack, "MovieSceneCinematicShotTrack")
};

// Object: Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x360 (Inherited: 0xE0)
struct UMovieSceneColorSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneColorSection, "MovieSceneColorSection")

	struct FMovieSceneFloatChannel RedCurve; // 0xE0(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x180(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x220(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2C0(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneColorTrack, "MovieSceneColorTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	bool bIsSlateColor; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x7]; // 0xB1(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneComponentAttachmentInvalidatorSystem, "MovieSceneComponentAttachmentInvalidatorSystem")
};

// Object: Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1C0 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneComponentAttachmentSystem, "MovieSceneComponentAttachmentSystem")

	uint8_t Pad_0x40[0x180]; // 0x40(0x180)
};

// Object: Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x220 (Inherited: 0x40)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneComponentMobilitySystem, "MovieSceneComponentMobilitySystem")

	uint8_t Pad_0x40[0x1E0]; // 0x40(0x1E0)
};

// Object: Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem
// Size: 0x1C0 (Inherited: 0x40)
struct UMovieScenePreAnimatedComponentTransformSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePreAnimatedComponentTransformSystem, "MovieScenePreAnimatedComponentTransformSystem")

	uint8_t Pad_0x40[0x180]; // 0x40(0x180)
};

// Object: Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneComponentTransformSystem, "MovieSceneComponentTransformSystem")
};

// Object: Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x178 (Inherited: 0xE0)
struct UMovieSceneEnumSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEnumSection, "MovieSceneEnumSection")

	struct FMovieSceneByteChannel EnumCurve; // 0xE0(0x98)
};

// Object: Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEnumTrack, "MovieSceneEnumTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UEnum* Enum; // 0xB0(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEulerTransformPropertySystem, "MovieSceneEulerTransformPropertySystem")
};

// Object: Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xA8 (Inherited: 0xA8)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEulerTransformTrack, "MovieSceneEulerTransformTrack")
};

// Object: Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xE0 (Inherited: 0xE0)
struct UMovieSceneEventSectionBase : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSectionBase, "MovieSceneEventSectionBase")
};

// Object: Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x110 (Inherited: 0xE0)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventRepeaterSection, "MovieSceneEventRepeaterSection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct FMovieSceneEvent Event; // 0xE8(0x28)
};

// Object: Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1E0 (Inherited: 0xE0)
struct UMovieSceneEventSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSection, "MovieSceneEventSection")

	struct FNameCurve Events; // 0xE0(0x78)
	struct FMovieSceneEventSectionData eventData; // 0x158(0x88)
};

// Object: Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSystem, "MovieSceneEventSystem")

	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
};

// Object: Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePreSpawnEventSystem, "MovieScenePreSpawnEventSystem")
};

// Object: Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePostSpawnEventSystem, "MovieScenePostSpawnEventSystem")
};

// Object: Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePostEvalEventSystem, "MovieScenePostEvalEventSystem")
};

// Object: Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x98 (Inherited: 0x78)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventTrack, "MovieSceneEventTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	uint8_t bFireEventsWhenForwards : 1; // 0x80(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0x80(0x1), Mask(0x2)
	uint8_t BitPad_0x80_2 : 6; // 0x80(0x1)
	EFireEventsAtPosition EventPosition; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x170 (Inherited: 0xE0)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventTriggerSection, "MovieSceneEventTriggerSection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct FMovieSceneEventChannel EventChannel; // 0xE8(0x88)
};

// Object: Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x198 (Inherited: 0xE0)
struct UMovieSceneFadeSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFadeSection, "MovieSceneFadeSection")

	struct FMovieSceneFloatChannel FloatCurve; // 0xE0(0xA0)
	struct FLinearColor FadeColor; // 0x180(0x10)
	uint8_t bFadeAudio : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t Pad_0x191[0x7]; // 0x191(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xA8 (Inherited: 0xA8)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFloatTrack, "MovieSceneFloatTrack")
};

// Object: Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFadeTrack, "MovieSceneFadeTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFloatPropertySystem, "MovieSceneFloatPropertySystem")
};

// Object: Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x188 (Inherited: 0xE0)
struct UMovieSceneFloatSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFloatSection, "MovieSceneFloatSection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct FMovieSceneFloatChannel FloatCurve; // 0xE8(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneHierarchicalBiasSystem, "MovieSceneHierarchicalBiasSystem")
};

// Object: Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x170 (Inherited: 0xE0)
struct UMovieSceneIntegerSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneIntegerSection, "MovieSceneIntegerSection")

	struct FMovieSceneIntegerChannel IntegerCurve; // 0xE0(0x90)
};

// Object: Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneIntegerTrack, "MovieSceneIntegerTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1E8 (Inherited: 0x40)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneInterrogatedPropertyInstantiatorSystem, "MovieSceneInterrogatedPropertyInstantiatorSystem")

	uint8_t Pad_0x40[0x1A8]; // 0x40(0x1A8)
};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x100 (Inherited: 0xE0)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneLevelVisibilitySection, "MovieSceneLevelVisibilitySection")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	ELevelVisibility Visibility; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct TArray<struct FName> LevelNames; // 0xF0(0x10)

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xafce8f4
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(ELevelVisibility InVisibility);

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xafce754
	// Params: [ Num(1) Size(0x10) ]
	void SetLevelNames(const struct TArray<struct FName>& InLevelNames);

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafce99c
	// Params: [ Num(1) Size(0x1) ]
	ELevelVisibility GetVisibility();

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xafce870
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetLevelNames();
};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1A8 (Inherited: 0x40)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneLevelVisibilitySystem, "MovieSceneLevelVisibilitySystem")

	uint8_t Pad_0x40[0x168]; // 0x40(0x168)
};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneLevelVisibilityTrack, "MovieSceneLevelVisibilityTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMaterialTrack, "MovieSceneMaterialTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMaterialParameterCollectionTrack, "MovieSceneMaterialParameterCollectionTrack")

	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct UMaterialParameterCollection* MPC; // 0x90(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneComponentMaterialTrack, "MovieSceneComponentMaterialTrack")

	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	int32_t MaterialIndex; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1A0 (Inherited: 0xE0)
struct UMovieSceneObjectPropertySection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneObjectPropertySection, "MovieSceneObjectPropertySection")

	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xE0(0xC0)
};

// Object: Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneObjectPropertyTrack, "MovieSceneObjectPropertyTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UObject* PropertyClass; // 0xB0(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParticleParameterTrack, "MovieSceneParticleParameterTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x178 (Inherited: 0xE0)
struct UMovieSceneParticleSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParticleSection, "MovieSceneParticleSection")

	struct FMovieSceneParticleChannel ParticleKeys; // 0xE0(0x98)
};

// Object: Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParticleTrack, "MovieSceneParticleTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x80(0x10)
};

// Object: Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Size: 0x120 (Inherited: 0x60)
struct UMovieScenePiecewiseFloatBlenderSystem : UMovieSceneBlenderSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePiecewiseFloatBlenderSystem, "MovieScenePiecewiseFloatBlenderSystem")

	uint8_t Pad_0x60[0xC0]; // 0x60(0xC0)
};

// Object: Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1A0 (Inherited: 0xE0)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePrimitiveMaterialSection, "MovieScenePrimitiveMaterialSection")

	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xE0(0xC0)
};

// Object: Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePrimitiveMaterialTrack, "MovieScenePrimitiveMaterialTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	int32_t MaterialIndex; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x290 (Inherited: 0x40)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieScenePropertyInstantiatorSystem, "MovieScenePropertyInstantiatorSystem")

	uint8_t Pad_0x40[0x250]; // 0x40(0x250)
};

// Object: Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneQuaternionInterpolationRotationSystem, "MovieSceneQuaternionInterpolationRotationSystem")
};

// Object: Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x270 (Inherited: 0xE0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSkeletalAnimationSection, "MovieSceneSkeletalAnimationSection")

	struct FMovieSceneSkeletalAnimationParams Params; // 0xE0(0xD8)
	struct UAnimSequence* AnimSequence; // 0x1B8(0x8)
	struct UAnimSequenceBase* Animation; // 0x1C0(0x8)
	float StartOffset; // 0x1C8(0x4)
	float EndOffset; // 0x1CC(0x4)
	float PlayRate; // 0x1D0(0x4)
	uint8_t bReverse : 1; // 0x1D4(0x1), Mask(0x1)
	uint8_t BitPad_0x1D4_1 : 7; // 0x1D4(0x1)
	uint8_t Pad_0x1D5[0x3]; // 0x1D5(0x3)
	struct FName SlotName; // 0x1D8(0x8)
	struct FVector StartLocationOffset; // 0x1E0(0xC)
	struct FRotator StartRotationOffset; // 0x1EC(0xC)
	bool bMatchWithPrevious; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x3]; // 0x1F9(0x3)
	struct FName MatchedBoneName; // 0x1FC(0x8)
	struct FVector MatchedLocationOffset; // 0x204(0xC)
	struct FRotator MatchedRotationOffset; // 0x210(0xC)
	bool bMatchTranslation; // 0x21C(0x1)
	bool bMatchIncludeZHeight; // 0x21D(0x1)
	bool bMatchRotationYaw; // 0x21E(0x1)
	bool bMatchRotationPitch; // 0x21F(0x1)
	bool bMatchRotationRoll; // 0x220(0x1)
	uint8_t Pad_0x221[0x4F]; // 0x221(0x4F)
};

// Object: Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xD0 (Inherited: 0x78)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSkeletalAnimationTrack, "MovieSceneSkeletalAnimationTrack")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x80(0x10)
	bool bUseLegacySectionIndexBlend; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98(0x30)
	bool bBlendFirstChildOfRoot; // 0xC8(0x1)
	bool bIgnoreRootMotion; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x6]; // 0xCA(0x6)
};

// Object: Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x180 (Inherited: 0xE0)
struct UMovieSceneSlomoSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSlomoSection, "MovieSceneSlomoSection")

	struct FMovieSceneFloatChannel FloatCurve; // 0xE0(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSlomoTrack, "MovieSceneSlomoTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x180 (Inherited: 0xE0)
struct UMovieSceneStringSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneStringSection, "MovieSceneStringSection")

	struct FMovieSceneStringChannel StringCurve; // 0xE0(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneStringTrack, "MovieSceneStringTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x78 (Inherited: 0x40)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTransformOriginSystem, "MovieSceneTransformOriginSystem")

	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
};

// Object: Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xA8 (Inherited: 0xA8)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneTransformTrack, "MovieSceneTransformTrack")
};

// Object: Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x368 (Inherited: 0xE0)
struct UMovieSceneVectorSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneVectorSection, "MovieSceneVectorSection")

	struct FMovieSceneFloatChannel Curves[0x4]; // 0xE0(0x280)
	int32_t ChannelsUsed; // 0x360(0x4)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneVectorTrack, "MovieSceneVectorTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	int32_t NumChannelsUsed; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xB0 (Inherited: 0xB0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneVisibilityTrack, "MovieSceneVisibilityTrack")
};

// Object: Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneHierarchicalEasingInstantiatorSystem, "MovieSceneHierarchicalEasingInstantiatorSystem")

	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
};

// Object: Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x78 (Inherited: 0x40)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem
{
	DEFINE_UE_CLASS_HELPERS(UWeightAndEasingEvaluatorSystem, "WeightAndEasingEvaluatorSystem")

	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
};

} // namespace SDK
