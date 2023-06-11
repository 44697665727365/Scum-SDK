namespace offsets
{
	namespace UAirplaneAnimInstance
	{
			constexpr auto IsAnyoneMounted = 0x2b8; // Size: 1, Type: bool
			constexpr auto Speed = 0x2bc; // Size: 4, Type: float
			constexpr auto SpeedKph = 0x2c0; // Size: 4, Type: float
			constexpr auto PropellerRotationAngle = 0x2c4; // Size: 4, Type: float
			constexpr auto LeftAileronsAngle = 0x2c8; // Size: 4, Type: float
			constexpr auto RightAileronsAngle = 0x2cc; // Size: 4, Type: float
			constexpr auto ElevatorsAngle = 0x2d0; // Size: 4, Type: float
			constexpr auto RudderAngle = 0x2d4; // Size: 4, Type: float
			constexpr auto IsMounteeDriver = 0x2d8; // Size: 1, Type: bool
			constexpr auto clockMinuteRotation = 0x2dc; // Size: 4, Type: float
			constexpr auto clockHourRotation = 0x2e0; // Size: 4, Type: float
			constexpr auto altimeterTensRotation = 0x2e4; // Size: 4, Type: float
			constexpr auto altimeterHundredsRotation = 0x2e8; // Size: 4, Type: float
			constexpr auto altimeterThousandsRotation = 0x2ec; // Size: 4, Type: float
			constexpr auto airSpeedRotation = 0x2f0; // Size: 4, Type: float
			constexpr auto rpmRotation = 0x2f4; // Size: 4, Type: float
			constexpr auto verticalSpeedRotation = 0x2f8; // Size: 4, Type: float
			constexpr auto throttleLeverRotation = 0x2fc; // Size: 4, Type: float
			constexpr auto leftYawPedalRotation = 0x300; // Size: 4, Type: float
			constexpr auto rightYawPedalRotation = 0x304; // Size: 4, Type: float
			constexpr auto stickRotator = 0x308; // Size: 12, Type: struct FRotator
			constexpr auto headingRotator = 0x314; // Size: 12, Type: struct FRotator
			constexpr auto shouldHidePropellerBone = 0x320; // Size: 1, Type: bool
	}
} 
