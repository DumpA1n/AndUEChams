#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MessageTags.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: GlobalMessageRuntime
// Enums: 2
// Structs: 5
// Classes: 7

struct FMovieSceneObjectBindingID;
struct UMovieSceneSection;
struct FMessageAny;
struct FMovieSceneMessageSectionData;
struct FMovieSceneMessageParameters;
struct FMessagePayload;
struct FMovieSceneMessageSectionTemplate;
struct UMessageBPLibrary;
struct UGMMessageManager;
struct UMovieSceneMessageSection;
struct UMovieSceneMessageTrack;
struct UPropertiesContainer;
struct UMessageVerify;
struct URpcProxyComponent;

// Object: Enum GlobalMessageRuntime.EMessageAuthorityType
enum class EMessageAuthorityType : uint8_t
{
	EMessageTypeBoth = 0,
	EMessageTypeServer = 1,
	EMessageTypeClient = 2,
	EMessageAuthorityType_MAX = 3
};

// Object: Enum GlobalMessageRuntime.EFireMessagesAtPosition
enum class EFireMessagesAtPosition : uint8_t
{
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireMessagesAtPosition_MAX = 3
};

// Object: ScriptStruct GlobalMessageRuntime.MessageAny
// Size: 0x10 (Inherited: 0x0)
struct FMessageAny
{
	uint64_t Value; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GlobalMessageRuntime.MovieSceneMessageSectionData
// Size: 0x90 (Inherited: 0x10)
struct FMovieSceneMessageSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMessagePayload> KeyValues; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct GlobalMessageRuntime.MovieSceneMessageParameters
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneMessageParameters
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct GlobalMessageRuntime.MessagePayload
// Size: 0x30 (Inherited: 0x0)
struct FMessagePayload
{
	struct FMessageTag MessageKey; // 0x0(0x8)
	struct FMovieSceneMessageParameters Parameters; // 0x8(0x28)
};

// Object: ScriptStruct GlobalMessageRuntime.MovieSceneMessageSectionTemplate
// Size: 0xC0 (Inherited: 0x18)
struct FMovieSceneMessageSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneMessageSectionData MessageData; // 0x18(0x90)
	struct TArray<struct FMovieSceneObjectBindingID> MessageReceivers; // 0xA8(0x10)
	uint8_t bFireMessagesWhenForwards : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t bFireMessagesWhenBackwards : 1; // 0xB8(0x1), Mask(0x2)
	uint8_t BitPad_0xB8_2 : 6; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
};

// Object: Class GlobalMessageRuntime.MessageBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMessageBPLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.UnlistenMessageByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75e3a40
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t UnlistenMessageByName(struct FName MessageId, struct UObject* Listener, struct UGMMessageManager* Mgr);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.SetWild
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d3f2c
	// Params: [ Num(4) Size(0x30) ]
	static void SetWild(uint8_t PropertyEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, const struct FMessageAny& InItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.SetValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75d3f18
	// Params: [ Num(3) Size(0x28) ]
	static void SetValue(const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, const struct FMessageAny& InItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.SetSet
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d4114
	// Params: [ Num(4) Size(0x70) ]
	static void SetSet(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TSet<int32_t>& InItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.SetMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d404c
	// Params: [ Num(5) Size(0x70) ]
	static void SetMap(uint8_t KeyEnum, uint8_t ValueEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TMap<int32_t, int32_t>& InItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.SetArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d3fbc
	// Params: [ Num(4) Size(0x30) ]
	static void SetArray(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TArray<int32_t>& InItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.NotifyMessageByName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75e38a0
	// Params: [ Num(5) Size(0x30) ]
	static void NotifyMessageByName(struct FName MessageId, struct UObject* Sender, const struct TArray<struct FMessageAny>& Params, uint8_t Type, struct UGMMessageManager* Mgr);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.MakeFromWild
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d36c4
	// Params: [ Num(3) Size(0x28) ]
	static struct FMessageAny MakeFromWild(uint8_t PropertyEnum, const struct FMessageAny& InAny);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.MakeFromSet
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d3970
	// Params: [ Num(3) Size(0x68) ]
	static struct FMessageAny MakeFromSet(uint8_t ElementEnum, const struct TSet<int32_t>& InAny);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.MakeFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d3ab4
	// Params: [ Num(4) Size(0x68) ]
	static struct FMessageAny MakeFromMap(uint8_t ValueEnum, uint8_t KeyEnum, const struct TMap<int32_t, int32_t>& InAny);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.MakeFromArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d382c
	// Params: [ Num(3) Size(0x28) ]
	static struct FMessageAny MakeFromArray(uint8_t ElementEnum, const struct TArray<int32_t>& InAny);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.ListenMessageViaNameValidate
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75e35f0
	// Params: [ Num(10) Size(0x50) ]
	struct FMessageAny ListenMessageViaNameValidate(struct UObject* WorldContextObj, struct FName MessageKey, const struct TArray<struct FName>& ArgNames, struct FName EventName, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.ListenMessageViaName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75e3394
	// Params: [ Num(9) Size(0x40) ]
	struct FMessageAny ListenMessageViaName(struct UObject* Listener, struct FName MessageKey, struct FName EventName, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.ListenMessageByNameValidate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75e30f8
	// Params: [ Num(9) Size(0x50) ]
	static struct FMessageAny ListenMessageByNameValidate(struct FName MessageId, const struct TArray<struct FName>& ArgNames, const struct FDelegate& Delegate, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.ListenMessageByName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75e2eb0
	// Params: [ Num(8) Size(0x40) ]
	static struct FMessageAny ListenMessageByName(struct FName MessageId, const struct FDelegate& Delegate, int32_t Times, uint8_t bFront, uint8_t Type, struct UGMMessageManager* Mgr, struct UObject* WatchedObj);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.GetWild
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d447c
	// Params: [ Num(4) Size(0x30) ]
	static void GetWild(uint8_t PropertyEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct FMessageAny& OutItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.GetSet
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d4664
	// Params: [ Num(4) Size(0x70) ]
	static void GetSet(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TSet<int32_t>& OutItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.GetMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d459c
	// Params: [ Num(5) Size(0x70) ]
	static void GetMap(uint8_t KeyEnum, uint8_t ValueEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TMap<int32_t, int32_t>& OutItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.GetArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d450c
	// Params: [ Num(4) Size(0x30) ]
	static void GetArray(uint8_t ElementEnum, const struct TArray<struct FMessageAny>& TargetArray, int32_t Index, struct TArray<int32_t>& OutItem);

	// Object: Function GlobalMessageRuntime.MessageBPLibrary.AnyToWild
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x75d350c
	// Params: [ Num(3) Size(0x21) ]
	static void AnyToWild(const struct FMessageAny& InAny, struct FMessageAny& OutItem, uint8_t PropertyEnum);
	DEFINE_UE_CLASS_HELPERS(UMessageBPLibrary, "MessageBPLibrary")

};

// Object: Class GlobalMessageRuntime.GMMessageManager
// Size: 0x168 (Inherited: 0x28)
struct UGMMessageManager : UObject
{
	uint8_t Pad_0x28[0x140]; // 0x28(0x140)
	DEFINE_UE_CLASS_HELPERS(UGMMessageManager, "GMMessageManager")

};

// Object: Class GlobalMessageRuntime.MovieSceneMessageSection
// Size: 0x178 (Inherited: 0xE8)
struct UMovieSceneMessageSection : UMovieSceneSection
{
	struct FMovieSceneMessageSectionData MessageData; // 0xE8(0x90)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMessageSection, "MovieSceneMessageSection")

};

// Object: Class GlobalMessageRuntime.MovieSceneMessageTrack
// Size: 0x78 (Inherited: 0x58)
struct UMovieSceneMessageTrack : UMovieSceneNameableTrack
{
	uint8_t bFireMessagesWhenForwards : 1; // 0x56(0x1), Mask(0x1)
	uint8_t bFireMessagesWhenBackwards : 1; // 0x56(0x1), Mask(0x2)
	EFireMessagesAtPosition MessagePosition; // 0x57(0x1)
	struct TArray<struct FMovieSceneObjectBindingID> MessageReceivers; // 0x58(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneMessageTrack, "MovieSceneMessageTrack")

};

// Object: Class GlobalMessageRuntime.PropertiesContainer
// Size: 0x30 (Inherited: 0x30)
struct UPropertiesContainer : UField
{

	// Object: Function GlobalMessageRuntime.PropertiesContainer.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75e3c68
	// Params: [ Num(1) Size(0x8) ]
	static struct UObject* Get();
	DEFINE_UE_CLASS_HELPERS(UPropertiesContainer, "PropertiesContainer")

};

// Object: Class GlobalMessageRuntime.MessageVerify
// Size: 0x78 (Inherited: 0x28)
struct UMessageVerify : UObject
{
	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
	DEFINE_UE_CLASS_HELPERS(UMessageVerify, "MessageVerify")

};

// Object: Class GlobalMessageRuntime.RpcProxyComponent
// Size: 0xF8 (Inherited: 0xF8)
struct URpcProxyComponent : UActorComponent
{

	// Object: Function GlobalMessageRuntime.RpcProxyComponent.Unreliable_Notify
	// Flags: [Net|Native|Event|Protected|NetClient]
	// Offset: 0x75e4504
	// Params: [ Num(3) Size(0x20) ]
	void Unreliable_Notify(struct UObject* InObject, struct FName MessageName, struct TArray<uint8_t> Buffer);

	// Object: Function GlobalMessageRuntime.RpcProxyComponent.RPC_Request
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x75e43b8
	// Params: [ Num(3) Size(0x20) ]
	void RPC_Request(struct UObject* Object, struct FName FuncName, struct TArray<uint8_t> Buffer);

	// Object: Function GlobalMessageRuntime.RpcProxyComponent.RPC_Notify
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x75e4294
	// Params: [ Num(3) Size(0x20) ]
	void RPC_Notify(struct UObject* Object, struct FName FuncName, struct TArray<uint8_t> Buffer);

	// Object: Function GlobalMessageRuntime.RpcProxyComponent.Message_Request
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x75e4148
	// Params: [ Num(3) Size(0x20) ]
	void Message_Request(struct UObject* InObject, struct FName MessageName, struct TArray<uint8_t> Buffer);

	// Object: Function GlobalMessageRuntime.RpcProxyComponent.Message_Notify
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x75e4024
	// Params: [ Num(3) Size(0x20) ]
	void Message_Notify(struct UObject* InObject, struct FName MessageName, struct TArray<uint8_t> Buffer);
	DEFINE_UE_CLASS_HELPERS(URpcProxyComponent, "RpcProxyComponent")

};

} // namespace SDK
