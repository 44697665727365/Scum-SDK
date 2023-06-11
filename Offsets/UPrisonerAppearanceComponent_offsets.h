namespace offsets
{
	namespace UPrisonerAppearanceComponent
	{
			constexpr auto _repData = 0xb0; // Size: 4, Type: uint32_t
			constexpr auto _femaleRepData = 0xb8; // Size: 8, Type: uint64_t
			constexpr auto _eyeshadowColor = 0xd4; // Size: 4, Type: struct FColor
			constexpr auto _eyelinerColor = 0xd8; // Size: 4, Type: struct FColor
			constexpr auto _lipstickColor = 0xdc; // Size: 4, Type: struct FColor
			constexpr auto _overrideVisualParameters = 0x128; // Size: 1, Type: bool
			constexpr auto _visualParameterOverrides = 0x130; // Size: 16, Type: struct TArray<struct FVisualParameter>
	}
} 
