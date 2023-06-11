namespace offsets
{
	namespace AHuntingManager
	{
			constexpr auto _huntInitTickBudgetInMilliseconds = 0x238; // Size: 4, Type: float
			constexpr auto _maxActiveHuntsNum = 0x23c; // Size: 4, Type: int32_t
			constexpr auto _daytimeSpawnMultipliers[4] = 0x240; // Size: 16, Type: float
			constexpr auto _huntingCluesPerAnimal = 0x250; // Size: 80, Type: struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>>
			constexpr auto _allowedClueSpawnSurfaces = 0x2a0; // Size: 16, Type: struct TArray<char EPhysicalSurface>
			constexpr auto _huntStartPlayerCheckRadius = 0x2b0; // Size: 4, Type: float
			constexpr auto _oldClueRemovalDistance = 0x2b4; // Size: 4, Type: float
			constexpr auto _huntFailureTime = 0x2b8; // Size: 4, Type: float
			constexpr auto _huntFailureAnimalDistance = 0x2bc; // Size: 4, Type: float
			constexpr auto _corpseLifetimeMinutes = 0x2c0; // Size: 4, Type: float
			constexpr auto _maxSpawnPointGenerationFailures = 0x2c4; // Size: 4, Type: int32_t
			constexpr auto _timeToPlaySoundAfterClueInteractionMin = 0x2c8; // Size: 4, Type: float
			constexpr auto _timeToPlaySoundAfterClueInteractionMax = 0x2cc; // Size: 4, Type: float
			constexpr auto _huntingBiomes = 0x2d0; // Size: 16, Type: struct TArray<struct FHuntingBiomeDescription>
	}
} 
