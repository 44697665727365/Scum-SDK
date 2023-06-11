namespace offsets
{
	namespace AConZWorldSettings
	{
			constexpr auto WeatherController2 = 0x388; // Size: 8, Type: struct AWeatherController2*
			constexpr auto WetnessManager = 0x390; // Size: 8, Type: struct AWetnessManager*
			constexpr auto GameEventManager = 0x398; // Size: 8, Type: struct AGameEventManager*
			constexpr auto WorldEventManager = 0x3a0; // Size: 8, Type: struct AWorldEventManager*
			constexpr auto BuildingManager = 0x3a8; // Size: 8, Type: struct ABuildingManager*
			constexpr auto ItemContainerManager = 0x3b0; // Size: 8, Type: struct AItemContainerManager*
			constexpr auto EconomyManager = 0x3b8; // Size: 8, Type: struct AConZEconomyManager*
			constexpr auto FarmingGardenManager = 0x3c0; // Size: 8, Type: struct AGardenManager*
			constexpr auto RadiationManager = 0x3c8; // Size: 8, Type: struct ARadiationManager*
			constexpr auto HuntingManager = 0x3d0; // Size: 8, Type: struct AHuntingManager*
			constexpr auto CookingManager = 0x3d8; // Size: 8, Type: struct ACookingManager*
			constexpr auto MugshotRoom = 0x3e0; // Size: 8, Type: struct AMugshotRoom*
			constexpr auto RadioStations = 0x3e8; // Size: 16, Type: struct TArray<struct ARadioStation*>
			constexpr auto RadioNoiseStartEvent = 0x3f8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RadioNoiseStopEvent = 0x400; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RadioStopEvent = 0x408; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RadioStationChangeNoiseEvent = 0x410; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto EntitySystemSettings = 0x418; // Size: 8, Type: struct UEntitySystemSettings*
			constexpr auto ItemSpawningSettings = 0x420; // Size: 68, Type: struct FItemSpawningSettings
			constexpr auto IslandBoundsVolume = 0x468; // Size: 8, Type: struct AVolume*
			constexpr auto UseVirtualizationSystem = 0x470; // Size: 1, Type: bool
			constexpr auto WorldBounds = 0x474; // Size: 20, Type: struct FBox2D
			constexpr auto HeightMapGameplayTag = 0x488; // Size: 8, Type: struct FGameplayTag
			constexpr auto MapPropertiesGameplayTag = 0x490; // Size: 8, Type: struct FGameplayTag
			constexpr auto GerstnerWaveOcclusionPropertiesGameplayTag = 0x498; // Size: 8, Type: struct FGameplayTag
			constexpr auto OceanOpacityGameplayTag = 0x4a0; // Size: 8, Type: struct FGameplayTag
			constexpr auto PrisonerSpawnEquipment = 0x4a8; // Size: 16, Type: struct TArray<struct FConZPrisonerSpawnEquipmentProperties>
			constexpr auto SpawnInAir = 0x4b8; // Size: 1, Type: bool
			constexpr auto FirstSpawnAltitude = 0x4bc; // Size: 4, Type: float
			constexpr auto RespawnAltitude = 0x4c0; // Size: 4, Type: float
			constexpr auto MapMinMaxElevation = 0x4c4; // Size: 8, Type: struct FFloatInterval
			constexpr auto AvailabilityGrid = 0x4d0; // Size: 8, Type: struct UAvailabilityGrid*
			constexpr auto _availabilityGridClass = 0x540; // Size: 8, Type: UAvailabilityGrid*
			constexpr auto _vehicleSpawnPoints = 0x548; // Size: 16, Type: struct TArray<struct FVehicleSpawnPointData>
	}
} 
