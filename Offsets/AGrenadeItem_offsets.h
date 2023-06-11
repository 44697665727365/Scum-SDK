namespace offsets
{
	namespace AGrenadeItem
	{
			constexpr auto _explosionDamage = 0x910; // Size: 4, Type: float
			constexpr auto _explosionOuterRadius = 0x914; // Size: 4, Type: float
			constexpr auto _explosionInnerRadius = 0x918; // Size: 4, Type: float
			constexpr auto _explosionFalloff = 0x91c; // Size: 4, Type: float
			constexpr auto _explosionDelay = 0x920; // Size: 4, Type: float
			constexpr auto _explosionForce = 0x924; // Size: 4, Type: float
			constexpr auto _explosionTargetTypeMultiplier = 0x928; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _explosionImpulse_OBSOLETE = 0x938; // Size: 4, Type: float
			constexpr auto _explosionParticle = 0x948; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionCameraShakeClass = 0x950; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto _hearingDamageRadius = 0x958; // Size: 4, Type: float
			constexpr auto ExplosionAudioEvent = 0x960; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _explosionAudioEvent = 0x968; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _pullPinAudioEvent = 0x970; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _skeletalMesh = 0x978; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto _grenadeLongThrowMontage = 0x980; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _grenadeLongThrowLoopMontage = 0x988; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _grenadeShortThrowMontage = 0x990; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _grenadeThrowbackMontage = 0x998; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _leverReleasedSocketName = 0x9a0; // Size: 8, Type: struct FName
			constexpr auto _leverReleasedPS = 0x9a8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _netCullDistanceSquaredMeters = 0x9b0; // Size: 4, Type: float
			constexpr auto _pinPulled = 0x9b4; // Size: 1, Type: bool
			constexpr auto _pinPullingDurationOnTheGround = 0x9b8; // Size: 4, Type: float
			constexpr auto _takeInHandsWhenPinIsPulledAssetData = 0x9c0; // Size: 8, Type: struct UTakeInHandsAssetData*
	}
} 
