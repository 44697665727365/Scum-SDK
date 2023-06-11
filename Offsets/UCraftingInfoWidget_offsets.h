namespace offsets
{
	namespace UCraftingInfoWidget
	{
			constexpr auto ItemWidget = 0x260; // Size: 8, Type: struct UInspectedItemWidget*
			constexpr auto ComponentsGridPanel = 0x268; // Size: 8, Type: struct UGridPanel*
			constexpr auto CraftingGridPanel = 0x270; // Size: 8, Type: struct UGridPanel*
			constexpr auto ComponentsMinimizableWidget = 0x278; // Size: 8, Type: struct UUserWidget*
			constexpr auto CraftingMinimizableWidget = 0x280; // Size: 8, Type: struct UUserWidget*
			constexpr auto _switchWidgets = 0x2e0; // Size: 16, Type: struct TArray<struct UPreviousNextSwitchWidget*>
			constexpr auto _inventoryComponent = 0x2f0; // Size: 8, Type: struct TWeakObjectPtr<UPrisonerInventoryComponent>
			constexpr auto _craftingRecipe = 0x2f8; // Size: 56, Type: struct FCraftingRecipe
			constexpr auto TitleText = 0x350; // Size: 8, Type: struct UTextBlock*
			constexpr auto DescriptionText = 0x358; // Size: 8, Type: struct UTextBlock*
	}
} 
