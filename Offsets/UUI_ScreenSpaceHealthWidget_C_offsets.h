namespace offsets
{
	namespace UUI_ScreenSpaceHealthWidget_C
	{
			constexpr auto UberGraphFrame = 0x260; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Background = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto DisabledBar = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto HealthBar = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto _healthBarMat = 0x280; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _disabledBarMat = 0x288; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ColorCurve = 0x290; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ColorMaxHP = 0x298; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorMinHP = 0x2a8; // Size: 16, Type: struct FLinearColor
	}
} 
