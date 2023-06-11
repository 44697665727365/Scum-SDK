namespace offsets
{
	namespace UNetworkDataIdAsset
	{
			constexpr auto IdToAssetMap = 0x30; // Size: 80, Type: struct TMap<uint32_t, struct FPrimaryAssetId>
			constexpr auto AssetToIdMap = 0x80; // Size: 80, Type: struct TMap<struct FPrimaryAssetId, uint32_t>
	}
} 
