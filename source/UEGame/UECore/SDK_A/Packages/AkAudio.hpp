#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include "PhysicsCore.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: AkAudio
// Enums: 32
// Structs: 57
// Classes: 109

struct AActor;
struct AVolume;
enum class ECheckBoxState : uint8_t;
struct FLatentActionInfo;
struct UActorComponent;
struct UAnimInstance;
struct UAnimMontage;
struct UMaterialInterface;
struct UModel;
struct UMovieSceneSection;
struct UPhysicalMaterial;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USplineComponent;
struct UStaticMeshComponent;
struct UWorld;
struct FAKWaapiJsonObject;
struct FAkWaapiSubscriptionId;
struct FAkAmbSoundCheckpointRecord;
struct FAkAdvancedSpatialAudioSettings;
struct FAkAdvancedInitializationSettings;
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering;
struct FAkAndroidAdvancedInitializationSettings;
struct FAkAudioSession;
struct FVoicePlayingData;
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
struct FAkGeometrySurfacePropertiesToMap;
struct FAkWwiseObjectDetails;
struct FAkWwiseItemToControl;
struct FAkPoly;
struct FAkWaapiFieldNames;
struct FAkWaapiUri;
struct FAkWindowsAdvancedInitializationSettings;
struct FAudioFunctionCall;
struct FAudioFunctionCallParam;
struct FAudioConsoleMessage;
struct FAudioStudioProfileData;
struct FLevelAudioData;
struct FLevelModeAudioData;
struct FTArrUMultiSourceSoundComponent;
struct FAkAudioEventTrackKey;
struct FMovieSceneAkAudioEventTemplate;
struct FMovieSceneAkAudioRTPCTemplate;
struct FMovieSceneFloatChannelSerializationHelper;
struct FMovieSceneTangentDataSerializationHelper;
struct FMovieSceneFloatValueSerializationHelper;
struct FParticleSoundData;
struct FRTPCConfig;
struct AAkAcousticPortal;
struct UAkPortalComponent;
struct UAkAudioType;
struct UAkAcousticTexture;
struct AAkAmbientSound;
struct UAkAndroidInitializationSettings;
struct UAkPlatformInfo;
struct UAkAndroidPlatformInfo;
struct UAkAssetData;
struct UAkAssetDataWithMedia;
struct UAkAssetPlatformData;
struct UAkAssetBase;
struct UAkAudioEvent;
struct UAkAudioBank;
struct UAkAssetDataSwitchContainerData;
struct UAkAssetDataSwitchContainer;
struct UAkAudioEventData;
struct UAkGameObject;
struct UAkComponent;
struct UAkAudioInputComponent;
struct UAkAuxBus;
struct UAkCheckBox;
struct UAkGameplayStatics;
struct UAkCallbackInfo;
struct UAkEventCallbackInfo;
struct UAkMIDIEventCallbackInfo;
struct UAkMarkerCallbackInfo;
struct UAkDurationCallbackInfo;
struct UAkMusicSyncCallbackInfo;
struct UAkGeometryComponent;
struct UAkGroupValue;
struct UAkInitBankAssetData;
struct UAkInitBank;
struct UAkIOSInitializationSettings;
struct UAkIOSPlatformInfo;
struct UAkItemBoolPropertiesConv;
struct UAkItemBoolProperties;
struct UAkItemPropertiesConv;
struct UAkItemProperties;
struct UAkLateReverbComponent;
struct UAkLinuxInitializationSettings;
struct UAkLinuxPlatformInfo;
struct UAkMacInitializationSettings;
struct UAkMacPlatformInfo;
struct UAkMediaAssetData;
struct UAkMediaAsset;
struct UAkLocalizedMediaAsset;
struct UAkExternalMediaAsset;
struct AAkObstructionVolume;
struct UAkOpenHarmonyInitializationSettings;
struct UAkOpenHarmonyPlatformInfo;
struct AAkReverbVolume;
struct UAkRoomComponent;
struct UAkRtpc;
struct UAkSettings;
struct UAkSettingsPerUser;
struct UAkSlider;
struct AAkSpatialAudioVolume;
struct AAkSpotReflector;
struct AAkStairPortal;
struct UAkStateValue;
struct UAkSurfaceReflectorSetComponent;
struct UAkSwitchValue;
struct UAkTrigger;
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
struct UAnimNotify_AudioBank;
struct UAnimNotify_PlayAudio;
struct AAudioEmitter3D;
struct UAudioManager;
struct UAudioProfileInfoManager;
struct UAudioStudioComponent;
struct UAudioStudioSettings;
struct UAudioStudioEditorSettings;
struct UEmitterListenerManager;
struct UFoliageSoundComponent;
struct UFoliageSoundConfig;
struct UFoliageSoundPlaybackData;
struct AGlobalAmbienceEmitter;
struct UInterpTrackAkAudioEvent;
struct UInterpTrackAkAudioRTPC;
struct UInterpTrackInstAkAudioEvent;
struct UInterpTrackInstAkAudioRTPC;
struct ULoadBankComponent;
struct UMovieSceneAkAudioEventSection;
struct UMovieSceneAkTrack;
struct UMovieSceneAkAudioEventTrack;
struct UMovieSceneAkAudioRTPCSection;
struct UMovieSceneAkAudioRTPCTrack;
struct AMultiPositionSound;
struct UMultiSourceSoundComponent;
struct AMyAudioDebugEmitHint;
struct UParticleSoundComponent;
struct UPostEventAsync;
struct UPostEventAtLocationAsync;
struct ARainSoundPlane;
struct USetAttenuationComponent;
struct USetRTPCComponent;
struct USetStateComponent;
struct USetSwitchComponent;
struct ASplineSound;

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
	Bank = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	WiiADPCM = 5,
	PCMEX = 7,
	ExternalSource = 8,
	XWMA = 9,
	AAC = 10,
	FilePackage = 11,
	ATRAC9 = 12,
	VAG = 13,
	ProfilerCapture = 14,
	AnalysisFile = 15,
	MIDI = 16,
	OpusNX = 17,
	CAF = 18,
	AkOpus = 19,
	AkCodecId_MAX = 20
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

// Object: Enum AkAudio.AkMeshType
enum class EAkMeshType : uint8_t
{
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2
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

// Object: Enum AkAudio.TestEnumm
enum class ETestEnumm : uint8_t
{
	test1 = 0,
	test2 = 1,
	TestEnumm_MAX = 2
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

// Object: Enum AkAudio.EAkOpenHarmonyAudioAPI
enum class EAkOpenHarmonyAudioAPI : uint8_t
{
	AAudio = 0,
	OpenSL_ES = 1,
	EAkOpenHarmonyAudioAPI_MAX = 2
};

// Object: Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8_t
{
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3
};

// Object: Enum AkAudio.AudioBankOperation
enum class EAudioBankOperation : uint8_t
{
	LoadBank = 0,
	UnloadBank = 1,
	AudioBankOperation_MAX = 2
};

// Object: Enum AkAudio.AudioObjectType
enum class EAudioObjectType : uint8_t
{
	SFX = 0,
	Music = 1,
	Voice = 2,
	Switch = 3,
	State = 4,
	RTPC = 5,
	Trigger = 6,
	SoundBank = 7,
	AudioPackage = 8,
	AuxBus = 9,
	Room = 10,
	MIDI = 11,
	Emitter = 12,
	Listener = 13,
	Language = 14,
	Device = 15,
	Portal = 16,
	Obs = 17,
	Occ = 18,
	AudioObjectType_MAX = 19
};

// Object: Enum AkAudio.AudioAction
enum class EAudioAction : uint8_t
{
	PostEvent = 0,
	Stop = 1,
	Break = 2,
	Pause = 3,
	Resume = 4,
	Mute = 5,
	Unmute = 6,
	Load = 7,
	Unload = 8,
	Reload = 9,
	SetValue = 10,
	GetValue = 11,
	Activate = 12,
	Deactivate = 13,
	AudioRegister = 14,
	AudioUnregister = 15,
	ObsOcc = 16,
	AudioAction_MAX = 17
};

// Object: Enum AkAudio.AudioLogVerbosity
enum class EAudioLogVerbosity : uint8_t
{
	Notification = 0,
	Warning = 1,
	Error = 2,
	AudioLogVerbosity_MAX = 3
};

// Object: Enum AkAudio.EGeographicRTPCType
enum class EGeographicRTPCType : uint8_t
{
	Distance = 0,
	Altitude = 1,
	Longitude = 2,
	Latitude = 3,
	EGeographicRTPCType_MAX = 4
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
	bool bCurrentlyPlaying; // 0x0(0x1)
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
	bool UseStreamCache; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x4)
	bool EnableGameSyncPreparation; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x4)
	uint32_t MonitorQueuePoolSize; // 0x1C(0x4)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x4)
	bool DebugOutOfRangeCheckEnabled; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float DebugOutOfRangeLimit; // 0x28(0x4)
	struct FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2C(0x8)
};

// Object: ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x38 (Inherited: 0x34)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{
	bool EnableMultiCoreRendering; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI; // 0x38(0x4)
	bool RoundFrameSizeToHardwareSize; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct AkAudio.AkAudioSession
// Size: 0xC (Inherited: 0x0)
struct FAkAudioSession
{
	EAkAudioSessionCategory AudioSessionCategory; // 0x0(0x4)
	uint32_t AudioSessionCategoryOptions; // 0x4(0x4)
	EAkAudioSessionMode AudioSessionMode; // 0x8(0x4)
};

// Object: ScriptStruct AkAudio.VoicePlayingData
// Size: 0x28 (Inherited: 0x0)
struct FVoicePlayingData
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
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
	bool IsStreamed; // 0x30(0x1)
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
	bool EnableDiffractionOnReflections; // 0x14(0x1)
	bool EnableDirectPathDiffraction; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float MaximumPathLength; // 0x18(0x4)
	bool EnableTransmission; // 0x1C(0x1)
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
	bool InitializeSystemComms; // 0x20(0x1)
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
	bool RoundFrameSizeToHardwareSize; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x30 (Inherited: 0x0)
struct FAkGeometrySurfacePropertiesToMap
{
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0(0x28)
	float MaterialAcousticValue; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x0)
struct FAkWwiseObjectDetails
{
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString itemID; // 0x20(0x10)
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
	bool EnableSurface; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
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
	bool GlobalFocus; // 0x3C(0x1)
	bool UseHeadMountedDisplayAudioDevice; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct AkAudio.AudioFunctionCall
// Size: 0x18 (Inherited: 0x0)
struct FAudioFunctionCall
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct AkAudio.AudioFunctionCallParam
// Size: 0x20 (Inherited: 0x0)
struct FAudioFunctionCallParam
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct AkAudio.AudioConsoleMessage
// Size: 0x40 (Inherited: 0x0)
struct FAudioConsoleMessage
{
	float TimeSeconds; // 0x0(0x4)
	uint8_t Verbosity; // 0x4(0x1)
	uint8_t Action; // 0x5(0x1)
	uint8_t ObjectType; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
	struct FString ObjectName; // 0x8(0x10)
	struct FString GameObject; // 0x18(0x10)
	float Value; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString Source; // 0x30(0x10)
};

// Object: ScriptStruct AkAudio.AudioStudioProfileData
// Size: 0x60 (Inherited: 0x0)
struct FAudioStudioProfileData
{
	double ak_totalCPU; // 0x0(0x8)
	double ak_pluginCPU; // 0x8(0x8)
	double ak_calCpuByRendertime; // 0x10(0x8)
	uint32_t ak_physicalVoices; // 0x18(0x4)
	uint32_t ak_virtualVoices; // 0x1C(0x4)
	uint32_t ak_totalVoices; // 0x20(0x4)
	uint32_t ak_nbActiveEvents; // 0x24(0x4)
	float ak_memory; // 0x28(0x4)
	float gameCPU; // 0x2C(0x4)
	float FrameTime; // 0x30(0x4)
	float gameThreadTime; // 0x34(0x4)
	float gameMemory; // 0x38(0x4)
	uint32_t ak_memory_Used; // 0x3C(0x4)
	uint32_t ak_memory_DeviceUsed; // 0x40(0x4)
	uint32_t ak_memory_Reserved; // 0x44(0x4)
	uint32_t ak_memory_Max; // 0x48(0x4)
	float ak_volume_bus_weapon; // 0x4C(0x4)
	float ak_volume_bus_action; // 0x50(0x4)
	float ak_volume_bus_ambience; // 0x54(0x4)
	float ak_volume_bus_voice; // 0x58(0x4)
	int32_t ak_dolby_switch; // 0x5C(0x4)
};

// Object: ScriptStruct AkAudio.LevelAudioData
// Size: 0x78 (Inherited: 0x0)
struct FLevelAudioData
{
	struct FString InheritedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Levels; // 0x10(0x10)
	struct TArray<struct FString> Banks; // 0x20(0x10)
	struct TArray<struct FString> States; // 0x30(0x10)
	struct TArray<struct FString> Events; // 0x40(0x10)
	struct TArray<struct FString> DefaultListenerEvents; // 0x50(0x10)
	bool UnloadBanksOnLevelUnload; // 0x60(0x1)
	bool StopEventsOnLevelUnload; // 0x61(0x1)
	bool StopAll2DSoundsOnLevelUnload; // 0x62(0x1)
	bool LevelNameExactMatch; // 0x63(0x1)
	bool IsLevelAlwaysInDoor; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	struct TArray<struct FLevelModeAudioData> AudioDataForMode; // 0x68(0x10)
};

// Object: ScriptStruct AkAudio.LevelModeAudioData
// Size: 0x40 (Inherited: 0x0)
struct FLevelModeAudioData
{
	uint64_t PlayModeID; // 0x0(0x8)
	bool bOverrideBase; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FString> Banks; // 0x10(0x10)
	struct TArray<struct FString> States; // 0x20(0x10)
	struct TArray<struct FString> Events; // 0x30(0x10)
};

// Object: ScriptStruct AkAudio.TArrUMultiSourceSoundComponent
// Size: 0x10 (Inherited: 0x0)
struct FTArrUMultiSourceSoundComponent
{
	struct TArray<struct UMultiSourceSoundComponent*> TArrUMultiSourceSoundComponent; // 0x0(0x10)
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
	uint8_t PreInfinityExtrap; // 0x0(0x1)
	uint8_t PostInfinityExtrap; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<int32_t> times; // 0x8(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x4)
	bool bHasDefaultValue; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentDataSerializationHelper
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	uint8_t TangentWeightMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ArriveTangentWeight; // 0xC(0x4)
	float LeaveTangentWeight; // 0x10(0x4)
};

// Object: ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneFloatValueSerializationHelper
{
	float Value; // 0x0(0x4)
	uint8_t InterpMode; // 0x4(0x1)
	uint8_t TangentMode; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x8(0x14)
};

// Object: ScriptStruct AkAudio.ParticleSoundData
// Size: 0x18 (Inherited: 0x0)
struct FParticleSoundData
{
	uint8_t ParticleEventType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ParticleEventName; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UAkAudioEvent* AudioEvent; // 0x10(0x8)
};

// Object: ScriptStruct AkAudio.RTPCConfig
// Size: 0x28 (Inherited: 0x0)
struct FRTPCConfig
{
	struct FString RTPCName; // 0x0(0x10)
	float InitialValue; // 0x10(0x4)
	float ResetValue; // 0x14(0x4)
	bool bIsGlobal; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float CurrentValue; // 0x1C(0x4)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: Class AkAudio.AkAcousticPortal
// Size: 0x3D8 (Inherited: 0x338)
struct AAkAcousticPortal : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkAcousticPortal, "AkAcousticPortal")

	EAkAcousticPortalState InitialState; // 0x338(0x1)
	uint8_t Pad_0x339[0x3]; // 0x339(0x3)
	float ObstructionRefreshInterval; // 0x33C(0x4)
	uint8_t ObstructionCollisionChannel; // 0x340(0x1)
	uint8_t Pad_0x341[0x97]; // 0x341(0x97)

	// Object: Function AkAudio.AkAcousticPortal.OpenPortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3387a2c
	// Params: [ Num(0) Size(0x0) ]
	void OpenPortal();

	// Object: Function AkAudio.AkAcousticPortal.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x33879e4
	// Params: [ Num(1) Size(0x1) ]
	EAkAcousticPortalState GetCurrentState();

	// Object: Function AkAudio.AkAcousticPortal.ClosePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3387a18
	// Params: [ Num(0) Size(0x0) ]
	void ClosePortal();
};

// Object: Class AkAudio.AkPortalComponent
// Size: 0x230 (Inherited: 0x230)
struct UAkPortalComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkPortalComponent, "AkPortalComponent")
};

// Object: Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioType, "AkAudioType")

	uint32_t ShortID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct UObject*> userdata; // 0x30(0x10)
};

// Object: Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkAcousticTexture, "AkAcousticTexture")
};

// Object: Class AkAudio.AkAmbientSound
// Size: 0x340 (Inherited: 0x300)
struct AAkAmbientSound : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAkAmbientSound, "AkAmbientSound")

	struct UAkAudioEvent* AkAudioEvent; // 0x300(0x8)
	struct UAkComponent* AkComponent; // 0x308(0x8)
	bool StopWhenOwnerIsDestroyed; // 0x310(0x1)
	bool AutoPost; // 0x311(0x1)
	uint8_t Pad_0x312[0x2E]; // 0x312(0x2E)

	// Object: Function AkAudio.AkAmbientSound.StopAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3387a6c
	// Params: [ Num(0) Size(0x0) ]
	void StopAmbientSound();

	// Object: Function AkAudio.AkAmbientSound.StartAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3387a80
	// Params: [ Num(0) Size(0x0) ]
	void StartAmbientSound();
};

// Object: Class AkAudio.AkAndroidInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAndroidInitializationSettings, "AkAndroidInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x40)

	// Object: Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x3387bd8
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
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

// Object: Class AkAudio.AkAssetData
// Size: 0x70 (Inherited: 0x28)
struct UAkAssetData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetData, "AkAssetData")

	uint32_t CachedHash; // 0x28(0x4)
	uint8_t Pad_0x2C[0x44]; // 0x2C(0x44)
};

// Object: Class AkAudio.AkAssetDataWithMedia
// Size: 0x90 (Inherited: 0x70)
struct UAkAssetDataWithMedia : UAkAssetData
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetDataWithMedia, "AkAssetDataWithMedia")

	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetPlatformData, "AkAssetPlatformData")

	struct UAkAssetData* CurrentAssetData; // 0x28(0x8)
};

// Object: Class AkAudio.AkAssetBase
// Size: 0x58 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetBase, "AkAssetBase")

	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
};

// Object: Class AkAudio.AkAudioEvent
// Size: 0xE8 (Inherited: 0x58)
struct UAkAudioEvent : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioEvent, "AkAudioEvent")

	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct UAkAudioBank* RequiredBank; // 0xA8(0x8)
	struct UAkAudioBank* LastRequiredBank; // 0xB0(0x8)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xB8(0x8)
	float MaxAttenuationRadius; // 0xC0(0x4)
	bool IsInfinite; // 0xC4(0x1)
	uint8_t Pad_0xC5[0x3]; // 0xC5(0x3)
	float MinimumDuration; // 0xC8(0x4)
	float MaximumDuration; // 0xCC(0x4)
	uint8_t Pad_0xD0[0x18]; // 0xD0(0x18)

	// Object: Function AkAudio.AkAudioEvent.GetMinimumDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3387d68
	// Params: [ Num(1) Size(0x4) ]
	float GetMinimumDuration();

	// Object: Function AkAudio.AkAudioEvent.GetMaximumDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3387d34
	// Params: [ Num(1) Size(0x4) ]
	float GetMaximumDuration();

	// Object: Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3387dd4
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxAttenuationRadius();

	// Object: Function AkAudio.AkAudioEvent.GetIsInfinite
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3387d9c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsInfinite();
};

// Object: Class AkAudio.AkAudioBank
// Size: 0x120 (Inherited: 0x58)
struct UAkAudioBank : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioBank, "AkAudioBank")

	bool AutoLoad; // 0x51(0x1)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xA8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xF8(0x8)
	uint8_t Pad_0x101[0x1F]; // 0x101(0x1F)
};

// Object: Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x88 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetDataSwitchContainerData, "AkAssetDataSwitchContainerData")

	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x8)
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

// Object: Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xB8 (Inherited: 0x90)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia
{
	DEFINE_UE_CLASS_HELPERS(UAkAssetDataSwitchContainer, "AkAssetDataSwitchContainer")

	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x90(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
};

// Object: Class AkAudio.AkAudioEventData
// Size: 0x280 (Inherited: 0xB8)
struct UAkAudioEventData : UAkAssetDataSwitchContainer
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioEventData, "AkAudioEventData")

	float MaxAttenuationRadius; // 0xB8(0x4)
	bool IsInfinite; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	float MinimumDuration; // 0xC0(0x4)
	float MaximumDuration; // 0xC4(0x4)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xC8(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x118(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x168(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x1B8(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x208(0x50)
	uint8_t Pad_0x258[0x28]; // 0x258(0x28)
};

// Object: Class AkAudio.AkGameObject
// Size: 0x250 (Inherited: 0x230)
struct UAkGameObject : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkGameObject, "AkGameObject")

	struct UAkAudioEvent* AkAudioEvent; // 0x228(0x8)
	struct FString EventName; // 0x230(0x10)
	uint8_t Pad_0x248[0x8]; // 0x248(0x8)

	// Object: Function AkAudio.AkGameObject.Stop
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x338ccdc
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338d194
	// Params: [ Num(6) Size(0x4C) ]
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID);

	// Object: Function AkAudio.AkGameObject.PostAssociatedAkEvent
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338d3ec
	// Params: [ Num(4) Size(0x2C) ]
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources);

	// Object: Function AkAudio.AkGameObject.PostAkEventAsync
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338ccf0
	// Params: [ Num(7) Size(0x50) ]
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameObject.PostAkEvent
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338cf84
	// Params: [ Num(6) Size(0x44) ]
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName);
};

// Object: Class AkAudio.AkComponent
// Size: 0x4D0 (Inherited: 0x250)
struct UAkComponent : UAkGameObject
{
	DEFINE_UE_CLASS_HELPERS(UAkComponent, "AkComponent")

	bool bUseSpatialAudio; // 0x242(0x1)
	uint8_t OcclusionCollisionChannel; // 0x248(0x1)
	uint8_t EnableSpotReflectors : 1; // 0x249(0x1), Mask(0x1)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x250(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x258(0x10)
	int32_t EarlyReflectionOrder; // 0x268(0x4)
	float EarlyReflectionBusSendGain; // 0x26C(0x4)
	float EarlyReflectionMaxPathLength; // 0x270(0x4)
	float roomReverbAuxBusGain; // 0x274(0x4)
	int32_t diffractionMaxEdges; // 0x278(0x4)
	int32_t diffractionMaxPaths; // 0x27C(0x4)
	float diffractionMaxPathLength; // 0x280(0x4)
	bool StopWhenOwnerDestroyed; // 0x284(0x1)
	uint8_t BitPad_0x287_1 : 7; // 0x287(0x1)
	float AttenuationScalingFactor; // 0x288(0x4)
	float OcclusionRefreshInterval; // 0x28C(0x4)
	bool bUseReverbVolumes; // 0x290(0x1)
	bool bUseSpatialAudioRoom; // 0x291(0x1)
	uint8_t Pad_0x292[0xCE]; // 0x292(0xCE)
	struct TSet<struct UAkComponent*> Listeners; // 0x360(0x50)
	struct TSet<struct UAkComponent*> Emitters; // 0x3B0(0x50)
	struct UAkRoomComponent* CurrentRoom; // 0x400(0x8)
	struct UAkLateReverbComponent* CurrentLateReverbComponent; // 0x408(0x8)
	struct AActor* OwnerActor; // 0x410(0x8)
	uint8_t Pad_0x418[0x1D]; // 0x418(0x1D)
	bool DynamicTickInterval; // 0x435(0x1)
	bool AutoPostEvent; // 0x436(0x1)
	bool UseFloorSystem; // 0x437(0x1)
	int32_t CurrentFloor; // 0x438(0x4)
	float SpecialInsideOutValue; // 0x43C(0x4)
	uint8_t Pad_0x440[0x44]; // 0x440(0x44)
	uint8_t TickIntervalInFrames; // 0x484(0x1)
	uint8_t Pad_0x485[0x3]; // 0x485(0x3)
	float DistanceToListener; // 0x488(0x4)
	bool IsListeningToSelf; // 0x48C(0x1)
	bool IsSGCharacter; // 0x48D(0x1)
	uint8_t Pad_0x48E[0x2]; // 0x48E(0x2)
	struct FVoicePlayingData CurrentSpeakingDialog; // 0x490(0x28)
	uint8_t Pad_0x4B8[0x8]; // 0x4B8(0x8)
	struct USetRTPCComponent* SetRTPCComponent; // 0x4C0(0x8)
	uint8_t Pad_0x4C8[0x8]; // 0x4C8(0x8)

	// Object: Function AkAudio.AkComponent.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3388d0c
	// Params: [ Num(1) Size(0x1) ]
	void UseReverbVolumes(bool inUseReverbVolumes);

	// Object: Function AkAudio.AkComponent.UseEarlyReflections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3388b14
	// Params: [ Num(6) Size(0x28) ]
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName);

	// Object: Function AkAudio.AkComponent.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3388f2c
	// Params: [ Num(3) Size(0x28) ]
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3388e7c
	// Params: [ Num(1) Size(0x1) ]
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);

	// Object: Function AkAudio.AkComponent.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x33894cc
	// Params: [ Num(4) Size(0x20) ]
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC);

	// Object: Function AkAudio.AkComponent.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3388910
	// Params: [ Num(1) Size(0x4) ]
	void SetOutputBusVolume(float BusVolume);

	// Object: Function AkAudio.AkComponent.SetListeners
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3388dbc
	// Params: [ Num(1) Size(0x10) ]
	void SetListeners(const struct TArray<struct UAkComponent*>& Listeners);

	// Object: Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x33889b8
	// Params: [ Num(1) Size(0x4) ]
	void SetEarlyReflectionsVolume(float SendVolume);

	// Object: Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3388a60
	// Params: [ Num(1) Size(0x10) ]
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName);

	// Object: Function AkAudio.AkComponent.SetAttenuationScalingFactor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x338885c
	// Params: [ Num(2) Size(0x5) ]
	bool SetAttenuationScalingFactor(float Value);

	// Object: Function AkAudio.AkComponent.ResetObstructionOcclusionImmediately
	// Flags: [Final|Native|Public]
	// Offset: 0x33887d8
	// Params: [ Num(0) Size(0x0) ]
	void ResetObstructionOcclusionImmediately();

	// Object: Function AkAudio.AkComponent.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3389108
	// Params: [ Num(2) Size(0x18) ]
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger);

	// Object: Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3389ac8
	// Params: [ Num(3) Size(0x30) ]
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3389c30
	// Params: [ Num(3) Size(0x2C) ]
	int32_t PostAssociatedAkEventAndWaitForEnd(const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PostAkEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x33896ac
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostAkEventByName(struct FString in_EventName);

	// Object: Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338976c
	// Params: [ Num(4) Size(0x38) ]
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3389914
	// Params: [ Num(5) Size(0x44) ]
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkComponent.PlayVoiceDialog
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x33885a4
	// Params: [ Num(5) Size(0x30) ]
	int32_t PlayVoiceDialog(struct FString VoiceEventName, bool WaitUntilCurrentEnd, struct FString ExternalFileName, int32_t RandomCount);

	// Object: Function AkAudio.AkComponent.OnVoiceDialogEndCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x8708f18
	// Params: [ Num(2) Size(0x10) ]
	void OnVoiceDialogEndCallback(EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo);

	// Object: Function AkAudio.AkComponent.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3389250
	// Params: [ Num(6) Size(0x2C) ]
	void GetRTPCValue(struct UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID);

	// Object: Function AkAudio.AkComponent.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0x33887ec
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPosition();

	// Object: Function AkAudio.AkComponent.GetOwnerActor
	// Flags: [Final|Native|Public]
	// Offset: 0x3388510
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetOwnerActor();

	// Object: Function AkAudio.AkComponent.GetListener
	// Flags: [Final|Native|Public]
	// Offset: 0x3388554
	// Params: [ Num(1) Size(0x8) ]
	struct UAkComponent* GetListener();

	// Object: Function AkAudio.AkComponent.GetCurrentRoom
	// Flags: [Final|Native|Public]
	// Offset: 0x3388588
	// Params: [ Num(1) Size(0x8) ]
	struct UAkRoomComponent* GetCurrentRoom();

	// Object: Function AkAudio.AkComponent.GetCurrentLateReverb
	// Flags: [Final|Native|Public]
	// Offset: 0x3388538
	// Params: [ Num(1) Size(0x8) ]
	struct UAkLateReverbComponent* GetCurrentLateReverb();

	// Object: Function AkAudio.AkComponent.GetAttenuationRadius
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3388828
	// Params: [ Num(1) Size(0x4) ]
	float GetAttenuationRadius();
};

// Object: Class AkAudio.AkAudioInputComponent
// Size: 0x4E0 (Inherited: 0x4D0)
struct UAkAudioInputComponent : UAkComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkAudioInputComponent, "AkAudioInputComponent")

	uint8_t Pad_0x4D0[0x10]; // 0x4D0(0x10)

	// Object: Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3387e28
	// Params: [ Num(1) Size(0x4) ]
	int32_t PostAssociatedAudioInputEvent();
};

// Object: Class AkAudio.AkAuxBus
// Size: 0x60 (Inherited: 0x58)
struct UAkAuxBus : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkAuxBus, "AkAuxBus")

	struct UAkAudioBank* RequiredBank; // 0x58(0x8)
};

// Object: Class AkAudio.AkCheckBox
// Size: 0xBE0 (Inherited: 0x148)
struct UAkCheckBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkCheckBox, "AkCheckBox")

	uint8_t Pad_0x148[0x3D8]; // 0x148(0x3D8)
	ECheckBoxState CheckedState; // 0x520(0x1)
	uint8_t Pad_0x521[0x3]; // 0x521(0x3)
	struct FDelegate CheckedStateDelegate; // 0x524(0x10)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct FCheckBoxStyle WidgetStyle; // 0x538(0x5C8)
	uint8_t HorizontalAlignment; // 0xB00(0x1)
	bool IsFocusable; // 0xB01(0x1)
	uint8_t Pad_0xB02[0x6]; // 0xB02(0x6)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xB08(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xB18(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xB58(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xB68(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xB78(0x10)
	uint8_t Pad_0xB88[0x58]; // 0xB88(0x58)

	// Object: Function AkAudio.AkCheckBox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3388320
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(bool InIsChecked);

	// Object: Function AkAudio.AkCheckBox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3388278
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckedState(ECheckBoxState InCheckedState);

	// Object: Function AkAudio.AkCheckBox.SetAkItemId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x33881c4
	// Params: [ Num(1) Size(0x10) ]
	void SetAkItemId(const struct FGuid& itemID);

	// Object: Function AkAudio.AkCheckBox.SetAkBoolProperty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33880dc
	// Params: [ Num(1) Size(0x10) ]
	void SetAkBoolProperty(struct FString ItemProperty);

	// Object: Function AkAudio.AkCheckBox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x338843c
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function AkAudio.AkCheckBox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3388404
	// Params: [ Num(1) Size(0x1) ]
	bool IsChecked();

	// Object: Function AkAudio.AkCheckBox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x33883d0
	// Params: [ Num(1) Size(0x1) ]
	ECheckBoxState GetCheckedState();

	// Object: Function AkAudio.AkCheckBox.GetAkProperty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3388068
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAkProperty();

	// Object: Function AkAudio.AkCheckBox.GetAkItemId
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3388190
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetAkItemId();
};

// Object: Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkGameplayStatics, "AkGameplayStatics")

	// Object: Function AkAudio.AkGameplayStatics.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f040
	// Params: [ Num(2) Size(0x10) ]
	static void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.UseEarlyReflections
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338ee14
	// Params: [ Num(7) Size(0x30) ]
	static void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338dd64
	// Params: [ Num(1) Size(0x10) ]
	static void UnloadBankByName(struct FString BankName);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBankAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338de08
	// Params: [ Num(2) Size(0x18) ]
	static void UnloadBankAsync(struct UAkAudioBank* Bank, const struct FDelegate& BankUnloadedCallback);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBank
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338df08
	// Params: [ Num(4) Size(0x38) ]
	static void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.StopProfilerCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338db50
	// Params: [ Num(0) Size(0x0) ]
	static void StopProfilerCapture();

	// Object: Function AkAudio.AkGameplayStatics.StopOutputCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338dc08
	// Params: [ Num(0) Size(0x0) ]
	static void StopOutputCapture();

	// Object: Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e4d0
	// Params: [ Num(1) Size(0x8) ]
	static void StopAllAmbientSounds(struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.StopAll
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e6c0
	// Params: [ Num(0) Size(0x0) ]
	static void StopAll();

	// Object: Function AkAudio.AkGameplayStatics.StopActor
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e6d4
	// Params: [ Num(1) Size(0x8) ]
	static void StopActor(struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.StartProfilerCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338db64
	// Params: [ Num(1) Size(0x10) ]
	static void StartProfilerCapture(struct FString Filename);

	// Object: Function AkAudio.AkGameplayStatics.StartOutputCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338dcc0
	// Params: [ Num(1) Size(0x10) ]
	static void StartOutputCapture(struct FString Filename);

	// Object: Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e568
	// Params: [ Num(1) Size(0x8) ]
	static void StartAllAmbientSounds(struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x338fe20
	// Params: [ Num(8) Size(0x50) ]
	static struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f6dc
	// Params: [ Num(4) Size(0x20) ]
	static void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState);

	// Object: Function AkAudio.AkGameplayStatics.SetState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f944
	// Params: [ Num(3) Size(0x18) ]
	static void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State);

	// Object: Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338e844
	// Params: [ Num(3) Size(0x28) ]
	static void SetSpeakerAngles(const struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338fc8c
	// Params: [ Num(5) Size(0x20) ]
	static void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC);

	// Object: Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338ed38
	// Params: [ Num(2) Size(0x5) ]
	static void SetReflectionsOrder(int32_t Order, bool RefreshPaths);

	// Object: Function AkAudio.AkGameplayStatics.SetPanningRule
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338eae4
	// Params: [ Num(1) Size(0x1) ]
	static void SetPanningRule(EPanningRule PanRule);

	// Object: Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338ec60
	// Params: [ Num(2) Size(0x10) ]
	static void SetOutputBusVolume(float BusVolume, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338dab0
	// Params: [ Num(1) Size(0x4) ]
	static void SetOcclusionScalingFactor(float ScalingFactor);

	// Object: Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e76c
	// Params: [ Num(2) Size(0x10) ]
	static void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.SetMultiplePositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f558
	// Params: [ Num(3) Size(0x19) ]
	static void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);

	// Object: Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f128
	// Params: [ Num(4) Size(0x29) ]
	static void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);

	// Object: Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f340
	// Params: [ Num(4) Size(0x29) ]
	static void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<EAkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);

	// Object: Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338d738
	// Params: [ Num(2) Size(0x20) ]
	static void SetCurrentAudioCultureAsync(struct FString AudioCulture, const struct FDelegate& Completed);

	// Object: Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338d844
	// Params: [ Num(3) Size(0x30) ]
	static void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.SetBusConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338eb7c
	// Params: [ Num(2) Size(0x11) ]
	static void SetBusConfig(struct FString BusName, EAkChannelConfiguration ChannelConfiguration);

	// Object: Function AkAudio.AkGameplayStatics.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338f830
	// Params: [ Num(3) Size(0x18) ]
	static void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger);

	// Object: Function AkAudio.AkGameplayStatics.PostEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33906ac
	// Params: [ Num(3) Size(0x19) ]
	static void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PostEventAttached
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3390f78
	// Params: [ Num(6) Size(0x34) ]
	static int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName);

	// Object: Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3390390
	// Params: [ Num(4) Size(0x30) ]
	static void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.PostEventAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x33904f4
	// Params: [ Num(6) Size(0x3C) ]
	static int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.PostEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3390c90
	// Params: [ Num(8) Size(0x54) ]
	static int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName);

	// Object: Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33907d8
	// Params: [ Num(6) Size(0x40) ]
	static void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33909fc
	// Params: [ Num(7) Size(0x54) ]
	static int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameplayStatics.LoadInitBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e084
	// Params: [ Num(0) Size(0x0) ]
	static void LoadInitBank();

	// Object: Function AkAudio.AkGameplayStatics.LoadBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338e098
	// Params: [ Num(2) Size(0x11) ]
	static void LoadBanks(const struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);

	// Object: Function AkAudio.AkGameplayStatics.LoadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e19c
	// Params: [ Num(1) Size(0x10) ]
	static void LoadBankByName(struct FString BankName);

	// Object: Function AkAudio.AkGameplayStatics.LoadBankAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338e240
	// Params: [ Num(2) Size(0x18) ]
	static void LoadBankAsync(struct UAkAudioBank* Bank, const struct FDelegate& BankLoadedCallback);

	// Object: Function AkAudio.AkGameplayStatics.LoadBank
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e340
	// Params: [ Num(4) Size(0x38) ]
	static void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.IsGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33911a0
	// Params: [ Num(2) Size(0x9) ]
	static bool IsGame(struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84a12c0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEditor();

	// Object: Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338e98c
	// Params: [ Num(3) Size(0x28) ]
	static void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset);

	// Object: Function AkAudio.AkGameplayStatics.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338fa58
	// Params: [ Num(7) Size(0x28) ]
	static void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC);

	// Object: Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338da8c
	// Params: [ Num(1) Size(0x4) ]
	static float GetOcclusionScalingFactor();

	// Object: Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338d9f0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCurrentAudioCulture();

	// Object: Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338d980
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetAvailableAudioCultures();

	// Object: Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338d570
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type);

	// Object: Function AkAudio.AkGameplayStatics.GetAkComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x339124c
	// Params: [ Num(6) Size(0x30) ]
	static struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, uint8_t LocationType);

	// Object: Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338d654
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type);

	// Object: Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3390064
	// Params: [ Num(4) Size(0xD) ]
	static void ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);

	// Object: Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33901b8
	// Params: [ Num(6) Size(0x24) ]
	static void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);

	// Object: Function AkAudio.AkGameplayStatics.ClearBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338e4bc
	// Params: [ Num(0) Size(0x0) ]
	static void ClearBanks();

	// Object: Function AkAudio.AkGameplayStatics.CancelEventCallback
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x338e600
	// Params: [ Num(1) Size(0x10) ]
	static void CancelEventCallback(const struct FDelegate& PostEventCallback);

	// Object: Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x338dc1c
	// Params: [ Num(1) Size(0x10) ]
	static void AddOutputCaptureMarker(struct FString MarkerText);
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

	int32_t PlayingID; // 0x30(0x4)
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
	// Offset: 0x3391ed4
	// Params: [ Num(1) Size(0x1) ]
	EAkMidiEventType GetType();

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391898
	// Params: [ Num(2) Size(0x4) ]
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391ae0
	// Params: [ Num(2) Size(0x9) ]
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391d20
	// Params: [ Num(2) Size(0x5) ]
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391c60
	// Params: [ Num(2) Size(0x5) ]
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391a20
	// Params: [ Num(2) Size(0x5) ]
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391de0
	// Params: [ Num(2) Size(0x5) ]
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339195c
	// Params: [ Num(2) Size(0x4) ]
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3391ea0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetChannel();

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetCc
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3391ba0
	// Params: [ Num(2) Size(0x5) ]
	bool GetCc(struct FAkMidiCc& AsCc);
};

// Object: Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMarkerCallbackInfo, "AkMarkerCallbackInfo")

	int32_t Identifier; // 0x38(0x4)
	int32_t position; // 0x3C(0x4)
	struct FString label; // 0x40(0x10)
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
	bool bStreaming; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMusicSyncCallbackInfo, "AkMusicSyncCallbackInfo")

	int32_t PlayingID; // 0x30(0x4)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	EAkCallbackType MusicSyncType; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct FString UserCueName; // 0x60(0x10)
};

// Object: Class AkAudio.AkGeometryComponent
// Size: 0x350 (Inherited: 0x230)
struct UAkGeometryComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkGeometryComponent, "AkGeometryComponent")

	EAkMeshType MeshType; // 0x224(0x1)
	int32_t LOD; // 0x228(0x4)
	float WeldingThreshold; // 0x22C(0x4)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x230(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x280(0x10)
	uint8_t bEnableDiffraction : 1; // 0x290(0x1), Mask(0x1)
	uint8_t bEnableDiffractionOnBoundaryEdges : 1; // 0x290(0x1), Mask(0x2)
	struct AActor* AssociatedRoom; // 0x298(0x8)
	struct UStaticMeshComponent* Parent; // 0x2A0(0x8)
	uint8_t BitPad_0x2A9_2 : 6; // 0x2A9(0x1)
	uint8_t Pad_0x2AA[0x6]; // 0x2AA(0x6)
	struct FAkGeometryData GeometryData; // 0x2B0(0x50)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> PreviousStaticMeshSurfaceOverride; // 0x300(0x50)

	// Object: Function AkAudio.AkGeometryComponent.UpdateGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33959d4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateGeometry();

	// Object: Function AkAudio.AkGeometryComponent.RemoveGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33959e8
	// Params: [ Num(0) Size(0x0) ]
	void RemoveGeometry();

	// Object: Function AkAudio.AkGeometryComponent.ConvertMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33959fc
	// Params: [ Num(0) Size(0x0) ]
	void ConvertMesh();
};

// Object: Class AkAudio.AkGroupValue
// Size: 0x58 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkGroupValue, "AkGroupValue")

	uint32_t GroupShortID; // 0x40(0x4)
	uint8_t Pad_0x44[0x14]; // 0x44(0x14)
};

// Object: Class AkAudio.AkInitBankAssetData
// Size: 0xA0 (Inherited: 0x90)
struct UAkInitBankAssetData : UAkAssetDataWithMedia
{
	DEFINE_UE_CLASS_HELPERS(UAkInitBankAssetData, "AkInitBankAssetData")

	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x90(0x10)
};

// Object: Class AkAudio.AkInitBank
// Size: 0x78 (Inherited: 0x58)
struct UAkInitBank : UAkAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UAkInitBank, "AkInitBank")

	struct TArray<struct FString> AvailableAudioCultures; // 0x58(0x10)
	struct FString DefaultLanguage; // 0x68(0x10)
};

// Object: Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkIOSInitializationSettings, "AkIOSInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0xC)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xC8(0x34)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
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
	// Offset: 0x3395c78
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);

	// Object: Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3395da0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// Object: Class AkAudio.AkItemBoolProperties
// Size: 0x170 (Inherited: 0x130)
struct UAkItemBoolProperties : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkItemBoolProperties, "AkItemBoolProperties")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x140(0x10)
	uint8_t Pad_0x150[0x20]; // 0x150(0x20)

	// Object: Function AkAudio.AkItemBoolProperties.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3395ea0
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString newText);

	// Object: Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3395ff0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedProperty();

	// Object: Function AkAudio.AkItemBoolProperties.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3395f54
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
	// Offset: 0x3396094
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);

	// Object: Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x33961bc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};

// Object: Class AkAudio.AkItemProperties
// Size: 0x170 (Inherited: 0x130)
struct UAkItemProperties : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkItemProperties, "AkItemProperties")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x140(0x10)
	uint8_t Pad_0x150[0x20]; // 0x150(0x20)

	// Object: Function AkAudio.AkItemProperties.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x33962bc
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString newText);

	// Object: Function AkAudio.AkItemProperties.GetSelectedProperty
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x339640c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedProperty();

	// Object: Function AkAudio.AkItemProperties.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3396370
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkLateReverbComponent
// Size: 0x290 (Inherited: 0x230)
struct UAkLateReverbComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkLateReverbComponent, "AkLateReverbComponent")

	uint8_t bEnable : 1; // 0x224(0x1), Mask(0x1)
	struct UAkAuxBus* AuxBus; // 0x228(0x8)
	struct FString AuxBusName; // 0x230(0x10)
	float SendLevel; // 0x240(0x4)
	float FadeRate; // 0x244(0x4)
	float Priority; // 0x248(0x4)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x250(0x8)
	uint8_t BitPad_0x25C_1 : 7; // 0x25C(0x1)
	uint8_t Pad_0x25D[0x23]; // 0x25D(0x23)
	struct AVolume* ParentVolume; // 0x280(0x8)
	struct ASplineSound* ParentSplineRegion; // 0x288(0x8)
};

// Object: Class AkAudio.AkLinuxInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkLinuxInitializationSettings, "AkLinuxInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8(0x38)

	// Object: Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x33964cc
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkLinuxPlatformInfo, "AkLinuxPlatformInfo")
};

// Object: Class AkAudio.AkMacInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkMacInitializationSettings, "AkMacInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8(0x38)

	// Object: Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x3396598
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkMacPlatformInfo, "AkMacPlatformInfo")
};

// Object: Class AkAudio.AkMediaAssetData
// Size: 0x40 (Inherited: 0x28)
struct UAkMediaAssetData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkMediaAssetData, "AkMediaAssetData")

	bool IsStreamed; // 0x28(0x1)
	bool UseDeviceMemory; // 0x29(0x1)
	uint8_t Pad_0x2A[0x16]; // 0x2A(0x16)
};

// Object: Class AkAudio.AkMediaAsset
// Size: 0x58 (Inherited: 0x28)
struct UAkMediaAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkMediaAsset, "AkMediaAsset")

	uint32_t ID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct UObject*> userdata; // 0x30(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
};

// Object: Class AkAudio.AkLocalizedMediaAsset
// Size: 0x58 (Inherited: 0x58)
struct UAkLocalizedMediaAsset : UAkMediaAsset
{
	DEFINE_UE_CLASS_HELPERS(UAkLocalizedMediaAsset, "AkLocalizedMediaAsset")
};

// Object: Class AkAudio.AkExternalMediaAsset
// Size: 0xB0 (Inherited: 0x58)
struct UAkExternalMediaAsset : UAkMediaAsset
{
	DEFINE_UE_CLASS_HELPERS(UAkExternalMediaAsset, "AkExternalMediaAsset")

	uint8_t Pad_0x58[0x58]; // 0x58(0x58)
};

// Object: Class AkAudio.AkObstructionVolume
// Size: 0x340 (Inherited: 0x338)
struct AAkObstructionVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkObstructionVolume, "AkObstructionVolume")

	float ObstructionValue; // 0x338(0x4)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)
};

// Object: Class AkAudio.AkOpenHarmonyInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkOpenHarmonyInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkOpenHarmonyInitializationSettings, "AkOpenHarmonyInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkOpenHarmonyAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x40)

	// Object: Function AkAudio.AkOpenHarmonyInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x339b958
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkOpenHarmonyPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkOpenHarmonyPlatformInfo : UAkPlatformInfo
{
	DEFINE_UE_CLASS_HELPERS(UAkOpenHarmonyPlatformInfo, "AkOpenHarmonyPlatformInfo")
};

// Object: Class AkAudio.AkReverbVolume
// Size: 0x370 (Inherited: 0x338)
struct AAkReverbVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkReverbVolume, "AkReverbVolume")

	uint8_t bEnabled : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t Pad_0x339[0x7]; // 0x339(0x7)
	struct UAkAuxBus* AuxBus; // 0x340(0x8)
	struct FString AuxBusName; // 0x348(0x10)
	float SendLevel; // 0x358(0x4)
	float FadeRate; // 0x35C(0x4)
	float Priority; // 0x360(0x4)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x368(0x8)
};

// Object: Class AkAudio.AkRoomComponent
// Size: 0x2F0 (Inherited: 0x250)
struct UAkRoomComponent : UAkGameObject
{
	DEFINE_UE_CLASS_HELPERS(UAkRoomComponent, "AkRoomComponent")

	struct AVolume* ParentVolume; // 0x248(0x8)
	uint8_t bEnable : 1; // 0x250(0x1), Mask(0x1)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x258(0x8)
	float Priority; // 0x260(0x4)
	float WallOcclusion; // 0x264(0x4)
	float RoomOcclusionValue; // 0x268(0x4)
	float AuxSendLevel; // 0x26C(0x4)
	bool AutoPost; // 0x270(0x1)
	uint8_t BitPad_0x271_1 : 7; // 0x271(0x1)
	uint8_t Pad_0x272[0x6]; // 0x272(0x6)
	struct TArray<struct UAkAudioEvent*> AkAudioEventArray; // 0x278(0x10)
	uint8_t Pad_0x288[0x50]; // 0x288(0x50)
	struct UAkLateReverbComponent* SameAVolumeLateReverbCom; // 0x2D8(0x8)
	uint8_t Pad_0x2E0[0x10]; // 0x2E0(0x10)
};

// Object: Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType
{
	DEFINE_UE_CLASS_HELPERS(UAkRtpc, "AkRtpc")
};

// Object: Class AkAudio.AkSettings
// Size: 0x190 (Inherited: 0x28)
struct UAkSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkSettings, "AkSettings")

	uint8_t MaxSimultaneousReverbVolumes; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x1)
	uint8_t DefaultOcclusionCollisionChannel; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	bool SplitSwitchContainerMedia; // 0xA8(0x1)
	bool SplitMediaPerFolder; // 0xA9(0x1)
	bool UseEventBasedPackaging; // 0xAA(0x1)
	bool EnableAutomaticAssetSynchronization; // 0xAB(0x1)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct FString CommandletCommitMessage; // 0xB0(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0xC0(0x50)
	struct TMap<struct FString, float> FixedObsInStaticMeshSet; // 0x110(0x50)
	bool AskedToUseNewAssetManagement; // 0x160(0x1)
	bool bEnableMultiCoreRendering; // 0x161(0x1)
	bool MigratedEnableMultiCoreRendering; // 0x162(0x1)
	bool FixupRedirectorsDuringMigration; // 0x163(0x1)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x168(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x178(0x10)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)
};

// Object: Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkSettingsPerUser, "AkSettingsPerUser")

	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x4)
	bool bAutoConnectToWAAPI; // 0x64(0x1)
	bool AutoSyncSelection; // 0x65(0x1)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x1)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x1)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)
};

// Object: Class AkAudio.AkSlider
// Size: 0x580 (Inherited: 0x130)
struct UAkSlider : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkSlider, "AkSlider")

	float Value; // 0x12C(0x4)
	struct FDelegate ValueDelegate; // 0x130(0x10)
	struct FSliderStyle WidgetStyle; // 0x140(0x370)
	uint8_t Orientation; // 0x4B0(0x1)
	struct FLinearColor SliderBarColor; // 0x4B4(0x10)
	struct FLinearColor SliderHandleColor; // 0x4C4(0x10)
	bool IndentHandle; // 0x4D4(0x1)
	bool Locked; // 0x4D5(0x1)
	uint8_t Pad_0x4D7[0x1]; // 0x4D7(0x1)
	float StepSize; // 0x4D8(0x4)
	bool IsFocusable; // 0x4DC(0x1)
	uint8_t Pad_0x4DD[0x3]; // 0x4DD(0x3)
	struct FAkPropertyToControl ThePropertyToControl; // 0x4E0(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4F0(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x530(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x540(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x550(0x10)
	uint8_t Pad_0x560[0x20]; // 0x560(0x20)

	// Object: Function AkAudio.AkSlider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339c0b4
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function AkAudio.AkSlider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339beac
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function AkAudio.AkSlider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x339bd5c
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function AkAudio.AkSlider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x339be04
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderBarColor(struct FLinearColor InValue);

	// Object: Function AkAudio.AkSlider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339bf54
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(bool InValue);

	// Object: Function AkAudio.AkSlider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339c004
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(bool InValue);

	// Object: Function AkAudio.AkSlider.SetAkSliderItemProperty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339bbc0
	// Params: [ Num(1) Size(0x10) ]
	void SetAkSliderItemProperty(struct FString ItemProperty);

	// Object: Function AkAudio.AkSlider.SetAkSliderItemId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x339bca8
	// Params: [ Num(1) Size(0x10) ]
	void SetAkSliderItemId(const struct FGuid& itemID);

	// Object: Function AkAudio.AkSlider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x339c15c
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function AkAudio.AkSlider.GetAkSliderItemProperty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x339bb4c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAkSliderItemProperty();

	// Object: Function AkAudio.AkSlider.GetAkSliderItemId
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x339bc74
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetAkSliderItemId();
};

// Object: Class AkAudio.AkSpatialAudioVolume
// Size: 0x390 (Inherited: 0x338)
struct AAkSpatialAudioVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkSpatialAudioVolume, "AkSpatialAudioVolume")

	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x338(0x8)
	struct UAkLateReverbComponent* LateReverb; // 0x340(0x8)
	struct UAkRoomComponent* Room; // 0x348(0x8)
	int32_t RoomIndex; // 0x350(0x4)
	uint8_t Pad_0x354[0x4]; // 0x354(0x4)
	struct USetStateComponent* SetStateComponent; // 0x358(0x8)
	struct USetSwitchComponent* SetSwitchComponent; // 0x360(0x8)
	int32_t floor; // 0x368(0x4)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
	float ObstructionValue; // 0x370(0x4)
	bool UseVolumeOrientationOcc; // 0x374(0x1)
	uint8_t Pad_0x375[0x3]; // 0x375(0x3)
	float OcclusionValueArray[0x6]; // 0x378(0x18)

	// Object: Function AkAudio.AkSpatialAudioVolume.GetVolumeInMeters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339c1d4
	// Params: [ Num(1) Size(0x4) ]
	float GetVolumeInMeters();
};

// Object: Class AkAudio.AkSpotReflector
// Size: 0x328 (Inherited: 0x300)
struct AAkSpotReflector : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAkSpotReflector, "AkSpotReflector")

	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x300(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x308(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x318(0x8)
	float DistanceScalingFactor; // 0x320(0x4)
	float Level; // 0x324(0x4)
};

// Object: Class AkAudio.AkStairPortal
// Size: 0x338 (Inherited: 0x338)
struct AAkStairPortal : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AAkStairPortal, "AkStairPortal")
};

// Object: Class AkAudio.AkStateValue
// Size: 0x58 (Inherited: 0x58)
struct UAkStateValue : UAkGroupValue
{
	DEFINE_UE_CLASS_HELPERS(UAkStateValue, "AkStateValue")
};

// Object: Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x260 (Inherited: 0x230)
struct UAkSurfaceReflectorSetComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAkSurfaceReflectorSetComponent, "AkSurfaceReflectorSetComponent")

	uint8_t bEnableSurfaceReflectors : 1; // 0x224(0x1), Mask(0x1)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x228(0x10)
	uint8_t bEnableDiffraction : 1; // 0x238(0x1), Mask(0x1)
	uint8_t bEnableDiffractionOnBoundaryEdges : 1; // 0x238(0x1), Mask(0x2)
	struct AActor* AssociatedRoom; // 0x240(0x8)
	struct UModel* ParentBrush; // 0x248(0x8)
	uint8_t BitPad_0x250_3 : 5; // 0x250(0x1)
	uint8_t Pad_0x251[0xF]; // 0x251(0xF)

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339c24c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSurfaceReflectorSet();

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339c274
	// Params: [ Num(0) Size(0x0) ]
	void SendSurfaceReflectorSet();

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x339c260
	// Params: [ Num(0) Size(0x0) ]
	void RemoveSurfaceReflectorSet();
};

// Object: Class AkAudio.AkSwitchValue
// Size: 0x58 (Inherited: 0x58)
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

// Object: Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAkWaapiCalls, "AkWaapiCalls")

	// Object: Function AkAudio.AkWaapiCalls.Unsubscribe
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339c4e0
	// Params: [ Num(3) Size(0x20) ]
	static struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);

	// Object: Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339c6b4
	// Params: [ Num(6) Size(0x50) ]
	static struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);

	// Object: Function AkAudio.AkWaapiCalls.SetSubscriptionID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339cf48
	// Params: [ Num(2) Size(0xC) ]
	static void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);

	// Object: Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339cdc0
	// Params: [ Num(2) Size(0x11) ]
	static bool RegisterWaapiProjectLoadedCallback(const struct FDelegate& Callback);

	// Object: Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339ccec
	// Params: [ Num(2) Size(0x11) ]
	static bool RegisterWaapiConnectionLostCallback(const struct FDelegate& Callback);

	// Object: Function AkAudio.AkWaapiCalls.GetSubscriptionID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339ce94
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);

	// Object: Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x339c2d8
	// Params: [ Num(2) Size(0x20) ]
	static struct FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);

	// Object: Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x339c3f4
	// Params: [ Num(2) Size(0x18) ]
	static struct FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);

	// Object: Function AkAudio.AkWaapiCalls.CallWaapi
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339ca04
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
	// Offset: 0x339d06c
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);

	// Object: Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x339d194
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
	// Offset: 0x339f304
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetObjectField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339e99c
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetNumberField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339ed38
	// Params: [ Num(4) Size(0x38) ]
	static struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetBoolField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339f01c
	// Params: [ Num(4) Size(0x38) ]
	static struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339e6a4
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, const struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339e3ac
	// Params: [ Num(4) Size(0x40) ]
	static struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, const struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetStringField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339e1a8
	// Params: [ Num(3) Size(0x30) ]
	static struct FString GetStringField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetObjectField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339d9b4
	// Params: [ Num(3) Size(0x30) ]
	static struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetNumberField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339de14
	// Params: [ Num(3) Size(0x24) ]
	static float GetNumberField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetIntegerField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339dc4c
	// Params: [ Num(3) Size(0x24) ]
	static int32_t GetIntegerField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetBoolField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339dfdc
	// Params: [ Num(3) Size(0x21) ]
	static bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetArrayField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x339d610
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x339d294
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject);

	// Object: Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x339d468
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
	// Offset: 0x33a39ac
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);

	// Object: Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x33a3ad4
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};

// Object: Class AkAudio.AkWindowsInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAkWindowsInitializationSettings, "AkWindowsInitializationSettings")

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x40)

	// Object: Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x33a3c30
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
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
// Size: 0x170 (Inherited: 0x130)
struct UAkWwiseTree : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkWwiseTree, "AkWwiseTree")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x140(0x10)
	uint8_t Pad_0x150[0x20]; // 0x150(0x20)

	// Object: Function AkAudio.AkWwiseTree.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x33a3d14
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString newText);

	// Object: Function AkAudio.AkWwiseTree.GetSelectedItem
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x33a3e64
	// Params: [ Num(1) Size(0x30) ]
	struct FAkWwiseObjectDetails GetSelectedItem();

	// Object: Function AkAudio.AkWwiseTree.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x33a3dc8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkWwiseTreeSelector
// Size: 0x190 (Inherited: 0x130)
struct UAkWwiseTreeSelector : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UAkWwiseTreeSelector, "AkWwiseTreeSelector")

	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x140(0x10)
	uint8_t Pad_0x150[0x40]; // 0x150(0x40)
};

// Object: Class AkAudio.AnimNotify_AudioBank
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_AudioBank : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_AudioBank, "AnimNotify_AudioBank")

	struct UAkAudioBank* Bank; // 0x38(0x8)
	uint8_t Operation; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	int32_t DelaySecond; // 0x44(0x4)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)

	// Object: Function AkAudio.AnimNotify_AudioBank.UnloadBank
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x33a3fb4
	// Params: [ Num(0) Size(0x0) ]
	void UnloadBank();

	// Object: Function AkAudio.AnimNotify_AudioBank.LoadBank
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x33a3fc8
	// Params: [ Num(0) Size(0x0) ]
	void LoadBank();
};

// Object: Class AkAudio.AnimNotify_PlayAudio
// Size: 0xA8 (Inherited: 0x38)
struct UAnimNotify_PlayAudio : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayAudio, "AnimNotify_PlayAudio")

	struct UAkAudioEvent* AudioEvent; // 0x38(0x8)
	bool bUseConfig; // 0x40(0x1)
	bool bEnableSoundIndicator; // 0x41(0x1)
	bool bEnableHUDShake; // 0x42(0x1)
	bool Stoppable; // 0x43(0x1)
	bool StopWhenBlendOut; // 0x44(0x1)
	bool FollowMesh; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	struct FString ComponentName; // 0x48(0x10)
	bool UseEmitLocation; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FVector EmitLocation; // 0x5C(0xC)
	bool TriggerOnSwitch; // 0x68(0x1)
	bool IgnoreOnSwitch; // 0x69(0x1)
	uint8_t Pad_0x6A[0x6]; // 0x6A(0x6)
	struct FString SwitchGroupName; // 0x70(0x10)
	struct FString SwitchName; // 0x80(0x10)
	bool NotifyToAudioConsole; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	struct FName AudioNotifyName; // 0x94(0x8)
	struct TWeakObjectPtr<struct UAnimInstance> AnimInstance; // 0x9C(0x8)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)

	// Object: Function AkAudio.AnimNotify_PlayAudio.ProcessAudioPlayingID
	// Flags: [Native|Public|Const]
	// Offset: 0x33a4008
	// Params: [ Num(2) Size(0xC) ]
	void ProcessAudioPlayingID(struct USkeletalMeshComponent* MeshComp, int32_t InPlayingID);

	// Object: Function AkAudio.AnimNotify_PlayAudio.OnMontageEnded
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x88134bc
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, bool Interrupted);
};

// Object: Class AkAudio.AudioEmitter3D
// Size: 0x330 (Inherited: 0x300)
struct AAudioEmitter3D : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAudioEmitter3D, "AudioEmitter3D")

	struct UAkAudioEvent* AudioEvent; // 0x300(0x8)
	bool AutoActivate; // 0x308(0x1)
	bool AutoStartStop; // 0x309(0x1)
	uint8_t Pad_0x30A[0x2]; // 0x30A(0x2)
	float DistanceToStopSound; // 0x30C(0x4)
	struct TArray<struct UAudioStudioComponent*> AudioStudioComponents; // 0x310(0x10)
	struct UAkComponent* AkComponent; // 0x320(0x8)
	bool bIsSoundPlaying; // 0x328(0x1)
	bool bIsSoundPaused; // 0x329(0x1)
	uint8_t Pad_0x32A[0x6]; // 0x32A(0x6)

	// Object: Function AkAudio.AudioEmitter3D.DeactivateSoundData
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x33a425c
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateSoundData();

	// Object: Function AkAudio.AudioEmitter3D.ActivateSoundData
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x33a4278
	// Params: [ Num(0) Size(0x0) ]
	void ActivateSoundData();
};

// Object: Class AkAudio.AudioManager
// Size: 0x28 (Inherited: 0x28)
struct UAudioManager : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAudioManager, "AudioManager")

	// Object: Function AkAudio.AudioManager.WakeupWwiseFromSuspend
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4998
	// Params: [ Num(0) Size(0x0) ]
	static void WakeupWwiseFromSuspend();

	// Object: Function AkAudio.AudioManager.UnmuteWwiseAudio
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4ccc
	// Params: [ Num(0) Size(0x0) ]
	static void UnmuteWwiseAudio();

	// Object: Function AkAudio.AudioManager.UnloadBankByName
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x33a8adc
	// Params: [ Num(6) Size(0x38) ]
	static int32_t UnloadBankByName(struct FString BankName, struct FString Source, bool IgnoreCounter, bool Async, const struct FDelegate& UnloadFinishCallback);

	// Object: Function AkAudio.AudioManager.UnloadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33a8d78
	// Params: [ Num(6) Size(0x28) ]
	static int32_t UnloadBank(struct UAkAudioBank* BankReference, struct UObject* Source, bool IgnoreCounter, bool Async, const struct FDelegate& UnloadFinishCallback);

	// Object: Function AkAudio.AudioManager.TogglePortalAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x33a532c
	// Params: [ Num(3) Size(0x18) ]
	static void TogglePortalAtLocation(struct FVector Location, bool Open, struct UObject* Source);

	// Object: Function AkAudio.AudioManager.SuspendWwise
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a49ac
	// Params: [ Num(1) Size(0x1) ]
	static void SuspendWwise(bool in_bRenderAnyway);

	// Object: Function AkAudio.AudioManager.StopWwiseEventByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9887d8c
	// Params: [ Num(5) Size(0x34) ]
	static void StopWwiseEventByName(struct FString EventName, struct AActor* Emitter, float FadeOutTime, struct FString ComponentName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.StopWwiseEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a84b8
	// Params: [ Num(5) Size(0x2C) ]
	static void StopWwiseEvent(struct UAkAudioEvent* EventReference, struct AActor* Emitter, float FadeOutTime, struct FString ComponentName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.StopMIDIMetronome
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a709c
	// Params: [ Num(3) Size(0x19) ]
	static void StopMIDIMetronome(struct FString EventName, struct AActor* Emitter, bool StopCurrentNote);

	// Object: Function AkAudio.AudioManager.StopBackgroundMusic
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a6d84
	// Params: [ Num(1) Size(0x4) ]
	static void StopBackgroundMusic(float FadeOutTime);

	// Object: Function AkAudio.AudioManager.StopAudioFunctionCallRecord
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a42cc
	// Params: [ Num(0) Size(0x0) ]
	static void StopAudioFunctionCallRecord();

	// Object: Function AkAudio.AudioManager.StopAnimationSound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a83e0
	// Params: [ Num(2) Size(0xC) ]
	static void StopAnimationSound(struct AActor* Emitter, float FadeOutTime);

	// Object: Function AkAudio.AudioManager.StopAll
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9887cf4
	// Params: [ Num(1) Size(0x8) ]
	static void StopAll(struct AActor* Emitter);

	// Object: Function AkAudio.AudioManager.StartMIDIMetronome
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a72d0
	// Params: [ Num(3) Size(0x20) ]
	static void StartMIDIMetronome(float TickInterval, struct FString EventName, struct AActor* Emitter);

	// Object: Function AkAudio.AudioManager.StartAudioFunctionCallRecord
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d2c8cc
	// Params: [ Num(0) Size(0x0) ]
	static void StartAudioFunctionCallRecord();

	// Object: Function AkAudio.AudioManager.SetVoiceVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4d98
	// Params: [ Num(1) Size(0x4) ]
	static void SetVoiceVolume(float Volume);

	// Object: Function AkAudio.AudioManager.SetVoiceLanguage
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4cf4
	// Params: [ Num(1) Size(0x10) ]
	static void SetVoiceLanguage(struct FString NewCulture);

	// Object: Function AkAudio.AudioManager.SetVoiceEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4f60
	// Params: [ Num(1) Size(0x1) ]
	static void SetVoiceEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetUserExternalBluetoothState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a48f8
	// Params: [ Num(1) Size(0x1) ]
	static void SetUserExternalBluetoothState(bool UserExternalBluetoothState);

	// Object: Function AkAudio.AudioManager.SetSwitchByReference
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a6220
	// Params: [ Num(3) Size(0x20) ]
	static void SetSwitchByReference(struct UAkSwitchValue* SwitchReference, struct AActor* TargetActor, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.SetSwitchByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x98872c4
	// Params: [ Num(4) Size(0x38) ]
	static void SetSwitchByName(struct FString SwitchGroupName, struct FString SwitchName, struct AActor* TargetActor, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.SetStateByReference
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a6540
	// Params: [ Num(2) Size(0x10) ]
	static void SetStateByReference(struct UAkStateValue* StateReference, struct UObject* Source);

	// Object: Function AkAudio.AudioManager.SetStateByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e2ff08
	// Params: [ Num(3) Size(0x30) ]
	static void SetStateByName(struct FString StateGroupName, struct FString StateName, struct FString Source);

	// Object: Function AkAudio.AudioManager.SetSoundVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4ec8
	// Params: [ Num(1) Size(0x4) ]
	static void SetSoundVolume(float Volume);

	// Object: Function AkAudio.AudioManager.SetSoundEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a50a0
	// Params: [ Num(1) Size(0x1) ]
	static void SetSoundEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetRTPCValueByPlayingID
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5da8
	// Params: [ Num(5) Size(0x1D) ]
	static void SetRTPCValueByPlayingID(struct FString ParameterName, float Value, int32_t PlayingID, int32_t ValueChangeDuration, bool BypassInternalValueInterpolation);

	// Object: Function AkAudio.AudioManager.SetRTPCByReference
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5b94
	// Params: [ Num(5) Size(0x30) ]
	static void SetRTPCByReference(struct UAkRtpc* ParameterReference, float Value, struct AActor* TargetActor, float InterpolateTime, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.SetReverbEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4aec
	// Params: [ Num(1) Size(0x1) ]
	static void SetReverbEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetOcclusionObstructionEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4c2c
	// Params: [ Num(1) Size(0x1) ]
	static void SetOcclusionObstructionEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetMusicVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4e30
	// Params: [ Num(1) Size(0x4) ]
	static void SetMusicVolume(float Volume);

	// Object: Function AkAudio.AudioManager.SetMusicEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5000
	// Params: [ Num(1) Size(0x1) ]
	static void SetMusicEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetLastUnplugHeadsetTime
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97d5fbc
	// Params: [ Num(0) Size(0x0) ]
	static void SetLastUnplugHeadsetTime();

	// Object: Function AkAudio.AudioManager.SetGlobalRTPC
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9886e4c
	// Params: [ Num(4) Size(0x2C) ]
	static void SetGlobalRTPC(struct FString ParameterName, float Value, struct FString Source, float InterpolateTime);

	// Object: Function AkAudio.AudioManager.SetEnableWwiseLevel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9309db4
	// Params: [ Num(1) Size(0x4) ]
	static void SetEnableWwiseLevel(int32_t InEnableWwiseLevel);

	// Object: Function AkAudio.AudioManager.SetEmitterRTPC
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9887068
	// Params: [ Num(5) Size(0x38) ]
	static void SetEmitterRTPC(struct FString ParameterName, float Value, struct AActor* Emitter, float InterpolateTime, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.SetEarlyReflectionEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4a4c
	// Params: [ Num(1) Size(0x1) ]
	static void SetEarlyReflectionEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetDiffractionEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4b8c
	// Params: [ Num(1) Size(0x1) ]
	static void SetDiffractionEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetDeviceLevel
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9886dac
	// Params: [ Num(1) Size(0x4) ]
	static void SetDeviceLevel(int32_t DeviceLevelIndex);

	// Object: Function AkAudio.AudioManager.SetBusEffect
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93f5728
	// Params: [ Num(4) Size(0x25) ]
	static void SetBusEffect(struct FString PluginName, struct FString BusName, int32_t PluginSlotIndex, bool IsEnable);

	// Object: Function AkAudio.AudioManager.SetBusConfig
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94e1ab0
	// Params: [ Num(2) Size(0x11) ]
	static void SetBusConfig(struct FString BusName, EAkChannelConfiguration ChannelConfiguration);

	// Object: Function AkAudio.AudioManager.SetBluetoothState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4858
	// Params: [ Num(1) Size(0x1) ]
	static void SetBluetoothState(bool BluetoothState);

	// Object: Function AkAudio.AudioManager.SetAudioQuality
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x931f4fc
	// Params: [ Num(1) Size(0x1) ]
	static void SetAudioQuality(uint8_t NewQuality);

	// Object: Function AkAudio.AudioManager.SetAttenuationScaling
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5140
	// Params: [ Num(5) Size(0x21) ]
	static bool SetAttenuationScaling(struct AActor* Emitter, float Scale, bool IsAbsolute, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.SeekOnWwiseEventByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a81d4
	// Params: [ Num(2) Size(0x14) ]
	static void SeekOnWwiseEventByName(struct FString EventName, int32_t Location);

	// Object: Function AkAudio.AudioManager.SeekOnWwiseEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a8308
	// Params: [ Num(2) Size(0xC) ]
	static void SeekOnWwiseEvent(struct UAkAudioEvent* EventReference, int32_t Location);

	// Object: Function AkAudio.AudioManager.ResumeSound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a7500
	// Params: [ Num(4) Size(0x24) ]
	static void ResumeSound(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.ResetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a597c
	// Params: [ Num(4) Size(0x30) ]
	static void ResetRTPCValue(struct FString ParameterName, struct AActor* GameObject, float InterpolateTime, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.ReloadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a8954
	// Params: [ Num(2) Size(0x20) ]
	static void ReloadBank(struct FString BankName, struct FString Source);

	// Object: Function AkAudio.AudioManager.ReloadAllLoadedBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a8940
	// Params: [ Num(0) Size(0x0) ]
	static void ReloadAllLoadedBanks();

	// Object: Function AkAudio.AudioManager.ReinvokeAudioFunctionCallRecords
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a42e0
	// Params: [ Num(0) Size(0x0) ]
	static void ReinvokeAudioFunctionCallRecords();

	// Object: Function AkAudio.AudioManager.PostWwiseEventByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9887fe8
	// Params: [ Num(4) Size(0x20) ]
	static int32_t PostWwiseEventByName(struct FString EventName, struct AActor* Emitter, bool StopOnDestroy);

	// Object: Function AkAudio.AudioManager.PostWwiseEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a86c4
	// Params: [ Num(4) Size(0x18) ]
	static int32_t PostWwiseEvent(struct UAkAudioEvent* EventReference, struct AActor* Emitter, bool StopOnDestroy);

	// Object: Function AkAudio.AudioManager.PostTriggerByReference
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5620
	// Params: [ Num(3) Size(0x20) ]
	static void PostTriggerByReference(struct UAkTrigger* TriggerReference, struct AActor* TargetActor, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.PostTriggerByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5454
	// Params: [ Num(3) Size(0x28) ]
	static void PostTriggerByName(struct FString TriggerName, struct AActor* TargetActor, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.PlayVoice3DByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x988752c
	// Params: [ Num(6) Size(0x38) ]
	static int32_t PlayVoice3DByName(struct FString EventName, struct AActor* Speaker, bool WaitUntilCurrentEnd, struct FString ExternalFileName, int32_t RandomCount);

	// Object: Function AkAudio.AudioManager.PlayVoice3D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86d35bc
	// Params: [ Num(6) Size(0x30) ]
	static int32_t PlayVoice3D(struct UAkAudioEvent* EventReference, struct AActor* Speaker, bool WaitUntilCurrentEnd, struct FString ExternalFileName, int32_t RandomCount);

	// Object: Function AkAudio.AudioManager.PlayVoice2DByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a66c0
	// Params: [ Num(5) Size(0x3C) ]
	static int32_t PlayVoice2DByName(struct FString EventName, struct FString ExternalFileName, int32_t RandomCount, struct FString Source);

	// Object: Function AkAudio.AudioManager.PlayVoice2D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a6934
	// Params: [ Num(5) Size(0x34) ]
	static int32_t PlayVoice2D(struct UAkAudioEvent* EventReference, struct FString ExternalFileName, int32_t RandomCount, struct FString Source);

	// Object: Function AkAudio.AudioManager.PlaySoundAtLocationByName
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x33a7c4c
	// Params: [ Num(6) Size(0x40) ]
	static int64_t PlaySoundAtLocationByName(struct FString EventName, struct UObject* Source, struct FVector Location, struct FRotator Orientation, bool UseAuxSend);

	// Object: Function AkAudio.AudioManager.PlaySoundAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x33a7e5c
	// Params: [ Num(6) Size(0x38) ]
	static int64_t PlaySoundAtLocation(struct UAkAudioEvent* EventReference, struct UObject* Source, struct FVector Location, struct FRotator Orientation, bool UseAuxSend);

	// Object: Function AkAudio.AudioManager.PlaySound3DByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x988779c
	// Params: [ Num(6) Size(0x44) ]
	static int32_t PlaySound3DByName(struct FString EventName, struct AActor* Emitter, struct FString ComponentName, bool StopOnDestroy, struct FString Source);

	// Object: Function AkAudio.AudioManager.PlaySound3D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9887a68
	// Params: [ Num(6) Size(0x3C) ]
	static int32_t PlaySound3D(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, bool StopOnDestroy, struct FString Source);

	// Object: Function AkAudio.AudioManager.PlaySound2DByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8823748
	// Params: [ Num(3) Size(0x24) ]
	static int32_t PlaySound2DByName(struct FString EventName, struct FString Source);

	// Object: Function AkAudio.AudioManager.PlaySound2D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x85c0838
	// Params: [ Num(3) Size(0x14) ]
	static int32_t PlaySound2D(struct UAkAudioEvent* EventReference, struct UObject* Source);

	// Object: Function AkAudio.AudioManager.PlayMovieSound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a8008
	// Params: [ Num(4) Size(0x18) ]
	static int32_t PlayMovieSound(struct UAkAudioEvent* EventReference, struct UObject* Source, int32_t CallbackTypes);

	// Object: Function AkAudio.AudioManager.PlayIncidentalMusicByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a6b58
	// Params: [ Num(3) Size(0x1C) ]
	static int32_t PlayIncidentalMusicByName(struct FString EventName, struct AActor* Player);

	// Object: Function AkAudio.AudioManager.PlayIncidentalMusic
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a6ca0
	// Params: [ Num(3) Size(0x14) ]
	static int32_t PlayIncidentalMusic(struct UAkAudioEvent* EventReference, struct AActor* Player);

	// Object: Function AkAudio.AudioManager.PlayBackgroundMusicByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a6e1c
	// Params: [ Num(3) Size(0x24) ]
	static int32_t PlayBackgroundMusicByName(struct FString EventName, struct FString Source);

	// Object: Function AkAudio.AudioManager.PlayBackgroundMusic
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a6fb8
	// Params: [ Num(3) Size(0x14) ]
	static int32_t PlayBackgroundMusic(struct UAkAudioEvent* EventReference, struct UObject* Source);

	// Object: Function AkAudio.AudioManager.PauseSound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a76c0
	// Params: [ Num(4) Size(0x24) ]
	static void PauseSound(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.MuteWwiseAudio
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4ce0
	// Params: [ Num(0) Size(0x0) ]
	static void MuteWwiseAudio();

	// Object: Function AkAudio.AudioManager.LoadBankByName
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x33a8f5c
	// Params: [ Num(5) Size(0x38) ]
	static int32_t LoadBankByName(struct FString BankName, struct FString Source, bool Async, const struct FDelegate& LoadFinishCallback);

	// Object: Function AkAudio.AudioManager.LoadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33a91b0
	// Params: [ Num(5) Size(0x28) ]
	static int32_t LoadBank(struct UAkAudioBank* BankReference, struct UObject* Source, bool Async, const struct FDelegate& LoadFinishCallback);

	// Object: Function AkAudio.AudioManager.IsUsingWwiseLite
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a87f0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t IsUsingWwiseLite();

	// Object: Function AkAudio.AudioManager.IsSwitchAt
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a5fa8
	// Params: [ Num(5) Size(0x39) ]
	static bool IsSwitchAt(struct FString SwitchGroupName, struct FString SwitchName, struct AActor* TargetActor, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.IsSupportDolby
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a42f4
	// Params: [ Num(1) Size(0x1) ]
	static bool IsSupportDolby();

	// Object: Function AkAudio.AudioManager.IsStateAt
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a63a0
	// Params: [ Num(3) Size(0x21) ]
	static bool IsStateAt(struct FString StateGroupName, struct FString StateName);

	// Object: Function AkAudio.AudioManager.IsPlayingIDActiveByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a45e8
	// Params: [ Num(3) Size(0x15) ]
	static bool IsPlayingIDActiveByName(struct FString EventName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.IsPlayingIDActive
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4734
	// Params: [ Num(3) Size(0xD) ]
	static bool IsPlayingIDActive(struct UAkAudioEvent* EventReference, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.IsCharacterSpeakingVoice
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x33a6614
	// Params: [ Num(2) Size(0x9) ]
	static bool IsCharacterSpeakingVoice(struct AActor* Speaker);

	// Object: Function AkAudio.AudioManager.GetWwiseLevel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8d0ffa0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetWwiseLevel();

	// Object: Function AkAudio.AudioManager.GetSourcePlayPosition
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a812c
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetSourcePlayPosition(int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a57a0
	// Params: [ Num(4) Size(0x2C) ]
	static float GetRTPCValue(struct FString ParameterName, struct AActor* Emitter, struct FString ComponentName);

	// Object: Function AkAudio.AudioManager.GetBluetoothState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a4820
	// Params: [ Num(1) Size(0x1) ]
	static bool GetBluetoothState();

	// Object: Function AkAudio.AudioManager.GetBankCountByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a8824
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetBankCountByName(struct FString BankName);

	// Object: Function AkAudio.AudioManager.ForcedUnLoadAllBanks
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a892c
	// Params: [ Num(0) Size(0x0) ]
	static void ForcedUnLoadAllBanks();

	// Object: Function AkAudio.AudioManager.BreakSoundByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a7880
	// Params: [ Num(4) Size(0x2C) ]
	static void BreakSoundByName(struct FString EventName, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.BreakSound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33a7a8c
	// Params: [ Num(4) Size(0x24) ]
	static void BreakSound(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID);

	// Object: Function AkAudio.AudioManager.AddWwiseEventStopDelegateByName
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x33a432c
	// Params: [ Num(4) Size(0x28) ]
	static void AddWwiseEventStopDelegateByName(struct FString in_EventName, int32_t PlayingID, struct UObject* Obj, const struct FName& FunName);

	// Object: Function AkAudio.AudioManager.AddWwiseEventStopDelegateByDelegate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33a44a8
	// Params: [ Num(3) Size(0x24) ]
	static void AddWwiseEventStopDelegateByDelegate(struct FString in_EventName, int32_t PlayingID, struct FDelegate WwiseEventStopDelegate);
};

// Object: Class AkAudio.AudioProfileInfoManager
// Size: 0x28 (Inherited: 0x28)
struct UAudioProfileInfoManager : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAudioProfileInfoManager, "AudioProfileInfoManager")

	// Object: Function AkAudio.AudioProfileInfoManager.UnRegister
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad48c
	// Params: [ Num(0) Size(0x0) ]
	static void UnRegister();

	// Object: Function AkAudio.AudioProfileInfoManager.StartAvgRecord
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad34c
	// Params: [ Num(0) Size(0x0) ]
	static void StartAvgRecord();

	// Object: Function AkAudio.AudioProfileInfoManager.SetShowSplineSoundOpen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33aca90
	// Params: [ Num(1) Size(0x1) ]
	static void SetShowSplineSoundOpen(bool Value);

	// Object: Function AkAudio.AudioProfileInfoManager.SetShowSpatialVolumeOpen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33acb30
	// Params: [ Num(1) Size(0x1) ]
	static void SetShowSpatialVolumeOpen(bool Value);

	// Object: Function AkAudio.AudioProfileInfoManager.SetShowEmitHintOpen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ace04
	// Params: [ Num(1) Size(0x1) ]
	static void SetShowEmitHintOpen(bool Value);

	// Object: Function AkAudio.AudioProfileInfoManager.SetReverbOpen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33acbd0
	// Params: [ Num(1) Size(0x1) ]
	static void SetReverbOpen(bool Value);

	// Object: Function AkAudio.AudioProfileInfoManager.SetOBOCOpen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33acc70
	// Params: [ Num(1) Size(0x1) ]
	static void SetOBOCOpen(bool Value);

	// Object: Function AkAudio.AudioProfileInfoManager.Register
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad4a0
	// Params: [ Num(0) Size(0x0) ]
	static void Register();

	// Object: Function AkAudio.AudioProfileInfoManager.PTStopWwiseEventByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33acea4
	// Params: [ Num(1) Size(0x10) ]
	static void PTStopWwiseEventByName(struct FString EventName);

	// Object: Function AkAudio.AudioProfileInfoManager.PTPostWwiseEventByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33acf98
	// Params: [ Num(2) Size(0x14) ]
	static void PTPostWwiseEventByName(struct FString EventName, int32_t Count);

	// Object: Function AkAudio.AudioProfileInfoManager.GetLastAudioDebugInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad420
	// Params: [ Num(1) Size(0x60) ]
	static struct FAudioStudioProfileData GetLastAudioDebugInfo();

	// Object: Function AkAudio.AudioProfileInfoManager.GetAverageAvgAudioDebugInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad278
	// Params: [ Num(2) Size(0x68) ]
	static struct FAudioStudioProfileData GetAverageAvgAudioDebugInfo(bool clearEvents);

	// Object: Function AkAudio.AudioProfileInfoManager.GetAverageAudioDebugInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad360
	// Params: [ Num(2) Size(0x68) ]
	static struct FAudioStudioProfileData GetAverageAudioDebugInfo(bool clearEvents);

	// Object: Function AkAudio.AudioProfileInfoManager.GetAudioEventMsg
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad0e0
	// Params: [ Num(2) Size(0x48) ]
	static struct FAudioConsoleMessage GetAudioEventMsg(int32_t Index);

	// Object: Function AkAudio.AudioProfileInfoManager.GetAudioEventCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad244
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAudioEventCount();

	// Object: Function AkAudio.AudioProfileInfoManager.EndAvgRecord
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad338
	// Params: [ Num(0) Size(0x0) ]
	static void EndAvgRecord();

	// Object: Function AkAudio.AudioProfileInfoManager.DebugEmitHintAnim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void DebugEmitHintAnim();

	// Object: Function AkAudio.AudioProfileInfoManager.ClearAudioEventMsg
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad0cc
	// Params: [ Num(0) Size(0x0) ]
	static void ClearAudioEventMsg();

	// Object: Function AkAudio.AudioProfileInfoManager.AddEmitHintIgnoreEvent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33acd10
	// Params: [ Num(1) Size(0x10) ]
	static void AddEmitHintIgnoreEvent(struct FString ignoreEvent);
};

// Object: Class AkAudio.AudioStudioComponent
// Size: 0xE0 (Inherited: 0xE0)
struct UAudioStudioComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UAudioStudioComponent, "AudioStudioComponent")

	// Object: Function AkAudio.AudioStudioComponent.OnDeactivate
	// Flags: [Final|Native|Private]
	// Offset: 0x33ad510
	// Params: [ Num(1) Size(0x8) ]
	void OnDeactivate(struct UActorComponent* Component);

	// Object: Function AkAudio.AudioStudioComponent.OnActivate
	// Flags: [Final|Native|Private]
	// Offset: 0x9889fd4
	// Params: [ Num(2) Size(0x9) ]
	void OnActivate(struct UActorComponent* Component, bool bReset);

	// Object: Function AkAudio.AudioStudioComponent.DeactivateSoundData
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x33ad5bc
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateSoundData();

	// Object: Function AkAudio.AudioStudioComponent.ActivateSoundData
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x33ad5d8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateSoundData();
};

// Object: Class AkAudio.AudioStudioSettings
// Size: 0xC0 (Inherited: 0x28)
struct UAudioStudioSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAudioStudioSettings, "AudioStudioSettings")

	struct TArray<struct FString> PersistentBanks; // 0x28(0x10)
	struct TArray<struct FString> InitialStates; // 0x38(0x10)
	struct TArray<struct FString> InitialEvents; // 0x48(0x10)
	struct TMap<struct FString, struct FLevelAudioData> LevelAudioConfigs; // 0x58(0x50)
	uint8_t DiffractionEnabledQuality; // 0xA8(0x1)
	uint8_t EarlyReflectionEnabledQuality; // 0xA9(0x1)
	uint8_t OcclusionObstructionEnabledQuality; // 0xAA(0x1)
	uint8_t LateReverbEnabledQuality; // 0xAB(0x1)
	uint8_t SoundObjectPoolSize; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	struct TArray<struct FString> AudioEventInfoExportPrefix; // 0xB0(0x10)

	// Object: Function AkAudio.AudioStudioSettings.UnloadLevelAudioDataByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ad768
	// Params: [ Num(3) Size(0x19) ]
	static bool UnloadLevelAudioDataByName(struct FString LevelName, int64_t PlayModeID);

	// Object: Function AkAudio.AudioStudioSettings.UnloadLevelAudioData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ada00
	// Params: [ Num(2) Size(0x9) ]
	static bool UnloadLevelAudioData(struct UWorld* World);

	// Object: Function AkAudio.AudioStudioSettings.ReInitAkAudioDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33adb58
	// Params: [ Num(1) Size(0x1) ]
	static bool ReInitAkAudioDevice();

	// Object: Function AkAudio.AudioStudioSettings.LoadLevelAudioDataByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ad8b4
	// Params: [ Num(3) Size(0x19) ]
	static bool LoadLevelAudioDataByName(struct FString LevelName, int64_t PlayModeID);

	// Object: Function AkAudio.AudioStudioSettings.LoadLevelAudioData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33adaac
	// Params: [ Num(2) Size(0x9) ]
	static bool LoadLevelAudioData(struct UWorld* World);

	// Object: Function AkAudio.AudioStudioSettings.LoadInitAudioData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92b423c
	// Params: [ Num(0) Size(0x0) ]
	static void LoadInitAudioData();

	// Object: Function AkAudio.AudioStudioSettings.GetBankReferencedLevels
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x33ad650
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetBankReferencedLevels(struct FString BankName);
};

// Object: Class AkAudio.AudioStudioEditorSettings
// Size: 0x30 (Inherited: 0x28)
struct UAudioStudioEditorSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAudioStudioEditorSettings, "AudioStudioEditorSettings")

	bool ShowEmitterIcons; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: Class AkAudio.EmitterListenerManager
// Size: 0x1D8 (Inherited: 0x30)
struct UEmitterListenerManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UEmitterListenerManager, "EmitterListenerManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnVoiceDialogEnd; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
	struct TArray<struct UAkComponent*> DefaultEmitters; // 0x58(0x10)
	struct TArray<struct AAudioEmitter3D*> AmbienceEmitters; // 0x68(0x10)
	struct TArray<struct UAkComponent*> DefaultListeners; // 0x78(0x10)
	struct TArray<struct AAkAcousticPortal*> Portals; // 0x88(0x10)
	struct UAkComponent* SpatialAudioListener; // 0x98(0x8)
	struct TMap<struct UAkRoomComponent*, struct UAkLateReverbComponent*> AkRoomLateReverbMap; // 0xA0(0x50)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)
	struct UAkAudioEvent* ModeAudioEvent; // 0xF8(0x8)
	uint8_t Pad_0x100[0x10]; // 0x100(0x10)
	struct TMap<struct AActor*, struct FString> AnimationSoundMap; // 0x110(0x50)
	struct TMap<struct UAkAudioEvent*, struct FTArrUMultiSourceSoundComponent> MultiSourceEvents; // 0x160(0x50)
	uint8_t Pad_0x1B0[0x8]; // 0x1B0(0x8)
	struct TArray<struct UFoliageSoundPlaybackData*> FoliageSoundPlaybackDatas; // 0x1B8(0x10)
	uint8_t Pad_0x1C8[0x10]; // 0x1C8(0x10)

	// Object: Function AkAudio.EmitterListenerManager.GetListenerLocation
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x33adbec
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetListenerLocation(int32_t ListenerIndex);

	// Object: Function AkAudio.EmitterListenerManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x33adca0
	// Params: [ Num(2) Size(0x10) ]
	static struct UEmitterListenerManager* GetInstance(struct UObject* WorldContextObject);
};

// Object: Class AkAudio.FoliageSoundComponent
// Size: 0xF8 (Inherited: 0xE0)
struct UFoliageSoundComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(UFoliageSoundComponent, "FoliageSoundComponent")

	struct TArray<struct UFoliageSoundConfig*> SoundConfigs; // 0xE0(0x10)
	float SearchRadius; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
};

// Object: Class AkAudio.FoliageSoundConfig
// Size: 0x48 (Inherited: 0x30)
struct UFoliageSoundConfig : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UFoliageSoundConfig, "FoliageSoundConfig")

	struct UAkAudioEvent* AudioEvent; // 0x30(0x8)
	float TriggerIntervalMin; // 0x38(0x4)
	float TriggerIntervalMax; // 0x3C(0x4)
	float MinHeight; // 0x40(0x4)
	float MaxHeight; // 0x44(0x4)
};

// Object: Class AkAudio.FoliageSoundPlaybackData
// Size: 0x50 (Inherited: 0x28)
struct UFoliageSoundPlaybackData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFoliageSoundPlaybackData, "FoliageSoundPlaybackData")

	struct TWeakObjectPtr<struct UFoliageSoundConfig> SoundConfig; // 0x28(0x8)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TArray<struct UFoliageSoundComponent*> FoliageSoundInstances; // 0x40(0x10)
};

// Object: Class AkAudio.GlobalAmbienceEmitter
// Size: 0x350 (Inherited: 0x330)
struct AGlobalAmbienceEmitter : AAudioEmitter3D
{
	DEFINE_UE_CLASS_HELPERS(AGlobalAmbienceEmitter, "GlobalAmbienceEmitter")

	struct ASplineSound* OverridingSplineSound; // 0x330(0x8)
	struct UAkLateReverbComponent* LateReverb; // 0x338(0x8)
	struct UAkAudioEvent* ModeAudioEvent; // 0x340(0x8)
	bool IgnoreWeather; // 0x348(0x1)
	uint8_t Pad_0x349[0x7]; // 0x349(0x7)
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

// Object: Class AkAudio.LoadBankComponent
// Size: 0xF0 (Inherited: 0xE0)
struct ULoadBankComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(ULoadBankComponent, "LoadBankComponent")

	struct UAkAudioBank* SoundBank; // 0xE0(0x8)
	bool UseCounter; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
};

// Object: Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1C8 (Inherited: 0xE0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioEventSection, "MovieSceneAkAudioEventSection")

	uint8_t Pad_0xE0[0x40]; // 0xE0(0x40)
	struct UAkAudioEvent* Event; // 0x120(0x8)
	bool RetriggerEvent; // 0x128(0x1)
	uint8_t Pad_0x129[0x3]; // 0x129(0x3)
	int32_t ScrubTailLengthMs; // 0x12C(0x4)
	bool StopAtSectionEnd; // 0x130(0x1)
	uint8_t Pad_0x131[0x7]; // 0x131(0x7)
	struct FString EventName; // 0x138(0x10)
	uint8_t Pad_0x148[0x20]; // 0x148(0x20)
	float MaxSourceDuration; // 0x168(0x4)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct FString MaxDurationSourceID; // 0x170(0x10)
	uint8_t Pad_0x180[0x48]; // 0x180(0x48)
};

// Object: Class AkAudio.MovieSceneAkTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneAkTrack : UMovieSceneTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkTrack, "MovieSceneAkTrack")

	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
	uint8_t bIsAMasterTrack : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioEventTrack, "MovieSceneAkAudioEventTrack")

	uint8_t Pad_0x90[0x8]; // 0x90(0x8)
};

// Object: Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xE0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioRTPCSection, "MovieSceneAkAudioRTPCSection")

	struct UAkRtpc* RTPC; // 0xE0(0x8)
	struct FString Name; // 0xE8(0x10)
	struct FRichCurve FloatCurve; // 0xF8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1A8(0xA0)
};

// Object: Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack
{
	DEFINE_UE_CLASS_HELPERS(UMovieSceneAkAudioRTPCTrack, "MovieSceneAkAudioRTPCTrack")

	uint8_t Pad_0x90[0x8]; // 0x90(0x8)
};

// Object: Class AkAudio.MultiPositionSound
// Size: 0x340 (Inherited: 0x330)
struct AMultiPositionSound : AAudioEmitter3D
{
	DEFINE_UE_CLASS_HELPERS(AMultiPositionSound, "MultiPositionSound")

	struct TArray<struct USceneComponent*> EmitterPoints; // 0x330(0x10)
};

// Object: Class AkAudio.MultiSourceSoundComponent
// Size: 0x230 (Inherited: 0x230)
struct UMultiSourceSoundComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMultiSourceSoundComponent, "MultiSourceSoundComponent")

	struct UAkAudioEvent* AudioEvent; // 0x228(0x8)

	// Object: Function AkAudio.MultiSourceSoundComponent.DeactivateSoundData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33b19b4
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateSoundData();

	// Object: Function AkAudio.MultiSourceSoundComponent.ActivateSoundData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33b19c8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateSoundData();
};

// Object: Class AkAudio.MyAudioDebugEmitHint
// Size: 0x300 (Inherited: 0x300)
struct AMyAudioDebugEmitHint : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMyAudioDebugEmitHint, "MyAudioDebugEmitHint")

	// Object: Function AkAudio.MyAudioDebugEmitHint.OnAudioDebugSpatialVolumeHintTrigger
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnAudioDebugSpatialVolumeHintTrigger();

	// Object: Function AkAudio.MyAudioDebugEmitHint.OnAudioDebugEmitHintTrigger
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnAudioDebugEmitHintTrigger();
};

// Object: Class AkAudio.ParticleSoundComponent
// Size: 0xF8 (Inherited: 0xE0)
struct UParticleSoundComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(UParticleSoundComponent, "ParticleSoundComponent")

	struct TArray<struct FParticleSoundData> SoundData; // 0xE0(0x10)
	bool PlaySoundAtLocation; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)

	// Object: Function AkAudio.ParticleSoundComponent.OnParticleSpawn
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0x33b2034
	// Params: [ Num(4) Size(0x24) ]
	void OnParticleSpawn(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity);

	// Object: Function AkAudio.ParticleSoundComponent.OnParticleDeath
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0x33b1d1c
	// Params: [ Num(6) Size(0x34) ]
	void OnParticleDeath(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction);

	// Object: Function AkAudio.ParticleSoundComponent.OnParticleCollide
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0x33b1a68
	// Params: [ Num(9) Size(0x50) ]
	void OnParticleCollide(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, struct UPhysicalMaterial* PhysMat);

	// Object: Function AkAudio.ParticleSoundComponent.OnParticleBurst
	// Flags: [Final|Native|Private]
	// Offset: 0x33b1f0c
	// Params: [ Num(3) Size(0x10) ]
	void OnParticleBurst(struct FName EventName, float EmitterTime, int32_t ParticleCount);
};

// Object: Class AkAudio.PostEventAsync
// Size: 0xA0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UPostEventAsync, "PostEventAsync")

	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	struct UAkAudioEvent* AkEvent; // 0x48(0x8)
	struct AActor* Actor; // 0x50(0x8)
	uint8_t Pad_0x58[0x18]; // 0x58(0x18)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources; // 0x70(0x10)
	uint8_t Pad_0x80[0x20]; // 0x80(0x20)

	// Object: Function AkAudio.PostEventAsync.PostEventAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x33b21c4
	// Params: [ Num(8) Size(0x50) ]
	static struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.PostEventAsync.PollPostEventFuture
	// Flags: [Final|Native|Private]
	// Offset: 0x33b21b0
	// Params: [ Num(0) Size(0x0) ]
	void PollPostEventFuture();
};

// Object: Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UPostEventAtLocationAsync, "PostEventAtLocationAsync")

	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	struct UObject* WorldContextObject; // 0x40(0x8)
	struct UAkAudioEvent* AkEvent; // 0x48(0x8)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)

	// Object: Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x33b245c
	// Params: [ Num(5) Size(0x30) ]
	static struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation);

	// Object: Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// Flags: [Final|Native|Private]
	// Offset: 0x33b2448
	// Params: [ Num(0) Size(0x0) ]
	void PollPostEventFuture();
};

// Object: Class AkAudio.RainSoundPlane
// Size: 0x330 (Inherited: 0x330)
struct ARainSoundPlane : AAudioEmitter3D
{
	DEFINE_UE_CLASS_HELPERS(ARainSoundPlane, "RainSoundPlane")
};

// Object: Class AkAudio.SetAttenuationComponent
// Size: 0xF0 (Inherited: 0xE0)
struct USetAttenuationComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(USetAttenuationComponent, "SetAttenuationComponent")

	float ActivateValue; // 0xE0(0x4)
	float ResetValue; // 0xE4(0x4)
	bool IsGlobal; // 0xE8(0x1)
	bool IsAbsoluteValue; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
};

// Object: Class AkAudio.SetRTPCComponent
// Size: 0x108 (Inherited: 0xE0)
struct USetRTPCComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(USetRTPCComponent, "SetRTPCComponent")

	struct TArray<struct FRTPCConfig> RTPCConfigs; // 0xE0(0x10)
	bool BindToGeographicRTPCType; // 0xF0(0x1)
	EGeographicRTPCType GeographicRTPCType; // 0xF1(0x1)
	bool TickWithAkComponent; // 0xF2(0x1)
	bool SlewWithDeltaTime; // 0xF3(0x1)
	float CoolDownTime; // 0xF4(0x4)
	bool IgnoreTickWhenListeningToSelf; // 0xF8(0x1)
	uint8_t Pad_0xF9[0xF]; // 0xF9(0xF)
};

// Object: Class AkAudio.SetStateComponent
// Size: 0x110 (Inherited: 0xE0)
struct USetStateComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(USetStateComponent, "SetStateComponent")

	struct FString StateGroupName; // 0xE0(0x10)
	struct FString ActivateStateName; // 0xF0(0x10)
	struct FString DeactivateStateName; // 0x100(0x10)
};

// Object: Class AkAudio.SetSwitchComponent
// Size: 0x110 (Inherited: 0xE0)
struct USetSwitchComponent : UAudioStudioComponent
{
	DEFINE_UE_CLASS_HELPERS(USetSwitchComponent, "SetSwitchComponent")

	struct FString SwitchGroupName; // 0xE0(0x10)
	struct FString ActivateSwitchName; // 0xF0(0x10)
	struct FString DeactivateSwitchName; // 0x100(0x10)

	// Object: Function AkAudio.SetSwitchComponent.DeactivateSwitchOnOtherActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33b2690
	// Params: [ Num(1) Size(0x8) ]
	void DeactivateSwitchOnOtherActor(struct AActor* Actor);

	// Object: Function AkAudio.SetSwitchComponent.ActivateSwitchOnOtherActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x33b2738
	// Params: [ Num(1) Size(0x8) ]
	void ActivateSwitchOnOtherActor(struct AActor* Actor);
};

// Object: Class AkAudio.SplineSound
// Size: 0x368 (Inherited: 0x330)
struct ASplineSound : AAudioEmitter3D
{
	DEFINE_UE_CLASS_HELPERS(ASplineSound, "SplineSound")

	float SplineRadius; // 0x32C(0x4)
	float RegionHeight; // 0x330(0x4)
	bool OverrideGlobalAmbienceSound; // 0x334(0x1)
	struct USplineComponent* SplineComponent; // 0x338(0x8)
	uint8_t Pad_0x341[0x1F]; // 0x341(0x1F)
	struct FColor OutlineColor; // 0x360(0x4)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)

	// Object: Function AkAudio.SplineSound.SetInSamePlane
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x33b28b8
	// Params: [ Num(0) Size(0x0) ]
	void SetInSamePlane();

	// Object: Function AkAudio.SplineSound.ReversePointsOrder
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x33b289c
	// Params: [ Num(0) Size(0x0) ]
	void ReversePointsOrder();

	// Object: Function AkAudio.SplineSound.IsEmitterWithinRegion
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x33b27e8
	// Params: [ Num(2) Size(0xD) ]
	bool IsEmitterWithinRegion(struct FVector EmitterLocation);
};

} // namespace SDK
