namespace offsets
{
	namespace UPrisonerBodyCondition_Exhaustion
	{
			constexpr auto _state = 0xc0; // Size: 1, Type: uint8_t 
			constexpr auto _exhaustionAmount = 0xc8; // Size: 4, Type: float
			constexpr auto _exhaustionAmountAtRecoveryStart = 0xcc; // Size: 4, Type: float
			constexpr auto _severityVsExhaustion = 0xd0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _severityToStartMaxStaminaReduction = 0x158; // Size: 4, Type: float
			constexpr auto _maxStaminaReduction = 0x15c; // Size: 4, Type: float
	}
} 
