namespace offsets
{
	namespace AConZEconomyManager
	{
			constexpr auto _traderManagingComponent = 0x2e0; // Size: 8, Type: struct UTraderManagingComponent*
			constexpr auto _autoSaveInterval = 0x2ec; // Size: 4, Type: float
			constexpr auto _shouldIgnoreDatabaseSerialization = 0x2f4; // Size: 1, Type: bool
			constexpr auto _prosperityLevelInfoPerLevel[6] = 0x310; // Size: 240, Type: struct FTradeOutpostProsperityLevelInfo
			constexpr auto _expensiveTradeablesSpawnChanceMap = 0x408; // Size: 80, Type: struct TMap<float, int32_t>
			constexpr auto _playerPurchasePriceDeltaVsChanceCurve = 0x458; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _betterPurchasePricesChance = 0x460; // Size: 4, Type: float
			constexpr auto _maxOutpostBuyingCapability = 0x464; // Size: 4, Type: float
			constexpr auto _maxOutpostGoldBuyingCapability = 0x468; // Size: 4, Type: int32_t
			constexpr auto _goldBasePrice = 0x46c; // Size: 4, Type: int32_t
			constexpr auto _playerGoldSalePriceModifier = 0x470; // Size: 4, Type: float
			constexpr auto _goldPriceChangePercentageStep = 0x474; // Size: 4, Type: float
			constexpr auto _goldPriceChangePerStep = 0x478; // Size: 4, Type: float
			constexpr auto _tradeableDescTable = 0x500; // Size: 8, Type: struct UDataTable*
			constexpr auto _economyOverrideJSONFileName = 0x8d8; // Size: 16, Type: struct FString
			constexpr auto _vehicleSpawnGroupParentTag = 0x8e8; // Size: 8, Type: struct FGameplayTag
			constexpr auto _defaultMaxPerGroup = 0xa14; // Size: 4, Type: int32_t
			constexpr auto _maxSaleDistance = 0xa18; // Size: 4, Type: float
			constexpr auto _tradeableBuyPriceMultiplierVsNumberOfPlayersCurve = 0xa30; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _tradeableSellPriceMultiplierVsNumberOfPlayersCurve = 0xa38; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _priceMultiplierBasedOnNumberOfPlayersInterval = 0xa4c; // Size: 4, Type: float
			constexpr auto _tradersUnlimitedStock = 0xa58; // Size: 1, Type: bool
			constexpr auto _isFamePointRequirementEnabled = 0xa5b; // Size: 1, Type: bool
			constexpr auto _pendingTraderPersonalities = 0xa60; // Size: 16, Type: struct TArray<struct FPendingTraderPersonalityDataHelperStruct>
			constexpr auto _shouldCommunicateWithMasterServer = 0xa80; // Size: 1, Type: bool
	}
} 
