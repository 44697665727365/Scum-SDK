namespace offsets
{
	namespace UPaperTerrainComponent
	{
			constexpr auto TerrainMaterial = 0x450; // Size: 8, Type: struct UPaperTerrainMaterial*
			constexpr auto bClosedSpline = 0x458; // Size: 1, Type: bool
			constexpr auto bFilledSpline = 0x459; // Size: 1, Type: bool
			constexpr auto AssociatedSpline = 0x460; // Size: 8, Type: struct UPaperTerrainSplineComponent*
			constexpr auto randomSeed = 0x468; // Size: 4, Type: int32_t
			constexpr auto SegmentOverlapAmount = 0x46c; // Size: 4, Type: float
			constexpr auto TerrainColor = 0x470; // Size: 16, Type: struct FLinearColor
			constexpr auto ReparamStepsPerSegment = 0x480; // Size: 4, Type: int32_t
			constexpr auto SpriteCollisionDomain = 0x484; // Size: 1, Type: char ESpriteCollisionMode
			constexpr auto CollisionThickness = 0x488; // Size: 4, Type: float
			constexpr auto CachedBodySetup = 0x490; // Size: 8, Type: struct UBodySetup*
	}
} 
