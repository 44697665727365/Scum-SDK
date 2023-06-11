namespace offsets
{
	namespace UChatSpamProtectionRules
	{
			constexpr auto OffenceDuration = 0x30; // Size: 4, Type: float
			constexpr auto MessageRepetitions = 0x34; // Size: 4, Type: int32_t
			constexpr auto _conditions = 0x38; // Size: 80, Type: struct TMap<uint8_t , struct FSpamSeverityConditions>
			constexpr auto _consequences = 0x88; // Size: 80, Type: struct TMap<uint8_t , struct FSpamConsequences>
	}
} 
