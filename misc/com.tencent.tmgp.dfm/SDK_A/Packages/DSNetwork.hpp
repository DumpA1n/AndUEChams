#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OnlineSubsystemUtils.hpp"
#include "PropertyReplication.hpp"

namespace SDK
{

// Package: DSNetwork
// Enums: 0
// Structs: 0
// Classes: 12

enum class ENetworkFailure : uint8_t;
struct UNetDriver;
struct UWorld;
struct UDSLogicBase;
struct UDualChannelIpNetConnection;
struct UDualChannelChildConnection;
struct UDualChannelPackageMapClient;
struct UDualChannelIpNetDriver;
struct UMultiIpNetConnection;
struct UMultiIpNetDriver;
struct UProtocolJsonExporter;
struct UParseNetProtocolCommandlet;
struct UProtocolJsonExporter_ForNState;
struct UParseNetProtocolForNStateCommandlet;
struct UParseProtocolForReplayClientSDK;

// Object: Class DSNetwork.DSLogicBase
// Size: 0x4B0 (Inherited: 0x28)
struct UDSLogicBase : UObject
{
	uint8_t Pad_0x28[0x488]; // 0x28(0x488)
	DEFINE_UE_CLASS_HELPERS(UDSLogicBase, "DSLogicBase")

};

// Object: Class DSNetwork.DualChannelIpNetConnection
// Size: 0x2020 (Inherited: 0x1DE0)
struct UDualChannelIpNetConnection : UPropertyReplicationConnection
{
	uint8_t Pad_0x1DE0[0x40]; // 0x1DE0(0x40)
	struct UDualChannelChildConnection* ChildConnection; // 0x1E20(0x8)
	float SocketErrorRecoverDelay; // 0x1E28(0x4)
	float ServerSocketSendThreshold; // 0x1E2C(0x4)
	uint8_t ForceSendViaDualSocket : 1; // 0x1E30(0x1), Mask(0x1)
	uint8_t BitPad_0x1E30_1 : 7; // 0x1E30(0x1)
	uint8_t EnablePacketAnalyse : 1; // 0x1E31(0x1), Mask(0x1)
	uint8_t BitPad_0x1E31_1 : 7; // 0x1E31(0x1)
	uint8_t Pad_0x1E32[0x5A]; // 0x1E32(0x5A)
	float SwitchIpAddressThreshold; // 0x1E8C(0x4)
	float SwitchIpAddressThresholdStable; // 0x1E90(0x4)
	float SwitchIpAddressThresholdScaler; // 0x1E94(0x4)
	int32_t SwitchIpAddressTickCountThreshold; // 0x1E98(0x4)
	int32_t RecvNothingTickCountThreshold; // 0x1E9C(0x4)
	int32_t SwitchIpActorCheckMask; // 0x1EA0(0x4)
	int32_t SwitchIpLostPackageCountThreshold; // 0x1EA4(0x4)
	float SwitchIpLostPackageRateThreshold; // 0x1EA8(0x4)
	uint8_t Pad_0x1EAC[0x174]; // 0x1EAC(0x174)


	// Object: Function DSNetwork.DualChannelIpNetConnection.OnHandleNetworkFailure
	// Flags: [Final|Native|Private]
	// Offset: 0x8f61930
	// Params: [ Num(4) Size(0x28) ]
	void OnHandleNetworkFailure(struct UWorld* World, struct UNetDriver* NetDriver, ENetworkFailure FailureType, struct FString ErrorString);
	DEFINE_UE_CLASS_HELPERS(UDualChannelIpNetConnection, "DualChannelIpNetConnection")

};

// Object: Class DSNetwork.DualChannelChildConnection
// Size: 0x1DE8 (Inherited: 0x1DE0)
struct UDualChannelChildConnection : UIpConnection
{
	struct UDualChannelIpNetConnection* ParentConnection; // 0x1DE0(0x8)
	DEFINE_UE_CLASS_HELPERS(UDualChannelChildConnection, "DualChannelChildConnection")

};

// Object: Class DSNetwork.DualChannelPackageMapClient
// Size: 0x470 (Inherited: 0x470)
struct UDualChannelPackageMapClient : UPropertyReplicationPackageMapClient
{	DEFINE_UE_CLASS_HELPERS(UDualChannelPackageMapClient, "DualChannelPackageMapClient")

};

// Object: Class DSNetwork.DualChannelIpNetDriver
// Size: 0x8A8 (Inherited: 0x800)
struct UDualChannelIpNetDriver : UIpNetDriver
{
	uint8_t Pad_0x800[0x18]; // 0x800(0x18)
	int32_t MaxRetryBindPortTimes; // 0x818(0x4)
	float RetrySleepTimeSecondsWhenBindFailed; // 0x81C(0x4)
	uint8_t ExitProcessIfBindFailed : 1; // 0x820(0x1), Mask(0x1)
	uint8_t BitPad_0x820_1 : 7; // 0x820(0x1)
	uint8_t Pad_0x821[0x87]; // 0x821(0x87)
	DEFINE_UE_CLASS_HELPERS(UDualChannelIpNetDriver, "DualChannelIpNetDriver")

};

// Object: Class DSNetwork.MultiIpNetConnection
// Size: 0x1DE0 (Inherited: 0x1DE0)
struct UMultiIpNetConnection : UIpConnection
{	DEFINE_UE_CLASS_HELPERS(UMultiIpNetConnection, "MultiIpNetConnection")

};

// Object: Class DSNetwork.MultiIpNetDriver
// Size: 0x880 (Inherited: 0x800)
struct UMultiIpNetDriver : UIpNetDriver
{
	uint8_t Pad_0x800[0x80]; // 0x800(0x80)
	DEFINE_UE_CLASS_HELPERS(UMultiIpNetDriver, "MultiIpNetDriver")

};

// Object: Class DSNetwork.ProtocolJsonExporter
// Size: 0x60 (Inherited: 0x28)
struct UProtocolJsonExporter : UObject
{
	uint8_t Pad_0x28[0x38]; // 0x28(0x38)
	DEFINE_UE_CLASS_HELPERS(UProtocolJsonExporter, "ProtocolJsonExporter")

};

// Object: Class DSNetwork.ParseNetProtocolCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UParseNetProtocolCommandlet : UCommandlet
{	DEFINE_UE_CLASS_HELPERS(UParseNetProtocolCommandlet, "ParseNetProtocolCommandlet")

};

// Object: Class DSNetwork.ProtocolJsonExporter_ForNState
// Size: 0x60 (Inherited: 0x28)
struct UProtocolJsonExporter_ForNState : UObject
{
	uint8_t Pad_0x28[0x38]; // 0x28(0x38)
	DEFINE_UE_CLASS_HELPERS(UProtocolJsonExporter_ForNState, "ProtocolJsonExporter_ForNState")

};

// Object: Class DSNetwork.ParseNetProtocolForNStateCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UParseNetProtocolForNStateCommandlet : UCommandlet
{	DEFINE_UE_CLASS_HELPERS(UParseNetProtocolForNStateCommandlet, "ParseNetProtocolForNStateCommandlet")

};

// Object: Class DSNetwork.ParseProtocolForReplayClientSDK
// Size: 0x28 (Inherited: 0x28)
struct UParseProtocolForReplayClientSDK : UObject
{	DEFINE_UE_CLASS_HELPERS(UParseProtocolForReplayClientSDK, "ParseProtocolForReplayClientSDK")

};

} // namespace SDK
