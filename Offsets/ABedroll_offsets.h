namespace offsets
{
	namespace ABedroll
	{
			constexpr auto _occupiedUserProfileId = 0x9b8; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _occupantOnline = 0x9c0; // Size: 1, Type: bool
			constexpr auto _meshInHands = 0x9c8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _materialInHands = 0x9d0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _meshOnGround = 0x9d8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _materialOnGround = 0x9e0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _maxRestHeight = 0x9e8; // Size: 4, Type: float
			constexpr auto _damageOverTimeWhenOccupied = 0x9ec; // Size: 4, Type: float
			constexpr auto _autoDestructTimeWhenOccupied = 0x9f0; // Size: 4, Type: float
	}
} 
