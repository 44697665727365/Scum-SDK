namespace offsets
{
	namespace AWheeledVehicleBase
	{
			constexpr auto _tireToSurfaceAudioData = 0xb28; // Size: 8, Type: struct UTireToSurfaceAudioData*
			constexpr auto _powertrainComponent = 0xb40; // Size: 8, Type: struct UVehicleGearedEnginePowertrainComponent*
			constexpr auto _doorsComponent = 0xb48; // Size: 8, Type: struct UVehicleDoorsComponent*
			constexpr auto _brakeStrength = 0xb78; // Size: 4, Type: float
			constexpr auto _engineAccelerationCurve = 0xb80; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _engineTorqueCurve = 0xb88; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _maxPushForce = 0xb90; // Size: 4, Type: float
			constexpr auto _minPushForce = 0xb98; // Size: 4, Type: float
			constexpr auto _maxPushForcePerPusher = 0xb9c; // Size: 4, Type: float
			constexpr auto _minPushStartForce = 0xba0; // Size: 4, Type: float
			constexpr auto _speedToPushForceCurve = 0xba8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _maxLinearVelocityWhenPushing = 0xbb0; // Size: 4, Type: float
			constexpr auto _maxAllowedDistanceFromPushStartingPlayer = 0xbb4; // Size: 4, Type: float
			constexpr auto _steeringResetSpeed = 0xbb8; // Size: 4, Type: float
			constexpr auto _steeringSpeedCurve = 0xbc0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _steeringStaticMesh = 0xbc8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _dragCoefficient = 0xbd0; // Size: 4, Type: float
			constexpr auto _airDensity = 0xbd4; // Size: 4, Type: float
			constexpr auto _additionalGravityFactor = 0xbd8; // Size: 4, Type: float
			constexpr auto _antiDriftMultiplier = 0xbdc; // Size: 4, Type: float
			constexpr auto _antiRollMultiplier = 0xbe0; // Size: 4, Type: float
			constexpr auto _antiPitchMultiplier = 0xbe4; // Size: 4, Type: float
			constexpr auto _minimumNumberOfWheelsToBeDriven = 0xbfc; // Size: 4, Type: int32_t
			constexpr auto _minimumNumberOfWheelsToBePushed = 0xc00; // Size: 4, Type: int32_t
			constexpr auto _hornStartAudioEvent = 0xc08; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _hornStopAudioEvent = 0xc10; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _pusherActionDifficultyVsSpeed = 0xc20; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _pusherBaseStrengthChangeRateSpeedInfluenceVsSpeed = 0xca8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _pusherBaseConstitutionChangeRateModifierVsSpeed = 0xd30; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
