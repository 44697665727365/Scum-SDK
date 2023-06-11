namespace offsets
{
	namespace UTexture
	{
			constexpr auto LightingGuid = 0x68; // Size: 16, Type: struct FGuid
			constexpr auto LODBias = 0x78; // Size: 4, Type: int32_t
			constexpr auto CompressionSettings = 0x7c; // Size: 1, Type: char TextureCompressionSettings
			constexpr auto Filter = 0x7d; // Size: 1, Type: char TextureFilter
			constexpr auto MipLoadOptions = 0x7e; // Size: 1, Type: uint8_t 
			constexpr auto LODGroup = 0x7f; // Size: 1, Type: char TextureGroup
			constexpr auto Downscale = 0x80; // Size: 4, Type: struct FPerPlatformFloat
			constexpr auto DownscaleOptions = 0x84; // Size: 1, Type: uint8_t 
			constexpr auto sRGB = 0x85; // Size: 1, Type: char
			constexpr auto bNoTiling = 0x85; // Size: 1, Type: char
			constexpr auto VirtualTextureStreaming = 0x85; // Size: 1, Type: char
			constexpr auto CompressionYCoCg = 0x85; // Size: 1, Type: char
			constexpr auto bNotOfflineProcessed = 0x85; // Size: 1, Type: char
			constexpr auto bAsyncResourceReleaseHasBeenStarted = 0x85; // Size: 1, Type: char
			constexpr auto AssetUserData = 0x88; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
