namespace offsets
{
	namespace UGameResourceType
	{
			constexpr auto ResourceName = 0x28; // Size: 24, Type: struct FText
			constexpr auto ConfigSectionName = 0x40; // Size: 16, Type: struct FString
			constexpr auto CanWashWith = 0x50; // Size: 1, Type: bool
			constexpr auto CanPutOutFireWith = 0x51; // Size: 1, Type: bool
			constexpr auto CanDisinfectWith = 0x52; // Size: 1, Type: bool
			constexpr auto CookingIngredientTag = 0x54; // Size: 8, Type: struct FGameplayTag
			constexpr auto ResourceImage = 0x60; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto Color = 0x88; // Size: 16, Type: struct FLinearColor
			constexpr auto ConsumptionData = 0x98; // Size: 8, Type: struct UGameResourceConsumptionData*
	}
} 
