namespace offsets
{
	namespace ADcxWheeledVehicle
	{
			constexpr auto _driveComponent = 0xb08; // Size: 8, Type: struct UDcxVehicleDriveComponent*
			constexpr auto _doorsComponent = 0xb10; // Size: 8, Type: struct UVehicleDoorsComponent*
			constexpr auto _effectsComponent = 0xb18; // Size: 8, Type: struct UDcxWheeledVehicleEffectsComponent*
			constexpr auto _minimumNumberOfWheelsToBeDriven = 0xb74; // Size: 4, Type: int32_t
			constexpr auto _minimumNumberOfWheelsToBePushed = 0xb78; // Size: 4, Type: int32_t
			constexpr auto _minPushStartVelocity = 0xb7c; // Size: 4, Type: float
			constexpr auto _minPushStartVelocityIgnition = 0xb80; // Size: 4, Type: float
			constexpr auto _hornStartAudioEvent = 0xb88; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _hornStopAudioEvent = 0xb90; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _maxPushForce = 0xb98; // Size: 4, Type: float
			constexpr auto _minPushForce = 0xba0; // Size: 4, Type: float
			constexpr auto _maxPushForcePerPusher = 0xba4; // Size: 4, Type: float
			constexpr auto _minPushStartForce = 0xba8; // Size: 4, Type: float
			constexpr auto _speedToPushForceCurve = 0xbb0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _maxLinearVelocityWhenPushing = 0xbb8; // Size: 4, Type: float
			constexpr auto _maxAllowedDistanceFromPushStartingPlayer = 0xbbc; // Size: 4, Type: float
			constexpr auto _pusherActionDifficultyVsSpeed = 0xbc0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _pusherBaseStrengthChangeRateSpeedInfluenceVsSpeed = 0xc48; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _pusherBaseConstitutionChangeRateModifierVsSpeed = 0xcd0; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
