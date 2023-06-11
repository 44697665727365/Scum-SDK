namespace offsets
{
	namespace URangedResourceProviderEntityComponentSetup
	{
			constexpr auto ResourceType = 0x48; // Size: 8, Type: UGameResourceType*
			constexpr auto ResourceAmount = 0x50; // Size: 4, Type: float
			constexpr auto AutoFindResourceSupplier = 0x54; // Size: 1, Type: bool
			constexpr auto ResourceSupplierName = 0x58; // Size: 8, Type: struct FName
			constexpr auto MirrorResourceSupplierResources = 0x60; // Size: 1, Type: bool
	}
} 
