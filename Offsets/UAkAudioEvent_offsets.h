namespace offsets
{
	namespace UAkAudioEvent
	{
			constexpr auto LocalizedPlatformAssetDataMap = 0x50; // Size: 80, Type: struct TMap<struct FString, struct UAkAssetPlatformData*>
			constexpr auto RequiredBank = 0xa0; // Size: 8, Type: struct UAkAudioBank*
			constexpr auto CurrentLocalizedPlatformData = 0xb0; // Size: 8, Type: struct UAkAssetPlatformData*
			constexpr auto MaxAttenuationRadius = 0xb8; // Size: 4, Type: float
			constexpr auto IsInfinite = 0xbc; // Size: 1, Type: bool
			constexpr auto MinimumDuration = 0xc0; // Size: 4, Type: float
			constexpr auto MaximumDuration = 0xc4; // Size: 4, Type: float
	}
} 
