namespace offsets
{
	namespace UUpgradeSlotWidget
	{
			constexpr auto _itemIcon = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto _gridSymbol = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto _backgroundImage = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto _defaultImage = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto _regularColour = 0x280; // Size: 16, Type: struct FLinearColor
			constexpr auto _dropUnavailableColour = 0x290; // Size: 16, Type: struct FLinearColor
			constexpr auto _dropAvailableColour = 0x2a0; // Size: 16, Type: struct FLinearColor
			constexpr auto _slotType = 0x2b0; // Size: 1, Type: uint8_t 
			constexpr auto _buyableUpgrades = 0x2c0; // Size: 16, Type: struct TArray<AItem*>
	}
} 
