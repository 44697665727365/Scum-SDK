namespace offsets
{
	namespace USedentaryNPCBackgroundInteraction
	{
			constexpr auto _backgroundInteractionType = 0x28; // Size: 1, Type: uint8_t 
			constexpr auto _priority = 0x2c; // Size: 4, Type: int32_t
			constexpr auto _cooldownTime = 0x30; // Size: 4, Type: float
			constexpr auto _canEverTick = 0x34; // Size: 1, Type: bool
			constexpr auto _newBackgroundInteractionInterval = 0x38; // Size: 16, Type: struct FFloatRange
			constexpr auto _animationVariationsBegin = 0x58; // Size: 16, Type: struct TArray<struct FSedentaryNPCHeadAnimationAndAudio>
			constexpr auto _animationVariationsTick = 0x68; // Size: 16, Type: struct TArray<struct FSedentaryNPCHeadAnimationAndAudio>
			constexpr auto _animationVariationsEnd = 0x78; // Size: 16, Type: struct TArray<struct FSedentaryNPCHeadAnimationAndAudio>
			constexpr auto _animationVariationsOneShot = 0x88; // Size: 16, Type: struct TArray<struct FSedentaryNPCHeadAnimationAndAudio>
			constexpr auto _stopOwningPawnAudioEvent = 0x98; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
