namespace offsets
{
	namespace UIgnitableExplosiveItemComponent
	{
			constexpr auto _explosionDamage = 0x1a0; // Size: 4, Type: float
			constexpr auto _explosionOuterRadius = 0x1a4; // Size: 4, Type: float
			constexpr auto _explosionInnerRadius = 0x1a8; // Size: 4, Type: float
			constexpr auto _explosionFalloff = 0x1ac; // Size: 4, Type: float
			constexpr auto _explosionForce = 0x1b0; // Size: 4, Type: float
			constexpr auto _targetTypeMultiplier = 0x1b8; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _explosionParticle = 0x1d0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionAudioEvent = 0x1d8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _explosionCameraShakeClass = 0x1e0; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto _hearingDamageRadius = 0x1e8; // Size: 4, Type: float
			constexpr auto _activeNetCullDistanceSquaredMeters = 0x1ec; // Size: 4, Type: float
			constexpr auto _canExplodeUnderwater = 0x1f0; // Size: 1, Type: bool
	}
} 
