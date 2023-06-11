namespace offsets
{
	namespace UBruisingComponent
	{
			constexpr auto BruisingData = 0xb0; // Size: 8, Type: struct UBruisingData*
			constexpr auto FadeBruises = 0xb8; // Size: 1, Type: bool
			constexpr auto BruisesLifeTime = 0xbc; // Size: 4, Type: float
			constexpr auto BruisesFadeUpdateInterval = 0xc0; // Size: 4, Type: float
			constexpr auto _renderTargetByLayer[3] = 0xc8; // Size: 24, Type: struct UTextureRenderTarget2D*
	}
} 
