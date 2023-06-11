namespace offsets
{
	namespace UPrisonerAnimInstance_Boat
	{
			constexpr auto _vehicleSpeed = 0x2b8; // Size: 4, Type: float
			constexpr auto _vehicleSpeedKph = 0x2bc; // Size: 4, Type: float
			constexpr auto _isVehicleDriver = 0x2c0; // Size: 1, Type: bool
			constexpr auto _isRowing = 0x2c1; // Size: 1, Type: bool
			constexpr auto _isPaddling = 0x2c2; // Size: 1, Type: bool
			constexpr auto _isMotorPropelled = 0x2c3; // Size: 1, Type: bool
			constexpr auto _isSailing = 0x2c4; // Size: 1, Type: bool
			constexpr auto _sailsDeployAmount = 0x2c8; // Size: 4, Type: float
			constexpr auto _sailsSteerAmount = 0x2cc; // Size: 4, Type: float
			constexpr auto _sailsTurnAmount = 0x2d0; // Size: 4, Type: float
			constexpr auto _paddleCounter = 0x2d4; // Size: 4, Type: int32_t
			constexpr auto _vehicleThrottleAmount = 0x2d8; // Size: 4, Type: float
			constexpr auto _vehicleBrakeAmount = 0x2dc; // Size: 4, Type: float
			constexpr auto _vehicleSteerAmount = 0x2e0; // Size: 4, Type: float
			constexpr auto _numPaddleSwingsInOneHand = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto _vehicleDriverForwardIdleAnimation = 0x2e8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _vehiclePassengerIdleAnimation = 0x2f0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _boatDriverPaddleLAnimation = 0x2f8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _boatDriverPaddleRAnimation = 0x300; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _boatDriverPaddleLToRAnimation = 0x308; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _boatDriverPaddleRToLAnimation = 0x310; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _paddleInHand = 0x318; // Size: 4, Type: float
			constexpr auto _motorHandleSocketTransform = 0x320; // Size: 48, Type: struct FTransform
			constexpr auto _sailsHandleSocketTransform = 0x350; // Size: 48, Type: struct FTransform
			constexpr auto _rudderSocketTransform = 0x380; // Size: 48, Type: struct FTransform
			constexpr auto _maxSpineLeanAngle = 0x3b0; // Size: 4, Type: float
			constexpr auto _spineLeanAmountForHandlingMotor = 0x3b4; // Size: 4, Type: float
			constexpr auto _movementPace = 0x3b8; // Size: 1, Type: uint8_t 
			constexpr auto _normalizedMovementPace = 0x3bc; // Size: 4, Type: float
			constexpr auto _playRateFromMovementPace = 0x3c0; // Size: 4, Type: float
			constexpr auto _engineState = 0x3c4; // Size: 1, Type: uint8_t 
			constexpr auto _useVehicleWAPLowerBodyIdleTP = 0x3c5; // Size: 1, Type: bool
			constexpr auto _vehicleWAPLowerBodyIdleAimingTP = 0x3c8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleRelaxedTP = 0x3d0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _isInCombatMode = 0x3d8; // Size: 1, Type: bool
			constexpr auto _startEngineStartAnimation = 0x3e0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLoopAnimation = 0x3e8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLongLoopAnimation = 0x3f0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineEndAnimation = 0x3f8; // Size: 8, Type: struct UAnimSequence*
	}
} 
