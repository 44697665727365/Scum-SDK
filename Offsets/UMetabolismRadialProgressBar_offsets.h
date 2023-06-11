namespace offsets
{
	namespace UMetabolismRadialProgressBar
	{
			constexpr auto PreviewedAlertedState = 0x260; // Size: 1, Type: bool
			constexpr auto PrimaryPercentageMinDisplayedValue = 0x264; // Size: 4, Type: float
			constexpr auto PrimaryPercentageMaxDisplayedValue = 0x268; // Size: 4, Type: float
			constexpr auto _scaleBox = 0x280; // Size: 8, Type: struct UScaleBox*
			constexpr auto _coloredBackground = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto _radialProgressBar = 0x290; // Size: 8, Type: struct UImage*
			constexpr auto _fontEffectPass1 = 0x298; // Size: 8, Type: struct URetainerBox*
			constexpr auto _fontEffectPass2 = 0x2a0; // Size: 8, Type: struct URetainerBox*
			constexpr auto _percentage = 0x2a8; // Size: 8, Type: struct URichTextBlock*
			constexpr auto _value = 0x2b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _title = 0x2b8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _defaultColorScheme = 0x2c0; // Size: 128, Type: struct FMetabolismRadialProgressBarColorScheme
			constexpr auto _alertedColorScheme = 0x340; // Size: 128, Type: struct FMetabolismRadialProgressBarColorScheme
			constexpr auto _percentageFontSettings = 0x3c0; // Size: 20, Type: struct FMetabolismRadialProgressBarFontSettings
			constexpr auto _widgetScale = 0x3d4; // Size: 4, Type: float
			constexpr auto _isTitleVisible = 0x3d8; // Size: 1, Type: bool
	}
} 
