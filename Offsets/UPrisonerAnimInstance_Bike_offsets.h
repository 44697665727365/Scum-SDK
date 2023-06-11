namespace offsets
{
	namespace UPrisonerAnimInstance_Bike
	{
			constexpr auto _bikeSpeed = 0x2b8; // Size: 4, Type: float
			constexpr auto _bikeSpeedKmh = 0x2bc; // Size: 4, Type: float
			constexpr auto _steerAmount = 0x2c0; // Size: 4, Type: float
			constexpr auto _brakeAmount = 0x2c4; // Size: 4, Type: float
			constexpr auto _throttleAmount = 0x2c8; // Size: 4, Type: float
			constexpr auto _isInCombatMode = 0x2cc; // Size: 1, Type: bool
			constexpr auto _isDriver = 0x2cd; // Size: 1, Type: bool
			constexpr auto _isBicycle = 0x2ce; // Size: 1, Type: bool
			constexpr auto _vehicleRoll = 0x2d0; // Size: 4, Type: float
			constexpr auto _lerpedBrakeThrottle = 0x2d4; // Size: 4, Type: float
			constexpr auto _inAirTimer = 0x2d8; // Size: 4, Type: float
			constexpr auto _driverIdlePlayRate = 0x2dc; // Size: 4, Type: float
			constexpr auto _isStartingEngine = 0x2e0; // Size: 1, Type: bool
			constexpr auto _driverIdleAnimation = 0x2e8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _driverReverseIdleAnimation = 0x2f0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _driverLHandleTransform = 0x300; // Size: 48, Type: struct FTransform
			constexpr auto _driverRHandleTransform = 0x330; // Size: 48, Type: struct FTransform
			constexpr auto _driverReverseSeatHandTransform = 0x360; // Size: 48, Type: struct FTransform
			constexpr auto _driverLFootRestTransform = 0x390; // Size: 48, Type: struct FTransform
			constexpr auto _driverRFootRestTransform = 0x3c0; // Size: 48, Type: struct FTransform
			constexpr auto _passengerIdleAnimation = 0x3f0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _useVehicleWAPLowerBodyIdleTP = 0x3f8; // Size: 1, Type: bool
			constexpr auto _vehicleWAPLowerBodyIdleAimingTP = 0x400; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleRelaxedTP = 0x408; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _startEngineStartAnimation = 0x410; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLoopAnimation = 0x418; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLongLoopAnimation = 0x420; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineEndAnimation = 0x428; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _standUpStartAnimation = 0x430; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _standUpLoopAnimation = 0x438; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _standUpEndAnimation = 0x440; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _turnAimOffset = 0x448; // Size: 8, Type: struct UAimOffsetBlendSpace*
	}
} 
