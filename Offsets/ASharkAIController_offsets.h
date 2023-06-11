namespace offsets
{
	namespace ASharkAIController
	{
			constexpr auto _sharkTurningSpeed = 0x328; // Size: 4, Type: float
			constexpr auto _minDistanceToMovementTarget = 0x32c; // Size: 4, Type: float
			constexpr auto _boundsInflation = 0x330; // Size: 4, Type: float
			constexpr auto _randomMovementExtent = 0x334; // Size: 12, Type: struct FVector
			constexpr auto _findPathBypassMultiplier = 0x340; // Size: 4, Type: float
			constexpr auto _maxMovementAttemptsAllowed = 0x344; // Size: 4, Type: int32_t
			constexpr auto _maxTimePerDestinationMultiplier = 0x34c; // Size: 4, Type: float
			constexpr auto _minDistanceBetweenTargetGeneratedPath = 0x358; // Size: 4, Type: float
			constexpr auto _surfaceOffset = 0x35c; // Size: 4, Type: float
			constexpr auto _movementRecoveryTurningSpeed = 0x360; // Size: 4, Type: float
			constexpr auto _movementRecoveryAcceleration = 0x364; // Size: 4, Type: float
			constexpr auto _movementRecoveryDeceleration = 0x368; // Size: 4, Type: float
			constexpr auto _aboveWaterRecoveryTurningSpeed = 0x36c; // Size: 4, Type: float
			constexpr auto _moveToTargetUpdatePeriod = 0x370; // Size: 4, Type: float
			constexpr auto _minVictimDepth = 0x378; // Size: 4, Type: float
			constexpr auto _beginPursuitTimeMin = 0x37c; // Size: 4, Type: float
			constexpr auto _beginPursuitTimeMax = 0x380; // Size: 4, Type: float
			constexpr auto _aggressiveBehaviorChance = 0x388; // Size: 4, Type: float
			constexpr auto _aggressiveBehaviorChanceWhenTargetBleeding = 0x38c; // Size: 4, Type: float
			constexpr auto _distanceToAdjustAttackAngle = 0x390; // Size: 4, Type: float
			constexpr auto _desiredAttackAngleDegrees = 0x394; // Size: 4, Type: float
			constexpr auto _desiredAttackAngleTime = 0x39c; // Size: 4, Type: float
			constexpr auto _returnToWanderingTime = 0x3a0; // Size: 4, Type: float
			constexpr auto _dealDamageTime = 0x3a8; // Size: 4, Type: float
			constexpr auto _damagePerInterval = 0x3b0; // Size: 4, Type: float
			constexpr auto _numOfIntervals = 0x3b8; // Size: 4, Type: int32_t
			constexpr auto _startMovingAfterBiteTime = 0x3c0; // Size: 4, Type: float
			constexpr auto _changeDirectionChance = 0x3d0; // Size: 4, Type: float
			constexpr auto _circlingAngleDegrees = 0x3d4; // Size: 4, Type: float
			constexpr auto _circlingDistanceMin = 0x3d8; // Size: 4, Type: float
			constexpr auto _circlingDistanceMax = 0x3dc; // Size: 4, Type: float
			constexpr auto _circlingAggressionCheckInterval = 0x3e0; // Size: 4, Type: float
			constexpr auto _minDamageToReact = 0x3e8; // Size: 4, Type: float
			constexpr auto _fleeingDuration = 0x3ec; // Size: 4, Type: float
			constexpr auto _maxTimeAboveWater = 0x440; // Size: 4, Type: float
			constexpr auto _minDistanceToNextPrimaryTarget = 0x448; // Size: 4, Type: float
			constexpr auto _changePrimaryTargetTime = 0x44c; // Size: 4, Type: float
			constexpr auto _behaviorMap = 0x460; // Size: 80, Type: struct TMap<uint8_t , struct FFishStateParameters>
			constexpr auto _grappleActionParameter = 0x4e8; // Size: 8, Type: struct UGrappleActionParameters*
	}
} 
