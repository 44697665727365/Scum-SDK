namespace offsets
{
	namespace ALevelRadiationSource
	{
			constexpr auto _root = 0x220; // Size: 8, Type: struct USceneComponent*
			constexpr auto _epicenter = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _extents = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _falloff = 0x238; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _epicenterLocation = 0x240; // Size: 12, Type: struct FVector
			constexpr auto _epicenterRadius = 0x24c; // Size: 4, Type: float
			constexpr auto _maxRadiationAmountIncreaseRate = 0x250; // Size: 4, Type: float
			constexpr auto _radiationAmountIncreaseRateFalloffExponent = 0x254; // Size: 4, Type: float
			constexpr auto _radiationNoiseAmountScale = 0x258; // Size: 4, Type: float
			constexpr auto _radiationNoiseLocationScale = 0x25c; // Size: 4, Type: float
			constexpr auto _shouldDrawEpicenter = 0x260; // Size: 1, Type: bool
			constexpr auto _shouldDrawExtents = 0x261; // Size: 1, Type: bool
			constexpr auto _shouldDrawRadiationFalloffVisualization = 0x262; // Size: 1, Type: bool
			constexpr auto _radiationFalloffVisualizationZBias = 0x264; // Size: 4, Type: float
			constexpr auto _radiationFalloffVisualizationMaterial = 0x268; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _shouldDrawExtentBounds = 0x270; // Size: 1, Type: bool
			constexpr auto _radiationLookupRenderTarget = 0x278; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto _radiationLookupRenderMaterial = 0x280; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _radiationMaterialParamCollection = 0x288; // Size: 8, Type: struct UMaterialParameterCollection*
	}
} 
