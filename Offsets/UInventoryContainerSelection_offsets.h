namespace offsets
{
	namespace UInventoryContainerSelection
	{
			constexpr auto _maxNumOfItems = 0x30; // Size: 4, Type: int32_t
			constexpr auto _itemsRep = 0x48; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto _parentRep = 0x68; // Size: 8, Type: struct UObject*
			constexpr auto _data = 0x70; // Size: 40, Type: struct FInventoryContainerSelectionRepData
			constexpr auto _widgets = 0x98; // Size: 16, Type: struct TArray<struct UInventoryContainerWidget2*>
			constexpr auto _widget = 0xa8; // Size: 8, Type: struct UInventoryContainerWidget2*
	}
} 
