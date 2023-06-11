namespace offsets
{
	namespace AProjectile
	{
			constexpr auto StaticMesh = 0x220; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto RotationFollowsVelocity = 0x228; // Size: 1, Type: bool
			constexpr auto AddImpulseOnHit = 0x229; // Size: 1, Type: bool
			constexpr auto ImpulseMultiplier = 0x22c; // Size: 4, Type: float
			constexpr auto MaxImpulse = 0x230; // Size: 4, Type: float
			constexpr auto ImpactEffects = 0x238; // Size: 8, Type: struct UProjectileImpactEffects*
			constexpr auto ProjectileData = 0x240; // Size: 96, Type: struct FProjectileData
			constexpr auto MeshScaleStartLocal = 0x2a0; // Size: 4, Type: float
			constexpr auto MeshScaleRangeLocal = 0x2a4; // Size: 4, Type: float
			constexpr auto MeshScaleMinLocal = 0x2a8; // Size: 4, Type: float
			constexpr auto MeshScaleMaxLocal = 0x2ac; // Size: 4, Type: float
			constexpr auto MeshScaleStart = 0x2b0; // Size: 4, Type: float
			constexpr auto MeshScaleRange = 0x2b4; // Size: 4, Type: float
			constexpr auto MeshScaleMin = 0x2b8; // Size: 4, Type: float
			constexpr auto MeshScaleMax = 0x2bc; // Size: 4, Type: float
			constexpr auto TraceScaleMultiplier = 0x2c0; // Size: 4, Type: float
			constexpr auto GravityScale = 0x2c4; // Size: 4, Type: float
			constexpr auto Sharpness = 0x2c8; // Size: 4, Type: float
			constexpr auto FlyByAudioEvent = 0x2d0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ColorMaterialParameterName = 0x2d8; // Size: 8, Type: struct FName
			constexpr auto InitialColor = 0x2e0; // Size: 16, Type: struct FLinearColor
			constexpr auto FinalColor = 0x2f0; // Size: 16, Type: struct FLinearColor
			constexpr auto MaxHitCount = 0x300; // Size: 4, Type: int32_t
			constexpr auto NoiseLoudnessOnHit = 0x304; // Size: 4, Type: float
			constexpr auto IgnoreCallingWeaponsFiringEffects = 0x308; // Size: 1, Type: bool
			constexpr auto ExperienceMultiplier = 0x30c; // Size: 4, Type: float
			constexpr auto ShouldForceStopWhenNoVelocity = 0x310; // Size: 1, Type: bool
			constexpr auto CanEverCollide = 0x311; // Size: 1, Type: bool
			constexpr auto TrailNiagaraSystem = 0x318; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto WaterSplashParticleSystem = 0x320; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _lifeSpanAfterStopping = 0x340; // Size: 4, Type: float
			constexpr auto _useFixedTimestep = 0x344; // Size: 1, Type: bool
			constexpr auto _fixedTimestep = 0x348; // Size: 4, Type: float
			constexpr auto _zeroRange = 0x364; // Size: 4, Type: int32_t
			constexpr auto _windage = 0x368; // Size: 4, Type: float
			constexpr auto _distanceTraveled = 0x36c; // Size: 4, Type: float
			constexpr auto _meshScaleFactor = 0x370; // Size: 4, Type: float
			constexpr auto _offsetFromBarrel = 0x394; // Size: 4, Type: float
			constexpr auto _randomSeed = 0x39c; // Size: 4, Type: int32_t
			constexpr auto _trailNiagaraComponent = 0x3f0; // Size: 8, Type: struct UNiagaraComponent*
			constexpr auto _doNotForceInitialReplication = 0x3f8; // Size: 1, Type: bool
			constexpr auto _muzzleVelocity = 0x3fc; // Size: 4, Type: float
			constexpr auto _createdOnServer = 0x400; // Size: 1, Type: bool
			constexpr auto _halfAngle = 0x404; // Size: 4, Type: float
			constexpr auto _weaponFiringModeWhenShot = 0x428; // Size: 1, Type: uint8_t 
			constexpr auto _firedShotDescriptionRep = 0x430; // Size: 4, Type: struct FFiredShotDescriptionRep
	}
} 
