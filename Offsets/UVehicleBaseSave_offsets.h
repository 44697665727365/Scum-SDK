namespace offsets
{
	namespace UVehicleBaseSave
	{
			constexpr auto LastAccessTime = 0x28; // Size: 8, Type: int64_t
			constexpr auto TimeUntilDestructionInSeconds = 0x30; // Size: 4, Type: float
			constexpr auto PackedSimulationState = 0x38; // Size: 8, Type: uint64_t
			constexpr auto Mileage = 0x40; // Size: 4, Type: float
			constexpr auto VehicleAttachments = 0x48; // Size: 16, Type: struct TArray<struct FVehicleAttachmentSave>
			constexpr auto LastSteadyLocation = 0x58; // Size: 12, Type: struct FVector
	}
} 
