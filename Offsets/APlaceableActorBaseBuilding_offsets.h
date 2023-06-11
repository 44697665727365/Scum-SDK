namespace offsets
{
	namespace APlaceableActorBaseBuilding
	{
			constexpr auto _maxNumberOfTiles = 0x4e8; // Size: 4, Type: int32_t
			constexpr auto _maxHeightDifferenceForTiling = 0x4ec; // Size: 4, Type: float
			constexpr auto _maxTileHeightAdjustionUp = 0x4f0; // Size: 4, Type: float
			constexpr auto _maxTileHeightAdjustionDown = 0x4f4; // Size: 4, Type: float
			constexpr auto _tileSnappingAngle = 0x4f8; // Size: 4, Type: float
			constexpr auto _sizeVariatedTilesMaxHeightDifference = 0x4fc; // Size: 4, Type: float
			constexpr auto _maxGroundPointDistance = 0x500; // Size: 4, Type: float
			constexpr auto _groundPointsTraceHeight = 0x504; // Size: 4, Type: float
			constexpr auto _groundPointsTraceDepth = 0x508; // Size: 4, Type: float
			constexpr auto _maxPlacementLengthForSizeVariatedTiles = 0x50c; // Size: 4, Type: float
			constexpr auto _tilesData = 0x548; // Size: 24, Type: struct FTilesData
			constexpr auto _flagAreaMeshComponent = 0x560; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _primaryMaterialFriendlyFlag = 0x568; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _replicatedFirstPointLocation = 0x570; // Size: 12, Type: struct FVector
			constexpr auto _replicatedFirstPointRotation = 0x57c; // Size: 12, Type: struct FRotator
			constexpr auto _placementSubState = 0x588; // Size: 1, Type: uint8_t 
			constexpr auto _stateFlags = 0x589; // Size: 1, Type: uint8_t 
			constexpr auto _sizeVariationData = 0x5c0; // Size: 16, Type: struct TArray<struct FSizeVariatedTilesData>
	}
} 
