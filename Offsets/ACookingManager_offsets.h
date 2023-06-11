namespace offsets
{
	namespace ACookingManager
	{
			constexpr auto _cookingUtilitySlots = 0x220; // Size: 448, Type: struct FCookingUtilitySlotArray
			constexpr auto _mainPointSnappedCookingUtilities = 0x450; // Size: 200, Type: struct FMainPointSnappedUtilities
			constexpr auto _netRelevancyRadius = 0x608; // Size: 4, Type: float
			constexpr auto _newClientCheckTimeInterval = 0x60c; // Size: 4, Type: float
			constexpr auto _databaseUpdateInterval = 0x610; // Size: 4, Type: float
			constexpr auto _utilitySnapDistance = 0x614; // Size: 4, Type: float
			constexpr auto _maxMainPointSnapDistance = 0x618; // Size: 4, Type: float
			constexpr auto _proxyMeshSpawnRadius = 0x61c; // Size: 4, Type: float
			constexpr auto _proxyMeshReleaseRadius = 0x620; // Size: 4, Type: float
			constexpr auto _proxyMeshMap = 0x648; // Size: 80, Type: struct TMap<struct FDbIntegerId, struct FCookingFoodProxyMesh>
	}
} 
