namespace offsets
{
	namespace UCookingRecipe
	{
			constexpr auto RecipeName = 0x30; // Size: 24, Type: struct FText
			constexpr auto Description = 0x48; // Size: 24, Type: struct FText
			constexpr auto MainIngredients = 0x60; // Size: 16, Type: struct TArray<struct FRecipeIngredient>
			constexpr auto OptionalIngredients = 0x70; // Size: 16, Type: struct TArray<struct FRecipeIngredient>
			constexpr auto ResultingFood = 0x80; // Size: 40, Type: struct FCookingResult
			constexpr auto CookingTemperature = 0xa8; // Size: 4, Type: float
			constexpr auto CookingTime = 0xac; // Size: 4, Type: float
			constexpr auto Utility = 0xb0; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto Category = 0xd0; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto CookProgressMesh = 0xf0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto CookProgressMeshMaterial = 0x118; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto CookProgressMeshMaterialSlot = 0x140; // Size: 4, Type: int32_t
			constexpr auto UseMeshRelativeTransform = 0x144; // Size: 1, Type: bool
			constexpr auto CookProgressMeshRelativeTransform = 0x150; // Size: 48, Type: struct FTransform
			constexpr auto CookProgressMeshFacesHeatsource = 0x180; // Size: 1, Type: bool
			constexpr auto StartCookingEvent = 0x188; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopCookingEvent = 0x190; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
