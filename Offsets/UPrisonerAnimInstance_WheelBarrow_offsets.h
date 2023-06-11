namespace offsets
{
	namespace UPrisonerAnimInstance_WheelBarrow
	{
			constexpr auto _wheelBarrowSpeed = 0x2b8; // Size: 4, Type: float
			constexpr auto _wheelBarrowSpeedKph = 0x2bc; // Size: 4, Type: float
			constexpr auto _wheelBarrowBumpiness = 0x2c0; // Size: 4, Type: float
			constexpr auto _wheelBarrowRollAngleRelativeToDriver = 0x2c4; // Size: 4, Type: float
			constexpr auto _isInCombatMode = 0x2c8; // Size: 1, Type: bool
			constexpr auto _isLimping = 0x2c9; // Size: 1, Type: bool
			constexpr auto _isDriver = 0x2ca; // Size: 1, Type: bool
			constexpr auto _driverIdleAnimation = 0x2d0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _driverWalkJogAnimation = 0x2d8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _driverWalkJogLimpingAnimation = 0x2e0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _driverLHandGripTransform = 0x2f0; // Size: 48, Type: struct FTransform
			constexpr auto _driverRHandGripTransform = 0x320; // Size: 48, Type: struct FTransform
			constexpr auto _driverSpineBendAngle = 0x350; // Size: 4, Type: float
			constexpr auto _driverSpineBendScale = 0x354; // Size: 4, Type: float
			constexpr auto _driverSpineBendAngleInterpSpeed = 0x358; // Size: 4, Type: float
			constexpr auto _driverSpineLeanAngle = 0x35c; // Size: 4, Type: float
			constexpr auto _driverSpineLeanScale = 0x360; // Size: 4, Type: float
			constexpr auto _driverSpineLeanAngleInterpSpeed = 0x364; // Size: 4, Type: float
			constexpr auto _driverHasFloor = 0x368; // Size: 1, Type: bool
			constexpr auto _isDriverMoving = 0x369; // Size: 1, Type: bool
			constexpr auto _driverSpeed = 0x36c; // Size: 4, Type: float
			constexpr auto _driverCourseAngle = 0x370; // Size: 4, Type: float
			constexpr auto _passengerIdleAnimation = 0x378; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _useVehicleWAPLowerBodyIdleTP = 0x380; // Size: 1, Type: bool
			constexpr auto _vehicleWAPLowerBodyIdleAimingTP = 0x388; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleRelaxedTP = 0x390; // Size: 8, Type: struct UAnimSequenceBase*
	}
} 
