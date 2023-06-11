namespace offsets
{
	namespace UChestItemState
	{
			constexpr auto OwningUserProfileId = 0x100; // Size: 8, Type: struct FDbIntegerId
			constexpr auto ContainedItemsWeight = 0x108; // Size: 4, Type: float
			constexpr auto ActiveAccessLevel = 0x10c; // Size: 1, Type: uint8_t 
			constexpr auto Locks = 0x110; // Size: 16, Type: struct TArray<struct FDbIntegerId>
	}
} 
