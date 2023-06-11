namespace offsets
{
	namespace USafeZoneSlot
	{
			constexpr auto bIsTitleSafe = 0x38; // Size: 1, Type: bool
			constexpr auto SafeAreaScale = 0x3c; // Size: 16, Type: struct FMargin
			constexpr auto HAlign = 0x4c; // Size: 1, Type: char EHorizontalAlignment
			constexpr auto VAlign = 0x4d; // Size: 1, Type: char EVerticalAlignment
			constexpr auto Padding = 0x50; // Size: 16, Type: struct FMargin
	}
} 
