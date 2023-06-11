namespace offsets
{
	namespace UDrawPolyPathProperties
	{
			constexpr auto OutputType = 0x60; // Size: 4, Type: uint8_t 
			constexpr auto WidthMode = 0x64; // Size: 4, Type: uint8_t 
			constexpr auto Width = 0x68; // Size: 4, Type: float
			constexpr auto HeightMode = 0x6c; // Size: 4, Type: uint8_t 
			constexpr auto Height = 0x70; // Size: 4, Type: float
			constexpr auto RampStartRatio = 0x74; // Size: 4, Type: float
			constexpr auto bSnapToWorldGrid = 0x78; // Size: 1, Type: bool
	}
} 
