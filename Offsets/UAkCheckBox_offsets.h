namespace offsets
{
	namespace UAkCheckBox
	{
			constexpr auto CheckedState = 0x468; // Size: 1, Type: uint8_t 
			constexpr auto CheckedStateDelegate = 0x46c; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x480; // Size: 1408, Type: struct FCheckBoxStyle
			constexpr auto HorizontalAlignment = 0xa00; // Size: 1, Type: char EHorizontalAlignment
			constexpr auto IsFocusable = 0xa01; // Size: 1, Type: bool
			constexpr auto ThePropertyToControl = 0xa08; // Size: 16, Type: struct FAkBoolPropertyToControl
			constexpr auto ItemToControl = 0xa18; // Size: 64, Type: struct FAkWwiseItemToControl
			constexpr auto AkOnCheckStateChanged = 0xa58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnItemDropped = 0xa68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPropertyDropped = 0xa78; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
