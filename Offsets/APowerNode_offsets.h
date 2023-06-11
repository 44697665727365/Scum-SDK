namespace offsets
{
	namespace APowerNode
	{
			constexpr auto _root = 0x220; // Size: 8, Type: struct USceneComponent*
			constexpr auto _mesh = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _cableMeshSet = 0x230; // Size: 8, Type: struct UPowerCableMeshSet*
			constexpr auto _maxCablesDrawDistance = 0x238; // Size: 4, Type: float
			constexpr auto _connectors = 0x240; // Size: 16, Type: struct TArray<struct FPowerNodeConnector>
			constexpr auto _connectionTarget = 0x250; // Size: 8, Type: struct APowerNode*
	}
} 
