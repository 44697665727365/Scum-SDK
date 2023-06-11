namespace offsets
{
	namespace AAmbientSounds
	{
			constexpr auto MinCameraLocationDeltaForUpdate = 0x220; // Size: 4, Type: float
			constexpr auto ForestMask = 0x224; // Size: 8, Type: struct FGameplayTag
			constexpr auto ForestMaskSearchRadius = 0x22c; // Size: 4, Type: float
			constexpr auto CoastalForestAudioEvent = 0x230; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ContinentalForest1AudioEvent = 0x238; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ContinentalForest2AudioEvent = 0x240; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ContinentalForest3AudioEvent = 0x248; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto UndergroundAudioEvent = 0x250; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto CityMask = 0x258; // Size: 8, Type: struct FGameplayTag
			constexpr auto CityMaskSearchRadius = 0x260; // Size: 4, Type: float
			constexpr auto CityAudioEvent = 0x268; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto LargeVillageAudioEvent = 0x270; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto SmallVillageAudioEvent = 0x278; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto IndustrialAreaAudioEvent = 0x280; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
