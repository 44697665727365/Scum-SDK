namespace offsets
{
	namespace UBankATMBoughtCard
	{
			constexpr auto _cardQualityType = 0x278; // Size: 1, Type: uint8_t 
			constexpr auto _cardBrushes = 0x280; // Size: 80, Type: struct TMap<uint8_t , struct FSlateBrush>
			constexpr auto _normalVisuals = 0x2d0; // Size: 64, Type: struct FBankATMBoughtCardStateVisual
			constexpr auto _hoveredVisuals = 0x310; // Size: 64, Type: struct FBankATMBoughtCardStateVisual
			constexpr auto _pressedVisuals = 0x350; // Size: 64, Type: struct FBankATMBoughtCardStateVisual
			constexpr auto _visualOverlay = 0x390; // Size: 8, Type: struct UOverlay*
			constexpr auto _imgCardBackground = 0x398; // Size: 8, Type: struct UImage*
			constexpr auto _textCardType = 0x3a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _textCardNumber = 0x3a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _optionsCircleSwitcher = 0x3b0; // Size: 8, Type: struct UWidgetSwitcher*
	}
} 
