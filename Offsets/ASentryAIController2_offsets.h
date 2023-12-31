namespace offsets
{
	namespace ASentryAIController2
	{
			constexpr auto _canHear = 0x3e0; // Size: 1, Type: bool
			constexpr auto _canSee = 0x3e1; // Size: 1, Type: bool
			constexpr auto _currentSightSenseConfig = 0x3e8; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _currentHearingSenseConfig = 0x3f0; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _sightSenseConfigPatrolling = 0x3f8; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _sightSenseConfigAlerted = 0x400; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _sightSenseConfigCombat = 0x408; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _hearingSenseConfigPatrolling = 0x410; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _hearingSenseConfigAlerted = 0x418; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _hearingSenseConfigCombat = 0x420; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto _spottingTimeDecayMultiplier = 0x428; // Size: 4, Type: float
			constexpr auto _forgetKnownEnemyTime = 0x42c; // Size: 4, Type: float
			constexpr auto _noiseStimuliBeforeInstantlyLocatingCharacter = 0x430; // Size: 4, Type: int32_t
			constexpr auto _specialNoiseTags = 0x438; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto _timeUntilNoiseStimuliCounterReset = 0x448; // Size: 4, Type: float
			constexpr auto _threatLevelAccumulationMultiplier = 0x458; // Size: 4, Type: float
			constexpr auto _onHearNoiseThreatLevelIncrease = 0x45c; // Size: 4, Type: float
			constexpr auto _onDamageTakeThreatLevelIncrease = 0x460; // Size: 4, Type: float
			constexpr auto _switchTargetCharacterTime = 0x468; // Size: 4, Type: float
			constexpr auto _detectionDelayTimerData = 0x46c; // Size: 16, Type: struct FDetectionDelayTimerData
			constexpr auto _distanceWhenConsideredCharacterEnteredHotZone = 0x47c; // Size: 4, Type: float
			constexpr auto _maxDistanceWhenTemporaryPointIsConsideredTooClose = 0x480; // Size: 4, Type: float
			constexpr auto _temporaryPatrolPointVisitsUntilDeleted = 0x484; // Size: 4, Type: int32_t
			constexpr auto _checkSurroundingsTime = 0x48c; // Size: 4, Type: float
			constexpr auto _shouldRotateDuringCheck = 0x494; // Size: 1, Type: bool
			constexpr auto _checkSurroundingsAngle = 0x498; // Size: 4, Type: float
			constexpr auto _investigatingLocationOverallTime = 0x4a8; // Size: 4, Type: float
			constexpr auto _investigatingLocationTime = 0x4b0; // Size: 4, Type: float
			constexpr auto _investigatingBuildingTime = 0x4b8; // Size: 4, Type: float
			constexpr auto _guardLocationTime = 0x4e0; // Size: 4, Type: float
			constexpr auto _guardLocationSwitchFocusTime = 0x4e8; // Size: 4, Type: float
			constexpr auto _enemySpottedWarningTime = 0x510; // Size: 4, Type: float
			constexpr auto _maxTolerance = 0x518; // Size: 4, Type: float
			constexpr auto _enemySpottedOutOfSightTimeLimit = 0x520; // Size: 4, Type: float
			constexpr auto _distanceWhenConsideredCharacterLeavingHotZone = 0x52c; // Size: 4, Type: float
			constexpr auto _freezeCheckTime = 0x530; // Size: 4, Type: float
			constexpr auto _freezeCheckToleranceDrainMultiplier = 0x534; // Size: 4, Type: float
			constexpr auto _numberOfWarningShots = 0x538; // Size: 4, Type: int32_t
			constexpr auto _raiseHandsCheckTime = 0x540; // Size: 4, Type: float
			constexpr auto _raiseHandsCheckToleranceDrainMultiplier = 0x544; // Size: 4, Type: float
			constexpr auto _walkAwayCheckToleranceDrainMultiplier = 0x548; // Size: 4, Type: float
			constexpr auto _movingToHotZoneToleranceDrainMultiplier = 0x54c; // Size: 4, Type: float
			constexpr auto _minMovingToHotZoneRange = 0x550; // Size: 4, Type: float
			constexpr auto _otherToleranceDrainMultiplier = 0x554; // Size: 4, Type: float
			constexpr auto _minimumAlertedTime = 0x558; // Size: 4, Type: float
			constexpr auto _observeEnemyMovementTime = 0x560; // Size: 4, Type: float
			constexpr auto _observeEnemyMovementThreatLevelIncreasePerStateEntry = 0x568; // Size: 4, Type: float
			constexpr auto _observeEnemyMovementOpenFireThreshold = 0x56c; // Size: 4, Type: float
			constexpr auto _beginShootingTime = 0x57c; // Size: 4, Type: float
			constexpr auto _sentryCombatBehaviorModes = 0x588; // Size: 16, Type: struct TArray<struct FSentryCombatBehaviorMode>
			constexpr auto _combatBehaviorModeIncreaseTime = 0x59c; // Size: 4, Type: float
			constexpr auto _combatBehaviorModeTimeIncreasePerDamageTaken = 0x5a4; // Size: 4, Type: float
			constexpr auto _combatBehaviorModeDecreaseTime = 0x5a8; // Size: 4, Type: float
			constexpr auto _combatSwitchVariationTimeMin = 0x5b0; // Size: 4, Type: float
			constexpr auto _combatSwitchVariationTimeMax = 0x5b4; // Size: 4, Type: float
			constexpr auto _combatModeOnEnterCombatSwitchVariationTimeElapsedTimePercentage = 0x5c0; // Size: 4, Type: float
			constexpr auto _maxFireRateTime = 0x5c4; // Size: 4, Type: float
			constexpr auto _fireRateAccumulationSpeed = 0x5cc; // Size: 4, Type: float
			constexpr auto _startingHighFireRate = 0x5d0; // Size: 4, Type: float
			constexpr auto _highFireRateSpreadMultiplier = 0x5d4; // Size: 4, Type: float
			constexpr auto _highFireRateInitialAttackDelay = 0x5d8; // Size: 4, Type: float
			constexpr auto _highPrecisionShotAimTime = 0x5e0; // Size: 4, Type: float
			constexpr auto _highPrecisionShotCooldownTime = 0x5e4; // Size: 4, Type: float
			constexpr auto _grenadeLaunchMinDistance = 0x5e8; // Size: 4, Type: float
			constexpr auto _grenadeLaunchPredictionVariationMin = 0x5ec; // Size: 4, Type: float
			constexpr auto _grenadeLaunchPredictionVariationMax = 0x5f0; // Size: 4, Type: float
			constexpr auto _grenadeLaunchAimTime = 0x5f4; // Size: 4, Type: float
			constexpr auto _grenadeLaunchAmountMax = 0x5f8; // Size: 4, Type: int32_t
			constexpr auto _grenadeLaunchPauseBetweenShotsTime = 0x600; // Size: 4, Type: float
			constexpr auto _grenadeLaunchCooldownTime = 0x608; // Size: 4, Type: float
			constexpr auto _combatMoveCloserDistance = 0x610; // Size: 4, Type: float
			constexpr auto _combatDistance = 0x614; // Size: 4, Type: float
			constexpr auto _consecutiveMeleeAttacksNeededToDropGrenade = 0x624; // Size: 4, Type: int32_t
			constexpr auto _combatNoSightTime = 0x62c; // Size: 4, Type: float
			constexpr auto _searchForEnemyAfterLostStimulusTime = 0x630; // Size: 4, Type: float
			constexpr auto _combatLostSightInvestigateLocationTime = 0x634; // Size: 4, Type: float
			constexpr auto _distanceFromActorWhenInvestigationLocationIsChanged = 0x63c; // Size: 4, Type: float
			constexpr auto _relocatingAngle = 0x640; // Size: 4, Type: float
			constexpr auto _relocatingRadius = 0x644; // Size: 4, Type: float
			constexpr auto _destroyingVehicleGiveUpTime = 0x648; // Size: 4, Type: float
			constexpr auto _maximumOperatingRadius = 0x66c; // Size: 4, Type: float
			constexpr auto _movingAwayHalfAngleDegrees = 0x67c; // Size: 4, Type: float
			constexpr auto _movingTowardsHalfAngleDegrees = 0x680; // Size: 4, Type: float
			constexpr auto _acceptanceRadius = 0x684; // Size: 4, Type: float
			constexpr auto _timeToBeConsideredStuck = 0x698; // Size: 4, Type: float
			constexpr auto _rotationAngleCosToStartWalking = 0x6a4; // Size: 4, Type: float
	}
} 
