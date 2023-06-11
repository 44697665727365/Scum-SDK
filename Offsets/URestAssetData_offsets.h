namespace offsets
{
	namespace URestAssetData
	{
			constexpr auto RestingMode = 0x30; // Size: 1, Type: uint8_t 
			constexpr auto RestingAnimation = 0x38; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto AdditionalEndRestLocations = 0x40; // Size: 16, Type: struct TArray<struct FVector>
	}
} 
