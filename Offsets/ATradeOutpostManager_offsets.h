namespace offsets
{
	namespace ATradeOutpostManager
	{
			constexpr auto _sprite = 0x220; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto _outpostDescription = 0x228; // Size: 8, Type: struct UTradingOutpostDescriptionDataAsset*
			constexpr auto _startingProsperityLevel = 0x230; // Size: 1, Type: uint8_t 
			constexpr auto _assignedTradePosts = 0x238; // Size: 16, Type: struct TArray<struct ATradePost*>
			constexpr auto _otherAssignedTradeOutpostBuildings = 0x248; // Size: 16, Type: struct TArray<struct ATradeOutpostBuilding*>
	}
} 
