namespace offsets
{
	namespace UMediaSoundComponent
	{
			constexpr auto Channels = 0x6c0; // Size: 4, Type: uint8_t 
			constexpr auto DynamicRateAdjustment = 0x6c4; // Size: 1, Type: bool
			constexpr auto RateAdjustmentFactor = 0x6c8; // Size: 4, Type: float
			constexpr auto RateAdjustmentRange = 0x6cc; // Size: 16, Type: struct FFloatRange
			constexpr auto MediaPlayer = 0x6e0; // Size: 8, Type: struct UMediaPlayer*
	}
} 
