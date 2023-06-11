namespace offsets
{
	namespace ATradePost
	{
			constexpr auto _traderMarkers = 0x3b0; // Size: 16, Type: struct TArray<struct FTraderMarker>
			constexpr auto _locationMarkers = 0x3c0; // Size: 16, Type: struct TArray<struct FTraderLocationMarker>
			constexpr auto _spawnedTraders = 0x3d0; // Size: 16, Type: struct TArray<struct ATrader*>
			constexpr auto _spawnedDepots = 0x3f0; // Size: 80, Type: struct TMap<struct FDbIntegerId, struct FSpawnedDepotsHelperStruct>
	}
} 
