namespace offsets
{
	namespace ACookedFoodItem
	{
			constexpr auto SpoilageRateCooked = 0x9b0; // Size: 4, Type: float
			constexpr auto TargetGramsPerUse = 0x9b4; // Size: 4, Type: float
			constexpr auto _inventoryIcon_Raw = 0x9b8; // Size: 8, Type: struct UTexture2D*
			constexpr auto _inventoryIconInHands_Raw = 0x9c0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _outsideInventoryIcon_Raw = 0x9c8; // Size: 8, Type: struct UTexture2D*
			constexpr auto _inventoryIcon_Burnt = 0x9d0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _inventoryIconInHands_Burnt = 0x9d8; // Size: 8, Type: struct UTexture2D*
			constexpr auto _outsideInventoryIcon_Burnt = 0x9e0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _idealServingTemperatureMin = 0x9e8; // Size: 4, Type: float
			constexpr auto _idealServingTemperatureMax = 0x9ec; // Size: 4, Type: float
			constexpr auto _exhaustionBonusDeltaPerCookQualityLevel = 0x9f0; // Size: 16, Type: struct TArray<float>
			constexpr auto _cachedGameResourceType = 0xa00; // Size: 8, Type: struct UGameResourceType*
	}
} 
