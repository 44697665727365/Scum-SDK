namespace offsets
{
	namespace AFoodItem
	{
			constexpr auto AccumulatedFatigueBonus = 0x910; // Size: 4, Type: float
			constexpr auto ThermalConductivityFactor = 0x914; // Size: 4, Type: float
			constexpr auto FreezingTemperature = 0x918; // Size: 4, Type: float
			constexpr auto RoomTemperature = 0x91c; // Size: 4, Type: float
			constexpr auto Spoilable = 0x920; // Size: 1, Type: bool
			constexpr auto ShelfLife = 0x924; // Size: 4, Type: float
			constexpr auto SpoilageRateFrozen = 0x928; // Size: 4, Type: float
			constexpr auto SpoilageRateModifierWhileSealed = 0x92c; // Size: 4, Type: float
			constexpr auto IsConsumable = 0x930; // Size: 1, Type: bool
			constexpr auto CanCheckTaste = 0x931; // Size: 1, Type: bool
			constexpr auto SteamComponent = 0x938; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto SteamParticles = 0x940; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SmokeComponent = 0x948; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto SmokeParticles = 0x950; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ItemOpenedMesh = 0x958; // Size: 8, Type: struct UStaticMesh*
			constexpr auto ItemEmptyMesh = 0x960; // Size: 8, Type: struct UStaticMesh*
			constexpr auto StartEatingAudioEvent = 0x968; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopEatingAudioEvent = 0x970; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartCookingAudioEvent = 0x978; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopCookingAudioEvent = 0x980; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _resourceTypeForConsumption = 0x988; // Size: 8, Type: UGameResourceType*
			constexpr auto _caloriesBonus = 0x990; // Size: 4, Type: float
			constexpr auto _catchSicknessModifier = 0x994; // Size: 4, Type: float
			constexpr auto _itemOpened = 0x998; // Size: 1, Type: bool
			constexpr auto _temperature = 0x99c; // Size: 4, Type: float
	}
} 
