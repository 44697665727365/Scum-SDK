namespace offsets
{
	namespace UDialogButton
	{
			constexpr auto PreviewSelectedState = 0x2b0; // Size: 1, Type: bool
			constexpr auto _button = 0x2b8; // Size: 8, Type: struct UButton*
			constexpr auto _text = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _sizeBox = 0x2c8; // Size: 8, Type: struct USizeBox*
			constexpr auto _initialTitle = 0x2d0; // Size: 24, Type: struct FText
			constexpr auto _selectedButtonStyle = 0x2e8; // Size: 648, Type: struct FTabButtonStyle
			constexpr auto _deselectedButtonStyle = 0x570; // Size: 648, Type: struct FTabButtonStyle
			constexpr auto _selectedTextStyle = 0x7f8; // Size: 152, Type: struct FTabTextStyle
			constexpr auto _deselectedTextStyle = 0x890; // Size: 152, Type: struct FTabTextStyle
	}
} 
