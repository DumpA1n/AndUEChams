#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include "NiagaraCore.hpp"
#include "NiagaraShader.hpp"

namespace SDK
{

// Package: Niagara
// Enums: 58
// Structs: 100
// Classes: 98

struct AActor;
enum class EAttachmentRule : uint8_t;
struct FNiagaraDataInterfaceGPUParamInfo;
struct FSimulationStageMetaData;
struct UChildActorComponent;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UMovieSceneSection;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundAttenuation;
struct USoundBase;
struct USoundConcurrency;
struct USoundSubmix;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture;
struct UTexture2D;
struct UTexture2DArray;
struct UTextureRenderTarget;
struct UTextureRenderTarget2D;
struct UTextureRenderTarget2DArray;
struct UTextureRenderTargetVolume;
struct UVectorField;
struct UVolumeTexture;
struct FNiagaraTypeDefinitionHandle;
struct FNiagaraVariableBase;
struct FNiagaraVariable;
struct FMovieSceneNiagaraParameterSectionTemplate;
struct FMovieSceneNiagaraBoolParameterSectionTemplate;
struct FMovieSceneNiagaraColorParameterSectionTemplate;
struct FMovieSceneNiagaraFloatParameterSectionTemplate;
struct FMovieSceneNiagaraIntegerParameterSectionTemplate;
struct FMovieSceneNiagaraSystemTrackImplementation;
struct FMovieSceneNiagaraSystemTrackTemplate;
struct FMovieSceneNiagaraVectorParameterSectionTemplate;
struct FNiagaraRandInfo;
struct FNiagaraUserParameterBinding;
struct FNiagaraScriptVariableBinding;
struct FNiagaraVariableDataInterfaceBinding;
struct FNiagaraMaterialAttributeBinding;
struct FNiagaraVariableAttributeBinding;
struct FNiagaraVariableInfo;
struct FNiagaraSystemUpdateContext;
struct FVMExternalFunctionBindingInfo;
struct FVMFunctionSpecifier;
struct FNiagaraStatScope;
struct FNiagaraTypeDefinition;
struct FNiagaraScriptDataInterfaceCompileInfo;
struct FNiagaraScriptDataInterfaceInfo;
struct FNiagaraFunctionSignature;
struct FNiagaraScriptDataUsageInfo;
struct FNiagaraDataSetID;
struct FNiagaraDataSetProperties;
struct FNiagaraMaterialOverride;
struct FNCPool;
struct FNCPoolElement;
struct FNiagaraComponentPropertyBinding;
struct FNiagaraEmitterNameSettingsRef;
struct FBasicParticleData;
struct FMeshTriCoordinate;
struct FNDIStaticMeshSectionFilter;
struct FNiagaraDataSetCompiledData;
struct FNiagaraTypeLayoutInfo;
struct FNiagaraVariableLayoutInfo;
struct FNiagaraGraphViewSettings;
struct FNiagaraEmitterScalabilityOverrides;
struct FNiagaraPlatformSet;
struct FNiagaraEmitterScalabilitySettings;
struct FNiagaraPlatformSetCVarCondition;
struct FNiagaraDeviceProfileStateEntry;
struct FNiagaraEmitterScalabilityOverride;
struct FNiagaraEmitterScalabilitySettingsArray;
struct FNiagaraSystemScalabilityOverrides;
struct FNiagaraSystemScalabilitySettings;
struct FNiagaraSystemScalabilityOverride;
struct FNiagaraSystemScalabilitySettingsArray;
struct FNiagaraDetailsLevelScaleOverrides;
struct FNiagaraEmitterScriptProperties;
struct FNiagaraEventGeneratorProperties;
struct FNiagaraEventReceiverProperties;
struct FNiagaraEventScriptProperties;
struct FNiagaraEmitterHandle;
struct FNiagaraCollisionEventPayload;
struct FNiagaraMeshMaterialOverride;
struct FNiagaraParameters;
struct FNiagaraParameterStore;
struct FNiagaraVariableWithOffset;
struct FNiagaraBoundParameter;
struct FNiagaraPlatformSetConflictInfo;
struct FNiagaraPlatformSetConflictEntry;
struct FNiagaraRibbonUVSettings;
struct FNiagaraScalabilityManager;
struct FNiagaraVMExecutableData;
struct FNiagaraVMExecutableDataId;
struct FNiagaraModuleDependency;
struct FNiagaraScriptInstanceParameterStore;
struct FNiagaraScriptExecutionParameterStore;
struct FNiagaraScriptExecutionPaddingInfo;
struct FNiagaraScriptHighlight;
struct FNiagaraSystemCompileRequest;
struct FEmitterCompiledScriptPair;
struct FNiagaraParameterDataSetBindingCollection;
struct FNiagaraSystemCompiledData;
struct FNiagaraParameterDataSetBinding;
struct FNiagaraEmitterCompiledData;
struct FNiagaraInputConditionMetadata;
struct FNiagaraVariableMetaData;
struct FNiagaraParameterScopeInfo;
struct FNiagaraCompileHashVisitorDebugInfo;
struct FNiagaraID;
struct FNiagaraSpawnInfo;
struct FNiagaraMatrix;
struct FNiagaraParameterMap;
struct FNiagaraNumeric;
struct FNiagaraHalfVector4;
struct FNiagaraHalfVector3;
struct FNiagaraHalfVector2;
struct FNiagaraHalf;
struct FNiagaraBool;
struct FNiagaraInt32;
struct FNiagaraFloat;
struct FNiagaraUserRedirectionParameterStore;
struct FNiagaraVariant;
struct FNiagaraWorldManagerTickFunction;
struct UMovieSceneNiagaraTrack;
struct UMovieSceneNiagaraParameterTrack;
struct UMovieSceneNiagaraBoolParameterTrack;
struct UMovieSceneNiagaraColorParameterTrack;
struct UMovieSceneNiagaraFloatParameterTrack;
struct UMovieSceneNiagaraIntegerParameterTrack;
struct UMovieSceneNiagaraSystemSpawnSection;
struct UMovieSceneNiagaraSystemTrack;
struct UMovieSceneNiagaraVectorParameterTrack;
struct ANiagaraActor;
struct UNiagaraComponent;
struct UNiagaraComponentPool;
struct UNiagaraRendererProperties;
struct UNiagaraComponentRendererProperties;
struct UNiagaraComponentSettings;
struct UNiagaraConvertInPlaceUtilityBase;
struct UNiagaraDataInterface;
struct UNiagaraDataInterface2DArrayTexture;
struct UNiagaraDataInterfaceArray;
struct UNiagaraDataInterfaceArrayFloat;
struct UNiagaraDataInterfaceArrayFloat2;
struct UNiagaraDataInterfaceArrayFloat3;
struct UNiagaraDataInterfaceArrayFloat4;
struct UNiagaraDataInterfaceArrayColor;
struct UNiagaraDataInterfaceArrayQuat;
struct UNiagaraDataInterfaceArrayFunctionLibrary;
struct UNiagaraDataInterfaceArrayInt32;
struct UNiagaraDataInterfaceArrayBool;
struct UNiagaraDataInterfaceAudioSubmix;
struct UNiagaraDataInterfaceAudioOscilloscope;
struct UNiagaraDataInterfaceAudioPlayer;
struct UNiagaraDataInterfaceAudioSpectrum;
struct UNiagaraDataInterfaceCamera;
struct UNiagaraDataInterfaceCollisionQuery;
struct UNiagaraDataInterfaceCurveBase;
struct UNiagaraDataInterfaceColorCurve;
struct UNiagaraDataInterfaceCurlNoise;
struct UNiagaraDataInterfaceCurve;
struct INiagaraParticleCallbackHandler;
struct UNiagaraDataInterfaceExport;
struct UNiagaraDataInterfaceGBuffer;
struct UNiagaraDataInterfaceRWBase;
struct UNiagaraDataInterfaceGrid2D;
struct UNiagaraDataInterfaceGrid2DCollection;
struct UNiagaraDataInterfaceGrid2DCollectionReader;
struct UNiagaraDataInterfaceGrid3D;
struct UNiagaraDataInterfaceGrid3DCollection;
struct UNiagaraDataInterfaceLandscape;
struct UNiagaraDataInterfaceNeighborGrid3D;
struct UNiagaraDataInterfaceOcclusion;
struct UNiagaraDataInterfaceParticleRead;
struct UNiagaraDataInterfacePlatformSet;
struct UNiagaraDataInterfaceRenderTarget2D;
struct UNiagaraDataInterfaceRenderTarget2DArray;
struct UNiagaraDataInterfaceRenderTargetVolume;
struct UNiagaraDataInterfaceSimpleCounter;
struct UNiagaraDataInterfaceSkeletalMesh;
struct UNiagaraDataInterfaceSpline;
struct UNiagaraDataInterfaceStaticMesh;
struct UNiagaraDataInterfaceTexture;
struct UNiagaraDataInterfaceVector2DCurve;
struct UNiagaraDataInterfaceVector4Curve;
struct UNiagaraDataInterfaceVectorCurve;
struct UNiagaraDataInterfaceVectorField;
struct UNiagaraDataInterfaceVolumeTexture;
struct UNiagaraEditorDataBase;
struct UNiagaraSignificanceHandler;
struct UNiagaraSignificanceHandlerDistance;
struct UNiagaraSignificanceHandlerAge;
struct UNiagaraEffectType;
struct UNiagaraEmitter;
struct UNiagaraEventReceiverEmitterAction;
struct UNiagaraEventReceiverEmitterAction_SpawnParticles;
struct UNiagaraFunctionLibrary;
struct UNiagaraLightRendererProperties;
struct UNiagaraMeshRendererProperties;
struct UNiagaraMessageDataBase;
struct UNiagaraParameterCollectionInstance;
struct UNiagaraParameterCollection;
struct UNiagaraPrecompileContainer;
struct ANiagaraPreviewBase;
struct UNiagaraPreviewAxis;
struct UNiagaraPreviewAxis_InterpParamBase;
struct UNiagaraPreviewAxis_InterpParamInt32;
struct UNiagaraPreviewAxis_InterpParamFloat;
struct UNiagaraPreviewAxis_InterpParamVector2D;
struct UNiagaraPreviewAxis_InterpParamVector;
struct UNiagaraPreviewAxis_InterpParamVector4;
struct UNiagaraPreviewAxis_InterpParamLinearColor;
struct ANiagaraPreviewGrid;
struct UNiagaraRibbonRendererProperties;
struct UNiagaraScript;
struct UNiagaraScriptSourceBase;
struct UNiagaraSettings;
struct UNiagaraSimulationStageBase;
struct UNiagaraSimulationStageGeneric;
struct UNiagaraSpriteRendererProperties;
struct UNiagaraSystem;

// Object: Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

// Object: Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6
};

// Object: Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2
};

// Object: Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Object: Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};

// Object: Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};

// Object: Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13
};

// Object: Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Object: Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Object: Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Object: Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2
};

// Object: Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Object: Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3
};

// Object: Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4
};

// Object: Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5
};

// Object: Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2
};

// Object: Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3
};

// Object: Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4
};

// Object: Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3
};

// Object: Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4
};

// Object: Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};

// Object: Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4
};

// Object: Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2
};

// Object: Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};

// Object: Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4
};

// Object: Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4
};

// Object: Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};

// Object: Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	ENiagaraRibbonUVDistributionMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};

// Object: Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Object: Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Object: Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Object: Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3
};

// Object: Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
	Input = 0,
	Attributes = 1,
	Output = 2,
	Local = 3,
	User = 4,
	Engine = 5,
	Owner = 6,
	System = 7,
	Emitter = 8,
	Particles = 9,
	ScriptTransient = 10,
	StaticSwitch = 11,
	None = 12,
	Num = 13,
	ENiagaraParameterPanelCategory_MAX = 14
};

// Object: Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
	Input = 0,
	Output = 1,
	Local = 2,
	InputOutput = 3,
	InitialValueInput = 4,
	None = 5,
	Num = 6,
	ENiagaraScriptParameterUsage_MAX = 7
};

// Object: Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
	Input = 0,
	User = 1,
	Engine = 2,
	Owner = 3,
	System = 4,
	Emitter = 5,
	Particles = 6,
	ScriptPersistent = 7,
	ScriptTransient = 8,
	Local = 9,
	Custom = 10,
	DISPLAY_ONLY_StaticSwitch = 11,
	Output = 12,
	None = 13,
	Num = 14,
	ENiagaraParameterScope_MAX = 15
};

// Object: Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Object: Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Object: Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4
};

// Object: ScriptStruct Niagara.NiagaraTypeDefinitionHandle
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraTypeDefinitionHandle
{
	int32_t RegisteredTypeIndex; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraVariableBase
// Size: 0xC (Inherited: 0x0)
struct FNiagaraVariableBase
{
	struct FName Name; // 0x0(0x8)
	struct FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8(0x4)
};

// Object: ScriptStruct Niagara.NiagaraVariable
// Size: 0x20 (Inherited: 0xC)
struct FNiagaraVariable : FNiagaraVariableBase
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<uint8_t> VarData; // 0x10(0x10)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x38 (Inherited: 0x18)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct FNiagaraVariable Parameter; // 0x18(0x20)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0xC8 (Inherited: 0x38)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel BoolChannel; // 0x38(0x90)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x2B8 (Inherited: 0x38)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel RedChannel; // 0x38(0xA0)
	struct FMovieSceneFloatChannel GreenChannel; // 0xD8(0xA0)
	struct FMovieSceneFloatChannel BlueChannel; // 0x178(0xA0)
	struct FMovieSceneFloatChannel AlphaChannel; // 0x218(0xA0)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0xD8 (Inherited: 0x38)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel FloatChannel; // 0x38(0xA0)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0xC8 (Inherited: 0x38)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerChannel; // 0x38(0x90)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28 (Inherited: 0x10)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{
	struct FFrameNumber SpawnSectionStartFrame; // 0xC(0x4)
	struct FFrameNumber SpawnSectionEndFrame; // 0x10(0x4)
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x14(0x4)
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x18(0x4)
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x1C(0x4)
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x20(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x2C0 (Inherited: 0x38)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel VectorChannels[0x4]; // 0x38(0x280)
	int32_t ChannelsUsed; // 0x2B8(0x4)
	uint8_t Pad_0x2BC[0x4]; // 0x2BC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraRandInfo
// Size: 0xC (Inherited: 0x0)
struct FNiagaraRandInfo
{
	int32_t Seed1; // 0x0(0x4)
	int32_t Seed2; // 0x4(0x4)
	int32_t Seed3; // 0x8(0x4)
};

// Object: ScriptStruct Niagara.NiagaraUserParameterBinding
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable Parameter; // 0x0(0x20)
};

// Object: ScriptStruct Niagara.NiagaraScriptVariableBinding
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraScriptVariableBinding
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable BoundVariable; // 0x0(0x20)
};

// Object: ScriptStruct Niagara.NiagaraMaterialAttributeBinding
// Size: 0x2C (Inherited: 0x0)
struct FNiagaraMaterialAttributeBinding
{
	struct FName MaterialParameterName; // 0x0(0x8)
	struct FNiagaraVariableBase NiagaraVariable; // 0x8(0xC)
	struct FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14(0xC)
	struct FNiagaraVariableBase NiagaraChildVariable; // 0x20(0xC)
};

// Object: ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size: 0x58 (Inherited: 0x0)
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase ParamMapVariable; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraVariable DataSetVariable; // 0x10(0x20)
	struct FNiagaraVariable RootVariable; // 0x30(0x20)
	uint8_t BindingSourceMode; // 0x50(0x1)
	uint8_t bBindingExistsOnSource : 1; // 0x51(0x1), Mask(0x1)
	uint8_t bIsCachedParticleValue : 1; // 0x51(0x1), Mask(0x2)
	uint8_t BitPad_0x51_2 : 6; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
};

// Object: ScriptStruct Niagara.NiagaraVariableInfo
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable Variable; // 0x0(0x20)
	struct FText Definition; // 0x20(0x18)
	struct UNiagaraDataInterface* DataInterface; // 0x38(0x8)
};

// Object: ScriptStruct Niagara.NiagaraSystemUpdateContext
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraSystemUpdateContext
{
	struct TArray<struct UNiagaraComponent*> ComponentsToReset; // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size: 0x38 (Inherited: 0x0)
struct FVMExternalFunctionBindingInfo
{
	struct FName Name; // 0x0(0x8)
	struct FName OwnerName; // 0x8(0x8)
	struct TArray<bool> InputParamLocations; // 0x10(0x10)
	int32_t NumOutputs; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x28(0x10)
};

// Object: ScriptStruct Niagara.VMFunctionSpecifier
// Size: 0x10 (Inherited: 0x0)
struct FVMFunctionSpecifier
{
	struct FName Key; // 0x0(0x8)
	struct FName Value; // 0x8(0x8)
};

// Object: ScriptStruct Niagara.NiagaraStatScope
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraStatScope
{
	struct FName FullName; // 0x0(0x8)
	struct FName FriendlyName; // 0x8(0x8)
};

// Object: ScriptStruct Niagara.NiagaraTypeDefinition
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraTypeDefinition
{
	struct UObject* ClassStructOrEnum; // 0x0(0x8)
	uint16_t UnderlyingType; // 0x8(0x2)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x38 (Inherited: 0x0)
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName Name; // 0x0(0x8)
	int32_t UserPtrIdx; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraTypeDefinition Type; // 0x10(0x10)
	struct FName RegisteredParameterMapRead; // 0x20(0x8)
	struct FName RegisteredParameterMapWrite; // 0x28(0x8)
	bool bIsPlaceholder; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x38 (Inherited: 0x0)
struct FNiagaraScriptDataInterfaceInfo
{
	struct UNiagaraDataInterface* DataInterface; // 0x0(0x8)
	struct FName Name; // 0x8(0x8)
	int32_t UserPtrIdx; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FNiagaraTypeDefinition Type; // 0x18(0x10)
	struct FName RegisteredParameterMapRead; // 0x28(0x8)
	struct FName RegisteredParameterMapWrite; // 0x30(0x8)
};

// Object: ScriptStruct Niagara.NiagaraFunctionSignature
// Size: 0x90 (Inherited: 0x0)
struct FNiagaraFunctionSignature
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FNiagaraVariable> Inputs; // 0x8(0x10)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18(0x10)
	struct FName OwnerName; // 0x28(0x8)
	uint8_t bRequiresContext : 1; // 0x30(0x1), Mask(0x1)
	uint8_t bRequiresExecPin : 1; // 0x30(0x1), Mask(0x2)
	uint8_t bMemberFunction : 1; // 0x30(0x1), Mask(0x4)
	uint8_t bExperimental : 1; // 0x30(0x1), Mask(0x8)
	uint8_t bSupportsCPU : 1; // 0x30(0x1), Mask(0x10)
	uint8_t bSupportsGPU : 1; // 0x30(0x1), Mask(0x20)
	uint8_t bWriteFunction : 1; // 0x30(0x1), Mask(0x40)
	uint8_t bSoftDeprecatedFunction : 1; // 0x30(0x1), Mask(0x80)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t ModuleUsageBitmask; // 0x34(0x4)
	int32_t ContextStageMinIndex; // 0x38(0x4)
	int32_t ContextStageMaxIndex; // 0x3C(0x4)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x40(0x50)
};

// Object: ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraScriptDataUsageInfo
{
	bool bReadsAttributeData; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraDataSetID
// Size: 0xC (Inherited: 0x0)
struct FNiagaraDataSetID
{
	struct FName Name; // 0x0(0x8)
	ENiagaraDataSetType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Niagara.NiagaraDataSetProperties
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID ID; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FNiagaraVariable> Variables; // 0x10(0x10)
};

// Object: ScriptStruct Niagara.NiagaraMaterialOverride
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraMaterialOverride
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	uint32_t MaterialSubIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UNiagaraRendererProperties* EmitterRendererProperty; // 0x10(0x8)
};

// Object: ScriptStruct Niagara.NCPool
// Size: 0x38 (Inherited: 0x0)
struct FNCPool
{
	struct TArray<struct FNCPoolElement> FreeElements; // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Manual; // 0x20(0x10)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct Niagara.NCPoolElement
// Size: 0x10 (Inherited: 0x0)
struct FNCPoolElement
{
	struct UNiagaraComponent* Component; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Niagara.NiagaraComponentPropertyBinding
// Size: 0xA0 (Inherited: 0x0)
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding AttributeBinding; // 0x0(0x58)
	struct FName PropertyName; // 0x58(0x8)
	struct FNiagaraTypeDefinition PropertyType; // 0x60(0x10)
	struct FName MetadataSetterName; // 0x70(0x8)
	struct FNiagaraVariable WritableValue; // 0x78(0x20)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
};

// Object: ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraEmitterNameSettingsRef
{
	struct FName SystemName; // 0x0(0x8)
	struct FString EmitterName; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.BasicParticleData
// Size: 0x1C (Inherited: 0x0)
struct FBasicParticleData
{
	struct FVector position; // 0x0(0xC)
	float Size; // 0xC(0x4)
	struct FVector Velocity; // 0x10(0xC)
};

// Object: ScriptStruct Niagara.MeshTriCoordinate
// Size: 0x10 (Inherited: 0x0)
struct FMeshTriCoordinate
{
	int32_t Tri; // 0x0(0x4)
	struct FVector BaryCoord; // 0x4(0xC)
};

// Object: ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size: 0x10 (Inherited: 0x0)
struct FNDIStaticMeshSectionFilter
{
	struct TArray<int32_t> AllowedMaterialSlots; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraDataSetCompiledData
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraDataSetCompiledData
{
	struct TArray<struct FNiagaraVariable> Variables; // 0x0(0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10(0x10)
	struct FNiagaraDataSetID ID; // 0x20(0xC)
	uint32_t TotalFloatComponents; // 0x2C(0x4)
	uint32_t TotalInt32Components; // 0x30(0x4)
	uint32_t TotalHalfComponents; // 0x34(0x4)
	uint8_t bRequiresPersistentIDs : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	ENiagaraSimTarget SimTarget; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct Niagara.NiagaraTypeLayoutInfo
// Size: 0x60 (Inherited: 0x0)
struct FNiagaraTypeLayoutInfo
{
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x0(0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10(0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20(0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30(0x10)
	struct TArray<uint32_t> HalfComponentByteOffsets; // 0x40(0x10)
	struct TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50(0x10)
};

// Object: ScriptStruct Niagara.NiagaraVariableLayoutInfo
// Size: 0x70 (Inherited: 0x0)
struct FNiagaraVariableLayoutInfo
{
	uint32_t FloatComponentStart; // 0x0(0x4)
	uint32_t Int32ComponentStart; // 0x4(0x4)
	uint32_t HalfComponentStart; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x10(0x60)
};

// Object: ScriptStruct Niagara.NiagaraGraphViewSettings
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraGraphViewSettings
{
	struct FVector2D Location; // 0x0(0x8)
	float Zoom; // 0x8(0x4)
	bool bIsValid; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraEmitterScalabilityOverrides
{
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSet
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraPlatformSet
{
	int32_t QualityLevelMask; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8(0x10)
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// Size: 0x38 (Inherited: 0x0)
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms; // 0x0(0x30)
	uint8_t bScaleSpawnCount : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float SpawnCountScale; // 0x34(0x4)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraPlatformSetCVarCondition
{
	struct FName CVarName; // 0x0(0x8)
	bool Value; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t MinInt; // 0xC(0x4)
	int32_t MaxInt; // 0x10(0x4)
	float MinFloat; // 0x14(0x4)
	float MaxFloat; // 0x18(0x4)
	uint8_t bUseMinInt : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t bUseMaxInt : 1; // 0x1C(0x1), Mask(0x2)
	uint8_t bUseMinFloat : 1; // 0x1C(0x1), Mask(0x4)
	uint8_t bUseMaxFloat : 1; // 0x1C(0x1), Mask(0x8)
	uint8_t BitPad_0x1C_4 : 4; // 0x1C(0x1)
	uint8_t Pad_0x1D[0xB]; // 0x1D(0xB)
};

// Object: ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraDeviceProfileStateEntry
{
	struct FName ProfileName; // 0x0(0x8)
	uint32_t QualityLevelMask; // 0x8(0x4)
	uint32_t SetQualityLevelMask; // 0xC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size: 0x40 (Inherited: 0x38)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{
	uint8_t bOverrideSpawnCountScale : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraEmitterScalabilitySettingsArray
{
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraSystemScalabilityOverrides
{
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms; // 0x0(0x30)
	uint8_t bCullByDistance : 1; // 0x30(0x1), Mask(0x1)
	uint8_t bCullMaxInstanceCount : 1; // 0x30(0x1), Mask(0x2)
	uint8_t bCullPerSystemMaxInstanceCount : 1; // 0x30(0x1), Mask(0x4)
	uint8_t bCullByMaxTimeWithoutRender : 1; // 0x30(0x1), Mask(0x8)
	uint8_t BitPad_0x30_4 : 4; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float MaxDistance; // 0x34(0x4)
	int32_t MaxInstances; // 0x38(0x4)
	int32_t MaxSystemInstances; // 0x3C(0x4)
	float MaxTimeWithoutRender; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size: 0x48 (Inherited: 0x48)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{
	uint8_t bOverrideDistanceSettings : 1; // 0x44(0x1), Mask(0x1)
	uint8_t bOverrideInstanceCountSettings : 1; // 0x44(0x1), Mask(0x2)
	uint8_t bOverridePerSystemInstanceCountSettings : 1; // 0x44(0x1), Mask(0x4)
	uint8_t bOverrideTimeSinceRendererSettings : 1; // 0x44(0x1), Mask(0x8)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraSystemScalabilitySettingsArray
{
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// Size: 0x14 (Inherited: 0x0)
struct FNiagaraDetailsLevelScaleOverrides
{
	float Low; // 0x0(0x4)
	float Medium; // 0x4(0x4)
	float High; // 0x8(0x4)
	float Epic; // 0xC(0x4)
	float Cine; // 0x10(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraEmitterScriptProperties
{
	struct UNiagaraScript* Script; // 0x0(0x8)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x8(0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18(0x10)
};

// Object: ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size: 0x50 (Inherited: 0x0)
struct FNiagaraEventGeneratorProperties
{
	int32_t MaxEventsPerFrame; // 0x0(0x4)
	struct FName ID; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10(0x40)
};

// Object: ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraEventReceiverProperties
{
	struct FName Name; // 0x0(0x8)
	struct FName SourceEventGenerator; // 0x8(0x8)
	struct FName SourceEmitter; // 0x10(0x8)
};

// Object: ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x58 (Inherited: 0x28)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{
	EScriptExecutionMode ExecutionMode; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	uint32_t SpawnNumber; // 0x2C(0x4)
	uint32_t MaxEventsPerFrame; // 0x30(0x4)
	struct FGuid SourceEmitterID; // 0x34(0x10)
	struct FName SourceEventName; // 0x44(0x8)
	bool bRandomSpawnNumber; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	uint32_t MinSpawnNumber; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterHandle
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraEmitterHandle
{
	struct FGuid ID; // 0x0(0x10)
	struct FName IdName; // 0x10(0x8)
	bool bIsEnabled; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName Name; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UNiagaraEmitter* Instance; // 0x28(0x8)
};

// Object: ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size: 0x2C (Inherited: 0x0)
struct FNiagaraCollisionEventPayload
{
	struct FVector CollisionPos; // 0x0(0xC)
	struct FVector CollisionNormal; // 0xC(0xC)
	struct FVector CollisionVelocity; // 0x18(0xC)
	int32_t ParticleIndex; // 0x24(0x4)
	int32_t PhysicalMaterialIndex; // 0x28(0x4)
};

// Object: ScriptStruct Niagara.NiagaraMeshMaterialOverride
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraMeshMaterialOverride
{
	struct UMaterialInterface* ExplicitMat; // 0x0(0x8)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x8(0x20)
};

// Object: ScriptStruct Niagara.NiagaraParameters
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraParameters
{
	struct TArray<struct FNiagaraVariable> Parameters; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterStore
// Size: 0x78 (Inherited: 0x0)
struct FNiagaraParameterStore
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* Owner; // 0x8(0x8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10(0x10)
	struct TArray<uint8_t> ParameterData; // 0x20(0x10)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; // 0x30(0x10)
	struct TArray<struct UObject*> UObjects; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)
};

// Object: ScriptStruct Niagara.NiagaraVariableWithOffset
// Size: 0x10 (Inherited: 0xC)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{
	int32_t Offset; // 0xC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraBoundParameter
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable Parameter; // 0x0(0x20)
	int32_t SrcOffset; // 0x20(0x4)
	int32_t DestOffset; // 0x24(0x4)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraPlatformSetConflictInfo
{
	int32_t SetAIndex; // 0x0(0x4)
	int32_t SetBIndex; // 0x4(0x4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// Size: 0xC (Inherited: 0x0)
struct FNiagaraPlatformSetConflictEntry
{
	struct FName ProfileName; // 0x0(0x8)
	int32_t QualityLevelMask; // 0x8(0x4)
};

// Object: ScriptStruct Niagara.NiagaraRibbonUVSettings
// Size: 0x24 (Inherited: 0x0)
struct FNiagaraRibbonUVSettings
{
	ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x0(0x4)
	ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x4(0x4)
	ENiagaraRibbonUVDistributionMode DistributionMode; // 0x8(0x4)
	float TilingLength; // 0xC(0x4)
	struct FVector2D Offset; // 0x10(0x8)
	struct FVector2D Scale; // 0x18(0x8)
	bool bEnablePerParticleUOverride; // 0x20(0x1)
	bool bEnablePerParticleVRangeOverride; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
};

// Object: ScriptStruct Niagara.NiagaraScalabilityManager
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraScalabilityManager
{
	struct UNiagaraEffectType* EffectType; // 0x0(0x8)
	struct TArray<struct UNiagaraComponent*> ManagedComponents; // 0x8(0x10)
	uint8_t Pad_0x18[0x28]; // 0x18(0x28)
};

// Object: ScriptStruct Niagara.NiagaraVMExecutableData
// Size: 0xE0 (Inherited: 0x0)
struct FNiagaraVMExecutableData
{
	struct TArray<uint8_t> ByteCode; // 0x0(0x10)
	struct TArray<uint8_t> OptimizedByteCode; // 0x10(0x10)
	int32_t NumTempRegisters; // 0x20(0x4)
	int32_t NumUserPtrs; // 0x24(0x4)
	struct TArray<uint8_t> ScriptLiterals; // 0x28(0x10)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x38(0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0x50(0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0x60(0x10)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0x80(0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0x90(0x10)
	struct TArray<struct FNiagaraStatScope> StatScopes; // 0xA0(0x10)
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0xB0(0x10)
	ENiagaraScriptCompileStatus LastCompileStatus; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0xC8(0x10)
	uint8_t bReadsSignificanceIndex : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
};

// Object: ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraVMExecutableDataId
{
	struct FGuid CompilerVersionID; // 0x0(0x10)
	ENiagaraScriptUsage ScriptUsageType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FGuid ScriptUsageTypeID; // 0x14(0x10)
	uint8_t bUsesRapidIterationParams : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bInterpolatedSpawn : 1; // 0x24(0x1), Mask(0x2)
	uint8_t bRequiresPersistentIDs : 1; // 0x24(0x1), Mask(0x4)
	uint8_t BitPad_0x24_3 : 5; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FGuid BaseScriptID; // 0x28(0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38(0x10)
};

// Object: ScriptStruct Niagara.NiagaraModuleDependency
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraModuleDependency
{
	struct FName ID; // 0x0(0x8)
	ENiagaraModuleDependencyType Type; // 0x8(0x1)
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FText Description; // 0x10(0x18)
};

// Object: ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// Size: 0x88 (Inherited: 0x78)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

// Object: ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0x98 (Inherited: 0x78)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{
	int32_t ParameterSize; // 0x78(0x4)
	uint32_t PaddedParameterSize; // 0x7C(0x4)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80(0x10)
	uint8_t bInitialized : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t SrcOffset; // 0x0(0x2)
	uint16_t DestOffset; // 0x2(0x2)
	uint16_t SrcSize; // 0x4(0x2)
	uint16_t DestSize; // 0x6(0x2)
};

// Object: ScriptStruct Niagara.NiagaraScriptHighlight
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraScriptHighlight
{
	struct FLinearColor Color; // 0x0(0x10)
	struct FText DisplayName; // 0x10(0x18)
};

// Object: ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size: 0x80 (Inherited: 0x0)
struct FNiagaraSystemCompileRequest
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct UObject*> RootObjects; // 0x8(0x10)
	uint8_t Pad_0x18[0x68]; // 0x18(0x68)
};

// Object: ScriptStruct Niagara.EmitterCompiledScriptPair
// Size: 0x78 (Inherited: 0x0)
struct FEmitterCompiledScriptPair
{
	uint8_t Pad_0x0[0x78]; // 0x0(0x78)
};

// Object: ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraParameterDataSetBindingCollection
{
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0(0x10)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10(0x10)
};

// Object: ScriptStruct Niagara.NiagaraSystemCompiledData
// Size: 0x218 (Inherited: 0x0)
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore InstanceParamStore; // 0x0(0x78)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x78(0x40)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xB8(0x40)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0xF8(0x40)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x138(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x158(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x178(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x198(0x10)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1A8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1C8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1E8(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x208(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterDataSetBinding
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraParameterDataSetBinding
{
	int32_t ParameterOffset; // 0x0(0x4)
	int32_t DataSetComponentOffset; // 0x4(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterCompiledData
// Size: 0x130 (Inherited: 0x0)
struct FNiagaraEmitterCompiledData
{
	struct TArray<struct FName> SpawnAttributes; // 0x0(0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10(0x20)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x30(0x20)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x50(0x20)
	struct FNiagaraVariable EmitterAgeVar; // 0x70(0x20)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0x90(0x20)
	struct FNiagaraVariable EmitterInstanceSeedVar; // 0xB0(0x20)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xD0(0x20)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xF0(0x40)
};

// Object: ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraInputConditionMetadata
{
	struct FName InputName; // 0x0(0x8)
	struct TArray<struct FString> TargetValues; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.NiagaraVariableMetaData
// Size: 0xF0 (Inherited: 0x0)
struct FNiagaraVariableMetaData
{
	struct FText Description; // 0x0(0x18)
	struct FText CategoryName; // 0x18(0x18)
	bool bAdvancedDisplay; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t EditorSortPriority; // 0x34(0x4)
	bool bInlineEditConditionToggle; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FNiagaraInputConditionMetadata EditCondition; // 0x40(0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0x58(0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0x70(0x50)
	struct FName ParentAttribute; // 0xC0(0x8)
	struct FName ScopeName; // 0xC8(0x8)
	ENiagaraScriptParameterUsage Usage; // 0xD0(0x4)
	bool bIsStaticSwitch; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	int32_t StaticSwitchDefaultValue; // 0xD8(0x4)
	bool bAddedToNodeGraphDeepCopy; // 0xDC(0x1)
	bool bOutputIsPersistent; // 0xDD(0x1)
	uint8_t Pad_0xDE[0x2]; // 0xDE(0x2)
	struct FName CachedNamespacelessVariableName; // 0xE0(0x8)
	bool bCreatedInSystemEditor; // 0xE8(0x1)
	bool bUseLegacyNameString; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
};

// Object: ScriptStruct Niagara.NiagaraParameterScopeInfo
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraParameterScopeInfo
{
	ENiagaraParameterScope Scope; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString NamespaceString; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString Object; // 0x0(0x10)
	struct TArray<struct FString> PropertyKeys; // 0x10(0x10)
	struct TArray<struct FString> PropertyValues; // 0x20(0x10)
};

// Object: ScriptStruct Niagara.NiagaraID
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraID
{
	int32_t Index; // 0x0(0x4)
	int32_t AcquireTag; // 0x4(0x4)
};

// Object: ScriptStruct Niagara.NiagaraSpawnInfo
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraSpawnInfo
{
	int32_t Count; // 0x0(0x4)
	float InterpStartDt; // 0x4(0x4)
	float IntervalDt; // 0x8(0x4)
	int32_t SpawnGroup; // 0xC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraMatrix
{
	struct FVector4 Row0; // 0x0(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterMap
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraParameterMap
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraNumeric
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraNumeric
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraHalfVector4
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraHalfVector4
{
	uint16_t X; // 0x0(0x2)
	uint16_t Y; // 0x2(0x2)
	uint16_t Z; // 0x4(0x2)
	uint16_t W; // 0x6(0x2)
};

// Object: ScriptStruct Niagara.NiagaraHalfVector3
// Size: 0x6 (Inherited: 0x0)
struct FNiagaraHalfVector3
{
	uint16_t X; // 0x0(0x2)
	uint16_t Y; // 0x2(0x2)
	uint16_t Z; // 0x4(0x2)
};

// Object: ScriptStruct Niagara.NiagaraHalfVector2
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraHalfVector2
{
	uint16_t X; // 0x0(0x2)
	uint16_t Y; // 0x2(0x2)
};

// Object: ScriptStruct Niagara.NiagaraHalf
// Size: 0x2 (Inherited: 0x0)
struct FNiagaraHalf
{
	uint16_t Value; // 0x0(0x2)
};

// Object: ScriptStruct Niagara.NiagaraBool
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraBool
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraInt32
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraInt32
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraFloat
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraFloat
{
	float Value; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0xC8 (Inherited: 0x78)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0x78(0x50)
};

// Object: ScriptStruct Niagara.NiagaraVariant
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraVariant
{
	struct UObject* Object; // 0x0(0x8)
	struct UNiagaraDataInterface* DataInterface; // 0x8(0x8)
	struct TArray<uint8_t> Bytes; // 0x10(0x10)
	ENiagaraVariantMode CurrentMode; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size: 0x40 (Inherited: 0x38)
struct FNiagaraWorldManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class Niagara.MovieSceneNiagaraTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraTrack, "MovieSceneNiagaraTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Object: Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xA8 (Inherited: 0x88)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraParameterTrack, "MovieSceneNiagaraParameterTrack")

	struct FNiagaraVariable Parameter; // 0x88(0x20)
};

// Object: Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraBoolParameterTrack, "MovieSceneNiagaraBoolParameterTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraColorParameterTrack, "MovieSceneNiagaraColorParameterTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraFloatParameterTrack, "MovieSceneNiagaraFloatParameterTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xB0 (Inherited: 0xA8)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraIntegerParameterTrack, "MovieSceneNiagaraIntegerParameterTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xF0 (Inherited: 0xE0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraSystemSpawnSection, "MovieSceneNiagaraSystemSpawnSection")

	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xDC(0x4)
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xE0(0x4)
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xE4(0x4)
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xE8(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
};

// Object: Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraSystemTrack, "MovieSceneNiagaraSystemTrack")

	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xB8 (Inherited: 0xA8)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneNiagaraVectorParameterTrack, "MovieSceneNiagaraVectorParameterTrack")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	int32_t ChannelsUsed; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: Class Niagara.NiagaraActor
// Size: 0x310 (Inherited: 0x300)
struct ANiagaraActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANiagaraActor, "NiagaraActor")

	struct UNiagaraComponent* NiagaraComponent; // 0x300(0x8)
	uint8_t bDestroyOnSystemFinish : 1; // 0x308(0x1), Mask(0x1)
	uint8_t BitPad_0x308_1 : 7; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)

	// Object: Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x3820330
	// Params: [ Num(1) Size(0x1) ]
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);

	// Object: Function Niagara.NiagaraActor.OnNiagaraSystemFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x9839644
	// Params: [ Num(1) Size(0x8) ]
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent);
};

// Object: Class Niagara.NiagaraComponent
// Size: 0x810 (Inherited: 0x680)
struct UNiagaraComponent : UFXSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraComponent, "NiagaraComponent")

	struct UNiagaraSystem* Asset; // 0x678(0x8)
	ENiagaraTickBehavior TickBehavior; // 0x680(0x1)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x688(0xC8)
	uint8_t bForceSolo : 1; // 0x750(0x1), Mask(0x1)
	uint8_t bEnableGpuComputeDebug : 1; // 0x750(0x1), Mask(0x2)
	uint8_t BitPad_0x751_2 : 6; // 0x751(0x1)
	uint8_t Pad_0x752[0x27]; // 0x752(0x27)
	uint8_t bAutoDestroy : 1; // 0x779(0x1), Mask(0x1)
	uint8_t bRenderingEnabled : 1; // 0x779(0x1), Mask(0x2)
	uint8_t bAutoManageAttachment : 1; // 0x779(0x1), Mask(0x4)
	uint8_t bAutoAttachWeldSimulatedBodies : 1; // 0x779(0x1), Mask(0x8)
	uint8_t BitPad_0x779_4 : 4; // 0x779(0x1)
	uint8_t Pad_0x77A[0x2]; // 0x77A(0x2)
	float MaxTimeBeforeForceUpdateTransform; // 0x77C(0x4)
	struct TArray<struct FNiagaraMaterialOverride> EmitterMaterials; // 0x780(0x10)
	uint8_t Pad_0x790[0x8]; // 0x790(0x8)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x798(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x7A8(0x8)
	struct FName AutoAttachSocketName; // 0x7B0(0x8)
	EAttachmentRule AutoAttachLocationRule; // 0x7B8(0x1)
	EAttachmentRule AutoAttachRotationRule; // 0x7B9(0x1)
	EAttachmentRule AutoAttachScaleRule; // 0x7BA(0x1)
	uint8_t Pad_0x7BB[0x55]; // 0x7BB(0x55)

	// Object: Function Niagara.NiagaraComponent.SetVariableVec4
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3828230
	// Params: [ Num(2) Size(0x20) ]
	void SetVariableVec4(struct FName InVariableName, const struct FVector4& InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableVec3
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3827e68
	// Params: [ Num(2) Size(0x14) ]
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableVec2
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3827c94
	// Params: [ Num(2) Size(0x10) ]
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3827260
	// Params: [ Num(2) Size(0x10) ]
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget);

	// Object: Function Niagara.NiagaraComponent.SetVariableQuat
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3828044
	// Params: [ Num(2) Size(0x20) ]
	void SetVariableQuat(struct FName InVariableName, const struct FQuat& InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3827428
	// Params: [ Num(2) Size(0x10) ]
	void SetVariableObject(struct FName InVariableName, struct UObject* Object);

	// Object: Function Niagara.NiagaraComponent.SetVariableMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3827344
	// Params: [ Num(2) Size(0x10) ]
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object);

	// Object: Function Niagara.NiagaraComponent.SetVariableLinearColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3828434
	// Params: [ Num(2) Size(0x18) ]
	void SetVariableLinearColor(struct FName InVariableName, const struct FLinearColor& InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38279c4
	// Params: [ Num(2) Size(0xC) ]
	void SetVariableInt(struct FName InVariableName, int32_t InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableFloat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x98e6d4c
	// Params: [ Num(2) Size(0xC) ]
	void SetVariableFloat(struct FName InVariableName, float InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableBool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38277d8
	// Params: [ Num(2) Size(0x9) ]
	void SetVariableBool(struct FName InVariableName, bool InValue);

	// Object: Function Niagara.NiagaraComponent.SetVariableActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3827600
	// Params: [ Num(2) Size(0x10) ]
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor);

	// Object: Function Niagara.NiagaraComponent.SetTickBehavior
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382863c
	// Params: [ Num(1) Size(0x1) ]
	void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);

	// Object: Function Niagara.NiagaraComponent.SetSeekDelta
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828870
	// Params: [ Num(1) Size(0x4) ]
	void SetSeekDelta(float InSeekDelta);

	// Object: Function Niagara.NiagaraComponent.SetRenderingEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826e14
	// Params: [ Num(1) Size(0x1) ]
	void SetRenderingEnabled(bool bInRenderingEnabled);

	// Object: Function Niagara.NiagaraComponent.SetPreviewLODDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38269b0
	// Params: [ Num(2) Size(0x8) ]
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);

	// Object: Function Niagara.NiagaraComponent.SetPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826b98
	// Params: [ Num(1) Size(0x1) ]
	void SetPaused(bool bInPaused);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x382832c
	// Params: [ Num(2) Size(0x20) ]
	void SetNiagaraVariableVec4(struct FString InVariableName, const struct FVector4& InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3827f50
	// Params: [ Num(2) Size(0x1C) ]
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3827d78
	// Params: [ Num(2) Size(0x18) ]
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3828134
	// Params: [ Num(2) Size(0x20) ]
	void SetNiagaraVariableQuat(struct FString InVariableName, const struct FQuat& InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382750c
	// Params: [ Num(2) Size(0x18) ]
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3828524
	// Params: [ Num(2) Size(0x20) ]
	void SetNiagaraVariableLinearColor(struct FString InVariableName, const struct FLinearColor& InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3827aac
	// Params: [ Num(2) Size(0x14) ]
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3827ba0
	// Params: [ Num(2) Size(0x14) ]
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38278c8
	// Params: [ Num(2) Size(0x11) ]
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue);

	// Object: Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38276e4
	// Params: [ Num(2) Size(0x18) ]
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor);

	// Object: Function Niagara.NiagaraComponent.SetMaxSimTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828794
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxSimTime(float InMaxTime);

	// Object: Function Niagara.NiagaraComponent.SetGpuComputeDebug
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828c5c
	// Params: [ Num(1) Size(0x1) ]
	void SetGpuComputeDebug(bool bEnableDebug);

	// Object: Function Niagara.NiagaraComponent.SetForceSolo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828d2c
	// Params: [ Num(1) Size(0x1) ]
	void SetForceSolo(bool bInForceSolo);

	// Object: Function Niagara.NiagaraComponent.SetDesiredAge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828aa4
	// Params: [ Num(1) Size(0x4) ]
	void SetDesiredAge(float InDesiredAge);

	// Object: Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382894c
	// Params: [ Num(1) Size(0x1) ]
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);

	// Object: Function Niagara.NiagaraComponent.SetAutoDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38286e4
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoDestroy(bool bInAutoDestroy);

	// Object: Function Niagara.NiagaraComponent.SetAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828df8
	// Params: [ Num(1) Size(0x8) ]
	void SetAsset(struct UNiagaraSystem* InAsset);

	// Object: Function Niagara.NiagaraComponent.SetAllowScalability
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38268d0
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowScalability(bool bAllow);

	// Object: Function Niagara.NiagaraComponent.SetAgeUpdateMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3828b80
	// Params: [ Num(1) Size(0x1) ]
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);

	// Object: Function Niagara.NiagaraComponent.SeekToDesiredAge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38289fc
	// Params: [ Num(1) Size(0x4) ]
	void SeekToDesiredAge(float InDesiredAge);

	// Object: Function Niagara.NiagaraComponent.ResetSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826ed8
	// Params: [ Num(0) Size(0x0) ]
	void ResetSystem();

	// Object: Function Niagara.NiagaraComponent.ReinitializeSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826ec4
	// Params: [ Num(0) Size(0x0) ]
	void ReinitializeSystem();

	// Object: Function Niagara.NiagaraComponent.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3826b60
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();

	// Object: Function Niagara.NiagaraComponent.GetTickBehavior
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3828620
	// Params: [ Num(1) Size(0x1) ]
	ENiagaraTickBehavior GetTickBehavior();

	// Object: Function Niagara.NiagaraComponent.GetSeekDelta
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3828918
	// Params: [ Num(1) Size(0x4) ]
	float GetSeekDelta();

	// Object: Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3826998
	// Params: [ Num(1) Size(0x1) ]
	bool GetPreviewLODDistanceEnabled();

	// Object: Function Niagara.NiagaraComponent.GetPreviewLODDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3826980
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPreviewLODDistance();

	// Object: Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826eec
	// Params: [ Num(3) Size(0x30) ]
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName);

	// Object: Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382702c
	// Params: [ Num(3) Size(0x30) ]
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName);

	// Object: Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382716c
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName);

	// Object: Function Niagara.NiagaraComponent.GetMaxSimTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x382883c
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxSimTime();

	// Object: Function Niagara.NiagaraComponent.GetForceSolo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3828d0c
	// Params: [ Num(1) Size(0x1) ]
	bool GetForceSolo();

	// Object: Function Niagara.NiagaraComponent.GetDesiredAge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3828b4c
	// Params: [ Num(1) Size(0x4) ]
	float GetDesiredAge();

	// Object: Function Niagara.NiagaraComponent.GetDataInterface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826aa0
	// Params: [ Num(2) Size(0x18) ]
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name);

	// Object: Function Niagara.NiagaraComponent.GetAsset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3828ddc
	// Params: [ Num(1) Size(0x8) ]
	struct UNiagaraSystem* GetAsset();

	// Object: Function Niagara.NiagaraComponent.GetAgeUpdateMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3828c28
	// Params: [ Num(1) Size(0x1) ]
	ENiagaraAgeUpdateMode GetAgeUpdateMode();

	// Object: Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826c48
	// Params: [ Num(2) Size(0x8) ]
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);

	// Object: Function Niagara.NiagaraComponent.AdvanceSimulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3826d2c
	// Params: [ Num(2) Size(0x8) ]
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
};

// Object: Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraComponentPool, "NiagaraComponentPool")

	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class Niagara.NiagaraRendererProperties
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraRendererProperties, "NiagaraRendererProperties")

	struct FNiagaraPlatformSet Platforms; // 0x28(0x30)
	int32_t SortOrderHint; // 0x58(0x4)
	bool bIsEnabled; // 0x5C(0x1)
	bool bMotionBlurEnabled; // 0x5D(0x1)
	uint8_t Pad_0x5E[0x22]; // 0x5E(0x22)
};

// Object: Class Niagara.NiagaraComponentRendererProperties
// Size: 0x160 (Inherited: 0x80)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraComponentRendererProperties, "NiagaraComponentRendererProperties")

	struct USceneComponent* ComponentType; // 0x80(0x8)
	uint32_t ComponentCountLimit; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x90(0x58)
	bool bAssignComponentsOnParticleID; // 0xE8(0x1)
	bool bOnlyCreateComponentsOnParticleSpawn; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
	struct USceneComponent* TemplateComponent; // 0xF0(0x8)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0xF8(0x10)
	uint8_t Pad_0x108[0x58]; // 0x108(0x58)
};

// Object: Class Niagara.NiagaraComponentSettings
// Size: 0x118 (Inherited: 0x28)
struct UNiagaraComponentSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraComponentSettings, "NiagaraComponentSettings")

	struct TSet<struct FName> SuppressActivationList; // 0x28(0x50)
	struct TSet<struct FName> ForceAutoPooolingList; // 0x78(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xC8(0x50)
};

// Object: Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraConvertInPlaceUtilityBase, "NiagaraConvertInPlaceUtilityBase")
};

// Object: Class Niagara.NiagaraDataInterface
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterface, "NiagaraDataInterface")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterface2DArrayTexture, "NiagaraDataInterface2DArrayTexture")

	struct UTexture2DArray* Texture; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceArray
// Size: 0x78 (Inherited: 0x38)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArray, "NiagaraDataInterfaceArray")

	uint8_t Pad_0x38[0x34]; // 0x38(0x34)
	int32_t MaxElements; // 0x6C(0x4)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayFloat, "NiagaraDataInterfaceArrayFloat")

	struct TArray<float> FloatData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayFloat2, "NiagaraDataInterfaceArrayFloat2")

	struct TArray<struct FVector2D> FloatData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayFloat3, "NiagaraDataInterfaceArrayFloat3")

	struct TArray<struct FVector> FloatData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayFloat4, "NiagaraDataInterfaceArrayFloat4")

	struct TArray<struct FVector4> FloatData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayColor, "NiagaraDataInterfaceArrayColor")

	struct TArray<struct FLinearColor> ColorData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayQuat, "NiagaraDataInterfaceArrayQuat")

	struct TArray<struct FQuat> QuatData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayFunctionLibrary, "NiagaraDataInterfaceArrayFunctionLibrary")

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d404
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FVector4>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d664
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FVector2D>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d534
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FVector>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d1a4
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FQuat>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d074
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<int32_t>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d794
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<float>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382d2d4
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FLinearColor>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382cf44
	// Params: [ Num(3) Size(0x20) ]
	static void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<bool>& ArrayData);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382cac4
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382cd04
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382cbe4
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382c884
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382c764
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382ce24
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382c9a4
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);

	// Object: Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382c644
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName);
};

// Object: Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayInt32, "NiagaraDataInterfaceArrayInt32")

	struct TArray<int32_t> IntData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x88 (Inherited: 0x78)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceArrayBool, "NiagaraDataInterfaceArrayBool")

	struct TArray<bool> BoolData; // 0x78(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceAudioSubmix, "NiagaraDataInterfaceAudioSubmix")

	struct USoundSubmix* Submix; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceAudioOscilloscope, "NiagaraDataInterfaceAudioOscilloscope")

	struct USoundSubmix* Submix; // 0x38(0x8)
	int32_t Resolution; // 0x40(0x4)
	float ScopeInMilliseconds; // 0x44(0x4)
};

// Object: Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceAudioPlayer, "NiagaraDataInterfaceAudioPlayer")

	struct USoundBase* SoundToPlay; // 0x38(0x8)
	struct USoundAttenuation* Attenuation; // 0x40(0x8)
	struct USoundConcurrency* Concurrency; // 0x48(0x8)
	struct TArray<struct FName> ParameterNames; // 0x50(0x10)
	bool bLimitPlaysPerTick; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t MaxPlaysPerTick; // 0x64(0x4)
	bool bStopWhenComponentIsDestroyed; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceAudioSpectrum, "NiagaraDataInterfaceAudioSpectrum")

	int32_t Resolution; // 0x40(0x4)
	float MinimumFrequency; // 0x44(0x4)
	float MaximumFrequency; // 0x48(0x4)
	float NoiseFloorDb; // 0x4C(0x4)
};

// Object: Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceCamera, "NiagaraDataInterfaceCamera")

	int32_t PlayerControllerIndex; // 0x34(0x4)
	bool bRequireCurrentFrameData; // 0x38(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceCollisionQuery, "NiagaraDataInterfaceCollisionQuery")

	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceCurveBase, "NiagaraDataInterfaceCurveBase")

	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x4)
	float LUTMaxTime; // 0x4C(0x4)
	float LUTInvTimeRange; // 0x50(0x4)
	float LUTNumSamplesMinusOne; // 0x54(0x4)
	uint8_t bUseLUT : 1; // 0x58(0x1), Mask(0x1)
	uint8_t bExposeCurve : 1; // 0x58(0x1), Mask(0x2)
	uint8_t BitPad_0x58_2 : 6; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FName ExposedName; // 0x5C(0x8)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct UTexture2D* ExposedTexture; // 0x68(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceColorCurve, "NiagaraDataInterfaceColorCurve")

	struct FRichCurve RedCurve; // 0x70(0x80)
	struct FRichCurve GreenCurve; // 0xF0(0x80)
	struct FRichCurve BlueCurve; // 0x170(0x80)
	struct FRichCurve AlphaCurve; // 0x1F0(0x80)
};

// Object: Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceCurlNoise, "NiagaraDataInterfaceCurlNoise")

	uint32_t Seed; // 0x34(0x4)
	uint8_t Pad_0x3C[0xC]; // 0x3C(0xC)
};

// Object: Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xF0 (Inherited: 0x70)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceCurve, "NiagaraDataInterfaceCurve")

	struct FRichCurve Curve; // 0x70(0x80)
};

// Object: Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct INiagaraParticleCallbackHandler : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INiagaraParticleCallbackHandler, "NiagaraParticleCallbackHandler")

	// Object: Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x382da08
	// Params: [ Num(2) Size(0x18) ]
	void ReceiveParticleData(const struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem);
};

// Object: Class Niagara.NiagaraDataInterfaceExport
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceExport, "NiagaraDataInterfaceExport")

	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x20)
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	int32_t GPUAllocationFixedSize; // 0x5C(0x4)
	float GPUAllocationPerParticleSize; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceGBuffer, "NiagaraDataInterfaceGBuffer")
};

// Object: Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xD8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceRWBase, "NiagaraDataInterfaceRWBase")

	struct TSet<int32_t> OutputShaderStages; // 0x38(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x88(0x50)
};

// Object: Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xF8 (Inherited: 0xD8)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceGrid2D, "NiagaraDataInterfaceGrid2D")

	int32_t NumCellsX; // 0xD8(0x4)
	int32_t NumCellsY; // 0xDC(0x4)
	int32_t NumCellsMaxAxis; // 0xE0(0x4)
	int32_t NumAttributes; // 0xE4(0x4)
	bool SetGridFromMaxAxis; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x3]; // 0xE9(0x3)
	struct FVector2D WorldBBoxSize; // 0xEC(0x8)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
};

// Object: Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x1C0 (Inherited: 0xF8)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceGrid2DCollection, "NiagaraDataInterfaceGrid2DCollection")

	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xF8(0x20)
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118(0x1)
	uint8_t bOverrideFormat : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	uint8_t Pad_0x11A[0x56]; // 0x11A(0x56)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170(0x50)

	// Object: Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382dc44
	// Params: [ Num(3) Size(0x10) ]
	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);

	// Object: Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382dd8c
	// Params: [ Num(3) Size(0x10) ]
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);

	// Object: Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x382e06c
	// Params: [ Num(4) Size(0x15) ]
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex);

	// Object: Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382ded4
	// Params: [ Num(5) Size(0x19) ]
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY);
};

// Object: Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x168 (Inherited: 0xF8)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceGrid2DCollectionReader, "NiagaraDataInterfaceGrid2DCollectionReader")

	struct FString EmitterName; // 0xF8(0x10)
	struct FString DIName; // 0x108(0x10)
	uint8_t Pad_0x118[0x50]; // 0x118(0x50)
};

// Object: Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x100 (Inherited: 0xD8)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceGrid3D, "NiagaraDataInterfaceGrid3D")

	struct FIntVector NumCells; // 0xD8(0xC)
	float CellSize; // 0xE4(0x4)
	int32_t NumCellsMaxAxis; // 0xE8(0x4)
	ESetResolutionMethod SetResolutionMethod; // 0xEC(0x4)
	struct FVector WorldBBoxSize; // 0xF0(0xC)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
};

// Object: Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0x178 (Inherited: 0x100)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceGrid3DCollection, "NiagaraDataInterfaceGrid3DCollection")

	int32_t NumAttributes; // 0xFC(0x4)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x100(0x20)
	ENiagaraGpuBufferFormat BufferFormat; // 0x120(0x1)
	uint8_t Pad_0x125[0x53]; // 0x125(0x53)

	// Object: Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382e1e0
	// Params: [ Num(4) Size(0x14) ]
	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);

	// Object: Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382e37c
	// Params: [ Num(4) Size(0x14) ]
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);

	// Object: Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x382e700
	// Params: [ Num(4) Size(0x15) ]
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex);

	// Object: Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x382e518
	// Params: [ Num(6) Size(0x1D) ]
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ);
};

// Object: Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceLandscape, "NiagaraDataInterfaceLandscape")

	struct AActor* SourceLandscape; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x100 (Inherited: 0x100)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceNeighborGrid3D, "NiagaraDataInterfaceNeighborGrid3D")

	uint32_t MaxNeighborsPerCell; // 0xFC(0x4)
};

// Object: Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceOcclusion, "NiagaraDataInterfaceOcclusion")
};

// Object: Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0xE8 (Inherited: 0xD8)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceParticleRead, "NiagaraDataInterfaceParticleRead")

	struct FString EmitterName; // 0xD8(0x10)
};

// Object: Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfacePlatformSet, "NiagaraDataInterfacePlatformSet")

	struct FNiagaraPlatformSet Platforms; // 0x38(0x30)
};

// Object: Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x158 (Inherited: 0xD8)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceRenderTarget2D, "NiagaraDataInterfaceRenderTarget2D")

	struct FIntPoint Size; // 0xD8(0x8)
	uint8_t OverrideRenderTargetFormat; // 0xE0(0x1)
	uint8_t bOverrideFormat : 1; // 0xE1(0x1), Mask(0x1)
	uint8_t BitPad_0xE1_1 : 7; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x6]; // 0xE2(0x6)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xE8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108(0x50)
};

// Object: Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0x158 (Inherited: 0xD8)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceRenderTarget2DArray, "NiagaraDataInterfaceRenderTarget2DArray")

	struct FIntVector Size; // 0xD8(0xC)
	uint8_t OverrideRenderTargetFormat; // 0xE4(0x1)
	uint8_t bOverrideFormat : 1; // 0xE5(0x1), Mask(0x1)
	uint8_t BitPad_0xE5_1 : 7; // 0xE5(0x1)
	uint8_t Pad_0xE6[0x2]; // 0xE6(0x2)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xE8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108(0x50)
};

// Object: Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0x158 (Inherited: 0xD8)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceRenderTargetVolume, "NiagaraDataInterfaceRenderTargetVolume")

	struct FIntVector Size; // 0xD8(0xC)
	uint8_t OverrideRenderTargetFormat; // 0xE4(0x1)
	uint8_t bOverrideFormat : 1; // 0xE5(0x1), Mask(0x1)
	uint8_t BitPad_0xE5_1 : 7; // 0xE5(0x1)
	uint8_t Pad_0xE6[0x2]; // 0xE6(0x2)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xE8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108(0x50)
};

// Object: Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceSimpleCounter, "NiagaraDataInterfaceSimpleCounter")
};

// Object: Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xB8 (Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceSkeletalMesh, "NiagaraDataInterfaceSkeletalMesh")

	ENDISkeletalMesh_SourceMode SourceMode; // 0x31(0x1)
	struct AActor* Source; // 0x38(0x8)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x40(0x20)
	struct USkeletalMeshComponent* SourceComponent; // 0x60(0x8)
	ENDISkeletalMesh_SkinningMode SkinningMode; // 0x68(0x1)
	uint8_t Pad_0x6A[0x6]; // 0x6A(0x6)
	struct TArray<struct FName> SamplingRegions; // 0x70(0x10)
	int32_t WholeMeshLOD; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct TArray<struct FName> FilteredBones; // 0x88(0x10)
	struct TArray<struct FName> FilteredSockets; // 0x98(0x10)
	struct FName ExcludeBoneName; // 0xA8(0x8)
	uint8_t bExcludeBone : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	bool bRequireCurrentFrameData; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
};

// Object: Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceSpline, "NiagaraDataInterfaceSpline")

	struct AActor* Source; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x80 (Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceStaticMesh, "NiagaraDataInterfaceStaticMesh")

	ENDIStaticMesh_SourceMode SourceMode; // 0x31(0x1)
	struct UStaticMesh* DefaultMesh; // 0x38(0x8)
	struct AActor* Source; // 0x40(0x8)
	struct UStaticMeshComponent* SourceComponent; // 0x48(0x8)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x50(0x10)
	bool bUsePhysicsBodyVelocity; // 0x60(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)
	struct TArray<struct FName> FilteredSockets; // 0x68(0x10)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceTexture, "NiagaraDataInterfaceTexture")

	struct UTexture* Texture; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceVector2DCurve, "NiagaraDataInterfaceVector2DCurve")

	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xF0(0x80)
};

// Object: Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceVector4Curve, "NiagaraDataInterfaceVector4Curve")

	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xF0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
	struct FRichCurve WCurve; // 0x1F0(0x80)
};

// Object: Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1F0 (Inherited: 0x70)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceVectorCurve, "NiagaraDataInterfaceVectorCurve")

	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xF0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
};

// Object: Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceVectorField, "NiagaraDataInterfaceVectorField")

	struct UVectorField* Field; // 0x38(0x8)
	bool bTileX; // 0x40(0x1)
	bool bTileY; // 0x41(0x1)
	bool bTileZ; // 0x42(0x1)
	uint8_t Pad_0x43[0x5]; // 0x43(0x5)
};

// Object: Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceVolumeTexture, "NiagaraDataInterfaceVolumeTexture")

	struct UVolumeTexture* Texture; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraEditorDataBase, "NiagaraEditorDataBase")
};

// Object: Class Niagara.NiagaraSignificanceHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandler : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSignificanceHandler, "NiagaraSignificanceHandler")
};

// Object: Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSignificanceHandlerDistance, "NiagaraSignificanceHandlerDistance")
};

// Object: Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSignificanceHandlerAge, "NiagaraSignificanceHandlerAge")
};

// Object: Class Niagara.NiagaraEffectType
// Size: 0x110 (Inherited: 0x28)
struct UNiagaraEffectType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraEffectType, "NiagaraEffectType")

	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28(0x4)
	ENiagaraCullReaction CullReaction; // 0x2C(0x4)
	struct UNiagaraSignificanceHandler* SignificanceHandler; // 0x30(0x8)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58(0x10)
	uint8_t Pad_0x68[0xA8]; // 0x68(0xA8)
};

// Object: Class Niagara.NiagaraEmitter
// Size: 0x2A0 (Inherited: 0x28)
struct UNiagaraEmitter : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraEmitter, "NiagaraEmitter")

	bool bLocalSpace; // 0x28(0x1)
	bool bDeterminism; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t RandomSeed; // 0x2C(0x4)
	EParticleAllocationMode AllocationMode; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t PreAllocationCount; // 0x34(0x4)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	ENiagaraSimTarget SimTarget; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	struct FBox FixedBounds; // 0x8C(0x1C)
	int32_t MinDetailLevel; // 0xA8(0x4)
	int32_t MaxDetailLevel; // 0xAC(0x4)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xB0(0x14)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct FNiagaraPlatformSet Platforms; // 0xC8(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xF8(0x10)
	uint8_t bInterpolatedSpawning : 1; // 0x108(0x1), Mask(0x1)
	uint8_t bFixedBounds : 1; // 0x108(0x1), Mask(0x2)
	uint8_t bUseMinDetailLevel : 1; // 0x108(0x1), Mask(0x4)
	uint8_t bUseMaxDetailLevel : 1; // 0x108(0x1), Mask(0x8)
	uint8_t bOverrideGlobalSpawnCountScale : 1; // 0x108(0x1), Mask(0x10)
	uint8_t bRequiresPersistentIDs : 1; // 0x108(0x1), Mask(0x20)
	uint8_t bCombineEventSpawn : 1; // 0x108(0x1), Mask(0x40)
	uint8_t BitPad_0x108_7 : 1; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	float MaxDeltaTimePerTick; // 0x10C(0x4)
	uint32_t DefaultShaderStageIndex; // 0x110(0x4)
	uint32_t MaxUpdateIterations; // 0x114(0x4)
	struct TSet<uint32_t> SpawnStages; // 0x118(0x50)
	uint8_t bSimulationStagesEnabled : 1; // 0x168(0x1), Mask(0x1)
	uint8_t bDeprecatedShaderStagesEnabled : 1; // 0x168(0x1), Mask(0x2)
	uint8_t bLimitDeltaTime : 1; // 0x168(0x1), Mask(0x4)
	uint8_t BitPad_0x168_3 : 5; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
	struct FString UniqueEmitterName; // 0x170(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x180(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x190(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1A0(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1B0(0x8)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x1B8(0x10)
	uint8_t Pad_0x1C8[0xD8]; // 0x1C8(0xD8)
};

// Object: Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraEventReceiverEmitterAction, "NiagaraEventReceiverEmitterAction")
};

// Object: Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraEventReceiverEmitterAction_SpawnParticles, "NiagaraEventReceiverEmitterAction_SpawnParticles")

	uint32_t NumParticles; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraFunctionLibrary, "NiagaraFunctionLibrary")

	// Object: Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x98ebfe4
	// Params: [ Num(11) Size(0x40) ]
	static struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, uint8_t LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);

	// Object: Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9800d58
	// Params: [ Num(10) Size(0x40) ]
	static struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);

	// Object: Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3837468
	// Params: [ Num(3) Size(0x20) ]
	static void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture);

	// Object: Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x383758c
	// Params: [ Num(3) Size(0x20) ]
	static void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture);

	// Object: Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x38376b0
	// Params: [ Num(3) Size(0x28) ]
	static void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, const struct TArray<struct FName>& SamplingRegions);

	// Object: Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3837a34
	// Params: [ Num(3) Size(0x20) ]
	static void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent);

	// Object: Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3837910
	// Params: [ Num(3) Size(0x20) ]
	static void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh);

	// Object: Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38377ec
	// Params: [ Num(3) Size(0x20) ]
	static void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent);

	// Object: Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3837384
	// Params: [ Num(3) Size(0x18) ]
	static struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection);
};

// Object: Class Niagara.NiagaraLightRendererProperties
// Size: 0x2D8 (Inherited: 0x80)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraLightRendererProperties, "NiagaraLightRendererProperties")

	uint8_t bUseInverseSquaredFalloff : 1; // 0x80(0x1), Mask(0x1)
	uint8_t bAffectsTranslucency : 1; // 0x80(0x1), Mask(0x2)
	uint8_t BitPad_0x80_2 : 6; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float RadiusScale; // 0x84(0x4)
	struct FVector ColorAdd; // 0x88(0xC)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x98(0x58)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xF0(0x58)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x148(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1A0(0x58)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x1F8(0x58)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x250(0x58)
	uint8_t Pad_0x2A8[0x30]; // 0x2A8(0x30)
};

// Object: Class Niagara.NiagaraMeshRendererProperties
// Size: 0x668 (Inherited: 0x80)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraMeshRendererProperties, "NiagaraMeshRendererProperties")

	struct UStaticMesh* ParticleMesh; // 0x80(0x8)
	ENiagaraSortMode SortMode; // 0x88(0x1)
	uint8_t bOverrideMaterials : 1; // 0x89(0x1), Mask(0x1)
	uint8_t bSortOnlyWhenTranslucent : 1; // 0x89(0x1), Mask(0x2)
	uint8_t BitPad_0x89_2 : 6; // 0x89(0x1)
	uint8_t Pad_0x8A[0x6]; // 0x8A(0x6)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x90(0x10)
	struct FVector2D SubImageSize; // 0xA0(0x8)
	uint8_t bSubImageBlend : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	ENiagaraMeshFacingMode FacingMode; // 0xA9(0x1)
	uint8_t bLockedAxisEnable : 1; // 0xAA(0x1), Mask(0x1)
	uint8_t BitPad_0xAA_1 : 7; // 0xAA(0x1)
	uint8_t Pad_0xAB[0x1]; // 0xAB(0x1)
	struct FVector LockedAxis; // 0xAC(0xC)
	ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x3]; // 0xB9(0x3)
	struct FVector PivotOffset; // 0xBC(0xC)
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0xC8(0x1)
	uint8_t bEnableFrustumCulling : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t bEnableCameraDistanceCulling : 1; // 0xC9(0x1), Mask(0x2)
	uint8_t BitPad_0xC9_2 : 6; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x2]; // 0xCA(0x2)
	float MinCameraDistance; // 0xCC(0x4)
	float MaxCameraDistance; // 0xD0(0x4)
	uint32_t RendererVisibility; // 0xD4(0x4)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xD8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x130(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x188(0x58)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1E0(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x238(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x290(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2E8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x340(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x398(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x3F0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x448(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4A0(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x4F8(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x550(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5A8(0x58)
	uint8_t Pad_0x600[0x68]; // 0x600(0x68)
};

// Object: Class Niagara.NiagaraMessageDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraMessageDataBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraMessageDataBase, "NiagaraMessageDataBase")
};

// Object: Class Niagara.NiagaraParameterCollectionInstance
// Size: 0x110 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraParameterCollectionInstance, "NiagaraParameterCollectionInstance")

	struct UNiagaraParameterCollection* Collection; // 0x28(0x8)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0x78)
	uint8_t Pad_0xB8[0x58]; // 0xB8(0x58)

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3838060
	// Params: [ Num(2) Size(0x1C) ]
	void SetVectorParameter(struct FString InVariableName, struct FVector InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3837f58
	// Params: [ Num(2) Size(0x20) ]
	void SetVector4Parameter(struct FString InVariableName, const struct FVector4& InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3838154
	// Params: [ Num(2) Size(0x18) ]
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3837d68
	// Params: [ Num(2) Size(0x20) ]
	void SetQuatParameter(struct FString InVariableName, const struct FQuat& InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3838244
	// Params: [ Num(2) Size(0x14) ]
	void SetIntParameter(struct FString InVariableName, int32_t InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3838338
	// Params: [ Num(2) Size(0x14) ]
	void SetFloatParameter(struct FString InVariableName, float InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3837e64
	// Params: [ Num(2) Size(0x20) ]
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x383842c
	// Params: [ Num(2) Size(0x11) ]
	void SetBoolParameter(struct FString InVariableName, bool InValue);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3838780
	// Params: [ Num(2) Size(0x1C) ]
	struct FVector GetVectorParameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38386b8
	// Params: [ Num(2) Size(0x20) ]
	struct FVector4 GetVector4Parameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3838840
	// Params: [ Num(2) Size(0x18) ]
	struct FVector2D GetVector2DParameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x38385f0
	// Params: [ Num(2) Size(0x20) ]
	struct FQuat GetQuatParameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3838900
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetIntParameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38389c0
	// Params: [ Num(2) Size(0x14) ]
	float GetFloatParameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3838528
	// Params: [ Num(2) Size(0x20) ]
	struct FLinearColor GetColorParameter(struct FString InVariableName);

	// Object: Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3838a7c
	// Params: [ Num(2) Size(0x11) ]
	bool GetBoolParameter(struct FString InVariableName);
};

// Object: Class Niagara.NiagaraParameterCollection
// Size: 0x60 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraParameterCollection, "NiagaraParameterCollection")

	struct FName Namespace; // 0x28(0x8)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection; // 0x40(0x8)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x8)
	struct FGuid CompileId; // 0x50(0x10)
};

// Object: Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPrecompileContainer, "NiagaraPrecompileContainer")

	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x8)
};

// Object: Class Niagara.NiagaraPreviewBase
// Size: 0x300 (Inherited: 0x300)
struct ANiagaraPreviewBase : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANiagaraPreviewBase, "NiagaraPreviewBase")

	// Object: Function Niagara.NiagaraPreviewBase.SetSystem
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void SetSystem(struct UNiagaraSystem* InSystem);

	// Object: Function Niagara.NiagaraPreviewBase.SetLabelText
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x30) ]
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};

// Object: Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis, "NiagaraPreviewAxis")

	// Object: Function Niagara.NiagaraPreviewAxis.Num
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x383cd80
	// Params: [ Num(1) Size(0x4) ]
	int32_t Num();

	// Object: Function Niagara.NiagaraPreviewAxis.ApplyToPreview
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x383cbf0
	// Params: [ Num(4) Size(0x20) ]
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText);
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamBase, "NiagaraPreviewAxis_InterpParamBase")

	struct FName Param; // 0x28(0x8)
	int32_t Count; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamInt32, "NiagaraPreviewAxis_InterpParamInt32")

	int32_t Min; // 0x34(0x4)
	int32_t Max; // 0x38(0x4)
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamFloat, "NiagaraPreviewAxis_InterpParamFloat")

	float Min; // 0x34(0x4)
	float Max; // 0x38(0x4)
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamVector2D, "NiagaraPreviewAxis_InterpParamVector2D")

	struct FVector2D Min; // 0x34(0x8)
	struct FVector2D Max; // 0x3C(0x8)
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamVector, "NiagaraPreviewAxis_InterpParamVector")

	struct FVector Min; // 0x34(0xC)
	struct FVector Max; // 0x40(0xC)
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamVector4, "NiagaraPreviewAxis_InterpParamVector4")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 Max; // 0x50(0x10)
};

// Object: Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraPreviewAxis_InterpParamLinearColor, "NiagaraPreviewAxis_InterpParamLinearColor")

	struct FLinearColor Min; // 0x34(0x10)
	struct FLinearColor Max; // 0x44(0x10)
};

// Object: Class Niagara.NiagaraPreviewGrid
// Size: 0x350 (Inherited: 0x300)
struct ANiagaraPreviewGrid : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANiagaraPreviewGrid, "NiagaraPreviewGrid")

	struct UNiagaraSystem* System; // 0x300(0x8)
	ENiagaraPreviewGridResetMode ResetMode; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x310(0x8)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x318(0x8)
	struct ANiagaraPreviewBase* PreviewClass; // 0x320(0x8)
	float SpacingX; // 0x328(0x4)
	float SpacingY; // 0x32C(0x4)
	int32_t NumX; // 0x330(0x4)
	int32_t NumY; // 0x334(0x4)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x338(0x10)
	uint8_t Pad_0x348[0x8]; // 0x348(0x8)

	// Object: Function Niagara.NiagaraPreviewGrid.SetPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x383d008
	// Params: [ Num(1) Size(0x1) ]
	void SetPaused(bool bPaused);

	// Object: Function Niagara.NiagaraPreviewGrid.GetPreviews
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x383cf48
	// Params: [ Num(1) Size(0x10) ]
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews);

	// Object: Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x383d0b8
	// Params: [ Num(0) Size(0x0) ]
	void DeactivatePreviews();

	// Object: Function Niagara.NiagaraPreviewGrid.ActivatePreviews
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x383d0cc
	// Params: [ Num(1) Size(0x1) ]
	void ActivatePreviews(bool bReset);
};

// Object: Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x7D8 (Inherited: 0x80)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraRibbonRendererProperties, "NiagaraRibbonRendererProperties")

	struct UMaterialInterface* Material; // 0x80(0x8)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88(0x20)
	ENiagaraRibbonFacingMode FacingMode; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	struct FNiagaraRibbonUVSettings UV0Settings; // 0xAC(0x24)
	struct FNiagaraRibbonUVSettings UV1Settings; // 0xD0(0x24)
	ENiagaraRibbonDrawDirection DrawDirection; // 0xF4(0x1)
	uint8_t Pad_0xF5[0x3]; // 0xF5(0x3)
	float CurveTension; // 0xF8(0x4)
	ENiagaraRibbonTessellationMode TessellationMode; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	int32_t TessellationFactor; // 0x100(0x4)
	bool bUseConstantFactor; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)
	float TessellationAngle; // 0x108(0x4)
	bool bScreenSpaceTessellation; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x110(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x168(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1C0(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x218(0x58)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x270(0x58)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2C8(0x58)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x320(0x58)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x378(0x58)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3D0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x428(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x480(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4D8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x530(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x588(0x58)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x5E0(0x58)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x638(0x58)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x690(0x58)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x6E8(0x58)
	uint8_t Pad_0x740[0x98]; // 0x740(0x98)
};

// Object: Class Niagara.NiagaraScript
// Size: 0x2C0 (Inherited: 0x28)
struct UNiagaraScript : UNiagaraScriptBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraScript, "NiagaraScript")

	ENiagaraScriptUsage Usage; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t UsageIndex; // 0x2C(0x4)
	struct FGuid UsageId; // 0x30(0x10)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40(0x78)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xB8(0x98)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160(0x48)
	uint8_t Pad_0x1A8[0x10]; // 0x1A8(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1B8(0xE0)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x298(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2A8(0x10)
	uint8_t Pad_0x2B8[0x8]; // 0x2B8(0x8)

	// Object: Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x383d4e4
	// Params: [ Num(0) Size(0x0) ]
	void RaiseOnGPUCompilationComplete();
};

// Object: Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraScriptSourceBase, "NiagaraScriptSourceBase")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class Niagara.NiagaraSettings
// Size: 0xC0 (Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSettings, "NiagaraSettings")

	struct FSoftObjectPath DefaultEffectType; // 0x38(0x18)
	struct TArray<struct FText> QualityLevels; // 0x50(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x60(0x50)
	uint8_t DefaultRenderTargetFormat; // 0xB0(0x1)
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0xB8(0x8)
};

// Object: Class Niagara.NiagaraSimulationStageBase
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSimulationStageBase, "NiagaraSimulationStageBase")

	struct UNiagaraScript* Script; // 0x28(0x8)
	struct FName SimulationStageName; // 0x30(0x8)
	uint8_t bEnabled : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x68 (Inherited: 0x40)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSimulationStageGeneric, "NiagaraSimulationStageGeneric")

	ENiagaraIterationSource IterationSource; // 0x39(0x1)
	int32_t Iterations; // 0x3C(0x4)
	uint8_t bSpawnOnly : 1; // 0x40(0x1), Mask(0x1)
	uint8_t bDisablePartialParticleUpdate : 1; // 0x40(0x1), Mask(0x2)
	uint8_t BitPad_0x45_2 : 6; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x48(0x20)
};

// Object: Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x7A0 (Inherited: 0x80)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSpriteRendererProperties, "NiagaraSpriteRendererProperties")

	struct UMaterialInterface* Material; // 0x80(0x8)
	ENiagaraRendererSourceDataMode SourceMode; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90(0x20)
	ENiagaraSpriteAlignment Alignment; // 0xB0(0x1)
	ENiagaraSpriteFacingMode FacingMode; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x2]; // 0xB2(0x2)
	struct FVector2D PivotInUVSpace; // 0xB4(0x8)
	ENiagaraSortMode SortMode; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	struct FVector2D SubImageSize; // 0xC0(0x8)
	uint8_t bSubImageBlend : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t bRemoveHMDRollInVR : 1; // 0xC8(0x1), Mask(0x2)
	uint8_t bSortOnlyWhenTranslucent : 1; // 0xC8(0x1), Mask(0x4)
	uint8_t bGpuLowLatencyTranslucency : 1; // 0xC8(0x1), Mask(0x8)
	uint8_t BitPad_0xC8_4 : 4; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x3]; // 0xC9(0x3)
	float MinFacingCameraBlendDistance; // 0xCC(0x4)
	float MaxFacingCameraBlendDistance; // 0xD0(0x4)
	uint8_t bEnableCameraDistanceCulling : 1; // 0xD4(0x1), Mask(0x1)
	uint8_t BitPad_0xD4_1 : 7; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	float MinCameraDistance; // 0xD8(0x4)
	float MaxCameraDistance; // 0xDC(0x4)
	uint32_t RendererVisibility; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xE8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x140(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x58)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1F0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x248(0x58)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2A0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2F8(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x350(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3A8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x400(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4B0(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x508(0x58)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x560(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x5B8(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x610(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x668(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x6C0(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x718(0x10)
	uint8_t Pad_0x728[0x78]; // 0x728(0x78)
};

// Object: Class Niagara.NiagaraSystem
// Size: 0x480 (Inherited: 0x38)
struct UNiagaraSystem : UFXSystemAsset
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraSystem, "NiagaraSystem")

	bool bDumpDebugSystemInfo; // 0x31(0x1)
	bool bDumpDebugEmitterInfo; // 0x32(0x1)
	bool bRequireCurrentFrameData; // 0x33(0x1)
	uint8_t bFixedBounds : 1; // 0x34(0x1), Mask(0x1)
	struct UNiagaraEffectType* EffectType; // 0x38(0x8)
	bool bOverrideScalabilitySettings; // 0x40(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x68(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x88(0x8)
	struct UNiagaraScript* SystemUpdateScript; // 0x90(0x8)
	uint8_t Pad_0x98[0x10]; // 0x98(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xA8(0x218)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2C0(0xC8)
	struct FBox FixedBounds; // 0x388(0x1C)
	bool bAutoDeactivate; // 0x3A4(0x1)
	uint8_t Pad_0x3A5[0x3]; // 0x3A5(0x3)
	float WarmupTime; // 0x3A8(0x4)
	int32_t WarmupTickCount; // 0x3AC(0x4)
	float WarmupTickDelta; // 0x3B0(0x4)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x3B4(0x1)
	uint8_t Pad_0x3B5[0x3]; // 0x3B5(0x3)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x3B8(0x10)
	uint8_t Pad_0x3C8[0xB8]; // 0x3C8(0xB8)
};

} // namespace SDK
