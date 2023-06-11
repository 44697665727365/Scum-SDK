namespace offsets
{
	namespace UDcxWheeledVehicleEffectsComponent
	{
			constexpr auto _soundCullDistance = 0xb0; // Size: 4, Type: float
			constexpr auto _chassisStartedMovingAudioEvent = 0xb8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _chassisStoppedMovingAudioEvent = 0xc0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _speedOfSoundMultiplerForDoppler = 0xc8; // Size: 4, Type: float
			constexpr auto _tireToSurfaceAudioData = 0xd0; // Size: 8, Type: struct UTireToSurfaceAudioData*
			constexpr auto _numAudioObjectsForTires = 0xd8; // Size: 4, Type: int32_t
			constexpr auto _tireEffectUpdateRange = 0x100; // Size: 4, Type: float
			constexpr auto _tireEffectProperties = 0x108; // Size: 16, Type: struct TArray<struct FDcxWheeledVehicleTireEffectProperties>
	}
} 
