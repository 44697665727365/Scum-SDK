namespace offsets
{
	namespace AZombie2
	{
			constexpr auto _enableBaseInteraction = 0x7b8; // Size: 1, Type: bool
			constexpr auto _navigationInvokerComponent = 0x7c0; // Size: 8, Type: struct UNavigationInvokerComponent*
			constexpr auto _hitReactComponent = 0x7c8; // Size: 8, Type: struct UHitReactComponent*
			constexpr auto _baseInteractionComponent = 0x7d0; // Size: 8, Type: struct UBaseInteractionComponent*
			constexpr auto _meshVariations = 0x7d8; // Size: 16, Type: struct TArray<struct FZombieMeshVariation2>
			constexpr auto _relaxedStanceVariations = 0x7e8; // Size: 16, Type: struct TArray<struct FZombieRelaxedStanceVariation2>
			constexpr auto _combatStanceVariations = 0x7f8; // Size: 16, Type: struct TArray<struct FZombieCombatStanceVariation2>
			constexpr auto _turnMontageDescriptions[4] = 0x808; // Size: 160, Type: struct FZombieTurnMontageDescription
			constexpr auto _gettingUpMontage = 0x8a8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _intimidateMontages = 0x8b0; // Size: 16, Type: struct TArray<struct UAnimMontage*>
			constexpr auto _attacks = 0x8c0; // Size: 16, Type: struct TArray<struct FZombieAttackDescription>
			constexpr auto _hitReactType = 0x8d0; // Size: 8, Type: struct FGameplayTag
			constexpr auto _explosionDamageMultiplier = 0x8d8; // Size: 4, Type: float
			constexpr auto _ragdollHitImpulseStrengthPerUnitDamage = 0x8dc; // Size: 4, Type: float
			constexpr auto _minDynamicMovementBaseSpeedForRagdoll = 0x8e0; // Size: 4, Type: float
			constexpr auto _eyeViewPointOffset = 0x8e4; // Size: 4, Type: float
			constexpr auto _centralBone = 0x8e8; // Size: 8, Type: struct FName
			constexpr auto _collisionDamageMultiplierPerBodyPart[c] = 0x8f0; // Size: 48, Type: float
			constexpr auto _receivedDamageComboCooldown = 0x920; // Size: 4, Type: float
			constexpr auto _receivedMeleeHitComboCooldown = 0x924; // Size: 4, Type: float
			constexpr auto _inflictedMeleeHitComboCooldown = 0x928; // Size: 4, Type: float
			constexpr auto _minRagdollRecoveryTimeAfterKnockout = 0x92c; // Size: 4, Type: float
			constexpr auto _maxRagdollRecoveryTimeAfterKnockout = 0x930; // Size: 4, Type: float
			constexpr auto _minLandingImpactSpeedForDamage = 0x934; // Size: 4, Type: float
			constexpr auto _landingDamagePerImpactSpeed = 0x938; // Size: 4, Type: float
			constexpr auto _landingImpactSpeedForRagdoll = 0x93c; // Size: 4, Type: float
			constexpr auto _minRagdollRecoveryTimeAfterLanding = 0x940; // Size: 4, Type: float
			constexpr auto _maxRagdollRecoveryTimeAfterLanding = 0x944; // Size: 4, Type: float
			constexpr auto _landingEffects = 0x948; // Size: 8, Type: struct ULandingEffects*
			constexpr auto _canEverBeSearched = 0x950; // Size: 1, Type: bool
			constexpr auto _shouldGoToRagdollOnDeath = 0x951; // Size: 1, Type: bool
			constexpr auto _deathParticles = 0x958; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _deathParticlesRelativeTransform = 0x960; // Size: 48, Type: struct FTransform
			constexpr auto _corpseSearchDuration = 0x990; // Size: 4, Type: float
			constexpr auto _corpseMaxLifeTimeInMinutes = 0x994; // Size: 4, Type: float
			constexpr auto _destroyCorpseTimerInterval = 0x998; // Size: 4, Type: float
			constexpr auto _minDistanceToPlayerPawnOrSpectatorToDestroyCorpse = 0x99c; // Size: 4, Type: float
			constexpr auto _packedZombieVariationIndices = 0x9a0; // Size: 4, Type: uint32_t
			constexpr auto _hitPoints = 0x9a4; // Size: 4, Type: float
			constexpr auto _inflictedMeleeDamageMultiplier = 0x9a8; // Size: 4, Type: float
			constexpr auto _health = 0x9ac; // Size: 4, Type: float
			constexpr auto _isSearched = 0x9b0; // Size: 1, Type: bool
			constexpr auto _stance = 0x9b2; // Size: 1, Type: uint8_t 
			constexpr auto _foe = 0x9b4; // Size: 8, Type: struct TWeakObjectPtr<APawn>
			constexpr auto _inflictedDamageMultiplierConfig = 0xa38; // Size: 4, Type: float
			constexpr auto _fatalBodyPartHit = 0xa3c; // Size: 1, Type: uint8_t 
			constexpr auto _drownDamageCycleLength = 0xa40; // Size: 4, Type: float
			constexpr auto _drownDamagePerCycle = 0xa44; // Size: 4, Type: float
	}
} 
