namespace offsets
{
	namespace AGlobalBirdSpawner2
	{
			constexpr auto MaxSpawnInstances = 0x220; // Size: 4, Type: int32_t
			constexpr auto MaxCoastalBirdSpawnPerPlayer = 0x224; // Size: 4, Type: int32_t
			constexpr auto MaxContinentalBirdSpawnPerPlayer = 0x228; // Size: 4, Type: int32_t
			constexpr auto CoastalBirds = 0x230; // Size: 16, Type: struct TArray<ABird2*>
			constexpr auto ContinentalBirds = 0x240; // Size: 16, Type: struct TArray<ABird2*>
			constexpr auto FlyingBirdSpawnAwayDistanceMin = 0x250; // Size: 4, Type: float
			constexpr auto FlyingBirdSpawnAwayDistanceMax = 0x254; // Size: 4, Type: float
			constexpr auto GroundBirdSpawnAwayDistanceMin = 0x258; // Size: 4, Type: float
			constexpr auto GroundBirdSpawnAwayDistanceMax = 0x25c; // Size: 4, Type: float
			constexpr auto MinSpawnInfrontDistance = 0x260; // Size: 4, Type: float
			constexpr auto BirdSpawnerMask = 0x264; // Size: 8, Type: struct FGameplayTag
			constexpr auto BulkSpawn = 0x26c; // Size: 4, Type: int32_t
			constexpr auto AllowedSurfaces = 0x270; // Size: 16, Type: struct TArray<char EPhysicalSurface>
			constexpr auto Sprite = 0x280; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto _birds = 0x290; // Size: 16, Type: struct TArray<struct ABird2*>
	}
} 
