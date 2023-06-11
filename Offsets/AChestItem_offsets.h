namespace offsets
{
	namespace AChestItem
	{
			constexpr auto _capacityX = 0x928; // Size: 4, Type: int32_t
			constexpr auto _capacityY = 0x92c; // Size: 4, Type: int32_t
			constexpr auto _inventoryComponent = 0x930; // Size: 8, Type: struct UInventoryItemComponent*
			constexpr auto _inventoryContainer2D = 0x938; // Size: 8, Type: struct UInventoryContainer2D*
			constexpr auto _buriableChestItemComponent = 0x948; // Size: 8, Type: struct UBuriableChestItemComponent*
			constexpr auto _nameableItemComponent = 0x950; // Size: 8, Type: struct UNameableItemComponent*
			constexpr auto _canContainChestItem = 0x958; // Size: 1, Type: bool
			constexpr auto _lockpickableEnabled = 0x959; // Size: 1, Type: bool
			constexpr auto _overrideCanBeNamed = 0x95a; // Size: 1, Type: bool
			constexpr auto _canBeNamed = 0x95b; // Size: 1, Type: bool
			constexpr auto _containedItemsWeight = 0x95c; // Size: 4, Type: float
			constexpr auto _pendingContainedItemsRadiationAmount = 0x960; // Size: 4, Type: float
			constexpr auto _owningUserProfileId = 0x968; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _unlockTransform = 0x970; // Size: 48, Type: struct FTransform
			constexpr auto _forceUnlockMovementAcceptanceRadius = 0x9a0; // Size: 4, Type: float
			constexpr auto _lockItemsClasses = 0x9a8; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto _lockData = 0x9b8; // Size: 16, Type: struct TArray<struct ULockData*>
			constexpr auto _remainingNeutralizationAttemptsPerLock = 0x9c8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto _attachedBCULockItem = 0x9d8; // Size: 8, Type: struct TWeakObjectPtr<ABCULockItem>
			constexpr auto _locks = 0x9f0; // Size: 16, Type: struct TArray<struct FDbIntegerId>
			constexpr auto _activeAccessLevel = 0xa10; // Size: 1, Type: uint8_t 
			constexpr auto _cachedInventoryCount = 0xa14; // Size: 4, Type: int32_t
			constexpr auto _doesSupportBCULocking = 0xa18; // Size: 1, Type: bool
	}
} 
