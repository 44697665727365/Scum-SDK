namespace offsets
{
	namespace UUI_HealthWidget2_C
	{
			constexpr auto UberGraphFrame = 0x2f8; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Background = 0x300; // Size: 8, Type: struct UImage*
			constexpr auto DisabledBar = 0x308; // Size: 8, Type: struct UImage*
			constexpr auto HealthBar = 0x310; // Size: 8, Type: struct UImage*
			constexpr auto ColorMaxHP = 0x318; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorMinHP = 0x328; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorCurve = 0x338; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _healthBarMat = 0x340; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _disabledBarMat = 0x348; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
