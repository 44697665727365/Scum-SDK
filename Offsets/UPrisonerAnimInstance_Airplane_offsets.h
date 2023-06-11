namespace offsets
{
	namespace UPrisonerAnimInstance_Airplane
	{
			constexpr auto _isDriver = 0x2b8; // Size: 1, Type: bool
			constexpr auto _pitchAmount = 0x2bc; // Size: 4, Type: float
			constexpr auto _rollAmount = 0x2c0; // Size: 4, Type: float
			constexpr auto _yawAmount = 0x2c4; // Size: 4, Type: float
			constexpr auto _throttleTransform = 0x2d0; // Size: 48, Type: struct FTransform
			constexpr auto _leftPedalTransform = 0x300; // Size: 48, Type: struct FTransform
			constexpr auto _rightPedalTransform = 0x330; // Size: 48, Type: struct FTransform
			constexpr auto _stickTransform = 0x360; // Size: 48, Type: struct FTransform
			constexpr auto _driverIdleAnimation = 0x390; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _passengerIdleAnimation = 0x398; // Size: 8, Type: struct UBlendSpace*
	}
} 
