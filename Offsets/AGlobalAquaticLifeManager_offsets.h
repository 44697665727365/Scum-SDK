namespace offsets
{
	namespace AGlobalAquaticLifeManager
	{
			constexpr auto _updateRegisteredPrisonersTickTime = 0x220; // Size: 4, Type: float
			constexpr auto _fishSpawningVolumes = 0x1618; // Size: 80, Type: struct TMap<int64_t, struct FAquaticLifeSpawningVolumeDescription>
			constexpr auto _localFishSchoolManagerRelevancyRange = 0x1688; // Size: 4, Type: float
			constexpr auto _distanceBetweenLocalFishSchoolManagers = 0x168c; // Size: 4, Type: float
			constexpr auto _localFishSchoolManagerTickTime = 0x1690; // Size: 4, Type: float
			constexpr auto _localFishSchoolManagerDestructionTime = 0x1694; // Size: 4, Type: float
			constexpr auto _prisonerWaterImmersionRelevancyThreshold = 0x1698; // Size: 4, Type: float
			constexpr auto _waterSplinePitchThresholdForSchools = 0x169c; // Size: 4, Type: float
			constexpr auto _maxSpawnedSchools = 0x16a0; // Size: 4, Type: int32_t
			constexpr auto _localFishingZoneIndicatorManagerRelevancyRange = 0x16c0; // Size: 4, Type: float
			constexpr auto _localFishingZoneIndicatorManagerTickTime = 0x16c4; // Size: 4, Type: float
			constexpr auto _localFishingZoneIndicatorManagerDestructionTime = 0x16c8; // Size: 4, Type: float
			constexpr auto _indicatorClass = 0x16d0; // Size: 8, Type: AFishingZoneIndicator*
			constexpr auto _fishingPrecision = 0x16d8; // Size: 4, Type: float
			constexpr auto _weatherPercentageCurve = 0x16e0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _maxSpawnedIndicators = 0x16e8; // Size: 4, Type: int32_t
			constexpr auto _maxLargeAquaticAnimals = 0x1710; // Size: 4, Type: int32_t
			constexpr auto _possibleLargeAquaticAnimals = 0x1718; // Size: 16, Type: struct TArray<struct ULargeAquaticAnimalSpeciesData*>
			constexpr auto _distanceBetweenLargeAquaticAnimals = 0x1728; // Size: 4, Type: float
			constexpr auto _largeAquaticAnimalSpawningRangeMin = 0x172c; // Size: 4, Type: float
			constexpr auto _largeAquaticAnimalSpawningRangeMax = 0x1730; // Size: 4, Type: float
			constexpr auto _requiredTimeInWaterToSpawnLargeAquaticAnimal = 0x1734; // Size: 4, Type: float
			constexpr auto _requiredTimeInWaterWhileBleedingToSpawnLargeAquaticAnimal = 0x1738; // Size: 4, Type: float
			constexpr auto _timeToReenableLargeAquaticAnimalSpawnZone = 0x173c; // Size: 4, Type: float
	}
} 
