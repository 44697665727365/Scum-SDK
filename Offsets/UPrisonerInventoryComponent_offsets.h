namespace offsets
{
	namespace UPrisonerInventoryComponent
	{
			constexpr auto ItemEquipped = 0xd8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ItemUnequipped = 0xe8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CraftingInfoWidgets = 0xf8; // Size: 16, Type: struct TArray<struct UCraftingInfoWidget*>
			constexpr auto AddSelectionDuration = 0x108; // Size: 4, Type: float
			constexpr auto AddSelectionReplicationDelay = 0x10c; // Size: 4, Type: float
			constexpr auto TickFrequency = 0x110; // Size: 4, Type: float
			constexpr auto _chipMesh = 0x120; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _quickAccessManager = 0x140; // Size: 8, Type: struct UQuickAccessManager*
			constexpr auto _vicinityItems = 0x160; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AItem>, uint32_t>
			constexpr auto _clothesPartsToDamageByMeleeAttackCapsuleAttachment = 0x1c8; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FClothesPartSet>
			constexpr auto _characterMeshClassesSorted = 0x218; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
			constexpr auto _parachuteClass = 0x228; // Size: 8, Type: AClothesItem*
			constexpr auto _inventoryClothes = 0x230; // Size: 8, Type: struct UInventoryContainerClothes*
			constexpr auto _inventoryHandsHolsters = 0x238; // Size: 8, Type: struct UInventoryContainerHandsHolsters*
			constexpr auto _inventorySelection2 = 0x240; // Size: 8, Type: struct UInventoryContainerSelection*
			constexpr auto _inventoryContainerClothes = 0x298; // Size: 8, Type: struct UInv2021_InventoryContainerClothes*
	}
} 
