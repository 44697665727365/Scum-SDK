namespace offsets
{
	namespace ADrone
	{
			constexpr auto _engineAudioEvent = 0x7a0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _engineStopAudioEvent = 0x7a8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _speedSteps = 0x7b0; // Size: 16, Type: struct TArray<float>
			constexpr auto _movementInertiaAI = 0x7c0; // Size: 4, Type: float
			constexpr auto _movementRotationSpeedExpFactor = 0x7c4; // Size: 4, Type: float
			constexpr auto _engineParticlesChangeSpeedExpFactor = 0x7c8; // Size: 4, Type: float
			constexpr auto _engineVolumeFromSpeed = 0x7d0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _movementBreathingInterval = 0x7d8; // Size: 4, Type: float
			constexpr auto _movementBreathingIntensity = 0x7dc; // Size: 4, Type: float
			constexpr auto _selfDestructParticles = 0x7e0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _smokeParticles = 0x7e8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _smokeParticleSystemComponent = 0x7f0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _selfDestructAudioEvent = 0x7f8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _currentSpeedStep = 0x818; // Size: 1, Type: char
			constexpr auto _movementInertia = 0x81c; // Size: 4, Type: float
			constexpr auto _cameraMesh = 0x828; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _engineParticlesM = 0x830; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _engineParticlesML = 0x838; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _engineParticlesMR = 0x840; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _engineParticlesLL = 0x848; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _engineParticlesLR = 0x850; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _lightComponent = 0x858; // Size: 8, Type: struct USpotLightComponent*
			constexpr auto _speedOfSoundMultiplerForDoppler = 0x860; // Size: 4, Type: float
			constexpr auto _health = 0x8a0; // Size: 4, Type: float
	}
} 
