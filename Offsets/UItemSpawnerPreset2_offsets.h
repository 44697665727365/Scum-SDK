namespace offsets
{
	namespace UItemSpawnerPreset2
	{
			constexpr auto Nodes = 0x28; // Size: 16, Type: struct TArray<struct FItemSpawnerPreset_Node>
			constexpr auto Items = 0x38; // Size: 16, Type: struct TArray<struct FItemSpawnerPreset_Item>
			constexpr auto FixedItems = 0x48; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
			constexpr auto AlwaysSpawn = 0x58; // Size: 1, Type: bool
			constexpr auto Probability = 0x5c; // Size: 4, Type: float
			constexpr auto Quantity = 0x60; // Size: 8, Type: struct FInt32Interval
			constexpr auto AllowDuplicates = 0x68; // Size: 1, Type: bool
			constexpr auto ShouldFilterItemsByZone = 0x69; // Size: 1, Type: bool
			constexpr auto InitialDamage = 0x6c; // Size: 4, Type: float
			constexpr auto RandomDamage = 0x70; // Size: 4, Type: float
			constexpr auto InitialUsage = 0x74; // Size: 4, Type: float
			constexpr auto RandomUsage = 0x78; // Size: 4, Type: float
			constexpr auto PostSpawnActions = 0x80; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
	}
} 
