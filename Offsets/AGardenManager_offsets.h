namespace offsets
{
	namespace AGardenManager
	{
			constexpr auto NetRelevancyRadius = 0x230; // Size: 4, Type: float
			constexpr auto NearGardenDistance = 0x234; // Size: 4, Type: float
			constexpr auto _seedingStageData = 0x238; // Size: 96, Type: struct FPlantGrowthStageData
			constexpr auto _vegetatingStageData = 0x298; // Size: 96, Type: struct FPlantGrowthStageData
			constexpr auto _floweringStageData = 0x2f8; // Size: 96, Type: struct FPlantGrowthStageData
			constexpr auto _ripeningStageData = 0x358; // Size: 96, Type: struct FPlantGrowthStageData
			constexpr auto _gardenMinMaxSize = 0x3b8; // Size: 8, Type: struct FInt32Interval
			constexpr auto _gardens = 0x420; // Size: 16, Type: struct TArray<struct AGarden*>
			constexpr auto _updateTimestepSeconds = 0x460; // Size: 4, Type: float
			constexpr auto _minUpdateBatchCount = 0x464; // Size: 4, Type: uint32_t
			constexpr auto _dataSampleFadeSeconds = 0x468; // Size: 4, Type: float
			constexpr auto _heightDataSampleCount = 0x46c; // Size: 4, Type: uint32_t
			constexpr auto _pestsDiseasesCheckTimeHours = 0x470; // Size: 8, Type: struct FFloatInterval
			constexpr auto _weedCheckTimeHours = 0x478; // Size: 8, Type: struct FFloatInterval
			constexpr auto _pestsDiseasesGrowthTimeHours = 0x480; // Size: 4, Type: float
			constexpr auto _weedGrowthTimeHours = 0x484; // Size: 4, Type: float
			constexpr auto _pestsDiseasesSpreadTimeHours = 0x488; // Size: 4, Type: float
			constexpr auto _weedSpreadTimeHours = 0x48c; // Size: 4, Type: float
			constexpr auto _pestsDiseasesSpreadScaleThreshold = 0x490; // Size: 8, Type: struct FVector2D
			constexpr auto _weedSpreadScaleThreshold = 0x498; // Size: 8, Type: struct FVector2D
			constexpr auto _maxWaterLitersPerSlot = 0x4a0; // Size: 4, Type: float
			constexpr auto _maxWaterLitersFromRainPerSlot = 0x4a4; // Size: 4, Type: float
			constexpr auto _mainMPC = 0x4a8; // Size: 8, Type: struct UMaterialParameterCollection*
			constexpr auto _gardenMPC = 0x4b0; // Size: 8, Type: struct UMaterialParameterCollection*
			constexpr auto _gardenEdgeMesh = 0x4b8; // Size: 16, Type: struct TArray<struct FStaticMeshMaterialPair>
			constexpr auto _gardenEdgeVerticalOffset = 0x4c8; // Size: 4, Type: float
			constexpr auto _gardenEdgeHorizontalOffset = 0x4cc; // Size: 4, Type: float
			constexpr auto _gardenSoilMesh = 0x4d0; // Size: 16, Type: struct TArray<struct FStaticMeshMaterialPair>
			constexpr auto _gardenSoilVerticalOffset = 0x4e0; // Size: 4, Type: float
			constexpr auto _cubeCollisionMesh = 0x4e8; // Size: 24, Type: struct FStaticMeshMaterialPair
			constexpr auto _weedMesh = 0x500; // Size: 16, Type: struct TArray<struct FStaticMeshMaterialPair>
			constexpr auto _weedsVerticalOffset = 0x510; // Size: 4, Type: float
			constexpr auto _plantSpecies = 0x518; // Size: 16, Type: struct TArray<struct UPlantSpecies*>
			constexpr auto _farmingSkillDataAsset = 0x528; // Size: 8, Type: struct UFarmingSkill*
			constexpr auto _hismcMap = 0x530; // Size: 80, Type: struct TMap<struct FStaticMeshMaterialPair, struct UIndexedHierarchicalInstancedStaticMeshComponent*>
			constexpr auto _showPreplacement = 0x580; // Size: 1, Type: bool
			constexpr auto _databaseUpdateInterval = 0x584; // Size: 4, Type: float
			constexpr auto _destroyChoppingRecipeAsset = 0x588; // Size: 8, Type: struct UChoppingRecipeDataAsset*
			constexpr auto _prisonerInteractionDistance = 0x590; // Size: 4, Type: float
	}
} 
