#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: AkAudio
// Enums: 31
// Structs: 55
// Classes: 99

struct AActor;
enum class ECheckBoxState : uint8_t;
enum class ECollisionChannel : uint8_t;
enum class EHorizontalAlignment : uint8_t;
enum class EOrientation : uint8_t;
enum class ERichCurveExtrapolation : uint8_t;
enum class ERichCurveInterpMode : uint8_t;
enum class ERichCurveTangentMode : uint8_t;
enum class ERichCurveTangentWeightMode : uint8_t;
struct FLatentActionInfo;
struct UMaterialInterface;
struct UMovieSceneSection;
struct UPhysicalMaterial;
struct FAKWaapiJsonObject;
struct FAkWaapiSubscriptionId;
struct FAkAmbSoundCheckpointRecord;
struct FAkAdvancedSpatialAudioSettings;
struct FAkAdvancedInitializationSettings;
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering;
struct FAkAndroidAdvancedInitializationSettings;
struct FAkAndroidDeviceSpecializeAudioApiInfo;
struct FAkAudioSession;
struct FAkExternalSourceInfo;
struct FAkSegmentInfo;
struct FAkMidiEventBase;
struct FAkMidiProgramChange;
struct FAkMidiChannelAftertouch;
struct FAkMidiNoteAftertouch;
struct FAkMidiPitchBend;
struct FAkMidiCc;
struct FAkMidiNoteOnOff;
struct FAkMidiGeneric;
struct FAkChannelMask;
struct FAkGeometrySurfaceOverride;
struct FAkGeometryData;
struct FAkTriangle;
struct FAkAcousticSurface;
struct FAkHololensAdvancedInitializationSettings;
struct FAkPluginInfo;
struct FAkMainOutputSettings;
struct FAkSpatialAudioSettings;
struct FAkCommonInitializationSettings;
struct FAkCommonInitializationSettingsWithSampleRate;
struct FAkCommunicationSettings;
struct FAkCommunicationSettingsWithCommSelection;
struct FAkCommunicationSettingsWithSystemInitialization;
struct FAkBoolPropertyToControl;
struct FAkPropertyToControl;
struct FAkOpenHarmonyAdvancedInitializationSettings;
struct FAkPS4AdvancedInitializationSettings;
struct FAkGeometrySurfacePropertiesToMap;
struct FAkWwiseObjectDetails;
struct FAkWwiseItemToControl;
struct FAkPoly;
struct FAkSurfacePoly;
struct FAkSurfaceEdgeInfo;
struct FAkSurfaceEdgeVerts;
struct FAkWaapiFieldNames;
struct FAkWaapiUri;
struct FAkWindowsAdvancedInitializationSettings;
struct FAkXboxOneApuHeapInitializationSettings;
struct FAkXboxOneAdvancedInitializationSettings;
struct FAkAudioEventTrackKey;
struct FMovieSceneAkAudioEventTemplate;
struct FMovieSceneAkAudioRTPCTemplate;
struct FMovieSceneFloatChannelSerializationHelper;
struct FMovieSceneTangentDataSerializationHelper;
struct FMovieSceneFloatValueSerializationHelper;
struct UAkGameObject;
struct UAkComponent;
struct UAkLateReverbComponent;
struct AAkAcousticPortal;
struct UAkPortalComponent;
struct UAkAudioType;
struct UAkAcousticTexture;
struct AAkAmbientSound;
struct UAkAndroidInitializationSettings;
struct UAkPlatformInfo;
struct UAkAndroidPlatformInfo;
struct UAkAssetBase;
struct UAkAssetData;
struct UAkAssetDataWithMedia;
struct UAkAssetPlatformData;
struct UAkAssetDataSwitchContainerData;
struct UAkAssetDataSwitchContainer;
struct UAkAudioEventData;
struct UAkAudioEvent;
struct UAkAudioBank;
struct UAkAudioInputComponent;
struct UAkAuxBus;
struct UAkCheckBox;
struct UAkEventMemoryStatistics;
struct UAkFolder;
struct UAkGameplayStatics;
struct UAkCallbackInfo;
struct UAkEventCallbackInfo;
struct UAkMIDIEventCallbackInfo;
struct UAkMarkerCallbackInfo;
struct UAkDurationCallbackInfo;
struct UAkMusicSyncCallbackInfo;
struct UAkGeometryComponent;
struct UAkGroupValue;
struct UAkHololensInitializationSettings;
struct UAkHololensPlatformInfo;
struct UAkInitBankAssetData;
struct UAkInitBank;
struct UAkIOSInitializationSettings;
struct UAkIOSPlatformInfo;
struct UAkItemBoolPropertiesConv;
struct UAkItemBoolProperties;
struct UAkItemPropertiesConv;
struct UAkItemProperties;
struct UAkLinuxInitializationSettings;
struct UAkLinuxPlatformInfo;
struct UAkLuminInitializationSettings;
struct UAkLuminPlatformInfo;
struct UAkMacInitializationSettings;
struct UAkMacPlatformInfo;
struct UAkMediaAssetData;
struct UAkMediaAsset;
struct UAkLocalizedMediaAsset;
struct UAkExternalMediaAsset;
struct UAkOpenHarmonyInitializationSettings;
struct UAkOpenHarmonyPlatformInfo;
struct IAkPlatformInitialisationSettingsBase;
struct UAkPS4InitializationSettings;
struct UAkPS4PlatformInfo;
struct AAkReverbVolume;
struct UAkRoomComponent;
struct UAkRtpc;
struct UAkSettings;
struct UAkSettingsPerUser;
struct UAkSlider;
struct AAkSpatialAudioVolume;
struct AAkSpotReflector;
struct UAkStateValue;
struct UAkSurfaceReflectorSetComponent;
struct UAkSwitchInitializationSettings;
struct UAkSwitchPlatformInfo;
struct UAkSwitchValue;
struct UAkTrigger;
struct UAkTVOSInitializationSettings;
struct UAkTVOSPlatformInfo;
struct UAkWaapiCalls;
struct USAkWaapiFieldNamesConv;
struct UAkWaapiJsonManager;
struct UAkWaapiUriConv;
struct UAkWindowsInitializationSettings;
struct UAkWin32PlatformInfo;
struct UAkWin64PlatformInfo;
struct UAkWindowsPlatformInfo;
struct UAkWwiseTree;
struct UAkWwiseTreeSelector;
struct UAkXboxOneInitializationSettings;
struct UAkXboxOnePlatformInfo;
struct UInterpTrackAkAudioEvent;
struct UInterpTrackAkAudioRTPC;
struct UInterpTrackInstAkAudioEvent;
struct UInterpTrackInstAkAudioRTPC;
struct UJAkPerformanceStatistics;
struct UMovieSceneAkAudioEventSection;
struct UMovieSceneAkTrack;
struct UMovieSceneAkAudioEventTrack;
struct UMovieSceneAkAudioRTPCSection;
struct UMovieSceneAkAudioRTPCTrack;
struct UPostEventAsync;
struct UPostEventAtLocationAsync;

// Object: Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EndOfEvent = 0,
	Marker = 2,
	Duration = 3,
	Starvation = 5,
	MusicPlayStarted = 7,
	MusicSyncBeat = 8,
	MusicSyncBar = 9,
	MusicSyncEntry = 10,
	MusicSyncExit = 11,
	MusicSyncGrid = 12,
	MusicSyncUserCue = 13,
	MusicSyncPoint = 14,
	MIDIEvent = 16,
	EAkCallbackType_MAX = 17
};

// Object: Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 7,
	AudioFileHeaderTooLarge = 8,
	MaxReached = 9,
	InvalidID = 14,
	IDNotFound = 15,
	InvalidInstanceID = 16,
	NoMoreData = 17,
	InvalidStateGroup = 20,
	ChildAlreadyHasAParent = 21,
	InvalidLanguage = 22,
	CannotAddItseflAsAChild = 23,
	InvalidParameter = 31,
	ElementAlreadyInList = 35,
	PathNotFound = 36,
	PathNoVertices = 37,
	PathNotRunning = 38,
	PathNotPaused = 39,
	PathNodeAlreadyInList = 40,
	PathNodeNotInList = 41,
	DataNeeded = 43,
	NoDataNeeded = 44,
	DataReady = 45,
	NoDataReady = 46,
	InsufficientMemory = 52,
	Cancelled = 53,
	UnknownBankID = 54,
	BankReadError = 56,
	InvalidSwitchType = 57,
	FormatNotReady = 63,
	WrongBankVersion = 64,
	FileNotFound = 66,
	DeviceNotReady = 67,
	BankAlreadyLoaded = 69,
	RenderedFX = 71,
	ProcessNeeded = 72,
	ProcessDone = 73,
	MemManagerNotInitialized = 74,
	StreamMgrNotInitialized = 75,
	SSEInstructionsNotSupported = 76,
	Busy = 77,
	UnsupportedChannelConfig = 78,
	PluginMediaNotAvailable = 79,
	MustBeVirtualized = 80,
	CommandTooLarge = 81,
	RejectedByFilter = 82,
	InvalidCustomPlatformName = 83,
	DLLCannotLoad = 84,
	DLLPathNotFound = 85,
	NoJavaVM = 86,
	OpenSLError = 87,
	PluginNotRegistered = 88,
	DataAlignmentError = 89,
	EAkResult_MAX = 90
};

// Object: Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2
};

// Object: Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
	EAkAudioSessionMode_MAX = 7
};

// Object: Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4
};

// Object: Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3
};

// Object: Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3
};

// Object: Enum AkAudio.AkCodecId
enum class EAkCodecId : uint8_t
{
	None = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	AAC = 10,
	ATRAC9 = 12,
	OpusNX = 17,
	AkOpus = 19,
	AkOpusWEM = 20,
	AkCodecId_MAX = 21
};

// Object: Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 52,
	AkMidiCcCtrl21Fine = 53,
	AkMidiCcCtrl22Fine = 54,
	AkMidiCcCtrl23Fine = 55,
	AkMidiCcCtrl24Fine = 56,
	AkMidiCcCtrl25Fine = 57,
	AkMidiCcCtrl26Fine = 58,
	AkMidiCcCtrl27Fine = 59,
	AkMidiCcCtrl28Fine = 60,
	AkMidiCcCtrl29Fine = 61,
	AkMidiCcCtrl30Fine = 62,
	AkMidiCcCtrl31Fine = 63,
	AkMidiCcHoldPedal = 64,
	AkMidiCcPortamentoOnOff = 65,
	AkMidiCcSustenutoPedal = 66,
	AkMidiCcSoftPedal = 67,
	AkMidiCcLegatoPedal = 68,
	AkMidiCcHoldPedal2 = 69,
	AkMidiCcSoundVariation = 70,
	AkMidiCcSoundTimbre = 71,
	AkMidiCcSoundReleaseTime = 72,
	AkMidiCcSoundAttackTime = 73,
	AkMidiCcSoundBrightness = 74,
	AkMidiCcSoundCtrl6 = 75,
	AkMidiCcSoundCtrl7 = 76,
	AkMidiCcSoundCtrl8 = 77,
	AkMidiCcSoundCtrl9 = 78,
	AkMidiCcSoundCtrl10 = 79,
	AkMidiCcGeneralButton1 = 80,
	AkMidiCcGeneralButton2 = 81,
	AkMidiCcGeneralButton3 = 82,
	AkMidiCcGeneralButton4 = 83,
	AkMidiCcReverbLevel = 91,
	AkMidiCcTremoloLevel = 92,
	AkMidiCcChorusLevel = 93,
	AkMidiCcCelesteLevel = 94,
	AkMidiCcPhaserLevel = 95,
	AkMidiCcDataButtonP1 = 96,
	AkMidiCcDataButtonM1 = 97,
	AkMidiCcNonRegisterCoarse = 98,
	AkMidiCcNonRegisterFine = 99,
	AkMidiCcAllSoundOff = 120,
	AkMidiCcAllControllersOff = 121,
	AkMidiCcLocalKeyboard = 122,
	AkMidiCcAllNotesOff = 123,
	AkMidiCcOmniModeOff = 124,
	AkMidiCcOmniModeOn = 125,
	AkMidiCcOmniMonophonicOn = 126,
	AkMidiCcOmniPolyphonicOn = 127,
	EAkMidiCcValues_MAX = 128
};

// Object: Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint16_t
{
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 128,
	AkMidiEventTypeNoteOn = 144,
	AkMidiEventTypeNoteAftertouch = 160,
	AkMidiEventTypeController = 176,
	AkMidiEventTypeProgramChange = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend = 224,
	AkMidiEventTypeSysex = 240,
	AkMidiEventTypeEscape = 247,
	AkMidiEventTypeMeta = 255,
	EAkMidiEventType_MAX = 256
};

// Object: Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5
};

// Object: Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 9,
	Constant = 10,
	EAkCurveInterpolation_MAX = 11
};

// Object: Enum AkAudio.AkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5
};

// Object: Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3
};

// Object: Enum AkAudio.AkSpeakerConfiguration
enum class EAkSpeakerConfiguration : uint32_t
{
	Ak_Speaker_Front_Left = 1,
	Ak_Speaker_Front_Right = 2,
	Ak_Speaker_Front_Center = 4,
	Ak_Speaker_Low_Frequency = 8,
	Ak_Speaker_Back_Left = 16,
	Ak_Speaker_Back_Right = 32,
	Ak_Speaker_Back_Center = 256,
	Ak_Speaker_Side_Left = 512,
	Ak_Speaker_Side_Right = 1024,
	Ak_Speaker_Top = 2048,
	Ak_Speaker_Height_Front_Left = 4096,
	Ak_Speaker_Height_Front_Center = 8192,
	Ak_Speaker_Height_Front_Right = 16384,
	Ak_Speaker_Height_Back_Left = 32768,
	Ak_Speaker_Height_Back_Center = 65536,
	Ak_Speaker_Height_Back_Right = 131072,
	Ak_Speaker_MAX = 131073
};

// Object: Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	Ak_Parent = 0,
	Ak_LFE = 1,
	Ak_1_0 = 2,
	Ak_2_0 = 3,
	Ak_2_1 = 4,
	Ak_3_0 = 5,
	Ak_3_1 = 6,
	Ak_4_0 = 7,
	Ak_4_1 = 8,
	Ak_5_0 = 9,
	Ak_5_1 = 10,
	Ak_7_1 = 11,
	Ak_5_1_2 = 12,
	Ak_7_1_2 = 13,
	Ak_7_1_4 = 14,
	Ak_Auro_9_1 = 15,
	Ak_Auro_10_1 = 16,
	Ak_Auro_11_1 = 17,
	Ak_Auro_13_1 = 18,
	Ak_Ambisonics_1st_order = 19,
	Ak_Ambisonics_2nd_order = 20,
	Ak_Ambisonics_3rd_order = 21,
	Ak_MAX = 22
};

// Object: Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2
};

// Object: Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2
};

// Object: Enum AkAudio.LeakingMediaMemTickRule
enum class ELeakingMediaMemTickRule : uint8_t
{
	None = 0,
	TryUnsetMedia = 1,
	ForceUnsetMedia_NonPlaying = 2,
	LeakingMediaMemTickRule_MAX = 3
};

// Object: Enum AkAudio.MediaMemReuseRule
enum class EMediaMemReuseRule : uint8_t
{
	None = 0,
	Only_Leaking = 1,
	Leaking_And_OnSetting = 2,
	MediaMemReuseRule_MAX = 3
};

// Object: Enum AkAudio.AkMeshType
enum class EAkMeshType : uint8_t
{
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2
};

// Object: Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : uint8_t
{
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3
};

// Object: Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2
};

// Object: Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 8,
	SideLeft = 9,
	SideRight = 10,
	Top = 11,
	HeightFrontLeft = 12,
	HeightFrontCenter = 13,
	HeightFrontRight = 14,
	HeightBackLeft = 15,
	HeightBackCenter = 16,
	HeightBackRight = 17,
	EAkChannelMask_MAX = 18
};

// Object: Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3
};

// Object: Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : uint8_t
{
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 3,
	EAkDiffractionFlags_MAX = 4
};

// Object: Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2
};

// Object: Enum AkAudio.EAkOcclusionTraceType
enum class EAkOcclusionTraceType : uint8_t
{
	Default = 0,
	OnlyListenerToSourceSurfaceTrace = 1,
	FourFurthestPointEvaluation = 2,
	EAkOcclusionTraceType_MAX = 3
};

// Object: Enum AkAudio.EAkOpenHarmonyAudioAPI
enum class EAkOpenHarmonyAudioAPI : uint8_t
{
	AAudio = 0,
	OpenSL_ES = 1,
	EAkOpenHarmonyAudioAPI_MAX = 2
};

// Object: Enum AkAudio.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : uint8_t
{
	OrientedBox = 0,
	AlignedBox = 1,
	ConvexPolyhedron = 2,
	EAkFitToGeometryMode_MAX = 3
};

// Object: Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8_t
{
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3
};

// Object: ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10 (Inherited: 0x0)
struct FAKWaapiJsonObject
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x8 (Inherited: 0x0)
struct FAkWaapiSubscriptionId
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// Size: 0x1 (Inherited: 0x0)
struct FAkAmbSoundCheckpointRecord
{
	uint8_t bCurrentlyPlaying : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
// Size: 0x8 (Inherited: 0x0)
struct FAkAdvancedSpatialAudioSettings
{
	float DiffractionShadowAttenuationFactor; // 0x0(0x4)
	float DiffractionShadowDegrees; // 0x4(0x4)
};

// Object: ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size: 0x34 (Inherited: 0x0)
struct FAkAdvancedInitializationSettings
{
	uint32_t IO_MemorySize; // 0x0(0x4)
	uint32_t IO_Granularity; // 0x4(0x4)
	float TargetAutoStreamBufferLength; // 0x8(0x4)
	uint8_t UseStreamCache : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x4)
	uint8_t EnableGameSyncPreparation : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x4)
	uint32_t MonitorQueuePoolSize; // 0x1C(0x4)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x4)
	uint8_t DebugOutOfRangeCheckEnabled : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float DebugOutOfRangeLimit; // 0x28(0x4)
	struct FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2C(0x8)
};

// Object: ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x38 (Inherited: 0x34)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{
	uint8_t EnableMultiCoreRendering : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x68 (Inherited: 0x38)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI; // 0x38(0x4)
	uint8_t RoundFrameSizeToHardwareSize : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	int32_t MiniAAudioAndroidApiLevel; // 0x40(0x4)
	int32_t MiniLevelMustUseAAudio; // 0x44(0x4)
	struct TArray<struct FString> AAudioBlackList; // 0x48(0x10)
	struct TArray<struct FAkAndroidDeviceSpecializeAudioApiInfo> SpecialDeviceList; // 0x58(0x10)
};

// Object: ScriptStruct AkAudio.AkAndroidDeviceSpecializeAudioApiInfo
// Size: 0x18 (Inherited: 0x0)
struct FAkAndroidDeviceSpecializeAudioApiInfo
{
	struct FString DeviceName; // 0x0(0x10)
	int32_t ApiLevel; // 0x10(0x4)
	uint32_t AudioAPI; // 0x14(0x4)
};

// Object: ScriptStruct AkAudio.AkAudioSession
// Size: 0xC (Inherited: 0x0)
struct FAkAudioSession
{
	EAkAudioSessionCategory AudioSessionCategory; // 0x0(0x4)
	uint32_t AudioSessionCategoryOptions; // 0x4(0x4)
	EAkAudioSessionMode AudioSessionMode; // 0x8(0x4)
};

// Object: ScriptStruct AkAudio.AkExternalSourceInfo
// Size: 0x38 (Inherited: 0x0)
struct FAkExternalSourceInfo
{
	struct FString ExternalSrcName; // 0x0(0x10)
	EAkCodecId CodecID; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString Filename; // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset; // 0x28(0x8)
	uint8_t IsStreamed : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24 (Inherited: 0x0)
struct FAkSegmentInfo
{
	int32_t CurrentPosition; // 0x0(0x4)
	int32_t PreEntryDuration; // 0x4(0x4)
	int32_t ActiveDuration; // 0x8(0x4)
	int32_t PostExitDuration; // 0xC(0x4)
	int32_t RemainingLookAheadTime; // 0x10(0x4)
	float BeatDuration; // 0x14(0x4)
	float BarDuration; // 0x18(0x4)
	float GridDuration; // 0x1C(0x4)
	float GridOffset; // 0x20(0x4)
};

// Object: ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x2 (Inherited: 0x0)
struct FAkMidiEventBase
{
	EAkMidiEventType Type; // 0x0(0x1)
	uint8_t Chan; // 0x1(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x3 (Inherited: 0x2)
struct FAkMidiProgramChange : FAkMidiEventBase
{
	uint8_t ProgramNum; // 0x2(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x3 (Inherited: 0x2)
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{
	uint8_t Value; // 0x2(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{
	uint8_t Note; // 0x2(0x1)
	uint8_t Value; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x8 (Inherited: 0x2)
struct FAkMidiPitchBend : FAkMidiEventBase
{
	uint8_t ValueLsb; // 0x2(0x1)
	uint8_t ValueMsb; // 0x3(0x1)
	int32_t FullValue; // 0x4(0x4)
};

// Object: ScriptStruct AkAudio.AkMidiCc
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiCc : FAkMidiEventBase
{
	EAkMidiCcValues Cc; // 0x2(0x1)
	uint8_t Value; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiNoteOnOff : FAkMidiEventBase
{
	uint8_t Note; // 0x2(0x1)
	uint8_t Velocity; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiGeneric : FAkMidiEventBase
{
	uint8_t Param1; // 0x2(0x1)
	uint8_t Param2; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkChannelMask
// Size: 0x4 (Inherited: 0x0)
struct FAkChannelMask
{
	int32_t ChannelMask; // 0x0(0x4)
};

// Object: ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size: 0x10 (Inherited: 0x0)
struct FAkGeometrySurfaceOverride
{
	struct UAkAcousticTexture* AcousticTexture; // 0x0(0x8)
	uint8_t bEnableOcclusionOverride : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float OcclusionValue; // 0xC(0x4)
};

// Object: ScriptStruct AkAudio.AkGeometryData
// Size: 0x50 (Inherited: 0x0)
struct FAkGeometryData
{
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles; // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion; // 0x40(0x10)
};

// Object: ScriptStruct AkAudio.AkTriangle
// Size: 0x8 (Inherited: 0x0)
struct FAkTriangle
{
	uint16_t Point0; // 0x0(0x2)
	uint16_t Point1; // 0x2(0x2)
	uint16_t Point2; // 0x4(0x2)
	uint16_t Surface; // 0x6(0x2)
};

// Object: ScriptStruct AkAudio.AkAcousticSurface
// Size: 0x18 (Inherited: 0x0)
struct FAkAcousticSurface
{
	uint32_t Texture; // 0x0(0x4)
	float Occlusion; // 0x4(0x4)
	struct FString Name; // 0x8(0x10)
};

// Object: ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI; // 0x38(0x4)
	uint8_t GlobalFocus : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t UseHeadMountedDisplayAudioDevice : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct AkAudio.AkPluginInfo
// Size: 0x28 (Inherited: 0x0)
struct FAkPluginInfo
{
	struct FString Name; // 0x0(0x10)
	uint32_t PluginID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString DLL; // 0x18(0x10)
};

// Object: ScriptStruct AkAudio.AkMainOutputSettings
// Size: 0x28 (Inherited: 0x0)
struct FAkMainOutputSettings
{
	struct FString AudioDeviceShareset; // 0x0(0x10)
	uint32_t DeviceID; // 0x10(0x4)
	EAkPanningRule PanningRule; // 0x14(0x4)
	EAkChannelConfigType ChannelConfigType; // 0x18(0x4)
	uint32_t ChannelMask; // 0x1C(0x4)
	uint32_t NumberOfChannels; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct AkAudio.AkSpatialAudioSettings
// Size: 0x20 (Inherited: 0x0)
struct FAkSpatialAudioSettings
{
	uint32_t MaxSoundPropagationDepth; // 0x0(0x4)
	uint32_t DiffractionFlags; // 0x4(0x4)
	float MovementThreshold; // 0x8(0x4)
	uint32_t NumberOfPrimaryRays; // 0xC(0x4)
	uint32_t ReflectionOrder; // 0x10(0x4)
	uint8_t EnableDiffractionOnReflections : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t EnableDirectPathDiffraction : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float MaximumPathLength; // 0x18(0x4)
	uint8_t EnableTransmission : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct AkAudio.AkCommonInitializationSettings
// Size: 0x60 (Inherited: 0x0)
struct FAkCommonInitializationSettings
{
	uint32_t MaximumNumberOfMemoryPools; // 0x0(0x4)
	uint32_t MaximumNumberOfPositioningPaths; // 0x4(0x4)
	uint32_t CommandQueueSize; // 0x8(0x4)
	uint32_t SamplesPerFrame; // 0xC(0x4)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10(0x28)
	float StreamingLookAheadRatio; // 0x38(0x4)
	uint16_t NumberOfRefillsInVoice; // 0x3C(0x2)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40(0x20)
};

// Object: ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x68 (Inherited: 0x60)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{
	uint32_t SampleRate; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct AkAudio.AkCommunicationSettings
// Size: 0x20 (Inherited: 0x0)
struct FAkCommunicationSettings
{
	uint32_t PoolSize; // 0x0(0x4)
	uint16_t DiscoveryBroadcastPort; // 0x4(0x2)
	uint16_t CommandPort; // 0x6(0x2)
	uint16_t NotificationPort; // 0x8(0x2)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FString NetworkName; // 0x10(0x10)
};

// Object: ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{
	EAkCommSystem CommunicationSystem; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{
	uint8_t InitializeSystemComms : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10 (Inherited: 0x0)
struct FAkBoolPropertyToControl
{
	struct FString ItemProperty; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10 (Inherited: 0x0)
struct FAkPropertyToControl
{
	struct FString ItemProperty; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkOpenHarmonyAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkOpenHarmonyAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI; // 0x38(0x4)
	uint8_t RoundFrameSizeToHardwareSize : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t ACPBatchBufferSize; // 0x38(0x4)
	uint8_t UseHardwareCodecLowLatencyMode : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x30 (Inherited: 0x0)
struct FAkGeometrySurfacePropertiesToMap
{
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0(0x28)
	float OcclusionValue; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x0)
struct FAkWwiseObjectDetails
{
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemID; // 0x20(0x10)
};

// Object: ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40 (Inherited: 0x0)
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails ItemPicked; // 0x0(0x30)
	struct FString ItemPath; // 0x30(0x10)
};

// Object: ScriptStruct AkAudio.AkPoly
// Size: 0x10 (Inherited: 0x0)
struct FAkPoly
{
	struct UAkAcousticTexture* Texture; // 0x0(0x8)
	float Occlusion; // 0x8(0x4)
	uint8_t EnableSurface : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AkAudio.AkSurfacePoly
// Size: 0x18 (Inherited: 0x0)
struct FAkSurfacePoly
{
	struct UAkAcousticTexture* Texture; // 0x0(0x8)
	float Occlusion; // 0x8(0x4)
	uint8_t EnableSurface : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float SurfaceArea; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct AkAudio.AkSurfaceEdgeInfo
// Size: 0x28 (Inherited: 0x0)
struct FAkSurfaceEdgeInfo
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct AkAudio.AkSurfaceEdgeVerts
// Size: 0x18 (Inherited: 0x0)
struct FAkSurfaceEdgeVerts
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10 (Inherited: 0x0)
struct FAkWaapiFieldNames
{
	struct FString FieldName; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10 (Inherited: 0x0)
struct FAkWaapiUri
{
	struct FString Uri; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI; // 0x38(0x4)
	uint8_t GlobalFocus : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t UseHeadMountedDisplayAudioDevice : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size: 0x8 (Inherited: 0x0)
struct FAkXboxOneApuHeapInitializationSettings
{
	uint32_t CachedSize; // 0x0(0x4)
	uint32_t NonCachedSize; // 0x4(0x4)
};

// Object: ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size: 0x3C (Inherited: 0x38)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint16_t MaximumNumberOfXMAVoices; // 0x36(0x2)
	uint8_t UseHardwareCodecLowLatencyMode : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x1]; // 0x3B(0x1)
};

// Object: ScriptStruct AkAudio.AkAudioEventTrackKey
// Size: 0x20 (Inherited: 0x0)
struct FAkAudioEventTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UAkAudioEvent* AkAudioEvent; // 0x8(0x8)
	struct FString EventName; // 0x10(0x10)
};

// Object: ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioEventSection* Section; // 0x18(0x8)
};

// Object: ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x18(0x8)
};

// Object: ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneFloatChannelSerializationHelper
{
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0(0x1)
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<int32_t> Times; // 0x8(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x4)
	uint8_t bHasDefaultValue : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentDataSerializationHelper
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ArriveTangentWeight; // 0xC(0x4)
	float LeaveTangentWeight; // 0x10(0x4)
};

// Object: ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneFloatValueSerializationHelper
{
	float Value; // 0x0(0x4)
	ERichCurveInterpMode InterpMode; // 0x4(0x1)
	ERichCurveTangentMode TangentMode; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x8(0x14)
};

// Object: Class AkAudio.AkGameObject
// Size: 0x260 (Inherited: 0x240)
struct UAkGameObject : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkGameObject, "AkGameObject")

	struct UAkAudioEvent* AkAudioEvent; // 0x240(0x8)
	struct FString EventName; // 0x248(0x10)
	uint8_t Pad_0x258[0x8]; // 0x258(0x8)

	// Object: Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834c900
	// Params: [ Num(6) Size(0x4C) ]
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingId);

	// Object: Function AkAudio.AkGameObject.PostAssociatedAkEvent
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834c784
	// Params: [ Num(4) Size(0x2C) ]
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources);

	// Object: Function AkAudio.AkGameObject.PostAkEventAsync
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834c4fc
	// Params: [ Num(7) Size(0x50) ]
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingId, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameObject.PostAkEvent
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834c300
	// Params: [ Num(6) Size(0x44) ]
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName);
};

// Object: Class AkAudio.AkComponent
// Size: 0x6D0 (Inherited: 0x260)
struct UAkComponent : UAkGameObject
{
	DEFINE_UE_CLASS_HELPERS(UAkComponent, "AkComponent")

	uint8_t bUseSpatialAudio : 1; // 0x25A(0x1), Mask(0x1)
	ECollisionChannel OcclusionCollisionChannel; // 0x260(0x1)
	ECollisionChannel OriginalOcclusionCollisionChannel; // 0x261(0x1)
	uint8_t BitPad_0x262_1 : 7; // 0x262(0x1)
	uint8_t Pad_0x263[0x1]; // 0x263(0x1)
	struct FVector OcclusionTraceOffset; // 0x264(0xC)
	uint8_t EnableSpotReflectors : 1; // 0x270(0x1), Mask(0x1)
	uint8_t BitPad_0x270_1 : 7; // 0x270(0x1)
	uint8_t Pad_0x271[0x7]; // 0x271(0x7)
	struct FString DebugName; // 0x278(0x10)
	int32_t DebugIndex; // 0x288(0x4)
	uint8_t Pad_0x28C[0x4]; // 0x28C(0x4)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x290(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x298(0x10)
	int32_t EarlyReflectionOrder; // 0x2A8(0x4)
	float EarlyReflectionBusSendGain; // 0x2AC(0x4)
	float EarlyReflectionMaxPathLength; // 0x2B0(0x4)
	float roomReverbAuxBusGain; // 0x2B4(0x4)
	int32_t diffractionMaxEdges; // 0x2B8(0x4)
	int32_t diffractionMaxPaths; // 0x2BC(0x4)
	float diffractionMaxPathLength; // 0x2C0(0x4)
	uint8_t DrawFirstOrderReflections : 1; // 0x2C4(0x1), Mask(0x1)
	uint8_t DrawSecondOrderReflections : 1; // 0x2C4(0x1), Mask(0x2)
	uint8_t DrawHigherOrderReflections : 1; // 0x2C4(0x1), Mask(0x4)
	uint8_t DrawDiffraction : 1; // 0x2C4(0x1), Mask(0x8)
	uint8_t DrawOccObs : 1; // 0x2C4(0x1), Mask(0x10)
	uint8_t BitPad_0x2C4_5 : 3; // 0x2C4(0x1)
	uint8_t Pad_0x2C5[0x3]; // 0x2C5(0x3)
	float RoomObstructionValue; // 0x2C8(0x4)
	uint8_t StopWhenOwnerDestroyed : 1; // 0x2CC(0x1), Mask(0x1)
	uint8_t BitPad_0x2CC_1 : 7; // 0x2CC(0x1)
	uint8_t Pad_0x2CD[0x3]; // 0x2CD(0x3)
	float AttenuationScalingFactor; // 0x2D0(0x4)
	float OcclusionRefreshInterval; // 0x2D4(0x4)
	uint8_t bUseReverbVolumes : 1; // 0x2D8(0x1), Mask(0x1)
	uint8_t BitPad_0x2D8_1 : 7; // 0x2D8(0x1)
	uint8_t bAutoUpdateReverbVolumes : 1; // 0x2D9(0x1), Mask(0x1)
	uint8_t BitPad_0x2D9_1 : 7; // 0x2D9(0x1)
	uint8_t Pad_0x2DA[0x3F6]; // 0x2DA(0x3F6)

	// Object: Function AkAudio.AkComponent.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x834847c
	// Params: [ Num(1) Size(0x1) ]
	void UseReverbVolumes(uint8_t inUseReverbVolumes);

	// Object: Function AkAudio.AkComponent.UseEarlyReflections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x83482a0
	// Params: [ Num(6) Size(0x28) ]
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, uint8_t SpotReflectors, struct FString AuxBusName);

	// Object: Function AkAudio.AkComponent.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x83480e0
	// Params: [ Num(3) Size(0x28) ]
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8348034
	// Params: [ Num(1) Size(0x1) ]
	void SetStopWhenOwnerDestroyed(uint8_t bStopWhenOwnerDestroyed);

	// Object: Function AkAudio.AkComponent.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8347e6c
	// Params: [ Num(4) Size(0x20) ]
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC);

	// Object: Function AkAudio.AkComponent.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8347dc8
	// Params: [ Num(1) Size(0x4) ]
	void SetOutputBusVolume(float BusVolume);

	// Object: Function AkAudio.AkComponent.SetListeners
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8347d0c
	// Params: [ Num(1) Size(0x10) ]
	void SetListeners(const struct TArray<struct UAkComponent*>& Listeners);

	// Object: Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8347c68
	// Params: [ Num(1) Size(0x4) ]
	void SetEarlyReflectionsVolume(float SendVolume);

	// Object: Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8347bbc
	// Params: [ Num(1) Size(0x10) ]
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName);

	// Object: Function AkAudio.AkComponent.SetAttenuationScalingFactor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8347b18
	// Params: [ Num(1) Size(0x4) ]
	void SetAttenuationScalingFactor(float Value);

	// Object: Function AkAudio.AkComponent.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x83479e0
	// Params: [ Num(2) Size(0x18) ]
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger);

	// Object: Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834787c
	// Params: [ Num(3) Size(0x30) ]
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingId, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834775c
	// Params: [ Num(3) Size(0x2C) ]
	int32_t PostAssociatedAkEventAndWaitForEnd(const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PostAkEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x83476a8
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostAkEventByName(struct FString in_EventName);

	// Object: Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8347508
	// Params: [ Num(4) Size(0x38) ]
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingId, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8347368
	// Params: [ Num(5) Size(0x44) ]
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834710c
	// Params: [ Num(6) Size(0x2C) ]
	void GetRTPCValue(struct UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingId);

	// Object: Function AkAudio.AkComponent.GetDistanceFromNearestListener
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83470d8
	// Params: [ Num(1) Size(0x4) ]
	float GetDistanceFromNearestListener();

	// Object: Function AkAudio.AkComponent.GetDistanceFromFirstListener
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83470a4
	// Params: [ Num(1) Size(0x4) ]
	float GetDistanceFromFirstListener();

	// Object: Function AkAudio.AkComponent.GetAttenuationRadius
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8347070
	// Params: [ Num(1) Size(0x4) ]
	float GetAttenuationRadius();
};

// Object: Class AkAudio.AkLateReverbComponent
// Size: 0x280 (Inherited: 0x240)
struct UAkLateReverbComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkLateReverbComponent, "AkLateReverbComponent")

	uint8_t bEnable : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)
	struct UAkAuxBus* AuxBus; // 0x248(0x8)
	struct FString AuxBusName; // 0x250(0x10)
	float SendLevel; // 0x260(0x4)
	float FadeRate; // 0x264(0x4)
	float Priority; // 0x268(0x4)
	uint8_t Pad_0x26C[0x4]; // 0x26C(0x4)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x270(0x8)
	uint8_t Pad_0x278[0x8]; // 0x278(0x8)
};

// Object: Class AkAudio.AkAcousticPortal
// Size: 0x518 (Inherited: 0x3A8)
struct AAkAcousticPortal : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkAcousticPortal, "AkAcousticPortal")

	EAkAcousticPortalState InitialState; // 0x3A8(0x1)
	uint8_t Pad_0x3A9[0x3]; // 0x3A9(0x3)
	float ObstructionRefreshInterval; // 0x3AC(0x4)
	ECollisionChannel ObstructionCollisionChannel; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x167]; // 0x3B1(0x167)

	// Object: Function AkAudio.AkAcousticPortal.OpenPortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8345e18
	// Params: [ Num(0) Size(0x0) ]
	void OpenPortal();

	// Object: Function AkAudio.AkAcousticPortal.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8345de4
	// Params: [ Num(1) Size(0x1) ]
	EAkAcousticPortalState GetCurrentState();

	// Object: Function AkAudio.AkAcousticPortal.ClosePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8345dd0
	// Params: [ Num(0) Size(0x0) ]
	void ClosePortal();
};

// Object: Class AkAudio.AkPortalComponent
// Size: 0x240 (Inherited: 0x240)
struct UAkPortalComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkPortalComponent, "AkPortalComponent")
};

// Object: Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioType, "AkAudioType")

	struct TArray<struct UObject*> UserData; // 0x28(0x10)
	uint32_t ShortID; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkAcousticTexture, "AkAcousticTexture")
};

// Object: Class AkAudio.AkAmbientSound
// Size: 0x3B0 (Inherited: 0x370)
struct AAkAmbientSound : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAkAmbientSound, "AkAmbientSound")

	struct UAkAudioEvent* AkAudioEvent; // 0x370(0x8)
	struct UAkComponent* AkComponent; // 0x378(0x8)
	uint8_t StopWhenOwnerIsDestroyed : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t AutoPost : 1; // 0x381(0x1), Mask(0x1)
	uint8_t BitPad_0x381_1 : 7; // 0x381(0x1)
	uint8_t Pad_0x382[0x2E]; // 0x382(0x2E)

	// Object: Function AkAudio.AkAmbientSound.StopAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8345eb0
	// Params: [ Num(0) Size(0x0) ]
	void StopAmbientSound();

	// Object: Function AkAudio.AkAmbientSound.StartAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8345e9c
	// Params: [ Num(0) Size(0x0) ]
	void StartAmbientSound();
};

// Object: Class AkAudio.AkAndroidInitializationSettings
// Size: 0x128 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAndroidInitializationSettings, "AkAndroidInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x68)

	// Object: Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x83460b8
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkPlatformInfo, "AkPlatformInfo")

	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
};

// Object: Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkAndroidPlatformInfo, "AkAndroidPlatformInfo")
};

// Object: Class AkAudio.AkAssetBase
// Size: 0x50 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetBase, "AkAssetBase")

	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: Class AkAudio.AkAssetData
// Size: 0x1A0 (Inherited: 0x28)
struct UAkAssetData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetData, "AkAssetData")

	uint32_t CachedHash; // 0x28(0x4)
	uint32_t CachedHash_LQ; // 0x2C(0x4)
	struct FString BankLanguage; // 0x30(0x10)
	uint8_t Pad_0x40[0x160]; // 0x40(0x160)
};

// Object: Class AkAudio.AkAssetDataWithMedia
// Size: 0x200 (Inherited: 0x1A0)
struct UAkAssetDataWithMedia : UAkAssetData
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetDataWithMedia, "AkAssetDataWithMedia")

	struct TArray<struct UAkMediaAsset*> MediaList; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x50]; // 0x1B0(0x50)
};

// Object: Class AkAudio.AkAssetPlatformData
// Size: 0x38 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetPlatformData, "AkAssetPlatformData")

	struct UAkAssetData* CurrentAssetData; // 0x28(0x8)
	struct UAkAssetData* CurrentAssetData_LQ; // 0x30(0x8)
};

// Object: Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x78 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetDataSwitchContainerData, "AkAssetDataSwitchContainerData")

	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x8)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Object: Class AkAudio.AkAssetDataSwitchContainer
// Size: 0x268 (Inherited: 0x200)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetDataSwitchContainer, "AkAssetDataSwitchContainer")

	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x200(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x210(0x8)
	struct TMap<uint32_t, struct UAkAssetDataSwitchContainerData*> PendingSwitchLoads; // 0x218(0x50)
};

// Object: Class AkAudio.AkAudioEventData
// Size: 0x408 (Inherited: 0x268)
struct UAkAudioEventData : UAkAssetDataSwitchContainer
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioEventData, "AkAudioEventData")

	float MaxAttenuationRadius; // 0x268(0x4)
	uint8_t IsInfinite : 1; // 0x26C(0x1), Mask(0x1)
	uint8_t BitPad_0x26C_1 : 7; // 0x26C(0x1)
	uint8_t Pad_0x26D[0x3]; // 0x26D(0x3)
	float MinimumDuration; // 0x270(0x4)
	float MaximumDuration; // 0x274(0x4)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x278(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x2C8(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x318(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x368(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x3B8(0x50)
};

// Object: Class AkAudio.AkAudioEvent
// Size: 0xE8 (Inherited: 0x50)
struct UAkAudioEvent : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioEvent, "AkAudioEvent")

	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct UAkAudioBank* RequiredBank; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x18]; // 0xA8(0x18)
	uint8_t CanNotPlayBy3DFunc : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xC8(0x8)
	float MaxAttenuationRadius; // 0xD0(0x4)
	uint8_t IsInfinite : 1; // 0xD4(0x1), Mask(0x1)
	uint8_t BitPad_0xD4_1 : 7; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	float MinimumDuration; // 0xD8(0x4)
	float MaximumDuration; // 0xDC(0x4)
	uint32_t StopShortID; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)

	// Object: Function AkAudio.AkAudioEvent.GetStopShortID
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x83466fc
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetStopShortID();

	// Object: Function AkAudio.AkAudioEvent.GetMinimumDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83466c8
	// Params: [ Num(1) Size(0x4) ]
	float GetMinimumDuration();

	// Object: Function AkAudio.AkAudioEvent.GetMaximumDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346694
	// Params: [ Num(1) Size(0x4) ]
	float GetMaximumDuration();

	// Object: Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346660
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxAttenuationRadius();

	// Object: Function AkAudio.AkAudioEvent.GetIsInfinite
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346628
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsInfinite();
};

// Object: Class AkAudio.AkAudioBank
// Size: 0x110 (Inherited: 0x50)
struct UAkAudioBank : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioBank, "AkAudioBank")

	uint8_t AutoLoad : 1; // 0x4C(0x1), Mask(0x1)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xA0(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xF0(0x8)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x17]; // 0xF9(0x17)
};

// Object: Class AkAudio.AkAudioInputComponent
// Size: 0x700 (Inherited: 0x6D0)
struct UAkAudioInputComponent : UAkComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioInputComponent, "AkAudioInputComponent")

	uint8_t Pad_0x6D0[0x30]; // 0x6D0(0x30)

	// Object: Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x83468f0
	// Params: [ Num(1) Size(0x4) ]
	int32_t PostAssociatedAudioInputEvent();
};

// Object: Class AkAudio.AkAuxBus
// Size: 0x58 (Inherited: 0x50)
struct UAkAuxBus : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkAuxBus, "AkAuxBus")

	struct UAkAudioBank* RequiredBank; // 0x50(0x8)
};

// Object: Class AkAudio.AkCheckBox
// Size: 0xC00 (Inherited: 0x170)
struct UAkCheckBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkCheckBox, "AkCheckBox")

	uint8_t Pad_0x170[0x3D8]; // 0x170(0x3D8)
	ECheckBoxState CheckedState; // 0x548(0x1)
	uint8_t Pad_0x549[0x3]; // 0x549(0x3)
	struct FDelegate CheckedStateDelegate; // 0x54C(0x10)
	uint8_t Pad_0x55C[0x4]; // 0x55C(0x4)
	struct FCheckBoxStyle WidgetStyle; // 0x560(0x5C8)
	EHorizontalAlignment HorizontalAlignment; // 0xB28(0x1)
	uint8_t IsFocusable : 1; // 0xB29(0x1), Mask(0x1)
	uint8_t BitPad_0xB29_1 : 7; // 0xB29(0x1)
	uint8_t Pad_0xB2A[0x6]; // 0xB2A(0x6)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xB30(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xB40(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xB80(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xB90(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xBA0(0x10)
	uint8_t Pad_0xBB0[0x50]; // 0xBB0(0x50)

	// Object: Function AkAudio.AkCheckBox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8346f28
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(uint8_t InIsChecked);

	// Object: Function AkAudio.AkCheckBox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8346e84
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckedState(ECheckBoxState InCheckedState);

	// Object: Function AkAudio.AkCheckBox.SetAkItemId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8346dd0
	// Params: [ Num(1) Size(0x10) ]
	void SetAkItemId(const struct FGuid& ItemID);

	// Object: Function AkAudio.AkCheckBox.SetAkBoolProperty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8346d24
	// Params: [ Num(1) Size(0x10) ]
	void SetAkBoolProperty(struct FString ItemProperty);

	// Object: Function AkAudio.AkCheckBox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346cec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPressed();

	// Object: Function AkAudio.AkCheckBox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346cb4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChecked();

	// Object: Function AkAudio.AkCheckBox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346c80
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetCheckedState();

	// Object: Function AkAudio.AkCheckBox.GetAkProperty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346c10
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAkProperty();

	// Object: Function AkAudio.AkCheckBox.GetAkItemId
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8346bdc
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetAkItemId();
};

// Object: Class AkAudio.AkEventMemoryStatistics
// Size: 0x28 (Inherited: 0x28)
struct UAkEventMemoryStatistics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkEventMemoryStatistics, "AkEventMemoryStatistics")

	// Object: Function AkAudio.AkEventMemoryStatistics.LogMemInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x834a3e4
	// Params: [ Num(0) Size(0x0) ]
	static void LogMemInfo();

	// Object: Function AkAudio.AkEventMemoryStatistics.ForceUnloadNonPlayingLeakingMediaMems
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x834a3d0
	// Params: [ Num(0) Size(0x0) ]
	static void ForceUnloadNonPlayingLeakingMediaMems();
};

// Object: Class AkAudio.AkFolder
// Size: 0xB8 (Inherited: 0x40)
struct UAkFolder : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkFolder, "AkFolder")

	struct FString UnrealFolderPath; // 0x40(0x10)
	struct FString WwiseFolderPath; // 0x50(0x10)
	uint8_t Pad_0x60[0x58]; // 0x60(0x58)
};

// Object: Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkGameplayStatics, "AkGameplayStatics")

	// Object: Function AkAudio.AkGameplayStatics.TestGetAudioSamplesFromSinkRecordPlugin
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834cc9c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t TestGetAudioSamplesFromSinkRecordPlugin(struct TArray<float>& OutSamples);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x834cb58
	// Params: [ Num(4) Size(0x20) ]
	static void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState);
};

// Object: Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkCallbackInfo, "AkCallbackInfo")

	struct UAkComponent* AkComponent; // 0x28(0x8)
};

// Object: Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkEventCallbackInfo, "AkEventCallbackInfo")

	int32_t PlayingId; // 0x30(0x4)
	int32_t EventId; // 0x34(0x4)
};

// Object: Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMIDIEventCallbackInfo, "AkMIDIEventCallbackInfo")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x834da30
	// Params: [ Num(1) Size(0x1) ]
	EAkMidiEventType GetType();

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d96c
	// Params: [ Num(2) Size(0x4) ]
	uint8_t GetProgramChange(struct FAkMidiProgramChange& AsProgramChange);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d8ac
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetPitchBend(struct FAkMidiPitchBend& AsPitchBend);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d7ec
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d72c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d66c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d5ac
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GetGeneric(struct FAkMidiGeneric& AsGeneric);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d4e8
	// Params: [ Num(2) Size(0x4) ]
	uint8_t GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x834d4b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetChannel();

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetCc
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x834d3f4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GetCc(struct FAkMidiCc& AsCc);
};

// Object: Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMarkerCallbackInfo, "AkMarkerCallbackInfo")

	int32_t Identifier; // 0x38(0x4)
	int32_t Position; // 0x3C(0x4)
	struct FString Label; // 0x40(0x10)
};

// Object: Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkDurationCallbackInfo, "AkDurationCallbackInfo")

	float Duration; // 0x38(0x4)
	float EstimatedDuration; // 0x3C(0x4)
	int32_t AudioNodeID; // 0x40(0x4)
	int32_t MediaID; // 0x44(0x4)
	uint8_t bStreaming : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMusicSyncCallbackInfo, "AkMusicSyncCallbackInfo")

	int32_t PlayingId; // 0x30(0x4)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	EAkCallbackType MusicSyncType; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct FString UserCueName; // 0x60(0x10)
};

// Object: Class AkAudio.AkGeometryComponent
// Size: 0x370 (Inherited: 0x240)
struct UAkGeometryComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkGeometryComponent, "AkGeometryComponent")

	EAkMeshType MeshType; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	int32_t LOD; // 0x244(0x4)
	float WeldingThreshold; // 0x248(0x4)
	uint8_t Pad_0x24C[0x4]; // 0x24C(0x4)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x250(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x2A0(0x10)
	uint8_t bEnableDiffraction : 1; // 0x2B0(0x1), Mask(0x1)
	uint8_t bEnableDiffractionOnBoundaryEdges : 1; // 0x2B0(0x1), Mask(0x2)
	uint8_t BitPad_0x2B0_2 : 6; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x7]; // 0x2B1(0x7)
	struct AActor* AssociatedRoom; // 0x2B8(0x8)
	uint8_t Pad_0x2C0[0x10]; // 0x2C0(0x10)
	struct FAkGeometryData GeometryData; // 0x2D0(0x50)
	uint8_t Pad_0x320[0x50]; // 0x320(0x50)

	// Object: Function AkAudio.AkGeometryComponent.UpdateGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x834dba0
	// Params: [ Num(0) Size(0x0) ]
	void UpdateGeometry();

	// Object: Function AkAudio.AkGeometryComponent.RemoveGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x834db8c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveGeometry();

	// Object: Function AkAudio.AkGeometryComponent.ConvertMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x834db78
	// Params: [ Num(0) Size(0x0) ]
	void ConvertMesh();
};

// Object: Class AkAudio.AkGroupValue
// Size: 0x68 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkGroupValue, "AkGroupValue")

	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40(0x10)
	uint32_t GroupShortID; // 0x50(0x4)
	uint8_t Pad_0x54[0x14]; // 0x54(0x14)
};

// Object: Class AkAudio.AkHololensInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkHololensInitializationSettings, "AkHololensInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x40)

	// Object: Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x834fdcc
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkHololensPlatformInfo, "AkHololensPlatformInfo")
};

// Object: Class AkAudio.AkInitBankAssetData
// Size: 0x210 (Inherited: 0x200)
struct UAkInitBankAssetData : UAkAssetDataWithMedia
{
	DEFINE_UE_CLASS_HELPERS(UAkInitBankAssetData, "AkInitBankAssetData")

	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x200(0x10)
};

// Object: Class AkAudio.AkInitBank
// Size: 0x70 (Inherited: 0x50)
struct UAkInitBank : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkInitBank, "AkInitBank")

	struct TArray<struct FString> AvailableAudioCultures; // 0x50(0x10)
	struct FString DefaultLanguage; // 0x60(0x10)
};

// Object: Class AkAudio.AkIOSInitializationSettings
// Size: 0x108 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkIOSInitializationSettings, "AkIOSInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xD0(0x34)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
};

// Object: Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkIOSPlatformInfo, "AkIOSPlatformInfo")
};

// Object: Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkItemBoolPropertiesConv, "AkItemBoolPropertiesConv")

	// Object: Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8350230
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);

	// Object: Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8350140
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// Object: Class AkAudio.AkItemBoolProperties
// Size: 0x198 (Inherited: 0x158)
struct UAkItemBoolProperties : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkItemBoolProperties, "AkItemBoolProperties")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x168(0x10)
	uint8_t Pad_0x178[0x20]; // 0x178(0x20)

	// Object: Function AkAudio.AkItemBoolProperties.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8350490
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString NewText);

	// Object: Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83503f8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedProperty();

	// Object: Function AkAudio.AkItemBoolProperties.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8350360
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkItemPropertiesConv, "AkItemPropertiesConv")

	// Object: Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8350634
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);

	// Object: Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8350544
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};

// Object: Class AkAudio.AkItemProperties
// Size: 0x198 (Inherited: 0x158)
struct UAkItemProperties : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkItemProperties, "AkItemProperties")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x168(0x10)
	uint8_t Pad_0x178[0x20]; // 0x178(0x20)

	// Object: Function AkAudio.AkItemProperties.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8350894
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString NewText);

	// Object: Function AkAudio.AkItemProperties.GetSelectedProperty
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83507fc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedProperty();

	// Object: Function AkAudio.AkItemProperties.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8350764
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkLinuxInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkLinuxInitializationSettings, "AkLinuxInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xC0(0x38)

	// Object: Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x8350a18
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkLinuxPlatformInfo, "AkLinuxPlatformInfo")
};

// Object: Class AkAudio.AkLuminInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkLuminInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkLuminInitializationSettings, "AkLuminInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8(0x38)

	// Object: Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x8350ae0
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkLuminPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLuminPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkLuminPlatformInfo, "AkLuminPlatformInfo")
};

// Object: Class AkAudio.AkMacInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkMacInitializationSettings, "AkMacInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xC0(0x38)

	// Object: Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x8350ba8
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMacPlatformInfo, "AkMacPlatformInfo")
};

// Object: Class AkAudio.AkMediaAssetData
// Size: 0x90 (Inherited: 0x28)
struct UAkMediaAssetData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkMediaAssetData, "AkMediaAssetData")

	uint8_t IsStreamed : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t UseDeviceMemory : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FString Language; // 0x30(0x10)
	struct FString AssetPlatform; // 0x40(0x10)
	uint8_t Pad_0x50[0x40]; // 0x50(0x40)
};

// Object: Class AkAudio.AkMediaAsset
// Size: 0x98 (Inherited: 0x28)
struct UAkMediaAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkMediaAsset, "AkMediaAsset")

	uint32_t ID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString MediaName; // 0x30(0x10)
	uint8_t AutoLoad : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<struct UObject*> UserData; // 0x48(0x10)
	struct FString Language; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x78(0x8)
	struct UAkMediaAssetData* CurrentMediaAssetData_LQ; // 0x80(0x8)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)
};

// Object: Class AkAudio.AkLocalizedMediaAsset
// Size: 0x98 (Inherited: 0x98)
struct UAkLocalizedMediaAsset : UAkMediaAsset
{
	DEFINE_UE_CLASS_HELPERS(UAkLocalizedMediaAsset, "AkLocalizedMediaAsset")
};

// Object: Class AkAudio.AkExternalMediaAsset
// Size: 0xF0 (Inherited: 0x98)
struct UAkExternalMediaAsset : UAkMediaAsset
{
	DEFINE_UE_CLASS_HELPERS(UAkExternalMediaAsset, "AkExternalMediaAsset")

	uint8_t Pad_0x98[0x58]; // 0x98(0x58)
};

// Object: Class AkAudio.AkOpenHarmonyInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkOpenHarmonyInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkOpenHarmonyInitializationSettings, "AkOpenHarmonyInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkOpenHarmonyAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x40)

	// Object: Function AkAudio.AkOpenHarmonyInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x8350f1c
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkOpenHarmonyPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkOpenHarmonyPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkOpenHarmonyPlatformInfo, "AkOpenHarmonyPlatformInfo")
};

// Object: Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct IAkPlatformInitialisationSettingsBase : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAkPlatformInitialisationSettingsBase, "AkPlatformInitialisationSettingsBase")
};

// Object: Class AkAudio.AkPS4InitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkPS4InitializationSettings, "AkPS4InitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xB8(0x40)

	// Object: Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x8354460
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkPS4PlatformInfo, "AkPS4PlatformInfo")
};

// Object: Class AkAudio.AkReverbVolume
// Size: 0x3E0 (Inherited: 0x3A8)
struct AAkReverbVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkReverbVolume, "AkReverbVolume")

	uint8_t bEnabled : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t Pad_0x3A9[0x7]; // 0x3A9(0x7)
	struct UAkAuxBus* AuxBus; // 0x3B0(0x8)
	struct FString AuxBusName; // 0x3B8(0x10)
	float SendLevel; // 0x3C8(0x4)
	float FadeRate; // 0x3CC(0x4)
	float Priority; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0x4]; // 0x3D4(0x4)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x3D8(0x8)
};

// Object: Class AkAudio.AkRoomComponent
// Size: 0x280 (Inherited: 0x260)
struct UAkRoomComponent : UAkGameObject
{
	DEFINE_UE_CLASS_HELPERS(UAkRoomComponent, "AkRoomComponent")

	uint8_t bEnable : 1; // 0x25A(0x1), Mask(0x1)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x260(0x8)
	float Priority; // 0x268(0x4)
	float WallOcclusion; // 0x26C(0x4)
	float AuxSendLevel; // 0x270(0x4)
	uint8_t AutoPost : 1; // 0x274(0x1), Mask(0x1)
	uint8_t BitPad_0x274_2 : 6; // 0x274(0x1)
	uint8_t Pad_0x275[0xB]; // 0x275(0xB)
};

// Object: Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkRtpc, "AkRtpc")
};

// Object: Class AkAudio.AkSettings
// Size: 0x1C8 (Inherited: 0x28)
struct UAkSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkSettings, "AkSettings")

	struct FString EmbodyUserID; // 0x28(0x10)
	struct TSoftObjectPtr<UAkInitBank> InitBank; // 0x38(0x28)
	uint8_t bUseAssetRegistry : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	EMediaMemReuseRule MediaReuse; // 0x61(0x1)
	ELeakingMediaMemTickRule TickLeakingMediaMemRule; // 0x62(0x1)
	uint8_t Pad_0x63[0x1]; // 0x63(0x1)
	float ForceUnloadMediaInterval; // 0x64(0x4)
	uint8_t bUseNewMediaNameRule : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t MediaQualityUsage; // 0x6C(0x4)
	uint8_t MaxSimultaneousReverbVolumes; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FFilePath WwiseProjectPath; // 0x78(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x88(0x10)
	uint8_t bAutoConnectToWAAPI : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x99(0x1)
	ECollisionChannel OriginalOcclusionCollisionChannel; // 0x9A(0x1)
	EAkOcclusionTraceType OcclusionTraceType; // 0x9B(0x1)
	uint8_t bIgnoreSameTraceHitResult : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	float HalfThrouthBoundingHeight; // 0xA0(0x4)
	float OccMinExtentXY; // 0xA4(0x4)
	float OccMinExtentZ; // 0xA8(0x4)
	float RoomFloorHeigh; // 0xAC(0x4)
	uint8_t bDebugDrawOcclusionObstruction : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	float DebugDrawOccObsRange; // 0xB4(0x4)
	float DebugDrawOccObsLineRange; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct FString EditorAudioPlatform; // 0xC0(0x10)
	uint8_t bDebugLogAkAudio : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0xD8(0x50)
	struct UAkComponent* AkComponentToCreate; // 0x128(0x8)
	uint8_t SplitSwitchContainerMedia : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t SplitMediaPerFolder : 1; // 0x131(0x1), Mask(0x1)
	uint8_t BitPad_0x131_1 : 7; // 0x131(0x1)
	uint8_t UseEventBasedPackaging : 1; // 0x132(0x1), Mask(0x1)
	uint8_t BitPad_0x132_1 : 7; // 0x132(0x1)
	uint8_t bCookMediaLQDataChunks : 1; // 0x133(0x1), Mask(0x1)
	uint8_t BitPad_0x133_1 : 7; // 0x133(0x1)
	uint8_t EnableAutomaticAssetSynchronization : 1; // 0x134(0x1), Mask(0x1)
	uint8_t BitPad_0x134_1 : 7; // 0x134(0x1)
	uint8_t WatcthingWwiseProjectFolderChange : 1; // 0x135(0x1), Mask(0x1)
	uint8_t BitPad_0x135_1 : 7; // 0x135(0x1)
	uint8_t Pad_0x136[0x2]; // 0x136(0x2)
	struct FString CommandletCommitMessage; // 0x138(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x148(0x50)
	uint8_t AskedToUseNewAssetManagement : 1; // 0x198(0x1), Mask(0x1)
	uint8_t BitPad_0x198_1 : 7; // 0x198(0x1)
	uint8_t bEnableMultiCoreRendering : 1; // 0x199(0x1), Mask(0x1)
	uint8_t BitPad_0x199_1 : 7; // 0x199(0x1)
	uint8_t MigratedEnableMultiCoreRendering : 1; // 0x19A(0x1), Mask(0x1)
	uint8_t BitPad_0x19A_1 : 7; // 0x19A(0x1)
	uint8_t FixupRedirectorsDuringMigration : 1; // 0x19B(0x1), Mask(0x1)
	uint8_t BitPad_0x19B_1 : 7; // 0x19B(0x1)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x1A0(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x1B0(0x10)
	uint8_t EnsureSoundDataAlwaysCook : 1; // 0x1C0(0x1), Mask(0x1)
	uint8_t BitPad_0x1C0_1 : 7; // 0x1C0(0x1)
	uint8_t Pad_0x1C1[0x7]; // 0x1C1(0x7)
};

// Object: Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkSettingsPerUser, "AkSettingsPerUser")

	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	uint8_t EnableAutomaticAssetSynchronization : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x4)
	uint8_t bAutoConnectToWAAPI : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t AutoSyncSelection : 1; // 0x65(0x1), Mask(0x1)
	uint8_t BitPad_0x65_1 : 7; // 0x65(0x1)
	uint8_t SuppressWwiseProjectPathWarnings : 1; // 0x66(0x1), Mask(0x1)
	uint8_t BitPad_0x66_1 : 7; // 0x66(0x1)
	uint8_t SoundDataGenerationSkipLanguage : 1; // 0x67(0x1), Mask(0x1)
	uint8_t BitPad_0x67_1 : 7; // 0x67(0x1)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)
};

// Object: Class AkAudio.AkSlider
// Size: 0x5B0 (Inherited: 0x158)
struct UAkSlider : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkSlider, "AkSlider")

	float Value; // 0x158(0x4)
	struct FDelegate ValueDelegate; // 0x15C(0x10)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct FSliderStyle WidgetStyle; // 0x170(0x370)
	EOrientation Orientation; // 0x4E0(0x1)
	uint8_t Pad_0x4E1[0x3]; // 0x4E1(0x3)
	struct FLinearColor SliderBarColor; // 0x4E4(0x10)
	struct FLinearColor SliderHandleColor; // 0x4F4(0x10)
	uint8_t IndentHandle : 1; // 0x504(0x1), Mask(0x1)
	uint8_t BitPad_0x504_1 : 7; // 0x504(0x1)
	uint8_t Locked : 1; // 0x505(0x1), Mask(0x1)
	uint8_t BitPad_0x505_1 : 7; // 0x505(0x1)
	uint8_t Pad_0x506[0x2]; // 0x506(0x2)
	float StepSize; // 0x508(0x4)
	uint8_t IsFocusable : 1; // 0x50C(0x1), Mask(0x1)
	uint8_t BitPad_0x50C_1 : 7; // 0x50C(0x1)
	uint8_t Pad_0x50D[0x3]; // 0x50D(0x3)
	struct FAkPropertyToControl ThePropertyToControl; // 0x510(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x520(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x560(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x570(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x580(0x10)
	uint8_t Pad_0x590[0x20]; // 0x590(0x20)

	// Object: Function AkAudio.AkSlider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8354cd4
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function AkAudio.AkSlider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8354c30
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function AkAudio.AkSlider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8354b8c
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function AkAudio.AkSlider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8354ae8
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderBarColor(struct FLinearColor InValue);

	// Object: Function AkAudio.AkSlider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8354a3c
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(uint8_t InValue);

	// Object: Function AkAudio.AkSlider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8354990
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(uint8_t InValue);

	// Object: Function AkAudio.AkSlider.SetAkSliderItemProperty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x83548e4
	// Params: [ Num(1) Size(0x10) ]
	void SetAkSliderItemProperty(struct FString ItemProperty);

	// Object: Function AkAudio.AkSlider.SetAkSliderItemId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8354830
	// Params: [ Num(1) Size(0x10) ]
	void SetAkSliderItemId(const struct FGuid& ItemID);

	// Object: Function AkAudio.AkSlider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83547fc
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function AkAudio.AkSlider.GetAkSliderItemProperty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x835478c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAkSliderItemProperty();

	// Object: Function AkAudio.AkSlider.GetAkSliderItemId
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8354758
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetAkSliderItemId();
};

// Object: Class AkAudio.AkSpatialAudioVolume
// Size: 0x3C0 (Inherited: 0x3A8)
struct AAkSpatialAudioVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkSpatialAudioVolume, "AkSpatialAudioVolume")

	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x3A8(0x8)
	struct UAkLateReverbComponent* LateReverb; // 0x3B0(0x8)
	struct UAkRoomComponent* Room; // 0x3B8(0x8)
};

// Object: Class AkAudio.AkSpotReflector
// Size: 0x398 (Inherited: 0x370)
struct AAkSpotReflector : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAkSpotReflector, "AkSpotReflector")

	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x370(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x378(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x388(0x8)
	float DistanceScalingFactor; // 0x390(0x4)
	float Level; // 0x394(0x4)
};

// Object: Class AkAudio.AkStateValue
// Size: 0x68 (Inherited: 0x68)
struct UAkStateValue : UAkGroupValue
{
	DEFINE_UE_CLASS_HELPERS(UAkStateValue, "AkStateValue")
};

// Object: Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x280 (Inherited: 0x240)
struct UAkSurfaceReflectorSetComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkSurfaceReflectorSetComponent, "AkSurfaceReflectorSetComponent")

	uint8_t bEnableSurfaceReflectors : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x248(0x10)
	uint8_t bEnableDiffraction : 1; // 0x258(0x1), Mask(0x1)
	uint8_t bEnableDiffractionOnBoundaryEdges : 1; // 0x258(0x1), Mask(0x2)
	uint8_t BitPad_0x258_2 : 6; // 0x258(0x1)
	uint8_t Pad_0x259[0x7]; // 0x259(0x7)
	struct AActor* AssociatedRoom; // 0x260(0x8)
	uint8_t Pad_0x268[0x18]; // 0x268(0x18)

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8355090
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSurfaceReflectorSet();

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x835507c
	// Params: [ Num(0) Size(0x0) ]
	void SendSurfaceReflectorSet();

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8355068
	// Params: [ Num(0) Size(0x0) ]
	void RemoveSurfaceReflectorSet();
};

// Object: Class AkAudio.AkSwitchInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkSwitchInitializationSettings, "AkSwitchInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xC0(0x38)

	// Object: Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x83550e8
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkSwitchPlatformInfo, "AkSwitchPlatformInfo")
};

// Object: Class AkAudio.AkSwitchValue
// Size: 0x68 (Inherited: 0x68)
struct UAkSwitchValue : UAkGroupValue
{
	DEFINE_UE_CLASS_HELPERS(UAkSwitchValue, "AkSwitchValue")
};

// Object: Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkTrigger, "AkTrigger")
};

// Object: Class AkAudio.AkTVOSInitializationSettings
// Size: 0x108 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkTVOSInitializationSettings, "AkTVOSInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xD0(0x34)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
};

// Object: Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkTVOSPlatformInfo, "AkTVOSPlatformInfo")
};

// Object: Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkWaapiCalls, "AkWaapiCalls")

	// Object: Function AkAudio.AkWaapiCalls.Unsubscribe
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8356034
	// Params: [ Num(3) Size(0x20) ]
	static struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, uint8_t& UnsubscriptionDone);

	// Object: Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8355cd8
	// Params: [ Num(6) Size(0x50) ]
	static struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FDelegate& callback, struct FAkWaapiSubscriptionId& SubscriptionId, uint8_t& SubscriptionDone);

	// Object: Function AkAudio.AkWaapiCalls.SetSubscriptionID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8355bf0
	// Params: [ Num(2) Size(0xC) ]
	static void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);

	// Object: Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8355b18
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t RegisterWaapiProjectLoadedCallback(const struct FDelegate& callback);

	// Object: Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8355a40
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t RegisterWaapiConnectionLostCallback(const struct FDelegate& callback);

	// Object: Function AkAudio.AkWaapiCalls.GetSubscriptionID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x835598c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);

	// Object: Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x835586c
	// Params: [ Num(2) Size(0x20) ]
	static struct FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);

	// Object: Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8355784
	// Params: [ Num(2) Size(0x18) ]
	static struct FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);

	// Object: Function AkAudio.AkWaapiCalls.CallWaapi
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8355490
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
};

// Object: Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USAkWaapiFieldNamesConv, "SAkWaapiFieldNamesConv")

	// Object: Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x83586b0
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);

	// Object: Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x83585c0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};

// Object: Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkWaapiJsonManager, "AkWaapiJsonManager")

	// Object: Function AkAudio.AkWaapiJsonManager.SetStringField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x835a724
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetObjectField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x835a36c
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetNumberField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x835a088
	// Params: [ Num(4) Size(0x38) ]
	static struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetBoolField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8359d94
	// Params: [ Num(4) Size(0x38) ]
	static struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, uint8_t FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8359a8c
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, const struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8359774
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, const struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetStringField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8359570
	// Params: [ Num(3) Size(0x30) ]
	static struct FString GetStringField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetObjectField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83592c8
	// Params: [ Num(3) Size(0x30) ]
	static struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetNumberField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83590f8
	// Params: [ Num(3) Size(0x24) ]
	static float GetNumberField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetIntegerField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8358f28
	// Params: [ Num(3) Size(0x24) ]
	static int32_t GetIntegerField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetBoolField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8358d54
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetBoolField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetArrayField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8358b70
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x835898c
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject);

	// Object: Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x83587e0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject);
};

// Object: Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkWaapiUriConv, "AkWaapiUriConv")

	// Object: Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x835ab20
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);

	// Object: Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x835aa30
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};

// Object: Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkWindowsInitializationSettings, "AkWindowsInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x40)

	// Object: Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x835acd4
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkWin32PlatformInfo, "AkWin32PlatformInfo")
};

// Object: Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkWin64PlatformInfo, "AkWin64PlatformInfo")
};

// Object: Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkWindowsPlatformInfo, "AkWindowsPlatformInfo")
};

// Object: Class AkAudio.AkWwiseTree
// Size: 0x198 (Inherited: 0x158)
struct UAkWwiseTree : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkWwiseTree, "AkWwiseTree")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x168(0x10)
	uint8_t Pad_0x178[0x20]; // 0x178(0x20)

	// Object: Function AkAudio.AkWwiseTree.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x835d11c
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString NewText);

	// Object: Function AkAudio.AkWwiseTree.GetSelectedItem
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x835d01c
	// Params: [ Num(1) Size(0x30) ]
	struct FAkWwiseObjectDetails GetSelectedItem();

	// Object: Function AkAudio.AkWwiseTree.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x835cf84
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkWwiseTreeSelector
// Size: 0x1B8 (Inherited: 0x158)
struct UAkWwiseTreeSelector : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkWwiseTreeSelector, "AkWwiseTreeSelector")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x168(0x10)
	uint8_t Pad_0x178[0x40]; // 0x178(0x40)
};

// Object: Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkXboxOneInitializationSettings, "AkXboxOneInitializationSettings")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x3C)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)

	// Object: Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x835d1e8
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(uint8_t NewValue);
};

// Object: Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkXboxOnePlatformInfo, "AkXboxOnePlatformInfo")
};

// Object: Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xA8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase
{
	DEFINE_UE_CLASS_HELPERS(UInterpTrackAkAudioEvent, "InterpTrackAkAudioEvent")

	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	uint8_t bContinueEventOnMatineeEnd : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
};

// Object: Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xA8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase
{
	DEFINE_UE_CLASS_HELPERS(UInterpTrackAkAudioRTPC, "InterpTrackAkAudioRTPC")

	struct FString Param; // 0x90(0x10)
	uint8_t bPlayOnReverse : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t bContinueRTPCOnMatineeEnd : 1; // 0xA0(0x1), Mask(0x2)
	uint8_t BitPad_0xA0_2 : 6; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
};

// Object: Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst
{
	DEFINE_UE_CLASS_HELPERS(UInterpTrackInstAkAudioEvent, "InterpTrackInstAkAudioEvent")

	float LastUpdatePosition; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst
{
	DEFINE_UE_CLASS_HELPERS(UInterpTrackInstAkAudioRTPC, "InterpTrackInstAkAudioRTPC")

	float LastUpdatePosition; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class AkAudio.JAkPerformanceStatistics
// Size: 0x28 (Inherited: 0x28)
struct UJAkPerformanceStatistics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UJAkPerformanceStatistics, "JAkPerformanceStatistics")
};

// Object: Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1D0 (Inherited: 0xE8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioEventSection, "MovieSceneAkAudioEventSection")

	uint8_t Pad_0xE8[0x40]; // 0xE8(0x40)
	struct UAkAudioEvent* Event; // 0x128(0x8)
	uint8_t RetriggerEvent : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t Pad_0x131[0x3]; // 0x131(0x3)
	int32_t ScrubTailLengthMs; // 0x134(0x4)
	uint8_t StopAtSectionEnd : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
	struct FString EventName; // 0x140(0x10)
	uint8_t Pad_0x150[0x20]; // 0x150(0x20)
	float MaxSourceDuration; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct FString MaxDurationSourceID; // 0x178(0x10)
	uint8_t Pad_0x188[0x48]; // 0x188(0x48)
};

// Object: Class AkAudio.MovieSceneAkTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneAkTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkTrack, "MovieSceneAkTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	uint8_t bIsAMasterTrack : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioEventTrack, "MovieSceneAkAudioEventTrack")
};

// Object: Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x268 (Inherited: 0xE8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioRTPCSection, "MovieSceneAkAudioRTPCSection")

	struct UAkRtpc* RTPC; // 0xE8(0x8)
	struct FString Name; // 0xF0(0x10)
	struct FRichCurve FloatCurve; // 0x100(0x98)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x198(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1C8(0xA0)
};

// Object: Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioRTPCTrack, "MovieSceneAkAudioRTPCTrack")
};

// Object: Class AkAudio.PostEventAsync
// Size: 0xA0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UPostEventAsync, "PostEventAsync")

	struct FMulticastInlineDelegate completed; // 0x30(0x10)
	uint8_t Pad_0x40[0x60]; // 0x40(0x60)

	// Object: Function AkAudio.PostEventAsync.PostEventAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x835d3ac
	// Params: [ Num(8) Size(0x50) ]
	static struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, uint8_t bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.PostEventAsync.PollPostEventFuture
	// Flags: [Final|Native|Private]
	// Offset: 0x835d398
	// Params: [ Num(0) Size(0x0) ]
	void PollPostEventFuture();
};

// Object: Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UPostEventAtLocationAsync, "PostEventAtLocationAsync")

	struct FMulticastInlineDelegate completed; // 0x30(0x10)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)

	// Object: Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x835d634
	// Params: [ Num(5) Size(0x30) ]
	static struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation);

	// Object: Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// Flags: [Final|Native|Private]
	// Offset: 0x835d620
	// Params: [ Num(0) Size(0x0) ]
	void PollPostEventFuture();
};

} // namespace SDK
