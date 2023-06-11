namespace offsets
{
	namespace UGroomComponent
	{
			constexpr auto GroomAsset = 0x480; // Size: 8, Type: struct UGroomAsset*
			constexpr auto GroomCache = 0x488; // Size: 8, Type: struct UGroomCache*
			constexpr auto NiagaraComponents = 0x490; // Size: 16, Type: struct TArray<struct UNiagaraComponent*>
			constexpr auto SourceSkeletalMesh = 0x4a0; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto BindingAsset = 0x4a8; // Size: 8, Type: struct UGroomBindingAsset*
			constexpr auto PhysicsAsset = 0x4b0; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto Strands_DebugMaterial = 0x4b8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Strands_DefaultMaterial = 0x4c0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Cards_DefaultMaterial = 0x4c8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Meshes_DefaultMaterial = 0x4d0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto AngularSpringsSystem = 0x4d8; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto CosseratRodsSystem = 0x4e0; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto AttachmentName = 0x4e8; // Size: 16, Type: struct FString
			constexpr auto GroomGroupsDesc = 0x540; // Size: 16, Type: struct TArray<struct FHairGroupDesc>
			constexpr auto bRunning = 0x550; // Size: 1, Type: bool
			constexpr auto bLooping = 0x551; // Size: 1, Type: bool
			constexpr auto bManualTick = 0x552; // Size: 1, Type: bool
			constexpr auto ElapsedTime = 0x554; // Size: 4, Type: float
	}
} 
