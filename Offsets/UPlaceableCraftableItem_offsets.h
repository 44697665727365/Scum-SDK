namespace offsets
{
	namespace UPlaceableCraftableItem
	{
			constexpr auto PlaceableActorOverride = 0x128; // Size: 8, Type: APlaceableActorBase*
			constexpr auto MaxPlacementAngle = 0x130; // Size: 4, Type: float
			constexpr auto AdjustRotation = 0x134; // Size: 1, Type: bool
			constexpr auto GroundOffsetWhilePlacing = 0x138; // Size: 4, Type: float
			constexpr auto MaxDistanceFromGroundWhilePlacing = 0x13c; // Size: 4, Type: float
			constexpr auto ReachabilityVerticalOffset = 0x140; // Size: 4, Type: float
			constexpr auto IgnoreFloatingCheckWhilePlacing = 0x144; // Size: 1, Type: bool
			constexpr auto PlacementLocationOffset = 0x148; // Size: 12, Type: struct FVector
			constexpr auto BoundsExtensionWhilePlacingMin = 0x154; // Size: 12, Type: struct FVector
			constexpr auto BoundsExtensionWhilePlacingMax = 0x160; // Size: 12, Type: struct FVector
			constexpr auto PlacementTracesBoundsExtension = 0x16c; // Size: 12, Type: struct FVector
			constexpr auto FloatingTracesBoundsExtension = 0x178; // Size: 12, Type: struct FVector
			constexpr auto FloatingTracesCenterOffset = 0x184; // Size: 12, Type: struct FVector
			constexpr auto MaxHeightAdjustmentWhilePlacing = 0x190; // Size: 4, Type: float
			constexpr auto MinHeightAdjustmentWhilePlacing = 0x194; // Size: 4, Type: float
			constexpr auto CanPlaceOnWater = 0x198; // Size: 1, Type: bool
			constexpr auto UseMeshCollisionForPlacement = 0x199; // Size: 1, Type: bool
			constexpr auto OnlyPlaceableInFriendlyFlagArea = 0x19a; // Size: 1, Type: bool
			constexpr auto CanPlaceInEnemyFlagArea = 0x19b; // Size: 1, Type: bool
			constexpr auto CheckBaseBuildingPlacementMask = 0x19c; // Size: 1, Type: bool
			constexpr auto MaxInstancesPerFlagArea = 0x1a0; // Size: 4, Type: int32_t
			constexpr auto PlacementAlgorithm = 0x1a4; // Size: 1, Type: uint8_t 
			constexpr auto MaxMissedPlacementTracesPercent = 0x1a8; // Size: 4, Type: float
			constexpr auto ShowDirectionIndicator = 0x1ac; // Size: 1, Type: bool
			constexpr auto DirectionIndicatorOffset = 0x1b0; // Size: 12, Type: struct FVector
			constexpr auto DirectionIndicatorRotation = 0x1bc; // Size: 4, Type: float
			constexpr auto DirectionIndicatorSize = 0x1c0; // Size: 4, Type: float
			constexpr auto OutlineMaterialBaseOffset = 0x1c4; // Size: 4, Type: float
			constexpr auto OutlineMaterialThinness = 0x1c8; // Size: 4, Type: float
			constexpr auto IsOutlineMaterialTwoSided = 0x1cc; // Size: 1, Type: bool
			constexpr auto PlacementAllowedMaterialOverride = 0x1d0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto PlacementDisallowedMaterialOverride = 0x1d8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OutlineMaterialOverride = 0x1e0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto DepthMaterialOverride = 0x1e8; // Size: 8, Type: struct UMaterialInterface*
	}
} 
