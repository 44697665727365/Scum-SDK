namespace offsets
{
	namespace UPrisonerBodyCondition_RadiationPresence
	{
			constexpr auto _radiationAmount = 0xc0; // Size: 4, Type: float
			constexpr auto _radiationMaxAmount = 0xc4; // Size: 4, Type: float
			constexpr auto _radiationAmountAtRecoveryStart = 0xc8; // Size: 4, Type: float
			constexpr auto _baseRadiationDispersionRate = 0xcc; // Size: 4, Type: float
			constexpr auto _radiationDispersionRatePerActionDifficulty = 0xd0; // Size: 24, Type: struct FPrisonerActionDifficultyCurve
			constexpr auto _radiationDispersionRateIncreaseWhileSwimming = 0xe8; // Size: 4, Type: float
			constexpr auto _effectiveRadiationAmountChangePerForeignSubstancePresence = 0xf0; // Size: 80, Type: struct TMap<UForeignSubstance*, struct FRuntimeFloatCurve>
			constexpr auto _radiationAmountDecreaseViaUrination = 0x140; // Size: 4, Type: float
			constexpr auto _radiationIncreaseRateToInstantlyDie = 0x144; // Size: 4, Type: float
			constexpr auto _state = 0x148; // Size: 1, Type: uint8_t 
	}
} 
