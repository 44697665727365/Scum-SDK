namespace offsets
{
	namespace UPlantSpecies
	{
			constexpr auto SpeciesName = 0x30; // Size: 24, Type: struct FText
			constexpr auto SeedsOptimaltemperature = 0x48; // Size: 8, Type: struct FFloatInterval
			constexpr auto GrowthOptimalTemperature = 0x50; // Size: 8, Type: struct FFloatInterval
			constexpr auto StageGrowthTimeGameHours = 0x58; // Size: 4, Type: float
			constexpr auto LastStage = 0x5c; // Size: 1, Type: uint8_t 
			constexpr auto LastStageLifetime = 0x60; // Size: 4, Type: float
			constexpr auto LastStageDeathStartPercent = 0x64; // Size: 4, Type: float
			constexpr auto Pests = 0x68; // Size: 16, Type: struct TArray<struct UPlantPestSpecies*>
			constexpr auto Diseases = 0x78; // Size: 16, Type: struct TArray<struct UPlantDiseaseSpecies*>
			constexpr auto Seed = 0x88; // Size: 8, Type: AItem*
			constexpr auto PlantMesh = 0x90; // Size: 112, Type: struct FPlantMeshData
	}
} 
