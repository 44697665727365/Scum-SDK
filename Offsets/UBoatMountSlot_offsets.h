namespace offsets
{
	namespace UBoatMountSlot
	{
			constexpr auto _controlType = 0x140; // Size: 1, Type: uint8_t 
			constexpr auto _paddlingLHandAnimation = 0x148; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _paddlingRHandAnimation = 0x150; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _paddlingLToRAnimation = 0x158; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _paddlingRToLAnimation = 0x160; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineStartAnimation = 0x168; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLoopAnimation = 0x170; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineLongLoopAnimation = 0x178; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _startEngineEndAnimation = 0x180; // Size: 8, Type: struct UAnimSequence*
	}
} 
