namespace offsets
{
	namespace UVehicleBaseMountSlot
	{
			constexpr auto AttachmentOwner = 0x30; // Size: 8, Type: struct UVehicleAttachment*
			constexpr auto MountSocketName = 0x38; // Size: 8, Type: struct FName
			constexpr auto MountedCollisionShapeName = 0x40; // Size: 8, Type: struct FName
			constexpr auto Type = 0x48; // Size: 1, Type: uint8_t 
			constexpr auto InteractionMaterial = 0x50; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto MountedAnimInstanceClass = 0x58; // Size: 8, Type: UAnimInstance*
			constexpr auto MountedAnimation = 0x60; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto MountedBlendspace = 0x68; // Size: 8, Type: struct UBlendSpace*
			constexpr auto DefaultPrisonerRestingParameters = 0x70; // Size: 96, Type: struct FPrisonerRestingParameters
			constexpr auto SlotId = 0xd0; // Size: 8, Type: struct FGameplayTag
			constexpr auto _mountee = 0xd8; // Size: 8, Type: struct UObject*
			constexpr auto _reservee = 0xe0; // Size: 8, Type: struct UObject*
			constexpr auto _weaponAimingParametersClass = 0xf0; // Size: 8, Type: UVehicleWeaponAimingParameters*
			constexpr auto _forceUnmountAngle = 0xf8; // Size: 4, Type: float
			constexpr auto _isReachableFromSky = 0xfc; // Size: 1, Type: bool
			constexpr auto _shouldHideAttachedItems = 0xfd; // Size: 1, Type: bool
			constexpr auto _prisonerViewpointOffset = 0x100; // Size: 12, Type: struct FVector
			constexpr auto _prisonerFeetOffset = 0x10c; // Size: 12, Type: struct FVector
			constexpr auto _externalMountPaths = 0x118; // Size: 16, Type: struct TArray<struct UExternalMountPath*>
			constexpr auto _internalMountPaths = 0x128; // Size: 16, Type: struct TArray<struct UInternalMountPath*>
	}
} 
