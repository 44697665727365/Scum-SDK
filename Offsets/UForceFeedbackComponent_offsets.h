namespace offsets
{
	namespace UForceFeedbackComponent
	{
			constexpr auto ForceFeedbackEffect = 0x1f8; // Size: 8, Type: struct UForceFeedbackEffect*
			constexpr auto bAutoDestroy = 0x200; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x200; // Size: 1, Type: char
			constexpr auto bLooping = 0x200; // Size: 1, Type: char
			constexpr auto bIgnoreTimeDilation = 0x200; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x200; // Size: 1, Type: char
			constexpr auto IntensityMultiplier = 0x204; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x208; // Size: 8, Type: struct UForceFeedbackAttenuation*
			constexpr auto AttenuationOverrides = 0x210; // Size: 176, Type: struct FForceFeedbackAttenuationSettings
			constexpr auto OnForceFeedbackFinished = 0x2c0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
