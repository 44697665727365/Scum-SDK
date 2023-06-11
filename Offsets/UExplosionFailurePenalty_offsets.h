namespace offsets
{
	namespace UExplosionFailurePenalty
	{
			constexpr auto _explosionBaseDamage = 0x30; // Size: 4, Type: float
			constexpr auto _targetTypeMultiplier = 0x38; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _minimumDamage = 0x48; // Size: 4, Type: float
			constexpr auto _damageInnerRadius = 0x4c; // Size: 4, Type: float
			constexpr auto _damageOuterRadius = 0x50; // Size: 4, Type: float
			constexpr auto _damageFalloff = 0x54; // Size: 4, Type: float
			constexpr auto _explosionPS = 0x58; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionAudioEvent = 0x60; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
