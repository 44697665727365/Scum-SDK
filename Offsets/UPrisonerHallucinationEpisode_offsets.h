namespace offsets
{
	namespace UPrisonerHallucinationEpisode
	{
			constexpr auto _begunAudioEvent = 0x28; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _endedAudioEvent = 0x30; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _visualEffectIntensityVsTime = 0x38; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _illusionsPreSpawnEffectsDelay = 0xc0; // Size: 4, Type: float
			constexpr auto _illusionsPreSpawnAudioEvent = 0xc8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _spawnIllusionsDelay = 0xd0; // Size: 4, Type: float
			constexpr auto _loadedIllusionClasses = 0x100; // Size: 16, Type: struct TArray<UObject*>
	}
} 
