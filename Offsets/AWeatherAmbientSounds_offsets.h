namespace offsets
{
	namespace AWeatherAmbientSounds
	{
			constexpr auto WeatherRTPCsUpdateInterval = 0x220; // Size: 4, Type: float
			constexpr auto TimeOfDayRTPCUpdateInterval = 0x224; // Size: 4, Type: float
			constexpr auto TimeOfDayRTPCInterpolationSpeed = 0x228; // Size: 4, Type: float
			constexpr auto RainAudioEvent = 0x230; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto WindAudioEvent = 0x238; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
