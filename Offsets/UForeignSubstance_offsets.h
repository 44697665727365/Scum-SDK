namespace offsets
{
	namespace UForeignSubstance
	{
			constexpr auto _name = 0x28; // Size: 24, Type: struct FText
			constexpr auto _disposition = 0x40; // Size: 1, Type: uint8_t 
			constexpr auto _absorptionCapacity = 0x44; // Size: 4, Type: float
			constexpr auto _absorptionRate = 0x48; // Size: 4, Type: float
			constexpr auto _baseDiscardRate = 0x4c; // Size: 4, Type: float
			constexpr auto _discardRateMultiplierPerOtherSubstance = 0x50; // Size: 80, Type: struct TMap<UForeignSubstance*, struct FRuntimeFloatCurve>
			constexpr auto _amountToDiscardPerWaterTransferredToBladder = 0xa0; // Size: 4, Type: float
	}
} 
