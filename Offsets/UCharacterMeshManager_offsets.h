namespace offsets
{
	namespace UCharacterMeshManager
	{
			constexpr auto _incompatibleCharacterMeshClasses = 0x40; // Size: 80, Type: struct TMap<UCharacterMesh*, struct FCharacterMeshClassSet>
			constexpr auto _perCharacterMeshSlotData = 0x90; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FCharacterMeshManagerPerSlotData>
			constexpr auto _destroyUnusedMeshComponentsTime = 0xe0; // Size: 4, Type: float
	}
} 
