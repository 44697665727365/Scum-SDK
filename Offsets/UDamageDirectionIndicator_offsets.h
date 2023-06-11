namespace offsets
{
	namespace UDamageDirectionIndicator
	{
			constexpr auto Visible = 0x28; // Size: 1, Type: bool
			constexpr auto Texture = 0x30; // Size: 8, Type: struct UTexture*
			constexpr auto Radius = 0x38; // Size: 4, Type: float
			constexpr auto OpacityMultiplier = 0x3c; // Size: 4, Type: float
			constexpr auto DefaultDelayDuration = 0x40; // Size: 4, Type: float
			constexpr auto DefaultSustainDuration = 0x44; // Size: 4, Type: float
			constexpr auto DefaultReleaseDuration = 0x48; // Size: 4, Type: float
	}
} 
