#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: DFMultiprocessingSocket
// Enums: 0
// Structs: 0
// Classes: 6

struct UDFSocketClient;
struct UDFSocketClientV2;
struct UDFSocketServer;
struct UDFSocketServerV2;
struct USocketRSThread;
struct USocketRSThreadV2;

// Object: Class DFMultiprocessingSocket.DFSocketClient
// Size: 0x68 (Inherited: 0x28)
struct UDFSocketClient : UObject
{
	struct FMulticastInlineDelegate SendSocketDataDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate ReceiveSocketDataDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
	struct TArray<struct USocketRSThread*> RecThreads; // 0x58(0x10)


	// Object: Function DFMultiprocessingSocket.DFSocketClient.SendToServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53928
	// Params: [ Num(1) Size(0x10) ]
	void SendToServer(struct FString Message);

	// Object: Function DFMultiprocessingSocket.DFSocketClient.ReconnectServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53840
	// Params: [ Num(2) Size(0x14) ]
	void ReconnectServer(struct FString ServerIP, int32_t ServerPort);

	// Object: Function DFMultiprocessingSocket.DFSocketClient.OnServerDisconnect
	// Flags: [Final|Native|Public]
	// Offset: 0x7a5379c
	// Params: [ Num(1) Size(0x8) ]
	void OnServerDisconnect(struct USocketRSThread* pThread);

	// Object: Function DFMultiprocessingSocket.DFSocketClient.IsConnected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7a53764
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsConnected();

	// Object: Function DFMultiprocessingSocket.DFSocketClient.Disconnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53750
	// Params: [ Num(0) Size(0x0) ]
	void Disconnect();

	// Object: Function DFMultiprocessingSocket.DFSocketClient.CreateClientAndConnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a535e8
	// Params: [ Num(5) Size(0x1D) ]
	uint8_t CreateClientAndConnect(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize);

	// Object: Function DFMultiprocessingSocket.DFSocketClient.ConnectServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a534f4
	// Params: [ Num(3) Size(0x15) ]
	uint8_t ConnectServer(struct FString ServerIP, int32_t ServerPort);
	DEFINE_UE_CLASS_HELPERS(UDFSocketClient, "DFSocketClient")

};

// Object: Class DFMultiprocessingSocket.DFSocketClientV2
// Size: 0x70 (Inherited: 0x28)
struct UDFSocketClientV2 : UObject
{
	struct FMulticastInlineDelegate SendSocketDataDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate ReceiveSocketDataDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)
	struct TArray<struct USocketRSThreadV2*> RecThreads; // 0x60(0x10)


	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.SendToServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53e80
	// Params: [ Num(1) Size(0x10) ]
	void SendToServer(struct FString Message);

	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.ReconnectServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53d98
	// Params: [ Num(2) Size(0x14) ]
	void ReconnectServer(struct FString ServerIP, int32_t ServerPort);

	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.OnServerDisconnect
	// Flags: [Final|Native|Public]
	// Offset: 0x7a53cf4
	// Params: [ Num(1) Size(0x8) ]
	void OnServerDisconnect(struct USocketRSThreadV2* pThread);

	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.IsConnected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7a53cbc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsConnected();

	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.Disconnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53ca8
	// Params: [ Num(0) Size(0x0) ]
	void Disconnect();

	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.CreateClientAndConnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53b40
	// Params: [ Num(5) Size(0x1D) ]
	uint8_t CreateClientAndConnect(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize);

	// Object: Function DFMultiprocessingSocket.DFSocketClientV2.ConnectServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53a4c
	// Params: [ Num(3) Size(0x15) ]
	uint8_t ConnectServer(struct FString ServerIP, int32_t ServerPort);
	DEFINE_UE_CLASS_HELPERS(UDFSocketClientV2, "DFSocketClientV2")

};

// Object: Class DFMultiprocessingSocket.DFSocketServer
// Size: 0x90 (Inherited: 0x28)
struct UDFSocketServer : UObject
{
	struct FMulticastInlineDelegate SocketCreateDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate ConnectReceiveDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate ReceiveSocketDataDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate SendSocketDataDelegate; // 0x58(0x10)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct TArray<struct USocketRSThread*> RecThreads; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)


	// Object: Function DFMultiprocessingSocket.DFSocketServer.SendToClient
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a541d0
	// Params: [ Num(1) Size(0x10) ]
	void SendToClient(struct FString Message);

	// Object: Function DFMultiprocessingSocket.DFSocketServer.OnDisConnected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5412c
	// Params: [ Num(1) Size(0x8) ]
	void OnDisConnected(struct USocketRSThread* pThread);

	// Object: Function DFMultiprocessingSocket.DFSocketServer.CreateServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53fc4
	// Params: [ Num(5) Size(0x1D) ]
	uint8_t CreateServer(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize);

	// Object: Function DFMultiprocessingSocket.DFSocketServer.CloseServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a53fb0
	// Params: [ Num(0) Size(0x0) ]
	void CloseServer();
	DEFINE_UE_CLASS_HELPERS(UDFSocketServer, "DFSocketServer")

};

// Object: Class DFMultiprocessingSocket.DFSocketServerV2
// Size: 0x88 (Inherited: 0x28)
struct UDFSocketServerV2 : UObject
{
	struct FMulticastInlineDelegate SocketCreateDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate ConnectReceiveDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate ReceiveSocketDataDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate SendSocketDataDelegate; // 0x58(0x10)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct TArray<struct USocketRSThreadV2*> RecThreads; // 0x70(0x10)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)


	// Object: Function DFMultiprocessingSocket.DFSocketServerV2.SendToClient
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a544fc
	// Params: [ Num(1) Size(0x10) ]
	void SendToClient(struct FString Message);

	// Object: Function DFMultiprocessingSocket.DFSocketServerV2.OnDisConnected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a54458
	// Params: [ Num(1) Size(0x8) ]
	void OnDisConnected(struct USocketRSThreadV2* pThread);

	// Object: Function DFMultiprocessingSocket.DFSocketServerV2.CreateServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a542f0
	// Params: [ Num(5) Size(0x1D) ]
	uint8_t CreateServer(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize);

	// Object: Function DFMultiprocessingSocket.DFSocketServerV2.CloseServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a542dc
	// Params: [ Num(0) Size(0x0) ]
	void CloseServer();
	DEFINE_UE_CLASS_HELPERS(UDFSocketServerV2, "DFSocketServerV2")

};

// Object: Class DFMultiprocessingSocket.SocketRSThread
// Size: 0xA0 (Inherited: 0x28)
struct USocketRSThread : UObject
{
	uint8_t Pad_0x28[0x78]; // 0x28(0x78)
	DEFINE_UE_CLASS_HELPERS(USocketRSThread, "SocketRSThread")

};

// Object: Class DFMultiprocessingSocket.SocketRSThreadV2
// Size: 0xE0 (Inherited: 0x28)
struct USocketRSThreadV2 : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint8_t bEncrypt : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0xAF]; // 0x31(0xAF)
	DEFINE_UE_CLASS_HELPERS(USocketRSThreadV2, "SocketRSThreadV2")

};

} // namespace SDK
