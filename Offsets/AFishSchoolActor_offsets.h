namespace offsets
{
	namespace AFishSchoolActor
	{
			constexpr auto _currentState = 0x220; // Size: 1, Type: uint8_t 
			constexpr auto _capsuleComponent = 0x250; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto _schoolInstancedStaticMeshComponent = 0x258; // Size: 8, Type: struct UFishInstancedStaticMeshComponent*
			constexpr auto _minDistanceToTarget = 0x28c; // Size: 4, Type: float
			constexpr auto _boundsInflation = 0x290; // Size: 4, Type: float
			constexpr auto _findPathBypassMultiplier = 0x294; // Size: 4, Type: float
			constexpr auto _maxTimesSameDestinationAllowed = 0x298; // Size: 4, Type: int32_t
			constexpr auto _maxTimePerDestinationMultiplier = 0x29c; // Size: 4, Type: float
			constexpr auto _schoolMovementRecoveryTurningSpeed = 0x2a4; // Size: 4, Type: float
			constexpr auto _schoolMovementRecoveryAcceleration = 0x2a8; // Size: 4, Type: float
			constexpr auto _schoolMovementRecoveryDeceleration = 0x2ac; // Size: 4, Type: float
			constexpr auto _schoolCloseToSurfaceTurningSpeed = 0x2b0; // Size: 4, Type: float
			constexpr auto _schoolCloseToSurfaceAcceleration = 0x2b4; // Size: 4, Type: float
			constexpr auto _schoolCloseToSurfaceDeceleration = 0x2b8; // Size: 4, Type: float
			constexpr auto _surfaceOffset = 0x2bc; // Size: 4, Type: float
			constexpr auto _upperForbiddenZoneDepthPercentage = 0x2c4; // Size: 4, Type: float
			constexpr auto _swimmingDepthPercentage = 0x2c8; // Size: 4, Type: float
			constexpr auto _lowerForbiddenZoneDepthPercentage = 0x2cc; // Size: 4, Type: float
			constexpr auto _waterParticles = 0x2d0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _waterParticlesInterval = 0x2d8; // Size: 4, Type: float
			constexpr auto _waterParticlesComponent = 0x2e0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _forcedNumberOfGroups = 0x2ec; // Size: 4, Type: int32_t
			constexpr auto _groupSpeed = 0x2f0; // Size: 4, Type: float
			constexpr auto _groupSeparationSpeed = 0x2f4; // Size: 4, Type: float
			constexpr auto _groupCatchUpSpeed = 0x2f8; // Size: 4, Type: float
			constexpr auto _groupSeparationDistance = 0x2fc; // Size: 4, Type: float
			constexpr auto _groupSeparationTime = 0x304; // Size: 4, Type: float
			constexpr auto _minNumberOfFish = 0x308; // Size: 4, Type: int32_t
			constexpr auto _maxNumberOfFish = 0x30c; // Size: 4, Type: int32_t
			constexpr auto _maxFishDistance = 0x314; // Size: 4, Type: float
			constexpr auto _fishSeparationDistance = 0x31c; // Size: 4, Type: float
			constexpr auto _fishSeparationTime = 0x320; // Size: 4, Type: float
			constexpr auto _fishTurnSpeedRangeModifier = 0x328; // Size: 4, Type: float
			constexpr auto _fishMinScale = 0x32c; // Size: 4, Type: float
			constexpr auto _fishMaxScale = 0x330; // Size: 4, Type: float
			constexpr auto _fishNormalSpeed = 0x334; // Size: 4, Type: float
			constexpr auto _fishSeparationSpeed = 0x338; // Size: 4, Type: float
			constexpr auto _fishCatchUpSpeed = 0x33c; // Size: 4, Type: float
			constexpr auto _fishMaxSpeed = 0x340; // Size: 4, Type: float
			constexpr auto _fishAcceleration = 0x344; // Size: 4, Type: float
			constexpr auto _fishDeceleration = 0x348; // Size: 4, Type: float
			constexpr auto _moveToLocationRep = 0x398; // Size: 12, Type: struct FVector
			constexpr auto _behaviorMap = 0x3b0; // Size: 80, Type: struct TMap<uint8_t , struct FFishStateParameters>
			constexpr auto _randomMovementExtent = 0x400; // Size: 12, Type: struct FVector
			constexpr auto _fleeingDistanceFromEnemy = 0x40c; // Size: 4, Type: float
			constexpr auto _fleeingPathLength = 0x410; // Size: 4, Type: float
			constexpr auto _returnToNormalBehaviorDistance = 0x414; // Size: 4, Type: float
			constexpr auto _schoolInternalMovementRelevancyDistanceSquared = 0x418; // Size: 4, Type: float
			constexpr auto _fadeInTime = 0x42c; // Size: 4, Type: float
			constexpr auto _fadeOutTime = 0x434; // Size: 4, Type: float
	}
} 
