namespace offsets
{
	namespace UDrinkWaterAssetData
	{
			constexpr auto ResourceType = 0x30; // Size: 8, Type: UGameResourceType*
			constexpr auto QuantityPerDrink = 0x38; // Size: 4, Type: float
			constexpr auto Salinity = 0x3c; // Size: 4, Type: float
			constexpr auto StartDrinkingAudioEvent = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopDrinkingAudioEvent = 0x48; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
