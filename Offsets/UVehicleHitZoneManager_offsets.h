namespace offsets
{
	namespace UVehicleHitZoneManager
	{
			constexpr auto _vehicleHitMeshName = 0xd0; // Size: 8, Type: struct FName
			constexpr auto _engineBlock = 0xd8; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto _doors = 0xe8; // Size: 16, Type: struct TArray<struct FVehicleHitZoneData>
			constexpr auto _doorWindows = 0xf8; // Size: 16, Type: struct TArray<struct FVehicleHitZoneData>
			constexpr auto _wheelTires = 0x108; // Size: 16, Type: struct TArray<struct FVehicleHitZoneData>
			constexpr auto _airplaneWings = 0x118; // Size: 16, Type: struct TArray<struct FAirplaneWingHitZoneData>
	}
} 
