namespace offsets
{
	namespace AVehicleSpawningManager2
	{
			constexpr auto _maxAllowedTimeInForbiddenZones = 0x220; // Size: 4, Type: float
			constexpr auto _forbiddenZoneCheckInterval = 0x224; // Size: 4, Type: float
			constexpr auto _relevantSpawnerGroupsUpdateTimeElapsed = 0x22c; // Size: 4, Type: float
			constexpr auto _minPlayerLocationDeltaToUpdateRelevantSpawners = 0x234; // Size: 4, Type: float
			constexpr auto _relevantSpawnerGroupsUpdateTimeBudget = 0x238; // Size: 4, Type: float
			constexpr auto _defaultSpawnerNetCullDistance = 0x23c; // Size: 4, Type: float
			constexpr auto _alwaysUseDefaultSpawnerNetCullDistance = 0x240; // Size: 1, Type: bool
			constexpr auto _numDaysToKeepSpawnerAliveIfVehicleIsInactive = 0x244; // Size: 4, Type: float
			constexpr auto _spawnerTasksProcessingTimeElapsed = 0x248; // Size: 4, Type: float
			constexpr auto _spawnerTasksProcessingTimeBudget = 0x250; // Size: 4, Type: float
			constexpr auto _addSpawnerUpdateInterval = 0x254; // Size: 4, Type: float
			constexpr auto _relevantSpawnersUpdateInterval = 0x25c; // Size: 4, Type: float
			constexpr auto _autoSaveCheckIntervalForMovingVehicles = 0x264; // Size: 4, Type: float
			constexpr auto _autoSaveIntervalForMovingVehicles = 0x26c; // Size: 4, Type: float
			constexpr auto _autoSaveCheckIntervalForStationaryVehicles = 0x270; // Size: 4, Type: float
			constexpr auto _autoSaveIntervalForStationaryVehicles = 0x278; // Size: 4, Type: float
			constexpr auto _manualSpawnPresetsMap = 0x280; // Size: 80, Type: struct TMap<struct FPrimaryAssetId, struct FVehicleManualSpawnPresetArray>
			constexpr auto _purchaseSpawnPresetsMap = 0x2d0; // Size: 80, Type: struct TMap<struct FPrimaryAssetId, struct UVehiclePreset*>
			constexpr auto _spawnGroupParentTag = 0x370; // Size: 8, Type: struct FGameplayTag
			constexpr auto _defaultMaxNumSpawnersPerSpawnGroup = 0x378; // Size: 4, Type: int32_t
			constexpr auto _minDistanceBetweenVisitorAndSpawnLocation = 0x470; // Size: 4, Type: float
			constexpr auto _spawnPointsSearchExtension = 0x474; // Size: 4, Type: float
			constexpr auto _preferredDistanceBetweenSpawners = 0x478; // Size: 4, Type: float
			constexpr auto _preferredDistanceBetweenSpawnersOfSameType = 0x47c; // Size: 4, Type: float
			constexpr auto _vehicleSpawnPoints = 0x480; // Size: 16, Type: struct TArray<struct FVehicleSpawnPointData>
	}
} 
