namespace offsets
{
	namespace AAmmunitionExplosiveArrow
	{
			constexpr auto _startBeepingEvent = 0x980; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _stopBeepingEvent = 0x988; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _startOfBeepingBeforeDetonation = 0x990; // Size: 4, Type: float
			constexpr auto _innerExplosionRadius = 0x994; // Size: 4, Type: float
			constexpr auto _outerExplosionRadius = 0x998; // Size: 4, Type: float
			constexpr auto _explosionBaseDamage = 0x99c; // Size: 4, Type: float
			constexpr auto _explosionMinDamage = 0x9a0; // Size: 4, Type: float
			constexpr auto _explosionDistanceFalloff = 0x9a4; // Size: 4, Type: float
			constexpr auto _explosionTimerTime = 0x9a8; // Size: 4, Type: float
			constexpr auto _explosionForce = 0x9ac; // Size: 4, Type: float
			constexpr auto _targetTypeMultiplier = 0x9b0; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _detonationPointSocketName = 0x9c0; // Size: 8, Type: struct FName
			constexpr auto _effectsActorClass = 0x9c8; // Size: 8, Type: AReplicatedExplosionEffectsActor*
			constexpr auto _shouldStartCountdown = 0x9e0; // Size: 1, Type: bool
	}
} 
