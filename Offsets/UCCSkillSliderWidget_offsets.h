namespace offsets
{
	namespace UCCSkillSliderWidget
	{
			constexpr auto OnSliderChanged = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSliderSelected = 0x270; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSliderDeselected = 0x280; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto _skillName = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto _nonSelectableText = 0x298; // Size: 8, Type: struct UCCNonSelectableTextWidget*
			constexpr auto _slider = 0x2a0; // Size: 8, Type: struct UTrashSliderWidget*
			constexpr auto _enabled = 0x2a8; // Size: 1, Type: bool
			constexpr auto _skillTemplate = 0x2b0; // Size: 56, Type: struct FSkillTemplate
			constexpr auto _enabledColor = 0x2e8; // Size: 16, Type: struct FLinearColor
			constexpr auto _disabledColor = 0x2f8; // Size: 16, Type: struct FLinearColor
	}
} 
