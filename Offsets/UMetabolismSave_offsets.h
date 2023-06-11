namespace offsets
{
	namespace UMetabolismSave
	{
			constexpr auto LeanBodyMass = 0x28; // Size: 4, Type: float
			constexpr auto DigestionItems = 0x30; // Size: 16, Type: struct TArray<struct FDigestionItemSave>
			constexpr auto ForeignSubstances = 0x40; // Size: 16, Type: struct TArray<struct FForeignSubstanceSave>
			constexpr auto AbsorbedSubstances = 0x50; // Size: 208, Type: struct FSubstancesData
			constexpr auto FecesVolumeInIntestine = 0x120; // Size: 208, Type: struct FSubstancesData
			constexpr auto FecesVolumeInColon = 0x1f0; // Size: 208, Type: struct FSubstancesData
			constexpr auto UrineVolumeInBladder = 0x2c0; // Size: 4, Type: float
	}
} 
