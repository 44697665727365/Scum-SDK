namespace offsets
{
	namespace AProjectileExplosive
	{
			constexpr auto _selfDestructTime = 0x438; // Size: 4, Type: float
			constexpr auto _explosionDamage = 0x43c; // Size: 4, Type: float
			constexpr auto _explosionInnerRadius = 0x440; // Size: 4, Type: float
			constexpr auto _explosionOuterRadius = 0x444; // Size: 4, Type: float
			constexpr auto _explosionFalloff = 0x448; // Size: 4, Type: float
			constexpr auto _explosionForce = 0x44c; // Size: 4, Type: float
			constexpr auto _hearingDamageRadius = 0x450; // Size: 4, Type: float
			constexpr auto _explosionParticle = 0x458; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionAudioEvent = 0x460; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _explosionCameraShakeClass = 0x468; // Size: 8, Type: UMatineeCameraShake*
	}
} 
