namespace offsets
{
	namespace USearchItemDataAsset
	{
			constexpr auto Caption = 0x30; // Size: 24, Type: struct FText
			constexpr auto Duration = 0x48; // Size: 4, Type: float
			constexpr auto SearchData = 0x50; // Size: 16, Type: struct TArray<struct FSearchPerItemData>
			constexpr auto StartSearchAudioEvent = 0x60; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopSearchAudioEvent = 0x68; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto noiseLevel = 0x70; // Size: 1, Type: uint8_t 
	}
} 
