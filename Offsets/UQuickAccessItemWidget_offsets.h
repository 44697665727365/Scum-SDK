namespace offsets
{
	namespace UQuickAccessItemWidget
	{
			constexpr auto _imageWidget = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto DefaultWidth = 0x280; // Size: 4, Type: float
			constexpr auto DefaultHeight = 0x284; // Size: 4, Type: float
			constexpr auto DefaultPosition = 0x288; // Size: 8, Type: struct FVector2D
			constexpr auto _additionalIcon = 0x298; // Size: 8, Type: struct UImage*
			constexpr auto _additionalText = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _lowerLeftBox = 0x328; // Size: 8, Type: struct USizeBox*
			constexpr auto _additionalIconSizeBox = 0x330; // Size: 8, Type: struct USizeBox*
			constexpr auto TextColor = 0x358; // Size: 16, Type: struct FLinearColor
			constexpr auto _itemSlotNumber = 0x368; // Size: 24, Type: struct FText
			constexpr auto _alarmColor = 0x380; // Size: 16, Type: struct FLinearColor
			constexpr auto TextBlockSlotNumber = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto SizeBox_1 = 0x398; // Size: 8, Type: struct USizeBox*
			constexpr auto LowerLeftBoxFadeIn = 0x3a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto LowerLeftBoxFadeOut = 0x3a8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto BlinkingBackground = 0x3b0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto AdditionalIconFadeIn = 0x3b8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto AdditionalIconFadeOut = 0x3c0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ShowLowerLeftBoxAnimation = 0x3c8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ShowAdditionalIconAnimation = 0x3d0; // Size: 8, Type: struct UWidgetAnimation*
	}
} 
