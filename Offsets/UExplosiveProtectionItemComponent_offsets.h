namespace offsets
{
	namespace UExplosiveProtectionItemComponent
	{
			constexpr auto _minigameClass = 0xd0; // Size: 8, Type: AMinigame*
			constexpr auto _minigameToolTag = 0xd8; // Size: 8, Type: UBaseItemTag*
			constexpr auto _lockItem = 0xe0; // Size: 8, Type: struct ULockItemTag*
			constexpr auto _lockData = 0xe8; // Size: 8, Type: struct ULockData*
			constexpr auto _explosionParticles = 0xf0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionParticlesLocation = 0xf8; // Size: 12, Type: struct FVector
			constexpr auto _explosionAudioEvent = 0x108; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _explosionBaseDamage = 0x110; // Size: 4, Type: float
			constexpr auto _explosionMinimalDamage = 0x114; // Size: 4, Type: float
			constexpr auto _explosionDamagePositionOffset = 0x118; // Size: 4, Type: float
			constexpr auto _explosionDamageFalloff = 0x11c; // Size: 4, Type: float
			constexpr auto _explosionInnerRadius = 0x120; // Size: 4, Type: float
			constexpr auto _explosionOuterRadius = 0x124; // Size: 4, Type: float
			constexpr auto _targetTypeMultiplier = 0x128; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _hearingDamageRadius = 0x138; // Size: 4, Type: float
			constexpr auto _explosionCameraShakeClass = 0x140; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto _isArmed = 0x148; // Size: 1, Type: bool
	}
} 
