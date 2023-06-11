namespace offsets
{
	namespace UAkMediaAsset
	{
			constexpr auto ID = 0x28; // Size: 4, Type: uint32_t
			constexpr auto MediaName = 0x30; // Size: 16, Type: struct FString
			constexpr auto AutoLoad = 0x40; // Size: 1, Type: bool
			constexpr auto UserData = 0x48; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto Language = 0x58; // Size: 16, Type: struct FString
			constexpr auto CurrentMediaAssetData = 0x68; // Size: 8, Type: struct UAkMediaAssetData*
	}
} 
