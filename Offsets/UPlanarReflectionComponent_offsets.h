namespace offsets
{
	namespace UPlanarReflectionComponent
	{
			constexpr auto PreviewBox = 0x2b0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto NormalDistortionStrength = 0x2b8; // Size: 4, Type: float
			constexpr auto PrefilterRoughness = 0x2bc; // Size: 4, Type: float
			constexpr auto PrefilterRoughnessDistance = 0x2c0; // Size: 4, Type: float
			constexpr auto ScreenPercentage = 0x2c4; // Size: 4, Type: int32_t
			constexpr auto ExtraFOV = 0x2c8; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeStart = 0x2cc; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeEnd = 0x2d0; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeoutStart = 0x2d4; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeoutEnd = 0x2d8; // Size: 4, Type: float
			constexpr auto AngleFromPlaneFadeStart = 0x2dc; // Size: 4, Type: float
			constexpr auto AngleFromPlaneFadeEnd = 0x2e0; // Size: 4, Type: float
			constexpr auto bShowPreviewPlane = 0x2e4; // Size: 1, Type: bool
			constexpr auto bRenderSceneTwoSided = 0x2e5; // Size: 1, Type: bool
	}
} 
