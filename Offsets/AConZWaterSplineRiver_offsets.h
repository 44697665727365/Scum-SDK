namespace offsets
{
	namespace AConZWaterSplineRiver
	{
			constexpr auto SplineMesh = 0x2b8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SplineMeshMaterialOverride = 0x2c0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SplineMeshCullingDistance = 0x2c8; // Size: 4, Type: float
			constexpr auto ClearRoll = 0x2cc; // Size: 1, Type: bool
			constexpr auto AutoCalculateMeshCount = 0x2cd; // Size: 1, Type: bool
			constexpr auto SplineMeshCount = 0x2d0; // Size: 4, Type: int32_t
			constexpr auto RefreshMesh = 0x2d4; // Size: 1, Type: bool
			constexpr auto ArmBatchEditWidth = 0x2d5; // Size: 1, Type: bool
			constexpr auto BatchEditWidth = 0x2d8; // Size: 4, Type: float
			constexpr auto ArmBatchEditMaxDepth = 0x2dc; // Size: 1, Type: bool
			constexpr auto BatchEditMaxDepth = 0x2e0; // Size: 4, Type: float
			constexpr auto ArmBatchEditSpeed = 0x2e4; // Size: 1, Type: bool
			constexpr auto BatchEditSpeed = 0x2e8; // Size: 4, Type: float
			constexpr auto ArmBatchEditOpacity = 0x2ec; // Size: 1, Type: bool
			constexpr auto BatchEditOpacity = 0x2f0; // Size: 4, Type: float
			constexpr auto ArmBatchEdit = 0x2f4; // Size: 1, Type: bool
			constexpr auto BatchEditReplace = 0x2f5; // Size: 1, Type: bool
			constexpr auto BatchEditAdd = 0x2f6; // Size: 1, Type: bool
			constexpr auto BatchEditMultiply = 0x2f7; // Size: 1, Type: bool
			constexpr auto BatchEditFlattenZ = 0x2f8; // Size: 1, Type: bool
			constexpr auto _splineMeshComponents = 0x300; // Size: 16, Type: struct TArray<struct USplineMeshComponent*>
	}
} 
