#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AudioExtensions
// Enums: 0
// Structs: 0
// Classes: 9

struct UAudioEndpointSettingsBase;
struct USpatializationPluginSourceSettingsBase;
struct UOcclusionPluginSourceSettingsBase;
struct UReverbPluginSourceSettingsBase;
struct USoundModulatorBase;
struct USoundfieldEndpointSettingsBase;
struct USoundfieldEncodingSettingsBase;
struct USoundfieldEffectSettingsBase;
struct USoundfieldEffectBase;

// Object: Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAudioEndpointSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAudioEndpointSettingsBase, "AudioEndpointSettingsBase")
};

// Object: Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USpatializationPluginSourceSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USpatializationPluginSourceSettingsBase, "SpatializationPluginSourceSettingsBase")
};

// Object: Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UOcclusionPluginSourceSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOcclusionPluginSourceSettingsBase, "OcclusionPluginSourceSettingsBase")
};

// Object: Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UReverbPluginSourceSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UReverbPluginSourceSettingsBase, "ReverbPluginSourceSettingsBase")
};

// Object: Class AudioExtensions.SoundModulatorBase
// Size: 0x28 (Inherited: 0x28)
struct USoundModulatorBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USoundModulatorBase, "SoundModulatorBase")
};

// Object: Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEndpointSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USoundfieldEndpointSettingsBase, "SoundfieldEndpointSettingsBase")
};

// Object: Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEncodingSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USoundfieldEncodingSettingsBase, "SoundfieldEncodingSettingsBase")
};

// Object: Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEffectSettingsBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USoundfieldEffectSettingsBase, "SoundfieldEffectSettingsBase")
};

// Object: Class AudioExtensions.SoundfieldEffectBase
// Size: 0x30 (Inherited: 0x28)
struct USoundfieldEffectBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USoundfieldEffectBase, "SoundfieldEffectBase")

	struct USoundfieldEffectSettingsBase* Settings; // 0x28(0x8)
};

} // namespace SDK
