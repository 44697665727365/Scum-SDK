namespace offsets
{
	namespace AVehicleBase
	{
			constexpr auto _vehicleMeshComponent = 0x418; // Size: 8, Type: struct UVehicleMeshComponent*
			constexpr auto _shouldApplyWaterDrag = 0x43c; // Size: 1, Type: bool
			constexpr auto _waterDragForceCoefficient = 0x440; // Size: 4, Type: float
			constexpr auto _submergedInWaterDamagePerSecond = 0x444; // Size: 8, Type: struct FFloatInterval
			constexpr auto _itemContainer = 0x4a0; // Size: 8, Type: struct AVehicleItemContainer*
			constexpr auto _vehicleAttachments = 0x4a8; // Size: 16, Type: struct TArray<struct UVehicleAttachment*>
			constexpr auto _repVehicleAttachments = 0x4b8; // Size: 16, Type: struct TArray<struct UVehicleAttachment*>
			constexpr auto _chassisSlot = 0x4d8; // Size: 72, Type: struct FVehicleAttachmentSlot
			constexpr auto _lockInfluencingAttachmentSlotTags = 0x528; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _lockingAttachmentSlotTags = 0x548; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _repServerEntitySetupAndId = 0x580; // Size: 8, Type: struct FPackedEntitySetupAndId
			constexpr auto _forcePushComponent = 0x588; // Size: 8, Type: struct UVehicleForcePushComponent*
			constexpr auto _attachmentHealthWidgets = 0x590; // Size: 80, Type: struct TMap<struct UVehicleAttachment*, struct UWidgetComponent*>
			constexpr auto _attachmentHealthWidget = 0x5e0; // Size: 8, Type: UVehicleAttachmentHealthWidget*
			constexpr auto _networkPrediction = 0x5e8; // Size: 8, Type: struct UNetworkPredictionComponent*
			constexpr auto SpawnGroup = 0x5f0; // Size: 8, Type: struct FGameplayTag
			constexpr auto _itemContainerClass = 0x600; // Size: 8, Type: AVehicleItemContainer*
			constexpr auto _repairableParams = 0x608; // Size: 56, Type: struct FRepairableParams
			constexpr auto _repIsSimulatingPhysics = 0x641; // Size: 1, Type: bool
			constexpr auto _repLocationWhenNotSimulatingPhysics = 0x644; // Size: 12, Type: struct FVector
			constexpr auto _repRotationWhenNotSimulatingPhysics = 0x650; // Size: 12, Type: struct FRotator
			constexpr auto _physicsDormancyTimeout = 0x660; // Size: 4, Type: float
			constexpr auto _serviceComponent = 0x680; // Size: 8, Type: struct UVehicleServiceComponent*
			constexpr auto _isInQuickService = 0x688; // Size: 1, Type: bool
			constexpr auto _cameraStabilizer = 0x748; // Size: 8, Type: struct UVehicleCameraStabilizerComponent*
			constexpr auto _collisionDamageMultipliers = 0x750; // Size: 80, Type: struct TMap<uint8_t , float>
			constexpr auto _explosiveDamageMultiplier = 0x7a0; // Size: 4, Type: float
			constexpr auto _collisionDamageToMultiplierCurve = 0x7a8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _previewMeshTimePerMesh = 0x7b4; // Size: 4, Type: uint32_t
			constexpr auto _healthBarCaption = 0x7c0; // Size: 24, Type: struct FText
			constexpr auto _collisionDamageReplicationPeriodCooldownThreshold = 0x7d8; // Size: 4, Type: float
			constexpr auto _collisionDamageReplicationPeriodTimeoutThreshold = 0x7dc; // Size: 4, Type: float
			constexpr auto _impactEffects[5] = 0x7f8; // Size: 280, Type: struct FVehicleImpactEffects
			constexpr auto _maxSpeedForInteraction = 0x970; // Size: 4, Type: float
			constexpr auto _maxTiltAngleForMounting = 0x974; // Size: 4, Type: float
			constexpr auto _maxSubmergedTime = 0x980; // Size: 4, Type: float
			constexpr auto _maxSubmersionFactor = 0x984; // Size: 4, Type: float
			constexpr auto _mountSlotIndicatorsWidget = 0x990; // Size: 8, Type: UUserWidget*
			constexpr auto _inWaterDestructionTimeInSeconds = 0x9a0; // Size: 4, Type: float
			constexpr auto _outOfWaterDestructionTimeInSeconds = 0x9a4; // Size: 4, Type: float
			constexpr auto _repLightsCategoryStates = 0x9a8; // Size: 1, Type: uint8_t 
			constexpr auto _vehicleHandlingSkill = 0x9c0; // Size: 8, Type: UVehicleHandlingSkill*
			constexpr auto _timeUntilDestructionInSeconds = 0x9c8; // Size: 4, Type: float
			constexpr auto _isInWater = 0x9cc; // Size: 1, Type: bool
			constexpr auto _navigationRelevancyVelocitySquared = 0x9d0; // Size: 4, Type: float
			constexpr auto _smokeParticlesLow = 0x9f0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _smokeParticlesMedium = 0x9f8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _smokeParticlesHigh = 0xa00; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _smokeParticleSystemComponent = 0xa10; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _smokeParticlesOffset = 0xa18; // Size: 12, Type: struct FVector
			constexpr auto _physicsDominanceGroup = 0xa24; // Size: 1, Type: uint8_t 
			constexpr auto _aiNoiseFrequencyPerHour = 0xa28; // Size: 4, Type: float
			constexpr auto _aiNoiseLevel = 0xa2c; // Size: 1, Type: uint8_t 
			constexpr auto _aiNoiseOffset = 0xa34; // Size: 12, Type: struct FVector
			constexpr auto _mountSlotsBySwitchSeatIndex = 0xa40; // Size: 16, Type: struct TArray<struct FGameplayTag>
			constexpr auto _unlockTransform = 0xa50; // Size: 48, Type: struct FTransform
			constexpr auto _forceUnlockMovementAcceptanceRadius = 0xa80; // Size: 4, Type: float
			constexpr auto _absoluteSpeedLimitKmh = 0xa84; // Size: 4, Type: float
			constexpr auto _aiTeam = 0xa88; // Size: 1, Type: uint8_t 
	}
} 
