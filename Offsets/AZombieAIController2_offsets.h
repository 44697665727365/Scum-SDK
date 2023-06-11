namespace offsets
{
	namespace AZombieAIController2
	{
			constexpr auto _lyingSightSenseConfig = 0x328; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _lyingHearingSenseConfig = 0x330; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _lyingDamageSenseConfig = 0x338; // Size: 8, Type: struct UAISenseConfig_Damage*
			constexpr auto _stateMachineTickIntervalWhenInRelaxedState = 0x340; // Size: 4, Type: float
			constexpr auto _shouldWander = 0x344; // Size: 1, Type: bool
			constexpr auto _shouldWanderAroundWanderOrigin = 0x345; // Size: 1, Type: bool
			constexpr auto _maxWanderingRadius = 0x348; // Size: 4, Type: float
			constexpr auto _minTimeToRestBeforeWandering = 0x34c; // Size: 4, Type: float
			constexpr auto _maxTimeToRestBeforeWandering = 0x350; // Size: 4, Type: float
			constexpr auto _shouldBecomeAlertedBySight = 0x354; // Size: 1, Type: bool
			constexpr auto _minLineOfSightDurationToBecomeAlerted = 0x358; // Size: 4, Type: float
			constexpr auto _maxLineOfSightDurationToBecomeAlerted = 0x35c; // Size: 4, Type: float
			constexpr auto _shouldBecomeAlertedByHearing = 0x360; // Size: 1, Type: bool
			constexpr auto _minDelayBeforeBecomingAlertedByHearing = 0x364; // Size: 4, Type: float
			constexpr auto _maxDelayBeforeBecomingAlertedByHearing = 0x368; // Size: 4, Type: float
			constexpr auto _relaxedIdleSightSenseConfig = 0x370; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _relaxedIdleHearingSenseConfig = 0x378; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _relaxedIdleDamageSenseConfig = 0x380; // Size: 8, Type: struct UAISenseConfig_Damage*
			constexpr auto _relaxedWanderSightSenseConfig = 0x388; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _relaxedWanderHearingSenseConfig = 0x390; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _relaxedWanderDamageSenseConfig = 0x398; // Size: 8, Type: struct UAISenseConfig_Damage*
			constexpr auto _stateMachineTickIntervalWhenInAlertedState = 0x3a0; // Size: 4, Type: float
			constexpr auto _minObservingForLineOfSightStartDelay = 0x3a4; // Size: 4, Type: float
			constexpr auto _maxObservingForLineOfSightStartDelay = 0x3a8; // Size: 4, Type: float
			constexpr auto _minInvestigateStimulusDelay = 0x3ac; // Size: 4, Type: float
			constexpr auto _maxInvestigateStimulusDelay = 0x3b0; // Size: 4, Type: float
			constexpr auto _minEnterCombatModeDelay = 0x3b4; // Size: 4, Type: float
			constexpr auto _maxEnterCombatModeDelay = 0x3b8; // Size: 4, Type: float
			constexpr auto _distanceAtWhichToIgnoreEnterCombatModeDelay = 0x3bc; // Size: 4, Type: float
			constexpr auto _observingCurve = 0x3c0; // Size: 8, Type: struct UCurveVector*
			constexpr auto _observingCurvePeriod = 0x3c8; // Size: 4, Type: float
			constexpr auto _observingCurveMaxYaw = 0x3cc; // Size: 4, Type: float
			constexpr auto _observingCurveMaxPitch = 0x3d0; // Size: 4, Type: float
			constexpr auto _alertedSightSenseConfig = 0x3d8; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _alertedHearingSenseConfig = 0x3e0; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _alertedDamageSenseConfig = 0x3e8; // Size: 8, Type: struct UAISenseConfig_Damage*
			constexpr auto _stateMachineTickIntervalWhenInCombatState = 0x3f0; // Size: 4, Type: float
			constexpr auto _shouldAttack = 0x3f4; // Size: 1, Type: bool
			constexpr auto _shouldBackOffIfTooCloseToFoe = 0x3f5; // Size: 1, Type: bool
			constexpr auto _shouldPredictFoeLocation = 0x3f6; // Size: 1, Type: bool
			constexpr auto _foeLocationPredictionStrengthVsDistanceToFoe = 0x3f8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _attackDistance = 0x400; // Size: 4, Type: float
			constexpr auto _minNumConsecutiveInflictedMeleeHitsToIntimidate = 0x404; // Size: 4, Type: int32_t
			constexpr auto _maxNumConsecutiveInflictedMeleeHitsToIntimidate = 0x408; // Size: 4, Type: int32_t
			constexpr auto _minTimeBeforeFoeIsConsideredUnreachable = 0x40c; // Size: 4, Type: float
			constexpr auto _maxTimeBeforeFoeIsConsideredUnreachable = 0x410; // Size: 4, Type: float
			constexpr auto _minTimeSinceLastAttackWhileFoeIsInLineOfSightToIntimidate = 0x414; // Size: 4, Type: float
			constexpr auto _maxTimeSinceLastAttackWhileFoeIsInLineOfSightToIntimidate = 0x418; // Size: 4, Type: float
			constexpr auto _costOfJumpingInPathLength = 0x41c; // Size: 4, Type: float
			constexpr auto _minPathPointDistance = 0x420; // Size: 4, Type: float
			constexpr auto _detectionDelayTimerData = 0x424; // Size: 16, Type: struct FDetectionDelayTimerData
			constexpr auto _zombie = 0x438; // Size: 8, Type: struct AZombie2*
	}
} 
