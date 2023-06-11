namespace offsets
{
	namespace APlantGrowthDisplay
	{
			constexpr auto _plantSpecies = 0x220; // Size: 8, Type: struct UPlantSpecies*
			constexpr auto _animateGrowth = 0x228; // Size: 1, Type: bool
			constexpr auto _growthSpeed = 0x22c; // Size: 4, Type: float
			constexpr auto _growthPercentage = 0x230; // Size: 4, Type: float
			constexpr auto _dehydration = 0x234; // Size: 4, Type: float
			constexpr auto _pestsIntensity = 0x238; // Size: 4, Type: float
			constexpr auto _diseasesIntensity = 0x23c; // Size: 4, Type: float
			constexpr auto _stageText = 0x240; // Size: 16, Type: struct FString
			constexpr auto _pestsParticleSystem = 0x250; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto _pestsParticleComponent = 0x258; // Size: 8, Type: struct UNiagaraComponent*
	}
} 
