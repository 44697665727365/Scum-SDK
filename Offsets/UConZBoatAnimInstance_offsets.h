namespace offsets
{
	namespace UConZBoatAnimInstance
	{
			constexpr auto IsAnyoneMounted = 0x2b8; // Size: 1, Type: bool
			constexpr auto Speed = 0x2bc; // Size: 4, Type: float
			constexpr auto SpeedKph = 0x2c0; // Size: 4, Type: float
			constexpr auto MaxEngineSteerAngle = 0x2c4; // Size: 4, Type: float
			constexpr auto EngineSteerAngleInterpSpeed = 0x2c8; // Size: 4, Type: float
			constexpr auto CurrentEngineSteerAngle = 0x2cc; // Size: 4, Type: float
			constexpr auto PropellerRotationAngle = 0x2d0; // Size: 4, Type: float
			constexpr auto PropellerRotationSpeedScale = 0x2d4; // Size: 4, Type: float
			constexpr auto SailsRotationAngle = 0x2d8; // Size: 4, Type: float
			constexpr auto IsMounteeDriver = 0x2dc; // Size: 1, Type: bool
			constexpr auto IsMounteeRowing = 0x2dd; // Size: 1, Type: bool
			constexpr auto _prisonerLHandTransform = 0x2e0; // Size: 48, Type: struct FTransform
			constexpr auto _prisonerRHandTransform = 0x310; // Size: 48, Type: struct FTransform
			constexpr auto WindDirection = 0x340; // Size: 12, Type: struct FVector
	}
} 
