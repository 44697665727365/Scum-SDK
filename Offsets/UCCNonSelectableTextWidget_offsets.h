namespace offsets
{
	namespace UCCNonSelectableTextWidget
	{
			constexpr auto _retainerBox = 0x260; // Size: 8, Type: struct URetainerBox*
			constexpr auto _sizeBox = 0x268; // Size: 8, Type: struct USizeBox*
			constexpr auto _textBlock = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto _text = 0x278; // Size: 24, Type: struct FText
			constexpr auto _fontSize = 0x290; // Size: 4, Type: int32_t
			constexpr auto _textPadding = 0x294; // Size: 16, Type: struct FMargin
			constexpr auto _sizeOverride = 0x2a4; // Size: 8, Type: struct FVector2D
			constexpr auto _textHorizontalAlignment = 0x2ac; // Size: 1, Type: char EHorizontalAlignment
			constexpr auto _textColor = 0x2b0; // Size: 16, Type: struct FLinearColor
	}
} 
