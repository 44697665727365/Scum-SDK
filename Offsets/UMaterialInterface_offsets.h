namespace offsets
{
	namespace UMaterialInterface
	{
			constexpr auto SubsurfaceProfile = 0x38; // Size: 8, Type: struct USubsurfaceProfile*
			constexpr auto LightmassSettings = 0x50; // Size: 16, Type: struct FLightmassMaterialInterfaceSettings
			constexpr auto TextureStreamingData = 0x60; // Size: 16, Type: struct TArray<struct FMaterialTextureInfo>
			constexpr auto AssetUserData = 0x70; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
