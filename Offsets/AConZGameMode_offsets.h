namespace offsets
{
	namespace AConZGameMode
	{
			constexpr auto _doorLockingRegistry = 0x368; // Size: 8, Type: struct UDoorLockingRegistry*
			constexpr auto _vehicleServiceRegistry = 0x370; // Size: 8, Type: struct UVehicleServiceRegistry*
			constexpr auto _prisonerClassToSpawn = 0x378; // Size: 8, Type: APrisoner*
			constexpr auto _droneClassToSpawn = 0x380; // Size: 8, Type: ADrone*
			constexpr auto _itemSpawningManagerClass = 0x490; // Size: 8, Type: AItemSpawningManager*
			constexpr auto _itemSpawningManager = 0x498; // Size: 8, Type: struct AItemSpawningManager*
			constexpr auto _itemVirtualizationManagerClass = 0x4a0; // Size: 8, Type: AItemVirtualizationManager*
			constexpr auto _itemVirtualizationManager = 0x4a8; // Size: 8, Type: struct AItemVirtualizationManager*
			constexpr auto _vehicleSpawningManagerClass2 = 0x4b0; // Size: 8, Type: AVehicleSpawningManager2*
			constexpr auto _vehicleSpawningManager2 = 0x4b8; // Size: 8, Type: struct AVehicleSpawningManager2*
			constexpr auto _reportingManagerClass = 0x4c0; // Size: 8, Type: AReportingManager*
			constexpr auto _reportingManager = 0x4c8; // Size: 8, Type: struct AReportingManager*
			constexpr auto _characterSpawningManagerClass = 0x4d0; // Size: 8, Type: ACharacterSpawningManager*
			constexpr auto _characterSpawningManager = 0x4d8; // Size: 8, Type: struct ACharacterSpawningManager*
			constexpr auto _globalAquaticLifeManagerClass = 0x4e0; // Size: 8, Type: AGlobalAquaticLifeManager*
			constexpr auto _globalAquaticLifeManager = 0x4e8; // Size: 8, Type: struct AGlobalAquaticLifeManager*
			constexpr auto _globalGuardedZoneManagerClass = 0x4f0; // Size: 8, Type: AGlobalGuardedZoneManager*
			constexpr auto _globalGuardedZoneManager = 0x4f8; // Size: 8, Type: struct AGlobalGuardedZoneManager*
			constexpr auto _achievementsManagerServerClass = 0x500; // Size: 8, Type: AAchievementsManagerServer*
			constexpr auto _achievementsManagerServer = 0x508; // Size: 8, Type: struct AAchievementsManagerServer*
			constexpr auto _missionLevelManagerClass = 0x510; // Size: 8, Type: AMissionLevelManager*
			constexpr auto _missionLevelManager = 0x518; // Size: 8, Type: struct AMissionLevelManager*
			constexpr auto _missionSchedulerClass = 0x520; // Size: 8, Type: AMissionScheduler*
			constexpr auto _missionScheduler = 0x528; // Size: 8, Type: struct AMissionScheduler*
			constexpr auto _survivalStatsHandlerClass = 0x530; // Size: 8, Type: ASurvivalStatsHandler*
			constexpr auto _survivalStatsHandler = 0x538; // Size: 8, Type: struct ASurvivalStatsHandler*
			constexpr auto _heatSourceManagerClass = 0x540; // Size: 8, Type: AHeatSourceManager*
			constexpr auto _heatSourceManager = 0x548; // Size: 8, Type: struct AHeatSourceManager*
			constexpr auto _baseManagerClass = 0x550; // Size: 8, Type: AConZBaseManager*
			constexpr auto _baseManager = 0x558; // Size: 8, Type: struct AConZBaseManager*
			constexpr auto _rainCollectionManager = 0x560; // Size: 8, Type: struct URainCollectionManager*
			constexpr auto _ladderMarkersReplicatorClass = 0x568; // Size: 8, Type: ALadderMarkersReplicator*
			constexpr auto _ladderMarkersReplicator = 0x570; // Size: 8, Type: struct ALadderMarkersReplicator*
			constexpr auto _effectOverTimeDealerClass = 0x578; // Size: 8, Type: AEffectOverTimeDealer*
			constexpr auto _effectOverTimeDealer = 0x580; // Size: 8, Type: struct AEffectOverTimeDealer*
			constexpr auto _notificationManagerClass = 0x588; // Size: 8, Type: ANotificationsManager*
			constexpr auto _notificationManager = 0x590; // Size: 8, Type: struct ANotificationsManager*
			constexpr auto _voteSystemManagerClass = 0x598; // Size: 8, Type: AVoteSystemManager*
			constexpr auto _voteSystemManager = 0x5a0; // Size: 8, Type: struct AVoteSystemManager*
			constexpr auto _serverAnalyticsManagerClass = 0x5a8; // Size: 8, Type: AServerAnalyticsManager*
			constexpr auto _serverAnalyticsManager = 0x5b0; // Size: 8, Type: struct AServerAnalyticsManager*
			constexpr auto _aiDetectionTimerHandlerClass = 0x5b8; // Size: 8, Type: AAIDetectionTimerHandler*
			constexpr auto _bcuLockRegistryClass = 0x5c0; // Size: 8, Type: ABCULockRegistry*
			constexpr auto _bcuLockRegistry = 0x5c8; // Size: 8, Type: struct ABCULockRegistry*
			constexpr auto _worldDoorOwnershipManager = 0x5d0; // Size: 8, Type: struct UWorldDoorOwnershipManager*
			constexpr auto _aiDetectionTimerHandler = 0x5d8; // Size: 8, Type: struct AAIDetectionTimerHandler*
			constexpr auto _serverResponse = 0x5e0; // Size: 8, Type: struct UDedicatedServerResponse*
			constexpr auto _chatSpamProtectionRules = 0x5e8; // Size: 8, Type: struct UChatSpamProtectionRules*
			constexpr auto _spawnEquipment = 0x5f0; // Size: 16, Type: struct TArray<struct UPrisonerSpawnEquipment*>
			constexpr auto _spawnParameterTag_AerialSpawn = 0x600; // Size: 8, Type: struct FGameplayTag
			constexpr auto _spawnParameterTag_ColdClimate = 0x608; // Size: 8, Type: struct FGameplayTag
			constexpr auto _spawnParameterTag_SupporterPack1 = 0x610; // Size: 8, Type: struct FGameplayTag
			constexpr auto _spawnParameterTag_Tournament = 0x618; // Size: 8, Type: struct FGameplayTag
			constexpr auto _maxSpawningAdjustmentDistance = 0x620; // Size: 4, Type: float
			constexpr auto _spawningAdjustmentRadialIterations = 0x624; // Size: 4, Type: int32_t
			constexpr auto _spawningAdjustmentVerticalIterations = 0x628; // Size: 4, Type: int32_t
			constexpr auto _spawningAdjustmentCheckingFrequency = 0x62c; // Size: 4, Type: int32_t
			constexpr auto _localChatDistance = 0x630; // Size: 4, Type: float
	}
} 
