namespace offsets
{
	namespace ADroneAIController
	{
			constexpr auto _followingDuration = 0x328; // Size: 4, Type: float
			constexpr auto _followingTargetSpeedThreshold = 0x32c; // Size: 4, Type: float
			constexpr auto _forcedSelfDestructTime = 0x330; // Size: 4, Type: float
			constexpr auto _followingHeight = 0x334; // Size: 4, Type: float
			constexpr auto _followingDistance = 0x338; // Size: 4, Type: float
			constexpr auto _resumeFollowingExtraDistance = 0x33c; // Size: 4, Type: float
			constexpr auto _resumeFollowingSeconds = 0x340; // Size: 4, Type: float
			constexpr auto _resumeFollowingExtendedSeconds = 0x344; // Size: 4, Type: float
			constexpr auto _followingCirclingMinTime = 0x34c; // Size: 4, Type: float
			constexpr auto _followingCirclingMaxTime = 0x350; // Size: 4, Type: float
			constexpr auto _followingCirclingNewDirectionMinTime = 0x354; // Size: 4, Type: float
			constexpr auto _followingCirclingNewDirectionMaxTime = 0x358; // Size: 4, Type: float
			constexpr auto _switchFollowingTargetsMaxDistance = 0x35c; // Size: 4, Type: float
			constexpr auto _flybyHorizontalDistanceFromTarget = 0x390; // Size: 4, Type: float
			constexpr auto _flybyVerticalDistanceFromTarget = 0x394; // Size: 4, Type: float
			constexpr auto _flybyPathLength = 0x398; // Size: 4, Type: float
			constexpr auto _minFlybyAngleDeg = 0x39c; // Size: 4, Type: float
			constexpr auto _maxFlybyAngleDeg = 0x3a0; // Size: 4, Type: float
			constexpr auto _crashingDistance = 0x3b8; // Size: 4, Type: float
			constexpr auto _leavingForwardDistance = 0x3c0; // Size: 4, Type: float
			constexpr auto _leavingVerticalDistance = 0x3c4; // Size: 4, Type: float
			constexpr auto _minimumNavigationProximityPerState[6] = 0x3c8; // Size: 24, Type: float
			constexpr auto _boundsInflation = 0x3e0; // Size: 4, Type: float
			constexpr auto _bypassAccelerationScale = 0x3e4; // Size: 4, Type: float
			constexpr auto _bypassTurningSpeed = 0x3e8; // Size: 4, Type: float
			constexpr auto _findPathBypassMultiplier = 0x3ec; // Size: 4, Type: float
			constexpr auto _maxTimePerDestinationMultiplier = 0x3f0; // Size: 4, Type: float
			constexpr auto _droneTurningSpeed = 0x3f4; // Size: 4, Type: float
			constexpr auto _maxPathSegment = 0x3f8; // Size: 4, Type: float
			constexpr auto _flyUpwardsDistance = 0x3fc; // Size: 4, Type: float
			constexpr auto _maximumAttemptedHeightGains = 0x400; // Size: 4, Type: int32_t
			constexpr auto _randomMovementExtent = 0x408; // Size: 12, Type: struct FVector
			constexpr auto _repeatChooseLocationTime = 0x414; // Size: 4, Type: float
			constexpr auto _highAccelerationScaleMultiplier = 0x418; // Size: 4, Type: float
			constexpr auto _distanceForHighAcceleration = 0x41c; // Size: 4, Type: float
			constexpr auto _brakingDecelerationFlyingMovementRestore = 0x428; // Size: 4, Type: float
	}
} 
