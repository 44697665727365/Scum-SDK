namespace offsets
{
	namespace UCircularMenuSegmentInfo
	{
			constexpr auto Caption = 0x30; // Size: 24, Type: struct FText
			constexpr auto Icons = 0x48; // Size: 8, Type: struct UCircularMenuSegmentIcons*
			constexpr auto ShouldApplyFadeToIcon = 0x50; // Size: 1, Type: bool
			constexpr auto IconSizeOverride = 0x54; // Size: 4, Type: float
			constexpr auto ShouldStayVisible = 0x58; // Size: 1, Type: bool
			constexpr auto ShowTooltip = 0x59; // Size: 1, Type: bool
			constexpr auto ToolTipText = 0x60; // Size: 24, Type: struct FText
			constexpr auto ParentCircularWidget = 0x78; // Size: 8, Type: struct UCircularMenuWidget*
	}
} 
