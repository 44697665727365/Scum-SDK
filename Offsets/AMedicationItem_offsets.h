namespace offsets
{
	namespace AMedicationItem
	{
			constexpr auto Usage = 0x910; // Size: 1, Type: uint8_t 
			constexpr auto Type = 0x911; // Size: 1, Type: uint8_t 
			constexpr auto DailyDoses = 0x914; // Size: 4, Type: float
			constexpr auto TimeToAbsorbSeconds = 0x918; // Size: 4, Type: float
			constexpr auto EffectTimeMultiplier = 0x91c; // Size: 4, Type: float
			constexpr auto ReuseEffectTimeIncrease = 0x920; // Size: 4, Type: float
			constexpr auto MaxEffectTime = 0x924; // Size: 4, Type: float
			constexpr auto RepeatedAbuseReaction = 0x928; // Size: 1, Type: uint8_t 
	}
} 
