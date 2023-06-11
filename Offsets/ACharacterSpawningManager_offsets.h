namespace offsets
{
	namespace ACharacterSpawningManager
	{
			constexpr auto _spawnableCharacters = 0x220; // Size: 16, Type: struct TArray<struct FPawnCharacterInfo>
			constexpr auto _managerProcessUpdateTime = 0x230; // Size: 4, Type: float
			constexpr auto _spawnUpdateTime = 0x234; // Size: 4, Type: float
			constexpr auto _spawnTriggerGroupUpdateTime = 0x238; // Size: 4, Type: float
			constexpr auto _spawnTriggerGroupRadius = 0x23c; // Size: 4, Type: float
			constexpr auto _spawnTriggerGroupProximityQueryRadius = 0x240; // Size: 4, Type: float
			constexpr auto _interiorSearchDistanceThreshold = 0x244; // Size: 4, Type: float
			constexpr auto _exteriorSpawnerGroupsSpawnCooldownTime = 0x248; // Size: 4, Type: float
			constexpr auto _interiorSpawnerGroupsSpawnCooldownTime = 0x24c; // Size: 4, Type: float
			constexpr auto _baseElementQueryDistance = 0x250; // Size: 4, Type: float
			constexpr auto _exteriorSpawnerGroupsProbability = 0x254; // Size: 4, Type: float
			constexpr auto _interiorSpawnerGroupsProbability = 0x258; // Size: 4, Type: float
			constexpr auto _disableSerialization = 0x25c; // Size: 1, Type: bool
			constexpr auto _startSpawnerGroupCooldownAfterSpawning = 0x25d; // Size: 1, Type: bool
			constexpr auto _startSpawnerGroupCooldownAfterEnteringInterior = 0x25e; // Size: 1, Type: bool
			constexpr auto _referencedPawnClasses = 0x3a8; // Size: 80, Type: struct TSet<APawn*>
			constexpr auto _disabledPawnClasses = 0x3f8; // Size: 80, Type: struct TSet<APawn*>
			constexpr auto _suicidePuppetClasses = 0x448; // Size: 80, Type: struct TSet<APawn*>
	}
} 
