#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AutomatedTesting
// Enums: 0
// Structs: 0
// Classes: 5

struct AActor;
struct ACameraActor;
struct USceneCaptureComponent2D;
struct UTextureRenderTarget2D;
struct UAutomatedTestingHelpers;
struct IAutomatedTestingInterface;
struct UBPAutomatedTestingConfig;
struct ARuntimeSceneCaptureCamera;
struct ARuntimeSceneCaptureController;

// Object: Class AutomatedTesting.AutomatedTestingHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAutomatedTestingHelpers : UObject
{

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.WriteExecResult
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7b0a718
	// Params: [ Num(1) Size(0x10) ]
	static void WriteExecResult(struct FString Result);

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.StopFaceToNearestAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0a684
	// Params: [ Num(1) Size(0x8) ]
	static void StopFaceToNearestAI(struct UObject* WorldContextObject);

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.GetAllObjectsOfClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7b0a568
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UObject*> GetAllObjectsOfClass(struct UObject* objectClass, uint8_t bIncludeDerivedClasses);

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.ExecLua
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7b0a44c
	// Params: [ Num(3) Size(0x28) ]
	static struct FString ExecLua(struct UObject* WorldContextObject, struct FString LuaCode);

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.AutoMoveToLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7b0a370
	// Params: [ Num(2) Size(0x14) ]
	static void AutoMoveToLocation(struct UObject* WorldContextObject, const struct FVector& Location);

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.AutoMoveToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0a2a4
	// Params: [ Num(2) Size(0x10) ]
	static void AutoMoveToActor(struct UObject* WorldContextObject, struct AActor* TargetActor);

	// Object: Function AutomatedTesting.AutomatedTestingHelpers.AutoFaceToNearestAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0a210
	// Params: [ Num(1) Size(0x8) ]
	static void AutoFaceToNearestAI(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UAutomatedTestingHelpers, "AutomatedTestingHelpers")

};

// Object: Class AutomatedTesting.AutomatedTestingInterface
// Size: 0x28 (Inherited: 0x28)
struct IAutomatedTestingInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IAutomatedTestingInterface, "AutomatedTestingInterface")

};

// Object: Class AutomatedTesting.BPAutomatedTestingConfig
// Size: 0x28 (Inherited: 0x28)
struct UBPAutomatedTestingConfig : UBlueprintFunctionLibrary
{

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.ScreenShot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0acfc
	// Params: [ Num(1) Size(0x10) ]
	static void ScreenShot(struct FString Parm);

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.MountPufferPaks
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0ace8
	// Params: [ Num(0) Size(0x0) ]
	static void MountPufferPaks();

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.GetLightingTestMapLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0ac78
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetLightingTestMapLevels();

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.GetEnvironmentVariable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0ab4c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetEnvironmentVariable(struct FString Parm);

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.GetCurrentPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0aab4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCurrentPlatform();

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.GetAppDataDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0aa1c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppDataDirectory();

	// Object: Function AutomatedTesting.BPAutomatedTestingConfig.CaptureCamera
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0a7d4
	// Params: [ Num(5) Size(0x2A) ]
	static void CaptureCamera(struct ACameraActor* CurCamera, struct FString Filename, struct FString Resolution, uint8_t bChangeSize, uint8_t bPostProsess);
	DEFINE_UE_CLASS_HELPERS(UBPAutomatedTestingConfig, "BPAutomatedTestingConfig")

};

// Object: Class AutomatedTesting.RuntimeSceneCaptureCamera
// Size: 0xCE0 (Inherited: 0xCD0)
struct ARuntimeSceneCaptureCamera : ACameraActor
{
	struct USceneCaptureComponent2D* CaptureComponent; // 0xCD0(0x8)
	uint8_t Pad_0xCD8[0x8]; // 0xCD8(0x8)


	// Object: Function AutomatedTesting.RuntimeSceneCaptureCamera.SaveCaptureResult
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7b0b03c
	// Params: [ Num(4) Size(0x29) ]
	void SaveCaptureResult(struct UTextureRenderTarget2D* InCaptureResult, struct FString CaptureResultSavedPath, struct FString CaptureResultSavedName, uint8_t bShouldSave);

	// Object: Function AutomatedTesting.RuntimeSceneCaptureCamera.BeginCapture
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7b0ae04
	// Params: [ Num(5) Size(0x2C) ]
	void BeginCapture(struct FString CaptureResultSavedPath, struct FString WorldName, uint8_t bPostProsess, int32_t MaxTime, int32_t LoopTime);
	DEFINE_UE_CLASS_HELPERS(ARuntimeSceneCaptureCamera, "RuntimeSceneCaptureCamera")

};

// Object: Class AutomatedTesting.RuntimeSceneCaptureController
// Size: 0x370 (Inherited: 0x370)
struct ARuntimeSceneCaptureController : AActor
{

	// Object: Function AutomatedTesting.RuntimeSceneCaptureController.SplitString
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7b0b31c
	// Params: [ Num(4) Size(0x38) ]
	struct TArray<struct FString> SplitString(struct FString SourceString, struct FString Delimiter, uint8_t bCullEmpty);
	DEFINE_UE_CLASS_HELPERS(ARuntimeSceneCaptureController, "RuntimeSceneCaptureController")

};

} // namespace SDK
