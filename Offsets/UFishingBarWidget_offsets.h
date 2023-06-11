namespace offsets
{
	namespace UFishingBarWidget
	{
			constexpr auto TopSegmentGradientColorBottom = 0x260; // Size: 16, Type: struct FLinearColor
			constexpr auto TopSegmentGradientColorTop = 0x270; // Size: 16, Type: struct FLinearColor
			constexpr auto BarBoxesTotalHeight = 0x280; // Size: 4, Type: float
			constexpr auto BarSegmentsTotalHeight = 0x284; // Size: 4, Type: float
			constexpr auto BarSegmentNum = 0x288; // Size: 4, Type: int32_t
			constexpr auto ProgressBarBackgroundBoxBrush = 0x290; // Size: 136, Type: struct FSlateBrush
			constexpr auto ProgressBarBackgroundBoxColorAndOpacity = 0x318; // Size: 16, Type: struct FLinearColor
			constexpr auto ProgressBarBackgroundBoxPadding = 0x328; // Size: 4, Type: float
			constexpr auto ProgressBarSegmentBrush = 0x330; // Size: 136, Type: struct FSlateBrush
			constexpr auto ProgressBarSegmentColorAndOpacity = 0x3b8; // Size: 16, Type: struct FLinearColor
			constexpr auto ProgressBarSegmentPadding = 0x3c8; // Size: 4, Type: float
			constexpr auto _progressBarSegmentBackgroundBoxesContainer = 0x3d0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _progressBarSegmentsContainer = 0x3d8; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _simulatedProgressBar = 0x3e0; // Size: 8, Type: struct USizeBox*
	}
} 
