namespace offsets
{
	namespace ASoundSpline
	{
			constexpr auto MinCameraLocationDeltaForUpdate = 0x230; // Size: 4, Type: float
			constexpr auto WorldStreamedCheckInterval = 0x234; // Size: 4, Type: float
			constexpr auto MaxCameraDistance = 0x238; // Size: 4, Type: float
			constexpr auto AudioEvent = 0x240; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto InsideSplineAudioEvent = 0x248; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto OutsideSplineAudioEvent = 0x250; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
