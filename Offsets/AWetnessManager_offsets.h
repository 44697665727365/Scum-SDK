namespace offsets
{
	namespace AWetnessManager
	{
			constexpr auto MaxNumberOfActiveWettables = 0x220; // Size: 4, Type: int32_t
			constexpr auto MaxWettableLifeTime = 0x224; // Size: 4, Type: float
			constexpr auto WeatherAndWettableObjectParametersUpdateInterval = 0x228; // Size: 4, Type: float
			constexpr auto WettingRateFromRainVsRainIntensity = 0x230; // Size: 8, Type: struct UCurveFloat*
			constexpr auto WettingRateFromWaterImmersion = 0x238; // Size: 4, Type: float
			constexpr auto WettingRateFromWetSurfaces = 0x23c; // Size: 4, Type: float
			constexpr auto DryingRate = 0x240; // Size: 4, Type: float
			constexpr auto DryingRateModifierVsTemperature = 0x248; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DryingRateModifierVsRelativeHumidity = 0x250; // Size: 8, Type: struct UCurveFloat*
			constexpr auto AirTemperatureModifierWhenNotExposedToSunlight = 0x258; // Size: 4, Type: float
	}
} 
