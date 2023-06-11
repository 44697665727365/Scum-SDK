namespace offsets
{
	namespace UDcxVehicleDriveComponent
	{
			constexpr auto EngineData = 0x270; // Size: 160, Type: struct FDcxVehicleEngineData
			constexpr auto GearboxData = 0x310; // Size: 48, Type: struct FDcxVehicleGearboxData
			constexpr auto ClutchData = 0x340; // Size: 16, Type: struct FDcxVehicleClutchData
			constexpr auto bAutoReverse = 0x350; // Size: 1, Type: bool
			constexpr auto WrongDirectionThreshold = 0x354; // Size: 4, Type: float
			constexpr auto bAutoBrake = 0x358; // Size: 1, Type: bool
			constexpr auto StopThreshold = 0x35c; // Size: 4, Type: float
			constexpr auto SteerCurve = 0x360; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
