namespace offsets
{
	namespace UStaticMeshComponent
	{
			constexpr auto ForcedLodModel = 0x478; // Size: 4, Type: int32_t
			constexpr auto PreviousLODLevel = 0x47c; // Size: 4, Type: int32_t
			constexpr auto MinLOD = 0x480; // Size: 4, Type: int32_t
			constexpr auto SubDivisionStepSize = 0x484; // Size: 4, Type: int32_t
			constexpr auto StaticMesh = 0x488; // Size: 8, Type: struct UStaticMesh*
			constexpr auto WireframeColorOverride = 0x490; // Size: 4, Type: struct FColor
			constexpr auto bEvaluateWorldPositionOffset = 0x494; // Size: 1, Type: char
			constexpr auto bOverrideWireframeColor = 0x494; // Size: 1, Type: char
			constexpr auto bOverrideMinLOD = 0x494; // Size: 1, Type: char
			constexpr auto bOverrideNavigationExport = 0x494; // Size: 1, Type: char
			constexpr auto bForceNavigationObstacle = 0x494; // Size: 1, Type: char
			constexpr auto bDisallowMeshPaintPerInstance = 0x494; // Size: 1, Type: char
			constexpr auto bIgnoreInstanceForTextureStreaming = 0x494; // Size: 1, Type: char
			constexpr auto bOverrideLightMapRes = 0x494; // Size: 1, Type: char
			constexpr auto bCastDistanceFieldIndirectShadow = 0x495; // Size: 1, Type: char
			constexpr auto bOverrideDistanceFieldSelfShadowBias = 0x495; // Size: 1, Type: char
			constexpr auto bUseSubDivisions = 0x495; // Size: 1, Type: char
			constexpr auto bUseDefaultCollision = 0x495; // Size: 1, Type: char
			constexpr auto bReverseCulling = 0x495; // Size: 1, Type: char
			constexpr auto OverriddenLightMapRes = 0x498; // Size: 4, Type: int32_t
			constexpr auto DistanceFieldIndirectShadowMinVisibility = 0x49c; // Size: 4, Type: float
			constexpr auto DistanceFieldSelfShadowBias = 0x4a0; // Size: 4, Type: float
			constexpr auto StreamingDistanceMultiplier = 0x4a4; // Size: 4, Type: float
			constexpr auto LODData = 0x4a8; // Size: 16, Type: struct TArray<struct FStaticMeshComponentLODInfo>
			constexpr auto StreamingTextureData = 0x4b8; // Size: 16, Type: struct TArray<struct FStreamingTextureBuildInfo>
			constexpr auto LightmassSettings = 0x4c8; // Size: 24, Type: struct FLightmassPrimitiveSettings
	}
} 
