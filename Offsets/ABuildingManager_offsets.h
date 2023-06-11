namespace offsets
{
	namespace ABuildingManager
	{
			constexpr auto _buildings = 0x268; // Size: 80, Type: struct TMap<struct ABuilding*, struct FBox2D>
			constexpr auto _buildingsOwned = 0x2b8; // Size: 80, Type: struct TMap<struct FDbIntegerId, struct FBuildingsArray>
			constexpr auto _buildingsDataRepHelper = 0x310; // Size: 112, Type: struct FBuildingsReplicationHelper
	}
} 
