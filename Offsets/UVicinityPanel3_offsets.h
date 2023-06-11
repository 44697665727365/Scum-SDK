namespace offsets
{
	namespace UVicinityPanel3
	{
			constexpr auto _isTradingThingy = 0x260; // Size: 1, Type: bool
			constexpr auto _searchedItemsBox = 0x268; // Size: 8, Type: struct UWrapBox*
			constexpr auto _vicinityBox = 0x270; // Size: 8, Type: struct UWrapBox*
			constexpr auto _vicinityContainersBox = 0x278; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto _tradingBox = 0x280; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto _tradingBoxOverlay = 0x288; // Size: 8, Type: struct UOverlay*
			constexpr auto _adjustableSeparator = 0x290; // Size: 8, Type: struct UBadAdjustableSeparator*
			constexpr auto _searchedItems = 0x298; // Size: 80, Type: struct TMap<struct UObject*, struct UWidget*>
			constexpr auto _vicinityItems = 0x2e8; // Size: 80, Type: struct TMap<struct UObject*, struct UWidget*>
			constexpr auto _vicinityContainers = 0x338; // Size: 80, Type: struct TMap<struct UObject*, struct UWidget*>
			constexpr auto _tradingItems = 0x388; // Size: 80, Type: struct TMap<struct UObject*, struct UWidget*>
			constexpr auto _filterCheckboxes = 0x478; // Size: 80, Type: struct TMap<struct UCheckBox*, struct FClassesArray>
			constexpr auto _filterCheckboxesNames = 0x4c8; // Size: 80, Type: struct TMap<struct FName, struct FClassesArray>
			constexpr auto _vicinityContainersPadding = 0x518; // Size: 16, Type: struct FMargin
	}
} 
