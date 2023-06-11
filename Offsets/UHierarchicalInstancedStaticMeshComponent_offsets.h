namespace offsets
{
	namespace UHierarchicalInstancedStaticMeshComponent
	{
			constexpr auto SortedInstances = 0x598; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumBuiltInstances = 0x5a8; // Size: 4, Type: int32_t
			constexpr auto BuiltInstanceBounds = 0x5b0; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBounds = 0x5cc; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBoundsList = 0x5e8; // Size: 16, Type: struct TArray<struct FBox>
			constexpr auto bEnableDensityScaling = 0x5f8; // Size: 1, Type: char
			constexpr auto OcclusionLayerNumNodes = 0x600; // Size: 4, Type: int32_t
			constexpr auto CacheMeshExtendedBounds = 0x604; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto bDisableCollision = 0x620; // Size: 1, Type: bool
			constexpr auto InstanceCountToRender = 0x624; // Size: 4, Type: int32_t
	}
} 
