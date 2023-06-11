namespace offsets
{
	namespace ACTFFlag
	{
			constexpr auto SphereComponent = 0x220; // Size: 8, Type: struct USphereComponent*
			constexpr auto FlagMesh = 0x228; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto TeamMaterials = 0x230; // Size: 16, Type: struct TArray<struct UMaterialInstance*>
			constexpr auto AttachSocketName = 0x240; // Size: 8, Type: struct FName
			constexpr auto _gameEvent = 0x248; // Size: 8, Type: struct ACTFGameEvent*
			constexpr auto _team = 0x250; // Size: 4, Type: int32_t
			constexpr auto _carrier = 0x258; // Size: 8, Type: struct APrisoner*
			constexpr auto _resetProgress = 0x268; // Size: 4, Type: float
			constexpr auto _baseTransform = 0x270; // Size: 48, Type: struct FTransform
			constexpr auto _flagTransform = 0x2a0; // Size: 48, Type: struct FTransform
	}
} 
