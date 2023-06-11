namespace offsets
{
	namespace UInventoryPanelThirdIteration
	{
			constexpr auto Hands = 0x260; // Size: 8, Type: struct UHandsHolstersWidget2*
			constexpr auto LeftHolster = 0x268; // Size: 8, Type: struct UHandsHolstersWidget2*
			constexpr auto RightHolster = 0x270; // Size: 8, Type: struct UHandsHolstersWidget2*
			constexpr auto _displayedCharacter = 0x278; // Size: 8, Type: struct TWeakObjectPtr<ACharacter>
			constexpr auto _tabRow = 0x280; // Size: 8, Type: struct UTabContainer*
			constexpr auto _inventoriesScrollBox = 0x288; // Size: 8, Type: struct UScrollBox*
			constexpr auto _nonContainerBox = 0x290; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _nonTradingBits = 0x298; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _tradingBits = 0x2a0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _inventoryAndHolstersSwitcher = 0x2a8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _inventoryTradingSwitcher = 0x2b0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _playerName = 0x2b8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _availabilityOverlayImage = 0x2c0; // Size: 8, Type: struct UImage*
			constexpr auto _inventories = 0x2c8; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<UObject>, struct UItemInventoryWidget2*>
			constexpr auto _sideLayers = 0x318; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<UObject>, struct UInventoryPanelSideLayerWidget*>
			constexpr auto _nonContainerItems = 0x368; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<UObject>, struct UItemWidget2*>
			constexpr auto _nonContainerItemsPadding = 0x3b8; // Size: 16, Type: struct FMargin
	}
} 
