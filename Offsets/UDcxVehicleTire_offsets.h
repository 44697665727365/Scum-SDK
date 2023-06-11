namespace offsets
{
	namespace UDcxVehicleTire
	{
			constexpr auto LateralStiffnessX = 0x34; // Size: 4, Type: float
			constexpr auto LateralStiffnessY = 0x38; // Size: 4, Type: float
			constexpr auto LongitudinalStiffnessPerUnitGravity = 0x3c; // Size: 4, Type: float
			constexpr auto CamberStiffnessPerUnitGravity = 0x40; // Size: 4, Type: float
			constexpr auto FrictionVsSlipGraph = 0x48; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto DrivableSurfaceToTireFrictionPairs = 0xd0; // Size: 16, Type: struct TArray<struct FDcxDrivableSurfaceToTireFrictionPair>
	}
} 
