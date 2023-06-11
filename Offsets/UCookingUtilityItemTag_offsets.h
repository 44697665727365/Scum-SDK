namespace offsets
{
	namespace UCookingUtilityItemTag
	{
			constexpr auto UsesMainSnapPoint = 0x30; // Size: 1, Type: bool
			constexpr auto MainSnapPoint = 0x38; // Size: 72, Type: struct FCookingUtilityMainSnapPoint
			constexpr auto Slots = 0x80; // Size: 16, Type: struct TArray<struct FCookingUtilitySlot>
			constexpr auto HighlightItem = 0x90; // Size: 1, Type: bool
	}
} 
