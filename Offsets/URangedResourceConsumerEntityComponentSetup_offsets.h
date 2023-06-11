namespace offsets
{
	namespace URangedResourceConsumerEntityComponentSetup
	{
			constexpr auto ResourceType = 0x48; // Size: 8, Type: UGameResourceType*
			constexpr auto ResourceAmount = 0x50; // Size: 4, Type: float
			constexpr auto RequiredResourceAmount = 0x54; // Size: 4, Type: float
			constexpr auto AutoFindResourceSupplier = 0x58; // Size: 1, Type: bool
			constexpr auto ResourceSupplierName = 0x5c; // Size: 8, Type: struct FName
	}
} 
