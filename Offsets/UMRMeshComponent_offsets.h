namespace offsets
{
	namespace UMRMeshComponent
	{
			constexpr auto Material = 0x460; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto WireframeMaterial = 0x468; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bCreateMeshProxySections = 0x470; // Size: 1, Type: bool
			constexpr auto bUpdateNavMeshOnMeshUpdate = 0x471; // Size: 1, Type: bool
			constexpr auto bNeverCreateCollisionMesh = 0x472; // Size: 1, Type: bool
			constexpr auto CachedBodySetup = 0x478; // Size: 8, Type: struct UBodySetup*
			constexpr auto BodySetups = 0x480; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
