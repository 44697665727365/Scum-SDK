namespace offsets
{
	namespace UAkMediaAssetData
	{
			constexpr auto IsStreamed = 0x28; // Size: 1, Type: bool
			constexpr auto UseDeviceMemory = 0x29; // Size: 1, Type: bool
			constexpr auto Language = 0x30; // Size: 16, Type: struct FString
			constexpr auto AssetPlatform = 0x40; // Size: 16, Type: struct FString
	}
} 
