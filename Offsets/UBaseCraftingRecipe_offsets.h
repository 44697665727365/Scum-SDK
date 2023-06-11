namespace offsets
{
	namespace UBaseCraftingRecipe
	{
			constexpr auto RecipeName = 0x28; // Size: 16, Type: struct FString
			constexpr auto RecipeCategory = 0x38; // Size: 1, Type: uint8_t 
			constexpr auto RecipeOrder = 0x3c; // Size: 4, Type: int32_t
			constexpr auto CustomCraftingMontage = 0x40; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CustomStartCraftingAudioEvent = 0x48; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto CustomStopCraftingAudioEvent = 0x50; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto GlobalConditions = 0x58; // Size: 16, Type: struct TArray<struct UCraftingCondition*>
			constexpr auto IngredientSlots = 0x68; // Size: 16, Type: struct TArray<struct FCraftingSlot>
			constexpr auto PossibleProducts = 0x78; // Size: 16, Type: struct TArray<struct FCraftingProductDescription>
	}
} 
