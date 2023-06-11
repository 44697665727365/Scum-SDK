namespace offsets
{
	namespace UContinuousFuelHeatSource
	{
			constexpr auto _autoFindFuelConsumption = 0x228; // Size: 1, Type: bool
			constexpr auto _associatedFuelConsumptionEntityComponent = 0x22c; // Size: 8, Type: struct FName
			constexpr auto _resourceType = 0x238; // Size: 8, Type: UGameResourceType*
			constexpr auto _requiresMinimumAvailableEnergyAmountToTurnOn = 0x240; // Size: 1, Type: bool
			constexpr auto _isRecreateable = 0x241; // Size: 1, Type: bool
			constexpr auto _maxEnergyConsumptionRate = 0x244; // Size: 4, Type: float
			constexpr auto _repCurrentEnergyConsumptionRatio = 0x248; // Size: 1, Type: char
			constexpr auto _energyConsumptionRateVsTemperatureScaleCurve = 0x250; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _repDialValue = 0x2d8; // Size: 1, Type: char
			constexpr auto _dialOffValue = 0x2dc; // Size: 4, Type: float
			constexpr auto _minDialDeltaValueForRPC = 0x2e0; // Size: 4, Type: float
			constexpr auto _updateToServerCheckInterval = 0x2e4; // Size: 4, Type: float
	}
} 
