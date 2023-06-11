namespace offsets
{
	namespace UConZVehicleAnimInstance
	{
			constexpr auto EngineState = 0x2b8; // Size: 1, Type: uint8_t 
			constexpr auto IsEngineRunning = 0x2b9; // Size: 1, Type: bool
			constexpr auto EngineRpm = 0x2bc; // Size: 4, Type: float
			constexpr auto EngineRpmInterpSpeed = 0x2c0; // Size: 4, Type: float
			constexpr auto Speed = 0x2c4; // Size: 4, Type: float
			constexpr auto SpeedKph = 0x2c8; // Size: 4, Type: float
			constexpr auto MaxSteeringWheelSteerAngle = 0x2cc; // Size: 4, Type: float
			constexpr auto SteeringWheelSteerAngleInterpSpeed = 0x2d0; // Size: 4, Type: float
			constexpr auto CurrentSteeringWheelSteerAngle = 0x2d4; // Size: 4, Type: float
			constexpr auto DoorOpenPercentage = 0x2d8; // Size: 16, Type: struct TArray<float>
			constexpr auto DoorWindowOpenPercentage = 0x2e8; // Size: 16, Type: struct TArray<float>
	}
} 
