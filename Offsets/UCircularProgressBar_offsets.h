namespace offsets
{
	namespace UCircularProgressBar
	{
			constexpr auto _speedChange = 0x270; // Size: 4, Type: float
			constexpr auto _shouldProgressTextBeVisible = 0x274; // Size: 1, Type: bool
			constexpr auto _alarmColor = 0x278; // Size: 16, Type: struct FLinearColor
			constexpr auto _normalColor = 0x288; // Size: 16, Type: struct FLinearColor
			constexpr auto _textColor = 0x298; // Size: 16, Type: struct FLinearColor
			constexpr auto _circularMaterial = 0x2a8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto Image = 0x2b0; // Size: 8, Type: struct UTexture2D*
			constexpr auto Fill_Value_BCG = 0x2b8; // Size: 8, Type: struct UImage*
			constexpr auto Icon = 0x2c0; // Size: 8, Type: struct UImage*
			constexpr auto ProgressTextBox = 0x2c8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto TPercentage = 0x2d0; // Size: 8, Type: struct UTextBlock*
			constexpr auto TPercentageSign = 0x2d8; // Size: 8, Type: struct UTextBlock*
			constexpr auto OuterCircleAlarmAnimation = 0x2e0; // Size: 8, Type: struct UWidgetAnimation*
	}
} 
