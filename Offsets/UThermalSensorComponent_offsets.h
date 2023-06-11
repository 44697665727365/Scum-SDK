namespace offsets
{
	namespace UThermalSensorComponent
	{
			constexpr auto _temperature = 0xb0; // Size: 4, Type: float
			constexpr auto _emissivity = 0xb4; // Size: 4, Type: float
			constexpr auto _radius = 0xb8; // Size: 4, Type: float
			constexpr auto _mass = 0xbc; // Size: 4, Type: float
			constexpr auto _specificHeatCapacity = 0xc0; // Size: 4, Type: float
			constexpr auto _thermalConductivity = 0xc4; // Size: 4, Type: float
			constexpr auto _packedTemperature = 0xe8; // Size: 1, Type: char
			constexpr auto _temperatureReplicationEnabled = 0xf0; // Size: 1, Type: bool
			constexpr auto _packTemperatureOffset = 0xf4; // Size: 4, Type: float
			constexpr auto _packTemperatureScale = 0xf8; // Size: 4, Type: float
			constexpr auto _packTemperatureGamma = 0xfc; // Size: 4, Type: float
	}
} 
