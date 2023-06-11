namespace offsets
{
	namespace UInventoryItemComponent
	{
			constexpr auto _sizeX = 0xd0; // Size: 4, Type: int32_t
			constexpr auto _sizeY = 0xd4; // Size: 4, Type: int32_t
			constexpr auto _maxRowsPerPage = 0xd8; // Size: 4, Type: int32_t
			constexpr auto _replicatedPages = 0xf0; // Size: 16, Type: struct TArray<struct UInventoryItemComponentReplicatedPage*>
	}
} 
