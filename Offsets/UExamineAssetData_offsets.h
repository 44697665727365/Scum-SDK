namespace offsets
{
	namespace UExamineAssetData
	{
			constexpr auto ExamineData = 0x30; // Size: 176, Type: struct FExamineItemSpawnerData
			constexpr auto SpawnerPreset = 0xe0; // Size: 160, Type: struct FItemSpawnerPresetWithOverrides
			constexpr auto StartExamineAudioEvent = 0x180; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopExamineAudioEvent = 0x188; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto noiseLevel = 0x190; // Size: 1, Type: uint8_t 
			constexpr auto CanStore = 0x191; // Size: 1, Type: bool
			constexpr auto CanSave = 0x192; // Size: 1, Type: bool
	}
} 
