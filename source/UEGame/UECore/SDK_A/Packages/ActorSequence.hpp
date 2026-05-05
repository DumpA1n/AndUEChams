#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: ActorSequence
// Enums: 1
// Structs: 3
// Classes: 3

struct UMovieScene;
struct FActorSequenceObjectReferenceMap;
struct FActorSequenceObjectReferences;
struct FActorSequenceObjectReference;
struct UActorSequence;
struct UActorSequenceComponent;
struct UActorSequencePlayer;

// Object: Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x0)
struct FActorSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds; // 0x0(0x10)
	struct TArray<struct FActorSequenceObjectReferences> References; // 0x10(0x10)
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 (Inherited: 0x0)
struct FActorSequenceObjectReferences
{
	struct TArray<struct FActorSequenceObjectReference> array; // 0x0(0x10)
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 (Inherited: 0x0)
struct FActorSequenceObjectReference
{
	EActorSequenceObjectReferenceType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FGuid ActorID; // 0x4(0x10)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString PathToComponent; // 0x18(0x10)
};

// Object: Class ActorSequence.ActorSequence
// Size: 0x3E8 (Inherited: 0x3C0)
struct UActorSequence : UMovieSceneSequence
{
	DEFINE_UE_CLASS_HELPERS(UActorSequence, "ActorSequence")

	struct UMovieScene* MovieScene; // 0x3C0(0x8)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x3C8(0x20)
};

// Object: Class ActorSequence.ActorSequenceComponent
// Size: 0x120 (Inherited: 0xF8)
struct UActorSequenceComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UActorSequenceComponent, "ActorSequenceComponent")

	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xF8(0x14)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct UActorSequence* Sequence; // 0x110(0x8)
	struct UActorSequencePlayer* SequencePlayer; // 0x118(0x8)
};

// Object: Class ActorSequence.ActorSequencePlayer
// Size: 0xA38 (Inherited: 0xA38)
struct UActorSequencePlayer : UMovieSceneSequencePlayer
{
	DEFINE_UE_CLASS_HELPERS(UActorSequencePlayer, "ActorSequencePlayer")
};

} // namespace SDK
