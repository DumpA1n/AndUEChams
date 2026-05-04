#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: MovieSceneTracks
// Enums: 4
// Structs: 69
// Classes: 70

enum class EAttachmentRule : uint8_t;
enum class ECameraAnimPlaySpace : uint8_t;
enum class EDetachmentRule : uint8_t;
enum class EMovieSceneBlendType : uint8_t;
struct FMovieSceneObjectBindingID;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UCameraAnim;
struct UCameraShake;
struct UMaterialParameterCollection;
struct UMovieSceneSection;
struct USoundAttenuation;
struct USoundBase;
struct FMovieScene3DAttachSectionTemplate;
struct FMovieScene3DPathSectionTemplate;
struct FMovieSceneTransformMask;
struct FMovieScene3DTransformKeyStruct;
struct FMovieScene3DScaleKeyStruct;
struct FMovieScene3DRotationKeyStruct;
struct FMovieScene3DLocationKeyStruct;
struct FMovieScene3DTransformTemplateData;
struct FMovieSceneComponentTransformSectionTemplate;
struct FMovieSceneActorReferenceData;
struct FMovieSceneActorReferenceKey;
struct FMovieSceneActorReferenceSectionTemplate;
struct FMovieSceneAudioSectionTemplate;
struct FMovieSceneCameraAnimSectionData;
struct FMovieSceneAdditiveCameraAnimationTemplate;
struct FMovieSceneCameraShakeSectionData;
struct FMovieSceneCameraShakeSectionTemplate;
struct FMovieSceneCameraAnimSectionTemplate;
struct FMovieSceneCameraCutSectionTemplate;
struct FMovieSceneColorKeyStruct;
struct FMovieSceneColorSectionTemplate;
struct FMovieSceneEventPtrs;
struct FMovieSceneEvent;
struct FMovieSceneEventPayloadVariable;
struct FMovieSceneEventChannel;
struct FMovieSceneEventSectionData;
struct FMovieSceneEventParameters;
struct FEventPayload;
struct FMovieSceneEventTemplateBase;
struct FMovieSceneEventRepeaterTemplate;
struct FMovieSceneEventTriggerTemplate;
struct FMovieSceneEventSectionTemplate;
struct FMovieSceneFadeSectionTemplate;
struct FMovieSceneLevelVisibilitySectionTemplate;
struct FMovieSceneParameterSectionTemplate;
struct FTransformParameterNameAndCurves;
struct FColorParameterNameAndCurves;
struct FVectorParameterNameAndCurves;
struct FScalarParameterNameAndCurve;
struct FMovieSceneMaterialParameterCollectionTemplate;
struct FMovieSceneObjectPropertyTemplate;
struct FMaterialParameterNameAndIns;
struct FMovieSceneComponentMaterialSectionTemplate;
struct FMovieSceneParticleParameterSectionTemplate;
struct FMovieSceneParticleChannel;
struct FMovieSceneParticleSectionTemplate;
struct FMovieScenePrimitiveMaterialTemplate;
struct FMovieSceneEulerTransformPropertySectionTemplate;
struct FMovieSceneTransformPropertySectionTemplate;
struct FMovieSceneVectorPropertySectionTemplate;
struct FMovieSceneStringChannel;
struct FMovieSceneStringPropertySectionTemplate;
struct FMovieSceneIntegerPropertySectionTemplate;
struct FMovieSceneEnumPropertySectionTemplate;
struct FMovieSceneBytePropertySectionTemplate;
struct FMovieSceneFloatPropertySectionTemplate;
struct FMovieSceneBoolPropertySectionTemplate;
struct FMovieSceneSkeletalAnimationParams;
struct FMovieSceneSkeletalAnimationSectionTemplateParameters;
struct FMovieSceneSkeletalAnimationSectionTemplate;
struct FMovieSceneSlomoSectionTemplate;
struct FMovieSceneSpawnSectionTemplate;
struct FMovieSceneSubtitlesParams;
struct FMovieSceneSubtitlesTemplate;
struct FMovieSceneVectorKeyStructBase;
struct FMovieSceneVector4KeyStruct;
struct FMovieSceneVectorKeyStruct;
struct FMovieSceneVector2DKeyStruct;
struct FMovieSceneVisibilitySectionTemplate;
struct UMovieSceneEventTrack;
struct IMovieSceneTransformOrigin;
struct UMovieScene3DConstraintSection;
struct UMovieScene3DAttachSection;
struct UMovieScene3DConstraintTrack;
struct UMovieScene3DAttachTrack;
struct UMovieScene3DPathSection;
struct UMovieScene3DPathTrack;
struct UMovieScene3DTransformSection;
struct UMovieScenePropertyTrack;
struct UMovieScene3DTransformTrack;
struct UMovieSceneActorReferenceSection;
struct UMovieSceneActorReferenceTrack;
struct UMovieSceneAudioSection;
struct UMovieSceneAudioTrack;
struct UMovieSceneBoolSection;
struct UMovieSceneBoolTrack;
struct UMovieSceneByteSection;
struct UMovieSceneByteTrack;
struct UMovieSceneCameraAnimSection;
struct UMovieSceneCameraAnimTrack;
struct UMovieSceneCameraCutSection;
struct UMovieSceneCameraCutTrack;
struct UMovieSceneCameraShakeSection;
struct UMovieSceneCameraShakeTrack;
struct UMovieSceneCinematicShotSection;
struct UMovieSceneCinematicShotTrack;
struct UMovieSceneColorSection;
struct UMovieSceneColorTrack;
struct UMovieSceneEnumSection;
struct UMovieSceneEnumTrack;
struct UMovieSceneEulerTransformTrack;
struct UMovieSceneEventSectionBase;
struct UMovieSceneEventRepeaterSection;
struct UMovieSceneEventSection;
struct UMovieSceneEventSubtitleSection;
struct UMovieSceneEventSubtitlesTrack;
struct UMovieSceneEventTriggerSection;
struct UMovieSceneFloatSection;
struct UMovieSceneFadeSection;
struct UMovieSceneFloatTrack;
struct UMovieSceneFadeTrack;
struct UMovieSceneIntegerSection;
struct UMovieSceneIntegerTrack;
struct UMovieSceneLevelVisibilitySection;
struct UMovieSceneLevelVisibilityTrack;
struct UMovieSceneMaterialTrack;
struct UMovieSceneMaterialParameterCollectionTrack;
struct UMovieSceneComponentMaterialTrack;
struct UMovieSceneObjectPropertySection;
struct UMovieSceneObjectPropertyTrack;
struct UMovieSceneParameterSection;
struct UMovieSceneParameterWithMaterialInsSection;
struct UMovieSceneParticleParameterTrack;
struct UMovieSceneParticleSection;
struct UMovieSceneParticleTrack;
struct UMovieScenePrimitiveMaterialSection;
struct UMovieScenePrimitiveMaterialTrack;
struct UMovieSceneSkeletalAnimationSection;
struct UMovieSceneSkeletalAnimationTrack;
struct UMovieSceneSlomoSection;
struct UMovieSceneSlomoTrack;
struct UMovieSceneSpawnSection;
struct UMovieSceneSpawnTrack;
struct UMovieSceneStringSection;
struct UMovieSceneStringTrack;
struct UMovieSceneTransformTrack;
struct UMovieSceneVectorSection;
struct UMovieSceneVectorTrack;
struct UMovieSceneVisibilityTrack;

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

// Object: ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x48 (Inherited: 0x18)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID AttachBindingID; // 0x18(0x18)
	struct FName AttachSocketName; // 0x30(0x8)
	struct FName AttachComponentName; // 0x38(0x8)
	EAttachmentRule AttachmentLocationRule; // 0x40(0x1)
	EAttachmentRule AttachmentRotationRule; // 0x41(0x1)
	EAttachmentRule AttachmentScaleRule; // 0x42(0x1)
	EDetachmentRule DetachmentLocationRule; // 0x43(0x1)
	EDetachmentRule DetachmentRotationRule; // 0x44(0x1)
	EDetachmentRule DetachmentScaleRule; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID; // 0x18(0x18)
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
	uint32_t Mask; // 0x0(0x4)
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
	struct FMovieSceneTransformMask Mask; // 0x644(0x4)
	uint8_t bUseQuaternionInterpolation : 1; // 0x648(0x1), Mask(0x1)
	uint8_t BitPad_0x648_1 : 7; // 0x648(0x1)
	uint8_t Pad_0x649[0x7]; // 0x649(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x668 (Inherited: 0x18)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x18(0x650)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xA8 (Inherited: 0x10)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x10(0x10)
	uint8_t Pad_0x20[0x18]; // 0x20(0x18)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x38(0x10)
	uint8_t Pad_0x48[0x60]; // 0x48(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID Object; // 0x0(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xE8 (Inherited: 0x18)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x28)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x40(0xA8)
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
	uint8_t bLooping : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
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
	struct UCameraShake* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	ECameraAnimPlaySpace PlaySpace; // 0xC(0x1)
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

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x70 (Inherited: 0x18)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x18(0x18)
	struct FTransform CutTransform; // 0x30(0x30)
	uint8_t bHasCutTransform : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0xF]; // 0x61(0xF)
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
// Size: 0x2C8 (Inherited: 0x40)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x40(0x280)
	EMovieSceneBlendType BlendType; // 0x2C0(0x1)
	uint8_t bCanBlend : 1; // 0x2C1(0x1), Mask(0x1)
	uint8_t BitPad_0x2C1_1 : 7; // 0x2C1(0x1)
	uint8_t Pad_0x2C2[0x2]; // 0x2C2(0x2)
	int32_t EaseOutDuration; // 0x2C4(0x4)
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
// Size: 0x90 (Inherited: 0x10)
struct FMovieSceneEventChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x90 (Inherited: 0x10)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
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

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size: 0x30 (Inherited: 0x18)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
{
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x18(0x10)
	uint8_t bFireEventsWhenForwards : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0x28(0x1), Mask(0x2)
	uint8_t BitPad_0x28_2 : 6; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size: 0x58 (Inherited: 0x30)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
{
	struct FMovieSceneEventPtrs EventToTrigger; // 0x30(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size: 0x50 (Inherited: 0x30)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
{
	struct TArray<struct FFrameNumber> EventTimes; // 0x30(0x10)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x40(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xC0 (Inherited: 0x30)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
{
	struct FMovieSceneEventSectionData EventData; // 0x30(0x90)
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

// Object: ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x30 (Inherited: 0x18)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
{
	ELevelVisibility Visibility; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FName> LevelNames; // 0x20(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x58 (Inherited: 0x18)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x18(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x28(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x38(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x48(0x10)
};

// Object: ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5A8 (Inherited: 0x0)
struct FTransformParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel translation[0x3]; // 0x8(0x1E0)
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

// Object: ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xA8 (Inherited: 0x0)
struct FScalarParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x60 (Inherited: 0x58)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct UMaterialParameterCollection* MPC; // 0x58(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x110 (Inherited: 0x40)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x40(0xD0)
};

// Object: ScriptStruct MovieSceneTracks.MaterialParameterNameAndIns
// Size: 0xA0 (Inherited: 0x0)
struct FMaterialParameterNameAndIns
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneMaterialChannel MaterialIns; // 0x8(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x60 (Inherited: 0x58)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	int32_t MaterialIndex; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x58 (Inherited: 0x58)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0xA0 (Inherited: 0xA0)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xB8 (Inherited: 0x18)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel ParticleKeys; // 0x18(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xF8 (Inherited: 0x18)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{
	int32_t MaterialIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x20(0xD0)
	uint8_t bForceSoftPtr : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size: 0x690 (Inherited: 0x40)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x40(0x650)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x690 (Inherited: 0x40)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x40(0x650)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2C8 (Inherited: 0x40)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x40(0x280)
	int32_t NumChannelsUsed; // 0x2C0(0x4)
	EMovieSceneBlendType BlendType; // 0x2C4(0x1)
	uint8_t Pad_0x2C5[0x3]; // 0x2C5(0x3)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xA8 (Inherited: 0x10)
struct FMovieSceneStringChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FString> Values; // 0x20(0x10)
	struct FString DefaultValue; // 0x30(0x10)
	uint8_t bHasDefaultValue : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x67]; // 0x41(0x67)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xE8 (Inherited: 0x40)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel StringCurve; // 0x40(0xA8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xE0 (Inherited: 0x40)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x40(0x98)
	EMovieSceneBlendType BlendType; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xE0 (Inherited: 0x40)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel EnumCurve; // 0x40(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xE0 (Inherited: 0x40)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel ByteCurve; // 0x40(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xE8 (Inherited: 0x40)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel FloatFunction; // 0x40(0xA0)
	EMovieSceneBlendType BlendType; // 0xE0(0x1)
	uint8_t bCanBlend : 1; // 0xE1(0x1), Mask(0x1)
	uint8_t BitPad_0xE1_1 : 7; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x2]; // 0xE2(0x2)
	int32_t EaseOutDuration; // 0xE4(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xD8 (Inherited: 0x40)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel BoolCurve; // 0x40(0x98)
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
	uint8_t bSkipAnimNotifiers : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t bForceCustomMode : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t BitPad_0xC9_1 : 7; // 0xC9(0x1)
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

// Object: ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xB8 (Inherited: 0x18)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel SlomoCurve; // 0x18(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0xB0 (Inherited: 0x18)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneBoolChannel Curve; // 0x18(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSubtitlesParams
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneSubtitlesParams
{
	struct FText SubtitleContent; // 0x0(0x18)
	uint8_t bNoticeAudio : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t Priority; // 0x1C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSubtitlesTemplate
// Size: 0x38 (Inherited: 0x18)
struct FMovieSceneSubtitlesTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneSubtitlesParams Params; // 0x18(0x20)
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
// Size: 0xD8 (Inherited: 0xD8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{
};

// Object: Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x78 (Inherited: 0x58)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack
{
	uint8_t bFireEventsWhenForwards : 1; // 0x56(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0x56(0x1), Mask(0x2)
	EFireEventsAtPosition EventPosition; // 0x57(0x1)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x58(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventTrack, "MovieSceneEventTrack")

};

// Object: Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneTransformOrigin : IInterface
{

	// Object: Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// Flags: [Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform BP_GetTransformOrigin();
	DEFINE_UE_CLASS_HELPERS(IMovieSceneTransformOrigin, "MovieSceneTransformOrigin")

};

// Object: Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x110 (Inherited: 0xE8)
struct UMovieScene3DConstraintSection : UMovieSceneSection
{
	struct FGuid ConstraintId; // 0xE8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xF8(0x18)


	// Object: Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1651150c
	// Params: [ Num(1) Size(0x18) ]
	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);

	// Object: Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x165114e0
	// Params: [ Num(1) Size(0x18) ]
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DConstraintSection, "MovieScene3DConstraintSection")

};

// Object: Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x128 (Inherited: 0x110)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection
{
	struct FName AttachSocketName; // 0x110(0x8)
	struct FName AttachComponentName; // 0x118(0x8)
	EAttachmentRule AttachmentLocationRule; // 0x120(0x1)
	EAttachmentRule AttachmentRotationRule; // 0x121(0x1)
	EAttachmentRule AttachmentScaleRule; // 0x122(0x1)
	EDetachmentRule DetachmentLocationRule; // 0x123(0x1)
	EDetachmentRule DetachmentRotationRule; // 0x124(0x1)
	EDetachmentRule DetachmentScaleRule; // 0x125(0x1)
	uint8_t Pad_0x126[0x2]; // 0x126(0x2)
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DAttachSection, "MovieScene3DAttachSection")

};

// Object: Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DConstraintTrack, "MovieScene3DConstraintTrack")

};

// Object: Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieScene3DAttachTrack, "MovieScene3DAttachTrack")

};

// Object: Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1B8 (Inherited: 0x110)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection
{
	struct FMovieSceneFloatChannel TimingCurve; // 0x110(0xA0)
	EMovieScene3DPathSection_Axis FrontAxisEnum; // 0x1B0(0x1)
	EMovieScene3DPathSection_Axis UpAxisEnum; // 0x1B1(0x1)
	uint8_t bFollow : 1; // 0x1B2(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0x1B2(0x1), Mask(0x2)
	uint8_t bForceUpright : 1; // 0x1B2(0x1), Mask(0x4)
	uint8_t BitPad_0x1B2_3 : 5; // 0x1B2(0x1)
	uint8_t Pad_0x1B3[0x5]; // 0x1B3(0x5)
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DPathSection, "MovieScene3DPathSection")

};

// Object: Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieScene3DPathTrack, "MovieScene3DPathTrack")

};

// Object: Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x738 (Inherited: 0xE8)
struct UMovieScene3DTransformSection : UMovieSceneSection
{
	struct FMovieSceneTransformMask TransformMask; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct FMovieSceneFloatChannel translation[0x3]; // 0xF0(0x1E0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2D0(0x1E0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4B0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x690(0xA0)
	uint8_t Pad_0x730[0x4]; // 0x730(0x4)
	uint8_t bUseQuaternionInterpolation : 1; // 0x734(0x1), Mask(0x1)
	uint8_t BitPad_0x734_1 : 7; // 0x734(0x1)
	uint8_t Pad_0x735[0x3]; // 0x735(0x3)
	DEFINE_UE_CLASS_HELPERS(UMovieScene3DTransformSection, "MovieScene3DTransformSection")

};

// Object: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x90 (Inherited: 0x58)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack
{
	struct UMovieSceneSection* SectionToKey; // 0x58(0x8)
	struct FName PropertyName; // 0x60(0x8)
	struct FString PropertyPath; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
	uint8_t bCanBlend : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t EaseOutDuration; // 0x8C(0x4)
	DEFINE_UE_CLASS_HELPERS(UMovieScenePropertyTrack, "MovieScenePropertyTrack")

};

// Object: Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieScene3DTransformTrack, "MovieScene3DTransformTrack")

};

// Object: Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x220 (Inherited: 0xE8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection
{
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xE8(0xA8)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x190(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x210(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneActorReferenceSection, "MovieSceneActorReferenceSection")

};

// Object: Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneActorReferenceTrack, "MovieSceneActorReferenceTrack")

};

// Object: Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x288 (Inherited: 0xE8)
struct UMovieSceneAudioSection : UMovieSceneSection
{
	struct USoundBase* Sound; // 0xE8(0x8)
	struct FFrameNumber StartFrameOffset; // 0xF0(0x4)
	float StartOffset; // 0xF4(0x4)
	float AudioStartTime; // 0xF8(0x4)
	float AudioDilationFactor; // 0xFC(0x4)
	float AudioVolume; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct FMovieSceneFloatChannel SoundVolume; // 0x108(0xA0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1A8(0xA0)
	uint8_t bSuppressSubtitles : 1; // 0x248(0x1), Mask(0x1)
	uint8_t BitPad_0x248_1 : 7; // 0x248(0x1)
	uint8_t bOverrideAttenuation : 1; // 0x249(0x1), Mask(0x1)
	uint8_t BitPad_0x249_1 : 7; // 0x249(0x1)
	uint8_t Pad_0x24A[0x6]; // 0x24A(0x6)
	struct USoundAttenuation* AttenuationSettings; // 0x250(0x8)
	struct FDelegate OnQueueSubtitles; // 0x258(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x268(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x278(0x10)


	// Object: Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16511814
	// Params: [ Num(1) Size(0x4) ]
	void SetStartOffset(struct FFrameNumber InStartOffset);

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16511774
	// Params: [ Num(1) Size(0x8) ]
	void SetSound(struct USoundBase* InSound);

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16511758
	// Params: [ Num(1) Size(0x4) ]
	struct FFrameNumber GetStartOffset();

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1651173c
	// Params: [ Num(1) Size(0x8) ]
	struct USoundBase* GetSound();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAudioSection, "MovieSceneAudioSection")

};

// Object: Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAudioTrack, "MovieSceneAudioTrack")

};

// Object: Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x188 (Inherited: 0xE8)
struct UMovieSceneBoolSection : UMovieSceneSection
{
	uint8_t DefaultValue : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct FMovieSceneBoolChannel BoolCurve; // 0xF0(0x98)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneBoolSection, "MovieSceneBoolSection")

};

// Object: Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneBoolTrack, "MovieSceneBoolTrack")

};

// Object: Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x188 (Inherited: 0xE8)
struct UMovieSceneByteSection : UMovieSceneSection
{
	struct FMovieSceneByteChannel ByteCurve; // 0xE8(0xA0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneByteSection, "MovieSceneByteSection")

};

// Object: Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack
{
	struct UEnum* Enum; // 0x90(0x8)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneByteTrack, "MovieSceneByteTrack")

};

// Object: Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x128 (Inherited: 0xE8)
struct UMovieSceneCameraAnimSection : UMovieSceneSection
{
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xE8(0x20)
	struct UCameraAnim* CameraAnim; // 0x108(0x8)
	float PlayRate; // 0x110(0x4)
	float PlayScale; // 0x114(0x4)
	float BlendInTime; // 0x118(0x4)
	float BlendOutTime; // 0x11C(0x4)
	uint8_t bLooping : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraAnimSection, "MovieSceneCameraAnimSection")

};

// Object: Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraAnimTrack, "MovieSceneCameraAnimTrack")

};

// Object: Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x110 (Inherited: 0xE8)
struct UMovieSceneCameraCutSection : UMovieSceneSection
{
	struct FGuid CameraGuid; // 0xE8(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xF8(0x18)


	// Object: Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16511a28
	// Params: [ Num(1) Size(0x18) ]
	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);

	// Object: Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x165119fc
	// Params: [ Num(1) Size(0x18) ]
	struct FMovieSceneObjectBindingID GetCameraBindingID();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraCutSection, "MovieSceneCameraCutSection")

};

// Object: Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraCutTrack, "MovieSceneCameraCutTrack")

};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x128 (Inherited: 0xE8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xE8(0x20)
	struct UCameraShake* ShakeClass; // 0x108(0x8)
	float PlayScale; // 0x110(0x4)
	ECameraAnimPlaySpace PlaySpace; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x118(0xC)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeSection, "MovieSceneCameraShakeSection")

};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCameraShakeTrack, "MovieSceneCameraShakeTrack")

};

// Object: Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x180 (Inherited: 0x158)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection
{
	struct FString ShotDisplayName; // 0x158(0x10)
	struct FText DisplayName; // 0x168(0x18)


	// Object: Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16515a60
	// Params: [ Num(1) Size(0x10) ]
	void SetShotDisplayName(struct FString InShotDisplayName);

	// Object: Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16515994
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetShotDisplayName();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCinematicShotSection, "MovieSceneCinematicShotSection")

};

// Object: Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x80 (Inherited: 0x80)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneCinematicShotTrack, "MovieSceneCinematicShotTrack")

};

// Object: Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x368 (Inherited: 0xE8)
struct UMovieSceneColorSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel RedCurve; // 0xE8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x188(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x228(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2C8(0xA0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneColorSection, "MovieSceneColorSection")

};

// Object: Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack
{
	uint8_t bIsSlateColor : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneColorTrack, "MovieSceneColorTrack")

};

// Object: Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x188 (Inherited: 0xE8)
struct UMovieSceneEnumSection : UMovieSceneSection
{
	struct FMovieSceneByteChannel EnumCurve; // 0xE8(0xA0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEnumSection, "MovieSceneEnumSection")

};

// Object: Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack
{
	struct UEnum* Enum; // 0x90(0x8)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEnumTrack, "MovieSceneEnumTrack")

};

// Object: Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneEulerTransformTrack, "MovieSceneEulerTransformTrack")

};

// Object: Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xE8 (Inherited: 0xE8)
struct UMovieSceneEventSectionBase : UMovieSceneSection
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSectionBase, "MovieSceneEventSectionBase")

};

// Object: Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x110 (Inherited: 0xE8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
{
	struct FMovieSceneEvent Event; // 0xE8(0x28)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventRepeaterSection, "MovieSceneEventRepeaterSection")

};

// Object: Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1F0 (Inherited: 0xE8)
struct UMovieSceneEventSection : UMovieSceneSection
{
	struct FNameCurve Events; // 0xE8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x160(0x90)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSection, "MovieSceneEventSection")

};

// Object: Class MovieSceneTracks.MovieSceneEventSubtitleSection
// Size: 0x108 (Inherited: 0xE8)
struct UMovieSceneEventSubtitleSection : UMovieSceneSection
{
	struct FText SubtitleContent; // 0xE8(0x18)
	uint8_t bNoticeAudio : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	int32_t Priority; // 0x104(0x4)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSubtitleSection, "MovieSceneEventSubtitleSection")

};

// Object: Class MovieSceneTracks.MovieSceneEventSubtitlesTrack
// Size: 0x78 (Inherited: 0x78)
struct UMovieSceneEventSubtitlesTrack : UMovieSceneEventTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventSubtitlesTrack, "MovieSceneEventSubtitlesTrack")

};

// Object: Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x178 (Inherited: 0xE8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
{
	struct FMovieSceneEventChannel EventChannel; // 0xE8(0x90)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneEventTriggerSection, "MovieSceneEventTriggerSection")

};

// Object: Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x188 (Inherited: 0xE8)
struct UMovieSceneFloatSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel FloatCurve; // 0xE8(0xA0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFloatSection, "MovieSceneFloatSection")

};

// Object: Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1A0 (Inherited: 0x188)
struct UMovieSceneFadeSection : UMovieSceneFloatSection
{
	struct FLinearColor FadeColor; // 0x188(0x10)
	uint8_t bFadeAudio : 1; // 0x198(0x1), Mask(0x1)
	uint8_t BitPad_0x198_1 : 7; // 0x198(0x1)
	uint8_t Pad_0x199[0x7]; // 0x199(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneFadeSection, "MovieSceneFadeSection")

};

// Object: Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneFloatTrack, "MovieSceneFloatTrack")

};

// Object: Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneFadeTrack, "MovieSceneFadeTrack")

};

// Object: Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x180 (Inherited: 0xE8)
struct UMovieSceneIntegerSection : UMovieSceneSection
{
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xE8(0x98)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneIntegerSection, "MovieSceneIntegerSection")

};

// Object: Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneIntegerTrack, "MovieSceneIntegerTrack")

};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x100 (Inherited: 0xE8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection
{
	ELevelVisibility Visibility; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct TArray<struct FName> LevelNames; // 0xF0(0x10)


	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16515f20
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(ELevelVisibility InVisibility);

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16515e14
	// Params: [ Num(1) Size(0x10) ]
	void SetLevelNames(const struct TArray<struct FName>& InLevelNames);

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16515de0
	// Params: [ Num(1) Size(0x1) ]
	ELevelVisibility GetVisibility();

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16515d58
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetLevelNames();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneLevelVisibilitySection, "MovieSceneLevelVisibilitySection")

};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneLevelVisibilityTrack, "MovieSceneLevelVisibilityTrack")

};

// Object: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMaterialTrack, "MovieSceneMaterialTrack")

};

// Object: Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x70 (Inherited: 0x68)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
{
	struct UMaterialParameterCollection* MPC; // 0x68(0x8)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMaterialParameterCollectionTrack, "MovieSceneMaterialParameterCollectionTrack")

};

// Object: Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x70 (Inherited: 0x68)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
{
	int32_t MaterialIndex; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneComponentMaterialTrack, "MovieSceneComponentMaterialTrack")

};

// Object: Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1B8 (Inherited: 0xE8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xE8(0xD0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneObjectPropertySection, "MovieSceneObjectPropertySection")

};

// Object: Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xA0 (Inherited: 0x90)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
{
	struct UObject* PropertyClass; // 0x90(0x8)
	uint8_t bForceSoftPtr : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneObjectPropertyTrack, "MovieSceneObjectPropertyTrack")

};

// Object: Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x128 (Inherited: 0xE8)
struct UMovieSceneParameterSection : UMovieSceneSection
{
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xE8(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0xF8(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x118(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParameterSection, "MovieSceneParameterSection")

};

// Object: Class MovieSceneTracks.MovieSceneParameterWithMaterialInsSection
// Size: 0x1C8 (Inherited: 0x128)
struct UMovieSceneParameterWithMaterialInsSection : UMovieSceneParameterSection
{
	struct FMaterialParameterNameAndIns MaterialParamNameAndIns; // 0x128(0xA0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParameterWithMaterialInsSection, "MovieSceneParameterWithMaterialInsSection")

};

// Object: Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParticleParameterTrack, "MovieSceneParticleParameterTrack")

};

// Object: Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x188 (Inherited: 0xE8)
struct UMovieSceneParticleSection : UMovieSceneSection
{
	struct FMovieSceneParticleChannel ParticleKeys; // 0xE8(0xA0)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParticleSection, "MovieSceneParticleSection")

};

// Object: Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneParticleTrack, "MovieSceneParticleTrack")

};

// Object: Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1B8 (Inherited: 0xE8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xE8(0xD0)
	DEFINE_UE_CLASS_HELPERS(UMovieScenePrimitiveMaterialSection, "MovieScenePrimitiveMaterialSection")

};

// Object: Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
{
	int32_t MaterialIndex; // 0x90(0x4)
	uint8_t bForceSoftPtr : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	DEFINE_UE_CLASS_HELPERS(UMovieScenePrimitiveMaterialTrack, "MovieScenePrimitiveMaterialTrack")

};

// Object: Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x1E8 (Inherited: 0xE8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection
{
	struct FMovieSceneSkeletalAnimationParams Params; // 0xE8(0xD8)
	struct UAnimSequence* AnimSequence; // 0x1C0(0x8)
	struct UAnimSequenceBase* Animation; // 0x1C8(0x8)
	float StartOffset; // 0x1D0(0x4)
	float EndOffset; // 0x1D4(0x4)
	float PlayRate; // 0x1D8(0x4)
	uint8_t bReverse : 1; // 0x1DC(0x1), Mask(0x1)
	uint8_t BitPad_0x1DC_1 : 7; // 0x1DC(0x1)
	uint8_t Pad_0x1DD[0x3]; // 0x1DD(0x3)
	struct FName SlotName; // 0x1E0(0x8)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSkeletalAnimationSection, "MovieSceneSkeletalAnimationSection")

};

// Object: Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
	uint8_t bUseLegacySectionIndexBlend : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSkeletalAnimationTrack, "MovieSceneSkeletalAnimationTrack")

};

// Object: Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x188 (Inherited: 0x188)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneSlomoSection, "MovieSceneSlomoSection")

};

// Object: Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneSlomoTrack, "MovieSceneSlomoTrack")

};

// Object: Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x188 (Inherited: 0x188)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneSpawnSection, "MovieSceneSpawnSection")

};

// Object: Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x78 (Inherited: 0x58)
struct UMovieSceneSpawnTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	struct FGuid ObjectGuid; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneSpawnTrack, "MovieSceneSpawnTrack")

};

// Object: Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x190 (Inherited: 0xE8)
struct UMovieSceneStringSection : UMovieSceneSection
{
	struct FMovieSceneStringChannel StringCurve; // 0xE8(0xA8)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneStringSection, "MovieSceneStringSection")

};

// Object: Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneStringTrack, "MovieSceneStringTrack")

};

// Object: Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneTransformTrack, "MovieSceneTransformTrack")

};

// Object: Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x370 (Inherited: 0xE8)
struct UMovieSceneVectorSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xE8(0x280)
	int32_t ChannelsUsed; // 0x368(0x4)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneVectorSection, "MovieSceneVectorSection")

};

// Object: Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack
{
	int32_t NumChannelsUsed; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneVectorTrack, "MovieSceneVectorTrack")

};

// Object: Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneVisibilityTrack, "MovieSceneVisibilityTrack")

};

} // namespace SDK
