namespace offsets
{
	namespace UPrisonerBodyCondition_AcuteRadiationSyndrome
	{
			constexpr auto _amount = 0xc0; // Size: 4, Type: float
			constexpr auto _maxAmount = 0xc4; // Size: 4, Type: float
			constexpr auto _amountAtRecoveryStart = 0xc8; // Size: 4, Type: float
			constexpr auto _severityVsAmountRatio = 0xd0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _increaseRateVsEffectiveRadiationAmountRatio = 0x158; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _decreaseRateVsSeverity = 0x1e0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _decreaseRateMultiplierVsConstitutionRatio = 0x268; // Size: 8, Type: struct FFloatInterval
			constexpr auto _randomBleedingIntervalRange = 0x270; // Size: 8, Type: struct FFloatInterval
			constexpr auto _randomBleedingChanceVsSeverity = 0x278; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _randomBleedingTimer = 0x300; // Size: 4, Type: float
			constexpr auto _chosenRandomBleedingInterval = 0x304; // Size: 4, Type: float
			constexpr auto _state = 0x308; // Size: 1, Type: uint8_t 
	}
} 
