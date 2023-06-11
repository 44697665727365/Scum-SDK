namespace offsets
{
	namespace AMechanoidsManager
	{
			constexpr auto _droneSpawnClass = 0x240; // Size: 8, Type: ADrone*
			constexpr auto _droneSpawnDistance = 0x248; // Size: 4, Type: float
			constexpr auto _droneSpawnHeight = 0x24c; // Size: 4, Type: float
			constexpr auto _droneCheckForNearbyPlayerDistance = 0x250; // Size: 4, Type: float
			constexpr auto _droneInitialVisitTime = 0x254; // Size: 8, Type: struct FDroneVisitTimeData
			constexpr auto _droneVisitClusterRadius = 0x25c; // Size: 4, Type: float
			constexpr auto _weightPerSightingMode[3] = 0x260; // Size: 12, Type: float
			constexpr auto _droneVisitTimeDataPerSightingMode[3] = 0x26c; // Size: 24, Type: struct FDroneVisitTimeData
	}
} 
