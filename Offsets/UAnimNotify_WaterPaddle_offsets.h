namespace offsets
{
	namespace UAnimNotify_WaterPaddle
	{
			constexpr auto ParticleSystem = 0x38; // Size: 8, Type: struct UParticleSystem*
			constexpr auto AudioEvent = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto VolumeMultiplier = 0x48; // Size: 4, Type: float
			constexpr auto PitchMultiplier = 0x4c; // Size: 4, Type: float
			constexpr auto IsUnderwater = 0x50; // Size: 1, Type: bool
			constexpr auto IsAttached = 0x51; // Size: 1, Type: bool
			constexpr auto AttachPointName = 0x54; // Size: 8, Type: struct FName
			constexpr auto DebugMode = 0x5c; // Size: 1, Type: bool
	}
} 
