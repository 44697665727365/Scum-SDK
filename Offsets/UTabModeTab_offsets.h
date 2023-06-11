namespace offsets
{
	namespace UTabModeTab
	{
			constexpr auto _mainSizeBox = 0x278; // Size: 8, Type: struct USizeBox*
			constexpr auto _backgroundImage = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto _icon = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto _titleText = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto _hotkeyText = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto _title = 0x2a0; // Size: 24, Type: struct FText
			constexpr auto _hotkey = 0x2b8; // Size: 24, Type: struct FText
			constexpr auto _activeIcon = 0x2d0; // Size: 136, Type: struct FSlateBrush
			constexpr auto _inactiveIcon = 0x358; // Size: 136, Type: struct FSlateBrush
			constexpr auto _backgroundTextureActive = 0x3e0; // Size: 136, Type: struct FSlateBrush
			constexpr auto _backgroundTextureInactive = 0x468; // Size: 136, Type: struct FSlateBrush
			constexpr auto _inactiveUnalertedColor = 0x4f0; // Size: 16, Type: struct FLinearColor
			constexpr auto _inactiveAlertedColor = 0x500; // Size: 16, Type: struct FLinearColor
			constexpr auto _alertBlinkTime = 0x510; // Size: 4, Type: float
			constexpr auto _tabMode = 0x516; // Size: 1, Type: uint8_t 
	}
} 
