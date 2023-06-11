namespace offsets
{
	namespace UUVLayoutPreviewProperties
	{
			constexpr auto bVisible = 0x60; // Size: 1, Type: bool
			constexpr auto ScaleFactor = 0x64; // Size: 4, Type: float
			constexpr auto WhichSide = 0x68; // Size: 4, Type: uint8_t 
			constexpr auto bShowWireframe = 0x6c; // Size: 1, Type: bool
			constexpr auto Shift = 0x70; // Size: 8, Type: struct FVector2D
	}
} 
