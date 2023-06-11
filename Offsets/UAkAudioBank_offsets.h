namespace offsets
{
	namespace UAkAudioBank
	{
			constexpr auto AutoLoad = 0x50; // Size: 1, Type: bool
			constexpr auto LocalizedPlatformAssetDataMap = 0x58; // Size: 80, Type: struct TMap<struct FString, struct UAkAssetPlatformData*>
			constexpr auto LinkedAkEvents = 0xa8; // Size: 80, Type: struct TSet<struct TSoftObjectPtr<UAkAudioEvent>>
			constexpr auto CurrentLocalizedPlatformAssetData = 0xf8; // Size: 8, Type: struct UAkAssetPlatformData*
	}
} 
