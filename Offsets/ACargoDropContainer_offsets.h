namespace offsets
{
	namespace ACargoDropContainer
	{
			constexpr auto DelayDuration = 0x220; // Size: 4, Type: float
			constexpr auto FallDuration = 0x224; // Size: 4, Type: float
			constexpr auto DetonationTime = 0x228; // Size: 4, Type: float
			constexpr auto DetonationCountdown = 0x22c; // Size: 4, Type: float
			constexpr auto LandSound = 0x230; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto WarningSound = 0x238; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto DetonationSound = 0x240; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto DetonationParticles = 0x248; // Size: 8, Type: struct UParticleSystem*
			constexpr auto CameraShakeClass = 0x250; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto MajorSpawnerOptions = 0x258; // Size: 16, Type: struct TArray<UItemSpawnerPreset*>
			constexpr auto MajorSpawnerPresetOptions = 0x268; // Size: 16, Type: struct TArray<UItemSpawnerPreset2*>
			constexpr auto MinorSpawnerOptions = 0x278; // Size: 16, Type: struct TArray<struct FCargoDropSpawnerPreset>
			constexpr auto UnlockLockersAudioEvent = 0x288; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _parachuteMesh = 0x290; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _flareParticles = 0x298; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _dustParticles = 0x2a0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _timerWidget = 0x2a8; // Size: 8, Type: struct UKillBoxTimerWidget*
			constexpr auto _lockStateWidget = 0x2b0; // Size: 8, Type: struct UDiegeticLockState*
			constexpr auto _endLocation = 0x2c8; // Size: 12, Type: struct FVector
			constexpr auto _rotation = 0x2d4; // Size: 12, Type: struct FRotator
			constexpr auto _landed = 0x2e0; // Size: 1, Type: bool
			constexpr auto _fallingSpeed = 0x2e4; // Size: 4, Type: float
			constexpr auto _timeRemaining = 0x2e8; // Size: 4, Type: int32_t
			constexpr auto _flareParticlesEnabled = 0x2ec; // Size: 1, Type: bool
			constexpr auto _cargoLockers = 0x2f0; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
	}
} 
