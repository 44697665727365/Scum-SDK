namespace offsets
{
	namespace AConZWaterSpline
	{
			constexpr auto SceneComponent = 0x220; // Size: 8, Type: struct USceneComponent*
			constexpr auto SplineComponent = 0x228; // Size: 8, Type: struct USplineComponent*
			constexpr auto SurfaceMeshComponent = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto SubsurfaceMeshComponent = 0x238; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DrawDebug = 0x240; // Size: 1, Type: bool
			constexpr auto SelectRangeStart = 0x244; // Size: 4, Type: int32_t
			constexpr auto SelectRangeEnd = 0x248; // Size: 4, Type: int32_t
			constexpr auto SelectRange = 0x24c; // Size: 1, Type: bool
			constexpr auto FlattenZ = 0x24d; // Size: 1, Type: bool
			constexpr auto ControlPoints = 0x250; // Size: 16, Type: struct TArray<struct FConZWaterSplineControlPoint>
			constexpr auto MaxDepth = 0x260; // Size: 4, Type: float
			constexpr auto SurfaceMesh = 0x268; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SubsurfaceMesh = 0x270; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SurfaceMeshMaterialOverride = 0x278; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SubsurfaceMeshMaterialOverride = 0x280; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto UnderwaterPostProcessing = 0x288; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SurfaceMeshUserData = 0x290; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto GerstnerWavesParameters = 0x2a0; // Size: 16, Type: struct TArray<struct FConZGerstnerWavesParameters>
	}
} 
