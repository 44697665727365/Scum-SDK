namespace offsets
{
	namespace UCarousel
	{
			constexpr auto _selectionDisplay = 0x280; // Size: 8, Type: struct UTextBlock*
			constexpr auto _leftArrow = 0x288; // Size: 8, Type: struct UButton*
			constexpr auto _rightArrow = 0x290; // Size: 8, Type: struct UButton*
			constexpr auto _carouselValues = 0x298; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto _canWrap = 0x2a8; // Size: 1, Type: bool
			constexpr auto _selectedAndFocusedCarouselStyle = 0x2b0; // Size: 1392, Type: struct FCarouselStyle
			constexpr auto _selectedAndUnfocusedCarouselStyle = 0x820; // Size: 1392, Type: struct FCarouselStyle
			constexpr auto _unselectedCarouselStyle = 0xd90; // Size: 1392, Type: struct FCarouselStyle
			constexpr auto _highlightedCarouselStyle = 0x1300; // Size: 1392, Type: struct FCarouselStyle
			constexpr auto _disabledCarouselStyle = 0x1870; // Size: 1392, Type: struct FCarouselStyle
			constexpr auto _controlWithMouseWheel = 0x1de0; // Size: 1, Type: bool
			constexpr auto _controlWithKeyboard = 0x1de1; // Size: 1, Type: bool
	}
} 
