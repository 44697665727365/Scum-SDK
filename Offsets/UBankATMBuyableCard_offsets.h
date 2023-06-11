namespace offsets
{
	namespace UBankATMBuyableCard
	{
			constexpr auto _cardQualityType = 0x278; // Size: 1, Type: uint8_t 
			constexpr auto _normalVisuals = 0x27c; // Size: 12, Type: struct FBankATMBuyableCardStateVisual
			constexpr auto _hoveredAndPressedVisuals = 0x288; // Size: 12, Type: struct FBankATMBuyableCardStateVisual
			constexpr auto _disabledVisuals = 0x294; // Size: 12, Type: struct FBankATMBuyableCardStateVisual
			constexpr auto _visualStateSwitcher = 0x2a0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _toggleablePlusCircle = 0x2a8; // Size: 8, Type: struct UImage*
			constexpr auto _textCardType = 0x2b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _textFreeRenewals = 0x2b8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _textDigitsOfPin = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _textOperationalTransactionLimit = 0x2c8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _textGoldPurchaseAvailable = 0x2d0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _textCardCost = 0x2d8; // Size: 8, Type: struct UTextBlock*
	}
} 
