namespace offsets
{
	namespace UVehicleAttachment
	{
			constexpr auto ParentSocket = 0x38; // Size: 8, Type: struct FName
			constexpr auto MeshSetup = 0x40; // Size: 144, Type: struct FVehicleAttachmentMeshSetup
			constexpr auto QueryMeshSetup = 0xe0; // Size: 144, Type: struct FVehicleAttachmentMeshSetup
			constexpr auto AdditionalSockets = 0x178; // Size: 16, Type: struct TArray<struct FVehicleAttachmentAdditionalSocket>
			constexpr auto InstallDuration = 0x188; // Size: 4, Type: float
			constexpr auto RepairDuration = 0x18c; // Size: 4, Type: float
			constexpr auto RemoveDuration = 0x190; // Size: 4, Type: float
			constexpr auto HealthDisplay = 0x198; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto _displayName = 0x1a0; // Size: 24, Type: struct FText
			constexpr auto _canEverBeRemoved = 0x1b8; // Size: 1, Type: bool
			constexpr auto _slots = 0x1c0; // Size: 16, Type: struct TArray<struct FVehicleAttachmentSlot>
			constexpr auto _isIndestructible = 0x1d0; // Size: 1, Type: bool
			constexpr auto _shouldBeRemovedFromVehicleWhenDestroyed = 0x1d1; // Size: 1, Type: bool
			constexpr auto _requiredServiceToolTag = 0x1d4; // Size: 8, Type: struct FGameplayTag
			constexpr auto _parentId = 0x1f0; // Size: 4, Type: int32_t
			constexpr auto _parentSlotIndex = 0x1f4; // Size: 4, Type: int32_t
			constexpr auto _serviceModeMaterial = 0x1f8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _mileage = 0x200; // Size: 8, Type: double
			constexpr auto _isSupportedForNetworking = 0x209; // Size: 1, Type: bool
			constexpr auto _id = 0x20c; // Size: 4, Type: int32_t
			constexpr auto _cachedMeshMaterials = 0x218; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto _maxHealth = 0x228; // Size: 4, Type: float
			constexpr auto _health = 0x22c; // Size: 4, Type: float
			constexpr auto _hardness = 0x230; // Size: 4, Type: float
			constexpr auto _miscState = 0x238; // Size: 8, Type: uint64_t
			constexpr auto _energyLossMultiplier = 0x240; // Size: 4, Type: float
			constexpr auto _damageAdjacentAttachments = 0x248; // Size: 80, Type: struct TMap<UVehicleAttachment*, struct FDamageAdjacentAttachment>
			constexpr auto _maximumCollisionDamageAccumulation = 0x2a8; // Size: 4, Type: float
			constexpr auto AttachmentItemClass = 0x2b0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto _isServiceRestrictedToAcceptableModes = 0x2f8; // Size: 1, Type: bool
			constexpr auto _acceptableServiceModes = 0x300; // Size: 16, Type: struct TArray<struct FGameplayTag>
	}
} 
