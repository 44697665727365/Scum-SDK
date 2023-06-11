namespace offsets
{
	namespace UItemState
	{
			constexpr auto normalizedHealth = 0x80; // Size: 4, Type: float
			constexpr auto MaxHealth = 0x84; // Size: 4, Type: float
			constexpr auto Weight = 0x88; // Size: 4, Type: float
			constexpr auto WeightUsed = 0x8c; // Size: 4, Type: float
			constexpr auto NormalizedRadiation = 0x90; // Size: 4, Type: float
			constexpr auto IsCrafted = 0x94; // Size: 1, Type: bool
			constexpr auto UncraftTime = 0x98; // Size: 4, Type: float
			constexpr auto LastAccessTime = 0xa0; // Size: 8, Type: int64_t
			constexpr auto IsPartOfEvent = 0xa8; // Size: 1, Type: bool
			constexpr auto WaterWeight = 0xac; // Size: 4, Type: float
			constexpr auto Uses = 0xb0; // Size: 4, Type: float
			constexpr auto IsInHands = 0xb4; // Size: 1, Type: bool
			constexpr auto HolsterSide = 0xb5; // Size: 1, Type: uint8_t 
			constexpr auto QuickAccessBarIndex = 0xb8; // Size: 4, Type: int32_t
			constexpr auto CraftingParts = 0xc0; // Size: 16, Type: struct TArray<struct UItemStateBase*>
			constexpr auto Stacks = 0xd0; // Size: 16, Type: struct TArray<struct UItemStateBase*>
			constexpr auto _craftingPartsIds = 0xe0; // Size: 16, Type: struct TArray<struct FEntityId>
			constexpr auto _stacksIds = 0xf0; // Size: 16, Type: struct TArray<struct FEntityId>
	}
} 
