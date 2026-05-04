#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MovieSceneCapture
// Enums: 2
// Structs: 6
// Classes: 20

struct AGameModeBase;
enum class EDesiredImageFormat : uint8_t;
struct UMaterialInterface;
struct UTexture;
struct UWorld;
struct FCompositionGraphCapturePasses;
struct FFrameMetrics;
struct FCaptureResolution;
struct FMovieSceneCaptureSettings;
struct FCapturedPixels;
struct FCapturedPixelsID;
struct UMovieSceneCaptureProtocolBase;
struct UMovieSceneAudioCaptureProtocolBase;
struct UNullAudioCaptureProtocol;
struct UMasterAudioSubmixCaptureProtocol;
struct UMovieSceneImageCaptureProtocolBase;
struct UCompositionGraphCaptureProtocol;
struct UFrameGrabberProtocol;
struct UImageSequenceProtocol;
struct UCompressedImageSequenceProtocol;
struct UImageSequenceProtocol_BMP;
struct UImageSequenceProtocol_PNG;
struct UImageSequenceProtocol_JPG;
struct UImageSequenceProtocol_EXR;
struct IMovieSceneCaptureInterface;
struct UMovieSceneCapture;
struct ULevelCapture;
struct UMovieSceneCaptureEnvironment;
struct UUserDefinedCaptureProtocol;
struct UUserDefinedImageCaptureProtocol;
struct UVideoCaptureProtocol;

// Object: Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

// Object: Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};

// Object: ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size: 0x10 (Inherited: 0x0)
struct FCompositionGraphCapturePasses
{
	struct TArray<struct FString> Value; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneCapture.FrameMetrics
// Size: 0x10 (Inherited: 0x0)
struct FFrameMetrics
{
	float TotalElapsedTime; // 0x0(0x4)
	float FrameDelta; // 0x4(0x4)
	int32_t FrameNumber; // 0x8(0x4)
	int32_t NumDroppedFrames; // 0xC(0x4)
};

// Object: ScriptStruct MovieSceneCapture.CaptureResolution
// Size: 0x8 (Inherited: 0x0)
struct FCaptureResolution
{
	int32_t ResX; // 0x0(0x4)
	int32_t ResY; // 0x4(0x4)
};

// Object: ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x70 (Inherited: 0x0)
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath OutputDirectory; // 0x0(0x10)
	struct AGameModeBase* GameModeOverride; // 0x10(0x8)
	struct FString OutputFormat; // 0x18(0x10)
	uint8_t bOverwriteExisting : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bUseRelativeFrameNumbers : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t HandleFrames; // 0x2C(0x4)
	struct FString MovieExtension; // 0x30(0x10)
	uint8_t ZeroPadFrameNumbers; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FFrameRate FrameRate; // 0x44(0x8)
	uint8_t bUseCustomFrameRate : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	struct FFrameRate CustomFrameRate; // 0x50(0x8)
	struct FCaptureResolution Resolution; // 0x58(0x8)
	uint8_t bEnableTextureStreaming : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t bCinematicEngineScalability : 1; // 0x61(0x1), Mask(0x1)
	uint8_t BitPad_0x61_1 : 7; // 0x61(0x1)
	uint8_t bCinematicMode : 1; // 0x62(0x1), Mask(0x1)
	uint8_t BitPad_0x62_1 : 7; // 0x62(0x1)
	uint8_t bAllowMovement : 1; // 0x63(0x1), Mask(0x1)
	uint8_t BitPad_0x63_1 : 7; // 0x63(0x1)
	uint8_t bAllowTurning : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t bShowPlayer : 1; // 0x65(0x1), Mask(0x1)
	uint8_t BitPad_0x65_1 : 7; // 0x65(0x1)
	uint8_t bShowHUD : 1; // 0x66(0x1), Mask(0x1)
	uint8_t BitPad_0x66_1 : 7; // 0x66(0x1)
	uint8_t bUsePathTracer : 1; // 0x67(0x1), Mask(0x1)
	uint8_t BitPad_0x67_1 : 7; // 0x67(0x1)
	int32_t PathTracerSamplePerPixel; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct MovieSceneCapture.CapturedPixels
// Size: 0x10 (Inherited: 0x0)
struct FCapturedPixels
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneCapture.CapturedPixelsID
// Size: 0x50 (Inherited: 0x0)
struct FCapturedPixelsID
{
	struct TMap<struct FName, struct FName> Identifiers; // 0x0(0x50)
};

// Object: Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58 (Inherited: 0x28)
struct UMovieSceneCaptureProtocolBase : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	EMovieSceneCaptureProtocolState State; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)


	// Object: Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167cc584
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCapturing();

	// Object: Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167cc568
	// Params: [ Num(1) Size(0x1) ]
	EMovieSceneCaptureProtocolState GetState();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCaptureProtocolBase, "MovieSceneCaptureProtocolBase")

};

// Object: Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneAudioCaptureProtocolBase, "MovieSceneAudioCaptureProtocolBase")

};

// Object: Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x58 (Inherited: 0x58)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{	DEFINE_UE_CLASS_HELPERS(UNullAudioCaptureProtocol, "NullAudioCaptureProtocol")

};

// Object: Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90 (Inherited: 0x58)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
	struct FString Filename; // 0x58(0x10)
	uint8_t Pad_0x68[0x28]; // 0x68(0x28)
	DEFINE_UE_CLASS_HELPERS(UMasterAudioSubmixCaptureProtocol, "MasterAudioSubmixCaptureProtocol")

};

// Object: Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneImageCaptureProtocolBase, "MovieSceneImageCaptureProtocolBase")

};

// Object: Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xC0 (Inherited: 0x58)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
	uint8_t bCaptureFramesInHDR : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t HDRCompressionQuality; // 0x6C(0x4)
	EHDRCaptureGamut CaptureGamut; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
	uint8_t bDisableScreenPercentage : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0x98(0x8)
	uint8_t Pad_0xA0[0x20]; // 0xA0(0x20)
	DEFINE_UE_CLASS_HELPERS(UCompositionGraphCaptureProtocol, "CompositionGraphCaptureProtocol")

};

// Object: Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x68 (Inherited: 0x58)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase
{
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UFrameGrabberProtocol, "FrameGrabberProtocol")

};

// Object: Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xD8 (Inherited: 0x68)
struct UImageSequenceProtocol : UFrameGrabberProtocol
{
	uint8_t Pad_0x68[0x70]; // 0x68(0x70)
	DEFINE_UE_CLASS_HELPERS(UImageSequenceProtocol, "ImageSequenceProtocol")

};

// Object: Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xE0 (Inherited: 0xD8)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol
{
	int32_t CompressionQuality; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	DEFINE_UE_CLASS_HELPERS(UCompressedImageSequenceProtocol, "CompressedImageSequenceProtocol")

};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xD8 (Inherited: 0xD8)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol
{	DEFINE_UE_CLASS_HELPERS(UImageSequenceProtocol_BMP, "ImageSequenceProtocol_BMP")

};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xE0 (Inherited: 0xE0)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol
{	DEFINE_UE_CLASS_HELPERS(UImageSequenceProtocol_PNG, "ImageSequenceProtocol_PNG")

};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xE0 (Inherited: 0xE0)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol
{	DEFINE_UE_CLASS_HELPERS(UImageSequenceProtocol_JPG, "ImageSequenceProtocol_JPG")

};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xE8 (Inherited: 0xD8)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol
{
	uint8_t bCompressed : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	EHDRCaptureGamut CaptureGamut; // 0xD9(0x1)
	uint8_t Pad_0xDA[0xE]; // 0xDA(0xE)
	DEFINE_UE_CLASS_HELPERS(UImageSequenceProtocol_EXR, "ImageSequenceProtocol_EXR")

};

// Object: Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneCaptureInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IMovieSceneCaptureInterface, "MovieSceneCaptureInterface")

};

// Object: Class MovieSceneCapture.MovieSceneCapture
// Size: 0x220 (Inherited: 0x28)
struct UMovieSceneCapture : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68(0x8)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70(0x8)
	struct FMovieSceneCaptureSettings Settings; // 0x78(0x70)
	uint8_t bUseSeparateProcess : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t bCloseEditorWhenCaptureStarts : 1; // 0xE9(0x1), Mask(0x1)
	uint8_t BitPad_0xE9_1 : 7; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
	struct FString AdditionalCommandLineArguments; // 0xF0(0x10)
	struct FString InheritedCommandLineArguments; // 0x100(0x10)
	uint8_t Pad_0x110[0x110]; // 0x110(0x110)


	// Object: Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167cc064
	// Params: [ Num(1) Size(0x8) ]
	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType);

	// Object: Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167cbfc0
	// Params: [ Num(1) Size(0x8) ]
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType);

	// Object: Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167cbfa4
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();

	// Object: Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167cbf88
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCapture, "MovieSceneCapture")

};

// Object: Class MovieSceneCapture.LevelCapture
// Size: 0x240 (Inherited: 0x220)
struct ULevelCapture : UMovieSceneCapture
{
	uint8_t bAutoStartCapture : 1; // 0x220(0x1), Mask(0x1)
	uint8_t BitPad_0x220_1 : 7; // 0x220(0x1)
	uint8_t Pad_0x221[0xB]; // 0x221(0xB)
	struct FGuid PrerequisiteActorId; // 0x22C(0x10)
	uint8_t Pad_0x23C[0x4]; // 0x23C(0x4)
	DEFINE_UE_CLASS_HELPERS(ULevelCapture, "LevelCapture")

};

// Object: Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureEnvironment : UObject
{

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x167cc40c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsCaptureInProgress();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x167cc3d8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCaptureFrameNumber();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x167cc3a4
	// Params: [ Num(1) Size(0x4) ]
	static float GetCaptureElapsedTime();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x167cc370
	// Params: [ Num(1) Size(0x8) ]
	static struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x167cc33c
	// Params: [ Num(1) Size(0x8) ]
	static struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
	DEFINE_UE_CLASS_HELPERS(UMovieSceneCaptureEnvironment, "MovieSceneCaptureEnvironment")

};

// Object: Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xD8 (Inherited: 0x58)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	struct UWorld* World; // 0x58(0x8)
	uint8_t Pad_0x60[0x78]; // 0x60(0x78)


	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167cce6c
	// Params: [ Num(0) Size(0x0) ]
	void StopCapturingFinalPixels();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167ccd84
	// Params: [ Num(1) Size(0x50) ]
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167ccc60
	// Params: [ Num(2) Size(0x58) ]
	void ResolveBuffer(struct UTexture* Buffer, const struct FCapturedPixelsID& BufferID);

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnWarmUp();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnTick();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStartCapture();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x167ccc20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t OnSetup();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnPreTick();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x70) ]
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics);

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnPauseCapture();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnFinalize();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnCaptureFrame();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	// Flags: [Native|Event|Protected|BlueprintEvent|Const]
	// Offset: 0x167ccbe0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t OnCanFinalize();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginFinalize();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167ccbc4
	// Params: [ Num(1) Size(0x10) ]
	struct FFrameMetrics GetCurrentFrameMetrics();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167ccacc
	// Params: [ Num(2) Size(0x20) ]
	struct FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);
	DEFINE_UE_CLASS_HELPERS(UUserDefinedCaptureProtocol, "UserDefinedCaptureProtocol")

};

// Object: Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xE0 (Inherited: 0xD8)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
{
	EDesiredImageFormat Format; // 0xD8(0x1)
	uint8_t bEnableCompression : 1; // 0xD9(0x1), Mask(0x1)
	uint8_t BitPad_0xD9_1 : 7; // 0xD9(0x1)
	uint8_t Pad_0xDA[0x2]; // 0xDA(0x2)
	int32_t CompressionQuality; // 0xDC(0x4)


	// Object: Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167cd098
	// Params: [ Num(4) Size(0x71) ]
	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, uint8_t bCopyImageData);

	// Object: Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167cd000
	// Params: [ Num(1) Size(0x10) ]
	struct FString GenerateFilenameForCurrentFrame();

	// Object: Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167ccea0
	// Params: [ Num(3) Size(0x68) ]
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, const struct FCapturedPixelsID& StreamID);
	DEFINE_UE_CLASS_HELPERS(UUserDefinedImageCaptureProtocol, "UserDefinedImageCaptureProtocol")

};

// Object: Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x80 (Inherited: 0x68)
struct UVideoCaptureProtocol : UFrameGrabberProtocol
{
	uint8_t bUseCompression : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	float CompressionQuality; // 0x6C(0x4)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	DEFINE_UE_CLASS_HELPERS(UVideoCaptureProtocol, "VideoCaptureProtocol")

};

} // namespace SDK
