namespace offsets
{
	namespace UMaterialInstance
	{
			constexpr auto PhysMaterial = 0x88; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto PhysicalMaterialMap[8] = 0x90; // Size: 64, Type: struct UPhysicalMaterial*
			constexpr auto Parent = 0xd0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bHasStaticPermutationResource = 0xd8; // Size: 1, Type: char
			constexpr auto bOverrideSubsurfaceProfile = 0xd8; // Size: 1, Type: char
			constexpr auto ScalarParameterValues = 0xe0; // Size: 16, Type: struct TArray<struct FScalarParameterValue>
			constexpr auto VectorParameterValues = 0xf0; // Size: 16, Type: struct TArray<struct FVectorParameterValue>
			constexpr auto TextureParameterValues = 0x100; // Size: 16, Type: struct TArray<struct FTextureParameterValue>
			constexpr auto RuntimeVirtualTextureParameterValues = 0x110; // Size: 16, Type: struct TArray<struct FRuntimeVirtualTextureParameterValue>
			constexpr auto FontParameterValues = 0x120; // Size: 16, Type: struct TArray<struct FFontParameterValue>
			constexpr auto BasePropertyOverrides = 0x130; // Size: 8, Type: struct FMaterialInstanceBasePropertyOverrides
			constexpr auto StaticParameters = 0x148; // Size: 64, Type: struct FStaticParameterSet
			constexpr auto CachedLayerParameters = 0x188; // Size: 336, Type: struct FMaterialCachedParameters
			constexpr auto CachedReferencedTextures = 0x2d8; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
