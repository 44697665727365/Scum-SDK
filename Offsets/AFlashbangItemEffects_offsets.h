namespace offsets
{
	namespace AFlashbangItemEffects
	{
			constexpr auto _explosionParticles = 0x220; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionCameraShakeClass = 0x228; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto _explosionAudioEvent = 0x230; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _startStunnedSoundEffectsAudioEvent = 0x238; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _stopStunnedSoundEffectsAudioEvent = 0x240; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _minFlashbangDurationToStartStunnedSoundEffects = 0x248; // Size: 4, Type: float
			constexpr auto _fullFlashDuration = 0x24c; // Size: 4, Type: float
			constexpr auto _flashFadeOutDuration = 0x250; // Size: 4, Type: float
			constexpr auto _flashRadius = 0x254; // Size: 4, Type: float
			constexpr auto _flashLineTraceDistance = 0x258; // Size: 4, Type: float
	}
} 
