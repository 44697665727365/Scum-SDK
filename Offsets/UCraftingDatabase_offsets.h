namespace offsets
{
	namespace UCraftingDatabase
	{
			constexpr auto CraftableItems = 0x30; // Size: 16, Type: struct TArray<struct UCraftableItem*>
			constexpr auto AssetPaths = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto CookableTag = 0x50; // Size: 8, Type: struct UCraftingItemTag*
			constexpr auto SmokableTag = 0x58; // Size: 8, Type: struct UCraftingItemTag*
			constexpr auto OpenItemTag = 0x60; // Size: 8, Type: struct UCraftingItemTag*
			constexpr auto LightFireTag = 0x68; // Size: 8, Type: struct UCraftingItemTag*
			constexpr auto ConservedFoodTag = 0x70; // Size: 8, Type: struct UCraftingItemTag*
			constexpr auto IngredientsGroup = 0x78; // Size: 8, Type: struct UItemGroup*
			constexpr auto IngredientsGroupPaths = 0x80; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto IngredientsExcludePaths = 0x90; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto _itemsByTags = 0xa0; // Size: 80, Type: struct TMap<struct UCraftingItemTag*, struct FItemClassesArray>
	}
} 
