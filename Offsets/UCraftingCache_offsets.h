namespace offsets
{
	namespace UCraftingCache
	{
			constexpr auto IngredientPaths = 0x30; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto _craftingTypes = 0x40; // Size: 80, Type: struct TMap<UCraftingIngredientType*, struct FIngredientClassesArray>
			constexpr auto _ingredients = 0x90; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
			constexpr auto _recipes = 0xa0; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
	}
} 
