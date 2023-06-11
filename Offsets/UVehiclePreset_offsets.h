namespace offsets
{
	namespace UVehiclePreset
	{
			constexpr auto VehicleAssetId = 0x30; // Size: 16, Type: struct FPrimaryAssetId
			constexpr auto MileageCurve = 0x40; // Size: 8, Type: struct UCurveFloat*
			constexpr auto RootNode = 0x48; // Size: 8, Type: struct UVehiclePresetNode*
			constexpr auto FuelAmountSpawnPercentageRange = 0x50; // Size: 16, Type: struct FFloatRange
			constexpr auto BatteryChargeSpawnPercentageRange = 0x60; // Size: 16, Type: struct FFloatRange
			constexpr auto LockClass = 0x70; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto VerticalSpawnOffset = 0x98; // Size: 4, Type: float
	}
} 
