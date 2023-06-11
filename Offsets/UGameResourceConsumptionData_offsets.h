namespace offsets
{
	namespace UGameResourceConsumptionData
	{
			constexpr auto ConsumptionMethod = 0x28; // Size: 1, Type: uint8_t 
			constexpr auto ConsumptionDuration = 0x2c; // Size: 8, Type: struct FGameplayTag
			constexpr auto DigestionDuration = 0x34; // Size: 8, Type: struct FGameplayTag
			constexpr auto Density = 0x3c; // Size: 4, Type: float
			constexpr auto TotalCarbohydrate = 0x40; // Size: 4, Type: float
			constexpr auto Fiber = 0x44; // Size: 4, Type: float
			constexpr auto Starch = 0x48; // Size: 4, Type: float
			constexpr auto Sugars = 0x4c; // Size: 4, Type: float
			constexpr auto TotalFat = 0x50; // Size: 4, Type: float
			constexpr auto SaturatedFat = 0x54; // Size: 4, Type: float
			constexpr auto Protein = 0x58; // Size: 4, Type: float
			constexpr auto VitaminA = 0x5c; // Size: 4, Type: float
			constexpr auto VitaminC = 0x60; // Size: 4, Type: float
			constexpr auto VitaminD = 0x64; // Size: 4, Type: float
			constexpr auto VitaminE = 0x68; // Size: 4, Type: float
			constexpr auto VitaminK = 0x6c; // Size: 4, Type: float
			constexpr auto VitaminB1 = 0x70; // Size: 4, Type: float
			constexpr auto VitaminB2 = 0x74; // Size: 4, Type: float
			constexpr auto VitaminB3 = 0x78; // Size: 4, Type: float
			constexpr auto VitaminB6 = 0x7c; // Size: 4, Type: float
			constexpr auto VitaminB9 = 0x80; // Size: 4, Type: float
			constexpr auto VitaminB12 = 0x84; // Size: 4, Type: float
			constexpr auto VitaminB5 = 0x88; // Size: 4, Type: float
			constexpr auto VitaminB4 = 0x8c; // Size: 4, Type: float
			constexpr auto Calcium = 0x90; // Size: 4, Type: float
			constexpr auto Iron = 0x94; // Size: 4, Type: float
			constexpr auto Magnesium = 0x98; // Size: 4, Type: float
			constexpr auto Phosphorus = 0x9c; // Size: 4, Type: float
			constexpr auto Potassium = 0xa0; // Size: 4, Type: float
			constexpr auto Sodium = 0xa4; // Size: 4, Type: float
			constexpr auto Zinc = 0xa8; // Size: 4, Type: float
			constexpr auto Copper = 0xac; // Size: 4, Type: float
			constexpr auto Manganese = 0xb0; // Size: 4, Type: float
			constexpr auto Selenium = 0xb4; // Size: 4, Type: float
			constexpr auto Alcohol = 0xb8; // Size: 4, Type: float
			constexpr auto Water = 0xbc; // Size: 4, Type: float
			constexpr auto ForeignSubstances = 0xc0; // Size: 16, Type: struct TArray<struct FGameResourceConsumptionDataForeignSubstance>
			constexpr auto DisgustAmountPerGramOfRawFood = 0xd0; // Size: 4, Type: float
			constexpr auto DigestionHandlers = 0xd8; // Size: 16, Type: struct TArray<struct UConsumableDigestionHandler*>
	}
} 
