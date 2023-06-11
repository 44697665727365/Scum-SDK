namespace offsets
{
	namespace UDcxWheeledVehicleAnimInstance
	{
			constexpr auto EngineState = 0xa48; // Size: 1, Type: uint8_t 
			constexpr auto IsEngineRunning = 0xa49; // Size: 1, Type: bool
			constexpr auto EngineRpm = 0xa4c; // Size: 4, Type: float
			constexpr auto EngineRpmInterpSpeed = 0xa50; // Size: 4, Type: float
			constexpr auto Speed = 0xa54; // Size: 4, Type: float
			constexpr auto SpeedKph = 0xa58; // Size: 4, Type: float
			constexpr auto MaxSteeringWheelSteerAngle = 0xa5c; // Size: 4, Type: float
			constexpr auto SteeringWheelSteerAngleInterpSpeed = 0xa60; // Size: 4, Type: float
			constexpr auto CurrentSteeringWheelSteerAngle = 0xa64; // Size: 4, Type: float
			constexpr auto DoorOpenPercentage = 0xa68; // Size: 16, Type: struct TArray<float>
			constexpr auto DoorWindowOpenPercentage = 0xa78; // Size: 16, Type: struct TArray<float>
	}
} 
