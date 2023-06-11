namespace offsets
{
	namespace ULockableItemComponent
	{
			constexpr auto _staticLocks = 0xd0; // Size: 16, Type: struct TArray<struct ULockData*>
			constexpr auto _lockItems = 0xe0; // Size: 16, Type: struct TArray<struct ULockItemTag*>
			constexpr auto _activeAccessLevel = 0xf0; // Size: 1, Type: uint8_t 
	}
} 
