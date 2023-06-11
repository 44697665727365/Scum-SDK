namespace offsets
{
	namespace UAkSlider
	{
			constexpr auto Value = 0x108; // Size: 4, Type: float
			constexpr auto ValueDelegate = 0x10c; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x120; // Size: 832, Type: struct FSliderStyle
			constexpr auto Orientation = 0x460; // Size: 1, Type: char EOrientation
			constexpr auto SliderBarColor = 0x464; // Size: 16, Type: struct FLinearColor
			constexpr auto SliderHandleColor = 0x474; // Size: 16, Type: struct FLinearColor
			constexpr auto IndentHandle = 0x484; // Size: 1, Type: bool
			constexpr auto Locked = 0x485; // Size: 1, Type: bool
			constexpr auto StepSize = 0x488; // Size: 4, Type: float
			constexpr auto IsFocusable = 0x48c; // Size: 1, Type: bool
			constexpr auto ThePropertyToControl = 0x490; // Size: 16, Type: struct FAkPropertyToControl
			constexpr auto ItemToControl = 0x4a0; // Size: 64, Type: struct FAkWwiseItemToControl
			constexpr auto OnValueChanged = 0x4e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnItemDropped = 0x4f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPropertyDropped = 0x500; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
