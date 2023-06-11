namespace offsets
{
	namespace UCookingControlButton
	{
			constexpr auto _buttonBackground = 0x2b0; // Size: 8, Type: struct UImage*
			constexpr auto _timerBorder = 0x2b8; // Size: 8, Type: struct UImage*
			constexpr auto _visualSwitcher = 0x2c0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _buttonTimer = 0x2c8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _cookingTextTooltip = 0x2d0; // Size: 8, Type: struct UCookingTextTooltip*
			constexpr auto _cookingTextTooltipClass = 0x2d8; // Size: 8, Type: UCookingTextTooltip*
			constexpr auto _controlButtonState = 0x2e0; // Size: 1, Type: uint8_t 
			constexpr auto _hoverAndClickVisualsMap = 0x2e8; // Size: 80, Type: struct TMap<uint8_t , struct FHoverClickButtonVisualInfo>
	}
} 
