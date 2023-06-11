namespace offsets
{
	namespace UDcxBikeAnimInstance
	{
			constexpr auto RPM = 0xa48; // Size: 4, Type: float
			constexpr auto Speed = 0xa4c; // Size: 4, Type: float
			constexpr auto SpeedKph = 0xa50; // Size: 4, Type: float
			constexpr auto SteerRotation = 0xa54; // Size: 4, Type: float
			constexpr auto SteerAmount = 0xa58; // Size: 4, Type: float
			constexpr auto ThrottleAmount = 0xa5c; // Size: 4, Type: float
			constexpr auto BrakeAmount = 0xa60; // Size: 4, Type: float
			constexpr auto FrontWheelRotator = 0xa64; // Size: 12, Type: struct FRotator
			constexpr auto RearWheelRotator = 0xa70; // Size: 12, Type: struct FRotator
			constexpr auto TransmissionRotator = 0xa7c; // Size: 12, Type: struct FRotator
			constexpr auto FrontSuspensionOffset = 0xa88; // Size: 4, Type: float
			constexpr auto RearSuspensionRotation = 0xa8c; // Size: 4, Type: float
			constexpr auto MeshLocation = 0xa90; // Size: 12, Type: struct FVector
			constexpr auto IsMounteeDriver = 0xa9c; // Size: 1, Type: bool
	}
} 
