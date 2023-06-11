namespace offsets
{
	namespace UBaseBuildingComponent
	{
			constexpr auto _name = 0x4e0; // Size: 16, Type: struct FString
			constexpr auto _baseElementType = 0x4f0; // Size: 4, Type: uint8_t 
			constexpr auto _forbidPlacementOfOtherElements = 0x4f4; // Size: 1, Type: bool
			constexpr auto _isClimbable = 0x4f5; // Size: 1, Type: bool
			constexpr auto _isBlockingItemPlacement = 0x4f6; // Size: 1, Type: bool
			constexpr auto _staticMeshVariations = 0x4f8; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto _choppingRecipeAsset = 0x508; // Size: 8, Type: struct UChoppingRecipeDataAsset*
			constexpr auto _healthPoints = 0x510; // Size: 4, Type: float
			constexpr auto _canBeDamaged = 0x514; // Size: 1, Type: bool
			constexpr auto _hoursToDecay = 0x518; // Size: 4, Type: float
			constexpr auto _hoursToDecayOutsideFlagArea = 0x51c; // Size: 4, Type: float
			constexpr auto _isUsedForRespawn = 0x520; // Size: 1, Type: bool
			constexpr auto _explosionResistance = 0x524; // Size: 4, Type: float
			constexpr auto _collisionDamageModifierFromEnergy = 0x528; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _weatherMaskMesh = 0x530; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _canBePlacedWithoutFlag = 0x538; // Size: 1, Type: bool
			constexpr auto _canBePlacedInBuilding = 0x539; // Size: 1, Type: bool
			constexpr auto _canBePlacedInRestrictedArea = 0x53a; // Size: 1, Type: bool
			constexpr auto _maxInstancesPerFlagArea = 0x53c; // Size: 4, Type: int32_t
			constexpr auto _upgradeRecipe = 0x540; // Size: 8, Type: struct UPlaceableCraftableItem*
			constexpr auto _cascadeDestroySnappedElementsOnUpgrade = 0x548; // Size: 1, Type: bool
			constexpr auto _ignoreDisabledBaseBuildingFlag = 0x549; // Size: 1, Type: bool
			constexpr auto _isTileable = 0x54a; // Size: 1, Type: bool
			constexpr auto _mustBePlacedOnFoundation = 0x54b; // Size: 1, Type: bool
			constexpr auto _canEverBePlacedOnFoundation = 0x54c; // Size: 1, Type: bool
			constexpr auto _canBePlacedOnOtherBaseElements = 0x54d; // Size: 1, Type: bool
			constexpr auto _canBePlacedWithoutSnapping = 0x54e; // Size: 1, Type: bool
			constexpr auto _shouldIgnoreSelfWhilePlacing = 0x54f; // Size: 1, Type: bool
			constexpr auto _canBeGroundedOnOtherElements = 0x550; // Size: 1, Type: bool
			constexpr auto _maxHeightLevel = 0x551; // Size: 1, Type: char
			constexpr auto _maxHeightDifference = 0x554; // Size: 4, Type: float
			constexpr auto _addRandomRotation = 0x558; // Size: 1, Type: bool
			constexpr auto _mustGroundAllPoints = 0x559; // Size: 1, Type: bool
			constexpr auto _mustBePlacedUpright = 0x55a; // Size: 1, Type: bool
			constexpr auto _placementHeightType = 0x55b; // Size: 1, Type: uint8_t 
			constexpr auto _useSimpleCollisionForOverlaps = 0x55c; // Size: 1, Type: bool
			constexpr auto _maxRotationWhilePlacing = 0x560; // Size: 12, Type: struct FRotator
			constexpr auto _useEncapsulationTestWhenSnapping = 0x56c; // Size: 1, Type: bool
			constexpr auto _elementSnapMarkers = 0x570; // Size: 16, Type: struct TArray<struct FElementSnapMarker>
			constexpr auto _sizeVariations = 0x580; // Size: 16, Type: struct TArray<struct FBaseBuildingSizeVariation>
			constexpr auto _sizeVariationsSpacing = 0x594; // Size: 4, Type: float
			constexpr auto _repairTime = 0x598; // Size: 4, Type: float
			constexpr auto _repairableParams = 0x5a0; // Size: 56, Type: struct FRepairableParams
			constexpr auto _experienceAwardForBuilding = 0x5d8; // Size: 4, Type: float
			constexpr auto _destructionParticles = 0x5e0; // Size: 16, Type: struct TArray<struct UParticleSystem*>
			constexpr auto _destructionParticlesSpawnTransforms = 0x5f0; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto _destructionSound = 0x600; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _isDoor = 0x608; // Size: 1, Type: bool
			constexpr auto _doorClass = 0x610; // Size: 8, Type: ADoor*
			constexpr auto _hasLadder = 0x618; // Size: 1, Type: bool
			constexpr auto _ladderMarkers = 0x620; // Size: 16, Type: struct TArray<struct FLadderMarker>
			constexpr auto _damageZones = 0x630; // Size: 16, Type: struct TArray<struct FBaseElementDamageZone>
			constexpr auto _shouldDestroyElementsOnTopWhenDestroyed = 0x640; // Size: 1, Type: bool
			constexpr auto _destructionTime = 0x644; // Size: 4, Type: float
			constexpr auto _shouldRemoveIntersectingElementsOnDestroy = 0x648; // Size: 1, Type: bool
			constexpr auto _destructionZones = 0x650; // Size: 16, Type: struct TArray<struct FBaseElementDestructionZone>
			constexpr auto _useAsReplenishableResource = 0x660; // Size: 1, Type: bool
			constexpr auto _replenishableResourceDescription = 0x668; // Size: 136, Type: struct FReplenishableResourceDescription
	}
} 
