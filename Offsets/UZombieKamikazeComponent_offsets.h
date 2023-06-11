namespace offsets
{
	namespace UZombieKamikazeComponent
	{
			constexpr auto _owningCharacter = 0xb0; // Size: 8, Type: struct AConZCharacter*
			constexpr auto _beepingDistance = 0xb8; // Size: 4, Type: float
			constexpr auto _explosionDistance = 0xbc; // Size: 4, Type: float
			constexpr auto _autoExplosionTime = 0xc0; // Size: 4, Type: float
			constexpr auto _postMortemExplosionTime = 0xc4; // Size: 4, Type: float
			constexpr auto _criticalPostMortemExplosionTime = 0xc8; // Size: 4, Type: float
			constexpr auto _baseDamage = 0xd0; // Size: 4, Type: float
			constexpr auto _minimumDamage = 0xd4; // Size: 4, Type: float
			constexpr auto _damageInnerRadius = 0xd8; // Size: 4, Type: float
			constexpr auto _damageOuterRadius = 0xdc; // Size: 4, Type: float
			constexpr auto _damageFalloff = 0xe0; // Size: 4, Type: float
			constexpr auto _targetTypeMultiplier = 0xe8; // Size: 16, Type: struct FTargetTypeDamageMultiplier
			constexpr auto _netCullDistanceSquaredMeters = 0xf8; // Size: 4, Type: float
			constexpr auto _explosionAudioEvent = 0x100; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _beepingStartAudioEvent = 0x108; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _beepingEndAudioEvent = 0x110; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _beepingAudioComponent = 0x118; // Size: 8, Type: struct UAkComponent*
			constexpr auto _explosionPS = 0x120; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _explosionCameraShakeClass = 0x128; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto _sootDecal = 0x130; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _minSootDecalSize = 0x138; // Size: 4, Type: float
			constexpr auto _maxSootDecalSize = 0x13c; // Size: 4, Type: float
			constexpr auto _minSootScalarParamValue = 0x140; // Size: 4, Type: float
			constexpr auto _maxSootScalarParamValue = 0x144; // Size: 4, Type: float
			constexpr auto _sootScalarParameterValueName = 0x148; // Size: 8, Type: struct FName
			constexpr auto _decalsLifeSpan = 0x150; // Size: 4, Type: float
			constexpr auto _decalFadeFactor = 0x154; // Size: 4, Type: float
			constexpr auto _maximumNumberOfChunksSpawned = 0x158; // Size: 4, Type: int32_t
			constexpr auto _minVelocityMagnitude = 0x15c; // Size: 4, Type: float
			constexpr auto _maxVelocityMagnitude = 0x160; // Size: 4, Type: float
			constexpr auto _velocityHalfAngle = 0x164; // Size: 4, Type: float
			constexpr auto _timeAfterChunksAreDeleted = 0x168; // Size: 4, Type: float
			constexpr auto _bodyPartChunks = 0x170; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto _minigameClass = 0x180; // Size: 8, Type: AMinigame*
			constexpr auto _minigameToolTag = 0x188; // Size: 8, Type: UBaseItemTag*
			constexpr auto _dummyTrapItemClass = 0x190; // Size: 8, Type: AZombieKamikazeDummyTrap*
			constexpr auto _spawnerPresets = 0x198; // Size: 16, Type: struct TArray<UItemSpawnerPreset*>
			constexpr auto _spawnerPresets2 = 0x1a8; // Size: 16, Type: struct TArray<UItemSpawnerPreset2*>
			constexpr auto _isCriticalPostMortemPhase = 0x1c2; // Size: 1, Type: bool
			constexpr auto _isDisarmed = 0x1c3; // Size: 1, Type: bool
			constexpr auto _shouldExplodeOnDeath = 0x1e0; // Size: 1, Type: bool
			constexpr auto _dummyTrapItemDestroyDelay = 0x1e4; // Size: 4, Type: float
	}
} 
