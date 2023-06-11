namespace offsets
{
	namespace AHandheldLightItem
	{
			constexpr auto _currentLightAngleIndex = 0x910; // Size: 4, Type: int32_t
			constexpr auto _possibleLightAngles = 0x918; // Size: 16, Type: struct TArray<float>
			constexpr auto _minIntensityValue = 0x928; // Size: 4, Type: float
			constexpr auto _intensityChangeStep = 0x92c; // Size: 4, Type: float
			constexpr auto _resourceContainerComponent = 0x930; // Size: 8, Type: struct UBasicGameResourceContainerComponent*
			constexpr auto _lightIntensityReplicated = 0x93c; // Size: 1, Type: char
			constexpr auto _canChangeLightIntensity = 0x93d; // Size: 1, Type: bool
	}
} 
