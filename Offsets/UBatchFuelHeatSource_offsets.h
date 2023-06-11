namespace offsets
{
	namespace UBatchFuelHeatSource
	{
			constexpr auto _fuelMassCapacity = 0x220; // Size: 4, Type: float
			constexpr auto _initialFuelCombustionParams = 0x224; // Size: 8, Type: struct FCombustibleItemParams
			constexpr auto _initialFuelMass = 0x22c; // Size: 4, Type: float
			constexpr auto _temperatureMultiplierRain = 0x230; // Size: 4, Type: float
			constexpr auto _heightForBlowAirAnimation = 0x234; // Size: 1, Type: uint8_t 
			constexpr auto _distanceForBlowAirAnimation = 0x238; // Size: 4, Type: float
			constexpr auto _isBurning = 0x23c; // Size: 1, Type: bool
			constexpr auto _burningStage = 0x240; // Size: 4, Type: int32_t
			constexpr auto _repFuelMass = 0x244; // Size: 4, Type: float
	}
} 
