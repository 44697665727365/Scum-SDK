#pragma once 
#include <AudioExtensions_Structs.h>
 
 
 
// Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct USoundfieldEncodingSettingsBase : public UObject
{

}; 



// Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct UAudioEndpointSettingsBase : public UObject
{

}; 



// Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct USoundfieldEndpointSettingsBase : public UObject
{

}; 



// Class AudioExtensions.DummyEndpointSettings
// Size: 0x28(Inherited: 0x28) 
struct UDummyEndpointSettings : public UAudioEndpointSettingsBase
{

}; 



// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct USpatializationPluginSourceSettingsBase : public UObject
{

}; 



// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct UOcclusionPluginSourceSettingsBase : public UObject
{

}; 



// Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct UReverbPluginSourceSettingsBase : public UObject
{

}; 



// Class AudioExtensions.SoundModulatorBase
// Size: 0x28(Inherited: 0x28) 
struct USoundModulatorBase : public UObject
{

}; 



// Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct USoundfieldEffectSettingsBase : public UObject
{

}; 



// Class AudioExtensions.SoundfieldEffectBase
// Size: 0x30(Inherited: 0x28) 
struct USoundfieldEffectBase : public UObject
{
	struct USoundfieldEffectSettingsBase* Settings;  // 0x28(0x8)

}; 



