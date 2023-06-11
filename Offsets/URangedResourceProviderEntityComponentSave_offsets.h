namespace offsets
{
	namespace URangedResourceProviderEntityComponentSave
	{
			constexpr auto ResourceType = 0x28; // Size: 8, Type: UGameResourceType*
			constexpr auto ResourceAmount = 0x30; // Size: 4, Type: float
			constexpr auto AvailableResourceAmount = 0x34; // Size: 4, Type: float
			constexpr auto ResourceUsageEnabled = 0x38; // Size: 1, Type: bool
			constexpr auto ResourceSupplierId = 0x40; // Size: 16, Type: struct FEntityComponentId
			constexpr auto Connections = 0x50; // Size: 16, Type: struct TArray<struct FConnectionSaveData>
	}
} 
