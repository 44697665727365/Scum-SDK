namespace offsets
{
	namespace UCraftingRecipeWidget
	{
			constexpr auto ItemWidget = 0x260; // Size: 8, Type: struct UItemClassWidget*
			constexpr auto _itemImage = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto _additionalText = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto _craftableItem = 0x298; // Size: 8, Type: struct UCraftableItem*
			constexpr auto _clickSound = 0x2b0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _tooltipClass = 0x2b8; // Size: 8, Type: UTooltipBase*
			constexpr auto _greyedOutMaterial = 0x2c0; // Size: 8, Type: struct UMaterial*
			constexpr auto _nonGreyedOutMaterial = 0x2c8; // Size: 8, Type: struct UMaterial*
			constexpr auto EmptySlot = 0x2d0; // Size: 8, Type: struct UEmptySlot*
			constexpr auto MainRetainerBox = 0x2d8; // Size: 8, Type: struct URetainerBox*
			constexpr auto BackgroundImage = 0x2e0; // Size: 8, Type: struct UImage*
			constexpr auto SelectionBox = 0x2e8; // Size: 8, Type: struct UImage*
			constexpr auto BoxNextLevel = 0x2f0; // Size: 8, Type: struct UTexture2D*
			constexpr auto BoxRedNoComponents = 0x2f8; // Size: 8, Type: struct UTexture2D*
			constexpr auto BoxYellowComponentsMissing = 0x300; // Size: 8, Type: struct UTexture2D*
	}
} 
