namespace offsets
{
	namespace UTraderPersonalityDataAsset
	{
			constexpr auto TraderPersistentId = 0x30; // Size: 16, Type: struct FGuid
			constexpr auto HumanReadableTraderName = 0x40; // Size: 16, Type: struct FString
			constexpr auto TraderType = 0x50; // Size: 1, Type: uint8_t 
			constexpr auto PurchasableTradeablesClassesOverride = 0x58; // Size: 16, Type: struct TArray<struct FTraderMarkerTradeableOverrideStruct>
	}
} 
