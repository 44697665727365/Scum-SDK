namespace offsets
{
	namespace APlaceableActorBase
	{
			constexpr auto _id = 0x228; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _boxCollisionComponent = 0x230; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _craftableItem = 0x240; // Size: 8, Type: struct UPlaceableCraftableItem*
			constexpr auto _ingredientMultiplier = 0x248; // Size: 4, Type: float
			constexpr auto _rootComponent = 0x250; // Size: 8, Type: struct USceneComponent*
			constexpr auto _staticMeshComponent_Main = 0x258; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _staticMeshComponent_Outline = 0x260; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _staticMeshComponent_Depth = 0x268; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _queryStaticMeshComponent = 0x270; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _directionIndicatorStaticMeshComponent = 0x278; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _primaryMaterialAllowed = 0x280; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _primaryMaterialDisallowed = 0x288; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _outlineMaterial = 0x290; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _depthMaterial = 0x298; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto _statusFlags = 0x368; // Size: 1, Type: uint8_t 
			constexpr auto _placementState = 0x388; // Size: 1, Type: uint8_t 
			constexpr auto _numTracesX = 0x404; // Size: 4, Type: int32_t
			constexpr auto _numTracesY = 0x408; // Size: 4, Type: int32_t
			constexpr auto _traceHeightFactor = 0x40c; // Size: 4, Type: float
			constexpr auto _maxPlacementAngle = 0x410; // Size: 4, Type: float
			constexpr auto _ingredients = 0x418; // Size: 16, Type: struct TArray<struct FPlaceableIngredient>
			constexpr auto _widgetHidingDistance = 0x428; // Size: 4, Type: float
			constexpr auto _fullWidgetHidingDistance = 0x42c; // Size: 4, Type: float
			constexpr auto _widgetSwitchPeriod = 0x430; // Size: 4, Type: float
			constexpr auto _minDistanceToShowWidget = 0x434; // Size: 4, Type: float
			constexpr auto _syncPeriod = 0x438; // Size: 4, Type: float
			constexpr auto _reachabilityMaxDifference = 0x43c; // Size: 4, Type: float
			constexpr auto _directionIndicatorOffset = 0x440; // Size: 4, Type: float
			constexpr auto _destroyInteractionText = 0x448; // Size: 24, Type: struct FText
			constexpr auto _replicatedLocation = 0x460; // Size: 12, Type: struct FVector
			constexpr auto _replicatedPlacedLocation = 0x46c; // Size: 12, Type: struct FVector
			constexpr auto _replicatedRotation = 0x478; // Size: 12, Type: struct FRotator
			constexpr auto _placementAllowedMaterialOverride = 0x4c0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _placementDisallowedMaterialOverride = 0x4c8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _outlineMaterialOverride = 0x4d0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _depthMaterialOverride = 0x4d8; // Size: 8, Type: struct UMaterialInterface*
	}
} 
