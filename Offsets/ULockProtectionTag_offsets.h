namespace offsets
{
	namespace ULockProtectionTag
	{
			constexpr auto FailureParticles = 0x38; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FailureAudio = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto FailureParticlesInWorld = 0x48; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FailureAudioInWorld = 0x50; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto FailureParticlesScaleInWorld = 0x58; // Size: 12, Type: struct FVector
			constexpr auto _baseDamage = 0x64; // Size: 4, Type: float
	}
} 
