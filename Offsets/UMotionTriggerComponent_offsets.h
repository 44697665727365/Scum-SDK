namespace offsets
{
	namespace UMotionTriggerComponent
	{
			constexpr auto TriggerForwardVector = 0x4d0; // Size: 12, Type: struct FVector
			constexpr auto TriggerAngle = 0x4dc; // Size: 4, Type: float
			constexpr auto MotionDetectionSensitivity = 0x4e0; // Size: 4, Type: float
			constexpr auto MotionDetectionDepletionSpeed = 0x4e4; // Size: 4, Type: float
			constexpr auto _motionDetector = 0x4e8; // Size: 4, Type: float
			constexpr auto _motionDetectorStartSound = 0x4f0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _motionDetectorEndSound = 0x4f8; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
