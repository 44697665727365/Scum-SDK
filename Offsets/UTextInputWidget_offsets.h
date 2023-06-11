namespace offsets
{
	namespace UTextInputWidget
	{
			constexpr auto MainButton = 0x278; // Size: 8, Type: struct UButton*
			constexpr auto TextBox = 0x280; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto TextBlock_1 = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto TitleSizeBox = 0x290; // Size: 8, Type: struct USizeBox*
			constexpr auto InputSizeBox = 0x298; // Size: 8, Type: struct USizeBox*
			constexpr auto InputImage = 0x2a0; // Size: 8, Type: struct UImage*
			constexpr auto Image_1 = 0x2a8; // Size: 8, Type: struct UImage*
			constexpr auto Image_2 = 0x2b0; // Size: 8, Type: struct UImage*
			constexpr auto InputFontSize = 0x2b8; // Size: 4, Type: int32_t
			constexpr auto TitleFontSize = 0x2bc; // Size: 4, Type: int32_t
			constexpr auto TitleFontSizeHighlighted = 0x2c0; // Size: 4, Type: int32_t
			constexpr auto TitleWidth = 0x2c4; // Size: 4, Type: float
			constexpr auto InputWidth = 0x2c8; // Size: 4, Type: float
			constexpr auto Height = 0x2cc; // Size: 4, Type: float
			constexpr auto Title = 0x2d0; // Size: 24, Type: struct FText
			constexpr auto DefaultValue = 0x2e8; // Size: 24, Type: struct FText
			constexpr auto InputPadding = 0x300; // Size: 4, Type: float
			constexpr auto ValueJustification = 0x304; // Size: 1, Type: char EHorizontalAlignment
			constexpr auto InputBackgroundColor = 0x308; // Size: 16, Type: struct FLinearColor
			constexpr auto InputType = 0x318; // Size: 1, Type: char ETextInputType
	}
} 
