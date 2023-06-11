namespace offsets
{
	namespace UVehicleAttachment_Door
	{
			constexpr auto DoorSetup = 0x320; // Size: 96, Type: struct FVehicleAttachmentDoorSetup
			constexpr auto _flags = 0x380; // Size: 1, Type: uint8_t 
			constexpr auto _reservee = 0x388; // Size: 8, Type: struct UObject*
			constexpr auto _mountPathObstructionTags = 0x390; // Size: 16, Type: struct TArray<struct FGameplayTag>
	}
} 
