namespace offsets
{
	namespace UEconomySpecificData
	{
			constexpr auto CashItemClass = 0x30; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CashStackMaxValue = 0x58; // Size: 4, Type: int32_t
			constexpr auto DepotItemClass = 0x60; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto VehicleLockItemClass = 0x88; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto BasePriceModifierPerTradeCategory[1c] = 0xb0; // Size: 112, Type: float
			constexpr auto BaseSalePriceReductionModifierPerTradeCategory[1c] = 0x120; // Size: 112, Type: float
			constexpr auto CurrencyDescriptions[3] = 0x190; // Size: 312, Type: struct FCurrencyDescription
			constexpr auto CardDataPerBankCardType = 0x2c8; // Size: 80, Type: struct TMap<uint8_t , struct FBankCardTypeData>
			constexpr auto ATMProvisionPercentage = 0x318; // Size: 4, Type: float
			constexpr auto BankerProvisionPercentage = 0x31c; // Size: 4, Type: float
			constexpr auto RotationRarityVsAvailabilityChance = 0x320; // Size: 80, Type: struct TMap<struct FGameplayTag, float>
			constexpr auto OutpostProsperityVsAvailabilityChanceIncrease[6] = 0x370; // Size: 24, Type: float
	}
} 
