namespace offsets
{
	namespace UDcxBikeDriverMountSlot
	{
			constexpr auto DriverLHandleSocketName = 0x140; // Size: 8, Type: struct FName
			constexpr auto DriverRHandleSocketName = 0x148; // Size: 8, Type: struct FName
			constexpr auto DriverReverseSeatHandSocketName = 0x150; // Size: 8, Type: struct FName
			constexpr auto _forwardIdleAnimation = 0x158; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _forwardSteeringAnimation = 0x160; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _forwardSteeringAnimationFP = 0x168; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _reverseIdleAnimation = 0x170; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _reverseSteeringAnimation = 0x178; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _reverseSteeringAnimationFP = 0x180; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _standUpStartAnimation = 0x188; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _standUpLoopAnimation = 0x190; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _standUpEndAnimation = 0x198; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineStartAnimation = 0x1a0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLoopAnimation = 0x1a8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLongLoopAnimation = 0x1b0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineEndAnimation = 0x1b8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _turnAimOffset = 0x1c0; // Size: 8, Type: struct UAimOffsetBlendSpace*
			constexpr auto _playratePerMovementPace[4] = 0x1c8; // Size: 16, Type: float
	}
} 
