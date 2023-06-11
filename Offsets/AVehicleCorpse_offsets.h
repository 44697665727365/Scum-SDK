namespace offsets
{
	namespace AVehicleCorpse
	{
			constexpr auto _mesh = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _explosionParticles = 0x230; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionParticlesTransform = 0x240; // Size: 48, Type: struct FTransform
			constexpr auto _explosionAudioEvent = 0x270; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _explosionForceMagnitude = 0x278; // Size: 4, Type: float
			constexpr auto _burningParticles = 0x280; // Size: 16, Type: struct TArray<struct FVehicleCorpseBurningParticles>
			constexpr auto _burningAudioEvent = 0x290; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _endOfLifeFadingTime = 0x298; // Size: 4, Type: float
	}
} 
