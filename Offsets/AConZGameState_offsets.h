namespace offsets
{
	namespace AConZGameState
	{
			constexpr auto RespawnSettings = 0x2e0; // Size: 8, Type: struct URespawnSettings*
			constexpr auto _craftingDatabase = 0x318; // Size: 8, Type: struct UCraftingDatabase*
			constexpr auto _architecturalCategoriesDatabase = 0x320; // Size: 8, Type: struct UArchitecturalCategoriesDatabase*
			constexpr auto _registeredCharacters = 0x348; // Size: 16, Type: struct TArray<struct AConZCharacter*>
			constexpr auto _squads = 0x3a8; // Size: 16, Type: struct TArray<struct AConZSquad*>
			constexpr auto _currentDroneTargetDispatcherMap = 0x458; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AConZCharacter>, int32_t>
			constexpr auto _droneTargetDispatcherHistoryMap = 0x4a8; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AConZCharacter>, int32_t>
			constexpr auto _droneTargetVisits = 0x4f8; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AConZCharacter>, struct UDroneTargetData*>
			constexpr auto _ladderMarkersRegistryClass = 0x548; // Size: 8, Type: ALadderMarkersRegistry*
			constexpr auto _ladderMarkersRegistry = 0x550; // Size: 8, Type: struct ALadderMarkersRegistry*
			constexpr auto _waterSplineRegistryClass = 0x558; // Size: 8, Type: AConZWaterSplineRegistry*
			constexpr auto _waterSplineRegistry = 0x560; // Size: 8, Type: struct AConZWaterSplineRegistry*
			constexpr auto _remoteSensorRegistry = 0x570; // Size: 8, Type: struct URemoteSensorRegistry*
			constexpr auto _replenishableResourceManager = 0x5c0; // Size: 8, Type: struct UReplenishableResourceManager*
			constexpr auto _restorableMeshInstancesManager = 0x5c8; // Size: 8, Type: struct URestorableMeshInstancesManager*
			constexpr auto _resourceLockingManager = 0x5d0; // Size: 8, Type: struct UResourceLockingManager*
			constexpr auto _itemRegistry = 0x5d8; // Size: 8, Type: struct UItemRegistry*
			constexpr auto _customZoneRegistry = 0x5e0; // Size: 8, Type: struct UCustomZoneRegistry*
			constexpr auto _gameResourceContainerProxyRegistry = 0x5e8; // Size: 8, Type: struct UGameResourceContainerProxyRegistry*
			constexpr auto _zoneRegistry = 0x5f0; // Size: 8, Type: struct UZoneRegistry*
			constexpr auto _staticDoorReplicator = 0x5f8; // Size: 8, Type: struct UStaticDoorReplicator*
			constexpr auto _bankAccountRegistry = 0x600; // Size: 8, Type: struct UBankAccountRegistry*
			constexpr auto _prisonerKillRegistry = 0x6d8; // Size: 80, Type: struct TMap<struct FDbIntegerId, struct FDbIntegerId>
			constexpr auto _customMapBorderClass = 0x728; // Size: 8, Type: ACustomMapBorder*
			constexpr auto _tournamentClass = 0x730; // Size: 8, Type: ATournament*
			constexpr auto _customMapBorder = 0x738; // Size: 8, Type: struct ACustomMapBorder*
			constexpr auto _tournament = 0x740; // Size: 8, Type: struct ATournament*
			constexpr auto _areLockedLootContainersEnabled = 0x749; // Size: 1, Type: bool
	}
} 
