#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMGameChat
// Enums: 1
// Structs: 0
// Classes: 1

struct AController;
struct UWorld;
struct UDFMGameChat;

// Object: Enum DFMGameChat.EChatType
enum class EChatType : uint8_t
{
	DSChatAll = 0,
	DSChatTeam = 1,
	DSChatAppointment = 2,
	DSChatCamp = 3,
	DSChatMPELection = 4,
	EChatType_MAX = 5
};

// Object: Class DFMGameChat.DFMGameChat
// Size: 0x60 (Inherited: 0x30)
struct UDFMGameChat : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate FdfmGameChatOnMarkedItemNameChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnChatSendText; // 0x40(0x10)
	struct FMulticastInlineDelegate OnChatSendPreset; // 0x50(0x10)


	// Object: Function DFMGameChat.DFMGameChat.ServerAISendChatPreset
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc5756d8
	// Params: [ Num(2) Size(0x10) ]
	void ServerAISendChatPreset(struct AController* Controller, struct FName PresetId);

	// Object: Function DFMGameChat.DFMGameChat.ServerAISendChat
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc5755e8
	// Params: [ Num(2) Size(0x18) ]
	void ServerAISendChat(struct AController* Controller, struct FString Content);

	// Object: Function DFMGameChat.DFMGameChat.SendChatPreset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc5753ec
	// Params: [ Num(4) Size(0x29) ]
	void SendChatPreset(struct FString Nick, struct FName PresetId, struct TArray<int32_t> ExtraParams, EChatType ChatType);

	// Object: Function DFMGameChat.DFMGameChat.SendChat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc575230
	// Params: [ Num(3) Size(0x21) ]
	void SendChat(struct FString Nick, struct FString Content, EChatType ChatType);

	// Object: Function DFMGameChat.DFMGameChat.OnMarkItem
	// Flags: [Final|Native|Public]
	// Offset: 0xc575138
	// Params: [ Num(1) Size(0x10) ]
	void OnMarkItem(struct FString ItemName);

	// Object: Function DFMGameChat.DFMGameChat.MarkItem
	// Flags: [Final|Native|Public]
	// Offset: 0xc575094
	// Params: [ Num(1) Size(0x8) ]
	void MarkItem(struct UWorld* World);

	// Object: Function DFMGameChat.DFMGameChat.MarkCoord
	// Flags: [Final|Native|Public]
	// Offset: 0xc574ff0
	// Params: [ Num(1) Size(0x8) ]
	void MarkCoord(struct UWorld* World);

	// Object: Function DFMGameChat.DFMGameChat.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10aafc64
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameChat* Get(struct UWorld* WorldContextObject);

	// Object: Function DFMGameChat.DFMGameChat.ClientOnAISendChatPreset
	// Flags: [Final|Native|Public]
	// Offset: 0xc574ecc
	// Params: [ Num(3) Size(0x20) ]
	void ClientOnAISendChatPreset(uint64_t AiUin, struct FString AINick, struct FName PresetId);

	// Object: Function DFMGameChat.DFMGameChat.ClientOnAISendChat
	// Flags: [Final|Native|Public]
	// Offset: 0xc574d50
	// Params: [ Num(3) Size(0x28) ]
	void ClientOnAISendChat(uint64_t AiUin, struct FString AINick, struct FString Content);
	DEFINE_UE_CLASS_HELPERS(UDFMGameChat, "DFMGameChat")

};

} // namespace SDK
