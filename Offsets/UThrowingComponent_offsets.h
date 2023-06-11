namespace offsets
{
	namespace UThrowingComponent
	{
			constexpr auto ItemThrowingBehavior = 0x1d0; // Size: 1, Type: uint8_t 
			constexpr auto PierceMaxDensity = 0x1d4; // Size: 4, Type: float
			constexpr auto ThrowEnergyMultiplier = 0x1d8; // Size: 4, Type: float
			constexpr auto InitialRotation = 0x1dc; // Size: 12, Type: struct FRotator
			constexpr auto UpdatedRotation = 0x1e8; // Size: 12, Type: struct FRotator
			constexpr auto MinRandomImpactRotation = 0x1f4; // Size: 12, Type: struct FRotator
			constexpr auto MaxRandomImpactRotation = 0x200; // Size: 12, Type: struct FRotator
			constexpr auto PenetrationDepth = 0x20c; // Size: 4, Type: float
			constexpr auto IsFloatable = 0x210; // Size: 1, Type: bool
			constexpr auto MinStance = 0x211; // Size: 1, Type: uint8_t 
			constexpr auto _splashParticleSystem = 0x15c0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _splashAudioEvent = 0x15c8; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
