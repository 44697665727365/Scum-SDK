namespace offsets
{
	namespace UConZSlider
	{
			constexpr auto _minValue = 0x280; // Size: 4, Type: int32_t
			constexpr auto _maxValue = 0x284; // Size: 4, Type: int32_t
			constexpr auto _stepSize = 0x288; // Size: 4, Type: int32_t
			constexpr auto _controlWithKeyboard = 0x28c; // Size: 1, Type: bool
			constexpr auto _progressBarOverlay = 0x2a8; // Size: 8, Type: struct UOverlay*
			constexpr auto _sliderThumb = 0x2b0; // Size: 8, Type: struct UImage*
			constexpr auto _progressBar = 0x2b8; // Size: 8, Type: struct UProgressBar*
			constexpr auto _selectedAndFocusedSliderStyle = 0x2c0; // Size: 552, Type: struct FConZSliderStyle
			constexpr auto _selectedAndUnfocusedSliderStyle = 0x4e8; // Size: 552, Type: struct FConZSliderStyle
			constexpr auto _unselectedSliderStyle = 0x710; // Size: 552, Type: struct FConZSliderStyle
			constexpr auto _highlightedSliderStyle = 0x938; // Size: 552, Type: struct FConZSliderStyle
			constexpr auto _disabledSliderStyle = 0xb60; // Size: 552, Type: struct FConZSliderStyle
			constexpr auto _stepSpeedStartTreshold = 0xd88; // Size: 4, Type: float
			constexpr auto _stepSpeedThreshold = 0xd8c; // Size: 4, Type: float
			constexpr auto _stepSpeedAtStart = 0xd90; // Size: 4, Type: float
			constexpr auto _stepSpeedSlow = 0xd94; // Size: 4, Type: float
			constexpr auto _stepSpeedFast = 0xd98; // Size: 4, Type: float
			constexpr auto _controlWithMouseClick = 0xd9c; // Size: 1, Type: bool
			constexpr auto _controlWithMouseWheel = 0xd9d; // Size: 1, Type: bool
	}
} 
