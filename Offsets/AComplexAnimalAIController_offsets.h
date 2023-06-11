namespace offsets
{
	namespace AComplexAnimalAIController
	{
			constexpr auto Agressivness = 0x328; // Size: 1, Type: uint8_t 
			constexpr auto SightIntimidateRadius = 0x32c; // Size: 4, Type: float
			constexpr auto SightAttackRadius = 0x330; // Size: 4, Type: float
			constexpr auto FoeChargeVelocity = 0x334; // Size: 4, Type: float
			constexpr auto ShouldForceChargeRotation = 0x338; // Size: 1, Type: bool
			constexpr auto AnimalVelocityThatMakesThisAnimalFlee = 0x33c; // Size: 4, Type: float
			constexpr auto FleeDistance = 0x340; // Size: 4, Type: float
			constexpr auto FleeTime = 0x344; // Size: 4, Type: float
			constexpr auto TrotTime = 0x348; // Size: 4, Type: float
			constexpr auto TimeToAttackWhenAggro = 0x34c; // Size: 4, Type: float
			constexpr auto TimeToQuitObserve = 0x350; // Size: 4, Type: float
			constexpr auto MinReactionTime = 0x354; // Size: 4, Type: float
			constexpr auto MaxReactionTime = 0x358; // Size: 4, Type: float
			constexpr auto MovingUpdateInterval = 0x35c; // Size: 4, Type: float
			constexpr auto AttackingUpdateInetrval = 0x360; // Size: 4, Type: float
			constexpr auto PathSegmentLength_OBSOLETE = 0x364; // Size: 4, Type: float
			constexpr auto MinPaceDuration_OBSOLETE = 0x368; // Size: 4, Type: float
			constexpr auto MaxNumWalks_OBSOLETE = 0x36c; // Size: 4, Type: int32_t
			constexpr auto MaxNumTrots_OBSOLETE = 0x370; // Size: 4, Type: int32_t
			constexpr auto PathDirectionCounterResetTime_OBOLETE = 0x374; // Size: 4, Type: float
			constexpr auto MoveSegmentLength = 0x378; // Size: 4, Type: float
			constexpr auto BackOffDistance = 0x37c; // Size: 4, Type: float
			constexpr auto AttackTrackingDistance = 0x380; // Size: 4, Type: float
			constexpr auto PredictionFactor = 0x384; // Size: 4, Type: float
			constexpr auto BackAndForthStuckCheck = 0x388; // Size: 1, Type: bool
			constexpr auto AttackAttempts = 0x389; // Size: 1, Type: char
			constexpr auto ActionChangedDelay = 0x38c; // Size: 4, Type: float
			constexpr auto CloseAttackRepeatDelay = 0x390; // Size: 4, Type: float
			constexpr auto AttackChainDelay = 0x394; // Size: 4, Type: float
			constexpr auto BlockedPathRetryAttempts = 0x398; // Size: 4, Type: int32_t
			constexpr auto DirectionLockTime = 0x39c; // Size: 4, Type: float
			constexpr auto MinWalkTimeDuringRoaming = 0x3a0; // Size: 4, Type: float
			constexpr auto MaxWalkTimeDuringRoaming = 0x3a4; // Size: 4, Type: float
			constexpr auto MinStandTimeDuringRoaming = 0x3a8; // Size: 4, Type: float
			constexpr auto MaxStandTimeDuringRoaming = 0x3ac; // Size: 4, Type: float
			constexpr auto IntimidateTime = 0x3b0; // Size: 4, Type: float
			constexpr auto IntimidateAnimationEndTime = 0x3b4; // Size: 4, Type: float
			constexpr auto AlertActionTime = 0x3b8; // Size: 4, Type: float
			constexpr auto AlertStartupTime = 0x3bc; // Size: 4, Type: float
			constexpr auto AlertAllowedAgainTime = 0x3c0; // Size: 4, Type: float
			constexpr auto DoNotDespawnTime = 0x3c4; // Size: 4, Type: float
			constexpr auto NormalAISenseSight = 0x3c8; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto NormalAISenseHearing = 0x3d0; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto RelaxedAISenseHearing = 0x3d8; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto AlertedAISenseHearing = 0x3e0; // Size: 8, Type: struct UAISenseConfig_Hearing*
			constexpr auto SleepAISenseSight = 0x3e8; // Size: 8, Type: struct UAISenseConfig_Sight*
			constexpr auto _animal = 0x3f0; // Size: 8, Type: struct AComplexAnimal2*
			constexpr auto _roamRadius = 0x470; // Size: 4, Type: float
			constexpr auto _healthPercentageToFlee = 0x474; // Size: 4, Type: float
			constexpr auto _damageMagnitudeHealthPercentageToFlee = 0x478; // Size: 4, Type: float
			constexpr auto _distanceFromFoeToStartIgnoring = 0x47c; // Size: 4, Type: float
	}
} 
