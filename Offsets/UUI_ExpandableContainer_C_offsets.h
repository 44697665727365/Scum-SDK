namespace offsets
{
	namespace UUI_ExpandableContainer_C
	{
			constexpr auto UberGraphFrame = 0x280; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto ContentBackgroundImage = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto ContentHorizontalBox = 0x290; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto ContentOverlay = 0x298; // Size: 8, Type: struct UOverlay*
			constexpr auto ExpandButton = 0x2a0; // Size: 8, Type: struct UButton*
			constexpr auto ExpandedSpacingLine = 0x2a8; // Size: 8, Type: struct UImage*
			constexpr auto TitleBackgroundImage = 0x2b0; // Size: 8, Type: struct UImage*
			constexpr auto FontSize = 0x2b8; // Size: 4, Type: int32_t
			constexpr auto EnableExpandedSpacingLine = 0x2bc; // Size: 1, Type: bool
			constexpr auto TitlePadding = 0x2c0; // Size: 16, Type: struct FMargin
			constexpr auto _isMinimized = 0x2d0; // Size: 1, Type: bool
			constexpr auto Title = 0x2d8; // Size: 24, Type: struct FText
			constexpr auto ContentPadding = 0x2f0; // Size: 16, Type: struct FMargin
			constexpr auto IsContentBackgroundImageVisible = 0x300; // Size: 1, Type: bool
			constexpr auto _alarmsCount = 0x304; // Size: 4, Type: int32_t
			constexpr auto _isUnderAlarm = 0x308; // Size: 1, Type: bool
			constexpr auto ParentContainer = 0x310; // Size: 8, Type: struct UUI_ExpandableContainer_C*
			constexpr auto OnExpandChanged = 0x318; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ContentMargins = 0x328; // Size: 16, Type: struct FMargin
			constexpr auto OnlySettableByChildren = 0x338; // Size: 1, Type: bool
	}
} 
