namespace offsets
{
	namespace ACustomMapBorder
	{
			constexpr auto Mesh = 0x220; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto TournamentMesh = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Material = 0x230; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _minCustomMapSize = 0x238; // Size: 8, Type: struct FVector2D
			constexpr auto _isInTournamentMode = 0x240; // Size: 1, Type: bool
			constexpr auto _tournamentModeCompletionPercentage = 0x244; // Size: 4, Type: float
			constexpr auto _nearingCompletionPercentage = 0x248; // Size: 4, Type: float
			constexpr auto _minTournamentMapSize = 0x254; // Size: 8, Type: struct FVector2D
			constexpr auto _tournamentFinalBorderDimensions = 0x25c; // Size: 20, Type: struct FBox2D
			constexpr auto _active = 0x270; // Size: 1, Type: bool
			constexpr auto _customMapDimensions = 0x274; // Size: 20, Type: struct FBox2D
	}
} 
