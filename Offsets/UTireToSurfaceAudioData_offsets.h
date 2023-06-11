namespace offsets
{
	namespace UTireToSurfaceAudioData
	{
			constexpr auto _maxSoundRange = 0x30; // Size: 4, Type: float
			constexpr auto _movementStarted = 0x38; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _movementStopped = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _noSurface = 0x48; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _soundGroups = 0x50; // Size: 16, Type: struct TArray<struct FTireSurfaceAudioEntry>
	}
} 
