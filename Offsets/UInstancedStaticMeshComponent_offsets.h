namespace offsets
{
	namespace UInstancedStaticMeshComponent
	{
			constexpr auto PerInstanceSMData = 0x4e0; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshInstanceData>
			constexpr auto NumCustomDataFloats = 0x4f0; // Size: 4, Type: int32_t
			constexpr auto bKeepInstanceBufferCPUAccess = 0x4f4; // Size: 1, Type: bool
			constexpr auto PerInstanceSMCustomData = 0x4f8; // Size: 16, Type: struct TArray<float>
			constexpr auto InstancingRandomSeed = 0x508; // Size: 4, Type: int32_t
			constexpr auto InstanceStartCullDistance = 0x50c; // Size: 4, Type: int32_t
			constexpr auto InstanceEndCullDistance = 0x510; // Size: 4, Type: int32_t
			constexpr auto InstanceReorderTable = 0x518; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumPendingLightmaps = 0x570; // Size: 4, Type: int32_t
			constexpr auto CachedMappings = 0x578; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshMappingInfo>
	}
} 
