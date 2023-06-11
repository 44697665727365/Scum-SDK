namespace offsets
{
	namespace UParticleSystemComponent
	{
			constexpr auto Template = 0x450; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EmitterMaterials = 0x458; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto SkelMeshComponents = 0x468; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto bResetOnDetach = 0x479; // Size: 1, Type: char
			constexpr auto bUpdateOnDedicatedServer = 0x479; // Size: 1, Type: char
			constexpr auto bAllowRecycling = 0x479; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x479; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x479; // Size: 1, Type: char
			constexpr auto bWarmingUp = 0x47a; // Size: 1, Type: char
			constexpr auto bOverrideLODMethod = 0x47a; // Size: 1, Type: char
			constexpr auto bSkipUpdateDynamicDataDuringTick = 0x47a; // Size: 1, Type: char
			constexpr auto LODMethod = 0x485; // Size: 1, Type: char ParticleSystemLODMethod
			constexpr auto RequiredSignificance = 0x486; // Size: 1, Type: uint8_t 
			constexpr auto InstanceParameters = 0x488; // Size: 16, Type: struct TArray<struct FParticleSysParam>
			constexpr auto OnParticleSpawn = 0x498; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleBurst = 0x4a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleDeath = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleCollide = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bOldPositionValid = 0x4d8; // Size: 1, Type: bool
			constexpr auto OldPosition = 0x4dc; // Size: 12, Type: struct FVector
			constexpr auto PartSysVelocity = 0x4e8; // Size: 12, Type: struct FVector
			constexpr auto WarmupTime = 0x4f4; // Size: 4, Type: float
			constexpr auto WarmupTickRate = 0x4f8; // Size: 4, Type: float
			constexpr auto SecondsBeforeInactive = 0x500; // Size: 4, Type: float
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x508; // Size: 4, Type: float
			constexpr auto ReplayClips = 0x528; // Size: 16, Type: struct TArray<struct UParticleSystemReplay*>
			constexpr auto CustomTimeDilation = 0x540; // Size: 4, Type: float
			constexpr auto AutoAttachParent = 0x598; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x5a0; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x5a8; // Size: 1, Type: uint8_t 
			constexpr auto AutoAttachRotationRule = 0x5a9; // Size: 1, Type: uint8_t 
			constexpr auto AutoAttachScaleRule = 0x5aa; // Size: 1, Type: uint8_t 
			constexpr auto OnSystemFinished = 0x5d8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
