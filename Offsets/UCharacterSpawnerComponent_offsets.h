namespace offsets
{
	namespace UCharacterSpawnerComponent
	{
			constexpr auto OverrideDefaultProbability = 0x1f8; // Size: 1, Type: bool
			constexpr auto Probability = 0x1fc; // Size: 4, Type: float
			constexpr auto OverrideDefaultRespawnTime = 0x200; // Size: 1, Type: bool
			constexpr auto RespawnTime = 0x204; // Size: 4, Type: float
			constexpr auto MinCharactersToSpawn = 0x208; // Size: 4, Type: int32_t
			constexpr auto MaxCharactersToSpawn = 0x20c; // Size: 4, Type: int32_t
			constexpr auto SpawnerMarkers = 0x210; // Size: 16, Type: struct TArray<struct FCharacterSpawnerMarker>
	}
} 
