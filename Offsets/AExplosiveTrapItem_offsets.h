namespace offsets
{
	namespace AExplosiveTrapItem
	{
			constexpr auto _detonationDelay = 0xa60; // Size: 4, Type: float
			constexpr auto _trapForwardVector = 0xa64; // Size: 12, Type: struct FVector
			constexpr auto _netCullDistanceSquaredMeters = 0xa70; // Size: 4, Type: float
			constexpr auto _triggerSound = 0xa78; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _detonationSound = 0xa80; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _detonationParticles = 0xa88; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _detonationParticlesTransform = 0xa90; // Size: 48, Type: struct FTransform
			constexpr auto _hasPrimaryExplosion = 0xac0; // Size: 1, Type: bool
			constexpr auto _primaryBaseDamage = 0xac4; // Size: 4, Type: float
			constexpr auto _primaryMinimumDamage = 0xac8; // Size: 4, Type: float
			constexpr auto _primaryDamageInnerRadius = 0xacc; // Size: 4, Type: float
			constexpr auto _primaryDamageOuterRadius = 0xad0; // Size: 4, Type: float
			constexpr auto _primaryDamageMinAngleDeg = 0xad4; // Size: 4, Type: float
			constexpr auto _primaryDamageMaxAngleDeg = 0xad8; // Size: 4, Type: float
			constexpr auto _primaryDamageChanceMultiplier = 0xadc; // Size: 4, Type: float
			constexpr auto _primaryDamageMinChance = 0xae0; // Size: 4, Type: float
			constexpr auto _primaryDamageMaxChance = 0xae4; // Size: 4, Type: float
			constexpr auto _primaryDamageFalloff = 0xae8; // Size: 4, Type: float
			constexpr auto _primaryDamageAngleFalloff = 0xaec; // Size: 4, Type: float
			constexpr auto _primaryTargetTypeMultiplier = 0xaf0; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _hasSecondaryExplosion = 0xb00; // Size: 1, Type: bool
			constexpr auto _secondaryBaseDamage = 0xb04; // Size: 4, Type: float
			constexpr auto _secondaryMinimumDamage = 0xb08; // Size: 4, Type: float
			constexpr auto _secondaryDamageInnerRadius = 0xb0c; // Size: 4, Type: float
			constexpr auto _secondaryDamageOuterRadius = 0xb10; // Size: 4, Type: float
			constexpr auto _secondaryDamageFalloff = 0xb14; // Size: 4, Type: float
			constexpr auto _secondaryTargetTypeMultiplier = 0xb18; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _instantlyDestroysStructures = 0xb28; // Size: 1, Type: bool
			constexpr auto _structureDestructionRadius = 0xb2c; // Size: 4, Type: float
			constexpr auto _minimalElementAreaCovered = 0xb30; // Size: 4, Type: float
			constexpr auto _structureDestructionMinAngleDeg = 0xb34; // Size: 4, Type: float
			constexpr auto _structureDestructionMaxAngleDeg = 0xb38; // Size: 4, Type: float
			constexpr auto _explosionDamagePositionOffset = 0xb3c; // Size: 4, Type: float
			constexpr auto _explosionForce = 0xb40; // Size: 4, Type: float
	}
} 
